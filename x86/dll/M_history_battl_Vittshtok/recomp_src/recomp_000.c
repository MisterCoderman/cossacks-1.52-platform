#include "recomp.h"

/* thunk_FUN_10001a00 @ 0x12c01005 (5 bytes, 1 insns) */
void f_12c01005(void) {
  FTRACE(0x12c01005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01005 jmp 0x12c01a00 */
  f_12c01a00(); return;
}

/* OnInit @ 0x12c0100a (5 bytes, 1 insns) */
void f_12c0100a(void) {
  FTRACE(0x12c0100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0100a jmp 0x12c012a0 */
  f_12c012a0(); return;
}

/* thunk_FUN_10001140 @ 0x12c0100f (5 bytes, 1 insns) */
void f_12c0100f(void) {
  FTRACE(0x12c0100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0100f jmp 0x12c01140 */
  f_12c01140(); return;
}

/* thunk_FUN_10001a50 @ 0x12c01014 (5 bytes, 1 insns) */
void f_12c01014(void) {
  FTRACE(0x12c01014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01014 jmp 0x12c01a50 */
  f_12c01a50(); return;
}

/* thunk_FUN_10001060 @ 0x12c01019 (5 bytes, 1 insns) */
void f_12c01019(void) {
  FTRACE(0x12c01019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01019 jmp 0x12c01060 */
  f_12c01060(); return;
}

/* thunk_FUN_100011c0 @ 0x12c0101e (5 bytes, 1 insns) */
void f_12c0101e(void) {
  FTRACE(0x12c0101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0101e jmp 0x12c011c0 */
  f_12c011c0(); return;
}

/* thunk_FUN_100010c0 @ 0x12c01023 (5 bytes, 1 insns) */
void f_12c01023(void) {
  FTRACE(0x12c01023u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01023 jmp 0x12c010c0 */
  f_12c010c0(); return;
}

/* ProcessScenary @ 0x12c01028 (5 bytes, 1 insns) */
void f_12c01028(void) {
  FTRACE(0x12c01028u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01028 jmp 0x12c014a0 */
  f_12c014a0(); return;
}

/* thunk_FUN_10001230 @ 0x12c0102d (5 bytes, 1 insns) */
void f_12c0102d(void) {
  FTRACE(0x12c0102du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c0102d jmp 0x12c01230 */
  f_12c01230(); return;
}

/* FUN_10001060 @ 0x12c01060 (67 bytes, 26 insns) */
void f_12c01060(void) {
  FTRACE(0x12c01060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01060 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01061 mov ebp, esp */
  EBP = (ESP);
  /* 12c01063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01066 push ebx */
  push32((uint32_t)(EBX));
  /* 12c01067 push esi */
  push32((uint32_t)(ESI));
  /* 12c01068 push edi */
  push32((uint32_t)(EDI));
  /* 12c01069 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12c0106c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12c01071 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c01076 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0107b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0107e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01082 je 0x12c01086 */
  if (C.zf) goto L_12c01086;
  /* 12c01084 jmp 0x12c0108b */
  goto L_12c0108b;
L_12c01086:;
  /* 12c01086 call 0x12c0100a */
  push32(0x12c0108bu); f_12c0100a();
L_12c0108b:;
  /* 12c0108b mov eax, 1 */
  EAX = (0x1u);
  /* 12c01090 pop edi */
  EDI = (pop32());
  /* 12c01091 pop esi */
  ESI = (pop32());
  /* 12c01092 pop ebx */
  EBX = (pop32());
  /* 12c01093 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01096 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01098 call 0x12c01b10 */
  push32(0x12c0109du); f_12c01b10();
  /* 12c0109d mov esp, ebp */
  ESP = (EBP);
  /* 12c0109f pop ebp */
  EBP = (pop32());
  /* 12c010a0 ret 0xc */
  ESPCHK(0x12c01060u, _esp0);
  ESP += 16; return;
}

/* FUN_100010c0 @ 0x12c010c0 (92 bytes, 34 insns) */
void f_12c010c0(void) {
  FTRACE(0x12c010c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c010c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c010c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c010c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c010c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c010c7 push esi */
  push32((uint32_t)(ESI));
  /* 12c010c8 push edi */
  push32((uint32_t)(EDI));
  /* 12c010c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c010cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c010d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c010d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c010d8 mov esi, esp */
  ESI = (ESP);
  /* 12c010da call dword ptr [0x12c303fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303fc))), 0x12c010e0u);
  /* 12c010e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c010e2 call 0x12c01b10 */
  push32(0x12c010e7u); f_12c01b10();
  /* 12c010e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c010e9 jne 0x12c010fc */
  if (!C.zf) goto L_12c010fc;
  /* 12c010eb mov esi, esp */
  ESI = (ESP);
  /* 12c010ed call dword ptr [0x12c30400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30400))), 0x12c010f3u);
  /* 12c010f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c010f5 call 0x12c01b10 */
  push32(0x12c010fau); f_12c01b10();
  /* 12c010fa jmp 0x12c0110b */
  goto L_12c0110b;
L_12c010fc:;
  /* 12c010fc mov esi, esp */
  ESI = (ESP);
  /* 12c010fe call dword ptr [0x12c303f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f8))), 0x12c01104u);
  /* 12c01104 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01106 call 0x12c01b10 */
  push32(0x12c0110bu); f_12c01b10();
L_12c0110b:;
  /* 12c0110b pop edi */
  EDI = (pop32());
  /* 12c0110c pop esi */
  ESI = (pop32());
  /* 12c0110d pop ebx */
  EBX = (pop32());
  /* 12c0110e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01111 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01113 call 0x12c01b10 */
  push32(0x12c01118u); f_12c01b10();
  /* 12c01118 mov esp, ebp */
  ESP = (EBP);
  /* 12c0111a pop ebp */
  EBP = (pop32());
  /* 12c0111b ret  */
  ESPCHK(0x12c010c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001140 @ 0x12c01140 (93 bytes, 34 insns) */
void f_12c01140(void) {
  FTRACE(0x12c01140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01140 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01141 mov ebp, esp */
  EBP = (ESP);
  /* 12c01143 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01146 push ebx */
  push32((uint32_t)(EBX));
  /* 12c01147 push esi */
  push32((uint32_t)(ESI));
  /* 12c01148 push edi */
  push32((uint32_t)(EDI));
  /* 12c01149 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c0114c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c01151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c01156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01158 mov esi, esp */
  ESI = (ESP);
  /* 12c0115a call dword ptr [0x12c303fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303fc))), 0x12c01160u);
  /* 12c01160 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01162 call 0x12c01b10 */
  push32(0x12c01167u); f_12c01b10();
  /* 12c01167 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0116a jne 0x12c0117d */
  if (!C.zf) goto L_12c0117d;
  /* 12c0116c mov esi, esp */
  ESI = (ESP);
  /* 12c0116e call dword ptr [0x12c30400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30400))), 0x12c01174u);
  /* 12c01174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01176 call 0x12c01b10 */
  push32(0x12c0117bu); f_12c01b10();
  /* 12c0117b jmp 0x12c0118c */
  goto L_12c0118c;
L_12c0117d:;
  /* 12c0117d mov esi, esp */
  ESI = (ESP);
  /* 12c0117f call dword ptr [0x12c303f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f8))), 0x12c01185u);
  /* 12c01185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01187 call 0x12c01b10 */
  push32(0x12c0118cu); f_12c01b10();
L_12c0118c:;
  /* 12c0118c pop edi */
  EDI = (pop32());
  /* 12c0118d pop esi */
  ESI = (pop32());
  /* 12c0118e pop ebx */
  EBX = (pop32());
  /* 12c0118f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01192 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01194 call 0x12c01b10 */
  push32(0x12c01199u); f_12c01b10();
  /* 12c01199 mov esp, ebp */
  ESP = (EBP);
  /* 12c0119b pop ebp */
  EBP = (pop32());
  /* 12c0119c ret  */
  ESPCHK(0x12c01140u, _esp0);
  ESP += 4; return;
}

/* FUN_100011c0 @ 0x12c011c0 (90 bytes, 34 insns) */
void f_12c011c0(void) {
  FTRACE(0x12c011c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c011c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c011c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c011c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c011c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c011c7 push esi */
  push32((uint32_t)(ESI));
  /* 12c011c8 push edi */
  push32((uint32_t)(EDI));
  /* 12c011c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c011cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c011d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c011d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c011d8 mov esi, esp */
  ESI = (ESP);
  /* 12c011da push 0 */
  push32((uint32_t)(0x0u));
  /* 12c011dc push 5 */
  push32((uint32_t)(0x5u));
  /* 12c011de push 0 */
  push32((uint32_t)(0x0u));
  /* 12c011e0 call dword ptr [0x12c303f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f4))), 0x12c011e6u);
  /* 12c011e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c011e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c011eb call 0x12c01b10 */
  push32(0x12c011f0u); f_12c01b10();
  /* 12c011f0 mov esi, esp */
  ESI = (ESP);
  /* 12c011f2 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c011f4 push 0x12c2901c */
  push32((uint32_t)(0x12c2901cu));
  /* 12c011f9 call dword ptr [0x12c303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303ec))), 0x12c011ffu);
  /* 12c011ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01204 call 0x12c01b10 */
  push32(0x12c01209u); f_12c01b10();
  /* 12c01209 pop edi */
  EDI = (pop32());
  /* 12c0120a pop esi */
  ESI = (pop32());
  /* 12c0120b pop ebx */
  EBX = (pop32());
  /* 12c0120c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0120f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01211 call 0x12c01b10 */
  push32(0x12c01216u); f_12c01b10();
  /* 12c01216 mov esp, ebp */
  ESP = (EBP);
  /* 12c01218 pop ebp */
  EBP = (pop32());
  /* 12c01219 ret  */
  ESPCHK(0x12c011c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001230 @ 0x12c01230 (90 bytes, 34 insns) */
void f_12c01230(void) {
  FTRACE(0x12c01230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01230 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01231 mov ebp, esp */
  EBP = (ESP);
  /* 12c01233 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01236 push ebx */
  push32((uint32_t)(EBX));
  /* 12c01237 push esi */
  push32((uint32_t)(ESI));
  /* 12c01238 push edi */
  push32((uint32_t)(EDI));
  /* 12c01239 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c0123c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c01241 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c01246 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01248 mov esi, esp */
  ESI = (ESP);
  /* 12c0124a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0124c push 5 */
  push32((uint32_t)(0x5u));
  /* 12c0124e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c01250 call dword ptr [0x12c303f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f4))), 0x12c01256u);
  /* 12c01256 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0125b call 0x12c01b10 */
  push32(0x12c01260u); f_12c01b10();
  /* 12c01260 mov esi, esp */
  ESI = (ESP);
  /* 12c01262 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c01264 push 0x12c29024 */
  push32((uint32_t)(0x12c29024u));
  /* 12c01269 call dword ptr [0x12c303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303ec))), 0x12c0126fu);
  /* 12c0126f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01274 call 0x12c01b10 */
  push32(0x12c01279u); f_12c01b10();
  /* 12c01279 pop edi */
  EDI = (pop32());
  /* 12c0127a pop esi */
  ESI = (pop32());
  /* 12c0127b pop ebx */
  EBX = (pop32());
  /* 12c0127c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0127f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01281 call 0x12c01b10 */
  push32(0x12c01286u); f_12c01b10();
  /* 12c01286 mov esp, ebp */
  ESP = (EBP);
  /* 12c01288 pop ebp */
  EBP = (pop32());
  /* 12c01289 ret  */
  ESPCHK(0x12c01230u, _esp0);
  ESP += 4; return;
}

/* FUN_100012a0 @ 0x12c012a0 (401 bytes, 108 insns) */
void f_12c012a0(void) {
  FTRACE(0x12c012a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c012a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c012a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c012a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c012a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c012a7 push esi */
  push32((uint32_t)(ESI));
  /* 12c012a8 push edi */
  push32((uint32_t)(EDI));
  /* 12c012a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c012ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c012b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c012b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c012b8 mov esi, esp */
  ESI = (ESP);
  /* 12c012ba push 0x12c2906c */
  push32((uint32_t)(0x12c2906cu));
  /* 12c012bf push 0x12c2e428 */
  push32((uint32_t)(0x12c2e428u));
  /* 12c012c4 call dword ptr [0x12c303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e4))), 0x12c012cau);
  /* 12c012ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c012cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c012cf call 0x12c01b10 */
  push32(0x12c012d4u); f_12c01b10();
  /* 12c012d4 mov esi, esp */
  ESI = (ESP);
  /* 12c012d6 push 0x12c29064 */
  push32((uint32_t)(0x12c29064u));
  /* 12c012db push 0x12c2e430 */
  push32((uint32_t)(0x12c2e430u));
  /* 12c012e0 call dword ptr [0x12c303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e4))), 0x12c012e6u);
  /* 12c012e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c012e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c012eb call 0x12c01b10 */
  push32(0x12c012f0u); f_12c01b10();
  /* 12c012f0 mov esi, esp */
  ESI = (ESP);
  /* 12c012f2 push 0x12c2905c */
  push32((uint32_t)(0x12c2905cu));
  /* 12c012f7 push 0x12c2e438 */
  push32((uint32_t)(0x12c2e438u));
  /* 12c012fc call dword ptr [0x12c303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e4))), 0x12c01302u);
  /* 12c01302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01307 call 0x12c01b10 */
  push32(0x12c0130cu); f_12c01b10();
  /* 12c0130c mov esi, esp */
  ESI = (ESP);
  /* 12c0130e push 0x12c29054 */
  push32((uint32_t)(0x12c29054u));
  /* 12c01313 push 0x12c2e440 */
  push32((uint32_t)(0x12c2e440u));
  /* 12c01318 call dword ptr [0x12c303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e4))), 0x12c0131eu);
  /* 12c0131e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01323 call 0x12c01b10 */
  push32(0x12c01328u); f_12c01b10();
  /* 12c01328 mov esi, esp */
  ESI = (ESP);
  /* 12c0132a push 0x12c2904c */
  push32((uint32_t)(0x12c2904cu));
  /* 12c0132f push 0x12c2e448 */
  push32((uint32_t)(0x12c2e448u));
  /* 12c01334 call dword ptr [0x12c303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e4))), 0x12c0133au);
  /* 12c0133a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0133d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0133f call 0x12c01b10 */
  push32(0x12c01344u); f_12c01b10();
  /* 12c01344 mov esi, esp */
  ESI = (ESP);
  /* 12c01346 push 0x12c2903c */
  push32((uint32_t)(0x12c2903cu));
  /* 12c0134b push 0x12c2e420 */
  push32((uint32_t)(0x12c2e420u));
  /* 12c01350 call dword ptr [0x12c303e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e8))), 0x12c01356u);
  /* 12c01356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0135b call 0x12c01b10 */
  push32(0x12c01360u); f_12c01b10();
  /* 12c01360 mov esi, esp */
  ESI = (ESP);
  /* 12c01362 push 0x12c29034 */
  push32((uint32_t)(0x12c29034u));
  /* 12c01367 push 0x12c2e410 */
  push32((uint32_t)(0x12c2e410u));
  /* 12c0136c call dword ptr [0x12c303e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e0))), 0x12c01372u);
  /* 12c01372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01377 call 0x12c01b10 */
  push32(0x12c0137cu); f_12c01b10();
  /* 12c0137c mov esi, esp */
  ESI = (ESP);
  /* 12c0137e push 0x12c2902c */
  push32((uint32_t)(0x12c2902cu));
  /* 12c01383 push 0x12c2e418 */
  push32((uint32_t)(0x12c2e418u));
  /* 12c01388 call dword ptr [0x12c303e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303e0))), 0x12c0138eu);
  /* 12c0138e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01391 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01393 call 0x12c01b10 */
  push32(0x12c01398u); f_12c01b10();
  /* 12c01398 mov esi, esp */
  ESI = (ESP);
  /* 12c0139a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0139c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0139e call dword ptr [0x12c303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f0))), 0x12c013a4u);
  /* 12c013a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c013a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c013a9 call 0x12c01b10 */
  push32(0x12c013aeu); f_12c01b10();
  /* 12c013ae mov esi, esp */
  ESI = (ESP);
  /* 12c013b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c013b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c013b4 call dword ptr [0x12c303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f0))), 0x12c013bau);
  /* 12c013ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c013bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c013bf call 0x12c01b10 */
  push32(0x12c013c4u); f_12c01b10();
  /* 12c013c4 mov esi, esp */
  ESI = (ESP);
  /* 12c013c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 12c013c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c013ca call dword ptr [0x12c303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303f0))), 0x12c013d0u);
  /* 12c013d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c013d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c013d5 call 0x12c01b10 */
  push32(0x12c013dau); f_12c01b10();
  /* 12c013da mov dword ptr [0x12c2e3e0], 0 */
  w32((uint32_t)(0x12c2e3e0), (0x0u));
  /* 12c013e4 jmp 0x12c013f3 */
  goto L_12c013f3;
L_12c013e6:;
  /* 12c013e6 mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c013eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c013ee mov dword ptr [0x12c2e3e0], eax */
  w32((uint32_t)(0x12c2e3e0), (EAX));
L_12c013f3:;
  /* 12c013f3 cmp dword ptr [0x12c2e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c013fa jge 0x12c01420 */
  if ((C.sf==C.of)) goto L_12c01420;
  /* 12c013fc mov ecx, dword ptr [0x12c2e3e0] */
  ECX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c01402 mov dword ptr [ecx*4 + 0x12c2e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12c2e3e4), (0x0u));
  /* 12c0140d mov edx, dword ptr [0x12c2e3e0] */
  EDX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c01413 mov dword ptr [edx*4 + 0x12c2e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12c2e3f8), (0x0u));
  /* 12c0141e jmp 0x12c013e6 */
  goto L_12c013e6;
L_12c01420:;
  /* 12c01420 pop edi */
  EDI = (pop32());
  /* 12c01421 pop esi */
  ESI = (pop32());
  /* 12c01422 pop ebx */
  EBX = (pop32());
  /* 12c01423 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01426 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01428 call 0x12c01b10 */
  push32(0x12c0142du); f_12c01b10();
  /* 12c0142d mov esp, ebp */
  ESP = (EBP);
  /* 12c0142f pop ebp */
  EBP = (pop32());
  /* 12c01430 ret  */
  ESPCHK(0x12c012a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x12c014a0 (1093 bytes, 298 insns) */
void f_12c014a0(void) {
  FTRACE(0x12c014a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c014a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c014a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c014a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c014a6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c014a7 push esi */
  push32((uint32_t)(ESI));
  /* 12c014a8 push edi */
  push32((uint32_t)(EDI));
  /* 12c014a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c014ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c014b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c014b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c014b8 mov esi, esp */
  ESI = (ESP);
  /* 12c014ba push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c014bf call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c014c5u);
  /* 12c014c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c014c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c014ca call 0x12c01b10 */
  push32(0x12c014cfu); f_12c01b10();
  /* 12c014cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c014d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c014d6 je 0x12c01507 */
  if (C.zf) goto L_12c01507;
  /* 12c014d8 mov esi, esp */
  ESI = (ESP);
  /* 12c014da push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c014dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c014de call dword ptr [0x12c303d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303d0))), 0x12c014e4u);
  /* 12c014e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c014e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c014e9 call 0x12c01b10 */
  push32(0x12c014eeu); f_12c01b10();
  /* 12c014ee mov esi, esp */
  ESI = (ESP);
  /* 12c014f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c014f2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c014f7 call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c014fdu);
  /* 12c014fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01500 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01502 call 0x12c01b10 */
  push32(0x12c01507u); f_12c01b10();
L_12c01507:;
  /* 12c01507 mov esi, esp */
  ESI = (ESP);
  /* 12c01509 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0150b call dword ptr [0x12c303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303d8))), 0x12c01511u);
  /* 12c01511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01516 call 0x12c01b10 */
  push32(0x12c0151bu); f_12c01b10();
  /* 12c0151b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01520 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01522 jne 0x12c01529 */
  if (!C.zf) goto L_12c01529;
  /* 12c01524 jmp 0x12c018d4 */
  goto L_12c018d4;
L_12c01529:;
  /* 12c01529 mov dword ptr [0x12c2e3e0], 0 */
  w32((uint32_t)(0x12c2e3e0), (0x0u));
  /* 12c01533 jmp 0x12c01542 */
  goto L_12c01542;
L_12c01535:;
  /* 12c01535 mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c0153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0153d mov dword ptr [0x12c2e3e0], eax */
  w32((uint32_t)(0x12c2e3e0), (EAX));
L_12c01542:;
  /* 12c01542 cmp dword ptr [0x12c2e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01549 jge 0x12c0162c */
  if ((C.sf==C.of)) goto L_12c0162c;
  /* 12c0154f mov esi, esp */
  ESI = (ESP);
  /* 12c01551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c01553 mov ecx, dword ptr [0x12c2e3e0] */
  ECX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c01559 lea edx, [ecx*8 + 0x12c2e428] */
  EDX = ((uint32_t)(ECX*8 + 0x12c2e428));
  /* 12c01560 push edx */
  push32((uint32_t)(EDX));
  /* 12c01561 call dword ptr [0x12c303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303dc))), 0x12c01567u);
  /* 12c01567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0156a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0156c call 0x12c01b10 */
  push32(0x12c01571u); f_12c01b10();
  /* 12c01571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01573 jle 0x12c015bb */
  if ((C.zf||C.sf!=C.of)) goto L_12c015bb;
  /* 12c01575 mov esi, esp */
  ESI = (ESP);
  /* 12c01577 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c01579 mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c0157e lea ecx, [eax*8 + 0x12c2e428] */
  ECX = ((uint32_t)(EAX*8 + 0x12c2e428));
  /* 12c01585 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01586 call dword ptr [0x12c303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303dc))), 0x12c0158cu);
  /* 12c0158c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0158f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01591 call 0x12c01b10 */
  push32(0x12c01596u); f_12c01b10();
  /* 12c01596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01598 jne 0x12c015bb */
  if (!C.zf) goto L_12c015bb;
  /* 12c0159a mov edx, dword ptr [0x12c2e3e0] */
  EDX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c015a0 mov dword ptr [edx*4 + 0x12c2e3e4], 1 */
  w32((uint32_t)(EDX*4 + 0x12c2e3e4), (0x1u));
  /* 12c015ab mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c015b0 mov dword ptr [eax*4 + 0x12c2e3f8], 0 */
  w32((uint32_t)(EAX*4 + 0x12c2e3f8), (0x0u));
L_12c015bb:;
  /* 12c015bb mov esi, esp */
  ESI = (ESP);
  /* 12c015bd push 1 */
  push32((uint32_t)(0x1u));
  /* 12c015bf mov ecx, dword ptr [0x12c2e3e0] */
  ECX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c015c5 lea edx, [ecx*8 + 0x12c2e428] */
  EDX = ((uint32_t)(ECX*8 + 0x12c2e428));
  /* 12c015cc push edx */
  push32((uint32_t)(EDX));
  /* 12c015cd call dword ptr [0x12c303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303dc))), 0x12c015d3u);
  /* 12c015d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c015d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c015d8 call 0x12c01b10 */
  push32(0x12c015ddu); f_12c01b10();
  /* 12c015dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c015df jle 0x12c01627 */
  if ((C.zf||C.sf!=C.of)) goto L_12c01627;
  /* 12c015e1 mov esi, esp */
  ESI = (ESP);
  /* 12c015e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c015e5 mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c015ea lea ecx, [eax*8 + 0x12c2e428] */
  ECX = ((uint32_t)(EAX*8 + 0x12c2e428));
  /* 12c015f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c015f2 call dword ptr [0x12c303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303dc))), 0x12c015f8u);
  /* 12c015f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c015fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c015fd call 0x12c01b10 */
  push32(0x12c01602u); f_12c01b10();
  /* 12c01602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01604 jne 0x12c01627 */
  if (!C.zf) goto L_12c01627;
  /* 12c01606 mov edx, dword ptr [0x12c2e3e0] */
  EDX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c0160c mov dword ptr [edx*4 + 0x12c2e3e4], 0 */
  w32((uint32_t)(EDX*4 + 0x12c2e3e4), (0x0u));
  /* 12c01617 mov eax, dword ptr [0x12c2e3e0] */
  EAX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c0161c mov dword ptr [eax*4 + 0x12c2e3f8], 1 */
  w32((uint32_t)(EAX*4 + 0x12c2e3f8), (0x1u));
L_12c01627:;
  /* 12c01627 jmp 0x12c01535 */
  goto L_12c01535;
L_12c0162c:;
  /* 12c0162c mov dword ptr [0x12c2e450], 0 */
  w32((uint32_t)(0x12c2e450), (0x0u));
  /* 12c01636 mov dword ptr [0x12c2e454], 0 */
  w32((uint32_t)(0x12c2e454), (0x0u));
  /* 12c01640 mov dword ptr [0x12c2e3e0], 0 */
  w32((uint32_t)(0x12c2e3e0), (0x0u));
  /* 12c0164a jmp 0x12c0165b */
  goto L_12c0165b;
L_12c0164c:;
  /* 12c0164c mov ecx, dword ptr [0x12c2e3e0] */
  ECX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c01652 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01655 mov dword ptr [0x12c2e3e0], ecx */
  w32((uint32_t)(0x12c2e3e0), (ECX));
L_12c0165b:;
  /* 12c0165b cmp dword ptr [0x12c2e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01662 jge 0x12c01696 */
  if ((C.sf==C.of)) goto L_12c01696;
  /* 12c01664 mov edx, dword ptr [0x12c2e3e0] */
  EDX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c0166a mov eax, dword ptr [0x12c2e450] */
  EAX = (r32((uint32_t)(0x12c2e450)));
  /* 12c0166f add eax, dword ptr [edx*4 + 0x12c2e3e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12c2e3e4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01676 mov dword ptr [0x12c2e450], eax */
  w32((uint32_t)(0x12c2e450), (EAX));
  /* 12c0167b mov ecx, dword ptr [0x12c2e3e0] */
  ECX = (r32((uint32_t)(0x12c2e3e0)));
  /* 12c01681 mov edx, dword ptr [0x12c2e454] */
  EDX = (r32((uint32_t)(0x12c2e454)));
  /* 12c01687 add edx, dword ptr [ecx*4 + 0x12c2e3f8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x12c2e3f8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0168e mov dword ptr [0x12c2e454], edx */
  w32((uint32_t)(0x12c2e454), (EDX));
  /* 12c01694 jmp 0x12c0164c */
  goto L_12c0164c;
L_12c01696:;
  /* 12c01696 cmp dword ptr [0x12c2e450], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e450))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0169d jl 0x12c016a1 */
  if ((C.sf!=C.of)) goto L_12c016a1;
  /* 12c0169f jmp 0x12c016af */
  goto L_12c016af;
L_12c016a1:;
  /* 12c016a1 cmp dword ptr [0x12c2e454], 3 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e454))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c016a8 jl 0x12c016af */
  if ((C.sf!=C.of)) goto L_12c016af;
  /* 12c016aa call 0x12c0100f */
  push32(0x12c016afu); f_12c0100f();
L_12c016af:;
  /* 12c016af mov esi, esp */
  ESI = (ESP);
  /* 12c016b1 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c016b3 call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c016b9u);
  /* 12c016b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c016bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c016be call 0x12c01b10 */
  push32(0x12c016c3u); f_12c01b10();
  /* 12c016c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c016c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c016ca je 0x12c01714 */
  if (C.zf) goto L_12c01714;
  /* 12c016cc mov esi, esp */
  ESI = (ESP);
  /* 12c016ce call dword ptr [0x12c303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303d4))), 0x12c016d4u);
  /* 12c016d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c016d6 call 0x12c01b10 */
  push32(0x12c016dbu); f_12c01b10();
  /* 12c016db cmp eax, 0x109a0 */
  { uint32_t _a=(EAX),_b=(0x109a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c016e0 jle 0x12c01714 */
  if ((C.zf||C.sf!=C.of)) goto L_12c01714;
  /* 12c016e2 mov esi, esp */
  ESI = (ESP);
  /* 12c016e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c016e6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c016e8 call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c016eeu);
  /* 12c016ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c016f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c016f3 call 0x12c01b10 */
  push32(0x12c016f8u); f_12c01b10();
  /* 12c016f8 mov esi, esp */
  ESI = (ESP);
  /* 12c016fa push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12c016ff push 0x12c2907c */
  push32((uint32_t)(0x12c2907cu));
  /* 12c01704 call dword ptr [0x12c303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303ec))), 0x12c0170au);
  /* 12c0170a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0170d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0170f call 0x12c01b10 */
  push32(0x12c01714u); f_12c01b10();
L_12c01714:;
  /* 12c01714 mov esi, esp */
  ESI = (ESP);
  /* 12c01716 call dword ptr [0x12c303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303d4))), 0x12c0171cu);
  /* 12c0171c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0171e call 0x12c01b10 */
  push32(0x12c01723u); f_12c01b10();
  /* 12c01723 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01728 jle 0x12c0172f */
  if ((C.zf||C.sf!=C.of)) goto L_12c0172f;
  /* 12c0172a call 0x12c01023 */
  push32(0x12c0172fu); f_12c01023();
L_12c0172f:;
  /* 12c0172f mov esi, esp */
  ESI = (ESP);
  /* 12c01731 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c01733 call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c01739u);
  /* 12c01739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0173c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0173e call 0x12c01b10 */
  push32(0x12c01743u); f_12c01b10();
  /* 12c01743 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0174a je 0x12c017a1 */
  if (C.zf) goto L_12c017a1;
  /* 12c0174c push 0x12c2e410 */
  push32((uint32_t)(0x12c2e410u));
  /* 12c01751 call 0x12c01005 */
  push32(0x12c01756u); f_12c01005();
  /* 12c01756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01759 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0175c jge 0x12c017a1 */
  if ((C.sf==C.of)) goto L_12c017a1;
  /* 12c0175e mov esi, esp */
  ESI = (ESP);
  /* 12c01760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c01762 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12c01764 call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c0176au);
  /* 12c0176a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0176d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0176f call 0x12c01b10 */
  push32(0x12c01774u); f_12c01b10();
  /* 12c01774 mov esi, esp */
  ESI = (ESP);
  /* 12c01776 call dword ptr [0x12c303fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303fc))), 0x12c0177cu);
  /* 12c0177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0177e call 0x12c01b10 */
  push32(0x12c01783u); f_12c01b10();
  /* 12c01783 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01786 jne 0x12c017a1 */
  if (!C.zf) goto L_12c017a1;
  /* 12c01788 mov esi, esp */
  ESI = (ESP);
  /* 12c0178a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c0178c push 0x12c29074 */
  push32((uint32_t)(0x12c29074u));
  /* 12c01791 call dword ptr [0x12c303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303ec))), 0x12c01797u);
  /* 12c01797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0179a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0179c call 0x12c01b10 */
  push32(0x12c017a1u); f_12c01b10();
L_12c017a1:;
  /* 12c017a1 mov esi, esp */
  ESI = (ESP);
  /* 12c017a3 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c017a5 call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c017abu);
  /* 12c017ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c017ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c017b0 call 0x12c01b10 */
  push32(0x12c017b5u); f_12c01b10();
  /* 12c017b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c017ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c017bc je 0x12c01812 */
  if (C.zf) goto L_12c01812;
  /* 12c017be push 0x12c2e418 */
  push32((uint32_t)(0x12c2e418u));
  /* 12c017c3 call 0x12c01005 */
  push32(0x12c017c8u); f_12c01005();
  /* 12c017c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c017cb cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c017ce jge 0x12c01812 */
  if ((C.sf==C.of)) goto L_12c01812;
  /* 12c017d0 mov esi, esp */
  ESI = (ESP);
  /* 12c017d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c017d4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c017d6 call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c017dcu);
  /* 12c017dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c017df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c017e1 call 0x12c01b10 */
  push32(0x12c017e6u); f_12c01b10();
  /* 12c017e6 mov esi, esp */
  ESI = (ESP);
  /* 12c017e8 call dword ptr [0x12c303fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303fc))), 0x12c017eeu);
  /* 12c017ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c017f0 call 0x12c01b10 */
  push32(0x12c017f5u); f_12c01b10();
  /* 12c017f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c017f7 jne 0x12c01812 */
  if (!C.zf) goto L_12c01812;
  /* 12c017f9 mov esi, esp */
  ESI = (ESP);
  /* 12c017fb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c017fd push 0x12c29074 */
  push32((uint32_t)(0x12c29074u));
  /* 12c01802 call dword ptr [0x12c303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303ec))), 0x12c01808u);
  /* 12c01808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0180d call 0x12c01b10 */
  push32(0x12c01812u); f_12c01b10();
L_12c01812:;
  /* 12c01812 push 0x12c2e410 */
  push32((uint32_t)(0x12c2e410u));
  /* 12c01817 call 0x12c01005 */
  push32(0x12c0181cu); f_12c01005();
  /* 12c0181c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0181f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01821 jne 0x12c01828 */
  if (!C.zf) goto L_12c01828;
  /* 12c01823 call 0x12c0100f */
  push32(0x12c01828u); f_12c0100f();
L_12c01828:;
  /* 12c01828 push 0x12c2e418 */
  push32((uint32_t)(0x12c2e418u));
  /* 12c0182d call 0x12c01005 */
  push32(0x12c01832u); f_12c01005();
  /* 12c01832 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01837 jne 0x12c0183e */
  if (!C.zf) goto L_12c0183e;
  /* 12c01839 call 0x12c01023 */
  push32(0x12c0183eu); f_12c01023();
L_12c0183e:;
  /* 12c0183e mov esi, esp */
  ESI = (ESP);
  /* 12c01840 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c01842 call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c01848u);
  /* 12c01848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0184d call 0x12c01b10 */
  push32(0x12c01852u); f_12c01b10();
  /* 12c01852 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01857 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01859 je 0x12c01889 */
  if (C.zf) goto L_12c01889;
  /* 12c0185b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0185d push 0x12c2e420 */
  push32((uint32_t)(0x12c2e420u));
  /* 12c01862 call 0x12c01014 */
  push32(0x12c01867u); f_12c01014();
  /* 12c01867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0186a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0186c jne 0x12c01889 */
  if (!C.zf) goto L_12c01889;
  /* 12c0186e mov esi, esp */
  ESI = (ESP);
  /* 12c01870 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c01872 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12c01874 call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c0187au);
  /* 12c0187a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0187d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0187f call 0x12c01b10 */
  push32(0x12c01884u); f_12c01b10();
  /* 12c01884 call 0x12c0101e */
  push32(0x12c01889u); f_12c0101e();
L_12c01889:;
  /* 12c01889 mov esi, esp */
  ESI = (ESP);
  /* 12c0188b push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c0188d call dword ptr [0x12c303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303cc))), 0x12c01893u);
  /* 12c01893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01898 call 0x12c01b10 */
  push32(0x12c0189du); f_12c01b10();
  /* 12c0189d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c018a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c018a4 je 0x12c018d4 */
  if (C.zf) goto L_12c018d4;
  /* 12c018a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c018a8 push 0x12c2e420 */
  push32((uint32_t)(0x12c2e420u));
  /* 12c018ad call 0x12c01014 */
  push32(0x12c018b2u); f_12c01014();
  /* 12c018b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c018b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c018b7 jne 0x12c018d4 */
  if (!C.zf) goto L_12c018d4;
  /* 12c018b9 mov esi, esp */
  ESI = (ESP);
  /* 12c018bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c018bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12c018bf call dword ptr [0x12c303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c8))), 0x12c018c5u);
  /* 12c018c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c018c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c018ca call 0x12c01b10 */
  push32(0x12c018cfu); f_12c01b10();
  /* 12c018cf call 0x12c0102d */
  push32(0x12c018d4u); f_12c0102d();
L_12c018d4:;
  /* 12c018d4 pop edi */
  EDI = (pop32());
  /* 12c018d5 pop esi */
  ESI = (pop32());
  /* 12c018d6 pop ebx */
  EBX = (pop32());
  /* 12c018d7 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c018da cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c018dc call 0x12c01b10 */
  push32(0x12c018e1u); f_12c01b10();
  /* 12c018e1 mov esp, ebp */
  ESP = (EBP);
  /* 12c018e3 pop ebp */
  EBP = (pop32());
  /* 12c018e4 ret  */
  ESPCHK(0x12c014a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a00 @ 0x12c01a00 (63 bytes, 26 insns) */
void f_12c01a00(void) {
  FTRACE(0x12c01a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01a01 mov ebp, esp */
  EBP = (ESP);
  /* 12c01a03 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12c01a07 push esi */
  push32((uint32_t)(ESI));
  /* 12c01a08 push edi */
  push32((uint32_t)(EDI));
  /* 12c01a09 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c01a0c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c01a11 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c01a16 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01a18 mov esi, esp */
  ESI = (ESP);
  /* 12c01a1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01a1d push eax */
  push32((uint32_t)(EAX));
  /* 12c01a1e call dword ptr [0x12c303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c0))), 0x12c01a24u);
  /* 12c01a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01a29 call 0x12c01b10 */
  push32(0x12c01a2eu); f_12c01b10();
  /* 12c01a2e pop edi */
  EDI = (pop32());
  /* 12c01a2f pop esi */
  ESI = (pop32());
  /* 12c01a30 pop ebx */
  EBX = (pop32());
  /* 12c01a31 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01a34 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01a36 call 0x12c01b10 */
  push32(0x12c01a3bu); f_12c01b10();
  /* 12c01a3b mov esp, ebp */
  ESP = (EBP);
  /* 12c01a3d pop ebp */
  EBP = (pop32());
  /* 12c01a3e ret  */
  ESPCHK(0x12c01a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x12c01a50 (67 bytes, 28 insns) */
void f_12c01a50(void) {
  FTRACE(0x12c01a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01a51 mov ebp, esp */
  EBP = (ESP);
  /* 12c01a53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01a56 push ebx */
  push32((uint32_t)(EBX));
  /* 12c01a57 push esi */
  push32((uint32_t)(ESI));
  /* 12c01a58 push edi */
  push32((uint32_t)(EDI));
  /* 12c01a59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12c01a5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12c01a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12c01a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01a68 mov esi, esp */
  ESI = (ESP);
  /* 12c01a6a mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 12c01a6d push eax */
  push32((uint32_t)(EAX));
  /* 12c01a6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01a71 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01a72 call dword ptr [0x12c303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c303c4))), 0x12c01a78u);
  /* 12c01a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01a7d call 0x12c01b10 */
  push32(0x12c01a82u); f_12c01b10();
  /* 12c01a82 pop edi */
  EDI = (pop32());
  /* 12c01a83 pop esi */
  ESI = (pop32());
  /* 12c01a84 pop ebx */
  EBX = (pop32());
  /* 12c01a85 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01a88 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01a8a call 0x12c01b10 */
  push32(0x12c01a8fu); f_12c01b10();
  /* 12c01a8f mov esp, ebp */
  ESP = (EBP);
  /* 12c01a91 pop ebp */
  EBP = (pop32());
  /* 12c01a92 ret  */
  ESPCHK(0x12c01a50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12c01b10 (56 bytes, 28 insns) */
void f_12c01b10(void) {
  FTRACE(0x12c01b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01b10 jne 0x12c01b13 */
  if (!C.zf) goto L_12c01b13;
  /* 12c01b12 ret  */
  ESPCHK(0x12c01b10u, _esp0);
  ESP += 4; return;
L_12c01b13:;
  /* 12c01b13 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01b14 mov ebp, esp */
  EBP = (ESP);
  /* 12c01b16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01b19 push eax */
  push32((uint32_t)(EAX));
  /* 12c01b1a push edx */
  push32((uint32_t)(EDX));
  /* 12c01b1b push ebx */
  push32((uint32_t)(EBX));
  /* 12c01b1c push esi */
  push32((uint32_t)(ESI));
  /* 12c01b1d push edi */
  push32((uint32_t)(EDI));
  /* 12c01b1e push 0x12c29098 */
  push32((uint32_t)(0x12c29098u));
  /* 12c01b23 push 0x12c29094 */
  push32((uint32_t)(0x12c29094u));
  /* 12c01b28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12c01b2a push 0x12c29084 */
  push32((uint32_t)(0x12c29084u));
  /* 12c01b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c01b31 call 0x12c01ee0 */
  push32(0x12c01b36u); f_12c01ee0();
  /* 12c01b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01b3c jne 0x12c01b3f */
  if (!C.zf) goto L_12c01b3f;
  /* 12c01b3e int3  */
  x86_unimpl("int3 @ 0x12c01b3e");
L_12c01b3f:;
  /* 12c01b3f pop edi */
  EDI = (pop32());
  /* 12c01b40 pop esi */
  ESI = (pop32());
  /* 12c01b41 pop ebx */
  EBX = (pop32());
  /* 12c01b42 pop edx */
  EDX = (pop32());
  /* 12c01b43 pop eax */
  EAX = (pop32());
  /* 12c01b44 mov esp, ebp */
  ESP = (EBP);
  /* 12c01b46 pop ebp */
  EBP = (pop32());
  /* 12c01b47 ret  */
  ESPCHK(0x12c01b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x12c01b50 (313 bytes, 78 insns) */
void f_12c01b50(void) {
  FTRACE(0x12c01b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01b51 mov ebp, esp */
  EBP = (ESP);
  /* 12c01b53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01b57 jne 0x12c01c17 */
  if (!C.zf) goto L_12c01c17;
  /* 12c01b5d call dword ptr [0x12c30284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30284))), 0x12c01b63u);
  /* 12c01b63 mov dword ptr [0x12c2e490], eax */
  w32((uint32_t)(0x12c2e490), (EAX));
  /* 12c01b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c01b6a call 0x12c05610 */
  push32(0x12c01b6fu); f_12c05610();
  /* 12c01b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01b74 jne 0x12c01b7d */
  if (!C.zf) goto L_12c01b7d;
  /* 12c01b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01b78 jmp 0x12c01c85 */
  goto L_12c01c85;
L_12c01b7d:;
  /* 12c01b7d mov eax, dword ptr [0x12c2e490] */
  EAX = (r32((uint32_t)(0x12c2e490)));
  /* 12c01b82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12c01b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01b8a mov dword ptr [0x12c2e49c], eax */
  w32((uint32_t)(0x12c2e49c), (EAX));
  /* 12c01b8f mov ecx, dword ptr [0x12c2e490] */
  ECX = (r32((uint32_t)(0x12c2e490)));
  /* 12c01b95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c01b9b mov dword ptr [0x12c2e498], ecx */
  w32((uint32_t)(0x12c2e498), (ECX));
  /* 12c01ba1 mov edx, dword ptr [0x12c2e498] */
  EDX = (r32((uint32_t)(0x12c2e498)));
  /* 12c01ba7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12c01baa add edx, dword ptr [0x12c2e49c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2e49c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01bb0 mov dword ptr [0x12c2e494], edx */
  w32((uint32_t)(0x12c2e494), (EDX));
  /* 12c01bb6 mov eax, dword ptr [0x12c2e490] */
  EAX = (r32((uint32_t)(0x12c2e490)));
  /* 12c01bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c01bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01bc3 mov dword ptr [0x12c2e490], eax */
  w32((uint32_t)(0x12c2e490), (EAX));
  /* 12c01bc8 call 0x12c02780 */
  push32(0x12c01bcdu); f_12c02780();
  /* 12c01bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01bcf jne 0x12c01bdd */
  if (!C.zf) goto L_12c01bdd;
  /* 12c01bd1 call 0x12c05660 */
  push32(0x12c01bd6u); f_12c05660();
  /* 12c01bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01bd8 jmp 0x12c01c85 */
  goto L_12c01c85;
L_12c01bdd:;
  /* 12c01bdd call dword ptr [0x12c30280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30280))), 0x12c01be3u);
  /* 12c01be3 mov dword ptr [0x12c2ffcc], eax */
  w32((uint32_t)(0x12c2ffcc), (EAX));
  /* 12c01be8 call 0x12c053f0 */
  push32(0x12c01bedu); f_12c053f0();
  /* 12c01bed mov dword ptr [0x12c2e478], eax */
  w32((uint32_t)(0x12c2e478), (EAX));
  /* 12c01bf2 call 0x12c02a30 */
  push32(0x12c01bf7u); f_12c02a30();
  /* 12c01bf7 call 0x12c04ee0 */
  push32(0x12c01bfcu); f_12c04ee0();
  /* 12c01bfc call 0x12c04d90 */
  push32(0x12c01c01u); f_12c04d90();
  /* 12c01c01 call 0x12c02580 */
  push32(0x12c01c06u); f_12c02580();
  /* 12c01c06 mov ecx, dword ptr [0x12c2e474] */
  ECX = (r32((uint32_t)(0x12c2e474)));
  /* 12c01c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01c0f mov dword ptr [0x12c2e474], ecx */
  w32((uint32_t)(0x12c2e474), (ECX));
  /* 12c01c15 jmp 0x12c01c80 */
  goto L_12c01c80;
L_12c01c17:;
  /* 12c01c17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01c1b jne 0x12c01c70 */
  if (!C.zf) goto L_12c01c70;
  /* 12c01c1d cmp dword ptr [0x12c2e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01c24 jle 0x12c01c6a */
  if ((C.zf||C.sf!=C.of)) goto L_12c01c6a;
  /* 12c01c26 mov edx, dword ptr [0x12c2e474] */
  EDX = (r32((uint32_t)(0x12c2e474)));
  /* 12c01c2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c01c2f mov dword ptr [0x12c2e474], edx */
  w32((uint32_t)(0x12c2e474), (EDX));
  /* 12c01c35 cmp dword ptr [0x12c2e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01c3c jne 0x12c01c43 */
  if (!C.zf) goto L_12c01c43;
  /* 12c01c3e call 0x12c02600 */
  push32(0x12c01c43u); f_12c02600();
L_12c01c43:;
  /* 12c01c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c01c45 call 0x12c04330 */
  push32(0x12c01c4au); f_12c04330();
  /* 12c01c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01c4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c01c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01c52 je 0x12c01c59 */
  if (C.zf) goto L_12c01c59;
  /* 12c01c54 call 0x12c04c40 */
  push32(0x12c01c59u); f_12c04c40();
L_12c01c59:;
  /* 12c01c59 call 0x12c02d60 */
  push32(0x12c01c5eu); f_12c02d60();
  /* 12c01c5e call 0x12c02810 */
  push32(0x12c01c63u); f_12c02810();
  /* 12c01c63 call 0x12c05660 */
  push32(0x12c01c68u); f_12c05660();
  /* 12c01c68 jmp 0x12c01c6e */
  goto L_12c01c6e;
L_12c01c6a:;
  /* 12c01c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01c6c jmp 0x12c01c85 */
  goto L_12c01c85;
L_12c01c6e:;
  /* 12c01c6e jmp 0x12c01c80 */
  goto L_12c01c80;
L_12c01c70:;
  /* 12c01c70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01c74 jne 0x12c01c80 */
  if (!C.zf) goto L_12c01c80;
  /* 12c01c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c01c78 call 0x12c02900 */
  push32(0x12c01c7du); f_12c02900();
  /* 12c01c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c01c80:;
  /* 12c01c80 mov eax, 1 */
  EAX = (0x1u);
L_12c01c85:;
  /* 12c01c85 pop ebp */
  EBP = (pop32());
  /* 12c01c86 ret 0xc */
  ESPCHK(0x12c01b50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12c01c90 (243 bytes, 86 insns) */
void f_12c01c90(void) {
  FTRACE(0x12c01c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01c91 mov ebp, esp */
  EBP = (ESP);
  /* 12c01c93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c01c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01c9f jne 0x12c01cb1 */
  if (!C.zf) goto L_12c01cb1;
  /* 12c01ca1 cmp dword ptr [0x12c2e474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01ca8 jne 0x12c01cb1 */
  if (!C.zf) goto L_12c01cb1;
  /* 12c01caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01cac jmp 0x12c01d7d */
  goto L_12c01d7d;
L_12c01cb1:;
  /* 12c01cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01cb5 je 0x12c01cbd */
  if (C.zf) goto L_12c01cbd;
  /* 12c01cb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01cbb jne 0x12c01cff */
  if (!C.zf) goto L_12c01cff;
L_12c01cbd:;
  /* 12c01cbd cmp dword ptr [0x12c2ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01cc4 je 0x12c01cdb */
  if (C.zf) goto L_12c01cdb;
  /* 12c01cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01cc9 push eax */
  push32((uint32_t)(EAX));
  /* 12c01cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12c01cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12c01cd2 call dword ptr [0x12c2ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2ffdc))), 0x12c01cd8u);
  /* 12c01cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c01cdb:;
  /* 12c01cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01cdf je 0x12c01cf5 */
  if (C.zf) goto L_12c01cf5;
  /* 12c01ce1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01ce4 push eax */
  push32((uint32_t)(EAX));
  /* 12c01ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01cec push edx */
  push32((uint32_t)(EDX));
  /* 12c01ced call 0x12c01b50 */
  push32(0x12c01cf2u); f_12c01b50();
  /* 12c01cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c01cf5:;
  /* 12c01cf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01cf9 jne 0x12c01cff */
  if (!C.zf) goto L_12c01cff;
  /* 12c01cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01cfd jmp 0x12c01d7d */
  goto L_12c01d7d;
L_12c01cff:;
  /* 12c01cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01d02 push eax */
  push32((uint32_t)(EAX));
  /* 12c01d03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01d06 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01d0a push edx */
  push32((uint32_t)(EDX));
  /* 12c01d0b call 0x12c01019 */
  push32(0x12c01d10u); f_12c01019();
  /* 12c01d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c01d13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d17 jne 0x12c01d2e */
  if (!C.zf) goto L_12c01d2e;
  /* 12c01d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d1d jne 0x12c01d2e */
  if (!C.zf) goto L_12c01d2e;
  /* 12c01d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01d22 push eax */
  push32((uint32_t)(EAX));
  /* 12c01d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c01d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01d28 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01d29 call 0x12c01b50 */
  push32(0x12c01d2eu); f_12c01b50();
L_12c01d2e:;
  /* 12c01d2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d32 je 0x12c01d3a */
  if (C.zf) goto L_12c01d3a;
  /* 12c01d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d38 jne 0x12c01d7a */
  if (!C.zf) goto L_12c01d7a;
L_12c01d3a:;
  /* 12c01d3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01d3d push edx */
  push32((uint32_t)(EDX));
  /* 12c01d3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01d41 push eax */
  push32((uint32_t)(EAX));
  /* 12c01d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01d45 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01d46 call 0x12c01b50 */
  push32(0x12c01d4bu); f_12c01b50();
  /* 12c01d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01d4d jne 0x12c01d56 */
  if (!C.zf) goto L_12c01d56;
  /* 12c01d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c01d56:;
  /* 12c01d56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d5a je 0x12c01d7a */
  if (C.zf) goto L_12c01d7a;
  /* 12c01d5c cmp dword ptr [0x12c2ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d63 je 0x12c01d7a */
  if (C.zf) goto L_12c01d7a;
  /* 12c01d65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01d68 push edx */
  push32((uint32_t)(EDX));
  /* 12c01d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01d6c push eax */
  push32((uint32_t)(EAX));
  /* 12c01d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01d70 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01d71 call dword ptr [0x12c2ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2ffdc))), 0x12c01d77u);
  /* 12c01d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c01d7a:;
  /* 12c01d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c01d7d:;
  /* 12c01d7d mov esp, ebp */
  ESP = (EBP);
  /* 12c01d7f pop ebp */
  EBP = (pop32());
  /* 12c01d80 ret 0xc */
  ESPCHK(0x12c01c90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12c01d90 (58 bytes, 18 insns) */
void f_12c01d90(void) {
  FTRACE(0x12c01d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01d91 mov ebp, esp */
  EBP = (ESP);
  /* 12c01d93 cmp dword ptr [0x12c2e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01d9a je 0x12c01dae */
  if (C.zf) goto L_12c01dae;
  /* 12c01d9c cmp dword ptr [0x12c2e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01da3 jne 0x12c01db3 */
  if (!C.zf) goto L_12c01db3;
  /* 12c01da5 cmp dword ptr [0x12c2e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01dac jne 0x12c01db3 */
  if (!C.zf) goto L_12c01db3;
L_12c01dae:;
  /* 12c01dae call 0x12c05700 */
  push32(0x12c01db3u); f_12c05700();
L_12c01db3:;
  /* 12c01db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01db6 push eax */
  push32((uint32_t)(EAX));
  /* 12c01db7 call 0x12c05750 */
  push32(0x12c01dbcu); f_12c05750();
  /* 12c01dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01dbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c01dc4 call dword ptr [0x12c2ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2ca30))), 0x12c01dcau);
  /* 12c01dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01dcd pop ebp */
  EBP = (pop32());
  /* 12c01dce ret  */
  ESPCHK(0x12c01d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x12c01dd0 (11 bytes, 5 insns) */
void f_12c01dd0(void) {
  FTRACE(0x12c01dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c01dd3 call dword ptr [0x12c30288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30288))), 0x12c01dd9u);
  /* 12c01dd9 pop ebp */
  EBP = (pop32());
  /* 12c01dda ret  */
  ESPCHK(0x12c01dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001de0 @ 0x12c01de0 (87 bytes, 30 insns) */
void f_12c01de0(void) {
  FTRACE(0x12c01de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01de1 mov ebp, esp */
  EBP = (ESP);
  /* 12c01de3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01de8 jl 0x12c01df0 */
  if ((C.sf!=C.of)) goto L_12c01df0;
  /* 12c01dea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01dee jl 0x12c01df5 */
  if ((C.sf!=C.of)) goto L_12c01df5;
L_12c01df0:;
  /* 12c01df0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01df3 jmp 0x12c01e33 */
  goto L_12c01e33;
L_12c01df5:;
  /* 12c01df5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01df9 jne 0x12c01e07 */
  if (!C.zf) goto L_12c01e07;
  /* 12c01dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01dfe mov eax, dword ptr [eax*4 + 0x12c2ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c2ca38)));
  /* 12c01e05 jmp 0x12c01e33 */
  goto L_12c01e33;
L_12c01e07:;
  /* 12c01e07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01e0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12c01e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c01e0f je 0x12c01e16 */
  if (C.zf) goto L_12c01e16;
  /* 12c01e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01e14 jmp 0x12c01e33 */
  goto L_12c01e33;
L_12c01e16:;
  /* 12c01e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01e19 mov eax, dword ptr [edx*4 + 0x12c2ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2ca38)));
  /* 12c01e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c01e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01e26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01e29 mov dword ptr [ecx*4 + 0x12c2ca38], edx */
  w32((uint32_t)(ECX*4 + 0x12c2ca38), (EDX));
  /* 12c01e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c01e33:;
  /* 12c01e33 mov esp, ebp */
  ESP = (EBP);
  /* 12c01e35 pop ebp */
  EBP = (pop32());
  /* 12c01e36 ret  */
  ESPCHK(0x12c01de0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12c01e40 (126 bytes, 38 insns) */
void f_12c01e40(void) {
  FTRACE(0x12c01e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01e41 mov ebp, esp */
  EBP = (ESP);
  /* 12c01e43 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01e48 jl 0x12c01e50 */
  if ((C.sf!=C.of)) goto L_12c01e50;
  /* 12c01e4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01e4e jl 0x12c01e57 */
  if ((C.sf!=C.of)) goto L_12c01e57;
L_12c01e50:;
  /* 12c01e50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12c01e55 jmp 0x12c01eba */
  goto L_12c01eba;
L_12c01e57:;
  /* 12c01e57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01e5b jne 0x12c01e69 */
  if (!C.zf) goto L_12c01e69;
  /* 12c01e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01e60 mov eax, dword ptr [eax*4 + 0x12c2ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12c2ca44)));
  /* 12c01e67 jmp 0x12c01eba */
  goto L_12c01eba;
L_12c01e69:;
  /* 12c01e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01e6c mov edx, dword ptr [ecx*4 + 0x12c2ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca44)));
  /* 12c01e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c01e76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01e7a jne 0x12c01e90 */
  if (!C.zf) goto L_12c01e90;
  /* 12c01e7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12c01e7e call dword ptr [0x12c3028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3028c))), 0x12c01e84u);
  /* 12c01e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01e87 mov dword ptr [ecx*4 + 0x12c2ca44], eax */
  w32((uint32_t)(ECX*4 + 0x12c2ca44), (EAX));
  /* 12c01e8e jmp 0x12c01eb7 */
  goto L_12c01eb7;
L_12c01e90:;
  /* 12c01e90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01e94 jne 0x12c01eaa */
  if (!C.zf) goto L_12c01eaa;
  /* 12c01e96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c01e98 call dword ptr [0x12c3028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3028c))), 0x12c01e9eu);
  /* 12c01e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01ea1 mov dword ptr [edx*4 + 0x12c2ca44], eax */
  w32((uint32_t)(EDX*4 + 0x12c2ca44), (EAX));
  /* 12c01ea8 jmp 0x12c01eb7 */
  goto L_12c01eb7;
L_12c01eaa:;
  /* 12c01eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01eb0 mov dword ptr [eax*4 + 0x12c2ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x12c2ca44), (ECX));
L_12c01eb7:;
  /* 12c01eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c01eba:;
  /* 12c01eba mov esp, ebp */
  ESP = (EBP);
  /* 12c01ebc pop ebp */
  EBP = (pop32());
  /* 12c01ebd ret  */
  ESPCHK(0x12c01e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec0 @ 0x12c01ec0 (28 bytes, 11 insns) */
void f_12c01ec0(void) {
  FTRACE(0x12c01ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12c01ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01ec4 mov eax, dword ptr [0x12c2ffc0] */
  EAX = (r32((uint32_t)(0x12c2ffc0)));
  /* 12c01ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c01ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c01ecf mov dword ptr [0x12c2ffc0], ecx */
  w32((uint32_t)(0x12c2ffc0), (ECX));
  /* 12c01ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c01ed8 mov esp, ebp */
  ESP = (EBP);
  /* 12c01eda pop ebp */
  EBP = (pop32());
  /* 12c01edb ret  */
  ESPCHK(0x12c01ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ee0 @ 0x12c01ee0 (912 bytes, 248 insns) */
void f_12c01ee0(void) {
  FTRACE(0x12c01ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c01ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c01ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12c01ee3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12c01ee8 call 0x12c05fc0 */
  push32(0x12c01eedu); f_12c05fc0();
  /* 12c01eed push edi */
  push32((uint32_t)(EDI));
  /* 12c01eee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12c01ef5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c01efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01efc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12c01f02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01f04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c01f06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c01f07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12c01f0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c01f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01f15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12c01f1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01f1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c01f1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c01f20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12c01f27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12c01f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c01f2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12c01f34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12c01f36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12c01f38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12c01f39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12c01f3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12c01f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01f46 jl 0x12c01f4e */
  if ((C.sf!=C.of)) goto L_12c01f4e;
  /* 12c01f48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01f4c jl 0x12c01f56 */
  if ((C.sf!=C.of)) goto L_12c01f56;
L_12c01f4e:;
  /* 12c01f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01f51 jmp 0x12c0226b */
  goto L_12c0226b;
L_12c01f56:;
  /* 12c01f56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01f5a jne 0x12c02000 */
  if (!C.zf) goto L_12c02000;
  /* 12c01f60 push 0x12c2ca34 */
  push32((uint32_t)(0x12c2ca34u));
  /* 12c01f65 call dword ptr [0x12c302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a4))), 0x12c01f6bu);
  /* 12c01f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c01f6d jle 0x12c02000 */
  if ((C.zf||C.sf!=C.of)) goto L_12c02000;
  /* 12c01f73 cmp dword ptr [0x12c2e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01f7a jne 0x12c01fbe */
  if (!C.zf) goto L_12c01fbe;
  /* 12c01f7c push 0x12c29240 */
  push32((uint32_t)(0x12c29240u));
  /* 12c01f81 call dword ptr [0x12c302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a0))), 0x12c01f87u);
  /* 12c01f87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12c01f8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01f94 je 0x12c01fb6 */
  if (C.zf) goto L_12c01fb6;
  /* 12c01f96 push 0x12c29234 */
  push32((uint32_t)(0x12c29234u));
  /* 12c01f9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12c01fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01fa2 call dword ptr [0x12c3029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3029c))), 0x12c01fa8u);
  /* 12c01fa8 mov dword ptr [0x12c2e488], eax */
  w32((uint32_t)(0x12c2e488), (EAX));
  /* 12c01fad cmp dword ptr [0x12c2e488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c01fb4 jne 0x12c01fbe */
  if (!C.zf) goto L_12c01fbe;
L_12c01fb6:;
  /* 12c01fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01fb9 jmp 0x12c0226b */
  goto L_12c0226b;
L_12c01fbe:;
  /* 12c01fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c01fc1 push edx */
  push32((uint32_t)(EDX));
  /* 12c01fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c01fc5 push eax */
  push32((uint32_t)(EAX));
  /* 12c01fc6 push 0x12c29200 */
  push32((uint32_t)(0x12c29200u));
  /* 12c01fcb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12c01fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c01fd2 call dword ptr [0x12c2e488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e488))), 0x12c01fd8u);
  /* 12c01fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c01fdb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c01fe1 push edx */
  push32((uint32_t)(EDX));
  /* 12c01fe2 call dword ptr [0x12c30298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30298))), 0x12c01fe8u);
  /* 12c01fe8 push 0x12c2ca34 */
  push32((uint32_t)(0x12c2ca34u));
  /* 12c01fed call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c01ff3u);
  /* 12c01ff3 call 0x12c01dd0 */
  push32(0x12c01ff8u); f_12c01dd0();
  /* 12c01ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c01ffb jmp 0x12c0226b */
  goto L_12c0226b;
L_12c02000:;
  /* 12c02000 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02004 je 0x12c0203d */
  if (C.zf) goto L_12c0203d;
  /* 12c02006 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12c0200c push eax */
  push32((uint32_t)(EAX));
  /* 12c0200d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c02010 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02011 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12c02016 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12c0201c push edx */
  push32((uint32_t)(EDX));
  /* 12c0201d call 0x12c05ec0 */
  push32(0x12c02022u); f_12c05ec0();
  /* 12c02022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02027 jge 0x12c0203d */
  if ((C.sf==C.of)) goto L_12c0203d;
  /* 12c02029 push 0x12c291d4 */
  push32((uint32_t)(0x12c291d4u));
  /* 12c0202e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12c02034 push eax */
  push32((uint32_t)(EAX));
  /* 12c02035 call 0x12c05dd0 */
  push32(0x12c0203au); f_12c05dd0();
  /* 12c0203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0203d:;
  /* 12c0203d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02041 jne 0x12c02075 */
  if (!C.zf) goto L_12c02075;
  /* 12c02043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02047 je 0x12c02055 */
  if (C.zf) goto L_12c02055;
  /* 12c02049 mov dword ptr [ebp - 0x3028], 0x12c291c0 */
  w32((uint32_t)(EBP + -0x3028), (0x12c291c0u));
  /* 12c02053 jmp 0x12c0205f */
  goto L_12c0205f;
L_12c02055:;
  /* 12c02055 mov dword ptr [ebp - 0x3028], 0x12c291ac */
  w32((uint32_t)(EBP + -0x3028), (0x12c291acu));
L_12c0205f:;
  /* 12c0205f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12c02065 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02066 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c0206c push edx */
  push32((uint32_t)(EDX));
  /* 12c0206d call 0x12c05dd0 */
  push32(0x12c02072u); f_12c05dd0();
  /* 12c02072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02075:;
  /* 12c02075 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12c0207b push eax */
  push32((uint32_t)(EAX));
  /* 12c0207c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12c02082 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02083 call 0x12c05de0 */
  push32(0x12c02088u); f_12c05de0();
  /* 12c02088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0208b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0208f jne 0x12c020ca */
  if (!C.zf) goto L_12c020ca;
  /* 12c02091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02094 mov eax, dword ptr [edx*4 + 0x12c2ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2ca38)));
  /* 12c0209b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c020a0 je 0x12c020b6 */
  if (C.zf) goto L_12c020b6;
  /* 12c020a2 push 0x12c291a8 */
  push32((uint32_t)(0x12c291a8u));
  /* 12c020a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12c020ad push ecx */
  push32((uint32_t)(ECX));
  /* 12c020ae call 0x12c05de0 */
  push32(0x12c020b3u); f_12c05de0();
  /* 12c020b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c020b6:;
  /* 12c020b6 push 0x12c291a4 */
  push32((uint32_t)(0x12c291a4u));
  /* 12c020bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c020c1 push edx */
  push32((uint32_t)(EDX));
  /* 12c020c2 call 0x12c05de0 */
  push32(0x12c020c7u); f_12c05de0();
  /* 12c020c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c020ca:;
  /* 12c020ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c020ce je 0x12c02112 */
  if (C.zf) goto L_12c02112;
  /* 12c020d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12c020d6 push eax */
  push32((uint32_t)(EAX));
  /* 12c020d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c020da push ecx */
  push32((uint32_t)(ECX));
  /* 12c020db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c020de push edx */
  push32((uint32_t)(EDX));
  /* 12c020df push 0x12c29198 */
  push32((uint32_t)(0x12c29198u));
  /* 12c020e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c020e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c020ef push eax */
  push32((uint32_t)(EAX));
  /* 12c020f0 call 0x12c05cd0 */
  push32(0x12c020f5u); f_12c05cd0();
  /* 12c020f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c020f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c020fa jge 0x12c02110 */
  if ((C.sf==C.of)) goto L_12c02110;
  /* 12c020fc push 0x12c291d4 */
  push32((uint32_t)(0x12c291d4u));
  /* 12c02101 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12c02107 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02108 call 0x12c05dd0 */
  push32(0x12c0210du); f_12c05dd0();
  /* 12c0210d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02110:;
  /* 12c02110 jmp 0x12c02128 */
  goto L_12c02128;
L_12c02112:;
  /* 12c02112 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12c02118 push edx */
  push32((uint32_t)(EDX));
  /* 12c02119 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c0211f push eax */
  push32((uint32_t)(EAX));
  /* 12c02120 call 0x12c05dd0 */
  push32(0x12c02125u); f_12c05dd0();
  /* 12c02125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02128:;
  /* 12c02128 cmp dword ptr [0x12c2ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0212f je 0x12c0216c */
  if (C.zf) goto L_12c0216c;
  /* 12c02131 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12c02137 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02138 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c0213e push edx */
  push32((uint32_t)(EDX));
  /* 12c0213f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02142 push eax */
  push32((uint32_t)(EAX));
  /* 12c02143 call dword ptr [0x12c2ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2ffc0))), 0x12c02149u);
  /* 12c02149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0214c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0214e je 0x12c0216c */
  if (C.zf) goto L_12c0216c;
  /* 12c02150 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02154 jne 0x12c02161 */
  if (!C.zf) goto L_12c02161;
  /* 12c02156 push 0x12c2ca34 */
  push32((uint32_t)(0x12c2ca34u));
  /* 12c0215b call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c02161u);
L_12c02161:;
  /* 12c02161 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12c02167 jmp 0x12c0226b */
  goto L_12c0226b;
L_12c0216c:;
  /* 12c0216c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0216f mov edx, dword ptr [ecx*4 + 0x12c2ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca38)));
  /* 12c02176 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c02179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0217b je 0x12c021bb */
  if (C.zf) goto L_12c021bb;
  /* 12c0217d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02180 cmp dword ptr [eax*4 + 0x12c2ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12c2ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02188 je 0x12c021bb */
  if (C.zf) goto L_12c021bb;
  /* 12c0218a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0218c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12c02192 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02193 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c02199 push edx */
  push32((uint32_t)(EDX));
  /* 12c0219a call 0x12c05c50 */
  push32(0x12c0219fu); f_12c05c50();
  /* 12c0219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c021a2 push eax */
  push32((uint32_t)(EAX));
  /* 12c021a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12c021a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c021aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c021ad mov edx, dword ptr [ecx*4 + 0x12c2ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca44)));
  /* 12c021b4 push edx */
  push32((uint32_t)(EDX));
  /* 12c021b5 call dword ptr [0x12c30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30290))), 0x12c021bbu);
L_12c021bb:;
  /* 12c021bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c021be mov ecx, dword ptr [eax*4 + 0x12c2ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2ca38)));
  /* 12c021c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c021c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c021ca je 0x12c021d9 */
  if (C.zf) goto L_12c021d9;
  /* 12c021cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12c021d2 push edx */
  push32((uint32_t)(EDX));
  /* 12c021d3 call dword ptr [0x12c30298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30298))), 0x12c021d9u);
L_12c021d9:;
  /* 12c021d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c021dc mov ecx, dword ptr [eax*4 + 0x12c2ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2ca38)));
  /* 12c021e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c021e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c021e8 je 0x12c02258 */
  if (C.zf) goto L_12c02258;
  /* 12c021ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c021ee je 0x12c0220d */
  if (C.zf) goto L_12c0220d;
  /* 12c021f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12c021f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12c021f8 push edx */
  push32((uint32_t)(EDX));
  /* 12c021f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c021fc push eax */
  push32((uint32_t)(EAX));
  /* 12c021fd call 0x12c05960 */
  push32(0x12c02202u); f_12c05960();
  /* 12c02202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02205 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12c0220b jmp 0x12c02217 */
  goto L_12c02217;
L_12c0220d:;
  /* 12c0220d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12c02217:;
  /* 12c02217 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12c0221d push ecx */
  push32((uint32_t)(ECX));
  /* 12c0221e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02221 push edx */
  push32((uint32_t)(EDX));
  /* 12c02222 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12c02228 push eax */
  push32((uint32_t)(EAX));
  /* 12c02229 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0222c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0222d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02230 push edx */
  push32((uint32_t)(EDX));
  /* 12c02231 call 0x12c02270 */
  push32(0x12c02236u); f_12c02270();
  /* 12c02236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02239 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12c0223f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02243 jne 0x12c02250 */
  if (!C.zf) goto L_12c02250;
  /* 12c02245 push 0x12c2ca34 */
  push32((uint32_t)(0x12c2ca34u));
  /* 12c0224a call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c02250u);
L_12c02250:;
  /* 12c02250 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12c02256 jmp 0x12c0226b */
  goto L_12c0226b;
L_12c02258:;
  /* 12c02258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0225c jne 0x12c02269 */
  if (!C.zf) goto L_12c02269;
  /* 12c0225e push 0x12c2ca34 */
  push32((uint32_t)(0x12c2ca34u));
  /* 12c02263 call dword ptr [0x12c30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30294))), 0x12c02269u);
L_12c02269:;
  /* 12c02269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0226b:;
  /* 12c0226b pop edi */
  EDI = (pop32());
  /* 12c0226c mov esp, ebp */
  ESP = (EBP);
  /* 12c0226e pop ebp */
  EBP = (pop32());
  /* 12c0226f ret  */
  ESPCHK(0x12c01ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x12c02270 (780 bytes, 197 insns) */
void f_12c02270(void) {
  FTRACE(0x12c02270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02270 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02271 mov ebp, esp */
  EBP = (ESP);
  /* 12c02273 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12c02278 call 0x12c05fc0 */
  push32(0x12c0227du); f_12c05fc0();
L_12c0227d:;
  /* 12c0227d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02281 jne 0x12c022a8 */
  if (!C.zf) goto L_12c022a8;
  /* 12c02283 push 0x12c29390 */
  push32((uint32_t)(0x12c29390u));
  /* 12c02288 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0228a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12c0228f push 0x12c29384 */
  push32((uint32_t)(0x12c29384u));
  /* 12c02294 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02296 call 0x12c01ee0 */
  push32(0x12c0229bu); f_12c01ee0();
  /* 12c0229b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0229e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c022a1 jne 0x12c022a8 */
  if (!C.zf) goto L_12c022a8;
  /* 12c022a3 call 0x12c01dd0 */
  push32(0x12c022a8u); f_12c01dd0();
L_12c022a8:;
  /* 12c022a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c022aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c022ac jne 0x12c0227d */
  if (!C.zf) goto L_12c0227d;
  /* 12c022ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c022b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12c022b9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c022ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c022bc call dword ptr [0x12c302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a8))), 0x12c022c2u);
  /* 12c022c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c022c4 jne 0x12c022da */
  if (!C.zf) goto L_12c022da;
  /* 12c022c6 push 0x12c2936c */
  push32((uint32_t)(0x12c2936cu));
  /* 12c022cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12c022d1 push edx */
  push32((uint32_t)(EDX));
  /* 12c022d2 call 0x12c05dd0 */
  push32(0x12c022d7u); f_12c05dd0();
  /* 12c022d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c022da:;
  /* 12c022da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12c022e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c022e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c022e6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c022e7 call 0x12c05c50 */
  push32(0x12c022ecu); f_12c05c50();
  /* 12c022ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c022ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c022f2 jbe 0x12c0231d */
  if ((C.cf||C.zf)) goto L_12c0231d;
  /* 12c022f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c022f7 push edx */
  push32((uint32_t)(EDX));
  /* 12c022f8 call 0x12c05c50 */
  push32(0x12c022fdu); f_12c05c50();
  /* 12c022fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02303 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12c02307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0230a push 3 */
  push32((uint32_t)(0x3u));
  /* 12c0230c push 0x12c29368 */
  push32((uint32_t)(0x12c29368u));
  /* 12c02311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02314 push eax */
  push32((uint32_t)(EAX));
  /* 12c02315 call 0x12c06640 */
  push32(0x12c0231au); f_12c06640();
  /* 12c0231a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0231d:;
  /* 12c0231d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02320 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12c02326 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0232d je 0x12c02378 */
  if (C.zf) goto L_12c02378;
  /* 12c0232f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c02335 push edx */
  push32((uint32_t)(EDX));
  /* 12c02336 call 0x12c05c50 */
  push32(0x12c0233bu); f_12c05c50();
  /* 12c0233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0233e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02341 jbe 0x12c02378 */
  if ((C.cf||C.zf)) goto L_12c02378;
  /* 12c02343 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c02349 push eax */
  push32((uint32_t)(EAX));
  /* 12c0234a call 0x12c05c50 */
  push32(0x12c0234fu); f_12c05c50();
  /* 12c0234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02352 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c02358 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12c0235c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12c02362 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c02364 push 0x12c29368 */
  push32((uint32_t)(0x12c29368u));
  /* 12c02369 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c0236f push eax */
  push32((uint32_t)(EAX));
  /* 12c02370 call 0x12c06640 */
  push32(0x12c02375u); f_12c06640();
  /* 12c02375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02378:;
  /* 12c02378 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0237c jne 0x12c0238a */
  if (!C.zf) goto L_12c0238a;
  /* 12c0237e mov dword ptr [ebp - 0x1114], 0x12c292f4 */
  w32((uint32_t)(EBP + -0x1114), (0x12c292f4u));
  /* 12c02388 jmp 0x12c02394 */
  goto L_12c02394;
L_12c0238a:;
  /* 12c0238a mov dword ptr [ebp - 0x1114], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1114), (0x12c29094u));
L_12c02394:;
  /* 12c02394 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c02397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c0239a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0239c je 0x12c023a9 */
  if (C.zf) goto L_12c023a9;
  /* 12c0239e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c023a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12c023a7 jmp 0x12c023b3 */
  goto L_12c023b3;
L_12c023a9:;
  /* 12c023a9 mov dword ptr [ebp - 0x1118], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1118), (0x12c29094u));
L_12c023b3:;
  /* 12c023b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c023b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c023b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c023bb je 0x12c023cf */
  if (C.zf) goto L_12c023cf;
  /* 12c023bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c023c1 jne 0x12c023cf */
  if (!C.zf) goto L_12c023cf;
  /* 12c023c3 mov dword ptr [ebp - 0x111c], 0x12c292e4 */
  w32((uint32_t)(EBP + -0x111c), (0x12c292e4u));
  /* 12c023cd jmp 0x12c023d9 */
  goto L_12c023d9;
L_12c023cf:;
  /* 12c023cf mov dword ptr [ebp - 0x111c], 0x12c29094 */
  w32((uint32_t)(EBP + -0x111c), (0x12c29094u));
L_12c023d9:;
  /* 12c023d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c023dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c023df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c023e1 je 0x12c023ef */
  if (C.zf) goto L_12c023ef;
  /* 12c023e3 mov dword ptr [ebp - 0x1120], 0x12c292e0 */
  w32((uint32_t)(EBP + -0x1120), (0x12c292e0u));
  /* 12c023ed jmp 0x12c023f9 */
  goto L_12c023f9;
L_12c023ef:;
  /* 12c023ef mov dword ptr [ebp - 0x1120], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1120), (0x12c29094u));
L_12c023f9:;
  /* 12c023f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c023fd je 0x12c0240a */
  if (C.zf) goto L_12c0240a;
  /* 12c023ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c02402 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12c02408 jmp 0x12c02414 */
  goto L_12c02414;
L_12c0240a:;
  /* 12c0240a mov dword ptr [ebp - 0x1124], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1124), (0x12c29094u));
L_12c02414:;
  /* 12c02414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02418 je 0x12c02426 */
  if (C.zf) goto L_12c02426;
  /* 12c0241a mov dword ptr [ebp - 0x1128], 0x12c292d8 */
  w32((uint32_t)(EBP + -0x1128), (0x12c292d8u));
  /* 12c02424 jmp 0x12c02430 */
  goto L_12c02430;
L_12c02426:;
  /* 12c02426 mov dword ptr [ebp - 0x1128], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1128), (0x12c29094u));
L_12c02430:;
  /* 12c02430 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02434 je 0x12c02441 */
  if (C.zf) goto L_12c02441;
  /* 12c02436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c02439 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12c0243f jmp 0x12c0244b */
  goto L_12c0244b;
L_12c02441:;
  /* 12c02441 mov dword ptr [ebp - 0x112c], 0x12c29094 */
  w32((uint32_t)(EBP + -0x112c), (0x12c29094u));
L_12c0244b:;
  /* 12c0244b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0244f je 0x12c0245d */
  if (C.zf) goto L_12c0245d;
  /* 12c02451 mov dword ptr [ebp - 0x1130], 0x12c292d0 */
  w32((uint32_t)(EBP + -0x1130), (0x12c292d0u));
  /* 12c0245b jmp 0x12c02467 */
  goto L_12c02467;
L_12c0245d:;
  /* 12c0245d mov dword ptr [ebp - 0x1130], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1130), (0x12c29094u));
L_12c02467:;
  /* 12c02467 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0246e je 0x12c0247e */
  if (C.zf) goto L_12c0247e;
  /* 12c02470 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12c02476 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12c0247c jmp 0x12c02488 */
  goto L_12c02488;
L_12c0247e:;
  /* 12c0247e mov dword ptr [ebp - 0x1134], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1134), (0x12c29094u));
L_12c02488:;
  /* 12c02488 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0248f je 0x12c0249d */
  if (C.zf) goto L_12c0249d;
  /* 12c02491 mov dword ptr [ebp - 0x1138], 0x12c292c4 */
  w32((uint32_t)(EBP + -0x1138), (0x12c292c4u));
  /* 12c0249b jmp 0x12c024a7 */
  goto L_12c024a7;
L_12c0249d:;
  /* 12c0249d mov dword ptr [ebp - 0x1138], 0x12c29094 */
  w32((uint32_t)(EBP + -0x1138), (0x12c29094u));
L_12c024a7:;
  /* 12c024a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12c024ad push edx */
  push32((uint32_t)(EDX));
  /* 12c024ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12c024b4 push eax */
  push32((uint32_t)(EAX));
  /* 12c024b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12c024bb push ecx */
  push32((uint32_t)(ECX));
  /* 12c024bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12c024c2 push edx */
  push32((uint32_t)(EDX));
  /* 12c024c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12c024c9 push eax */
  push32((uint32_t)(EAX));
  /* 12c024ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12c024d0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c024d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12c024d7 push edx */
  push32((uint32_t)(EDX));
  /* 12c024d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12c024de push eax */
  push32((uint32_t)(EAX));
  /* 12c024df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12c024e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c024e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12c024ec push edx */
  push32((uint32_t)(EDX));
  /* 12c024ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c024f0 push eax */
  push32((uint32_t)(EAX));
  /* 12c024f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c024f4 mov edx, dword ptr [ecx*4 + 0x12c2ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca50)));
  /* 12c024fb push edx */
  push32((uint32_t)(EDX));
  /* 12c024fc push 0x12c29270 */
  push32((uint32_t)(0x12c29270u));
  /* 12c02501 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c02506 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12c0250c push eax */
  push32((uint32_t)(EAX));
  /* 12c0250d call 0x12c05cd0 */
  push32(0x12c02512u); f_12c05cd0();
  /* 12c02512 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02517 jge 0x12c0252d */
  if ((C.sf==C.of)) goto L_12c0252d;
  /* 12c02519 push 0x12c291d4 */
  push32((uint32_t)(0x12c291d4u));
  /* 12c0251e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12c02524 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02525 call 0x12c05dd0 */
  push32(0x12c0252au); f_12c05dd0();
  /* 12c0252a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0252d:;
  /* 12c0252d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12c02532 push 0x12c2924c */
  push32((uint32_t)(0x12c2924cu));
  /* 12c02537 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12c0253d push edx */
  push32((uint32_t)(EDX));
  /* 12c0253e call 0x12c06580 */
  push32(0x12c02543u); f_12c06580();
  /* 12c02543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02546 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12c0254c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02553 jne 0x12c02566 */
  if (!C.zf) goto L_12c02566;
  /* 12c02555 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12c02557 call 0x12c062c0 */
  push32(0x12c0255cu); f_12c062c0();
  /* 12c0255c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0255f push 3 */
  push32((uint32_t)(0x3u));
  /* 12c02561 call 0x12c025e0 */
  push32(0x12c02566u); f_12c025e0();
L_12c02566:;
  /* 12c02566 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0256d jne 0x12c02576 */
  if (!C.zf) goto L_12c02576;
  /* 12c0256f mov eax, 1 */
  EAX = (0x1u);
  /* 12c02574 jmp 0x12c02578 */
  goto L_12c02578;
L_12c02576:;
  /* 12c02576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c02578:;
  /* 12c02578 mov esp, ebp */
  ESP = (EBP);
  /* 12c0257a pop ebp */
  EBP = (pop32());
  /* 12c0257b ret  */
  ESPCHK(0x12c02270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x12c02580 (56 bytes, 15 insns) */
void f_12c02580(void) {
  FTRACE(0x12c02580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02580 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02581 mov ebp, esp */
  EBP = (ESP);
  /* 12c02583 cmp dword ptr [0x12c2ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0258a je 0x12c02592 */
  if (C.zf) goto L_12c02592;
  /* 12c0258c call dword ptr [0x12c2ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2ffbc))), 0x12c02592u);
L_12c02592:;
  /* 12c02592 push 0x12c2c418 */
  push32((uint32_t)(0x12c2c418u));
  /* 12c02597 push 0x12c2c208 */
  push32((uint32_t)(0x12c2c208u));
  /* 12c0259c call 0x12c02750 */
  push32(0x12c025a1u); f_12c02750();
  /* 12c025a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c025a4 push 0x12c2c104 */
  push32((uint32_t)(0x12c2c104u));
  /* 12c025a9 push 0x12c2c000 */
  push32((uint32_t)(0x12c2c000u));
  /* 12c025ae call 0x12c02750 */
  push32(0x12c025b3u); f_12c02750();
  /* 12c025b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c025b6 pop ebp */
  EBP = (pop32());
  /* 12c025b7 ret  */
  ESPCHK(0x12c02580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c0 @ 0x12c025c0 (21 bytes, 10 insns) */
void f_12c025c0(void) {
  FTRACE(0x12c025c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c025c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c025c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c025c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c025c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c025c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c025ca push eax */
  push32((uint32_t)(EAX));
  /* 12c025cb call 0x12c02640 */
  push32(0x12c025d0u); f_12c02640();
  /* 12c025d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c025d3 pop ebp */
  EBP = (pop32());
  /* 12c025d4 ret  */
  ESPCHK(0x12c025c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12c025e0 (21 bytes, 10 insns) */
void f_12c025e0(void) {
  FTRACE(0x12c025e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c025e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c025e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c025e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c025e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c025e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c025ea push eax */
  push32((uint32_t)(EAX));
  /* 12c025eb call 0x12c02640 */
  push32(0x12c025f0u); f_12c02640();
  /* 12c025f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c025f3 pop ebp */
  EBP = (pop32());
  /* 12c025f4 ret  */
  ESPCHK(0x12c025e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x12c02600 (19 bytes, 9 insns) */
void f_12c02600(void) {
  FTRACE(0x12c02600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02600 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02601 mov ebp, esp */
  EBP = (ESP);
  /* 12c02603 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02605 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02609 call 0x12c02640 */
  push32(0x12c0260eu); f_12c02640();
  /* 12c0260e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02611 pop ebp */
  EBP = (pop32());
  /* 12c02612 ret  */
  ESPCHK(0x12c02600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x12c02620 (19 bytes, 9 insns) */
void f_12c02620(void) {
  FTRACE(0x12c02620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02620 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02621 mov ebp, esp */
  EBP = (ESP);
  /* 12c02623 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02625 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02627 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02629 call 0x12c02640 */
  push32(0x12c0262eu); f_12c02640();
  /* 12c0262e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02631 pop ebp */
  EBP = (pop32());
  /* 12c02632 ret  */
  ESPCHK(0x12c02620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x12c02640 (227 bytes, 61 insns) */
void f_12c02640(void) {
  FTRACE(0x12c02640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02640 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02641 mov ebp, esp */
  EBP = (ESP);
  /* 12c02643 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02644 call 0x12c02730 */
  push32(0x12c02649u); f_12c02730();
  /* 12c02649 cmp dword ptr [0x12c2e4cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02650 jne 0x12c02663 */
  if (!C.zf) goto L_12c02663;
  /* 12c02652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02655 push eax */
  push32((uint32_t)(EAX));
  /* 12c02656 call dword ptr [0x12c302b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302b4))), 0x12c0265cu);
  /* 12c0265c push eax */
  push32((uint32_t)(EAX));
  /* 12c0265d call dword ptr [0x12c302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302b0))), 0x12c02663u);
L_12c02663:;
  /* 12c02663 mov dword ptr [0x12c2e4c8], 1 */
  w32((uint32_t)(0x12c2e4c8), (0x1u));
  /* 12c0266d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12c02670 mov byte ptr [0x12c2e4c4], cl */
  w8((uint32_t)(0x12c2e4c4), (CL));
  /* 12c02676 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0267a jne 0x12c026c3 */
  if (!C.zf) goto L_12c026c3;
  /* 12c0267c cmp dword ptr [0x12c2ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02683 je 0x12c026b1 */
  if (C.zf) goto L_12c026b1;
  /* 12c02685 mov edx, dword ptr [0x12c2ffb4] */
  EDX = (r32((uint32_t)(0x12c2ffb4)));
  /* 12c0268b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c0268e:;
  /* 12c0268e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02691 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c02697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0269a cmp ecx, dword ptr [0x12c2ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c026a0 jb 0x12c026b1 */
  if (C.cf) goto L_12c026b1;
  /* 12c026a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c026a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c026a8 je 0x12c026af */
  if (C.zf) goto L_12c026af;
  /* 12c026aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c026ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12c026afu);
L_12c026af:;
  /* 12c026af jmp 0x12c0268e */
  goto L_12c0268e;
L_12c026b1:;
  /* 12c026b1 push 0x12c2c724 */
  push32((uint32_t)(0x12c2c724u));
  /* 12c026b6 push 0x12c2c51c */
  push32((uint32_t)(0x12c2c51cu));
  /* 12c026bb call 0x12c02750 */
  push32(0x12c026c0u); f_12c02750();
  /* 12c026c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c026c3:;
  /* 12c026c3 push 0x12c2c92c */
  push32((uint32_t)(0x12c2c92cu));
  /* 12c026c8 push 0x12c2c828 */
  push32((uint32_t)(0x12c2c828u));
  /* 12c026cd call 0x12c02750 */
  push32(0x12c026d2u); f_12c02750();
  /* 12c026d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c026d5 cmp dword ptr [0x12c2e4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c026dc jne 0x12c026fe */
  if (!C.zf) goto L_12c026fe;
  /* 12c026de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12c026e0 call 0x12c04330 */
  push32(0x12c026e5u); f_12c04330();
  /* 12c026e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c026e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12c026eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c026ed je 0x12c026fe */
  if (C.zf) goto L_12c026fe;
  /* 12c026ef mov dword ptr [0x12c2e4d0], 1 */
  w32((uint32_t)(0x12c2e4d0), (0x1u));
  /* 12c026f9 call 0x12c04c40 */
  push32(0x12c026feu); f_12c04c40();
L_12c026fe:;
  /* 12c026fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02702 je 0x12c0270b */
  if (C.zf) goto L_12c0270b;
  /* 12c02704 call 0x12c02740 */
  push32(0x12c02709u); f_12c02740();
  /* 12c02709 jmp 0x12c0271f */
  goto L_12c0271f;
L_12c0270b:;
  /* 12c0270b mov dword ptr [0x12c2e4cc], 1 */
  w32((uint32_t)(0x12c2e4cc), (0x1u));
  /* 12c02715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02718 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02719 call dword ptr [0x12c302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302ac))), 0x12c0271fu);
L_12c0271f:;
  /* 12c0271f mov esp, ebp */
  ESP = (EBP);
  /* 12c02721 pop ebp */
  EBP = (pop32());
  /* 12c02722 ret  */
  ESPCHK(0x12c02640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x12c02730 (15 bytes, 7 insns) */
void f_12c02730(void) {
  FTRACE(0x12c02730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02730 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02731 mov ebp, esp */
  EBP = (ESP);
  /* 12c02733 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c02735 call 0x12c06820 */
  push32(0x12c0273au); f_12c06820();
  /* 12c0273a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0273d pop ebp */
  EBP = (pop32());
  /* 12c0273e ret  */
  ESPCHK(0x12c02730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x12c02740 (15 bytes, 7 insns) */
void f_12c02740(void) {
  FTRACE(0x12c02740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02740 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02741 mov ebp, esp */
  EBP = (ESP);
  /* 12c02743 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12c02745 call 0x12c068c0 */
  push32(0x12c0274au); f_12c068c0();
  /* 12c0274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0274d pop ebp */
  EBP = (pop32());
  /* 12c0274e ret  */
  ESPCHK(0x12c02740u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12c02750 (37 bytes, 16 insns) */
void f_12c02750(void) {
  FTRACE(0x12c02750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02751 mov ebp, esp */
  EBP = (ESP);
L_12c02753:;
  /* 12c02753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02756 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02759 jae 0x12c02773 */
  if (!C.cf) goto L_12c02773;
  /* 12c0275b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0275e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02761 je 0x12c02768 */
  if (C.zf) goto L_12c02768;
  /* 12c02763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02766 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12c02768u);
L_12c02768:;
  /* 12c02768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0276b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0276e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c02771 jmp 0x12c02753 */
  goto L_12c02753;
L_12c02773:;
  /* 12c02773 pop ebp */
  EBP = (pop32());
  /* 12c02774 ret  */
  ESPCHK(0x12c02750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x12c02780 (130 bytes, 42 insns) */
void f_12c02780(void) {
  FTRACE(0x12c02780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02780 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02781 mov ebp, esp */
  EBP = (ESP);
  /* 12c02783 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02784 call 0x12c06740 */
  push32(0x12c02789u); f_12c06740();
  /* 12c02789 call dword ptr [0x12c302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302c0))), 0x12c0278fu);
  /* 12c0278f mov dword ptr [0x12c2ca5c], eax */
  w32((uint32_t)(0x12c2ca5c), (EAX));
  /* 12c02794 cmp dword ptr [0x12c2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0279b jne 0x12c027a1 */
  if (!C.zf) goto L_12c027a1;
  /* 12c0279d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0279f jmp 0x12c027fe */
  goto L_12c027fe;
L_12c027a1:;
  /* 12c027a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12c027a3 push 0x12c293a8 */
  push32((uint32_t)(0x12c293a8u));
  /* 12c027a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c027aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c027ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12c027ae call 0x12c03230 */
  push32(0x12c027b3u); f_12c03230();
  /* 12c027b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c027b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c027b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c027bd je 0x12c027d4 */
  if (C.zf) goto L_12c027d4;
  /* 12c027bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c027c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c027c3 mov ecx, dword ptr [0x12c2ca5c] */
  ECX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c027c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12c027ca call dword ptr [0x12c302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302bc))), 0x12c027d0u);
  /* 12c027d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c027d2 jne 0x12c027d8 */
  if (!C.zf) goto L_12c027d8;
L_12c027d4:;
  /* 12c027d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c027d6 jmp 0x12c027fe */
  goto L_12c027fe;
L_12c027d8:;
  /* 12c027d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c027db push edx */
  push32((uint32_t)(EDX));
  /* 12c027dc call 0x12c02840 */
  push32(0x12c027e1u); f_12c02840();
  /* 12c027e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c027e4 call dword ptr [0x12c302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302b8))), 0x12c027eau);
  /* 12c027ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c027ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c027ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c027f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12c027f9 mov eax, 1 */
  EAX = (0x1u);
L_12c027fe:;
  /* 12c027fe mov esp, ebp */
  ESP = (EBP);
  /* 12c02800 pop ebp */
  EBP = (pop32());
  /* 12c02801 ret  */
  ESPCHK(0x12c02780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x12c02810 (41 bytes, 11 insns) */
void f_12c02810(void) {
  FTRACE(0x12c02810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02811 mov ebp, esp */
  EBP = (ESP);
  /* 12c02813 call 0x12c06780 */
  push32(0x12c02818u); f_12c06780();
  /* 12c02818 cmp dword ptr [0x12c2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0281f je 0x12c02837 */
  if (C.zf) goto L_12c02837;
  /* 12c02821 mov eax, dword ptr [0x12c2ca5c] */
  EAX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c02826 push eax */
  push32((uint32_t)(EAX));
  /* 12c02827 call dword ptr [0x12c302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302c4))), 0x12c0282du);
  /* 12c0282d mov dword ptr [0x12c2ca5c], 0xffffffff */
  w32((uint32_t)(0x12c2ca5c), (0xffffffffu));
L_12c02837:;
  /* 12c02837 pop ebp */
  EBP = (pop32());
  /* 12c02838 ret  */
  ESPCHK(0x12c02810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x12c02840 (25 bytes, 8 insns) */
void f_12c02840(void) {
  FTRACE(0x12c02840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02840 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02841 mov ebp, esp */
  EBP = (ESP);
  /* 12c02843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02846 mov dword ptr [eax + 0x50], 0x12c2cc00 */
  w32((uint32_t)(EAX + 0x50), (0x12c2cc00u));
  /* 12c0284d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02850 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12c02857 pop ebp */
  EBP = (pop32());
  /* 12c02858 ret  */
  ESPCHK(0x12c02840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x12c02860 (152 bytes, 48 insns) */
void f_12c02860(void) {
  FTRACE(0x12c02860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02860 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02861 mov ebp, esp */
  EBP = (ESP);
  /* 12c02863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02866 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c0286cu);
  /* 12c0286c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0286f mov eax, dword ptr [0x12c2ca5c] */
  EAX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c02874 push eax */
  push32((uint32_t)(EAX));
  /* 12c02875 call dword ptr [0x12c302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302cc))), 0x12c0287bu);
  /* 12c0287b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0287e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02882 jne 0x12c028e7 */
  if (!C.zf) goto L_12c028e7;
  /* 12c02884 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12c02889 push 0x12c293a8 */
  push32((uint32_t)(0x12c293a8u));
  /* 12c0288e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02890 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12c02892 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02894 call 0x12c03230 */
  push32(0x12c02899u); f_12c03230();
  /* 12c02899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0289c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0289f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c028a3 je 0x12c028dd */
  if (C.zf) goto L_12c028dd;
  /* 12c028a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c028a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c028a9 mov edx, dword ptr [0x12c2ca5c] */
  EDX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c028af push edx */
  push32((uint32_t)(EDX));
  /* 12c028b0 call dword ptr [0x12c302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302bc))), 0x12c028b6u);
  /* 12c028b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c028b8 je 0x12c028dd */
  if (C.zf) goto L_12c028dd;
  /* 12c028ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c028bd push eax */
  push32((uint32_t)(EAX));
  /* 12c028be call 0x12c02840 */
  push32(0x12c028c3u); f_12c02840();
  /* 12c028c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c028c6 call dword ptr [0x12c302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302b8))), 0x12c028ccu);
  /* 12c028cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c028cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c028d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c028d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12c028db jmp 0x12c028e7 */
  goto L_12c028e7;
L_12c028dd:;
  /* 12c028dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12c028df call 0x12c01d90 */
  push32(0x12c028e4u); f_12c01d90();
  /* 12c028e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c028e7:;
  /* 12c028e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c028ea push eax */
  push32((uint32_t)(EAX));
  /* 12c028eb call dword ptr [0x12c302c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302c8))), 0x12c028f1u);
  /* 12c028f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c028f4 mov esp, ebp */
  ESP = (EBP);
  /* 12c028f6 pop ebp */
  EBP = (pop32());
  /* 12c028f7 ret  */
  ESPCHK(0x12c02860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x12c02900 (263 bytes, 86 insns) */
void f_12c02900(void) {
  FTRACE(0x12c02900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02900 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02901 mov ebp, esp */
  EBP = (ESP);
  /* 12c02903 cmp dword ptr [0x12c2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0290a je 0x12c02a05 */
  if (C.zf) goto L_12c02a05;
  /* 12c02910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02914 jne 0x12c02925 */
  if (!C.zf) goto L_12c02925;
  /* 12c02916 mov eax, dword ptr [0x12c2ca5c] */
  EAX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c0291b push eax */
  push32((uint32_t)(EAX));
  /* 12c0291c call dword ptr [0x12c302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302cc))), 0x12c02922u);
  /* 12c02922 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c02925:;
  /* 12c02925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02929 je 0x12c029f6 */
  if (C.zf) goto L_12c029f6;
  /* 12c0292f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02932 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02936 je 0x12c02949 */
  if (C.zf) goto L_12c02949;
  /* 12c02938 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0293a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0293d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12c02940 push eax */
  push32((uint32_t)(EAX));
  /* 12c02941 call 0x12c038b0 */
  push32(0x12c02946u); f_12c038b0();
  /* 12c02946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02949:;
  /* 12c02949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0294c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02950 je 0x12c02963 */
  if (C.zf) goto L_12c02963;
  /* 12c02952 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02957 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12c0295a push eax */
  push32((uint32_t)(EAX));
  /* 12c0295b call 0x12c038b0 */
  push32(0x12c02960u); f_12c038b0();
  /* 12c02960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02963:;
  /* 12c02963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02966 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0296a je 0x12c0297d */
  if (C.zf) goto L_12c0297d;
  /* 12c0296c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02971 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12c02974 push eax */
  push32((uint32_t)(EAX));
  /* 12c02975 call 0x12c038b0 */
  push32(0x12c0297au); f_12c038b0();
  /* 12c0297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0297d:;
  /* 12c0297d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02980 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02984 je 0x12c02997 */
  if (C.zf) goto L_12c02997;
  /* 12c02986 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0298b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12c0298e push eax */
  push32((uint32_t)(EAX));
  /* 12c0298f call 0x12c038b0 */
  push32(0x12c02994u); f_12c038b0();
  /* 12c02994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02997:;
  /* 12c02997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0299a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0299e je 0x12c029b1 */
  if (C.zf) goto L_12c029b1;
  /* 12c029a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c029a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12c029a8 push eax */
  push32((uint32_t)(EAX));
  /* 12c029a9 call 0x12c038b0 */
  push32(0x12c029aeu); f_12c038b0();
  /* 12c029ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c029b1:;
  /* 12c029b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c029b8 je 0x12c029cb */
  if (C.zf) goto L_12c029cb;
  /* 12c029ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12c029bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12c029c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c029c3 call 0x12c038b0 */
  push32(0x12c029c8u); f_12c038b0();
  /* 12c029c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c029cb:;
  /* 12c029cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029ce cmp dword ptr [ecx + 0x50], 0x12c2cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12c2cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c029d5 je 0x12c029e8 */
  if (C.zf) goto L_12c029e8;
  /* 12c029d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c029d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12c029df push eax */
  push32((uint32_t)(EAX));
  /* 12c029e0 call 0x12c038b0 */
  push32(0x12c029e5u); f_12c038b0();
  /* 12c029e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c029e8:;
  /* 12c029e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c029ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c029ed push ecx */
  push32((uint32_t)(ECX));
  /* 12c029ee call 0x12c038b0 */
  push32(0x12c029f3u); f_12c038b0();
  /* 12c029f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c029f6:;
  /* 12c029f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c029f8 mov edx, dword ptr [0x12c2ca5c] */
  EDX = (r32((uint32_t)(0x12c2ca5c)));
  /* 12c029fe push edx */
  push32((uint32_t)(EDX));
  /* 12c029ff call dword ptr [0x12c302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302bc))), 0x12c02a05u);
L_12c02a05:;
  /* 12c02a05 pop ebp */
  EBP = (pop32());
  /* 12c02a06 ret  */
  ESPCHK(0x12c02900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x12c02a10 (11 bytes, 5 insns) */
void f_12c02a10(void) {
  FTRACE(0x12c02a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02a11 mov ebp, esp */
  EBP = (ESP);
  /* 12c02a13 call dword ptr [0x12c302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302b8))), 0x12c02a19u);
  /* 12c02a19 pop ebp */
  EBP = (pop32());
  /* 12c02a1a ret  */
  ESPCHK(0x12c02a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x12c02a20 (11 bytes, 5 insns) */
void f_12c02a20(void) {
  FTRACE(0x12c02a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02a21 mov ebp, esp */
  EBP = (ESP);
  /* 12c02a23 call dword ptr [0x12c302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d4))), 0x12c02a29u);
  /* 12c02a29 pop ebp */
  EBP = (pop32());
  /* 12c02a2a ret  */
  ESPCHK(0x12c02a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x12c02a30 (804 bytes, 236 insns) */
void f_12c02a30(void) {
  FTRACE(0x12c02a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02a31 mov ebp, esp */
  EBP = (ESP);
  /* 12c02a33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02a36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12c02a3b push 0x12c293b4 */
  push32((uint32_t)(0x12c293b4u));
  /* 12c02a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02a42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c02a47 call 0x12c02e20 */
  push32(0x12c02a4cu); f_12c02e20();
  /* 12c02a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02a4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12c02a52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02a56 jne 0x12c02a62 */
  if (!C.zf) goto L_12c02a62;
  /* 12c02a58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12c02a5a call 0x12c01d90 */
  push32(0x12c02a5fu); f_12c01d90();
  /* 12c02a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c02a62:;
  /* 12c02a62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02a65 mov dword ptr [0x12c2fe60], eax */
  w32((uint32_t)(0x12c2fe60), (EAX));
  /* 12c02a6a mov dword ptr [0x12c2ff9c], 0x20 */
  w32((uint32_t)(0x12c2ff9c), (0x20u));
  /* 12c02a74 jmp 0x12c02a7f */
  goto L_12c02a7f;
L_12c02a76:;
  /* 12c02a76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02a79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02a7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12c02a7f:;
  /* 12c02a7f mov edx, dword ptr [0x12c2fe60] */
  EDX = (r32((uint32_t)(0x12c2fe60)));
  /* 12c02a85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02a8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02a8e jae 0x12c02ab3 */
  if (!C.cf) goto L_12c02ab3;
  /* 12c02a90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02a93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c02a97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02a9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c02aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02aa3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c02aa7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02aaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c02ab1 jmp 0x12c02a76 */
  goto L_12c02a76;
L_12c02ab3:;
  /* 12c02ab3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12c02ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02ab7 call dword ptr [0x12c302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e0))), 0x12c02abdu);
  /* 12c02abd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12c02ac0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c02ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c02ac8 je 0x12c02c55 */
  if (C.zf) goto L_12c02c55;
  /* 12c02ace cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02ad2 je 0x12c02c55 */
  if (C.zf) goto L_12c02c55;
  /* 12c02ad8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c02adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c02add mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12c02ae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c02ae3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c02ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02aec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02aef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12c02af2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02af9 jge 0x12c02b03 */
  if ((C.sf==C.of)) goto L_12c02b03;
  /* 12c02afb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12c02afe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12c02b01 jmp 0x12c02b0a */
  goto L_12c02b0a;
L_12c02b03:;
  /* 12c02b03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12c02b0a:;
  /* 12c02b0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12c02b0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12c02b10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12c02b17 jmp 0x12c02b22 */
  goto L_12c02b22;
L_12c02b19:;
  /* 12c02b19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c02b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02b1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12c02b22:;
  /* 12c02b22 mov ecx, dword ptr [0x12c2ff9c] */
  ECX = (r32((uint32_t)(0x12c2ff9c)));
  /* 12c02b28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02b2b jge 0x12c02bc2 */
  if ((C.sf==C.of)) goto L_12c02bc2;
  /* 12c02b31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12c02b36 push 0x12c293b4 */
  push32((uint32_t)(0x12c293b4u));
  /* 12c02b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12c02b42 call 0x12c02e20 */
  push32(0x12c02b47u); f_12c02e20();
  /* 12c02b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02b4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12c02b4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02b51 jne 0x12c02b5e */
  if (!C.zf) goto L_12c02b5e;
  /* 12c02b53 mov edx, dword ptr [0x12c2ff9c] */
  EDX = (r32((uint32_t)(0x12c2ff9c)));
  /* 12c02b59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12c02b5c jmp 0x12c02bc2 */
  goto L_12c02bc2;
L_12c02b5e:;
  /* 12c02b5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c02b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02b64 mov dword ptr [eax*4 + 0x12c2fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12c2fe60), (ECX));
  /* 12c02b6b mov edx, dword ptr [0x12c2ff9c] */
  EDX = (r32((uint32_t)(0x12c2ff9c)));
  /* 12c02b71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02b74 mov dword ptr [0x12c2ff9c], edx */
  w32((uint32_t)(0x12c2ff9c), (EDX));
  /* 12c02b7a jmp 0x12c02b85 */
  goto L_12c02b85;
L_12c02b7c:;
  /* 12c02b7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02b7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02b82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12c02b85:;
  /* 12c02b85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12c02b88 mov edx, dword ptr [ecx*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2fe60)));
  /* 12c02b8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02b95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02b98 jae 0x12c02bbd */
  if (!C.cf) goto L_12c02bbd;
  /* 12c02b9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02b9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c02ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02ba4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12c02baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02bad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12c02bb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02bb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c02bbb jmp 0x12c02b7c */
  goto L_12c02b7c;
L_12c02bbd:;
  /* 12c02bbd jmp 0x12c02b19 */
  goto L_12c02b19;
L_12c02bc2:;
  /* 12c02bc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12c02bc9 jmp 0x12c02be6 */
  goto L_12c02be6;
L_12c02bcb:;
  /* 12c02bcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02bd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12c02bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c02bdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c02be0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02be3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12c02be6:;
  /* 12c02be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02be9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02bec jge 0x12c02c55 */
  if ((C.sf==C.of)) goto L_12c02c55;
  /* 12c02bee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c02bf1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02bf4 je 0x12c02c50 */
  if (C.zf) goto L_12c02c50;
  /* 12c02bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02bf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c02bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12c02bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c02c01 je 0x12c02c50 */
  if (C.zf) goto L_12c02c50;
  /* 12c02c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c02c09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12c02c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02c0e jne 0x12c02c20 */
  if (!C.zf) goto L_12c02c20;
  /* 12c02c10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c02c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c02c15 push edx */
  push32((uint32_t)(EDX));
  /* 12c02c16 call dword ptr [0x12c302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302dc))), 0x12c02c1cu);
  /* 12c02c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02c1e je 0x12c02c50 */
  if (C.zf) goto L_12c02c50;
L_12c02c20:;
  /* 12c02c20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12c02c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02c29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12c02c2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c02c2f mov edx, dword ptr [eax*4 + 0x12c2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c02c36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02c38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12c02c3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02c3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12c02c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c02c43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c02c45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02c4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c02c4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12c02c50:;
  /* 12c02c50 jmp 0x12c02bcb */
  goto L_12c02bcb;
L_12c02c55:;
  /* 12c02c55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12c02c5c jmp 0x12c02c67 */
  goto L_12c02c67;
L_12c02c5e:;
  /* 12c02c5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02c64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12c02c67:;
  /* 12c02c67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02c6b jge 0x12c02d44 */
  if ((C.sf==C.of)) goto L_12c02d44;
  /* 12c02c71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02c74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c02c77 mov edx, dword ptr [0x12c2fe60] */
  EDX = (r32((uint32_t)(0x12c2fe60)));
  /* 12c02c7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02c7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12c02c82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02c85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02c88 jne 0x12c02d30 */
  if (!C.zf) goto L_12c02d30;
  /* 12c02c8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02c91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12c02c95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02c99 jne 0x12c02ca4 */
  if (!C.zf) goto L_12c02ca4;
  /* 12c02c9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12c02ca2 jmp 0x12c02cb4 */
  goto L_12c02cb4;
L_12c02ca4:;
  /* 12c02ca4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12c02ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c02cac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02cae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02cb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12c02cb4:;
  /* 12c02cb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12c02cb7 push eax */
  push32((uint32_t)(EAX));
  /* 12c02cb8 call dword ptr [0x12c3028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3028c))), 0x12c02cbeu);
  /* 12c02cbe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12c02cc1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02cc5 je 0x12c02d1f */
  if (C.zf) goto L_12c02d1f;
  /* 12c02cc7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c02cca push ecx */
  push32((uint32_t)(ECX));
  /* 12c02ccb call dword ptr [0x12c302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302dc))), 0x12c02cd1u);
  /* 12c02cd1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12c02cd4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02cd8 je 0x12c02d1f */
  if (C.zf) goto L_12c02d1f;
  /* 12c02cda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02cdd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c02ce0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c02ce2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12c02ce5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c02ceb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02cee jne 0x12c02d00 */
  if (!C.zf) goto L_12c02d00;
  /* 12c02cf0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02cf3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12c02cf6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12c02cf8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02cfb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12c02cfe jmp 0x12c02d1d */
  goto L_12c02d1d;
L_12c02d00:;
  /* 12c02d00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12c02d03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c02d09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02d0c jne 0x12c02d1d */
  if (!C.zf) goto L_12c02d1d;
  /* 12c02d0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c02d14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12c02d17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c02d1d:;
  /* 12c02d1d jmp 0x12c02d2e */
  goto L_12c02d2e;
L_12c02d1f:;
  /* 12c02d1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c02d25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12c02d28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c02d2e:;
  /* 12c02d2e jmp 0x12c02d3f */
  goto L_12c02d3f;
L_12c02d30:;
  /* 12c02d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12c02d36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12c02d39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c02d3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12c02d3f:;
  /* 12c02d3f jmp 0x12c02c5e */
  goto L_12c02c5e;
L_12c02d44:;
  /* 12c02d44 mov eax, dword ptr [0x12c2ff9c] */
  EAX = (r32((uint32_t)(0x12c2ff9c)));
  /* 12c02d49 push eax */
  push32((uint32_t)(EAX));
  /* 12c02d4a call dword ptr [0x12c302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d8))), 0x12c02d50u);
  /* 12c02d50 mov esp, ebp */
  ESP = (EBP);
  /* 12c02d52 pop ebp */
  EBP = (pop32());
  /* 12c02d53 ret  */
  ESPCHK(0x12c02a30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12c02d60 (155 bytes, 45 insns) */
void f_12c02d60(void) {
  FTRACE(0x12c02d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02d61 mov ebp, esp */
  EBP = (ESP);
  /* 12c02d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c02d6d jmp 0x12c02d78 */
  goto L_12c02d78;
L_12c02d6f:;
  /* 12c02d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02d72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c02d78:;
  /* 12c02d78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02d7c jge 0x12c02df7 */
  if ((C.sf==C.of)) goto L_12c02df7;
  /* 12c02d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02d81 cmp dword ptr [ecx*4 + 0x12c2fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c2fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02d89 je 0x12c02df2 */
  if (C.zf) goto L_12c02df2;
  /* 12c02d8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02d8e mov eax, dword ptr [edx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c02d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c02d98 jmp 0x12c02da3 */
  goto L_12c02da3;
L_12c02d9a:;
  /* 12c02d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02d9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c02da3:;
  /* 12c02da3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02da6 mov eax, dword ptr [edx*4 + 0x12c2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2fe60)));
  /* 12c02dad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02db2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02db5 jae 0x12c02dcf */
  if (!C.cf) goto L_12c02dcf;
  /* 12c02db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02dba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02dbe je 0x12c02dcd */
  if (C.zf) goto L_12c02dcd;
  /* 12c02dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02dc6 push edx */
  push32((uint32_t)(EDX));
  /* 12c02dc7 call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c02dcdu);
L_12c02dcd:;
  /* 12c02dcd jmp 0x12c02d9a */
  goto L_12c02d9a;
L_12c02dcf:;
  /* 12c02dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02dd4 mov ecx, dword ptr [eax*4 + 0x12c2fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2fe60)));
  /* 12c02ddb push ecx */
  push32((uint32_t)(ECX));
  /* 12c02ddc call 0x12c038b0 */
  push32(0x12c02de1u); f_12c038b0();
  /* 12c02de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02de7 mov dword ptr [edx*4 + 0x12c2fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12c2fe60), (0x0u));
L_12c02df2:;
  /* 12c02df2 jmp 0x12c02d6f */
  goto L_12c02d6f;
L_12c02df7:;
  /* 12c02df7 mov esp, ebp */
  ESP = (EBP);
  /* 12c02df9 pop ebp */
  EBP = (pop32());
  /* 12c02dfa ret  */
  ESPCHK(0x12c02d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x12c02e00 (29 bytes, 13 insns) */
void f_12c02e00(void) {
  FTRACE(0x12c02e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02e01 mov ebp, esp */
  EBP = (ESP);
  /* 12c02e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02e09 mov eax, dword ptr [0x12c2e678] */
  EAX = (r32((uint32_t)(0x12c2e678)));
  /* 12c02e0e push eax */
  push32((uint32_t)(EAX));
  /* 12c02e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02e12 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02e13 call 0x12c02e70 */
  push32(0x12c02e18u); f_12c02e70();
  /* 12c02e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02e1b pop ebp */
  EBP = (pop32());
  /* 12c02e1c ret  */
  ESPCHK(0x12c02e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x12c02e20 (35 bytes, 16 insns) */
void f_12c02e20(void) {
  FTRACE(0x12c02e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02e21 mov ebp, esp */
  EBP = (ESP);
  /* 12c02e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02e26 push eax */
  push32((uint32_t)(EAX));
  /* 12c02e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c02e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12c02e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c02e2e push edx */
  push32((uint32_t)(EDX));
  /* 12c02e2f mov eax, dword ptr [0x12c2e678] */
  EAX = (r32((uint32_t)(0x12c2e678)));
  /* 12c02e34 push eax */
  push32((uint32_t)(EAX));
  /* 12c02e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02e38 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02e39 call 0x12c02e70 */
  push32(0x12c02e3eu); f_12c02e70();
  /* 12c02e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02e41 pop ebp */
  EBP = (pop32());
  /* 12c02e42 ret  */
  ESPCHK(0x12c02e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x12c02e50 (27 bytes, 13 insns) */
void f_12c02e50(void) {
  FTRACE(0x12c02e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02e51 mov ebp, esp */
  EBP = (ESP);
  /* 12c02e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c02e5c push eax */
  push32((uint32_t)(EAX));
  /* 12c02e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02e60 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02e61 call 0x12c02e70 */
  push32(0x12c02e66u); f_12c02e70();
  /* 12c02e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02e69 pop ebp */
  EBP = (pop32());
  /* 12c02e6a ret  */
  ESPCHK(0x12c02e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x12c02e70 (94 bytes, 38 insns) */
void f_12c02e70(void) {
  FTRACE(0x12c02e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02e71 mov ebp, esp */
  EBP = (ESP);
  /* 12c02e73 push ecx */
  push32((uint32_t)(ECX));
L_12c02e74:;
  /* 12c02e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c02e76 call 0x12c06820 */
  push32(0x12c02e7bu); f_12c06820();
  /* 12c02e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02e7e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c02e81 push eax */
  push32((uint32_t)(EAX));
  /* 12c02e82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02e85 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02e86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c02e89 push edx */
  push32((uint32_t)(EDX));
  /* 12c02e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02e8d push eax */
  push32((uint32_t)(EAX));
  /* 12c02e8e call 0x12c02ef0 */
  push32(0x12c02e93u); f_12c02ef0();
  /* 12c02e93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02e96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c02e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c02e9b call 0x12c068c0 */
  push32(0x12c02ea0u); f_12c068c0();
  /* 12c02ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02ea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02ea7 jne 0x12c02eaf */
  if (!C.zf) goto L_12c02eaf;
  /* 12c02ea9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02ead jne 0x12c02eb4 */
  if (!C.zf) goto L_12c02eb4;
L_12c02eaf:;
  /* 12c02eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c02eb2 jmp 0x12c02eca */
  goto L_12c02eca;
L_12c02eb4:;
  /* 12c02eb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02eb8 call 0x12c06b60 */
  push32(0x12c02ebdu); f_12c06b60();
  /* 12c02ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02ec2 jne 0x12c02ec8 */
  if (!C.zf) goto L_12c02ec8;
  /* 12c02ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c02ec6 jmp 0x12c02eca */
  goto L_12c02eca;
L_12c02ec8:;
  /* 12c02ec8 jmp 0x12c02e74 */
  goto L_12c02e74;
L_12c02eca:;
  /* 12c02eca mov esp, ebp */
  ESP = (EBP);
  /* 12c02ecc pop ebp */
  EBP = (pop32());
  /* 12c02ecd ret  */
  ESPCHK(0x12c02e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x12c02ed0 (23 bytes, 11 insns) */
void f_12c02ed0(void) {
  FTRACE(0x12c02ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12c02ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02edc push eax */
  push32((uint32_t)(EAX));
  /* 12c02edd call 0x12c02ef0 */
  push32(0x12c02ee2u); f_12c02ef0();
  /* 12c02ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02ee5 pop ebp */
  EBP = (pop32());
  /* 12c02ee6 ret  */
  ESPCHK(0x12c02ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x12c02ef0 (787 bytes, 254 insns) */
void f_12c02ef0(void) {
  FTRACE(0x12c02ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c02ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c02ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12c02ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c02ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c02ef7 push esi */
  push32((uint32_t)(ESI));
  /* 12c02ef8 push edi */
  push32((uint32_t)(EDI));
  /* 12c02ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c02f00 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c02f05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c02f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02f0a je 0x12c02f3c */
  if (C.zf) goto L_12c02f3c;
L_12c02f0c:;
  /* 12c02f0c call 0x12c03fc0 */
  push32(0x12c02f11u); f_12c03fc0();
  /* 12c02f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02f13 jne 0x12c02f36 */
  if (!C.zf) goto L_12c02f36;
  /* 12c02f15 push 0x12c294a8 */
  push32((uint32_t)(0x12c294a8u));
  /* 12c02f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12c02f21 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c02f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c02f28 call 0x12c01ee0 */
  push32(0x12c02f2du); f_12c01ee0();
  /* 12c02f2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02f33 jne 0x12c02f36 */
  if (!C.zf) goto L_12c02f36;
  /* 12c02f35 int3  */
  x86_unimpl("int3 @ 0x12c02f35");
L_12c02f36:;
  /* 12c02f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c02f38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c02f3a jne 0x12c02f0c */
  if (!C.zf) goto L_12c02f0c;
L_12c02f3c:;
  /* 12c02f3c mov edx, dword ptr [0x12c2ca88] */
  EDX = (r32((uint32_t)(0x12c2ca88)));
  /* 12c02f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c02f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02f48 cmp eax, dword ptr [0x12c2ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02f4e jne 0x12c02f51 */
  if (!C.zf) goto L_12c02f51;
  /* 12c02f50 int3  */
  x86_unimpl("int3 @ 0x12c02f50");
L_12c02f51:;
  /* 12c02f51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02f54 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c02f58 push edx */
  push32((uint32_t)(EDX));
  /* 12c02f59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c02f5c push eax */
  push32((uint32_t)(EAX));
  /* 12c02f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c02f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02f64 push edx */
  push32((uint32_t)(EDX));
  /* 12c02f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c02f69 call dword ptr [0x12c2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2cc90))), 0x12c02f6fu);
  /* 12c02f6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02f74 jne 0x12c02fd4 */
  if (!C.zf) goto L_12c02fd4;
  /* 12c02f76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02f7a je 0x12c02fa7 */
  if (C.zf) goto L_12c02fa7;
L_12c02f7c:;
  /* 12c02f7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c02f7f push eax */
  push32((uint32_t)(EAX));
  /* 12c02f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c02f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12c02f84 push 0x12c29464 */
  push32((uint32_t)(0x12c29464u));
  /* 12c02f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02f91 call 0x12c01ee0 */
  push32(0x12c02f96u); f_12c01ee0();
  /* 12c02f96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02f9c jne 0x12c02f9f */
  if (!C.zf) goto L_12c02f9f;
  /* 12c02f9e int3  */
  x86_unimpl("int3 @ 0x12c02f9e");
L_12c02f9f:;
  /* 12c02f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c02fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c02fa3 jne 0x12c02f7c */
  if (!C.zf) goto L_12c02f7c;
  /* 12c02fa5 jmp 0x12c02fcd */
  goto L_12c02fcd;
L_12c02fa7:;
  /* 12c02fa7 push 0x12c29440 */
  push32((uint32_t)(0x12c29440u));
  /* 12c02fac push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c02fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c02fb9 call 0x12c01ee0 */
  push32(0x12c02fbeu); f_12c01ee0();
  /* 12c02fbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c02fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02fc4 jne 0x12c02fc7 */
  if (!C.zf) goto L_12c02fc7;
  /* 12c02fc6 int3  */
  x86_unimpl("int3 @ 0x12c02fc6");
L_12c02fc7:;
  /* 12c02fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c02fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c02fcb jne 0x12c02fa7 */
  if (!C.zf) goto L_12c02fa7;
L_12c02fcd:;
  /* 12c02fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c02fcf jmp 0x12c031fc */
  goto L_12c031fc;
L_12c02fd4:;
  /* 12c02fd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c02fd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c02fdd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02fe0 je 0x12c02ff6 */
  if (C.zf) goto L_12c02ff6;
  /* 12c02fe2 mov edx, dword ptr [0x12c2ca84] */
  EDX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c02fe8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12c02feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c02fed jne 0x12c02ff6 */
  if (!C.zf) goto L_12c02ff6;
  /* 12c02fef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12c02ff6:;
  /* 12c02ff6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c02ffa ja 0x12c03007 */
  if ((!C.cf&&!C.zf)) goto L_12c03007;
  /* 12c02ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c02fff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03002 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03005 jbe 0x12c03033 */
  if ((C.cf||C.zf)) goto L_12c03033;
L_12c03007:;
  /* 12c03007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0300a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0300b push 0x12c29418 */
  push32((uint32_t)(0x12c29418u));
  /* 12c03010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03012 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03014 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03016 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03018 call 0x12c01ee0 */
  push32(0x12c0301du); f_12c01ee0();
  /* 12c0301d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03023 jne 0x12c03026 */
  if (!C.zf) goto L_12c03026;
  /* 12c03025 int3  */
  x86_unimpl("int3 @ 0x12c03025");
L_12c03026:;
  /* 12c03026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0302a jne 0x12c03007 */
  if (!C.zf) goto L_12c03007;
  /* 12c0302c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0302e jmp 0x12c031fc */
  goto L_12c031fc;
L_12c03033:;
  /* 12c03033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03036 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0303b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0303e je 0x12c03080 */
  if (C.zf) goto L_12c03080;
  /* 12c03040 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03044 je 0x12c03080 */
  if (C.zf) goto L_12c03080;
  /* 12c03046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03049 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0304f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03052 je 0x12c03080 */
  if (C.zf) goto L_12c03080;
  /* 12c03054 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03058 je 0x12c03080 */
  if (C.zf) goto L_12c03080;
L_12c0305a:;
  /* 12c0305a push 0x12c293e4 */
  push32((uint32_t)(0x12c293e4u));
  /* 12c0305f push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c03064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03068 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0306a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0306c call 0x12c01ee0 */
  push32(0x12c03071u); f_12c01ee0();
  /* 12c03071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03077 jne 0x12c0307a */
  if (!C.zf) goto L_12c0307a;
  /* 12c03079 int3  */
  x86_unimpl("int3 @ 0x12c03079");
L_12c0307a:;
  /* 12c0307a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0307c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0307e jne 0x12c0305a */
  if (!C.zf) goto L_12c0305a;
L_12c03080:;
  /* 12c03080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03083 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03086 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c03089 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0308c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0308d call 0x12c06c70 */
  push32(0x12c03092u); f_12c06c70();
  /* 12c03092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c03098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0309c jne 0x12c030a5 */
  if (!C.zf) goto L_12c030a5;
  /* 12c0309e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c030a0 jmp 0x12c031fc */
  goto L_12c031fc;
L_12c030a5:;
  /* 12c030a5 mov edx, dword ptr [0x12c2ca88] */
  EDX = (r32((uint32_t)(0x12c2ca88)));
  /* 12c030ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c030ae mov dword ptr [0x12c2ca88], edx */
  w32((uint32_t)(0x12c2ca88), (EDX));
  /* 12c030b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c030b8 je 0x12c03103 */
  if (C.zf) goto L_12c03103;
  /* 12c030ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c030c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12c030cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c030d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12c030e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c030e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12c030ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12c030f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c030f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12c030fe jmp 0x12c031a3 */
  goto L_12c031a3;
L_12c03103:;
  /* 12c03103 mov edx, dword ptr [0x12c2e4d8] */
  EDX = (r32((uint32_t)(0x12c2e4d8)));
  /* 12c03109 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0310c mov dword ptr [0x12c2e4d8], edx */
  w32((uint32_t)(0x12c2e4d8), (EDX));
  /* 12c03112 mov eax, dword ptr [0x12c2e4e0] */
  EAX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03117 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0311a mov dword ptr [0x12c2e4e0], eax */
  w32((uint32_t)(0x12c2e4e0), (EAX));
  /* 12c0311f mov ecx, dword ptr [0x12c2e4e0] */
  ECX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03125 cmp ecx, dword ptr [0x12c2e4e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2e4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0312b jbe 0x12c03139 */
  if ((C.cf||C.zf)) goto L_12c03139;
  /* 12c0312d mov edx, dword ptr [0x12c2e4e0] */
  EDX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03133 mov dword ptr [0x12c2e4e4], edx */
  w32((uint32_t)(0x12c2e4e4), (EDX));
L_12c03139:;
  /* 12c03139 cmp dword ptr [0x12c2e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03140 je 0x12c0314f */
  if (C.zf) goto L_12c0314f;
  /* 12c03142 mov eax, dword ptr [0x12c2e4dc] */
  EAX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c03147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0314a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c0314d jmp 0x12c03158 */
  goto L_12c03158;
L_12c0314f:;
  /* 12c0314f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03152 mov dword ptr [0x12c2e4d4], edx */
  w32((uint32_t)(0x12c2e4d4), (EDX));
L_12c03158:;
  /* 12c03158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0315b mov ecx, dword ptr [0x12c2e4dc] */
  ECX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c03161 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c03163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03166 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12c0316d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03173 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12c03176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0317c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12c0317f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03185 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12c03188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0318b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0318e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12c03191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03197 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12c0319a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0319d mov dword ptr [0x12c2e4dc], ecx */
  w32((uint32_t)(0x12c2e4dc), (ECX));
L_12c031a3:;
  /* 12c031a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c031a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c031a7 mov dl, byte ptr [0x12c2ca90] */
  DL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c031ad push edx */
  push32((uint32_t)(EDX));
  /* 12c031ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c031b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c031b4 push eax */
  push32((uint32_t)(EAX));
  /* 12c031b5 call 0x12c06b90 */
  push32(0x12c031bau); f_12c06b90();
  /* 12c031ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c031bd push 4 */
  push32((uint32_t)(0x4u));
  /* 12c031bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c031c1 mov cl, byte ptr [0x12c2ca90] */
  CL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c031c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c031c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c031cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c031ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12c031d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c031d3 call 0x12c06b90 */
  push32(0x12c031d8u); f_12c06b90();
  /* 12c031d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c031db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c031de push edx */
  push32((uint32_t)(EDX));
  /* 12c031df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c031e1 mov al, byte ptr [0x12c2ca92] */
  AL = (r8((uint32_t)(0x12c2ca92)));
  /* 12c031e6 push eax */
  push32((uint32_t)(EAX));
  /* 12c031e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c031ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c031ed push ecx */
  push32((uint32_t)(ECX));
  /* 12c031ee call 0x12c06b90 */
  push32(0x12c031f3u); f_12c06b90();
  /* 12c031f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c031f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c031f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c031fc:;
  /* 12c031fc pop edi */
  EDI = (pop32());
  /* 12c031fd pop esi */
  ESI = (pop32());
  /* 12c031fe pop ebx */
  EBX = (pop32());
  /* 12c031ff mov esp, ebp */
  ESP = (EBP);
  /* 12c03201 pop ebp */
  EBP = (pop32());
  /* 12c03202 ret  */
  ESPCHK(0x12c02ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x12c03210 (27 bytes, 13 insns) */
void f_12c03210(void) {
  FTRACE(0x12c03210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03210 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03211 mov ebp, esp */
  EBP = (ESP);
  /* 12c03213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03217 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0321c push eax */
  push32((uint32_t)(EAX));
  /* 12c0321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03220 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03221 call 0x12c03230 */
  push32(0x12c03226u); f_12c03230();
  /* 12c03226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03229 pop ebp */
  EBP = (pop32());
  /* 12c0322a ret  */
  ESPCHK(0x12c03210u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12c03230 (96 bytes, 37 insns) */
void f_12c03230(void) {
  FTRACE(0x12c03230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03230 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03231 mov ebp, esp */
  EBP = (ESP);
  /* 12c03233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03239 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0323d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12c03240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c03243 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c03247 push edx */
  push32((uint32_t)(EDX));
  /* 12c03248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0324b push eax */
  push32((uint32_t)(EAX));
  /* 12c0324c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0324f push ecx */
  push32((uint32_t)(ECX));
  /* 12c03250 call 0x12c02e20 */
  push32(0x12c03255u); f_12c02e20();
  /* 12c03255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0325b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0325f je 0x12c03289 */
  if (C.zf) goto L_12c03289;
  /* 12c03261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03264 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c03267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0326a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0326d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c03270:;
  /* 12c03270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03273 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03276 jae 0x12c03289 */
  if (!C.cf) goto L_12c03289;
  /* 12c03278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0327b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c0327e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c03287 jmp 0x12c03270 */
  goto L_12c03270;
L_12c03289:;
  /* 12c03289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0328c mov esp, ebp */
  ESP = (EBP);
  /* 12c0328e pop ebp */
  EBP = (pop32());
  /* 12c0328f ret  */
  ESPCHK(0x12c03230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x12c03290 (27 bytes, 13 insns) */
void f_12c03290(void) {
  FTRACE(0x12c03290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03290 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03291 mov ebp, esp */
  EBP = (ESP);
  /* 12c03293 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03295 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03297 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0329c push eax */
  push32((uint32_t)(EAX));
  /* 12c0329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c032a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c032a1 call 0x12c032b0 */
  push32(0x12c032a6u); f_12c032b0();
  /* 12c032a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c032a9 pop ebp */
  EBP = (pop32());
  /* 12c032aa ret  */
  ESPCHK(0x12c03290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x12c032b0 (64 bytes, 27 insns) */
void f_12c032b0(void) {
  FTRACE(0x12c032b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c032b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c032b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c032b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c032b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c032b6 call 0x12c06820 */
  push32(0x12c032bbu); f_12c06820();
  /* 12c032bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c032be push 1 */
  push32((uint32_t)(0x1u));
  /* 12c032c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c032c3 push eax */
  push32((uint32_t)(EAX));
  /* 12c032c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c032c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c032c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c032cb push edx */
  push32((uint32_t)(EDX));
  /* 12c032cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c032cf push eax */
  push32((uint32_t)(EAX));
  /* 12c032d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c032d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c032d4 call 0x12c032f0 */
  push32(0x12c032d9u); f_12c032f0();
  /* 12c032d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c032dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c032df push 9 */
  push32((uint32_t)(0x9u));
  /* 12c032e1 call 0x12c068c0 */
  push32(0x12c032e6u); f_12c068c0();
  /* 12c032e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c032e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c032ec mov esp, ebp */
  ESP = (EBP);
  /* 12c032ee pop ebp */
  EBP = (pop32());
  /* 12c032ef ret  */
  ESPCHK(0x12c032b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x12c032f0 (1297 bytes, 431 insns) */
void f_12c032f0(void) {
  FTRACE(0x12c032f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c032f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c032f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c032f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c032f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c032f7 push esi */
  push32((uint32_t)(ESI));
  /* 12c032f8 push edi */
  push32((uint32_t)(EDI));
  /* 12c032f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c03300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03304 jne 0x12c03323 */
  if (!C.zf) goto L_12c03323;
  /* 12c03306 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c03309 push eax */
  push32((uint32_t)(EAX));
  /* 12c0330a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0330d push ecx */
  push32((uint32_t)(ECX));
  /* 12c0330e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03311 push edx */
  push32((uint32_t)(EDX));
  /* 12c03312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03315 push eax */
  push32((uint32_t)(EAX));
  /* 12c03316 call 0x12c02e20 */
  push32(0x12c0331bu); f_12c02e20();
  /* 12c0331b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0331e jmp 0x12c037fa */
  goto L_12c037fa;
L_12c03323:;
  /* 12c03323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03327 je 0x12c03346 */
  if (C.zf) goto L_12c03346;
  /* 12c03329 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0332d jne 0x12c03346 */
  if (!C.zf) goto L_12c03346;
  /* 12c0332f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03332 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03336 push edx */
  push32((uint32_t)(EDX));
  /* 12c03337 call 0x12c038b0 */
  push32(0x12c0333cu); f_12c038b0();
  /* 12c0333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0333f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03341 jmp 0x12c037fa */
  goto L_12c037fa;
L_12c03346:;
  /* 12c03346 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c0334b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0334e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03350 je 0x12c03382 */
  if (C.zf) goto L_12c03382;
L_12c03352:;
  /* 12c03352 call 0x12c03fc0 */
  push32(0x12c03357u); f_12c03fc0();
  /* 12c03357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03359 jne 0x12c0337c */
  if (!C.zf) goto L_12c0337c;
  /* 12c0335b push 0x12c294a8 */
  push32((uint32_t)(0x12c294a8u));
  /* 12c03360 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03362 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12c03367 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c0336c push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0336e call 0x12c01ee0 */
  push32(0x12c03373u); f_12c01ee0();
  /* 12c03373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03379 jne 0x12c0337c */
  if (!C.zf) goto L_12c0337c;
  /* 12c0337b int3  */
  x86_unimpl("int3 @ 0x12c0337b");
L_12c0337c:;
  /* 12c0337c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0337e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03380 jne 0x12c03352 */
  if (!C.zf) goto L_12c03352;
L_12c03382:;
  /* 12c03382 mov edx, dword ptr [0x12c2ca88] */
  EDX = (r32((uint32_t)(0x12c2ca88)));
  /* 12c03388 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c0338b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0338e cmp eax, dword ptr [0x12c2ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12c2ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03394 jne 0x12c03397 */
  if (!C.zf) goto L_12c03397;
  /* 12c03396 int3  */
  x86_unimpl("int3 @ 0x12c03396");
L_12c03397:;
  /* 12c03397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0339a push ecx */
  push32((uint32_t)(ECX));
  /* 12c0339b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c0339e push edx */
  push32((uint32_t)(EDX));
  /* 12c0339f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c033a2 push eax */
  push32((uint32_t)(EAX));
  /* 12c033a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c033a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c033a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c033aa push edx */
  push32((uint32_t)(EDX));
  /* 12c033ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c033ae push eax */
  push32((uint32_t)(EAX));
  /* 12c033af push 2 */
  push32((uint32_t)(0x2u));
  /* 12c033b1 call dword ptr [0x12c2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2cc90))), 0x12c033b7u);
  /* 12c033b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c033ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c033bc jne 0x12c0341c */
  if (!C.zf) goto L_12c0341c;
  /* 12c033be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c033c2 je 0x12c033ef */
  if (C.zf) goto L_12c033ef;
L_12c033c4:;
  /* 12c033c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c033c7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c033c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c033cb push edx */
  push32((uint32_t)(EDX));
  /* 12c033cc push 0x12c29624 */
  push32((uint32_t)(0x12c29624u));
  /* 12c033d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033d9 call 0x12c01ee0 */
  push32(0x12c033deu); f_12c01ee0();
  /* 12c033de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c033e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c033e4 jne 0x12c033e7 */
  if (!C.zf) goto L_12c033e7;
  /* 12c033e6 int3  */
  x86_unimpl("int3 @ 0x12c033e6");
L_12c033e7:;
  /* 12c033e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c033e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c033eb jne 0x12c033c4 */
  if (!C.zf) goto L_12c033c4;
  /* 12c033ed jmp 0x12c03415 */
  goto L_12c03415;
L_12c033ef:;
  /* 12c033ef push 0x12c29600 */
  push32((uint32_t)(0x12c29600u));
  /* 12c033f4 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c033f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033fb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033fd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c033ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03401 call 0x12c01ee0 */
  push32(0x12c03406u); f_12c01ee0();
  /* 12c03406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0340c jne 0x12c0340f */
  if (!C.zf) goto L_12c0340f;
  /* 12c0340e int3  */
  x86_unimpl("int3 @ 0x12c0340e");
L_12c0340f:;
  /* 12c0340f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03413 jne 0x12c033ef */
  if (!C.zf) goto L_12c033ef;
L_12c03415:;
  /* 12c03415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03417 jmp 0x12c037fa */
  goto L_12c037fa;
L_12c0341c:;
  /* 12c0341c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03420 jbe 0x12c0344e */
  if ((C.cf||C.zf)) goto L_12c0344e;
L_12c03422:;
  /* 12c03422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03425 push edx */
  push32((uint32_t)(EDX));
  /* 12c03426 push 0x12c295d0 */
  push32((uint32_t)(0x12c295d0u));
  /* 12c0342b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0342d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0342f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03431 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03433 call 0x12c01ee0 */
  push32(0x12c03438u); f_12c01ee0();
  /* 12c03438 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0343b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0343e jne 0x12c03441 */
  if (!C.zf) goto L_12c03441;
  /* 12c03440 int3  */
  x86_unimpl("int3 @ 0x12c03440");
L_12c03441:;
  /* 12c03441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03445 jne 0x12c03422 */
  if (!C.zf) goto L_12c03422;
  /* 12c03447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03449 jmp 0x12c037fa */
  goto L_12c037fa;
L_12c0344e:;
  /* 12c0344e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03452 je 0x12c03496 */
  if (C.zf) goto L_12c03496;
  /* 12c03454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03457 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0345d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03460 je 0x12c03496 */
  if (C.zf) goto L_12c03496;
  /* 12c03462 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03465 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0346b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0346e je 0x12c03496 */
  if (C.zf) goto L_12c03496;
L_12c03470:;
  /* 12c03470 push 0x12c293e4 */
  push32((uint32_t)(0x12c293e4u));
  /* 12c03475 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c0347a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0347c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0347e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03480 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03482 call 0x12c01ee0 */
  push32(0x12c03487u); f_12c01ee0();
  /* 12c03487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0348a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0348d jne 0x12c03490 */
  if (!C.zf) goto L_12c03490;
  /* 12c0348f int3  */
  x86_unimpl("int3 @ 0x12c0348f");
L_12c03490:;
  /* 12c03490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03494 jne 0x12c03470 */
  if (!C.zf) goto L_12c03470;
L_12c03496:;
  /* 12c03496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03499 push ecx */
  push32((uint32_t)(ECX));
  /* 12c0349a call 0x12c04420 */
  push32(0x12c0349fu); f_12c04420();
  /* 12c0349f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c034a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c034a4 jne 0x12c034c7 */
  if (!C.zf) goto L_12c034c7;
  /* 12c034a6 push 0x12c295ac */
  push32((uint32_t)(0x12c295acu));
  /* 12c034ab push 0 */
  push32((uint32_t)(0x0u));
  /* 12c034ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12c034b2 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c034b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c034b9 call 0x12c01ee0 */
  push32(0x12c034beu); f_12c01ee0();
  /* 12c034be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c034c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c034c4 jne 0x12c034c7 */
  if (!C.zf) goto L_12c034c7;
  /* 12c034c6 int3  */
  x86_unimpl("int3 @ 0x12c034c6");
L_12c034c7:;
  /* 12c034c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c034c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c034cb jne 0x12c03496 */
  if (!C.zf) goto L_12c03496;
  /* 12c034cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c034d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c034d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c034d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c034d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c034dd jne 0x12c034e6 */
  if (!C.zf) goto L_12c034e6;
  /* 12c034df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12c034e6:;
  /* 12c034e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c034ea je 0x12c0352a */
  if (C.zf) goto L_12c0352a;
L_12c034ec:;
  /* 12c034ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c034ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c034f6 jne 0x12c03501 */
  if (!C.zf) goto L_12c03501;
  /* 12c034f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c034fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c034ff je 0x12c03522 */
  if (C.zf) goto L_12c03522;
L_12c03501:;
  /* 12c03501 push 0x12c29564 */
  push32((uint32_t)(0x12c29564u));
  /* 12c03506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03508 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12c0350d push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03512 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03514 call 0x12c01ee0 */
  push32(0x12c03519u); f_12c01ee0();
  /* 12c03519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0351c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0351f jne 0x12c03522 */
  if (!C.zf) goto L_12c03522;
  /* 12c03521 int3  */
  x86_unimpl("int3 @ 0x12c03521");
L_12c03522:;
  /* 12c03522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03526 jne 0x12c034ec */
  if (!C.zf) goto L_12c034ec;
  /* 12c03528 jmp 0x12c0358e */
  goto L_12c0358e;
L_12c0352a:;
  /* 12c0352a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0352d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03538 jne 0x12c0354f */
  if (!C.zf) goto L_12c0354f;
  /* 12c0353a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0353d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c03543 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03546 jne 0x12c0354f */
  if (!C.zf) goto L_12c0354f;
  /* 12c03548 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12c0354f:;
  /* 12c0354f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03552 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03555 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0355a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0355d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c03563 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03565 je 0x12c03588 */
  if (C.zf) goto L_12c03588;
  /* 12c03567 push 0x12c29528 */
  push32((uint32_t)(0x12c29528u));
  /* 12c0356c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0356e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12c03573 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03578 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0357a call 0x12c01ee0 */
  push32(0x12c0357fu); f_12c01ee0();
  /* 12c0357f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03582 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03585 jne 0x12c03588 */
  if (!C.zf) goto L_12c03588;
  /* 12c03587 int3  */
  x86_unimpl("int3 @ 0x12c03587");
L_12c03588:;
  /* 12c03588 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0358a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0358c jne 0x12c0354f */
  if (!C.zf) goto L_12c0354f;
L_12c0358e:;
  /* 12c0358e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03592 je 0x12c035b9 */
  if (C.zf) goto L_12c035b9;
  /* 12c03594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03597 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0359a push eax */
  push32((uint32_t)(EAX));
  /* 12c0359b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0359e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0359f call 0x12c06da0 */
  push32(0x12c035a4u); f_12c06da0();
  /* 12c035a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c035a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c035aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c035ae jne 0x12c035b7 */
  if (!C.zf) goto L_12c035b7;
  /* 12c035b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c035b2 jmp 0x12c037fa */
  goto L_12c037fa;
L_12c035b7:;
  /* 12c035b7 jmp 0x12c035dc */
  goto L_12c035dc;
L_12c035b9:;
  /* 12c035b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c035bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c035bf push edx */
  push32((uint32_t)(EDX));
  /* 12c035c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c035c3 push eax */
  push32((uint32_t)(EAX));
  /* 12c035c4 call 0x12c06cf0 */
  push32(0x12c035c9u); f_12c06cf0();
  /* 12c035c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c035cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c035cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c035d3 jne 0x12c035dc */
  if (!C.zf) goto L_12c035dc;
  /* 12c035d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c035d7 jmp 0x12c037fa */
  goto L_12c037fa;
L_12c035dc:;
  /* 12c035dc mov ecx, dword ptr [0x12c2ca88] */
  ECX = (r32((uint32_t)(0x12c2ca88)));
  /* 12c035e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c035e5 mov dword ptr [0x12c2ca88], ecx */
  w32((uint32_t)(0x12c2ca88), (ECX));
  /* 12c035eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c035ef jne 0x12c03647 */
  if (!C.zf) goto L_12c03647;
  /* 12c035f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c035f4 mov eax, dword ptr [0x12c2e4d8] */
  EAX = (r32((uint32_t)(0x12c2e4d8)));
  /* 12c035f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c035fc mov dword ptr [0x12c2e4d8], eax */
  w32((uint32_t)(0x12c2e4d8), (EAX));
  /* 12c03601 mov ecx, dword ptr [0x12c2e4d8] */
  ECX = (r32((uint32_t)(0x12c2e4d8)));
  /* 12c03607 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0360a mov dword ptr [0x12c2e4d8], ecx */
  w32((uint32_t)(0x12c2e4d8), (ECX));
  /* 12c03610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03613 mov eax, dword ptr [0x12c2e4e0] */
  EAX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03618 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0361b mov dword ptr [0x12c2e4e0], eax */
  w32((uint32_t)(0x12c2e4e0), (EAX));
  /* 12c03620 mov ecx, dword ptr [0x12c2e4e0] */
  ECX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03626 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03629 mov dword ptr [0x12c2e4e0], ecx */
  w32((uint32_t)(0x12c2e4e0), (ECX));
  /* 12c0362f mov edx, dword ptr [0x12c2e4e0] */
  EDX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03635 cmp edx, dword ptr [0x12c2e4e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2e4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0363b jbe 0x12c03647 */
  if ((C.cf||C.zf)) goto L_12c03647;
  /* 12c0363d mov eax, dword ptr [0x12c2e4e0] */
  EAX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03642 mov dword ptr [0x12c2e4e4], eax */
  w32((uint32_t)(0x12c2e4e4), (EAX));
L_12c03647:;
  /* 12c03647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0364a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0364d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c03650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03656 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03659 jbe 0x12c0367f */
  if ((C.cf||C.zf)) goto L_12c0367f;
  /* 12c0365b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0365e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03661 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03664 push edx */
  push32((uint32_t)(EDX));
  /* 12c03665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03667 mov al, byte ptr [0x12c2ca92] */
  AL = (r8((uint32_t)(0x12c2ca92)));
  /* 12c0366c push eax */
  push32((uint32_t)(EAX));
  /* 12c0366d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03673 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03676 push edx */
  push32((uint32_t)(EDX));
  /* 12c03677 call 0x12c06b90 */
  push32(0x12c0367cu); f_12c06b90();
  /* 12c0367c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0367f:;
  /* 12c0367f push 4 */
  push32((uint32_t)(0x4u));
  /* 12c03681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03683 mov al, byte ptr [0x12c2ca90] */
  AL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c03688 push eax */
  push32((uint32_t)(EAX));
  /* 12c03689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0368c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0368f push ecx */
  push32((uint32_t)(ECX));
  /* 12c03690 call 0x12c06b90 */
  push32(0x12c03695u); f_12c06b90();
  /* 12c03695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0369c jne 0x12c036b9 */
  if (!C.zf) goto L_12c036b9;
  /* 12c0369e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c036a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c036a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c036a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c036aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c036ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12c036b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c036b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c036b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12c036b9:;
  /* 12c036b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c036bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c036bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12c036c2:;
  /* 12c036c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c036c6 jne 0x12c036f7 */
  if (!C.zf) goto L_12c036f7;
  /* 12c036c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c036cc jne 0x12c036d6 */
  if (!C.zf) goto L_12c036d6;
  /* 12c036ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c036d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c036d4 je 0x12c036f7 */
  if (C.zf) goto L_12c036f7;
L_12c036d6:;
  /* 12c036d6 push 0x12c294f4 */
  push32((uint32_t)(0x12c294f4u));
  /* 12c036db push 0 */
  push32((uint32_t)(0x0u));
  /* 12c036dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12c036e2 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c036e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c036e9 call 0x12c01ee0 */
  push32(0x12c036eeu); f_12c01ee0();
  /* 12c036ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c036f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c036f4 jne 0x12c036f7 */
  if (!C.zf) goto L_12c036f7;
  /* 12c036f6 int3  */
  x86_unimpl("int3 @ 0x12c036f6");
L_12c036f7:;
  /* 12c036f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c036f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c036fb jne 0x12c036c2 */
  if (!C.zf) goto L_12c036c2;
  /* 12c036fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03700 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03703 je 0x12c0370b */
  if (C.zf) goto L_12c0370b;
  /* 12c03705 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03709 je 0x12c03713 */
  if (C.zf) goto L_12c03713;
L_12c0370b:;
  /* 12c0370b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0370e jmp 0x12c037fa */
  goto L_12c037fa;
L_12c03713:;
  /* 12c03713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03719 je 0x12c0372b */
  if (C.zf) goto L_12c0372b;
  /* 12c0371b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0371e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c03720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c03726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c03729 jmp 0x12c03767 */
  goto L_12c03767;
L_12c0372b:;
  /* 12c0372b mov eax, dword ptr [0x12c2e4d4] */
  EAX = (r32((uint32_t)(0x12c2e4d4)));
  /* 12c03730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03733 je 0x12c03756 */
  if (C.zf) goto L_12c03756;
  /* 12c03735 push 0x12c294d8 */
  push32((uint32_t)(0x12c294d8u));
  /* 12c0373a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0373c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12c03741 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03746 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03748 call 0x12c01ee0 */
  push32(0x12c0374du); f_12c01ee0();
  /* 12c0374d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03753 jne 0x12c03756 */
  if (!C.zf) goto L_12c03756;
  /* 12c03755 int3  */
  x86_unimpl("int3 @ 0x12c03755");
L_12c03756:;
  /* 12c03756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0375a jne 0x12c0372b */
  if (!C.zf) goto L_12c0372b;
  /* 12c0375c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0375f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c03762 mov dword ptr [0x12c2e4d4], eax */
  w32((uint32_t)(0x12c2e4d4), (EAX));
L_12c03767:;
  /* 12c03767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0376a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0376e je 0x12c0377f */
  if (C.zf) goto L_12c0377f;
  /* 12c03770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c03776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c03779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0377b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c0377d jmp 0x12c037ba */
  goto L_12c037ba;
L_12c0377f:;
  /* 12c0377f mov eax, dword ptr [0x12c2e4dc] */
  EAX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c03784 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03787 je 0x12c037aa */
  if (C.zf) goto L_12c037aa;
  /* 12c03789 push 0x12c294bc */
  push32((uint32_t)(0x12c294bcu));
  /* 12c0378e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03790 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12c03795 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c0379a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0379c call 0x12c01ee0 */
  push32(0x12c037a1u); f_12c01ee0();
  /* 12c037a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c037a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c037a7 jne 0x12c037aa */
  if (!C.zf) goto L_12c037aa;
  /* 12c037a9 int3  */
  x86_unimpl("int3 @ 0x12c037a9");
L_12c037aa:;
  /* 12c037aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c037ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c037ae jne 0x12c0377f */
  if (!C.zf) goto L_12c0377f;
  /* 12c037b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c037b5 mov dword ptr [0x12c2e4dc], eax */
  w32((uint32_t)(0x12c2e4dc), (EAX));
L_12c037ba:;
  /* 12c037ba cmp dword ptr [0x12c2e4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c037c1 je 0x12c037d1 */
  if (C.zf) goto L_12c037d1;
  /* 12c037c3 mov ecx, dword ptr [0x12c2e4dc] */
  ECX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c037c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12c037cf jmp 0x12c037d9 */
  goto L_12c037d9;
L_12c037d1:;
  /* 12c037d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037d4 mov dword ptr [0x12c2e4d4], eax */
  w32((uint32_t)(0x12c2e4d4), (EAX));
L_12c037d9:;
  /* 12c037d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037dc mov edx, dword ptr [0x12c2e4dc] */
  EDX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c037e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c037e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12c037ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c037f1 mov dword ptr [0x12c2e4dc], ecx */
  w32((uint32_t)(0x12c2e4dc), (ECX));
  /* 12c037f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c037fa:;
  /* 12c037fa pop edi */
  EDI = (pop32());
  /* 12c037fb pop esi */
  ESI = (pop32());
  /* 12c037fc pop ebx */
  EBX = (pop32());
  /* 12c037fd mov esp, ebp */
  ESP = (EBP);
  /* 12c037ff pop ebp */
  EBP = (pop32());
  /* 12c03800 ret  */
  ESPCHK(0x12c032f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x12c03810 (27 bytes, 13 insns) */
void f_12c03810(void) {
  FTRACE(0x12c03810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03810 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03811 mov ebp, esp */
  EBP = (ESP);
  /* 12c03813 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03817 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0381c push eax */
  push32((uint32_t)(EAX));
  /* 12c0381d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03820 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03821 call 0x12c03830 */
  push32(0x12c03826u); f_12c03830();
  /* 12c03826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03829 pop ebp */
  EBP = (pop32());
  /* 12c0382a ret  */
  ESPCHK(0x12c03810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x12c03830 (64 bytes, 27 insns) */
void f_12c03830(void) {
  FTRACE(0x12c03830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03830 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03831 mov ebp, esp */
  EBP = (ESP);
  /* 12c03833 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03834 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03836 call 0x12c06820 */
  push32(0x12c0383bu); f_12c06820();
  /* 12c0383b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0383e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03840 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c03843 push eax */
  push32((uint32_t)(EAX));
  /* 12c03844 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c03847 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0384b push edx */
  push32((uint32_t)(EDX));
  /* 12c0384c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0384f push eax */
  push32((uint32_t)(EAX));
  /* 12c03850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03853 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03854 call 0x12c032f0 */
  push32(0x12c03859u); f_12c032f0();
  /* 12c03859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0385c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0385f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03861 call 0x12c068c0 */
  push32(0x12c03866u); f_12c068c0();
  /* 12c03866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0386c mov esp, ebp */
  ESP = (EBP);
  /* 12c0386e pop ebp */
  EBP = (pop32());
  /* 12c0386f ret  */
  ESPCHK(0x12c03830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003870 @ 0x12c03870 (19 bytes, 9 insns) */
void f_12c03870(void) {
  FTRACE(0x12c03870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03870 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03871 mov ebp, esp */
  EBP = (ESP);
  /* 12c03873 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03878 push eax */
  push32((uint32_t)(EAX));
  /* 12c03879 call 0x12c038b0 */
  push32(0x12c0387eu); f_12c038b0();
  /* 12c0387e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03881 pop ebp */
  EBP = (pop32());
  /* 12c03882 ret  */
  ESPCHK(0x12c03870u, _esp0);
  ESP += 4; return;
}

/* FUN_10003890 @ 0x12c03890 (19 bytes, 9 insns) */
void f_12c03890(void) {
  FTRACE(0x12c03890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03890 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03891 mov ebp, esp */
  EBP = (ESP);
  /* 12c03893 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03898 push eax */
  push32((uint32_t)(EAX));
  /* 12c03899 call 0x12c038e0 */
  push32(0x12c0389eu); f_12c038e0();
  /* 12c0389e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c038a1 pop ebp */
  EBP = (pop32());
  /* 12c038a2 ret  */
  ESPCHK(0x12c03890u, _esp0);
  ESP += 4; return;
}

/* FUN_100038b0 @ 0x12c038b0 (41 bytes, 16 insns) */
void f_12c038b0(void) {
  FTRACE(0x12c038b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c038b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c038b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c038b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c038b5 call 0x12c06820 */
  push32(0x12c038bau); f_12c06820();
  /* 12c038ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c038bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c038c0 push eax */
  push32((uint32_t)(EAX));
  /* 12c038c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c038c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c038c5 call 0x12c038e0 */
  push32(0x12c038cau); f_12c038e0();
  /* 12c038ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c038cd push 9 */
  push32((uint32_t)(0x9u));
  /* 12c038cf call 0x12c068c0 */
  push32(0x12c038d4u); f_12c068c0();
  /* 12c038d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c038d7 pop ebp */
  EBP = (pop32());
  /* 12c038d8 ret  */
  ESPCHK(0x12c038b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x12c038e0 (1004 bytes, 342 insns) */
void f_12c038e0(void) {
  FTRACE(0x12c038e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c038e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c038e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c038e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c038e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c038e5 push esi */
  push32((uint32_t)(ESI));
  /* 12c038e6 push edi */
  push32((uint32_t)(EDI));
  /* 12c038e7 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c038ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c038ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c038f1 je 0x12c03923 */
  if (C.zf) goto L_12c03923;
L_12c038f3:;
  /* 12c038f3 call 0x12c03fc0 */
  push32(0x12c038f8u); f_12c03fc0();
  /* 12c038f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c038fa jne 0x12c0391d */
  if (!C.zf) goto L_12c0391d;
  /* 12c038fc push 0x12c294a8 */
  push32((uint32_t)(0x12c294a8u));
  /* 12c03901 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03903 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12c03908 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c0390d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0390f call 0x12c01ee0 */
  push32(0x12c03914u); f_12c01ee0();
  /* 12c03914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0391a jne 0x12c0391d */
  if (!C.zf) goto L_12c0391d;
  /* 12c0391c int3  */
  x86_unimpl("int3 @ 0x12c0391c");
L_12c0391d:;
  /* 12c0391d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0391f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03921 jne 0x12c038f3 */
  if (!C.zf) goto L_12c038f3;
L_12c03923:;
  /* 12c03923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03927 jne 0x12c0392e */
  if (!C.zf) goto L_12c0392e;
  /* 12c03929 jmp 0x12c03cc5 */
  goto L_12c03cc5;
L_12c0392e:;
  /* 12c0392e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03937 push edx */
  push32((uint32_t)(EDX));
  /* 12c03938 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0393a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0393d push eax */
  push32((uint32_t)(EAX));
  /* 12c0393e push 3 */
  push32((uint32_t)(0x3u));
  /* 12c03940 call dword ptr [0x12c2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2cc90))), 0x12c03946u);
  /* 12c03946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0394b jne 0x12c03978 */
  if (!C.zf) goto L_12c03978;
L_12c0394d:;
  /* 12c0394d push 0x12c2976c */
  push32((uint32_t)(0x12c2976cu));
  /* 12c03952 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c03957 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03959 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0395b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0395d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0395f call 0x12c01ee0 */
  push32(0x12c03964u); f_12c01ee0();
  /* 12c03964 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0396a jne 0x12c0396d */
  if (!C.zf) goto L_12c0396d;
  /* 12c0396c int3  */
  x86_unimpl("int3 @ 0x12c0396c");
L_12c0396d:;
  /* 12c0396d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03971 jne 0x12c0394d */
  if (!C.zf) goto L_12c0394d;
  /* 12c03973 jmp 0x12c03cc5 */
  goto L_12c03cc5;
L_12c03978:;
  /* 12c03978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0397b push edx */
  push32((uint32_t)(EDX));
  /* 12c0397c call 0x12c04420 */
  push32(0x12c03981u); f_12c04420();
  /* 12c03981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03986 jne 0x12c039a9 */
  if (!C.zf) goto L_12c039a9;
  /* 12c03988 push 0x12c295ac */
  push32((uint32_t)(0x12c295acu));
  /* 12c0398d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0398f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12c03994 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03999 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0399b call 0x12c01ee0 */
  push32(0x12c039a0u); f_12c01ee0();
  /* 12c039a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c039a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c039a6 jne 0x12c039a9 */
  if (!C.zf) goto L_12c039a9;
  /* 12c039a8 int3  */
  x86_unimpl("int3 @ 0x12c039a8");
L_12c039a9:;
  /* 12c039a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c039ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c039ad jne 0x12c03978 */
  if (!C.zf) goto L_12c03978;
  /* 12c039af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c039b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c039b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c039b8:;
  /* 12c039b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c039bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c039be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c039c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c039c6 je 0x12c03a0b */
  if (C.zf) goto L_12c03a0b;
  /* 12c039c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c039cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c039cf je 0x12c03a0b */
  if (C.zf) goto L_12c03a0b;
  /* 12c039d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c039d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c039d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c039dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c039df je 0x12c03a0b */
  if (C.zf) goto L_12c03a0b;
  /* 12c039e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c039e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c039e8 je 0x12c03a0b */
  if (C.zf) goto L_12c03a0b;
  /* 12c039ea push 0x12c29744 */
  push32((uint32_t)(0x12c29744u));
  /* 12c039ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12c039f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12c039f6 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c039fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c039fd call 0x12c01ee0 */
  push32(0x12c03a02u); f_12c01ee0();
  /* 12c03a02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03a08 jne 0x12c03a0b */
  if (!C.zf) goto L_12c03a0b;
  /* 12c03a0a int3  */
  x86_unimpl("int3 @ 0x12c03a0a");
L_12c03a0b:;
  /* 12c03a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03a0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c03a0f jne 0x12c039b8 */
  if (!C.zf) goto L_12c039b8;
  /* 12c03a11 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c03a16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c03a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03a1b jne 0x12c03ae6 */
  if (!C.zf) goto L_12c03ae6;
  /* 12c03a21 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c03a23 mov cl, byte ptr [0x12c2ca90] */
  CL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c03a29 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a30 push edx */
  push32((uint32_t)(EDX));
  /* 12c03a31 call 0x12c03f30 */
  push32(0x12c03a36u); f_12c03f30();
  /* 12c03a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03a3b jne 0x12c03a80 */
  if (!C.zf) goto L_12c03a80;
L_12c03a3d:;
  /* 12c03a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a43 push eax */
  push32((uint32_t)(EAX));
  /* 12c03a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c03a4a push edx */
  push32((uint32_t)(EDX));
  /* 12c03a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c03a51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c03a57 mov edx, dword ptr [ecx*4 + 0x12c2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca94)));
  /* 12c03a5e push edx */
  push32((uint32_t)(EDX));
  /* 12c03a5f push 0x12c29718 */
  push32((uint32_t)(0x12c29718u));
  /* 12c03a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03a6c call 0x12c01ee0 */
  push32(0x12c03a71u); f_12c01ee0();
  /* 12c03a71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03a77 jne 0x12c03a7a */
  if (!C.zf) goto L_12c03a7a;
  /* 12c03a79 int3  */
  x86_unimpl("int3 @ 0x12c03a79");
L_12c03a7a:;
  /* 12c03a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03a7e jne 0x12c03a3d */
  if (!C.zf) goto L_12c03a3d;
L_12c03a80:;
  /* 12c03a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c03a82 mov cl, byte ptr [0x12c2ca90] */
  CL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c03a88 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c03a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03a92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12c03a96 push edx */
  push32((uint32_t)(EDX));
  /* 12c03a97 call 0x12c03f30 */
  push32(0x12c03a9cu); f_12c03f30();
  /* 12c03a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03aa1 jne 0x12c03ae6 */
  if (!C.zf) goto L_12c03ae6;
L_12c03aa3:;
  /* 12c03aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03aa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12c03aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03aad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c03ab0 push edx */
  push32((uint32_t)(EDX));
  /* 12c03ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ab4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c03ab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c03abd mov edx, dword ptr [ecx*4 + 0x12c2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca94)));
  /* 12c03ac4 push edx */
  push32((uint32_t)(EDX));
  /* 12c03ac5 push 0x12c296ec */
  push32((uint32_t)(0x12c296ecu));
  /* 12c03aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03acc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03ace push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03ad2 call 0x12c01ee0 */
  push32(0x12c03ad7u); f_12c01ee0();
  /* 12c03ad7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03add jne 0x12c03ae0 */
  if (!C.zf) goto L_12c03ae0;
  /* 12c03adf int3  */
  x86_unimpl("int3 @ 0x12c03adf");
L_12c03ae0:;
  /* 12c03ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03ae4 jne 0x12c03aa3 */
  if (!C.zf) goto L_12c03aa3;
L_12c03ae6:;
  /* 12c03ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03aed jne 0x12c03b5b */
  if (!C.zf) goto L_12c03b5b;
L_12c03aef:;
  /* 12c03aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03af2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03af9 jne 0x12c03b04 */
  if (!C.zf) goto L_12c03b04;
  /* 12c03afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03afe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b02 je 0x12c03b25 */
  if (C.zf) goto L_12c03b25;
L_12c03b04:;
  /* 12c03b04 push 0x12c296ac */
  push32((uint32_t)(0x12c296acu));
  /* 12c03b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03b0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12c03b10 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03b17 call 0x12c01ee0 */
  push32(0x12c03b1cu); f_12c01ee0();
  /* 12c03b1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03b1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b22 jne 0x12c03b25 */
  if (!C.zf) goto L_12c03b25;
  /* 12c03b24 int3  */
  x86_unimpl("int3 @ 0x12c03b24");
L_12c03b25:;
  /* 12c03b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03b29 jne 0x12c03aef */
  if (!C.zf) goto L_12c03aef;
  /* 12c03b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c03b31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03b34 push eax */
  push32((uint32_t)(EAX));
  /* 12c03b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03b37 mov cl, byte ptr [0x12c2ca91] */
  CL = (r8((uint32_t)(0x12c2ca91)));
  /* 12c03b3d push ecx */
  push32((uint32_t)(ECX));
  /* 12c03b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03b41 push edx */
  push32((uint32_t)(EDX));
  /* 12c03b42 call 0x12c06b90 */
  push32(0x12c03b47u); f_12c06b90();
  /* 12c03b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03b4d push eax */
  push32((uint32_t)(EAX));
  /* 12c03b4e call 0x12c06f90 */
  push32(0x12c03b53u); f_12c06f90();
  /* 12c03b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03b56 jmp 0x12c03cc5 */
  goto L_12c03cc5;
L_12c03b5b:;
  /* 12c03b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03b5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b62 jne 0x12c03b71 */
  if (!C.zf) goto L_12c03b71;
  /* 12c03b64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b68 jne 0x12c03b71 */
  if (!C.zf) goto L_12c03b71;
  /* 12c03b6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12c03b71:;
  /* 12c03b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03b74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03b77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b7a je 0x12c03b9d */
  if (C.zf) goto L_12c03b9d;
  /* 12c03b7c push 0x12c2968c */
  push32((uint32_t)(0x12c2968cu));
  /* 12c03b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03b83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12c03b88 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03b8f call 0x12c01ee0 */
  push32(0x12c03b94u); f_12c01ee0();
  /* 12c03b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03b9a jne 0x12c03b9d */
  if (!C.zf) goto L_12c03b9d;
  /* 12c03b9c int3  */
  x86_unimpl("int3 @ 0x12c03b9c");
L_12c03b9d:;
  /* 12c03b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03ba1 jne 0x12c03b71 */
  if (!C.zf) goto L_12c03b71;
  /* 12c03ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ba6 mov eax, dword ptr [0x12c2e4e0] */
  EAX = (r32((uint32_t)(0x12c2e4e0)));
  /* 12c03bab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03bae mov dword ptr [0x12c2e4e0], eax */
  w32((uint32_t)(0x12c2e4e0), (EAX));
  /* 12c03bb3 mov ecx, dword ptr [0x12c2ca84] */
  ECX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c03bb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12c03bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03bbe jne 0x12c03c9c */
  if (!C.zf) goto L_12c03c9c;
  /* 12c03bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03bca je 0x12c03bdc */
  if (C.zf) goto L_12c03bdc;
  /* 12c03bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c03bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03bd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c03bd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c03bda jmp 0x12c03c1a */
  goto L_12c03c1a;
L_12c03bdc:;
  /* 12c03bdc mov ecx, dword ptr [0x12c2e4d4] */
  ECX = (r32((uint32_t)(0x12c2e4d4)));
  /* 12c03be2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03be5 je 0x12c03c08 */
  if (C.zf) goto L_12c03c08;
  /* 12c03be7 push 0x12c29674 */
  push32((uint32_t)(0x12c29674u));
  /* 12c03bec push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03bee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12c03bf3 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03bfa call 0x12c01ee0 */
  push32(0x12c03bffu); f_12c01ee0();
  /* 12c03bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03c05 jne 0x12c03c08 */
  if (!C.zf) goto L_12c03c08;
  /* 12c03c07 int3  */
  x86_unimpl("int3 @ 0x12c03c07");
L_12c03c08:;
  /* 12c03c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c03c0c jne 0x12c03bdc */
  if (!C.zf) goto L_12c03bdc;
  /* 12c03c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c03c14 mov dword ptr [0x12c2e4d4], ecx */
  w32((uint32_t)(0x12c2e4d4), (ECX));
L_12c03c1a:;
  /* 12c03c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03c21 je 0x12c03c32 */
  if (C.zf) goto L_12c03c32;
  /* 12c03c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c03c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c03c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c03c30 jmp 0x12c03c6f */
  goto L_12c03c6f;
L_12c03c32:;
  /* 12c03c32 mov ecx, dword ptr [0x12c2e4dc] */
  ECX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c03c38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03c3b je 0x12c03c5e */
  if (C.zf) goto L_12c03c5e;
  /* 12c03c3d push 0x12c2965c */
  push32((uint32_t)(0x12c2965cu));
  /* 12c03c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03c44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12c03c49 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03c50 call 0x12c01ee0 */
  push32(0x12c03c55u); f_12c01ee0();
  /* 12c03c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03c5b jne 0x12c03c5e */
  if (!C.zf) goto L_12c03c5e;
  /* 12c03c5d int3  */
  x86_unimpl("int3 @ 0x12c03c5d");
L_12c03c5e:;
  /* 12c03c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c03c62 jne 0x12c03c32 */
  if (!C.zf) goto L_12c03c32;
  /* 12c03c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c03c69 mov dword ptr [0x12c2e4dc], ecx */
  w32((uint32_t)(0x12c2e4dc), (ECX));
L_12c03c6f:;
  /* 12c03c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c03c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03c78 push eax */
  push32((uint32_t)(EAX));
  /* 12c03c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03c7b mov cl, byte ptr [0x12c2ca91] */
  CL = (r8((uint32_t)(0x12c2ca91)));
  /* 12c03c81 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c85 push edx */
  push32((uint32_t)(EDX));
  /* 12c03c86 call 0x12c06b90 */
  push32(0x12c03c8bu); f_12c06b90();
  /* 12c03c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c91 push eax */
  push32((uint32_t)(EAX));
  /* 12c03c92 call 0x12c06f90 */
  push32(0x12c03c97u); f_12c06f90();
  /* 12c03c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03c9a jmp 0x12c03cc5 */
  goto L_12c03cc5;
L_12c03c9c:;
  /* 12c03c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03c9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12c03ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ca9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c03cac push eax */
  push32((uint32_t)(EAX));
  /* 12c03cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03caf mov cl, byte ptr [0x12c2ca91] */
  CL = (r8((uint32_t)(0x12c2ca91)));
  /* 12c03cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03cb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03cbc push edx */
  push32((uint32_t)(EDX));
  /* 12c03cbd call 0x12c06b90 */
  push32(0x12c03cc2u); f_12c06b90();
  /* 12c03cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c03cc5:;
  /* 12c03cc5 pop edi */
  EDI = (pop32());
  /* 12c03cc6 pop esi */
  ESI = (pop32());
  /* 12c03cc7 pop ebx */
  EBX = (pop32());
  /* 12c03cc8 mov esp, ebp */
  ESP = (EBP);
  /* 12c03cca pop ebp */
  EBP = (pop32());
  /* 12c03ccb ret  */
  ESPCHK(0x12c038e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x12c03cd0 (19 bytes, 9 insns) */
void f_12c03cd0(void) {
  FTRACE(0x12c03cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c03cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c03cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12c03cd9 call 0x12c03cf0 */
  push32(0x12c03cdeu); f_12c03cf0();
  /* 12c03cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03ce1 pop ebp */
  EBP = (pop32());
  /* 12c03ce2 ret  */
  ESPCHK(0x12c03cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x12c03cf0 (342 bytes, 119 insns) */
void f_12c03cf0(void) {
  FTRACE(0x12c03cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12c03cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c03cf7 push esi */
  push32((uint32_t)(ESI));
  /* 12c03cf8 push edi */
  push32((uint32_t)(EDI));
  /* 12c03cf9 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c03cfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c03d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03d03 je 0x12c03d35 */
  if (C.zf) goto L_12c03d35;
L_12c03d05:;
  /* 12c03d05 call 0x12c03fc0 */
  push32(0x12c03d0au); f_12c03fc0();
  /* 12c03d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03d0c jne 0x12c03d2f */
  if (!C.zf) goto L_12c03d2f;
  /* 12c03d0e push 0x12c294a8 */
  push32((uint32_t)(0x12c294a8u));
  /* 12c03d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03d15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12c03d1a push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03d21 call 0x12c01ee0 */
  push32(0x12c03d26u); f_12c01ee0();
  /* 12c03d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03d2c jne 0x12c03d2f */
  if (!C.zf) goto L_12c03d2f;
  /* 12c03d2e int3  */
  x86_unimpl("int3 @ 0x12c03d2e");
L_12c03d2f:;
  /* 12c03d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03d33 jne 0x12c03d05 */
  if (!C.zf) goto L_12c03d05;
L_12c03d35:;
  /* 12c03d35 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03d37 call 0x12c06820 */
  push32(0x12c03d3cu); f_12c06820();
  /* 12c03d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c03d3f:;
  /* 12c03d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03d42 push edx */
  push32((uint32_t)(EDX));
  /* 12c03d43 call 0x12c04420 */
  push32(0x12c03d48u); f_12c04420();
  /* 12c03d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03d4d jne 0x12c03d70 */
  if (!C.zf) goto L_12c03d70;
  /* 12c03d4f push 0x12c295ac */
  push32((uint32_t)(0x12c295acu));
  /* 12c03d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03d56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12c03d5b push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03d62 call 0x12c01ee0 */
  push32(0x12c03d67u); f_12c01ee0();
  /* 12c03d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03d6d jne 0x12c03d70 */
  if (!C.zf) goto L_12c03d70;
  /* 12c03d6f int3  */
  x86_unimpl("int3 @ 0x12c03d6f");
L_12c03d70:;
  /* 12c03d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03d74 jne 0x12c03d3f */
  if (!C.zf) goto L_12c03d3f;
  /* 12c03d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c03d7f:;
  /* 12c03d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03d82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03d85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03d8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03d8d je 0x12c03dd2 */
  if (C.zf) goto L_12c03dd2;
  /* 12c03d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03d92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03d96 je 0x12c03dd2 */
  if (C.zf) goto L_12c03dd2;
  /* 12c03d98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03da3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03da6 je 0x12c03dd2 */
  if (C.zf) goto L_12c03dd2;
  /* 12c03da8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03dab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03daf je 0x12c03dd2 */
  if (C.zf) goto L_12c03dd2;
  /* 12c03db1 push 0x12c29744 */
  push32((uint32_t)(0x12c29744u));
  /* 12c03db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03db8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12c03dbd push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03dc4 call 0x12c01ee0 */
  push32(0x12c03dc9u); f_12c01ee0();
  /* 12c03dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03dcf jne 0x12c03dd2 */
  if (!C.zf) goto L_12c03dd2;
  /* 12c03dd1 int3  */
  x86_unimpl("int3 @ 0x12c03dd1");
L_12c03dd2:;
  /* 12c03dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c03dd6 jne 0x12c03d7f */
  if (!C.zf) goto L_12c03d7f;
  /* 12c03dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03ddb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03ddf jne 0x12c03dee */
  if (!C.zf) goto L_12c03dee;
  /* 12c03de1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03de5 jne 0x12c03dee */
  if (!C.zf) goto L_12c03dee;
  /* 12c03de7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12c03dee:;
  /* 12c03dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03df1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03df5 je 0x12c03e29 */
  if (C.zf) goto L_12c03e29;
L_12c03df7:;
  /* 12c03df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03dfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03dfd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03e00 je 0x12c03e23 */
  if (C.zf) goto L_12c03e23;
  /* 12c03e02 push 0x12c2968c */
  push32((uint32_t)(0x12c2968cu));
  /* 12c03e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03e09 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12c03e0e push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03e15 call 0x12c01ee0 */
  push32(0x12c03e1au); f_12c01ee0();
  /* 12c03e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03e20 jne 0x12c03e23 */
  if (!C.zf) goto L_12c03e23;
  /* 12c03e22 int3  */
  x86_unimpl("int3 @ 0x12c03e22");
L_12c03e23:;
  /* 12c03e23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03e27 jne 0x12c03df7 */
  if (!C.zf) goto L_12c03df7;
L_12c03e29:;
  /* 12c03e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c03e2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c03e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c03e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03e34 call 0x12c068c0 */
  push32(0x12c03e39u); f_12c068c0();
  /* 12c03e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03e3f pop edi */
  EDI = (pop32());
  /* 12c03e40 pop esi */
  ESI = (pop32());
  /* 12c03e41 pop ebx */
  EBX = (pop32());
  /* 12c03e42 mov esp, ebp */
  ESP = (EBP);
  /* 12c03e44 pop ebp */
  EBP = (pop32());
  /* 12c03e45 ret  */
  ESPCHK(0x12c03cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x12c03e50 (28 bytes, 11 insns) */
void f_12c03e50(void) {
  FTRACE(0x12c03e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03e51 mov ebp, esp */
  EBP = (ESP);
  /* 12c03e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03e54 mov eax, dword ptr [0x12c2ca8c] */
  EAX = (r32((uint32_t)(0x12c2ca8c)));
  /* 12c03e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c03e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03e5f mov dword ptr [0x12c2ca8c], ecx */
  w32((uint32_t)(0x12c2ca8c), (ECX));
  /* 12c03e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03e68 mov esp, ebp */
  ESP = (EBP);
  /* 12c03e6a pop ebp */
  EBP = (pop32());
  /* 12c03e6b ret  */
  ESPCHK(0x12c03e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x12c03e70 (157 bytes, 59 insns) */
void f_12c03e70(void) {
  FTRACE(0x12c03e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03e71 mov ebp, esp */
  EBP = (ESP);
  /* 12c03e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03e74 push ebx */
  push32((uint32_t)(EBX));
  /* 12c03e75 push esi */
  push32((uint32_t)(ESI));
  /* 12c03e76 push edi */
  push32((uint32_t)(EDI));
  /* 12c03e77 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03e79 call 0x12c06820 */
  push32(0x12c03e7eu); f_12c06820();
  /* 12c03e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03e84 push eax */
  push32((uint32_t)(EAX));
  /* 12c03e85 call 0x12c04420 */
  push32(0x12c03e8au); f_12c04420();
  /* 12c03e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03e8f je 0x12c03efc */
  if (C.zf) goto L_12c03efc;
  /* 12c03e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03e94 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03e97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c03e9a:;
  /* 12c03e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03ea0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03ea5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03ea8 je 0x12c03eed */
  if (C.zf) goto L_12c03eed;
  /* 12c03eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ead cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03eb1 je 0x12c03eed */
  if (C.zf) goto L_12c03eed;
  /* 12c03eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03eb6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c03eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03ebe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03ec1 je 0x12c03eed */
  if (C.zf) goto L_12c03eed;
  /* 12c03ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ec6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03eca je 0x12c03eed */
  if (C.zf) goto L_12c03eed;
  /* 12c03ecc push 0x12c29744 */
  push32((uint32_t)(0x12c29744u));
  /* 12c03ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03ed3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12c03ed8 push 0x12c2949c */
  push32((uint32_t)(0x12c2949cu));
  /* 12c03edd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c03edf call 0x12c01ee0 */
  push32(0x12c03ee4u); f_12c01ee0();
  /* 12c03ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03eea jne 0x12c03eed */
  if (!C.zf) goto L_12c03eed;
  /* 12c03eec int3  */
  x86_unimpl("int3 @ 0x12c03eec");
L_12c03eed:;
  /* 12c03eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c03ef1 jne 0x12c03e9a */
  if (!C.zf) goto L_12c03e9a;
  /* 12c03ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03ef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03ef9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12c03efc:;
  /* 12c03efc push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03efe call 0x12c068c0 */
  push32(0x12c03f03u); f_12c068c0();
  /* 12c03f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03f06 pop edi */
  EDI = (pop32());
  /* 12c03f07 pop esi */
  ESI = (pop32());
  /* 12c03f08 pop ebx */
  EBX = (pop32());
  /* 12c03f09 mov esp, ebp */
  ESP = (EBP);
  /* 12c03f0b pop ebp */
  EBP = (pop32());
  /* 12c03f0c ret  */
  ESPCHK(0x12c03e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x12c03f10 (28 bytes, 11 insns) */
void f_12c03f10(void) {
  FTRACE(0x12c03f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03f11 mov ebp, esp */
  EBP = (ESP);
  /* 12c03f13 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03f14 mov eax, dword ptr [0x12c2cc90] */
  EAX = (r32((uint32_t)(0x12c2cc90)));
  /* 12c03f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c03f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03f1f mov dword ptr [0x12c2cc90], ecx */
  w32((uint32_t)(0x12c2cc90), (ECX));
  /* 12c03f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03f28 mov esp, ebp */
  ESP = (EBP);
  /* 12c03f2a pop ebp */
  EBP = (pop32());
  /* 12c03f2b ret  */
  ESPCHK(0x12c03f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x12c03f30 (136 bytes, 55 insns) */
void f_12c03f30(void) {
  FTRACE(0x12c03f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03f31 mov ebp, esp */
  EBP = (ESP);
  /* 12c03f33 push ecx */
  push32((uint32_t)(ECX));
  /* 12c03f34 push ebx */
  push32((uint32_t)(EBX));
  /* 12c03f35 push esi */
  push32((uint32_t)(ESI));
  /* 12c03f36 push edi */
  push32((uint32_t)(EDI));
  /* 12c03f37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12c03f3e:;
  /* 12c03f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03f41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c03f44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03f47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c03f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03f4c je 0x12c03fae */
  if (C.zf) goto L_12c03fae;
  /* 12c03f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c03f53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c03f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c03f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12c03f67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03f69 je 0x12c03fac */
  if (C.zf) goto L_12c03fac;
L_12c03f6b:;
  /* 12c03f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c03f6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c03f73 push eax */
  push32((uint32_t)(EAX));
  /* 12c03f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c03f79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12c03f7c push edx */
  push32((uint32_t)(EDX));
  /* 12c03f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c03f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03f83 push eax */
  push32((uint32_t)(EAX));
  /* 12c03f84 push 0x12c29788 */
  push32((uint32_t)(0x12c29788u));
  /* 12c03f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c03f91 call 0x12c01ee0 */
  push32(0x12c03f96u); f_12c01ee0();
  /* 12c03f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03f9c jne 0x12c03f9f */
  if (!C.zf) goto L_12c03f9f;
  /* 12c03f9e int3  */
  x86_unimpl("int3 @ 0x12c03f9e");
L_12c03f9f:;
  /* 12c03f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c03fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c03fa3 jne 0x12c03f6b */
  if (!C.zf) goto L_12c03f6b;
  /* 12c03fa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c03fac:;
  /* 12c03fac jmp 0x12c03f3e */
  goto L_12c03f3e;
L_12c03fae:;
  /* 12c03fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c03fb1 pop edi */
  EDI = (pop32());
  /* 12c03fb2 pop esi */
  ESI = (pop32());
  /* 12c03fb3 pop ebx */
  EBX = (pop32());
  /* 12c03fb4 mov esp, ebp */
  ESP = (EBP);
  /* 12c03fb6 pop ebp */
  EBP = (pop32());
  /* 12c03fb7 ret  */
  ESPCHK(0x12c03f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x12c03fc0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12c03fc0(void) {
  FTRACE(0x12c03fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c03fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c03fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c03fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c03fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c03fc7 push esi */
  push32((uint32_t)(ESI));
  /* 12c03fc8 push edi */
  push32((uint32_t)(EDI));
  /* 12c03fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c03fd0 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c03fd5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c03fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c03fda jne 0x12c03fe6 */
  if (!C.zf) goto L_12c03fe6;
  /* 12c03fdc mov eax, 1 */
  EAX = (0x1u);
  /* 12c03fe1 jmp 0x12c04318 */
  goto L_12c04318;
L_12c03fe6:;
  /* 12c03fe6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c03fe8 call 0x12c06820 */
  push32(0x12c03fedu); f_12c06820();
  /* 12c03fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c03ff0 call 0x12c07000 */
  push32(0x12c03ff5u); f_12c07000();
  /* 12c03ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c03ff8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c03ffc je 0x12c04109 */
  if (C.zf) goto L_12c04109;
  /* 12c04002 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04006 je 0x12c04109 */
  if (C.zf) goto L_12c04109;
  /* 12c0400c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0400f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12c04012 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c04015 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c0401b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0401f ja 0x12c040d2 */
  if ((!C.cf&&!C.zf)) goto L_12c040d2;
  /* 12c04025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c04028 jmp dword ptr [eax*4 + 0x12c0431f] */
  switch (EAX) {
    case 0: goto L_12c040aa;
    case 1: goto L_12c04082;
    case 2: goto L_12c0405a;
    case 3: goto L_12c0402f;
    default: x86_unimpl("switch@0x12c04028 out of table"); return;
  }
L_12c0402f:;
  /* 12c0402f push 0x12c298dc */
  push32((uint32_t)(0x12c298dcu));
  /* 12c04034 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c04039 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0403b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0403d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0403f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04041 call 0x12c01ee0 */
  push32(0x12c04046u); f_12c01ee0();
  /* 12c04046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0404c jne 0x12c0404f */
  if (!C.zf) goto L_12c0404f;
  /* 12c0404e int3  */
  x86_unimpl("int3 @ 0x12c0404e");
L_12c0404f:;
  /* 12c0404f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c04051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04053 jne 0x12c0402f */
  if (!C.zf) goto L_12c0402f;
  /* 12c04055 jmp 0x12c040f8 */
  goto L_12c040f8;
L_12c0405a:;
  /* 12c0405a push 0x12c298b8 */
  push32((uint32_t)(0x12c298b8u));
  /* 12c0405f push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c04064 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04066 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04068 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0406a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0406c call 0x12c01ee0 */
  push32(0x12c04071u); f_12c01ee0();
  /* 12c04071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04077 jne 0x12c0407a */
  if (!C.zf) goto L_12c0407a;
  /* 12c04079 int3  */
  x86_unimpl("int3 @ 0x12c04079");
L_12c0407a:;
  /* 12c0407a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0407c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0407e jne 0x12c0405a */
  if (!C.zf) goto L_12c0405a;
  /* 12c04080 jmp 0x12c040f8 */
  goto L_12c040f8;
L_12c04082:;
  /* 12c04082 push 0x12c29894 */
  push32((uint32_t)(0x12c29894u));
  /* 12c04087 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c0408c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0408e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04090 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04092 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04094 call 0x12c01ee0 */
  push32(0x12c04099u); f_12c01ee0();
  /* 12c04099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0409c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0409f jne 0x12c040a2 */
  if (!C.zf) goto L_12c040a2;
  /* 12c040a1 int3  */
  x86_unimpl("int3 @ 0x12c040a1");
L_12c040a2:;
  /* 12c040a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c040a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c040a6 jne 0x12c04082 */
  if (!C.zf) goto L_12c04082;
  /* 12c040a8 jmp 0x12c040f8 */
  goto L_12c040f8;
L_12c040aa:;
  /* 12c040aa push 0x12c29870 */
  push32((uint32_t)(0x12c29870u));
  /* 12c040af push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c040b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040bc call 0x12c01ee0 */
  push32(0x12c040c1u); f_12c01ee0();
  /* 12c040c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c040c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c040c7 jne 0x12c040ca */
  if (!C.zf) goto L_12c040ca;
  /* 12c040c9 int3  */
  x86_unimpl("int3 @ 0x12c040c9");
L_12c040ca:;
  /* 12c040ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c040cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c040ce jne 0x12c040aa */
  if (!C.zf) goto L_12c040aa;
  /* 12c040d0 jmp 0x12c040f8 */
  goto L_12c040f8;
L_12c040d2:;
  /* 12c040d2 push 0x12c29844 */
  push32((uint32_t)(0x12c29844u));
  /* 12c040d7 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c040dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040de push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c040e4 call 0x12c01ee0 */
  push32(0x12c040e9u); f_12c01ee0();
  /* 12c040e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c040ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c040ef jne 0x12c040f2 */
  if (!C.zf) goto L_12c040f2;
  /* 12c040f1 int3  */
  x86_unimpl("int3 @ 0x12c040f1");
L_12c040f2:;
  /* 12c040f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c040f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c040f6 jne 0x12c040d2 */
  if (!C.zf) goto L_12c040d2;
L_12c040f8:;
  /* 12c040f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c040fa call 0x12c068c0 */
  push32(0x12c040ffu); f_12c068c0();
  /* 12c040ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04104 jmp 0x12c04318 */
  goto L_12c04318;
L_12c04109:;
  /* 12c04109 mov eax, dword ptr [0x12c2e4dc] */
  EAX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c0410e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c04111 jmp 0x12c0411b */
  goto L_12c0411b;
L_12c04113:;
  /* 12c04113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c04118 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c0411b:;
  /* 12c0411b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0411f je 0x12c0430b */
  if (C.zf) goto L_12c0430b;
  /* 12c04125 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12c0412c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0412f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c04132 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c04138 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0413b je 0x12c04160 */
  if (C.zf) goto L_12c04160;
  /* 12c0413d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04140 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04144 je 0x12c04160 */
  if (C.zf) goto L_12c04160;
  /* 12c04146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04149 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c0414c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c04152 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04155 je 0x12c04160 */
  if (C.zf) goto L_12c04160;
  /* 12c04157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0415a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0415e jne 0x12c04178 */
  if (!C.zf) goto L_12c04178;
L_12c04160:;
  /* 12c04160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04163 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c04166 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0416c mov edx, dword ptr [ecx*4 + 0x12c2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca94)));
  /* 12c04173 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c04176 jmp 0x12c0417f */
  goto L_12c0417f;
L_12c04178:;
  /* 12c04178 mov dword ptr [ebp - 0x14], 0x12c2983c */
  w32((uint32_t)(EBP + -0x14), (0x12c2983cu));
L_12c0417f:;
  /* 12c0417f push 4 */
  push32((uint32_t)(0x4u));
  /* 12c04181 mov al, byte ptr [0x12c2ca90] */
  AL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c04186 push eax */
  push32((uint32_t)(EAX));
  /* 12c04187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0418a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0418d push ecx */
  push32((uint32_t)(ECX));
  /* 12c0418e call 0x12c03f30 */
  push32(0x12c04193u); f_12c03f30();
  /* 12c04193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04198 jne 0x12c041d4 */
  if (!C.zf) goto L_12c041d4;
L_12c0419a:;
  /* 12c0419a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0419d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c041a0 push edx */
  push32((uint32_t)(EDX));
  /* 12c041a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c041a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c041a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c041a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c041ab push edx */
  push32((uint32_t)(EDX));
  /* 12c041ac push 0x12c29718 */
  push32((uint32_t)(0x12c29718u));
  /* 12c041b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c041b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c041b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c041b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c041b9 call 0x12c01ee0 */
  push32(0x12c041beu); f_12c01ee0();
  /* 12c041be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c041c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c041c4 jne 0x12c041c7 */
  if (!C.zf) goto L_12c041c7;
  /* 12c041c6 int3  */
  x86_unimpl("int3 @ 0x12c041c6");
L_12c041c7:;
  /* 12c041c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c041c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c041cb jne 0x12c0419a */
  if (!C.zf) goto L_12c0419a;
  /* 12c041cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c041d4:;
  /* 12c041d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12c041d6 mov cl, byte ptr [0x12c2ca90] */
  CL = (r8((uint32_t)(0x12c2ca90)));
  /* 12c041dc push ecx */
  push32((uint32_t)(ECX));
  /* 12c041dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c041e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c041e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c041e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12c041ea push edx */
  push32((uint32_t)(EDX));
  /* 12c041eb call 0x12c03f30 */
  push32(0x12c041f0u); f_12c03f30();
  /* 12c041f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c041f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c041f5 jne 0x12c04231 */
  if (!C.zf) goto L_12c04231;
L_12c041f7:;
  /* 12c041f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c041fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c041fd push eax */
  push32((uint32_t)(EAX));
  /* 12c041fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04201 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c04204 push edx */
  push32((uint32_t)(EDX));
  /* 12c04205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c04208 push eax */
  push32((uint32_t)(EAX));
  /* 12c04209 push 0x12c296ec */
  push32((uint32_t)(0x12c296ecu));
  /* 12c0420e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04210 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04212 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04214 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04216 call 0x12c01ee0 */
  push32(0x12c0421bu); f_12c01ee0();
  /* 12c0421b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0421e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04221 jne 0x12c04224 */
  if (!C.zf) goto L_12c04224;
  /* 12c04223 int3  */
  x86_unimpl("int3 @ 0x12c04223");
L_12c04224:;
  /* 12c04224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c04226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04228 jne 0x12c041f7 */
  if (!C.zf) goto L_12c041f7;
  /* 12c0422a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c04231:;
  /* 12c04231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04234 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04238 jne 0x12c0428a */
  if (!C.zf) goto L_12c0428a;
  /* 12c0423a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0423d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c04240 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04241 mov dl, byte ptr [0x12c2ca91] */
  DL = (r8((uint32_t)(0x12c2ca91)));
  /* 12c04247 push edx */
  push32((uint32_t)(EDX));
  /* 12c04248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0424b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0424e push eax */
  push32((uint32_t)(EAX));
  /* 12c0424f call 0x12c03f30 */
  push32(0x12c04254u); f_12c03f30();
  /* 12c04254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04259 jne 0x12c0428a */
  if (!C.zf) goto L_12c0428a;
L_12c0425b:;
  /* 12c0425b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0425e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04261 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04262 push 0x12c29810 */
  push32((uint32_t)(0x12c29810u));
  /* 12c04267 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04269 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0426b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0426d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0426f call 0x12c01ee0 */
  push32(0x12c04274u); f_12c01ee0();
  /* 12c04274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0427a jne 0x12c0427d */
  if (!C.zf) goto L_12c0427d;
  /* 12c0427c int3  */
  x86_unimpl("int3 @ 0x12c0427c");
L_12c0427d:;
  /* 12c0427d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0427f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04281 jne 0x12c0425b */
  if (!C.zf) goto L_12c0425b;
  /* 12c04283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c0428a:;
  /* 12c0428a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0428e jne 0x12c04306 */
  if (!C.zf) goto L_12c04306;
  /* 12c04290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04297 je 0x12c042cc */
  if (C.zf) goto L_12c042cc;
L_12c04299:;
  /* 12c04299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0429c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12c0429f push edx */
  push32((uint32_t)(EDX));
  /* 12c042a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c042a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c042a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12c042a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c042aa push edx */
  push32((uint32_t)(EDX));
  /* 12c042ab push 0x12c297f0 */
  push32((uint32_t)(0x12c297f0u));
  /* 12c042b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042b8 call 0x12c01ee0 */
  push32(0x12c042bdu); f_12c01ee0();
  /* 12c042bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c042c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c042c3 jne 0x12c042c6 */
  if (!C.zf) goto L_12c042c6;
  /* 12c042c5 int3  */
  x86_unimpl("int3 @ 0x12c042c5");
L_12c042c6:;
  /* 12c042c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c042c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c042ca jne 0x12c04299 */
  if (!C.zf) goto L_12c04299;
L_12c042cc:;
  /* 12c042cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c042cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c042d2 push edx */
  push32((uint32_t)(EDX));
  /* 12c042d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c042d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c042d9 push eax */
  push32((uint32_t)(EAX));
  /* 12c042da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c042dd push ecx */
  push32((uint32_t)(ECX));
  /* 12c042de push 0x12c297c4 */
  push32((uint32_t)(0x12c297c4u));
  /* 12c042e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c042eb call 0x12c01ee0 */
  push32(0x12c042f0u); f_12c01ee0();
  /* 12c042f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c042f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c042f6 jne 0x12c042f9 */
  if (!C.zf) goto L_12c042f9;
  /* 12c042f8 int3  */
  x86_unimpl("int3 @ 0x12c042f8");
L_12c042f9:;
  /* 12c042f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c042fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c042fd jne 0x12c042cc */
  if (!C.zf) goto L_12c042cc;
  /* 12c042ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c04306:;
  /* 12c04306 jmp 0x12c04113 */
  goto L_12c04113;
L_12c0430b:;
  /* 12c0430b push 9 */
  push32((uint32_t)(0x9u));
  /* 12c0430d call 0x12c068c0 */
  push32(0x12c04312u); f_12c068c0();
  /* 12c04312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c04318:;
  /* 12c04318 pop edi */
  EDI = (pop32());
  /* 12c04319 pop esi */
  ESI = (pop32());
  /* 12c0431a pop ebx */
  EBX = (pop32());
  /* 12c0431b mov esp, ebp */
  ESP = (EBP);
  /* 12c0431d pop ebp */
  EBP = (pop32());
  /* 12c0431e ret  */
  ESPCHK(0x12c03fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x12c04330 (34 bytes, 13 insns) */
void f_12c04330(void) {
  FTRACE(0x12c04330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04330 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04331 mov ebp, esp */
  EBP = (ESP);
  /* 12c04333 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04334 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c04339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0433c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04340 je 0x12c0434b */
  if (C.zf) goto L_12c0434b;
  /* 12c04342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04345 mov dword ptr [0x12c2ca84], ecx */
  w32((uint32_t)(0x12c2ca84), (ECX));
L_12c0434b:;
  /* 12c0434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0434e mov esp, ebp */
  ESP = (EBP);
  /* 12c04350 pop ebp */
  EBP = (pop32());
  /* 12c04351 ret  */
  ESPCHK(0x12c04330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x12c04360 (103 bytes, 38 insns) */
void f_12c04360(void) {
  FTRACE(0x12c04360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04360 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04361 mov ebp, esp */
  EBP = (ESP);
  /* 12c04363 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04364 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c04369 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0436e jne 0x12c04372 */
  if (!C.zf) goto L_12c04372;
  /* 12c04370 jmp 0x12c043c3 */
  goto L_12c043c3;
L_12c04372:;
  /* 12c04372 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04374 call 0x12c06820 */
  push32(0x12c04379u); f_12c06820();
  /* 12c04379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0437c mov ecx, dword ptr [0x12c2e4dc] */
  ECX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c04382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c04385 jmp 0x12c0438f */
  goto L_12c0438f;
L_12c04387:;
  /* 12c04387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0438a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0438c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0438f:;
  /* 12c0438f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04393 je 0x12c043b9 */
  if (C.zf) goto L_12c043b9;
  /* 12c04395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04398 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c0439b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c043a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c043a4 jne 0x12c043b7 */
  if (!C.zf) goto L_12c043b7;
  /* 12c043a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c043a9 push eax */
  push32((uint32_t)(EAX));
  /* 12c043aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c043ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c043b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c043b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12c043b4u);
  /* 12c043b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c043b7:;
  /* 12c043b7 jmp 0x12c04387 */
  goto L_12c04387;
L_12c043b9:;
  /* 12c043b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c043bb call 0x12c068c0 */
  push32(0x12c043c0u); f_12c068c0();
  /* 12c043c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c043c3:;
  /* 12c043c3 mov esp, ebp */
  ESP = (EBP);
  /* 12c043c5 pop ebp */
  EBP = (pop32());
  /* 12c043c6 ret  */
  ESPCHK(0x12c04360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12c043d0 (75 bytes, 28 insns) */
void f_12c043d0(void) {
  FTRACE(0x12c043d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c043d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c043d1 mov ebp, esp */
  EBP = (ESP);
  /* 12c043d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c043d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c043d8 je 0x12c0440d */
  if (C.zf) goto L_12c0440d;
  /* 12c043da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c043dd push eax */
  push32((uint32_t)(EAX));
  /* 12c043de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c043e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c043e2 call dword ptr [0x12c3023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3023c))), 0x12c043e8u);
  /* 12c043e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c043ea jne 0x12c0440d */
  if (!C.zf) goto L_12c0440d;
  /* 12c043ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c043f0 je 0x12c04404 */
  if (C.zf) goto L_12c04404;
  /* 12c043f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c043f5 push edx */
  push32((uint32_t)(EDX));
  /* 12c043f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c043f9 push eax */
  push32((uint32_t)(EAX));
  /* 12c043fa call dword ptr [0x12c302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e8))), 0x12c04400u);
  /* 12c04400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04402 jne 0x12c0440d */
  if (!C.zf) goto L_12c0440d;
L_12c04404:;
  /* 12c04404 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c0440b jmp 0x12c04414 */
  goto L_12c04414;
L_12c0440d:;
  /* 12c0440d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c04414:;
  /* 12c04414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04417 mov esp, ebp */
  ESP = (EBP);
  /* 12c04419 pop ebp */
  EBP = (pop32());
  /* 12c0441a ret  */
  ESPCHK(0x12c043d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x12c04420 (134 bytes, 50 insns) */
void f_12c04420(void) {
  FTRACE(0x12c04420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04420 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04421 mov ebp, esp */
  EBP = (ESP);
  /* 12c04423 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04428 jne 0x12c0442e */
  if (!C.zf) goto L_12c0442e;
  /* 12c0442a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0442c jmp 0x12c044a2 */
  goto L_12c044a2;
L_12c0442e:;
  /* 12c0442e push 1 */
  push32((uint32_t)(0x1u));
  /* 12c04430 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12c04432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04435 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04438 push eax */
  push32((uint32_t)(EAX));
  /* 12c04439 call 0x12c043d0 */
  push32(0x12c0443eu); f_12c043d0();
  /* 12c0443e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04443 jne 0x12c04449 */
  if (!C.zf) goto L_12c04449;
  /* 12c04445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04447 jmp 0x12c044a2 */
  goto L_12c044a2;
L_12c04449:;
  /* 12c04449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0444c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0444f push ecx */
  push32((uint32_t)(ECX));
  /* 12c04450 call 0x12c07120 */
  push32(0x12c04455u); f_12c07120();
  /* 12c04455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0445b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0445f je 0x12c04476 */
  if (C.zf) goto L_12c04476;
  /* 12c04461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04464 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04467 push edx */
  push32((uint32_t)(EDX));
  /* 12c04468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0446b push eax */
  push32((uint32_t)(EAX));
  /* 12c0446c call 0x12c07180 */
  push32(0x12c04471u); f_12c07180();
  /* 12c04471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04474 jmp 0x12c044a2 */
  goto L_12c044a2;
L_12c04476:;
  /* 12c04476 mov ecx, dword ptr [0x12c2e490] */
  ECX = (r32((uint32_t)(0x12c2e490)));
  /* 12c0447c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12c04482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04484 je 0x12c0448d */
  if (C.zf) goto L_12c0448d;
  /* 12c04486 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0448b jmp 0x12c044a2 */
  goto L_12c044a2;
L_12c0448d:;
  /* 12c0448d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04490 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04493 push edx */
  push32((uint32_t)(EDX));
  /* 12c04494 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04496 mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c0449b push eax */
  push32((uint32_t)(EAX));
  /* 12c0449c call dword ptr [0x12c30240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30240))), 0x12c044a2u);
L_12c044a2:;
  /* 12c044a2 mov esp, ebp */
  ESP = (EBP);
  /* 12c044a4 pop ebp */
  EBP = (pop32());
  /* 12c044a5 ret  */
  ESPCHK(0x12c04420u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x12c044b0 (227 bytes, 80 insns) */
void f_12c044b0(void) {
  FTRACE(0x12c044b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c044b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c044b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c044b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c044b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c044b7 push eax */
  push32((uint32_t)(EAX));
  /* 12c044b8 call 0x12c04420 */
  push32(0x12c044bdu); f_12c04420();
  /* 12c044bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c044c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c044c2 jne 0x12c044cb */
  if (!C.zf) goto L_12c044cb;
  /* 12c044c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c044c6 jmp 0x12c0458f */
  goto L_12c0458f;
L_12c044cb:;
  /* 12c044cb push 9 */
  push32((uint32_t)(0x9u));
  /* 12c044cd call 0x12c06820 */
  push32(0x12c044d2u); f_12c06820();
  /* 12c044d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c044d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c044d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c044db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c044de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c044e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c044e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c044e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c044ec je 0x12c04510 */
  if (C.zf) goto L_12c04510;
  /* 12c044ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c044f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c044f5 je 0x12c04510 */
  if (C.zf) goto L_12c04510;
  /* 12c044f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c044fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c044fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c04502 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04505 je 0x12c04510 */
  if (C.zf) goto L_12c04510;
  /* 12c04507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0450a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0450e jne 0x12c04583 */
  if (!C.zf) goto L_12c04583;
L_12c04510:;
  /* 12c04510 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c04512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c04515 push edx */
  push32((uint32_t)(EDX));
  /* 12c04516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04519 push eax */
  push32((uint32_t)(EAX));
  /* 12c0451a call 0x12c043d0 */
  push32(0x12c0451fu); f_12c043d0();
  /* 12c0451f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04524 je 0x12c04583 */
  if (C.zf) goto L_12c04583;
  /* 12c04526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04529 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c0452c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0452f jne 0x12c04583 */
  if (!C.zf) goto L_12c04583;
  /* 12c04531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c04537 cmp ecx, dword ptr [0x12c2ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12c2ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0453d jg 0x12c04583 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c04583;
  /* 12c0453f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04543 je 0x12c04550 */
  if (C.zf) goto L_12c04550;
  /* 12c04545 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c04548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0454b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12c0454e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c04550:;
  /* 12c04550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04554 je 0x12c04561 */
  if (C.zf) goto L_12c04561;
  /* 12c04556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c04559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0455c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0455f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c04561:;
  /* 12c04561 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04565 je 0x12c04572 */
  if (C.zf) goto L_12c04572;
  /* 12c04567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0456a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0456d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c04570 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c04572:;
  /* 12c04572 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04574 call 0x12c068c0 */
  push32(0x12c04579u); f_12c068c0();
  /* 12c04579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0457c mov eax, 1 */
  EAX = (0x1u);
  /* 12c04581 jmp 0x12c0458f */
  goto L_12c0458f;
L_12c04583:;
  /* 12c04583 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04585 call 0x12c068c0 */
  push32(0x12c0458au); f_12c068c0();
  /* 12c0458a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0458d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0458f:;
  /* 12c0458f mov esp, ebp */
  ESP = (EBP);
  /* 12c04591 pop ebp */
  EBP = (pop32());
  /* 12c04592 ret  */
  ESPCHK(0x12c044b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x12c045a0 (28 bytes, 11 insns) */
void f_12c045a0(void) {
  FTRACE(0x12c045a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c045a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c045a1 mov ebp, esp */
  EBP = (ESP);
  /* 12c045a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c045a4 mov eax, dword ptr [0x12c2fe38] */
  EAX = (r32((uint32_t)(0x12c2fe38)));
  /* 12c045a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c045ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c045af mov dword ptr [0x12c2fe38], ecx */
  w32((uint32_t)(0x12c2fe38), (ECX));
  /* 12c045b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c045b8 mov esp, ebp */
  ESP = (EBP);
  /* 12c045ba pop ebp */
  EBP = (pop32());
  /* 12c045bb ret  */
  ESPCHK(0x12c045a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x12c045c0 (362 bytes, 116 insns) */
void f_12c045c0(void) {
  FTRACE(0x12c045c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c045c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c045c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c045c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c045c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c045c7 push esi */
  push32((uint32_t)(ESI));
  /* 12c045c8 push edi */
  push32((uint32_t)(EDI));
  /* 12c045c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c045cd jne 0x12c045fa */
  if (!C.zf) goto L_12c045fa;
L_12c045cf:;
  /* 12c045cf push 0x12c29924 */
  push32((uint32_t)(0x12c29924u));
  /* 12c045d4 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c045d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c045db push 0 */
  push32((uint32_t)(0x0u));
  /* 12c045dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c045df push 0 */
  push32((uint32_t)(0x0u));
  /* 12c045e1 call 0x12c01ee0 */
  push32(0x12c045e6u); f_12c01ee0();
  /* 12c045e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c045e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c045ec jne 0x12c045ef */
  if (!C.zf) goto L_12c045ef;
  /* 12c045ee int3  */
  x86_unimpl("int3 @ 0x12c045ee");
L_12c045ef:;
  /* 12c045ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c045f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c045f3 jne 0x12c045cf */
  if (!C.zf) goto L_12c045cf;
  /* 12c045f5 jmp 0x12c04723 */
  goto L_12c04723;
L_12c045fa:;
  /* 12c045fa push 9 */
  push32((uint32_t)(0x9u));
  /* 12c045fc call 0x12c06820 */
  push32(0x12c04601u); f_12c06820();
  /* 12c04601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04607 mov edx, dword ptr [0x12c2e4dc] */
  EDX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c0460d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c0460f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c04616 jmp 0x12c04621 */
  goto L_12c04621;
L_12c04618:;
  /* 12c04618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0461b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0461e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c04621:;
  /* 12c04621 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04625 jge 0x12c04645 */
  if ((C.sf==C.of)) goto L_12c04645;
  /* 12c04627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0462a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0462d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12c04635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0463b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12c04643 jmp 0x12c04618 */
  goto L_12c04618;
L_12c04645:;
  /* 12c04645 mov edx, dword ptr [0x12c2e4dc] */
  EDX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c0464b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12c0464e jmp 0x12c04658 */
  goto L_12c04658;
L_12c04650:;
  /* 12c04650 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c04655 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c04658:;
  /* 12c04658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0465c je 0x12c04701 */
  if (C.zf) goto L_12c04701;
  /* 12c04662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04665 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c04668 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0466f jl 0x12c046d7 */
  if ((C.sf!=C.of)) goto L_12c046d7;
  /* 12c04671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04674 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c04677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0467d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04680 jge 0x12c046d7 */
  if ((C.sf==C.of)) goto L_12c046d7;
  /* 12c04682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04685 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c04688 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0468e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04691 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12c04695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0469b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c0469e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c046a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c046a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12c046ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c046ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c046b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c046b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c046b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12c046bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c046c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c046c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c046c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c046c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c046ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c046d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12c046d5 jmp 0x12c046fc */
  goto L_12c046fc;
L_12c046d7:;
  /* 12c046d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c046da push edx */
  push32((uint32_t)(EDX));
  /* 12c046db push 0x12c29900 */
  push32((uint32_t)(0x12c29900u));
  /* 12c046e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c046e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c046e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c046e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c046e8 call 0x12c01ee0 */
  push32(0x12c046edu); f_12c01ee0();
  /* 12c046ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c046f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c046f3 jne 0x12c046f6 */
  if (!C.zf) goto L_12c046f6;
  /* 12c046f5 int3  */
  x86_unimpl("int3 @ 0x12c046f5");
L_12c046f6:;
  /* 12c046f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c046f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c046fa jne 0x12c046d7 */
  if (!C.zf) goto L_12c046d7;
L_12c046fc:;
  /* 12c046fc jmp 0x12c04650 */
  goto L_12c04650;
L_12c04701:;
  /* 12c04701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04704 mov edx, dword ptr [0x12c2e4e4] */
  EDX = (r32((uint32_t)(0x12c2e4e4)));
  /* 12c0470a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12c0470d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04710 mov ecx, dword ptr [0x12c2e4d8] */
  ECX = (r32((uint32_t)(0x12c2e4d8)));
  /* 12c04716 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12c04719 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c0471b call 0x12c068c0 */
  push32(0x12c04720u); f_12c068c0();
  /* 12c04720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04723:;
  /* 12c04723 pop edi */
  EDI = (pop32());
  /* 12c04724 pop esi */
  ESI = (pop32());
  /* 12c04725 pop ebx */
  EBX = (pop32());
  /* 12c04726 mov esp, ebp */
  ESP = (EBP);
  /* 12c04728 pop ebp */
  EBP = (pop32());
  /* 12c04729 ret  */
  ESPCHK(0x12c045c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x12c04730 (291 bytes, 95 insns) */
void f_12c04730(void) {
  FTRACE(0x12c04730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04730 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04731 mov ebp, esp */
  EBP = (ESP);
  /* 12c04733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04736 push ebx */
  push32((uint32_t)(EBX));
  /* 12c04737 push esi */
  push32((uint32_t)(ESI));
  /* 12c04738 push edi */
  push32((uint32_t)(EDI));
  /* 12c04739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c04740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04744 je 0x12c04752 */
  if (C.zf) goto L_12c04752;
  /* 12c04746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0474a je 0x12c04752 */
  if (C.zf) goto L_12c04752;
  /* 12c0474c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04750 jne 0x12c04780 */
  if (!C.zf) goto L_12c04780;
L_12c04752:;
  /* 12c04752 push 0x12c2994c */
  push32((uint32_t)(0x12c2994cu));
  /* 12c04757 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c0475c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0475e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04762 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04764 call 0x12c01ee0 */
  push32(0x12c04769u); f_12c01ee0();
  /* 12c04769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0476c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0476f jne 0x12c04772 */
  if (!C.zf) goto L_12c04772;
  /* 12c04771 int3  */
  x86_unimpl("int3 @ 0x12c04771");
L_12c04772:;
  /* 12c04772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04776 jne 0x12c04752 */
  if (!C.zf) goto L_12c04752;
  /* 12c04778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0477b jmp 0x12c0484c */
  goto L_12c0484c;
L_12c04780:;
  /* 12c04780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c04787 jmp 0x12c04792 */
  goto L_12c04792;
L_12c04789:;
  /* 12c04789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0478c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0478f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c04792:;
  /* 12c04792 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04796 jge 0x12c0481c */
  if ((C.sf==C.of)) goto L_12c0481c;
  /* 12c0479c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0479f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c047a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c047a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12c047ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c047b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c047b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12c047ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c047c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12c047c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12c047ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c047ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c047d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12c047d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c047de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c047e3 jne 0x12c047f2 */
  if (!C.zf) goto L_12c047f2;
  /* 12c047e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c047e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c047eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c047f0 je 0x12c04817 */
  if (C.zf) goto L_12c04817;
L_12c047f2:;
  /* 12c047f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c047f6 je 0x12c04817 */
  if (C.zf) goto L_12c04817;
  /* 12c047f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c047fc jne 0x12c04810 */
  if (!C.zf) goto L_12c04810;
  /* 12c047fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04802 jne 0x12c04817 */
  if (!C.zf) goto L_12c04817;
  /* 12c04804 mov eax, dword ptr [0x12c2ca84] */
  EAX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c04809 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12c0480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0480e je 0x12c04817 */
  if (C.zf) goto L_12c04817;
L_12c04810:;
  /* 12c04810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12c04817:;
  /* 12c04817 jmp 0x12c04789 */
  goto L_12c04789;
L_12c0481c:;
  /* 12c0481c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0481f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c04822 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12c04825 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0482b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12c0482e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c04831 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c04834 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12c04837 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0483a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0483d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12c04840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c04849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12c0484c:;
  /* 12c0484c pop edi */
  EDI = (pop32());
  /* 12c0484d pop esi */
  ESI = (pop32());
  /* 12c0484e pop ebx */
  EBX = (pop32());
  /* 12c0484f mov esp, ebp */
  ESP = (EBP);
  /* 12c04851 pop ebp */
  EBP = (pop32());
  /* 12c04852 ret  */
  ESPCHK(0x12c04730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x12c04860 (697 bytes, 253 insns) */
void f_12c04860(void) {
  FTRACE(0x12c04860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04860 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04861 mov ebp, esp */
  EBP = (ESP);
  /* 12c04863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04866 push ebx */
  push32((uint32_t)(EBX));
  /* 12c04867 push esi */
  push32((uint32_t)(ESI));
  /* 12c04868 push edi */
  push32((uint32_t)(EDI));
  /* 12c04869 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c04870 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04872 call 0x12c06820 */
  push32(0x12c04877u); f_12c06820();
  /* 12c04877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0487a:;
  /* 12c0487a push 0x12c29a44 */
  push32((uint32_t)(0x12c29a44u));
  /* 12c0487f push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c04884 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04886 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04888 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0488a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0488c call 0x12c01ee0 */
  push32(0x12c04891u); f_12c01ee0();
  /* 12c04891 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04897 jne 0x12c0489a */
  if (!C.zf) goto L_12c0489a;
  /* 12c04899 int3  */
  x86_unimpl("int3 @ 0x12c04899");
L_12c0489a:;
  /* 12c0489a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0489c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0489e jne 0x12c0487a */
  if (!C.zf) goto L_12c0487a;
  /* 12c048a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c048a4 je 0x12c048ae */
  if (C.zf) goto L_12c048ae;
  /* 12c048a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c048a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c048ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c048ae:;
  /* 12c048ae mov eax, dword ptr [0x12c2e4dc] */
  EAX = (r32((uint32_t)(0x12c2e4dc)));
  /* 12c048b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c048b6 jmp 0x12c048c0 */
  goto L_12c048c0;
L_12c048b8:;
  /* 12c048b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c048bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c048bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c048c0:;
  /* 12c048c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c048c4 je 0x12c04ae2 */
  if (C.zf) goto L_12c04ae2;
  /* 12c048ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c048cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c048d0 je 0x12c04ae2 */
  if (C.zf) goto L_12c04ae2;
  /* 12c048d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c048d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c048dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c048e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c048e5 je 0x12c04914 */
  if (C.zf) goto L_12c04914;
  /* 12c048e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c048ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12c048ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c048f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c048f5 je 0x12c04914 */
  if (C.zf) goto L_12c04914;
  /* 12c048f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c048fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c048fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c04902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04905 jne 0x12c04919 */
  if (!C.zf) goto L_12c04919;
  /* 12c04907 mov ecx, dword ptr [0x12c2ca84] */
  ECX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c0490d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12c04910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04912 jne 0x12c04919 */
  if (!C.zf) goto L_12c04919;
L_12c04914:;
  /* 12c04914 jmp 0x12c04add */
  goto L_12c04add;
L_12c04919:;
  /* 12c04919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0491c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04920 je 0x12c04992 */
  if (C.zf) goto L_12c04992;
  /* 12c04922 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04924 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c04926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04929 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12c0492c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0492d call 0x12c043d0 */
  push32(0x12c04932u); f_12c043d0();
  /* 12c04932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04937 jne 0x12c04963 */
  if (!C.zf) goto L_12c04963;
L_12c04939:;
  /* 12c04939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0493c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c0493f push eax */
  push32((uint32_t)(EAX));
  /* 12c04940 push 0x12c29a30 */
  push32((uint32_t)(0x12c29a30u));
  /* 12c04945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04947 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04949 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0494b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0494d call 0x12c01ee0 */
  push32(0x12c04952u); f_12c01ee0();
  /* 12c04952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04958 jne 0x12c0495b */
  if (!C.zf) goto L_12c0495b;
  /* 12c0495a int3  */
  x86_unimpl("int3 @ 0x12c0495a");
L_12c0495b:;
  /* 12c0495b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c0495d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0495f jne 0x12c04939 */
  if (!C.zf) goto L_12c04939;
  /* 12c04961 jmp 0x12c04992 */
  goto L_12c04992;
L_12c04963:;
  /* 12c04963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04966 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c04969 push eax */
  push32((uint32_t)(EAX));
  /* 12c0496a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0496d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c04970 push edx */
  push32((uint32_t)(EDX));
  /* 12c04971 push 0x12c29a24 */
  push32((uint32_t)(0x12c29a24u));
  /* 12c04976 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04978 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0497a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0497c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0497e call 0x12c01ee0 */
  push32(0x12c04983u); f_12c01ee0();
  /* 12c04983 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04989 jne 0x12c0498c */
  if (!C.zf) goto L_12c0498c;
  /* 12c0498b int3  */
  x86_unimpl("int3 @ 0x12c0498b");
L_12c0498c:;
  /* 12c0498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0498e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04990 jne 0x12c04963 */
  if (!C.zf) goto L_12c04963;
L_12c04992:;
  /* 12c04992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04995 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12c04998 push edx */
  push32((uint32_t)(EDX));
  /* 12c04999 push 0x12c29a1c */
  push32((uint32_t)(0x12c29a1cu));
  /* 12c0499e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049a6 call 0x12c01ee0 */
  push32(0x12c049abu); f_12c01ee0();
  /* 12c049ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c049ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c049b1 jne 0x12c049b4 */
  if (!C.zf) goto L_12c049b4;
  /* 12c049b3 int3  */
  x86_unimpl("int3 @ 0x12c049b3");
L_12c049b4:;
  /* 12c049b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c049b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c049b8 jne 0x12c04992 */
  if (!C.zf) goto L_12c04992;
  /* 12c049ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c049bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c049c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c049c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c049c9 jne 0x12c04a3c */
  if (!C.zf) goto L_12c04a3c;
L_12c049cb:;
  /* 12c049cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c049ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c049d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c049d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c049d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c049d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c049db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c049e0 push eax */
  push32((uint32_t)(EAX));
  /* 12c049e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c049e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c049e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c049e8 push 0x12c299e8 */
  push32((uint32_t)(0x12c299e8u));
  /* 12c049ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c049f5 call 0x12c01ee0 */
  push32(0x12c049fau); f_12c01ee0();
  /* 12c049fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c049fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04a00 jne 0x12c04a03 */
  if (!C.zf) goto L_12c04a03;
  /* 12c04a02 int3  */
  x86_unimpl("int3 @ 0x12c04a02");
L_12c04a03:;
  /* 12c04a03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c04a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04a07 jne 0x12c049cb */
  if (!C.zf) goto L_12c049cb;
  /* 12c04a09 cmp dword ptr [0x12c2fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04a10 je 0x12c04a2b */
  if (C.zf) goto L_12c04a2b;
  /* 12c04a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c04a18 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04a1f push edx */
  push32((uint32_t)(EDX));
  /* 12c04a20 call dword ptr [0x12c2fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2fe38))), 0x12c04a26u);
  /* 12c04a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04a29 jmp 0x12c04a37 */
  goto L_12c04a37;
L_12c04a2b:;
  /* 12c04a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a2e push eax */
  push32((uint32_t)(EAX));
  /* 12c04a2f call 0x12c04b20 */
  push32(0x12c04a34u); f_12c04b20();
  /* 12c04a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04a37:;
  /* 12c04a37 jmp 0x12c04add */
  goto L_12c04add;
L_12c04a3c:;
  /* 12c04a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04a43 jne 0x12c04a82 */
  if (!C.zf) goto L_12c04a82;
L_12c04a45:;
  /* 12c04a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c04a4b push eax */
  push32((uint32_t)(EAX));
  /* 12c04a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04a52 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04a53 push 0x12c299c0 */
  push32((uint32_t)(0x12c299c0u));
  /* 12c04a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04a60 call 0x12c01ee0 */
  push32(0x12c04a65u); f_12c01ee0();
  /* 12c04a65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04a68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04a6b jne 0x12c04a6e */
  if (!C.zf) goto L_12c04a6e;
  /* 12c04a6d int3  */
  x86_unimpl("int3 @ 0x12c04a6d");
L_12c04a6e:;
  /* 12c04a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c04a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04a72 jne 0x12c04a45 */
  if (!C.zf) goto L_12c04a45;
  /* 12c04a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a77 push eax */
  push32((uint32_t)(EAX));
  /* 12c04a78 call 0x12c04b20 */
  push32(0x12c04a7du); f_12c04b20();
  /* 12c04a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04a80 jmp 0x12c04add */
  goto L_12c04add;
L_12c04a82:;
  /* 12c04a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12c04a88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c04a8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04a91 jne 0x12c04add */
  if (!C.zf) goto L_12c04add;
L_12c04a93:;
  /* 12c04a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12c04a99 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12c04aa0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12c04aa3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c04aa8 push eax */
  push32((uint32_t)(EAX));
  /* 12c04aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04aac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04aaf push ecx */
  push32((uint32_t)(ECX));
  /* 12c04ab0 push 0x12c2998c */
  push32((uint32_t)(0x12c2998cu));
  /* 12c04ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04abb push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04abd call 0x12c01ee0 */
  push32(0x12c04ac2u); f_12c01ee0();
  /* 12c04ac2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04ac8 jne 0x12c04acb */
  if (!C.zf) goto L_12c04acb;
  /* 12c04aca int3  */
  x86_unimpl("int3 @ 0x12c04aca");
L_12c04acb:;
  /* 12c04acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c04acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04acf jne 0x12c04a93 */
  if (!C.zf) goto L_12c04a93;
  /* 12c04ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12c04ad5 call 0x12c04b20 */
  push32(0x12c04adau); f_12c04b20();
  /* 12c04ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04add:;
  /* 12c04add jmp 0x12c048b8 */
  goto L_12c048b8;
L_12c04ae2:;
  /* 12c04ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04ae4 call 0x12c068c0 */
  push32(0x12c04ae9u); f_12c068c0();
  /* 12c04ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04aec:;
  /* 12c04aec push 0x12c29974 */
  push32((uint32_t)(0x12c29974u));
  /* 12c04af1 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c04af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04afc push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04afe call 0x12c01ee0 */
  push32(0x12c04b03u); f_12c01ee0();
  /* 12c04b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04b09 jne 0x12c04b0c */
  if (!C.zf) goto L_12c04b0c;
  /* 12c04b0b int3  */
  x86_unimpl("int3 @ 0x12c04b0b");
L_12c04b0c:;
  /* 12c04b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c04b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04b10 jne 0x12c04aec */
  if (!C.zf) goto L_12c04aec;
  /* 12c04b12 pop edi */
  EDI = (pop32());
  /* 12c04b13 pop esi */
  ESI = (pop32());
  /* 12c04b14 pop ebx */
  EBX = (pop32());
  /* 12c04b15 mov esp, ebp */
  ESP = (EBP);
  /* 12c04b17 pop ebp */
  EBP = (pop32());
  /* 12c04b18 ret  */
  ESPCHK(0x12c04860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x12c04b20 (276 bytes, 89 insns) */
void f_12c04b20(void) {
  FTRACE(0x12c04b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04b21 mov ebp, esp */
  EBP = (ESP);
  /* 12c04b23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04b26 push ebx */
  push32((uint32_t)(EBX));
  /* 12c04b27 push esi */
  push32((uint32_t)(ESI));
  /* 12c04b28 push edi */
  push32((uint32_t)(EDI));
  /* 12c04b29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12c04b30 jmp 0x12c04b3b */
  goto L_12c04b3b;
L_12c04b32:;
  /* 12c04b32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c04b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04b38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12c04b3b:;
  /* 12c04b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04b3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04b42 jge 0x12c04b4f */
  if ((C.sf==C.of)) goto L_12c04b4f;
  /* 12c04b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04b47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12c04b4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12c04b4d jmp 0x12c04b56 */
  goto L_12c04b56;
L_12c04b4f:;
  /* 12c04b4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12c04b56:;
  /* 12c04b56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c04b59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04b5c jge 0x12c04bfc */
  if ((C.sf==C.of)) goto L_12c04bfc;
  /* 12c04b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04b65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04b68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12c04b6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12c04b6e cmp dword ptr [0x12c2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04b75 jle 0x12c04b93 */
  if ((C.zf||C.sf!=C.of)) goto L_12c04b93;
  /* 12c04b77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12c04b7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c04b7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c04b85 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04b86 call 0x12c08e30 */
  push32(0x12c04b8bu); f_12c08e30();
  /* 12c04b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04b8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12c04b91 jmp 0x12c04bb0 */
  goto L_12c04bb0;
L_12c04b93:;
  /* 12c04b93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c04b96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c04b9c mov eax, dword ptr [0x12c2cc98] */
  EAX = (r32((uint32_t)(0x12c2cc98)));
  /* 12c04ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c04ba3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12c04ba7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12c04bad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12c04bb0:;
  /* 12c04bb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04bb4 je 0x12c04bc4 */
  if (C.zf) goto L_12c04bc4;
  /* 12c04bb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c04bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c04bbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12c04bc2 jmp 0x12c04bcb */
  goto L_12c04bcb;
L_12c04bc4:;
  /* 12c04bc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12c04bcb:;
  /* 12c04bcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c04bce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12c04bd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12c04bd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12c04bd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c04bde push edx */
  push32((uint32_t)(EDX));
  /* 12c04bdf push 0x12c29a68 */
  push32((uint32_t)(0x12c29a68u));
  /* 12c04be4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c04be7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c04bea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12c04bee push ecx */
  push32((uint32_t)(ECX));
  /* 12c04bef call 0x12c08d30 */
  push32(0x12c04bf4u); f_12c08d30();
  /* 12c04bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04bf7 jmp 0x12c04b32 */
  goto L_12c04b32;
L_12c04bfc:;
  /* 12c04bfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12c04bff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12c04c04:;
  /* 12c04c04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12c04c07 push eax */
  push32((uint32_t)(EAX));
  /* 12c04c08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12c04c0b push ecx */
  push32((uint32_t)(ECX));
  /* 12c04c0c push 0x12c29a58 */
  push32((uint32_t)(0x12c29a58u));
  /* 12c04c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c19 call 0x12c01ee0 */
  push32(0x12c04c1eu); f_12c01ee0();
  /* 12c04c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04c24 jne 0x12c04c27 */
  if (!C.zf) goto L_12c04c27;
  /* 12c04c26 int3  */
  x86_unimpl("int3 @ 0x12c04c26");
L_12c04c27:;
  /* 12c04c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c04c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04c2b jne 0x12c04c04 */
  if (!C.zf) goto L_12c04c04;
  /* 12c04c2d pop edi */
  EDI = (pop32());
  /* 12c04c2e pop esi */
  ESI = (pop32());
  /* 12c04c2f pop ebx */
  EBX = (pop32());
  /* 12c04c30 mov esp, ebp */
  ESP = (EBP);
  /* 12c04c32 pop ebp */
  EBP = (pop32());
  /* 12c04c33 ret  */
  ESPCHK(0x12c04b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x12c04c40 (116 bytes, 46 insns) */
void f_12c04c40(void) {
  FTRACE(0x12c04c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04c41 mov ebp, esp */
  EBP = (ESP);
  /* 12c04c43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04c46 push ebx */
  push32((uint32_t)(EBX));
  /* 12c04c47 push esi */
  push32((uint32_t)(ESI));
  /* 12c04c48 push edi */
  push32((uint32_t)(EDI));
  /* 12c04c49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12c04c4c push eax */
  push32((uint32_t)(EAX));
  /* 12c04c4d call 0x12c045c0 */
  push32(0x12c04c52u); f_12c045c0();
  /* 12c04c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04c55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04c59 jne 0x12c04c74 */
  if (!C.zf) goto L_12c04c74;
  /* 12c04c5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04c5f jne 0x12c04c74 */
  if (!C.zf) goto L_12c04c74;
  /* 12c04c61 mov ecx, dword ptr [0x12c2ca84] */
  ECX = (r32((uint32_t)(0x12c2ca84)));
  /* 12c04c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12c04c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04c6c je 0x12c04cab */
  if (C.zf) goto L_12c04cab;
  /* 12c04c6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04c72 je 0x12c04cab */
  if (C.zf) goto L_12c04cab;
L_12c04c74:;
  /* 12c04c74 push 0x12c29a70 */
  push32((uint32_t)(0x12c29a70u));
  /* 12c04c79 push 0x12c2943c */
  push32((uint32_t)(0x12c2943cu));
  /* 12c04c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c86 call 0x12c01ee0 */
  push32(0x12c04c8bu); f_12c01ee0();
  /* 12c04c8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04c91 jne 0x12c04c94 */
  if (!C.zf) goto L_12c04c94;
  /* 12c04c93 int3  */
  x86_unimpl("int3 @ 0x12c04c93");
L_12c04c94:;
  /* 12c04c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c04c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04c98 jne 0x12c04c74 */
  if (!C.zf) goto L_12c04c74;
  /* 12c04c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04c9c call 0x12c04860 */
  push32(0x12c04ca1u); f_12c04860();
  /* 12c04ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 12c04ca9 jmp 0x12c04cad */
  goto L_12c04cad;
L_12c04cab:;
  /* 12c04cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c04cad:;
  /* 12c04cad pop edi */
  EDI = (pop32());
  /* 12c04cae pop esi */
  ESI = (pop32());
  /* 12c04caf pop ebx */
  EBX = (pop32());
  /* 12c04cb0 mov esp, ebp */
  ESP = (EBP);
  /* 12c04cb2 pop ebp */
  EBP = (pop32());
  /* 12c04cb3 ret  */
  ESPCHK(0x12c04c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x12c04cc0 (197 bytes, 79 insns) */
void f_12c04cc0(void) {
  FTRACE(0x12c04cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c04cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 12c04cc5 push esi */
  push32((uint32_t)(ESI));
  /* 12c04cc6 push edi */
  push32((uint32_t)(EDI));
  /* 12c04cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04ccb jne 0x12c04cd2 */
  if (!C.zf) goto L_12c04cd2;
  /* 12c04ccd jmp 0x12c04d7e */
  goto L_12c04d7e;
L_12c04cd2:;
  /* 12c04cd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c04cd9 jmp 0x12c04ce4 */
  goto L_12c04ce4;
L_12c04cdb:;
  /* 12c04cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c04ce4:;
  /* 12c04ce4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04ce8 jge 0x12c04d2e */
  if ((C.sf==C.of)) goto L_12c04d2e;
L_12c04cea:;
  /* 12c04cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04ced mov edx, dword ptr [ecx*4 + 0x12c2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2ca94)));
  /* 12c04cf4 push edx */
  push32((uint32_t)(EDX));
  /* 12c04cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04cfb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12c04cff push edx */
  push32((uint32_t)(EDX));
  /* 12c04d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04d06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12c04d0a push edx */
  push32((uint32_t)(EDX));
  /* 12c04d0b push 0x12c29acc */
  push32((uint32_t)(0x12c29accu));
  /* 12c04d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d18 call 0x12c01ee0 */
  push32(0x12c04d1du); f_12c01ee0();
  /* 12c04d1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04d23 jne 0x12c04d26 */
  if (!C.zf) goto L_12c04d26;
  /* 12c04d25 int3  */
  x86_unimpl("int3 @ 0x12c04d25");
L_12c04d26:;
  /* 12c04d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04d2a jne 0x12c04cea */
  if (!C.zf) goto L_12c04cea;
  /* 12c04d2c jmp 0x12c04cdb */
  goto L_12c04cdb;
L_12c04d2e:;
  /* 12c04d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04d31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12c04d34 push edx */
  push32((uint32_t)(EDX));
  /* 12c04d35 push 0x12c29aa8 */
  push32((uint32_t)(0x12c29aa8u));
  /* 12c04d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d42 call 0x12c01ee0 */
  push32(0x12c04d47u); f_12c01ee0();
  /* 12c04d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04d4d jne 0x12c04d50 */
  if (!C.zf) goto L_12c04d50;
  /* 12c04d4f int3  */
  x86_unimpl("int3 @ 0x12c04d4f");
L_12c04d50:;
  /* 12c04d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04d54 jne 0x12c04d2e */
  if (!C.zf) goto L_12c04d2e;
L_12c04d56:;
  /* 12c04d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04d59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12c04d5c push edx */
  push32((uint32_t)(EDX));
  /* 12c04d5d push 0x12c29a88 */
  push32((uint32_t)(0x12c29a88u));
  /* 12c04d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04d6a call 0x12c01ee0 */
  push32(0x12c04d6fu); f_12c01ee0();
  /* 12c04d6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04d75 jne 0x12c04d78 */
  if (!C.zf) goto L_12c04d78;
  /* 12c04d77 int3  */
  x86_unimpl("int3 @ 0x12c04d77");
L_12c04d78:;
  /* 12c04d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c04d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04d7c jne 0x12c04d56 */
  if (!C.zf) goto L_12c04d56;
L_12c04d7e:;
  /* 12c04d7e pop edi */
  EDI = (pop32());
  /* 12c04d7f pop esi */
  ESI = (pop32());
  /* 12c04d80 pop ebx */
  EBX = (pop32());
  /* 12c04d81 mov esp, ebp */
  ESP = (EBP);
  /* 12c04d83 pop ebp */
  EBP = (pop32());
  /* 12c04d84 ret  */
  ESPCHK(0x12c04cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x12c04d90 (329 bytes, 102 insns) */
void f_12c04d90(void) {
  FTRACE(0x12c04d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04d91 mov ebp, esp */
  EBP = (ESP);
  /* 12c04d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04d96 cmp dword ptr [0x12c2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04d9d jne 0x12c04da4 */
  if (!C.zf) goto L_12c04da4;
  /* 12c04d9f call 0x12c096d0 */
  push32(0x12c04da4u); f_12c096d0();
L_12c04da4:;
  /* 12c04da4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c04dab mov eax, dword ptr [0x12c2e478] */
  EAX = (r32((uint32_t)(0x12c2e478)));
  /* 12c04db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c04db3:;
  /* 12c04db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c04db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c04dbb je 0x12c04de9 */
  if (C.zf) goto L_12c04de9;
  /* 12c04dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c04dc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04dc6 je 0x12c04dd1 */
  if (C.zf) goto L_12c04dd1;
  /* 12c04dc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c04dd1:;
  /* 12c04dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12c04dd5 call 0x12c05c50 */
  push32(0x12c04ddau); f_12c05c50();
  /* 12c04dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04de0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12c04de4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c04de7 jmp 0x12c04db3 */
  goto L_12c04db3;
L_12c04de9:;
  /* 12c04de9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12c04deb push 0x12c29aec */
  push32((uint32_t)(0x12c29aecu));
  /* 12c04df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c04df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04df5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12c04dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12c04dfd call 0x12c02e20 */
  push32(0x12c04e02u); f_12c02e20();
  /* 12c04e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c04e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04e0b mov dword ptr [0x12c2e4ac], edx */
  w32((uint32_t)(0x12c2e4ac), (EDX));
  /* 12c04e11 cmp dword ptr [0x12c2e4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04e18 jne 0x12c04e24 */
  if (!C.zf) goto L_12c04e24;
  /* 12c04e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04e1c call 0x12c01d90 */
  push32(0x12c04e21u); f_12c01d90();
  /* 12c04e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04e24:;
  /* 12c04e24 mov eax, dword ptr [0x12c2e478] */
  EAX = (r32((uint32_t)(0x12c2e478)));
  /* 12c04e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c04e2c jmp 0x12c04e37 */
  goto L_12c04e37;
L_12c04e2e:;
  /* 12c04e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04e31 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c04e37:;
  /* 12c04e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04e3a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c04e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c04e3f je 0x12c04ea7 */
  if (C.zf) goto L_12c04ea7;
  /* 12c04e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04e44 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04e45 call 0x12c05c50 */
  push32(0x12c04e4au); f_12c05c50();
  /* 12c04e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c04e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c04e59 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04e5c je 0x12c04ea5 */
  if (C.zf) goto L_12c04ea5;
  /* 12c04e5e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12c04e60 push 0x12c29aec */
  push32((uint32_t)(0x12c29aecu));
  /* 12c04e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c04e67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c04e6a push ecx */
  push32((uint32_t)(ECX));
  /* 12c04e6b call 0x12c02e20 */
  push32(0x12c04e70u); f_12c02e20();
  /* 12c04e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04e76 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c04e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04e7b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04e7e jne 0x12c04e8a */
  if (!C.zf) goto L_12c04e8a;
  /* 12c04e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c04e82 call 0x12c01d90 */
  push32(0x12c04e87u); f_12c01d90();
  /* 12c04e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04e8a:;
  /* 12c04e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04e8d push ecx */
  push32((uint32_t)(ECX));
  /* 12c04e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04e91 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c04e93 push eax */
  push32((uint32_t)(EAX));
  /* 12c04e94 call 0x12c05dd0 */
  push32(0x12c04e99u); f_12c05dd0();
  /* 12c04e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04e9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04e9f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ea2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12c04ea5:;
  /* 12c04ea5 jmp 0x12c04e2e */
  goto L_12c04e2e;
L_12c04ea7:;
  /* 12c04ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c04ea9 mov edx, dword ptr [0x12c2e478] */
  EDX = (r32((uint32_t)(0x12c2e478)));
  /* 12c04eaf push edx */
  push32((uint32_t)(EDX));
  /* 12c04eb0 call 0x12c038b0 */
  push32(0x12c04eb5u); f_12c038b0();
  /* 12c04eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04eb8 mov dword ptr [0x12c2e478], 0 */
  w32((uint32_t)(0x12c2e478), (0x0u));
  /* 12c04ec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04ec5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c04ecb mov dword ptr [0x12c2ffa0], 1 */
  w32((uint32_t)(0x12c2ffa0), (0x1u));
  /* 12c04ed5 mov esp, ebp */
  ESP = (EBP);
  /* 12c04ed7 pop ebp */
  EBP = (pop32());
  /* 12c04ed8 ret  */
  ESPCHK(0x12c04d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x12c04ee0 (216 bytes, 69 insns) */
void f_12c04ee0(void) {
  FTRACE(0x12c04ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12c04ee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04ee6 cmp dword ptr [0x12c2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04eed jne 0x12c04ef4 */
  if (!C.zf) goto L_12c04ef4;
  /* 12c04eef call 0x12c096d0 */
  push32(0x12c04ef4u); f_12c096d0();
L_12c04ef4:;
  /* 12c04ef4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c04ef9 push 0x12c2e4e8 */
  push32((uint32_t)(0x12c2e4e8u));
  /* 12c04efe push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04f00 call dword ptr [0x12c302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a8))), 0x12c04f06u);
  /* 12c04f06 mov dword ptr [0x12c2e4bc], 0x12c2e4e8 */
  w32((uint32_t)(0x12c2e4bc), (0x12c2e4e8u));
  /* 12c04f10 mov eax, dword ptr [0x12c2ffcc] */
  EAX = (r32((uint32_t)(0x12c2ffcc)));
  /* 12c04f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c04f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c04f1a jne 0x12c04f27 */
  if (!C.zf) goto L_12c04f27;
  /* 12c04f1c mov edx, dword ptr [0x12c2e4bc] */
  EDX = (r32((uint32_t)(0x12c2e4bc)));
  /* 12c04f22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12c04f25 jmp 0x12c04f2f */
  goto L_12c04f2f;
L_12c04f27:;
  /* 12c04f27 mov eax, dword ptr [0x12c2ffcc] */
  EAX = (r32((uint32_t)(0x12c2ffcc)));
  /* 12c04f2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12c04f2f:;
  /* 12c04f2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c04f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c04f35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12c04f38 push edx */
  push32((uint32_t)(EDX));
  /* 12c04f39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c04f3c push eax */
  push32((uint32_t)(EAX));
  /* 12c04f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12c04f41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c04f44 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04f45 call 0x12c04fc0 */
  push32(0x12c04f4au); f_12c04fc0();
  /* 12c04f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04f4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12c04f52 push 0x12c29af8 */
  push32((uint32_t)(0x12c29af8u));
  /* 12c04f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c04f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04f5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12c04f62 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04f63 call 0x12c02e20 */
  push32(0x12c04f68u); f_12c02e20();
  /* 12c04f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c04f6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04f72 jne 0x12c04f7e */
  if (!C.zf) goto L_12c04f7e;
  /* 12c04f74 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c04f76 call 0x12c01d90 */
  push32(0x12c04f7bu); f_12c01d90();
  /* 12c04f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c04f7e:;
  /* 12c04f7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12c04f81 push edx */
  push32((uint32_t)(EDX));
  /* 12c04f82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12c04f85 push eax */
  push32((uint32_t)(EAX));
  /* 12c04f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04f89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04f8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12c04f8f push eax */
  push32((uint32_t)(EAX));
  /* 12c04f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04f93 push ecx */
  push32((uint32_t)(ECX));
  /* 12c04f94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c04f97 push edx */
  push32((uint32_t)(EDX));
  /* 12c04f98 call 0x12c04fc0 */
  push32(0x12c04f9du); f_12c04fc0();
  /* 12c04f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04fa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c04fa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04fa6 mov dword ptr [0x12c2e4a0], eax */
  w32((uint32_t)(0x12c2e4a0), (EAX));
  /* 12c04fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c04fae mov dword ptr [0x12c2e4a4], ecx */
  w32((uint32_t)(0x12c2e4a4), (ECX));
  /* 12c04fb4 mov esp, ebp */
  ESP = (EBP);
  /* 12c04fb6 pop ebp */
  EBP = (pop32());
  /* 12c04fb7 ret  */
  ESPCHK(0x12c04ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x12c04fc0 (1060 bytes, 360 insns) */
void f_12c04fc0(void) {
  FTRACE(0x12c04fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c04fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c04fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12c04fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c04fc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c04fc9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c04fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c04fd2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12c04fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c04fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c04fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04fe2 je 0x12c04ff5 */
  if (C.zf) goto L_12c04ff5;
  /* 12c04fe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c04fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c04fea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c04fec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c04fef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c04ff2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12c04ff5:;
  /* 12c04ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c04ff8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c04ffb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c04ffe jne 0x12c050cd */
  if (!C.zf) goto L_12c050cd;
L_12c05004:;
  /* 12c05004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0500a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0500d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05010 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c05013 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05016 je 0x12c05092 */
  if (C.zf) goto L_12c05092;
  /* 12c05018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0501b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c0501e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05020 je 0x12c05092 */
  if (C.zf) goto L_12c05092;
  /* 12c05022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05025 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05027 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0502b mov al, byte ptr [edx + 0x12c2fd01] */
  AL = (r8((uint32_t)(EDX + 0x12c2fd01)));
  /* 12c05031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12c05034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05036 je 0x12c05067 */
  if (C.zf) goto L_12c05067;
  /* 12c05038 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0503b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0503d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c05045 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05049 je 0x12c05067 */
  if (C.zf) goto L_12c05067;
  /* 12c0504b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0504e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c05053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c05055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0505b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c0505e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c05067:;
  /* 12c05067 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0506a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0506c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0506f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c05074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05078 je 0x12c0508d */
  if (C.zf) goto L_12c0508d;
  /* 12c0507a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0507d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0508a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c0508d:;
  /* 12c0508d jmp 0x12c05004 */
  goto L_12c05004;
L_12c05092:;
  /* 12c05092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05095 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c05097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0509a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0509d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12c0509f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c050a3 je 0x12c050b4 */
  if (C.zf) goto L_12c050b4;
  /* 12c050a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c050a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c050ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c050ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c050b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12c050b4:;
  /* 12c050b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c050b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c050ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c050bd jne 0x12c050c8 */
  if (!C.zf) goto L_12c050c8;
  /* 12c050bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c050c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c050c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12c050c8:;
  /* 12c050c8 jmp 0x12c0519c */
  goto L_12c0519c;
L_12c050cd:;
  /* 12c050cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c050d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c050d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c050d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c050d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c050da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c050de je 0x12c050f3 */
  if (C.zf) goto L_12c050f3;
  /* 12c050e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c050e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c050e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c050e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c050ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c050ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c050f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c050f3:;
  /* 12c050f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c050f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c050f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12c050fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c050fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c05104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0510d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0510f mov dl, byte ptr [ecx + 0x12c2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12c2fd01)));
  /* 12c05115 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12c05118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c0511a je 0x12c0514b */
  if (C.zf) goto L_12c0514b;
  /* 12c0511c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0511f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c05121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c05129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0512d je 0x12c05142 */
  if (C.zf) goto L_12c05142;
  /* 12c0512f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0513c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0513f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12c05142:;
  /* 12c05142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c0514b:;
  /* 12c0514b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0514e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c05154 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05157 je 0x12c05177 */
  if (C.zf) goto L_12c05177;
  /* 12c05159 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0515c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c05161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05163 je 0x12c05177 */
  if (C.zf) goto L_12c05177;
  /* 12c05165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c0516e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05171 jne 0x12c050cd */
  if (!C.zf) goto L_12c050cd;
L_12c05177:;
  /* 12c05177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0517a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c05180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05182 jne 0x12c0518f */
  if (!C.zf) goto L_12c0518f;
  /* 12c05184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0518a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0518d jmp 0x12c0519c */
  goto L_12c0519c;
L_12c0518f:;
  /* 12c0518f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05193 je 0x12c0519c */
  if (C.zf) goto L_12c0519c;
  /* 12c05195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05198 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12c0519c:;
  /* 12c0519c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12c051a3:;
  /* 12c051a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c051a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c051a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c051ab je 0x12c051ce */
  if (C.zf) goto L_12c051ce;
L_12c051ad:;
  /* 12c051ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c051b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c051b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c051b6 je 0x12c051c3 */
  if (C.zf) goto L_12c051c3;
  /* 12c051b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c051bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c051be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c051c1 jne 0x12c051ce */
  if (!C.zf) goto L_12c051ce;
L_12c051c3:;
  /* 12c051c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c051c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c051c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c051cc jmp 0x12c051ad */
  goto L_12c051ad;
L_12c051ce:;
  /* 12c051ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c051d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c051d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c051d6 jne 0x12c051dd */
  if (!C.zf) goto L_12c051dd;
  /* 12c051d8 jmp 0x12c053bb */
  goto L_12c053bb;
L_12c051dd:;
  /* 12c051dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c051e1 je 0x12c051f4 */
  if (C.zf) goto L_12c051f4;
  /* 12c051e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c051e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c051e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12c051eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c051ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c051f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c051f4:;
  /* 12c051f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c051f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c051f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c051fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c051ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12c05201:;
  /* 12c05201 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12c05208 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12c0520f:;
  /* 12c0520f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05212 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c05215 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05218 jne 0x12c0522e */
  if (!C.zf) goto L_12c0522e;
  /* 12c0521a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0521d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c05223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c05226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c0522c jmp 0x12c0520f */
  goto L_12c0520f;
L_12c0522e:;
  /* 12c0522e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c05234 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05237 jne 0x12c0528a */
  if (!C.zf) goto L_12c0528a;
  /* 12c05239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0523c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0523e mov ecx, 2 */
  ECX = (0x2u);
  /* 12c05243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c05245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05247 jne 0x12c05282 */
  if (!C.zf) goto L_12c05282;
  /* 12c05249 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0524d je 0x12c0526f */
  if (C.zf) goto L_12c0526f;
  /* 12c0524f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05252 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12c05256 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05259 jne 0x12c05266 */
  if (!C.zf) goto L_12c05266;
  /* 12c0525b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0525e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c05264 jmp 0x12c0526d */
  goto L_12c0526d;
L_12c05266:;
  /* 12c05266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c0526d:;
  /* 12c0526d jmp 0x12c05276 */
  goto L_12c05276;
L_12c0526f:;
  /* 12c0526f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12c05276:;
  /* 12c05276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05278 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0527c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12c0527f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12c05282:;
  /* 12c05282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c05285 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12c05287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12c0528a:;
  /* 12c0528a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0528d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c05290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12c05296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c05298 je 0x12c052be */
  if (C.zf) goto L_12c052be;
  /* 12c0529a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0529e je 0x12c052af */
  if (C.zf) goto L_12c052af;
  /* 12c052a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c052a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12c052a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c052a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c052ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12c052af:;
  /* 12c052af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c052b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c052b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c052b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c052ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c052bc jmp 0x12c0528a */
  goto L_12c0528a;
L_12c052be:;
  /* 12c052be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c052c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12c052c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c052c6 je 0x12c052e4 */
  if (C.zf) goto L_12c052e4;
  /* 12c052c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c052cc jne 0x12c052e9 */
  if (!C.zf) goto L_12c052e9;
  /* 12c052ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c052d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c052d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c052d7 je 0x12c052e4 */
  if (C.zf) goto L_12c052e4;
  /* 12c052d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c052dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12c052df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c052e2 jne 0x12c052e9 */
  if (!C.zf) goto L_12c052e9;
L_12c052e4:;
  /* 12c052e4 jmp 0x12c05394 */
  goto L_12c05394;
L_12c052e9:;
  /* 12c052e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c052ed je 0x12c05386 */
  if (C.zf) goto L_12c05386;
  /* 12c052f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c052f7 je 0x12c0534d */
  if (C.zf) goto L_12c0534d;
  /* 12c052f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c052fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c052fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c05300 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c05302 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c05308 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0530b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c0530d je 0x12c05338 */
  if (C.zf) goto L_12c05338;
  /* 12c0530f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05315 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12c05317 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12c05319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0531c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0531f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12c05322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0532b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0532e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c05330 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05336 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12c05338:;
  /* 12c05338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0533b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0533e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c05340 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12c05342 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05348 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12c0534b jmp 0x12c05379 */
  goto L_12c05379;
L_12c0534d:;
  /* 12c0534d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12c05354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c05356 mov cl, byte ptr [eax + 0x12c2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12c2fd01)));
  /* 12c0535c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12c0535f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c05361 je 0x12c05379 */
  if (C.zf) goto L_12c05379;
  /* 12c05363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c0536c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0536f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c05371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05374 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c05379:;
  /* 12c05379 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c0537c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c0537e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c05384 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12c05386:;
  /* 12c05386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0538c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0538f jmp 0x12c05201 */
  goto L_12c05201;
L_12c05394:;
  /* 12c05394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05398 je 0x12c053a9 */
  if (C.zf) goto L_12c053a9;
  /* 12c0539a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0539d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c053a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c053a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c053a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12c053a9:;
  /* 12c053a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c053ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c053ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c053b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12c053b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c053b6 jmp 0x12c051a3 */
  goto L_12c051a3;
L_12c053bb:;
  /* 12c053bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c053bf je 0x12c053d3 */
  if (C.zf) goto L_12c053d3;
  /* 12c053c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c053c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12c053ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c053cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c053d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c053d3:;
  /* 12c053d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c053d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c053d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c053db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c053de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c053e0 mov esp, ebp */
  ESP = (EBP);
  /* 12c053e2 pop ebp */
  EBP = (pop32());
  /* 12c053e3 ret  */
  ESPCHK(0x12c04fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x12c053f0 (537 bytes, 173 insns) */
void f_12c053f0(void) {
  FTRACE(0x12c053f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c053f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c053f1 mov ebp, esp */
  EBP = (ESP);
  /* 12c053f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c053f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12c053fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12c05404 cmp dword ptr [0x12c2e5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0540b jne 0x12c0544a */
  if (!C.zf) goto L_12c0544a;
  /* 12c0540d call dword ptr [0x12c30304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30304))), 0x12c05413u);
  /* 12c05413 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c05416 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0541a je 0x12c05428 */
  if (C.zf) goto L_12c05428;
  /* 12c0541c mov dword ptr [0x12c2e5ec], 1 */
  w32((uint32_t)(0x12c2e5ec), (0x1u));
  /* 12c05426 jmp 0x12c0544a */
  goto L_12c0544a;
L_12c05428:;
  /* 12c05428 call dword ptr [0x12c30300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30300))), 0x12c0542eu);
  /* 12c0542e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c05431 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05435 je 0x12c05443 */
  if (C.zf) goto L_12c05443;
  /* 12c05437 mov dword ptr [0x12c2e5ec], 2 */
  w32((uint32_t)(0x12c2e5ec), (0x2u));
  /* 12c05441 jmp 0x12c0544a */
  goto L_12c0544a;
L_12c05443:;
  /* 12c05443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05445 jmp 0x12c05605 */
  goto L_12c05605;
L_12c0544a:;
  /* 12c0544a cmp dword ptr [0x12c2e5ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e5ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05451 jne 0x12c0554e */
  if (!C.zf) goto L_12c0554e;
  /* 12c05457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0545b jne 0x12c05473 */
  if (!C.zf) goto L_12c05473;
  /* 12c0545d call dword ptr [0x12c30304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30304))), 0x12c05463u);
  /* 12c05463 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c05466 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0546a jne 0x12c05473 */
  if (!C.zf) goto L_12c05473;
  /* 12c0546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0546e jmp 0x12c05605 */
  goto L_12c05605;
L_12c05473:;
  /* 12c05473 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c05476 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c05479:;
  /* 12c05479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0547c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0547e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c05481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05483 je 0x12c054a5 */
  if (C.zf) goto L_12c054a5;
  /* 12c05485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05488 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0548e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05493 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12c05496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05498 jne 0x12c054a3 */
  if (!C.zf) goto L_12c054a3;
  /* 12c0549a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0549d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c054a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c054a3:;
  /* 12c054a3 jmp 0x12c05479 */
  goto L_12c05479;
L_12c054a5:;
  /* 12c054a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c054a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c054ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12c054ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c054b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c054b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c054be push edx */
  push32((uint32_t)(EDX));
  /* 12c054bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c054c2 push eax */
  push32((uint32_t)(EAX));
  /* 12c054c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c054c7 call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c054cdu);
  /* 12c054cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c054d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c054d4 je 0x12c054f4 */
  if (C.zf) goto L_12c054f4;
  /* 12c054d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12c054d8 push 0x12c29b04 */
  push32((uint32_t)(0x12c29b04u));
  /* 12c054dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12c054df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c054e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12c054e3 call 0x12c02e20 */
  push32(0x12c054e8u); f_12c02e20();
  /* 12c054e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c054eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c054ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c054f2 jne 0x12c05505 */
  if (!C.zf) goto L_12c05505;
L_12c054f4:;
  /* 12c054f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c054f7 push edx */
  push32((uint32_t)(EDX));
  /* 12c054f8 call dword ptr [0x12c302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f8))), 0x12c054feu);
  /* 12c054fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05500 jmp 0x12c05605 */
  goto L_12c05605;
L_12c05505:;
  /* 12c05505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05507 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0550c push eax */
  push32((uint32_t)(EAX));
  /* 12c0550d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c05510 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05514 push edx */
  push32((uint32_t)(EDX));
  /* 12c05515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c05518 push eax */
  push32((uint32_t)(EAX));
  /* 12c05519 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0551b push 0 */
  push32((uint32_t)(0x0u));
  /* 12c0551d call dword ptr [0x12c302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302fc))), 0x12c05523u);
  /* 12c05523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05525 jne 0x12c0553c */
  if (!C.zf) goto L_12c0553c;
  /* 12c05527 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c05529 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0552c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0552d call 0x12c038b0 */
  push32(0x12c05532u); f_12c038b0();
  /* 12c05532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05535 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12c0553c:;
  /* 12c0553c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c0553f push edx */
  push32((uint32_t)(EDX));
  /* 12c05540 call dword ptr [0x12c302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f8))), 0x12c05546u);
  /* 12c05546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c05549 jmp 0x12c05605 */
  goto L_12c05605;
L_12c0554e:;
  /* 12c0554e cmp dword ptr [0x12c2e5ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e5ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05555 jne 0x12c05603 */
  if (!C.zf) goto L_12c05603;
  /* 12c0555b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0555f jne 0x12c05577 */
  if (!C.zf) goto L_12c05577;
  /* 12c05561 call dword ptr [0x12c30300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30300))), 0x12c05567u);
  /* 12c05567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c0556a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0556e jne 0x12c05577 */
  if (!C.zf) goto L_12c05577;
  /* 12c05570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05572 jmp 0x12c05605 */
  goto L_12c05605;
L_12c05577:;
  /* 12c05577 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0557a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c0557d:;
  /* 12c0557d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c05583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05585 je 0x12c055a5 */
  if (C.zf) goto L_12c055a5;
  /* 12c05587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0558a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0558d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c05590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05593 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12c05596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05598 jne 0x12c055a3 */
  if (!C.zf) goto L_12c055a3;
  /* 12c0559a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0559d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c055a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12c055a3:;
  /* 12c055a3 jmp 0x12c0557d */
  goto L_12c0557d;
L_12c055a5:;
  /* 12c055a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c055a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c055ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c055ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c055b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12c055b6 push 0x12c29b04 */
  push32((uint32_t)(0x12c29b04u));
  /* 12c055bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12c055bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c055c0 push edx */
  push32((uint32_t)(EDX));
  /* 12c055c1 call 0x12c02e20 */
  push32(0x12c055c6u); f_12c02e20();
  /* 12c055c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c055c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c055cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c055d0 jne 0x12c055e0 */
  if (!C.zf) goto L_12c055e0;
  /* 12c055d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c055d5 push eax */
  push32((uint32_t)(EAX));
  /* 12c055d6 call dword ptr [0x12c302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f4))), 0x12c055dcu);
  /* 12c055dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c055de jmp 0x12c05605 */
  goto L_12c05605;
L_12c055e0:;
  /* 12c055e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c055e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c055e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c055e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c055e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c055eb push eax */
  push32((uint32_t)(EAX));
  /* 12c055ec call 0x12c09700 */
  push32(0x12c055f1u); f_12c09700();
  /* 12c055f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c055f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c055f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c055f8 call dword ptr [0x12c302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302f4))), 0x12c055feu);
  /* 12c055fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05601 jmp 0x12c05605 */
  goto L_12c05605;
L_12c05603:;
  /* 12c05603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c05605:;
  /* 12c05605 mov esp, ebp */
  ESP = (EBP);
  /* 12c05607 pop ebp */
  EBP = (pop32());
  /* 12c05608 ret  */
  ESPCHK(0x12c053f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x12c05610 (77 bytes, 25 insns) */
void f_12c05610(void) {
  FTRACE(0x12c05610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05610 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05611 mov ebp, esp */
  EBP = (ESP);
  /* 12c05613 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05615 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12c0561a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0561c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05620 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12c05623 push eax */
  push32((uint32_t)(EAX));
  /* 12c05624 call dword ptr [0x12c3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3030c))), 0x12c0562au);
  /* 12c0562a mov dword ptr [0x12c2fe2c], eax */
  w32((uint32_t)(0x12c2fe2c), (EAX));
  /* 12c0562f cmp dword ptr [0x12c2fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05636 jne 0x12c0563c */
  if (!C.zf) goto L_12c0563c;
  /* 12c05638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c0563a jmp 0x12c0565b */
  goto L_12c0565b;
L_12c0563c:;
  /* 12c0563c call 0x12c070c0 */
  push32(0x12c05641u); f_12c070c0();
  /* 12c05641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05643 jne 0x12c05656 */
  if (!C.zf) goto L_12c05656;
  /* 12c05645 mov ecx, dword ptr [0x12c2fe2c] */
  ECX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c0564b push ecx */
  push32((uint32_t)(ECX));
  /* 12c0564c call dword ptr [0x12c30308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30308))), 0x12c05652u);
  /* 12c05652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05654 jmp 0x12c0565b */
  goto L_12c0565b;
L_12c05656:;
  /* 12c05656 mov eax, 1 */
  EAX = (0x1u);
L_12c0565b:;
  /* 12c0565b pop ebp */
  EBP = (pop32());
  /* 12c0565c ret  */
  ESPCHK(0x12c05610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005660 @ 0x12c05660 (156 bytes, 48 insns) */
void f_12c05660(void) {
  FTRACE(0x12c05660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05660 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05661 mov ebp, esp */
  EBP = (ESP);
  /* 12c05663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05666 mov eax, dword ptr [0x12c2fe28] */
  EAX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c0566b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0566e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c05675 jmp 0x12c05680 */
  goto L_12c05680;
L_12c05677:;
  /* 12c05677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0567a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0567d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c05680:;
  /* 12c05680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05683 cmp edx, dword ptr [0x12c2fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05689 jge 0x12c056d6 */
  if ((C.sf==C.of)) goto L_12c056d6;
  /* 12c0568b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12c05690 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12c05695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05698 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12c0569b push ecx */
  push32((uint32_t)(ECX));
  /* 12c0569c call dword ptr [0x12c30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30314))), 0x12c056a2u);
  /* 12c056a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12c056a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c056a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c056ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12c056af push eax */
  push32((uint32_t)(EAX));
  /* 12c056b0 call dword ptr [0x12c30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30314))), 0x12c056b6u);
  /* 12c056b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c056b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12c056bc push edx */
  push32((uint32_t)(EDX));
  /* 12c056bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c056bf mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c056c4 push eax */
  push32((uint32_t)(EAX));
  /* 12c056c5 call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c056cbu);
  /* 12c056cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c056ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c056d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c056d4 jmp 0x12c05677 */
  goto L_12c05677;
L_12c056d6:;
  /* 12c056d6 mov edx, dword ptr [0x12c2fe28] */
  EDX = (r32((uint32_t)(0x12c2fe28)));
  /* 12c056dc push edx */
  push32((uint32_t)(EDX));
  /* 12c056dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12c056df mov eax, dword ptr [0x12c2fe2c] */
  EAX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c056e4 push eax */
  push32((uint32_t)(EAX));
  /* 12c056e5 call dword ptr [0x12c30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30310))), 0x12c056ebu);
  /* 12c056eb mov ecx, dword ptr [0x12c2fe2c] */
  ECX = (r32((uint32_t)(0x12c2fe2c)));
  /* 12c056f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12c056f2 call dword ptr [0x12c30308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30308))), 0x12c056f8u);
  /* 12c056f8 mov esp, ebp */
  ESP = (EBP);
  /* 12c056fa pop ebp */
  EBP = (pop32());
  /* 12c056fb ret  */
  ESPCHK(0x12c05660u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12c05700 (73 bytes, 19 insns) */
void f_12c05700(void) {
  FTRACE(0x12c05700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05700 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05701 mov ebp, esp */
  EBP = (ESP);
  /* 12c05703 cmp dword ptr [0x12c2e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0570a je 0x12c0571e */
  if (C.zf) goto L_12c0571e;
  /* 12c0570c cmp dword ptr [0x12c2e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05713 jne 0x12c05747 */
  if (!C.zf) goto L_12c05747;
  /* 12c05715 cmp dword ptr [0x12c2e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0571c jne 0x12c05747 */
  if (!C.zf) goto L_12c05747;
L_12c0571e:;
  /* 12c0571e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12c05723 call 0x12c05750 */
  push32(0x12c05728u); f_12c05750();
  /* 12c05728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0572b cmp dword ptr [0x12c2e5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05732 je 0x12c0573a */
  if (C.zf) goto L_12c0573a;
  /* 12c05734 call dword ptr [0x12c2e5f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e5f0))), 0x12c0573au);
L_12c0573a:;
  /* 12c0573a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c0573f call 0x12c05750 */
  push32(0x12c05744u); f_12c05750();
  /* 12c05744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c05747:;
  /* 12c05747 pop ebp */
  EBP = (pop32());
  /* 12c05748 ret  */
  ESPCHK(0x12c05700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x12c05750 (447 bytes, 131 insns) */
void f_12c05750(void) {
  FTRACE(0x12c05750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05750 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05751 mov ebp, esp */
  EBP = (ESP);
  /* 12c05753 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05759 push ebx */
  push32((uint32_t)(EBX));
  /* 12c0575a push esi */
  push32((uint32_t)(ESI));
  /* 12c0575b push edi */
  push32((uint32_t)(EDI));
  /* 12c0575c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12c05763 jmp 0x12c0576e */
  goto L_12c0576e;
L_12c05765:;
  /* 12c05765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0576b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12c0576e:;
  /* 12c0576e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05772 jae 0x12c05787 */
  if (!C.cf) goto L_12c05787;
  /* 12c05774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0577a cmp edx, dword ptr [ecx*8 + 0x12c2cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12c2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05781 jne 0x12c05785 */
  if (!C.zf) goto L_12c05785;
  /* 12c05783 jmp 0x12c05787 */
  goto L_12c05787;
L_12c05785:;
  /* 12c05785 jmp 0x12c05765 */
  goto L_12c05765;
L_12c05787:;
  /* 12c05787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0578a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0578d cmp ecx, dword ptr [eax*8 + 0x12c2cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05794 jne 0x12c05908 */
  if (!C.zf) goto L_12c05908;
  /* 12c0579a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c057a1 je 0x12c057c4 */
  if (C.zf) goto L_12c057c4;
  /* 12c057a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c057a6 mov eax, dword ptr [edx*8 + 0x12c2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c2cab4)));
  /* 12c057ad push eax */
  push32((uint32_t)(EAX));
  /* 12c057ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12c057b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c057b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c057b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c057b6 call 0x12c01ee0 */
  push32(0x12c057bbu); f_12c01ee0();
  /* 12c057bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c057be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c057c1 jne 0x12c057c4 */
  if (!C.zf) goto L_12c057c4;
  /* 12c057c3 int3  */
  x86_unimpl("int3 @ 0x12c057c3");
L_12c057c4:;
  /* 12c057c4 cmp dword ptr [0x12c2e480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c057cb je 0x12c057df */
  if (C.zf) goto L_12c057df;
  /* 12c057cd cmp dword ptr [0x12c2e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c057d4 jne 0x12c05818 */
  if (!C.zf) goto L_12c05818;
  /* 12c057d6 cmp dword ptr [0x12c2e484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c057dd jne 0x12c05818 */
  if (!C.zf) goto L_12c05818;
L_12c057df:;
  /* 12c057df push 0 */
  push32((uint32_t)(0x0u));
  /* 12c057e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12c057e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12c057e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c057e8 mov eax, dword ptr [edx*8 + 0x12c2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c2cab4)));
  /* 12c057ef push eax */
  push32((uint32_t)(EAX));
  /* 12c057f0 call 0x12c05c50 */
  push32(0x12c057f5u); f_12c05c50();
  /* 12c057f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c057f8 push eax */
  push32((uint32_t)(EAX));
  /* 12c057f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c057fc mov edx, dword ptr [ecx*8 + 0x12c2cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12c2cab4)));
  /* 12c05803 push edx */
  push32((uint32_t)(EDX));
  /* 12c05804 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12c05806 call dword ptr [0x12c3028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3028c))), 0x12c0580cu);
  /* 12c0580c push eax */
  push32((uint32_t)(EAX));
  /* 12c0580d call dword ptr [0x12c30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30290))), 0x12c05813u);
  /* 12c05813 jmp 0x12c05908 */
  goto L_12c05908;
L_12c05818:;
  /* 12c05818 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0581f je 0x12c05908 */
  if (C.zf) goto L_12c05908;
  /* 12c05825 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12c0582a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12c05830 push eax */
  push32((uint32_t)(EAX));
  /* 12c05831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05833 call dword ptr [0x12c302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a8))), 0x12c05839u);
  /* 12c05839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c0583b jne 0x12c05851 */
  if (!C.zf) goto L_12c05851;
  /* 12c0583d push 0x12c2936c */
  push32((uint32_t)(0x12c2936cu));
  /* 12c05842 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12c05848 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05849 call 0x12c05dd0 */
  push32(0x12c0584eu); f_12c05dd0();
  /* 12c0584e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c05851:;
  /* 12c05851 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12c05857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c0585a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0585d push eax */
  push32((uint32_t)(EAX));
  /* 12c0585e call 0x12c05c50 */
  push32(0x12c05863u); f_12c05c50();
  /* 12c05863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05866 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05869 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0586c jbe 0x12c0589a */
  if ((C.cf||C.zf)) goto L_12c0589a;
  /* 12c0586e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12c05874 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05875 call 0x12c05c50 */
  push32(0x12c0587au); f_12c05c50();
  /* 12c0587a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0587d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05880 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12c05884 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c05887 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c05889 push 0x12c29368 */
  push32((uint32_t)(0x12c29368u));
  /* 12c0588e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05891 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05892 call 0x12c06640 */
  push32(0x12c05897u); f_12c06640();
  /* 12c05897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0589a:;
  /* 12c0589a push 0x12c29dc0 */
  push32((uint32_t)(0x12c29dc0u));
  /* 12c0589f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c058a5 push edx */
  push32((uint32_t)(EDX));
  /* 12c058a6 call 0x12c05dd0 */
  push32(0x12c058abu); f_12c05dd0();
  /* 12c058ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c058ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c058b1 push eax */
  push32((uint32_t)(EAX));
  /* 12c058b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12c058b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12c058b9 call 0x12c05de0 */
  push32(0x12c058beu); f_12c05de0();
  /* 12c058be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c058c1 push 0x12c292e0 */
  push32((uint32_t)(0x12c292e0u));
  /* 12c058c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c058cc push edx */
  push32((uint32_t)(EDX));
  /* 12c058cd call 0x12c05de0 */
  push32(0x12c058d2u); f_12c05de0();
  /* 12c058d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c058d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c058d8 mov ecx, dword ptr [eax*8 + 0x12c2cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12c2cab4)));
  /* 12c058df push ecx */
  push32((uint32_t)(ECX));
  /* 12c058e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12c058e6 push edx */
  push32((uint32_t)(EDX));
  /* 12c058e7 call 0x12c05de0 */
  push32(0x12c058ecu); f_12c05de0();
  /* 12c058ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c058ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12c058f4 push 0x12c29d98 */
  push32((uint32_t)(0x12c29d98u));
  /* 12c058f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12c058ff push eax */
  push32((uint32_t)(EAX));
  /* 12c05900 call 0x12c06580 */
  push32(0x12c05905u); f_12c06580();
  /* 12c05905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c05908:;
  /* 12c05908 pop edi */
  EDI = (pop32());
  /* 12c05909 pop esi */
  ESI = (pop32());
  /* 12c0590a pop ebx */
  EBX = (pop32());
  /* 12c0590b mov esp, ebp */
  ESP = (EBP);
  /* 12c0590d pop ebp */
  EBP = (pop32());
  /* 12c0590e ret  */
  ESPCHK(0x12c05750u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12c05910 (80 bytes, 27 insns) */
void f_12c05910(void) {
  FTRACE(0x12c05910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05910 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05911 mov ebp, esp */
  EBP = (ESP);
  /* 12c05913 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0591b jmp 0x12c05926 */
  goto L_12c05926;
L_12c0591d:;
  /* 12c0591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c05926:;
  /* 12c05926 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0592a jae 0x12c0593f */
  if (!C.cf) goto L_12c0593f;
  /* 12c0592c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0592f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05932 cmp edx, dword ptr [ecx*8 + 0x12c2cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12c2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05939 jne 0x12c0593d */
  if (!C.zf) goto L_12c0593d;
  /* 12c0593b jmp 0x12c0593f */
  goto L_12c0593f;
L_12c0593d:;
  /* 12c0593d jmp 0x12c0591d */
  goto L_12c0591d;
L_12c0593f:;
  /* 12c0593f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05945 cmp ecx, dword ptr [eax*8 + 0x12c2cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12c2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0594c jne 0x12c0595a */
  if (!C.zf) goto L_12c0595a;
  /* 12c0594e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05951 mov eax, dword ptr [edx*8 + 0x12c2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12c2cab4)));
  /* 12c05958 jmp 0x12c0595c */
  goto L_12c0595c;
L_12c0595a:;
  /* 12c0595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c0595c:;
  /* 12c0595c mov esp, ebp */
  ESP = (EBP);
  /* 12c0595e pop ebp */
  EBP = (pop32());
  /* 12c0595f ret  */
  ESPCHK(0x12c05910u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12c05960 (66 bytes, 28 insns) */
void f_12c05960(void) {
  FTRACE(0x12c05960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05960 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05961 mov ebp, esp */
  EBP = (ESP);
  /* 12c05963 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05967 jne 0x12c05987 */
  if (!C.zf) goto L_12c05987;
  /* 12c05969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0596d jge 0x12c05987 */
  if ((C.sf==C.of)) goto L_12c05987;
  /* 12c0596f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c05971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05974 push eax */
  push32((uint32_t)(EAX));
  /* 12c05975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05978 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0597c push edx */
  push32((uint32_t)(EDX));
  /* 12c0597d call 0x12c059b0 */
  push32(0x12c05982u); f_12c059b0();
  /* 12c05982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05985 jmp 0x12c0599d */
  goto L_12c0599d;
L_12c05987:;
  /* 12c05987 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c0598c push eax */
  push32((uint32_t)(EAX));
  /* 12c0598d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05990 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05994 push edx */
  push32((uint32_t)(EDX));
  /* 12c05995 call 0x12c059b0 */
  push32(0x12c0599au); f_12c059b0();
  /* 12c0599a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0599d:;
  /* 12c0599d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c059a0 pop ebp */
  EBP = (pop32());
  /* 12c059a1 ret  */
  ESPCHK(0x12c05960u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12c059b0 (194 bytes, 71 insns) */
void f_12c059b0(void) {
  FTRACE(0x12c059b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c059b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c059b1 mov ebp, esp */
  EBP = (ESP);
  /* 12c059b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c059b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c059b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c059bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c059c0 je 0x12c059d9 */
  if (C.zf) goto L_12c059d9;
  /* 12c059c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c059c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12c059c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c059cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c059ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c059d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c059d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c059d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12c059d9:;
  /* 12c059d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c059dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12c059df:;
  /* 12c059df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c059e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c059e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c059e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c059ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c059ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c059ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12c059f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c059f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c059f9 jbe 0x12c05a11 */
  if ((C.cf||C.zf)) goto L_12c05a11;
  /* 12c059fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c059fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05a0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c05a0f jmp 0x12c05a25 */
  goto L_12c05a25;
L_12c05a11:;
  /* 12c05a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05a14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05a22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c05a25:;
  /* 12c05a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05a29 ja 0x12c059df */
  if ((!C.cf&&!C.zf)) goto L_12c059df;
  /* 12c05a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c05a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c05a3a:;
  /* 12c05a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05a3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12c05a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05a48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05a4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05a4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12c05a52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c05a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05a5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c05a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c05a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05a69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05a6c jb 0x12c05a3a */
  if (C.cf) goto L_12c05a3a;
  /* 12c05a6e mov esp, ebp */
  ESP = (EBP);
  /* 12c05a70 pop ebp */
  EBP = (pop32());
  /* 12c05a71 ret  */
  ESPCHK(0x12c059b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12c05a80 (63 bytes, 24 insns) */
void f_12c05a80(void) {
  FTRACE(0x12c05a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05a81 mov ebp, esp */
  EBP = (ESP);
  /* 12c05a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05a84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05a88 jne 0x12c05a99 */
  if (!C.zf) goto L_12c05a99;
  /* 12c05a8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05a8e jge 0x12c05a99 */
  if ((C.sf==C.of)) goto L_12c05a99;
  /* 12c05a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c05a97 jmp 0x12c05aa0 */
  goto L_12c05aa0;
L_12c05a99:;
  /* 12c05a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c05aa0:;
  /* 12c05aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05aa3 push eax */
  push32((uint32_t)(EAX));
  /* 12c05aa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05aa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05aab push edx */
  push32((uint32_t)(EDX));
  /* 12c05aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05aaf push eax */
  push32((uint32_t)(EAX));
  /* 12c05ab0 call 0x12c059b0 */
  push32(0x12c05ab5u); f_12c059b0();
  /* 12c05ab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05abb mov esp, ebp */
  ESP = (EBP);
  /* 12c05abd pop ebp */
  EBP = (pop32());
  /* 12c05abe ret  */
  ESPCHK(0x12c05a80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12c05ac0 (30 bytes, 14 insns) */
void f_12c05ac0(void) {
  FTRACE(0x12c05ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c05ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12c05ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05acc push ecx */
  push32((uint32_t)(ECX));
  /* 12c05acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05ad0 push edx */
  push32((uint32_t)(EDX));
  /* 12c05ad1 call 0x12c059b0 */
  push32(0x12c05ad6u); f_12c059b0();
  /* 12c05ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05adc pop ebp */
  EBP = (pop32());
  /* 12c05add ret  */
  ESPCHK(0x12c05ac0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12c05ae0 (72 bytes, 28 insns) */
void f_12c05ae0(void) {
  FTRACE(0x12c05ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12c05ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05ae4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05ae8 jne 0x12c05b01 */
  if (!C.zf) goto L_12c05b01;
  /* 12c05aea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05aee jg 0x12c05b01 */
  if ((!C.zf&&C.sf==C.of)) goto L_12c05b01;
  /* 12c05af0 jl 0x12c05af8 */
  if ((C.sf!=C.of)) goto L_12c05af8;
  /* 12c05af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05af6 jae 0x12c05b01 */
  if (!C.cf) goto L_12c05b01;
L_12c05af8:;
  /* 12c05af8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12c05aff jmp 0x12c05b08 */
  goto L_12c05b08;
L_12c05b01:;
  /* 12c05b01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12c05b08:;
  /* 12c05b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05b0b push eax */
  push32((uint32_t)(EAX));
  /* 12c05b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c05b0f push ecx */
  push32((uint32_t)(ECX));
  /* 12c05b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05b13 push edx */
  push32((uint32_t)(EDX));
  /* 12c05b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05b17 push eax */
  push32((uint32_t)(EAX));
  /* 12c05b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05b1b push ecx */
  push32((uint32_t)(ECX));
  /* 12c05b1c call 0x12c05b30 */
  push32(0x12c05b21u); f_12c05b30();
  /* 12c05b21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05b24 mov esp, ebp */
  ESP = (EBP);
  /* 12c05b26 pop ebp */
  EBP = (pop32());
  /* 12c05b27 ret  */
  ESPCHK(0x12c05ae0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12c05b30 (242 bytes, 91 insns) */
void f_12c05b30(void) {
  FTRACE(0x12c05b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05b31 mov ebp, esp */
  EBP = (ESP);
  /* 12c05b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c05b3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05b40 je 0x12c05b64 */
  if (C.zf) goto L_12c05b64;
  /* 12c05b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05b45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12c05b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05b4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c05b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c05b56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05b59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05b5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12c05b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c05b61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12c05b64:;
  /* 12c05b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05b67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12c05b6a:;
  /* 12c05b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c05b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c05b6f push ecx */
  push32((uint32_t)(ECX));
  /* 12c05b70 push eax */
  push32((uint32_t)(EAX));
  /* 12c05b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05b74 push edx */
  push32((uint32_t)(EDX));
  /* 12c05b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05b78 push eax */
  push32((uint32_t)(EAX));
  /* 12c05b79 call 0x12c09ab0 */
  push32(0x12c05b7eu); f_12c09ab0();
  /* 12c05b7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c05b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c05b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05b86 push edx */
  push32((uint32_t)(EDX));
  /* 12c05b87 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05b8b push eax */
  push32((uint32_t)(EAX));
  /* 12c05b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05b8f push ecx */
  push32((uint32_t)(ECX));
  /* 12c05b90 call 0x12c09a40 */
  push32(0x12c05b95u); f_12c09a40();
  /* 12c05b95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12c05b98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12c05b9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05b9f jbe 0x12c05bb7 */
  if ((C.cf||C.zf)) goto L_12c05bb7;
  /* 12c05ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05ba4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12c05bb5 jmp 0x12c05bcb */
  goto L_12c05bcb;
L_12c05bb7:;
  /* 12c05bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c05bba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05bc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12c05bcb:;
  /* 12c05bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05bcf ja 0x12c05b6a */
  if ((!C.cf&&!C.zf)) goto L_12c05b6a;
  /* 12c05bd1 jb 0x12c05bd9 */
  if (C.cf) goto L_12c05bd9;
  /* 12c05bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05bd7 ja 0x12c05b6a */
  if ((!C.cf&&!C.zf)) goto L_12c05b6a;
L_12c05bd9:;
  /* 12c05bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05bdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12c05bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c05be8:;
  /* 12c05be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05bed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12c05bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05bf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12c05bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05bfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12c05c00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12c05c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c05c05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12c05c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05c0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c05c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c05c17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05c1a jb 0x12c05be8 */
  if (C.cf) goto L_12c05be8;
  /* 12c05c1c mov esp, ebp */
  ESP = (EBP);
  /* 12c05c1e pop ebp */
  EBP = (pop32());
  /* 12c05c1f ret 0x14 */
  ESPCHK(0x12c05b30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12c05c30 (31 bytes, 15 insns) */
void f_12c05c30(void) {
  FTRACE(0x12c05c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05c31 mov ebp, esp */
  EBP = (ESP);
  /* 12c05c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c05c38 push eax */
  push32((uint32_t)(EAX));
  /* 12c05c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05c3c push ecx */
  push32((uint32_t)(ECX));
  /* 12c05c3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05c40 push edx */
  push32((uint32_t)(EDX));
  /* 12c05c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05c44 push eax */
  push32((uint32_t)(EAX));
  /* 12c05c45 call 0x12c05b30 */
  push32(0x12c05c4au); f_12c05b30();
  /* 12c05c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05c4d pop ebp */
  EBP = (pop32());
  /* 12c05c4e ret  */
  ESPCHK(0x12c05c30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12c05c50 (123 bytes, 44 insns) */
void f_12c05c50(void) {
  FTRACE(0x12c05c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05c54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05c5a je 0x12c05c70 */
  if (C.zf) goto L_12c05c70;
L_12c05c5c:;
  /* 12c05c5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c05c5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c05c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c05c61 je 0x12c05ca3 */
  if (C.zf) goto L_12c05ca3;
  /* 12c05c63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05c69 jne 0x12c05c5c */
  if (!C.zf) goto L_12c05c5c;
  /* 12c05c6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12c05c70:;
  /* 12c05c70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c05c72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c05c77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05c79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c05c7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05c81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c05c86 je 0x12c05c70 */
  if (C.zf) goto L_12c05c70;
  /* 12c05c88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c05c8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c05c8d je 0x12c05cc1 */
  if (C.zf) goto L_12c05cc1;
  /* 12c05c8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c05c91 je 0x12c05cb7 */
  if (C.zf) goto L_12c05cb7;
  /* 12c05c93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c05c98 je 0x12c05cad */
  if (C.zf) goto L_12c05cad;
  /* 12c05c9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c05c9f je 0x12c05ca3 */
  if (C.zf) goto L_12c05ca3;
  /* 12c05ca1 jmp 0x12c05c70 */
  goto L_12c05c70;
L_12c05ca3:;
  /* 12c05ca3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12c05ca6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05caa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05cac ret  */
  ESPCHK(0x12c05c50u, _esp0);
  ESP += 4; return;
L_12c05cad:;
  /* 12c05cad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12c05cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05cb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05cb6 ret  */
  ESPCHK(0x12c05c50u, _esp0);
  ESP += 4; return;
L_12c05cb7:;
  /* 12c05cb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12c05cba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05cc0 ret  */
  ESPCHK(0x12c05c50u, _esp0);
  ESP += 4; return;
L_12c05cc1:;
  /* 12c05cc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12c05cc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05cc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05cca ret  */
  ESPCHK(0x12c05c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x12c05cd0 (249 bytes, 93 insns) */
void f_12c05cd0(void) {
  FTRACE(0x12c05cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12c05cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c05cd7 push esi */
  push32((uint32_t)(ESI));
  /* 12c05cd8 push edi */
  push32((uint32_t)(EDI));
  /* 12c05cd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c05cdc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12c05cdf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12c05ce2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12c05ce5:;
  /* 12c05ce5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05ce9 jne 0x12c05d09 */
  if (!C.zf) goto L_12c05d09;
  /* 12c05ceb push 0x12c29df8 */
  push32((uint32_t)(0x12c29df8u));
  /* 12c05cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05cf2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12c05cf4 push 0x12c29dec */
  push32((uint32_t)(0x12c29decu));
  /* 12c05cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c05cfb call 0x12c01ee0 */
  push32(0x12c05d00u); f_12c01ee0();
  /* 12c05d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05d06 jne 0x12c05d09 */
  if (!C.zf) goto L_12c05d09;
  /* 12c05d08 int3  */
  x86_unimpl("int3 @ 0x12c05d08");
L_12c05d09:;
  /* 12c05d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05d0d jne 0x12c05ce5 */
  if (!C.zf) goto L_12c05ce5;
L_12c05d0f:;
  /* 12c05d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05d13 jne 0x12c05d33 */
  if (!C.zf) goto L_12c05d33;
  /* 12c05d15 push 0x12c29ddc */
  push32((uint32_t)(0x12c29ddcu));
  /* 12c05d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05d1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12c05d1e push 0x12c29dec */
  push32((uint32_t)(0x12c29decu));
  /* 12c05d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c05d25 call 0x12c01ee0 */
  push32(0x12c05d2au); f_12c01ee0();
  /* 12c05d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05d30 jne 0x12c05d33 */
  if (!C.zf) goto L_12c05d33;
  /* 12c05d32 int3  */
  x86_unimpl("int3 @ 0x12c05d32");
L_12c05d33:;
  /* 12c05d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12c05d37 jne 0x12c05d0f */
  if (!C.zf) goto L_12c05d0f;
  /* 12c05d39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12c05d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05d49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c05d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12c05d54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12c05d5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12c05d60 push edx */
  push32((uint32_t)(EDX));
  /* 12c05d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05d64 push eax */
  push32((uint32_t)(EAX));
  /* 12c05d65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d68 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05d69 call 0x12c09db0 */
  push32(0x12c05d6eu); f_12c09db0();
  /* 12c05d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c05d74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c05d7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05d7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12c05d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05d8a jl 0x12c05dae */
  if ((C.sf!=C.of)) goto L_12c05dae;
  /* 12c05d8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c05d91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12c05d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c05d9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12c05d9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05da2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c05da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05da7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05daa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12c05dac jmp 0x12c05dbf */
  goto L_12c05dbf;
L_12c05dae:;
  /* 12c05dae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05db1 push eax */
  push32((uint32_t)(EAX));
  /* 12c05db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05db4 call 0x12c09b30 */
  push32(0x12c05db9u); f_12c09b30();
  /* 12c05db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05dbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12c05dbf:;
  /* 12c05dbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c05dc2 pop edi */
  EDI = (pop32());
  /* 12c05dc3 pop esi */
  ESI = (pop32());
  /* 12c05dc4 pop ebx */
  EBX = (pop32());
  /* 12c05dc5 mov esp, ebp */
  ESP = (EBP);
  /* 12c05dc7 pop ebp */
  EBP = (pop32());
  /* 12c05dc8 ret  */
  ESPCHK(0x12c05cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x12c05dd0 (7 bytes, 3 insns) */
void f_12c05dd0(void) {
  FTRACE(0x12c05dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05dd0 push edi */
  push32((uint32_t)(EDI));
  /* 12c05dd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12c05dd5 jmp 0x12c05e41 */
  jmp_ind(0x12c05e41u); return;
}

/* FUN_10005de0 @ 0x12c05de0 (224 bytes, 84 insns) */
void f_12c05de0(void) {
  FTRACE(0x12c05de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12c05de4 push edi */
  push32((uint32_t)(EDI));
  /* 12c05de5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05deb je 0x12c05dfc */
  if (C.zf) goto L_12c05dfc;
L_12c05ded:;
  /* 12c05ded mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12c05def inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c05df0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c05df2 je 0x12c05e2f */
  if (C.zf) goto L_12c05e2f;
  /* 12c05df4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05dfa jne 0x12c05ded */
  if (!C.zf) goto L_12c05ded;
L_12c05dfc:;
  /* 12c05dfc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c05dfe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c05e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05e05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c05e08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05e0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05e0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c05e12 je 0x12c05dfc */
  if (C.zf) goto L_12c05dfc;
  /* 12c05e14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12c05e17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c05e19 je 0x12c05e3e */
  if (C.zf) goto L_12c05e3e;
  /* 12c05e1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12c05e1d je 0x12c05e39 */
  if (C.zf) goto L_12c05e39;
  /* 12c05e1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c05e24 je 0x12c05e34 */
  if (C.zf) goto L_12c05e34;
  /* 12c05e26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c05e2b je 0x12c05e2f */
  if (C.zf) goto L_12c05e2f;
  /* 12c05e2d jmp 0x12c05dfc */
  goto L_12c05dfc;
L_12c05e2f:;
  /* 12c05e2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12c05e32 jmp 0x12c05e41 */
  goto L_12c05e41;
L_12c05e34:;
  /* 12c05e34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12c05e37 jmp 0x12c05e41 */
  goto L_12c05e41;
L_12c05e39:;
  /* 12c05e39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12c05e3c jmp 0x12c05e41 */
  goto L_12c05e41;
L_12c05e3e:;
  /* 12c05e3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12c05e41:;
  /* 12c05e41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c05e45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05e4b je 0x12c05e66 */
  if (C.zf) goto L_12c05e66;
L_12c05e4d:;
  /* 12c05e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12c05e4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12c05e50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c05e52 je 0x12c05eb8 */
  if (C.zf) goto L_12c05eb8;
  /* 12c05e54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c05e56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c05e57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12c05e5d jne 0x12c05e4d */
  if (!C.zf) goto L_12c05e4d;
  /* 12c05e5f jmp 0x12c05e66 */
  goto L_12c05e66;
L_12c05e61:;
  /* 12c05e61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c05e63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12c05e66:;
  /* 12c05e66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c05e6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12c05e6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05e6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c05e72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c05e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c05e76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05e79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c05e7e je 0x12c05e61 */
  if (C.zf) goto L_12c05e61;
  /* 12c05e80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c05e82 je 0x12c05eb8 */
  if (C.zf) goto L_12c05eb8;
  /* 12c05e84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c05e86 je 0x12c05eaf */
  if (C.zf) goto L_12c05eaf;
  /* 12c05e88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c05e8e je 0x12c05ea2 */
  if (C.zf) goto L_12c05ea2;
  /* 12c05e90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c05e96 je 0x12c05e9a */
  if (C.zf) goto L_12c05e9a;
  /* 12c05e98 jmp 0x12c05e61 */
  goto L_12c05e61;
L_12c05e9a:;
  /* 12c05e9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c05e9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c05ea0 pop edi */
  EDI = (pop32());
  /* 12c05ea1 ret  */
  ESPCHK(0x12c05de0u, _esp0);
  ESP += 4; return;
L_12c05ea2:;
  /* 12c05ea2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c05ea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c05ea9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12c05ead pop edi */
  EDI = (pop32());
  /* 12c05eae ret  */
  ESPCHK(0x12c05de0u, _esp0);
  ESP += 4; return;
L_12c05eaf:;
  /* 12c05eaf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12c05eb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c05eb6 pop edi */
  EDI = (pop32());
  /* 12c05eb7 ret  */
  ESPCHK(0x12c05de0u, _esp0);
  ESP += 4; return;
L_12c05eb8:;
  /* 12c05eb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12c05eba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c05ebe pop edi */
  EDI = (pop32());
  /* 12c05ebf ret  */
  ESPCHK(0x12c05de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x12c05ec0 (243 bytes, 91 insns) */
void f_12c05ec0(void) {
  FTRACE(0x12c05ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12c05ec3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 12c05ec7 push esi */
  push32((uint32_t)(ESI));
  /* 12c05ec8 push edi */
  push32((uint32_t)(EDI));
  /* 12c05ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12c05ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12c05ecf:;
  /* 12c05ecf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05ed3 jne 0x12c05ef3 */
  if (!C.zf) goto L_12c05ef3;
  /* 12c05ed5 push 0x12c29df8 */
  push32((uint32_t)(0x12c29df8u));
  /* 12c05eda push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05edc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12c05ede push 0x12c29e08 */
  push32((uint32_t)(0x12c29e08u));
  /* 12c05ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c05ee5 call 0x12c01ee0 */
  push32(0x12c05eeau); f_12c01ee0();
  /* 12c05eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05ef0 jne 0x12c05ef3 */
  if (!C.zf) goto L_12c05ef3;
  /* 12c05ef2 int3  */
  x86_unimpl("int3 @ 0x12c05ef2");
L_12c05ef3:;
  /* 12c05ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c05ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c05ef7 jne 0x12c05ecf */
  if (!C.zf) goto L_12c05ecf;
L_12c05ef9:;
  /* 12c05ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05efd jne 0x12c05f1d */
  if (!C.zf) goto L_12c05f1d;
  /* 12c05eff push 0x12c29ddc */
  push32((uint32_t)(0x12c29ddcu));
  /* 12c05f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05f06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12c05f08 push 0x12c29e08 */
  push32((uint32_t)(0x12c29e08u));
  /* 12c05f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12c05f0f call 0x12c01ee0 */
  push32(0x12c05f14u); f_12c01ee0();
  /* 12c05f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05f17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05f1a jne 0x12c05f1d */
  if (!C.zf) goto L_12c05f1d;
  /* 12c05f1c int3  */
  x86_unimpl("int3 @ 0x12c05f1c");
L_12c05f1d:;
  /* 12c05f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c05f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12c05f21 jne 0x12c05ef9 */
  if (!C.zf) goto L_12c05ef9;
  /* 12c05f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12c05f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12c05f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c05f3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12c05f3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c05f44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12c05f47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12c05f4a push ecx */
  push32((uint32_t)(ECX));
  /* 12c05f4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c05f4e push edx */
  push32((uint32_t)(EDX));
  /* 12c05f4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f52 push eax */
  push32((uint32_t)(EAX));
  /* 12c05f53 call 0x12c09db0 */
  push32(0x12c05f58u); f_12c09db0();
  /* 12c05f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12c05f5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c05f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05f67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12c05f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05f74 jl 0x12c05f98 */
  if ((C.sf!=C.of)) goto L_12c05f98;
  /* 12c05f76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c05f7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12c05f7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12c05f80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12c05f86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12c05f89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c05f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05f91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12c05f96 jmp 0x12c05fa9 */
  goto L_12c05fa9;
L_12c05f98:;
  /* 12c05f98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12c05f9b push edx */
  push32((uint32_t)(EDX));
  /* 12c05f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12c05f9e call 0x12c09b30 */
  push32(0x12c05fa3u); f_12c09b30();
  /* 12c05fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c05fa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12c05fa9:;
  /* 12c05fa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12c05fac pop edi */
  EDI = (pop32());
  /* 12c05fad pop esi */
  ESI = (pop32());
  /* 12c05fae pop ebx */
  EBX = (pop32());
  /* 12c05faf mov esp, ebp */
  ESP = (EBP);
  /* 12c05fb1 pop ebp */
  EBP = (pop32());
  /* 12c05fb2 ret  */
  ESPCHK(0x12c05ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x12c05fc0 (47 bytes, 17 insns) */
void f_12c05fc0(void) {
  FTRACE(0x12c05fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12c05fc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05fc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12c05fca jb 0x12c05fe0 */
  if (C.cf) goto L_12c05fe0;
L_12c05fcc:;
  /* 12c05fcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05fd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05fd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c05fd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05fde jae 0x12c05fcc */
  if (!C.cf) goto L_12c05fcc;
L_12c05fe0:;
  /* 12c05fe0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05fe2 mov eax, esp */
  EAX = (ESP);
  /* 12c05fe4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12c05fe6 mov esp, ecx */
  ESP = (ECX);
  /* 12c05fe8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c05fea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c05fed push eax */
  push32((uint32_t)(EAX));
  /* 12c05fee ret  */
  ESPCHK(0x12c05fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x12c05ff0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12c05ff0(void) {
  FTRACE(0x12c05ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c05ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c05ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12c05ff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c05ff6 push esi */
  push32((uint32_t)(ESI));
  /* 12c05ff7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c05ffb je 0x12c06003 */
  if (C.zf) goto L_12c06003;
  /* 12c05ffd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06001 jne 0x12c06008 */
  if (!C.zf) goto L_12c06008;
L_12c06003:;
  /* 12c06003 jmp 0x12c061d8 */
  goto L_12c061d8;
L_12c06008:;
  /* 12c06008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0600c je 0x12c06024 */
  if (C.zf) goto L_12c06024;
  /* 12c0600e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06012 je 0x12c06024 */
  if (C.zf) goto L_12c06024;
  /* 12c06014 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06018 je 0x12c06024 */
  if (C.zf) goto L_12c06024;
  /* 12c0601a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0601e jne 0x12c06101 */
  if (!C.zf) goto L_12c06101;
L_12c06024:;
  /* 12c06024 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06026 call 0x12c06820 */
  push32(0x12c0602bu); f_12c06820();
  /* 12c0602b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0602e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06032 je 0x12c0603a */
  if (C.zf) goto L_12c0603a;
  /* 12c06034 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06038 jne 0x12c0607f */
  if (!C.zf) goto L_12c0607f;
L_12c0603a:;
  /* 12c0603a cmp dword ptr [0x12c2e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06041 jne 0x12c0607f */
  if (!C.zf) goto L_12c0607f;
  /* 12c06043 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06045 push 0x12c06220 */
  push32((uint32_t)(0x12c06220u));
  /* 12c0604a call dword ptr [0x12c30318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30318))), 0x12c06050u);
  /* 12c06050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06053 jne 0x12c06061 */
  if (!C.zf) goto L_12c06061;
  /* 12c06055 mov dword ptr [0x12c2e604], 1 */
  w32((uint32_t)(0x12c2e604), (0x1u));
  /* 12c0605f jmp 0x12c0607f */
  goto L_12c0607f;
L_12c06061:;
  /* 12c06061 call dword ptr [0x12c302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302d0))), 0x12c06067u);
  /* 12c06067 mov esi, eax */
  ESI = (EAX);
  /* 12c06069 call 0x12c0ad00 */
  push32(0x12c0606eu); f_12c0ad00();
  /* 12c0606e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12c06070 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06072 call 0x12c068c0 */
  push32(0x12c06077u); f_12c068c0();
  /* 12c06077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0607a jmp 0x12c061d8 */
  goto L_12c061d8;
L_12c0607f:;
  /* 12c0607f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06082 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c06085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06088 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c0608b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12c0608e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06092 ja 0x12c060f2 */
  if ((!C.cf&&!C.zf)) goto L_12c060f2;
  /* 12c06094 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c06099 mov dl, byte ptr [eax + 0x12c061ff] */
  DL = (r8((uint32_t)(EAX + 0x12c061ff)));
  /* 12c0609f jmp dword ptr [edx*4 + 0x12c061eb] */
  switch (EDX) {
    case 0: goto L_12c060a6;
    case 1: goto L_12c060e0;
    case 2: goto L_12c060ba;
    case 3: goto L_12c060cd;
    case 4: goto L_12c060f2;
    default: x86_unimpl("switch@0x12c0609f out of table"); return;
  }
L_12c060a6:;
  /* 12c060a6 mov ecx, dword ptr [0x12c2e5f4] */
  ECX = (r32((uint32_t)(0x12c2e5f4)));
  /* 12c060ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c060af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c060b2 mov dword ptr [0x12c2e5f4], edx */
  w32((uint32_t)(0x12c2e5f4), (EDX));
  /* 12c060b8 jmp 0x12c060f2 */
  goto L_12c060f2;
L_12c060ba:;
  /* 12c060ba mov eax, dword ptr [0x12c2e5f8] */
  EAX = (r32((uint32_t)(0x12c2e5f8)));
  /* 12c060bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c060c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c060c5 mov dword ptr [0x12c2e5f8], ecx */
  w32((uint32_t)(0x12c2e5f8), (ECX));
  /* 12c060cb jmp 0x12c060f2 */
  goto L_12c060f2;
L_12c060cd:;
  /* 12c060cd mov edx, dword ptr [0x12c2e5fc] */
  EDX = (r32((uint32_t)(0x12c2e5fc)));
  /* 12c060d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12c060d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c060d9 mov dword ptr [0x12c2e5fc], eax */
  w32((uint32_t)(0x12c2e5fc), (EAX));
  /* 12c060de jmp 0x12c060f2 */
  goto L_12c060f2;
L_12c060e0:;
  /* 12c060e0 mov ecx, dword ptr [0x12c2e600] */
  ECX = (r32((uint32_t)(0x12c2e600)));
  /* 12c060e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c060e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c060ec mov dword ptr [0x12c2e600], edx */
  w32((uint32_t)(0x12c2e600), (EDX));
L_12c060f2:;
  /* 12c060f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c060f4 call 0x12c068c0 */
  push32(0x12c060f9u); f_12c068c0();
  /* 12c060f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c060fc jmp 0x12c061d3 */
  goto L_12c061d3;
L_12c06101:;
  /* 12c06101 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06105 je 0x12c06118 */
  if (C.zf) goto L_12c06118;
  /* 12c06107 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0610b je 0x12c06118 */
  if (C.zf) goto L_12c06118;
  /* 12c0610d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06111 je 0x12c06118 */
  if (C.zf) goto L_12c06118;
  /* 12c06113 jmp 0x12c061d8 */
  goto L_12c061d8;
L_12c06118:;
  /* 12c06118 call 0x12c02860 */
  push32(0x12c0611du); f_12c02860();
  /* 12c0611d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06123 cmp dword ptr [eax + 0x50], 0x12c2cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12c2cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0612a jne 0x12c06175 */
  if (!C.zf) goto L_12c06175;
  /* 12c0612c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12c06131 push 0x12c29e14 */
  push32((uint32_t)(0x12c29e14u));
  /* 12c06136 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c06138 mov ecx, dword ptr [0x12c2cc80] */
  ECX = (r32((uint32_t)(0x12c2cc80)));
  /* 12c0613e push ecx */
  push32((uint32_t)(ECX));
  /* 12c0613f call 0x12c02e20 */
  push32(0x12c06144u); f_12c02e20();
  /* 12c06144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0614a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12c0614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06150 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06154 je 0x12c06173 */
  if (C.zf) goto L_12c06173;
  /* 12c06156 mov ecx, dword ptr [0x12c2cc80] */
  ECX = (r32((uint32_t)(0x12c2cc80)));
  /* 12c0615c push ecx */
  push32((uint32_t)(ECX));
  /* 12c0615d push 0x12c2cc00 */
  push32((uint32_t)(0x12c2cc00u));
  /* 12c06162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06165 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12c06168 push eax */
  push32((uint32_t)(EAX));
  /* 12c06169 call 0x12c09700 */
  push32(0x12c0616eu); f_12c09700();
  /* 12c0616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06171 jmp 0x12c06175 */
  goto L_12c06175;
L_12c06173:;
  /* 12c06173 jmp 0x12c061d8 */
  goto L_12c061d8;
L_12c06175:;
  /* 12c06175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06178 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c0617b push edx */
  push32((uint32_t)(EDX));
  /* 12c0617c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0617f push eax */
  push32((uint32_t)(EAX));
  /* 12c06180 call 0x12c06500 */
  push32(0x12c06185u); f_12c06500();
  /* 12c06185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0618b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0618f jne 0x12c06193 */
  if (!C.zf) goto L_12c06193;
  /* 12c06191 jmp 0x12c061d8 */
  goto L_12c061d8;
L_12c06193:;
  /* 12c06193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12c06199 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12c0619c:;
  /* 12c0619c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0619f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c061a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c061a5 jne 0x12c061d3 */
  if (!C.zf) goto L_12c061d3;
  /* 12c061a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c061aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c061ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12c061b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c061b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c061b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c061b9 mov edx, dword ptr [0x12c2cc84] */
  EDX = (r32((uint32_t)(0x12c2cc84)));
  /* 12c061bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c061c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c061c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12c061c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c061ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c061cd jb 0x12c061d1 */
  if (C.cf) goto L_12c061d1;
  /* 12c061cf jmp 0x12c061d3 */
  goto L_12c061d3;
L_12c061d1:;
  /* 12c061d1 jmp 0x12c0619c */
  goto L_12c0619c;
L_12c061d3:;
  /* 12c061d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c061d6 jmp 0x12c061e6 */
  goto L_12c061e6;
L_12c061d8:;
  /* 12c061d8 call 0x12c0acf0 */
  push32(0x12c061ddu); f_12c0acf0();
  /* 12c061dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12c061e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c061e6:;
  /* 12c061e6 pop esi */
  ESI = (pop32());
  /* 12c061e7 mov esp, ebp */
  ESP = (EBP);
  /* 12c061e9 pop ebp */
  EBP = (pop32());
  /* 12c061ea ret  */
  ESPCHK(0x12c05ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12c06220 (146 bytes, 45 insns) */
void f_12c06220(void) {
  FTRACE(0x12c06220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06220 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06221 mov ebp, esp */
  EBP = (ESP);
  /* 12c06223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06226 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06228 call 0x12c06820 */
  push32(0x12c0622du); f_12c06820();
  /* 12c0622d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06230 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06234 jne 0x12c0624e */
  if (!C.zf) goto L_12c0624e;
  /* 12c06236 mov dword ptr [ebp - 8], 0x12c2e5f4 */
  w32((uint32_t)(EBP + -0x8), (0x12c2e5f4u));
  /* 12c0623d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12c06242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c06245 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12c0624c jmp 0x12c06264 */
  goto L_12c06264;
L_12c0624e:;
  /* 12c0624e mov dword ptr [ebp - 8], 0x12c2e5f8 */
  w32((uint32_t)(EBP + -0x8), (0x12c2e5f8u));
  /* 12c06255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c0625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0625d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12c06264:;
  /* 12c06264 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06268 jne 0x12c06278 */
  if (!C.zf) goto L_12c06278;
  /* 12c0626a push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0626c call 0x12c068c0 */
  push32(0x12c06271u); f_12c068c0();
  /* 12c06271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06276 jmp 0x12c062ac */
  goto L_12c062ac;
L_12c06278:;
  /* 12c06278 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0627c je 0x12c0629d */
  if (C.zf) goto L_12c0629d;
  /* 12c0627e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06281 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12c06287 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06289 call 0x12c068c0 */
  push32(0x12c0628eu); f_12c068c0();
  /* 12c0628e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06294 push edx */
  push32((uint32_t)(EDX));
  /* 12c06295 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12c06298u);
  /* 12c06298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0629b jmp 0x12c062a7 */
  goto L_12c062a7;
L_12c0629d:;
  /* 12c0629d push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0629f call 0x12c068c0 */
  push32(0x12c062a4u); f_12c068c0();
  /* 12c062a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c062a7:;
  /* 12c062a7 mov eax, 1 */
  EAX = (0x1u);
L_12c062ac:;
  /* 12c062ac mov esp, ebp */
  ESP = (EBP);
  /* 12c062ae pop ebp */
  EBP = (pop32());
  /* 12c062af ret 4 */
  ESPCHK(0x12c06220u, _esp0);
  ESP += 8; return;
}

/* FUN_100062c0 @ 0x12c062c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12c062c0(void) {
  FTRACE(0x12c062c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c062c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c062c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c062c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c062c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12c062cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c062d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12c062d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c062d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c062d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12c062dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c062e0 ja 0x12c0638e */
  if ((!C.cf&&!C.zf)) goto L_12c0638e;
  /* 12c062e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12c062e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c062eb mov dl, byte ptr [eax + 0x12c064e2] */
  DL = (r8((uint32_t)(EAX + 0x12c064e2)));
  /* 12c062f1 jmp dword ptr [edx*4 + 0x12c064ca] */
  switch (EDX) {
    case 0: goto L_12c062f8;
    case 1: goto L_12c06363;
    case 2: goto L_12c06349;
    case 3: goto L_12c06315;
    case 4: goto L_12c0632f;
    case 5: goto L_12c0638e;
    default: x86_unimpl("switch@0x12c062f1 out of table"); return;
  }
L_12c062f8:;
  /* 12c062f8 mov dword ptr [ebp - 0x18], 0x12c2e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12c2e5f4u));
  /* 12c062ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c06304 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c06307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0630a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0630d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c06310 jmp 0x12c06396 */
  goto L_12c06396;
L_12c06315:;
  /* 12c06315 mov dword ptr [ebp - 0x18], 0x12c2e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12c2e5f8u));
  /* 12c0631c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c0631f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c06321 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c06324 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0632a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c0632d jmp 0x12c06396 */
  goto L_12c06396;
L_12c0632f:;
  /* 12c0632f mov dword ptr [ebp - 0x18], 0x12c2e5fc */
  w32((uint32_t)(EBP + -0x18), (0x12c2e5fcu));
  /* 12c06336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c0633b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c0633e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c06347 jmp 0x12c06396 */
  goto L_12c06396;
L_12c06349:;
  /* 12c06349 mov dword ptr [ebp - 0x18], 0x12c2e600 */
  w32((uint32_t)(EBP + -0x18), (0x12c2e600u));
  /* 12c06350 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c06355 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c06358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c0635b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0635e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12c06361 jmp 0x12c06396 */
  goto L_12c06396;
L_12c06363:;
  /* 12c06363 call 0x12c02860 */
  push32(0x12c06368u); f_12c02860();
  /* 12c06368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0636b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0636e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c06371 push edx */
  push32((uint32_t)(EDX));
  /* 12c06372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06375 push eax */
  push32((uint32_t)(EAX));
  /* 12c06376 call 0x12c06500 */
  push32(0x12c0637bu); f_12c06500();
  /* 12c0637b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0637e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06381 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12c06384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c06389 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12c0638c jmp 0x12c06396 */
  goto L_12c06396;
L_12c0638e:;
  /* 12c0638e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c06391 jmp 0x12c064c6 */
  goto L_12c064c6;
L_12c06396:;
  /* 12c06396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0639a je 0x12c063a6 */
  if (C.zf) goto L_12c063a6;
  /* 12c0639c push 1 */
  push32((uint32_t)(0x1u));
  /* 12c0639e call 0x12c06820 */
  push32(0x12c063a3u); f_12c06820();
  /* 12c063a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c063a6:;
  /* 12c063a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063aa jne 0x12c063c3 */
  if (!C.zf) goto L_12c063c3;
  /* 12c063ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063b0 je 0x12c063bc */
  if (C.zf) goto L_12c063bc;
  /* 12c063b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12c063b4 call 0x12c068c0 */
  push32(0x12c063b9u); f_12c068c0();
  /* 12c063b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c063bc:;
  /* 12c063bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c063be jmp 0x12c064c6 */
  goto L_12c064c6;
L_12c063c3:;
  /* 12c063c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063c7 jne 0x12c063e0 */
  if (!C.zf) goto L_12c063e0;
  /* 12c063c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063cd je 0x12c063d9 */
  if (C.zf) goto L_12c063d9;
  /* 12c063cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12c063d1 call 0x12c068c0 */
  push32(0x12c063d6u); f_12c068c0();
  /* 12c063d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c063d9:;
  /* 12c063d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12c063db call 0x12c025e0 */
  push32(0x12c063e0u); f_12c025e0();
L_12c063e0:;
  /* 12c063e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063e4 je 0x12c063f2 */
  if (C.zf) goto L_12c063f2;
  /* 12c063e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063ea je 0x12c063f2 */
  if (C.zf) goto L_12c063f2;
  /* 12c063ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c063f0 jne 0x12c0641e */
  if (!C.zf) goto L_12c0641e;
L_12c063f2:;
  /* 12c063f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c063f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12c063f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12c063fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c063fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12c06405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06409 jne 0x12c0641e */
  if (!C.zf) goto L_12c0641e;
  /* 12c0640b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0640e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12c06411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12c06414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06417 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12c0641e:;
  /* 12c0641e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06422 jne 0x12c06460 */
  if (!C.zf) goto L_12c06460;
  /* 12c06424 mov eax, dword ptr [0x12c2cc78] */
  EAX = (r32((uint32_t)(0x12c2cc78)));
  /* 12c06429 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c0642c jmp 0x12c06437 */
  goto L_12c06437;
L_12c0642e:;
  /* 12c0642e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12c06437:;
  /* 12c06437 mov edx, dword ptr [0x12c2cc78] */
  EDX = (r32((uint32_t)(0x12c2cc78)));
  /* 12c0643d add edx, dword ptr [0x12c2cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06443 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06446 jge 0x12c0645e */
  if ((C.sf==C.of)) goto L_12c0645e;
  /* 12c06448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0644b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0644e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06451 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c06454 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12c0645c jmp 0x12c0642e */
  goto L_12c0642e;
L_12c0645e:;
  /* 12c0645e jmp 0x12c06469 */
  goto L_12c06469;
L_12c06460:;
  /* 12c06460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12c06469:;
  /* 12c06469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0646d je 0x12c06479 */
  if (C.zf) goto L_12c06479;
  /* 12c0646f push 1 */
  push32((uint32_t)(0x1u));
  /* 12c06471 call 0x12c068c0 */
  push32(0x12c06476u); f_12c068c0();
  /* 12c06476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c06479:;
  /* 12c06479 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0647d jne 0x12c06490 */
  if (!C.zf) goto L_12c06490;
  /* 12c0647f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06482 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12c06485 push edx */
  push32((uint32_t)(EDX));
  /* 12c06486 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c06488 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12c0648bu);
  /* 12c0648b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0648e jmp 0x12c0649a */
  goto L_12c0649a;
L_12c06490:;
  /* 12c06490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06493 push eax */
  push32((uint32_t)(EAX));
  /* 12c06494 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12c06497u);
  /* 12c06497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0649a:;
  /* 12c0649a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0649e je 0x12c064ac */
  if (C.zf) goto L_12c064ac;
  /* 12c064a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c064a4 je 0x12c064ac */
  if (C.zf) goto L_12c064ac;
  /* 12c064a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c064aa jne 0x12c064c4 */
  if (!C.zf) goto L_12c064c4;
L_12c064ac:;
  /* 12c064ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c064af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c064b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12c064b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c064b9 jne 0x12c064c4 */
  if (!C.zf) goto L_12c064c4;
  /* 12c064bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c064be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c064c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12c064c4:;
  /* 12c064c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c064c6:;
  /* 12c064c6 mov esp, ebp */
  ESP = (EBP);
  /* 12c064c8 pop ebp */
  EBP = (pop32());
  /* 12c064c9 ret  */
  ESPCHK(0x12c062c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x12c06500 (91 bytes, 35 insns) */
void f_12c06500(void) {
  FTRACE(0x12c06500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06500 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06501 mov ebp, esp */
  EBP = (ESP);
  /* 12c06503 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c0650a:;
  /* 12c0650a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0650d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12c06510 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06513 je 0x12c06533 */
  if (C.zf) goto L_12c06533;
  /* 12c06515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06518 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0651b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0651e mov ecx, dword ptr [0x12c2cc84] */
  ECX = (r32((uint32_t)(0x12c2cc84)));
  /* 12c06524 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c06527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0652a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0652c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0652f jae 0x12c06533 */
  if (!C.cf) goto L_12c06533;
  /* 12c06531 jmp 0x12c0650a */
  goto L_12c0650a;
L_12c06533:;
  /* 12c06533 mov eax, dword ptr [0x12c2cc84] */
  EAX = (r32((uint32_t)(0x12c2cc84)));
  /* 12c06538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c0653b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c0653e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06540 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06543 jae 0x12c06555 */
  if (!C.cf) goto L_12c06555;
  /* 12c06545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12c0654b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0654e jne 0x12c06555 */
  if (!C.zf) goto L_12c06555;
  /* 12c06550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06553 jmp 0x12c06557 */
  goto L_12c06557;
L_12c06555:;
  /* 12c06555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c06557:;
  /* 12c06557 mov esp, ebp */
  ESP = (EBP);
  /* 12c06559 pop ebp */
  EBP = (pop32());
  /* 12c0655a ret  */
  ESPCHK(0x12c06500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x12c06560 (13 bytes, 6 insns) */
void f_12c06560(void) {
  FTRACE(0x12c06560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06560 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06561 mov ebp, esp */
  EBP = (ESP);
  /* 12c06563 call 0x12c02860 */
  push32(0x12c06568u); f_12c02860();
  /* 12c06568 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0656b pop ebp */
  EBP = (pop32());
  /* 12c0656c ret  */
  ESPCHK(0x12c06560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x12c06570 (13 bytes, 6 insns) */
void f_12c06570(void) {
  FTRACE(0x12c06570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06570 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06571 mov ebp, esp */
  EBP = (ESP);
  /* 12c06573 call 0x12c02860 */
  push32(0x12c06578u); f_12c02860();
  /* 12c06578 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0657b pop ebp */
  EBP = (pop32());
  /* 12c0657c ret  */
  ESPCHK(0x12c06570u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x12c06580 (187 bytes, 54 insns) */
void f_12c06580(void) {
  FTRACE(0x12c06580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06580 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06581 mov ebp, esp */
  EBP = (ESP);
  /* 12c06583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06586 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0658d cmp dword ptr [0x12c2e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06594 jne 0x12c065f3 */
  if (!C.zf) goto L_12c065f3;
  /* 12c06596 push 0x12c29240 */
  push32((uint32_t)(0x12c29240u));
  /* 12c0659b call dword ptr [0x12c302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302a0))), 0x12c065a1u);
  /* 12c065a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c065a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c065a8 je 0x12c065c7 */
  if (C.zf) goto L_12c065c7;
  /* 12c065aa push 0x12c29e44 */
  push32((uint32_t)(0x12c29e44u));
  /* 12c065af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c065b2 push eax */
  push32((uint32_t)(EAX));
  /* 12c065b3 call dword ptr [0x12c3029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3029c))), 0x12c065b9u);
  /* 12c065b9 mov dword ptr [0x12c2e608], eax */
  w32((uint32_t)(0x12c2e608), (EAX));
  /* 12c065be cmp dword ptr [0x12c2e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c065c5 jne 0x12c065cb */
  if (!C.zf) goto L_12c065cb;
L_12c065c7:;
  /* 12c065c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c065c9 jmp 0x12c06637 */
  goto L_12c06637;
L_12c065cb:;
  /* 12c065cb push 0x12c29e34 */
  push32((uint32_t)(0x12c29e34u));
  /* 12c065d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c065d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c065d4 call dword ptr [0x12c3029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3029c))), 0x12c065dau);
  /* 12c065da mov dword ptr [0x12c2e60c], eax */
  w32((uint32_t)(0x12c2e60c), (EAX));
  /* 12c065df push 0x12c29e20 */
  push32((uint32_t)(0x12c29e20u));
  /* 12c065e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c065e7 push edx */
  push32((uint32_t)(EDX));
  /* 12c065e8 call dword ptr [0x12c3029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3029c))), 0x12c065eeu);
  /* 12c065ee mov dword ptr [0x12c2e610], eax */
  w32((uint32_t)(0x12c2e610), (EAX));
L_12c065f3:;
  /* 12c065f3 cmp dword ptr [0x12c2e60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c065fa je 0x12c06605 */
  if (C.zf) goto L_12c06605;
  /* 12c065fc call dword ptr [0x12c2e60c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e60c))), 0x12c06602u);
  /* 12c06602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c06605:;
  /* 12c06605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06609 je 0x12c06621 */
  if (C.zf) goto L_12c06621;
  /* 12c0660b cmp dword ptr [0x12c2e610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12c2e610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06612 je 0x12c06621 */
  if (C.zf) goto L_12c06621;
  /* 12c06614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06617 push eax */
  push32((uint32_t)(EAX));
  /* 12c06618 call dword ptr [0x12c2e610] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e610))), 0x12c0661eu);
  /* 12c0661e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c06621:;
  /* 12c06621 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12c06624 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06628 push edx */
  push32((uint32_t)(EDX));
  /* 12c06629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0662c push eax */
  push32((uint32_t)(EAX));
  /* 12c0662d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06630 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06631 call dword ptr [0x12c2e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c2e608))), 0x12c06637u);
L_12c06637:;
  /* 12c06637 mov esp, ebp */
  ESP = (EBP);
  /* 12c06639 pop ebp */
  EBP = (pop32());
  /* 12c0663a ret  */
  ESPCHK(0x12c06580u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12c06640 (254 bytes, 109 insns) */
void f_12c06640(void) {
  FTRACE(0x12c06640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06640 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12c06644 push edi */
  push32((uint32_t)(EDI));
  /* 12c06645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12c06647 je 0x12c066c3 */
  if (C.zf) goto L_12c066c3;
  /* 12c06649 push esi */
  push32((uint32_t)(ESI));
  /* 12c0664a push ebx */
  push32((uint32_t)(EBX));
  /* 12c0664b mov ebx, ecx */
  EBX = (ECX);
  /* 12c0664d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12c06651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c06657 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12c0665b jne 0x12c06664 */
  if (!C.zf) goto L_12c06664;
  /* 12c0665d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c06660 jne 0x12c066d1 */
  if (!C.zf) goto L_12c066d1;
  /* 12c06662 jmp 0x12c06685 */
  goto L_12c06685;
L_12c06664:;
  /* 12c06664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c06666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c06667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c06669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c0666a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c0666b je 0x12c06692 */
  if (C.zf) goto L_12c06692;
  /* 12c0666d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c0666f je 0x12c0669a */
  if (C.zf) goto L_12c0669a;
  /* 12c06671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12c06677 jne 0x12c06664 */
  if (!C.zf) goto L_12c06664;
  /* 12c06679 mov ebx, ecx */
  EBX = (ECX);
  /* 12c0667b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c0667e jne 0x12c066d1 */
  if (!C.zf) goto L_12c066d1;
L_12c06680:;
  /* 12c06680 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c06683 je 0x12c06692 */
  if (C.zf) goto L_12c06692;
L_12c06685:;
  /* 12c06685 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12c06687 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12c06688 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c0668a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c0668b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12c0668d je 0x12c066be */
  if (C.zf) goto L_12c066be;
  /* 12c0668f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c06690 jne 0x12c06685 */
  if (!C.zf) goto L_12c06685;
L_12c06692:;
  /* 12c06692 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c06696 pop ebx */
  EBX = (pop32());
  /* 12c06697 pop esi */
  ESI = (pop32());
  /* 12c06698 pop edi */
  EDI = (pop32());
  /* 12c06699 ret  */
  ESPCHK(0x12c06640u, _esp0);
  ESP += 4; return;
L_12c0669a:;
  /* 12c0669a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c066a0 je 0x12c066b4 */
  if (C.zf) goto L_12c066b4;
L_12c066a2:;
  /* 12c066a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c066a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12c066a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c066a6 je 0x12c06736 */
  if (C.zf) goto L_12c06736;
  /* 12c066ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12c066b2 jne 0x12c066a2 */
  if (!C.zf) goto L_12c066a2;
L_12c066b4:;
  /* 12c066b4 mov ebx, ecx */
  EBX = (ECX);
  /* 12c066b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12c066b9 jne 0x12c06727 */
  if (!C.zf) goto L_12c06727;
L_12c066bb:;
  /* 12c066bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12c066bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12c066be:;
  /* 12c066be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12c066bf jne 0x12c066bb */
  if (!C.zf) goto L_12c066bb;
  /* 12c066c1 pop ebx */
  EBX = (pop32());
  /* 12c066c2 pop esi */
  ESI = (pop32());
L_12c066c3:;
  /* 12c066c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12c066c7 pop edi */
  EDI = (pop32());
  /* 12c066c8 ret  */
  ESPCHK(0x12c06640u, _esp0);
  ESP += 4; return;
L_12c066c9:;
  /* 12c066c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c066cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c066ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c066cf je 0x12c06680 */
  if (C.zf) goto L_12c06680;
L_12c066d1:;
  /* 12c066d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12c066d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12c066d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c066da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c066dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12c066df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12c066e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c066e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12c066e9 je 0x12c066c9 */
  if (C.zf) goto L_12c066c9;
  /* 12c066eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12c066ed je 0x12c0671b */
  if (C.zf) goto L_12c0671b;
  /* 12c066ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12c066f1 je 0x12c06711 */
  if (C.zf) goto L_12c06711;
  /* 12c066f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12c066f9 je 0x12c06707 */
  if (C.zf) goto L_12c06707;
  /* 12c066fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12c06701 jne 0x12c066c9 */
  if (!C.zf) goto L_12c066c9;
  /* 12c06703 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c06705 jmp 0x12c0671f */
  goto L_12c0671f;
L_12c06707:;
  /* 12c06707 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c0670d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c0670f jmp 0x12c0671f */
  goto L_12c0671f;
L_12c06711:;
  /* 12c06711 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12c06717 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12c06719 jmp 0x12c0671f */
  goto L_12c0671f;
L_12c0671b:;
  /* 12c0671b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12c0671d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12c0671f:;
  /* 12c0671f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c06725 je 0x12c06731 */
  if (C.zf) goto L_12c06731;
L_12c06727:;
  /* 12c06727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12c06729:;
  /* 12c06729 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12c0672b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12c0672e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12c0672f jne 0x12c06729 */
  if (!C.zf) goto L_12c06729;
L_12c06731:;
  /* 12c06731 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12c06734 jne 0x12c066bb */
  if (!C.zf) goto L_12c066bb;
L_12c06736:;
  /* 12c06736 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12c0673a pop ebx */
  EBX = (pop32());
  /* 12c0673b pop esi */
  ESI = (pop32());
  /* 12c0673c pop edi */
  EDI = (pop32());
  /* 12c0673d ret  */
  ESPCHK(0x12c06640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x12c06740 (55 bytes, 16 insns) */
void f_12c06740(void) {
  FTRACE(0x12c06740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06740 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06741 mov ebp, esp */
  EBP = (ESP);
  /* 12c06743 mov eax, dword ptr [0x12c2cb84] */
  EAX = (r32((uint32_t)(0x12c2cb84)));
  /* 12c06748 push eax */
  push32((uint32_t)(EAX));
  /* 12c06749 call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c0674fu);
  /* 12c0674f mov ecx, dword ptr [0x12c2cb74] */
  ECX = (r32((uint32_t)(0x12c2cb74)));
  /* 12c06755 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06756 call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c0675cu);
  /* 12c0675c mov edx, dword ptr [0x12c2cb64] */
  EDX = (r32((uint32_t)(0x12c2cb64)));
  /* 12c06762 push edx */
  push32((uint32_t)(EDX));
  /* 12c06763 call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c06769u);
  /* 12c06769 mov eax, dword ptr [0x12c2cb44] */
  EAX = (r32((uint32_t)(0x12c2cb44)));
  /* 12c0676e push eax */
  push32((uint32_t)(EAX));
  /* 12c0676f call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c06775u);
  /* 12c06775 pop ebp */
  EBP = (pop32());
  /* 12c06776 ret  */
  ESPCHK(0x12c06740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12c06780 (159 bytes, 47 insns) */
void f_12c06780(void) {
  FTRACE(0x12c06780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06780 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06781 mov ebp, esp */
  EBP = (ESP);
  /* 12c06783 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12c0678b jmp 0x12c06796 */
  goto L_12c06796;
L_12c0678d:;
  /* 12c0678d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c06796:;
  /* 12c06796 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0679a jge 0x12c067e9 */
  if ((C.sf==C.of)) goto L_12c067e9;
  /* 12c0679c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0679f cmp dword ptr [ecx*4 + 0x12c2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c067a7 je 0x12c067e7 */
  if (C.zf) goto L_12c067e7;
  /* 12c067a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c067ad je 0x12c067e7 */
  if (C.zf) goto L_12c067e7;
  /* 12c067af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c067b3 je 0x12c067e7 */
  if (C.zf) goto L_12c067e7;
  /* 12c067b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c067b9 je 0x12c067e7 */
  if (C.zf) goto L_12c067e7;
  /* 12c067bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c067bf je 0x12c067e7 */
  if (C.zf) goto L_12c067e7;
  /* 12c067c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c067c4 mov eax, dword ptr [edx*4 + 0x12c2cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12c2cb40)));
  /* 12c067cb push eax */
  push32((uint32_t)(EAX));
  /* 12c067cc call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c067d2u);
  /* 12c067d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12c067d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c067d7 mov edx, dword ptr [ecx*4 + 0x12c2cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12c2cb40)));
  /* 12c067de push edx */
  push32((uint32_t)(EDX));
  /* 12c067df call 0x12c038b0 */
  push32(0x12c067e4u); f_12c038b0();
  /* 12c067e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c067e7:;
  /* 12c067e7 jmp 0x12c0678d */
  goto L_12c0678d;
L_12c067e9:;
  /* 12c067e9 mov eax, dword ptr [0x12c2cb64] */
  EAX = (r32((uint32_t)(0x12c2cb64)));
  /* 12c067ee push eax */
  push32((uint32_t)(EAX));
  /* 12c067ef call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c067f5u);
  /* 12c067f5 mov ecx, dword ptr [0x12c2cb74] */
  ECX = (r32((uint32_t)(0x12c2cb74)));
  /* 12c067fb push ecx */
  push32((uint32_t)(ECX));
  /* 12c067fc call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c06802u);
  /* 12c06802 mov edx, dword ptr [0x12c2cb84] */
  EDX = (r32((uint32_t)(0x12c2cb84)));
  /* 12c06808 push edx */
  push32((uint32_t)(EDX));
  /* 12c06809 call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c0680fu);
  /* 12c0680f mov eax, dword ptr [0x12c2cb44] */
  EAX = (r32((uint32_t)(0x12c2cb44)));
  /* 12c06814 push eax */
  push32((uint32_t)(EAX));
  /* 12c06815 call dword ptr [0x12c302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302e4))), 0x12c0681bu);
  /* 12c0681b mov esp, ebp */
  ESP = (EBP);
  /* 12c0681d pop ebp */
  EBP = (pop32());
  /* 12c0681e ret  */
  ESPCHK(0x12c06780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x12c06820 (151 bytes, 46 insns) */
void f_12c06820(void) {
  FTRACE(0x12c06820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06820 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06821 mov ebp, esp */
  EBP = (ESP);
  /* 12c06823 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06827 cmp dword ptr [eax*4 + 0x12c2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12c2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0682f jne 0x12c068a2 */
  if (!C.zf) goto L_12c068a2;
  /* 12c06831 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12c06836 push 0x12c29e50 */
  push32((uint32_t)(0x12c29e50u));
  /* 12c0683b push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0683d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12c0683f call 0x12c02e20 */
  push32(0x12c06844u); f_12c02e20();
  /* 12c06844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c0684a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0684e jne 0x12c0685a */
  if (!C.zf) goto L_12c0685a;
  /* 12c06850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c06852 call 0x12c01d90 */
  push32(0x12c06857u); f_12c01d90();
  /* 12c06857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c0685a:;
  /* 12c0685a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0685c call 0x12c06820 */
  push32(0x12c06861u); f_12c06820();
  /* 12c06861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06867 cmp dword ptr [ecx*4 + 0x12c2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12c2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c0686f jne 0x12c0688a */
  if (!C.zf) goto L_12c0688a;
  /* 12c06871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06874 push edx */
  push32((uint32_t)(EDX));
  /* 12c06875 call dword ptr [0x12c3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3031c))), 0x12c0687bu);
  /* 12c0687b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c0687e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06881 mov dword ptr [eax*4 + 0x12c2cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12c2cb40), (ECX));
  /* 12c06888 jmp 0x12c06898 */
  goto L_12c06898;
L_12c0688a:;
  /* 12c0688a push 2 */
  push32((uint32_t)(0x2u));
  /* 12c0688c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c0688f push edx */
  push32((uint32_t)(EDX));
  /* 12c06890 call 0x12c038b0 */
  push32(0x12c06895u); f_12c038b0();
  /* 12c06895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c06898:;
  /* 12c06898 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12c0689a call 0x12c068c0 */
  push32(0x12c0689fu); f_12c068c0();
  /* 12c0689f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c068a2:;
  /* 12c068a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c068a5 mov ecx, dword ptr [eax*4 + 0x12c2cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2cb40)));
  /* 12c068ac push ecx */
  push32((uint32_t)(ECX));
  /* 12c068ad call dword ptr [0x12c30320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30320))), 0x12c068b3u);
  /* 12c068b3 mov esp, ebp */
  ESP = (EBP);
  /* 12c068b5 pop ebp */
  EBP = (pop32());
  /* 12c068b6 ret  */
  ESPCHK(0x12c06820u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x12c068c0 (22 bytes, 8 insns) */
void f_12c068c0(void) {
  FTRACE(0x12c068c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c068c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c068c1 mov ebp, esp */
  EBP = (ESP);
  /* 12c068c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c068c6 mov ecx, dword ptr [eax*4 + 0x12c2cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12c2cb40)));
  /* 12c068cd push ecx */
  push32((uint32_t)(ECX));
  /* 12c068ce call dword ptr [0x12c30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30324))), 0x12c068d4u);
  /* 12c068d4 pop ebp */
  EBP = (pop32());
  /* 12c068d5 ret  */
  ESPCHK(0x12c068c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x12c068e0 (26 bytes, 10 insns) */
void f_12c068e0(void) {
  FTRACE(0x12c068e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c068e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c068e1 mov ebp, esp */
  EBP = (ESP);
  /* 12c068e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c068e6 push eax */
  push32((uint32_t)(EAX));
  /* 12c068e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12c068e9 call dword ptr [0x12c30328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c30328))), 0x12c068efu);
  /* 12c068ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12c068f4 call dword ptr [0x12c302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c302ac))), 0x12c068fau);
  /* 12c068fa pop ebp */
  EBP = (pop32());
  /* 12c068fb ret  */
  ESPCHK(0x12c068e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12c06900 (446 bytes, 130 insns) */
void f_12c06900(void) {
  FTRACE(0x12c06900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06900 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06901 mov ebp, esp */
  EBP = (ESP);
  /* 12c06903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12c06906 call 0x12c02860 */
  push32(0x12c0690bu); f_12c02860();
  /* 12c0690b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12c0690e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06911 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12c06914 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06918 push edx */
  push32((uint32_t)(EDX));
  /* 12c06919 call 0x12c06ac0 */
  push32(0x12c0691eu); f_12c06ac0();
  /* 12c0691e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12c06924 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06928 je 0x12c06933 */
  if (C.zf) goto L_12c06933;
  /* 12c0692a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0692d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06931 jne 0x12c06942 */
  if (!C.zf) goto L_12c06942;
L_12c06933:;
  /* 12c06933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06936 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06937 call dword ptr [0x12c3032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12c3032c))), 0x12c0693du);
  /* 12c0693d jmp 0x12c06aba */
  goto L_12c06aba;
L_12c06942:;
  /* 12c06942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06945 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06949 jne 0x12c0695f */
  if (!C.zf) goto L_12c0695f;
  /* 12c0694b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0694e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12c06955 mov eax, 1 */
  EAX = (0x1u);
  /* 12c0695a jmp 0x12c06aba */
  goto L_12c06aba;
L_12c0695f:;
  /* 12c0695f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06962 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06966 jne 0x12c06970 */
  if (!C.zf) goto L_12c06970;
  /* 12c06968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12c0696b jmp 0x12c06aba */
  goto L_12c06aba;
L_12c06970:;
  /* 12c06970 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06973 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12c06976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c0697c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12c0697f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12c06982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06988 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12c0698b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c0698e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06992 jne 0x12c06a97 */
  if (!C.zf) goto L_12c06a97;
  /* 12c06998 mov eax, dword ptr [0x12c2cc78] */
  EAX = (r32((uint32_t)(0x12c2cc78)));
  /* 12c0699d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12c069a0 jmp 0x12c069ab */
  goto L_12c069ab;
L_12c069a2:;
  /* 12c069a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c069a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c069a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12c069ab:;
  /* 12c069ab mov edx, dword ptr [0x12c2cc78] */
  EDX = (r32((uint32_t)(0x12c2cc78)));
  /* 12c069b1 add edx, dword ptr [0x12c2cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12c2cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c069b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c069ba jge 0x12c069d2 */
  if ((C.sf==C.of)) goto L_12c069d2;
  /* 12c069bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12c069bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c069c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c069c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12c069c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12c069d0 jmp 0x12c069a2 */
  goto L_12c069a2;
L_12c069d2:;
  /* 12c069d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c069d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12c069d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12c069db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c069de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c069e4 jne 0x12c069f5 */
  if (!C.zf) goto L_12c069f5;
  /* 12c069e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c069e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12c069f0 jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c069f5:;
  /* 12c069f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c069f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c069fe jne 0x12c06a0c */
  if (!C.zf) goto L_12c06a0c;
  /* 12c06a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12c06a0a jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c06a0c:;
  /* 12c06a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06a15 jne 0x12c06a23 */
  if (!C.zf) goto L_12c06a23;
  /* 12c06a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12c06a21 jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c06a23:;
  /* 12c06a23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06a2c jne 0x12c06a3a */
  if (!C.zf) goto L_12c06a3a;
  /* 12c06a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12c06a38 jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c06a3a:;
  /* 12c06a3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06a43 jne 0x12c06a51 */
  if (!C.zf) goto L_12c06a51;
  /* 12c06a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12c06a4f jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c06a51:;
  /* 12c06a51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06a5a jne 0x12c06a68 */
  if (!C.zf) goto L_12c06a68;
  /* 12c06a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12c06a66 jmp 0x12c06a7d */
  goto L_12c06a7d;
L_12c06a68:;
  /* 12c06a68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06a71 jne 0x12c06a7d */
  if (!C.zf) goto L_12c06a7d;
  /* 12c06a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12c06a7d:;
  /* 12c06a7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12c06a83 push edx */
  push32((uint32_t)(EDX));
  /* 12c06a84 push 8 */
  push32((uint32_t)(0x8u));
  /* 12c06a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c06a89u);
  /* 12c06a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12c06a92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12c06a95 jmp 0x12c06aae */
  goto L_12c06aae;
L_12c06a97:;
  /* 12c06a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06a9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12c06aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12c06aa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12c06aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06aa8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12c06aabu);
  /* 12c06aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12c06aae:;
  /* 12c06aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12c06ab1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12c06ab4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12c06ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12c06aba:;
  /* 12c06aba mov esp, ebp */
  ESP = (EBP);
  /* 12c06abc pop ebp */
  EBP = (pop32());
  /* 12c06abd ret  */
  ESPCHK(0x12c06900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x12c06ac0 (89 bytes, 35 insns) */
void f_12c06ac0(void) {
  FTRACE(0x12c06ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12c06ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12c06aca:;
  /* 12c06aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12c06acf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06ad2 je 0x12c06af2 */
  if (C.zf) goto L_12c06af2;
  /* 12c06ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06ad7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06add mov ecx, dword ptr [0x12c2cc84] */
  ECX = (r32((uint32_t)(0x12c2cc84)));
  /* 12c06ae3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c06ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06ae9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06aeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06aee jae 0x12c06af2 */
  if (!C.cf) goto L_12c06af2;
  /* 12c06af0 jmp 0x12c06aca */
  goto L_12c06aca;
L_12c06af2:;
  /* 12c06af2 mov eax, dword ptr [0x12c2cc84] */
  EAX = (r32((uint32_t)(0x12c2cc84)));
  /* 12c06af7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12c06afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12c06afd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06aff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06b02 jae 0x12c06b0e */
  if (!C.cf) goto L_12c06b0e;
  /* 12c06b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12c06b09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12c06b0c je 0x12c06b12 */
  if (C.zf) goto L_12c06b12;
L_12c06b0e:;
  /* 12c06b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12c06b10 jmp 0x12c06b15 */
  goto L_12c06b15;
L_12c06b12:;
  /* 12c06b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12c06b15:;
  /* 12c06b15 mov esp, ebp */
  ESP = (EBP);
  /* 12c06b17 pop ebp */
  EBP = (pop32());
  /* 12c06b18 ret  */
  ESPCHK(0x12c06ac0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12c06b20 (48 bytes, 17 insns) */
void f_12c06b20(void) {
  FTRACE(0x12c06b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12c06b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12c06b21 mov ebp, esp */
  EBP = (ESP);
  /* 12c06b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12c06b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06b26 call 0x12c06820 */
  push32(0x12c06b2bu); f_12c06820();
  /* 12c06b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06b2e mov eax, dword ptr [0x12c2e67c] */
  EAX = (r32((uint32_t)(0x12c2e67c)));
  /* 12c06b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12c06b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12c06b39 mov dword ptr [0x12c2e67c], ecx */
  w32((uint32_t)(0x12c2e67c), (ECX));
  /* 12c06b3f push 9 */
  push32((uint32_t)(0x9u));
  /* 12c06b41 call 0x12c068c0 */
  push32(0x12c06b46u); f_12c068c0();
  /* 12c06b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12c06b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12c06b4c mov esp, ebp */
  ESP = (EBP);
  /* 12c06b4e pop ebp */
  EBP = (pop32());
  /* 12c06b4f ret  */
  ESPCHK(0x12c06b20u, _esp0);
  ESP += 4; return;
}

