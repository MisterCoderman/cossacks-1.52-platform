#include "recomp.h"

/* thunk_FUN_10001580 @ 0x12a01005 (5 bytes, 1 insns) */
void f_12a01005(void) {
  FTRACE(0x12a01005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01005 jmp 0x12a01580 */
  f_12a01580(); return;
}

/* OnInit @ 0x12a0100a (5 bytes, 1 insns) */
void f_12a0100a(void) {
  FTRACE(0x12a0100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0100a jmp 0x12a011b0 */
  f_12a011b0(); return;
}

/* thunk_FUN_10001130 @ 0x12a0100f (5 bytes, 1 insns) */
void f_12a0100f(void) {
  FTRACE(0x12a0100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0100f jmp 0x12a01130 */
  f_12a01130(); return;
}

/* thunk_FUN_10001050 @ 0x12a01014 (5 bytes, 1 insns) */
void f_12a01014(void) {
  FTRACE(0x12a01014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01014 jmp 0x12a01050 */
  f_12a01050(); return;
}

/* thunk_FUN_100010b0 @ 0x12a01019 (5 bytes, 1 insns) */
void f_12a01019(void) {
  FTRACE(0x12a01019u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01019 jmp 0x12a010b0 */
  f_12a010b0(); return;
}

/* ProcessScenary @ 0x12a0101e (5 bytes, 1 insns) */
void f_12a0101e(void) {
  FTRACE(0x12a0101eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0101e jmp 0x12a012e0 */
  f_12a012e0(); return;
}

/* FUN_10001050 @ 0x12a01050 (67 bytes, 26 insns) */
void f_12a01050(void) {
  FTRACE(0x12a01050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01050 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01051 mov ebp, esp */
  EBP = (ESP);
  /* 12a01053 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a01056 push ebx */
  push32((uint32_t)(EBX));
  /* 12a01057 push esi */
  push32((uint32_t)(ESI));
  /* 12a01058 push edi */
  push32((uint32_t)(EDI));
  /* 12a01059 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 12a0105c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12a01061 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a01066 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0106b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0106e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01072 je 0x12a01076 */
  if (C.zf) goto L_12a01076;
  /* 12a01074 jmp 0x12a0107b */
  goto L_12a0107b;
L_12a01076:;
  /* 12a01076 call 0x12a0100a */
  push32(0x12a0107bu); f_12a0100a();
L_12a0107b:;
  /* 12a0107b mov eax, 1 */
  EAX = (0x1u);
  /* 12a01080 pop edi */
  EDI = (pop32());
  /* 12a01081 pop esi */
  ESI = (pop32());
  /* 12a01082 pop ebx */
  EBX = (pop32());
  /* 12a01083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01088 call 0x12a01610 */
  push32(0x12a0108du); f_12a01610();
  /* 12a0108d mov esp, ebp */
  ESP = (EBP);
  /* 12a0108f pop ebp */
  EBP = (pop32());
  /* 12a01090 ret 0xc */
  ESPCHK(0x12a01050u, _esp0);
  ESP += 16; return;
}

/* FUN_100010b0 @ 0x12a010b0 (92 bytes, 34 insns) */
void f_12a010b0(void) {
  FTRACE(0x12a010b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a010b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a010b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a010b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a010b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a010b7 push esi */
  push32((uint32_t)(ESI));
  /* 12a010b8 push edi */
  push32((uint32_t)(EDI));
  /* 12a010b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12a010bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12a010c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a010c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a010c8 mov esi, esp */
  ESI = (ESP);
  /* 12a010ca call dword ptr [0x12a303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303bc))), 0x12a010d0u);
  /* 12a010d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a010d2 call 0x12a01610 */
  push32(0x12a010d7u); f_12a01610();
  /* 12a010d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a010d9 jne 0x12a010ec */
  if (!C.zf) goto L_12a010ec;
  /* 12a010db mov esi, esp */
  ESI = (ESP);
  /* 12a010dd call dword ptr [0x12a303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303c0))), 0x12a010e3u);
  /* 12a010e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a010e5 call 0x12a01610 */
  push32(0x12a010eau); f_12a01610();
  /* 12a010ea jmp 0x12a010fb */
  goto L_12a010fb;
L_12a010ec:;
  /* 12a010ec mov esi, esp */
  ESI = (ESP);
  /* 12a010ee call dword ptr [0x12a303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303c4))), 0x12a010f4u);
  /* 12a010f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a010f6 call 0x12a01610 */
  push32(0x12a010fbu); f_12a01610();
L_12a010fb:;
  /* 12a010fb pop edi */
  EDI = (pop32());
  /* 12a010fc pop esi */
  ESI = (pop32());
  /* 12a010fd pop ebx */
  EBX = (pop32());
  /* 12a010fe add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01101 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01103 call 0x12a01610 */
  push32(0x12a01108u); f_12a01610();
  /* 12a01108 mov esp, ebp */
  ESP = (EBP);
  /* 12a0110a pop ebp */
  EBP = (pop32());
  /* 12a0110b ret  */
  ESPCHK(0x12a010b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001130 @ 0x12a01130 (93 bytes, 34 insns) */
void f_12a01130(void) {
  FTRACE(0x12a01130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01130 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01131 mov ebp, esp */
  EBP = (ESP);
  /* 12a01133 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a01136 push ebx */
  push32((uint32_t)(EBX));
  /* 12a01137 push esi */
  push32((uint32_t)(ESI));
  /* 12a01138 push edi */
  push32((uint32_t)(EDI));
  /* 12a01139 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12a0113c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12a01141 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a01146 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01148 mov esi, esp */
  ESI = (ESP);
  /* 12a0114a call dword ptr [0x12a303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303bc))), 0x12a01150u);
  /* 12a01150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01152 call 0x12a01610 */
  push32(0x12a01157u); f_12a01610();
  /* 12a01157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0115a jne 0x12a0116d */
  if (!C.zf) goto L_12a0116d;
  /* 12a0115c mov esi, esp */
  ESI = (ESP);
  /* 12a0115e call dword ptr [0x12a303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303c0))), 0x12a01164u);
  /* 12a01164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01166 call 0x12a01610 */
  push32(0x12a0116bu); f_12a01610();
  /* 12a0116b jmp 0x12a0117c */
  goto L_12a0117c;
L_12a0116d:;
  /* 12a0116d mov esi, esp */
  ESI = (ESP);
  /* 12a0116f call dword ptr [0x12a303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303c4))), 0x12a01175u);
  /* 12a01175 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01177 call 0x12a01610 */
  push32(0x12a0117cu); f_12a01610();
L_12a0117c:;
  /* 12a0117c pop edi */
  EDI = (pop32());
  /* 12a0117d pop esi */
  ESI = (pop32());
  /* 12a0117e pop ebx */
  EBX = (pop32());
  /* 12a0117f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01182 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01184 call 0x12a01610 */
  push32(0x12a01189u); f_12a01610();
  /* 12a01189 mov esp, ebp */
  ESP = (EBP);
  /* 12a0118b pop ebp */
  EBP = (pop32());
  /* 12a0118c ret  */
  ESPCHK(0x12a01130u, _esp0);
  ESP += 4; return;
}

/* FUN_100011b0 @ 0x12a011b0 (233 bytes, 66 insns) */
void f_12a011b0(void) {
  FTRACE(0x12a011b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a011b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a011b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a011b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a011b6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a011b7 push esi */
  push32((uint32_t)(ESI));
  /* 12a011b8 push edi */
  push32((uint32_t)(EDI));
  /* 12a011b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12a011bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12a011c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a011c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a011c8 mov esi, esp */
  ESI = (ESP);
  /* 12a011ca push 0x12a29024 */
  push32((uint32_t)(0x12a29024u));
  /* 12a011cf push 0x12a2e410 */
  push32((uint32_t)(0x12a2e410u));
  /* 12a011d4 call dword ptr [0x12a303b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b4))), 0x12a011dau);
  /* 12a011da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a011dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a011df call 0x12a01610 */
  push32(0x12a011e4u); f_12a01610();
  /* 12a011e4 mov esi, esp */
  ESI = (ESP);
  /* 12a011e6 push 0x12a2901c */
  push32((uint32_t)(0x12a2901cu));
  /* 12a011eb push 0x12a2e418 */
  push32((uint32_t)(0x12a2e418u));
  /* 12a011f0 call dword ptr [0x12a303b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b4))), 0x12a011f6u);
  /* 12a011f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a011f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a011fb call 0x12a01610 */
  push32(0x12a01200u); f_12a01610();
  /* 12a01200 mov esi, esp */
  ESI = (ESP);
  /* 12a01202 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a01204 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01206 call dword ptr [0x12a303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b8))), 0x12a0120cu);
  /* 12a0120c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0120f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01211 call 0x12a01610 */
  push32(0x12a01216u); f_12a01610();
  /* 12a01216 mov esi, esp */
  ESI = (ESP);
  /* 12a01218 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0121a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0121c call dword ptr [0x12a303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b8))), 0x12a01222u);
  /* 12a01222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01225 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01227 call 0x12a01610 */
  push32(0x12a0122cu); f_12a01610();
  /* 12a0122c mov esi, esp */
  ESI = (ESP);
  /* 12a0122e push 7 */
  push32((uint32_t)(0x7u));
  /* 12a01230 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a01232 call dword ptr [0x12a303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b8))), 0x12a01238u);
  /* 12a01238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0123b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0123d call 0x12a01610 */
  push32(0x12a01242u); f_12a01610();
  /* 12a01242 mov dword ptr [0x12a2e3e0], 0 */
  w32((uint32_t)(0x12a2e3e0), (0x0u));
  /* 12a0124c jmp 0x12a0125b */
  goto L_12a0125b;
L_12a0124e:;
  /* 12a0124e mov eax, dword ptr [0x12a2e3e0] */
  EAX = (r32((uint32_t)(0x12a2e3e0)));
  /* 12a01253 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01256 mov dword ptr [0x12a2e3e0], eax */
  w32((uint32_t)(0x12a2e3e0), (EAX));
L_12a0125b:;
  /* 12a0125b cmp dword ptr [0x12a2e3e0], 5 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e3e0))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01262 jge 0x12a01288 */
  if ((C.sf==C.of)) goto L_12a01288;
  /* 12a01264 mov ecx, dword ptr [0x12a2e3e0] */
  ECX = (r32((uint32_t)(0x12a2e3e0)));
  /* 12a0126a mov dword ptr [ecx*4 + 0x12a2e3e4], 0 */
  w32((uint32_t)(ECX*4 + 0x12a2e3e4), (0x0u));
  /* 12a01275 mov edx, dword ptr [0x12a2e3e0] */
  EDX = (r32((uint32_t)(0x12a2e3e0)));
  /* 12a0127b mov dword ptr [edx*4 + 0x12a2e3f8], 0 */
  w32((uint32_t)(EDX*4 + 0x12a2e3f8), (0x0u));
  /* 12a01286 jmp 0x12a0124e */
  goto L_12a0124e;
L_12a01288:;
  /* 12a01288 pop edi */
  EDI = (pop32());
  /* 12a01289 pop esi */
  ESI = (pop32());
  /* 12a0128a pop ebx */
  EBX = (pop32());
  /* 12a0128b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0128e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01290 call 0x12a01610 */
  push32(0x12a01295u); f_12a01610();
  /* 12a01295 mov esp, ebp */
  ESP = (EBP);
  /* 12a01297 pop ebp */
  EBP = (pop32());
  /* 12a01298 ret  */
  ESPCHK(0x12a011b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100012e0 @ 0x12a012e0 (527 bytes, 154 insns) */
void f_12a012e0(void) {
  FTRACE(0x12a012e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a012e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a012e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a012e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a012e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a012e7 push esi */
  push32((uint32_t)(ESI));
  /* 12a012e8 push edi */
  push32((uint32_t)(EDI));
  /* 12a012e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12a012ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12a012f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a012f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a012f8 mov esi, esp */
  ESI = (ESP);
  /* 12a012fa push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12a012fc call dword ptr [0x12a303a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a4))), 0x12a01302u);
  /* 12a01302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01305 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01307 call 0x12a01610 */
  push32(0x12a0130cu); f_12a01610();
  /* 12a0130c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01313 je 0x12a0135b */
  if (C.zf) goto L_12a0135b;
  /* 12a01315 push 0x12a2e410 */
  push32((uint32_t)(0x12a2e410u));
  /* 12a0131a call 0x12a01005 */
  push32(0x12a0131fu); f_12a01005();
  /* 12a0131f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01322 cmp eax, 0x172 */
  { uint32_t _a=(EAX),_b=(0x172u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01327 jg 0x12a0135b */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0135b;
  /* 12a01329 mov esi, esp */
  ESI = (ESP);
  /* 12a0132b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0132d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12a0132f call dword ptr [0x12a303a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a8))), 0x12a01335u);
  /* 12a01335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0133a call 0x12a01610 */
  push32(0x12a0133fu); f_12a01610();
  /* 12a0133f mov esi, esp */
  ESI = (ESP);
  /* 12a01341 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12a01346 push 0x12a29044 */
  push32((uint32_t)(0x12a29044u));
  /* 12a0134b call dword ptr [0x12a303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303ac))), 0x12a01351u);
  /* 12a01351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01356 call 0x12a01610 */
  push32(0x12a0135bu); f_12a01610();
L_12a0135b:;
  /* 12a0135b mov esi, esp */
  ESI = (ESP);
  /* 12a0135d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12a0135f call dword ptr [0x12a303a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a4))), 0x12a01365u);
  /* 12a01365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0136a call 0x12a01610 */
  push32(0x12a0136fu); f_12a01610();
  /* 12a0136f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01374 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01376 je 0x12a013be */
  if (C.zf) goto L_12a013be;
  /* 12a01378 push 0x12a2e418 */
  push32((uint32_t)(0x12a2e418u));
  /* 12a0137d call 0x12a01005 */
  push32(0x12a01382u); f_12a01005();
  /* 12a01382 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01385 cmp eax, 0x226 */
  { uint32_t _a=(EAX),_b=(0x226u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0138a jg 0x12a013be */
  if ((!C.zf&&C.sf==C.of)) goto L_12a013be;
  /* 12a0138c mov esi, esp */
  ESI = (ESP);
  /* 12a0138e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01390 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12a01392 call dword ptr [0x12a303a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a8))), 0x12a01398u);
  /* 12a01398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0139b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0139d call 0x12a01610 */
  push32(0x12a013a2u); f_12a01610();
  /* 12a013a2 mov esi, esp */
  ESI = (ESP);
  /* 12a013a4 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12a013a9 push 0x12a2903c */
  push32((uint32_t)(0x12a2903cu));
  /* 12a013ae call dword ptr [0x12a303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303ac))), 0x12a013b4u);
  /* 12a013b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a013b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a013b9 call 0x12a01610 */
  push32(0x12a013beu); f_12a01610();
L_12a013be:;
  /* 12a013be mov esi, esp */
  ESI = (ESP);
  /* 12a013c0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a013c2 call dword ptr [0x12a303a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a4))), 0x12a013c8u);
  /* 12a013c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a013cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a013cd call 0x12a01610 */
  push32(0x12a013d2u); f_12a01610();
  /* 12a013d2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a013d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a013d9 je 0x12a01423 */
  if (C.zf) goto L_12a01423;
  /* 12a013db mov esi, esp */
  ESI = (ESP);
  /* 12a013dd call dword ptr [0x12a303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b0))), 0x12a013e3u);
  /* 12a013e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a013e5 call 0x12a01610 */
  push32(0x12a013eau); f_12a01610();
  /* 12a013ea cmp eax, 0x9470 */
  { uint32_t _a=(EAX),_b=(0x9470u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a013ef jle 0x12a01423 */
  if ((C.zf||C.sf!=C.of)) goto L_12a01423;
  /* 12a013f1 mov esi, esp */
  ESI = (ESP);
  /* 12a013f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a013f5 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a013f7 call dword ptr [0x12a303a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a8))), 0x12a013fdu);
  /* 12a013fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01402 call 0x12a01610 */
  push32(0x12a01407u); f_12a01610();
  /* 12a01407 mov esi, esp */
  ESI = (ESP);
  /* 12a01409 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12a0140e push 0x12a29034 */
  push32((uint32_t)(0x12a29034u));
  /* 12a01413 call dword ptr [0x12a303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303ac))), 0x12a01419u);
  /* 12a01419 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0141c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0141e call 0x12a01610 */
  push32(0x12a01423u); f_12a01610();
L_12a01423:;
  /* 12a01423 mov esi, esp */
  ESI = (ESP);
  /* 12a01425 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12a01427 call dword ptr [0x12a303a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a4))), 0x12a0142du);
  /* 12a0142d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01430 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01432 call 0x12a01610 */
  push32(0x12a01437u); f_12a01610();
  /* 12a01437 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0143c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0143e je 0x12a01491 */
  if (C.zf) goto L_12a01491;
  /* 12a01440 mov esi, esp */
  ESI = (ESP);
  /* 12a01442 call dword ptr [0x12a303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b0))), 0x12a01448u);
  /* 12a01448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0144a call 0x12a01610 */
  push32(0x12a0144fu); f_12a01610();
  /* 12a0144f cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01454 jle 0x12a01491 */
  if ((C.zf||C.sf!=C.of)) goto L_12a01491;
  /* 12a01456 cmp dword ptr [0x12a303bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a303bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0145d jne 0x12a01491 */
  if (!C.zf) goto L_12a01491;
  /* 12a0145f mov esi, esp */
  ESI = (ESP);
  /* 12a01461 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01463 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12a01465 call dword ptr [0x12a303a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a8))), 0x12a0146bu);
  /* 12a0146b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0146e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01470 call 0x12a01610 */
  push32(0x12a01475u); f_12a01610();
  /* 12a01475 mov esi, esp */
  ESI = (ESP);
  /* 12a01477 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 12a0147c push 0x12a2902c */
  push32((uint32_t)(0x12a2902cu));
  /* 12a01481 call dword ptr [0x12a303ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303ac))), 0x12a01487u);
  /* 12a01487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0148a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0148c call 0x12a01610 */
  push32(0x12a01491u); f_12a01610();
L_12a01491:;
  /* 12a01491 mov esi, esp */
  ESI = (ESP);
  /* 12a01493 call dword ptr [0x12a303b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303b0))), 0x12a01499u);
  /* 12a01499 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0149b call 0x12a01610 */
  push32(0x12a014a0u); f_12a01610();
  /* 12a014a0 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a014a5 jle 0x12a014ac */
  if ((C.zf||C.sf!=C.of)) goto L_12a014ac;
  /* 12a014a7 call 0x12a0100f */
  push32(0x12a014acu); f_12a0100f();
L_12a014ac:;
  /* 12a014ac push 0x12a2e410 */
  push32((uint32_t)(0x12a2e410u));
  /* 12a014b1 call 0x12a01005 */
  push32(0x12a014b6u); f_12a01005();
  /* 12a014b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a014b9 cmp eax, 0xc8 */
  { uint32_t _a=(EAX),_b=(0xc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a014be jg 0x12a014c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a014c5;
  /* 12a014c0 call 0x12a0100f */
  push32(0x12a014c5u); f_12a0100f();
L_12a014c5:;
  /* 12a014c5 push 0x12a2e418 */
  push32((uint32_t)(0x12a2e418u));
  /* 12a014ca call 0x12a01005 */
  push32(0x12a014cfu); f_12a01005();
  /* 12a014cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a014d2 cmp eax, 0x172 */
  { uint32_t _a=(EAX),_b=(0x172u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a014d7 jg 0x12a014de */
  if ((!C.zf&&C.sf==C.of)) goto L_12a014de;
  /* 12a014d9 call 0x12a01019 */
  push32(0x12a014deu); f_12a01019();
L_12a014de:;
  /* 12a014de pop edi */
  EDI = (pop32());
  /* 12a014df pop esi */
  ESI = (pop32());
  /* 12a014e0 pop ebx */
  EBX = (pop32());
  /* 12a014e1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a014e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a014e6 call 0x12a01610 */
  push32(0x12a014ebu); f_12a01610();
  /* 12a014eb mov esp, ebp */
  ESP = (EBP);
  /* 12a014ed pop ebp */
  EBP = (pop32());
  /* 12a014ee ret  */
  ESPCHK(0x12a012e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001580 @ 0x12a01580 (63 bytes, 26 insns) */
void f_12a01580(void) {
  FTRACE(0x12a01580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01580 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01581 mov ebp, esp */
  EBP = (ESP);
  /* 12a01583 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a01586 push ebx */
  push32((uint32_t)(EBX));
  /* 12a01587 push esi */
  push32((uint32_t)(ESI));
  /* 12a01588 push edi */
  push32((uint32_t)(EDI));
  /* 12a01589 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12a0158c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12a01591 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12a01596 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01598 mov esi, esp */
  ESI = (ESP);
  /* 12a0159a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0159d push eax */
  push32((uint32_t)(EAX));
  /* 12a0159e call dword ptr [0x12a303a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a303a0))), 0x12a015a4u);
  /* 12a015a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a015a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a015a9 call 0x12a01610 */
  push32(0x12a015aeu); f_12a01610();
  /* 12a015ae pop edi */
  EDI = (pop32());
  /* 12a015af pop esi */
  ESI = (pop32());
  /* 12a015b0 pop ebx */
  EBX = (pop32());
  /* 12a015b1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a015b4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a015b6 call 0x12a01610 */
  push32(0x12a015bbu); f_12a01610();
  /* 12a015bb mov esp, ebp */
  ESP = (EBP);
  /* 12a015bd pop ebp */
  EBP = (pop32());
  /* 12a015be ret  */
  ESPCHK(0x12a01580u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12a01610 (56 bytes, 28 insns) */
void f_12a01610(void) {
  FTRACE(0x12a01610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01610 jne 0x12a01613 */
  if (!C.zf) goto L_12a01613;
  /* 12a01612 ret  */
  ESPCHK(0x12a01610u, _esp0);
  ESP += 4; return;
L_12a01613:;
  /* 12a01613 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01614 mov ebp, esp */
  EBP = (ESP);
  /* 12a01616 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a01619 push eax */
  push32((uint32_t)(EAX));
  /* 12a0161a push edx */
  push32((uint32_t)(EDX));
  /* 12a0161b push ebx */
  push32((uint32_t)(EBX));
  /* 12a0161c push esi */
  push32((uint32_t)(ESI));
  /* 12a0161d push edi */
  push32((uint32_t)(EDI));
  /* 12a0161e push 0x12a29060 */
  push32((uint32_t)(0x12a29060u));
  /* 12a01623 push 0x12a2905c */
  push32((uint32_t)(0x12a2905cu));
  /* 12a01628 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12a0162a push 0x12a2904c */
  push32((uint32_t)(0x12a2904cu));
  /* 12a0162f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a01631 call 0x12a019e0 */
  push32(0x12a01636u); f_12a019e0();
  /* 12a01636 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01639 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0163c jne 0x12a0163f */
  if (!C.zf) goto L_12a0163f;
  /* 12a0163e int3  */
  x86_unimpl("int3 @ 0x12a0163e");
L_12a0163f:;
  /* 12a0163f pop edi */
  EDI = (pop32());
  /* 12a01640 pop esi */
  ESI = (pop32());
  /* 12a01641 pop ebx */
  EBX = (pop32());
  /* 12a01642 pop edx */
  EDX = (pop32());
  /* 12a01643 pop eax */
  EAX = (pop32());
  /* 12a01644 mov esp, ebp */
  ESP = (EBP);
  /* 12a01646 pop ebp */
  EBP = (pop32());
  /* 12a01647 ret  */
  ESPCHK(0x12a01610u, _esp0);
  ESP += 4; return;
}

/* FUN_10001650 @ 0x12a01650 (313 bytes, 78 insns) */
void f_12a01650(void) {
  FTRACE(0x12a01650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01650 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01651 mov ebp, esp */
  EBP = (ESP);
  /* 12a01653 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01657 jne 0x12a01717 */
  if (!C.zf) goto L_12a01717;
  /* 12a0165d call dword ptr [0x12a30248] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30248))), 0x12a01663u);
  /* 12a01663 mov dword ptr [0x12a2e488], eax */
  w32((uint32_t)(0x12a2e488), (EAX));
  /* 12a01668 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0166a call 0x12a05110 */
  push32(0x12a0166fu); f_12a05110();
  /* 12a0166f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01672 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01674 jne 0x12a0167d */
  if (!C.zf) goto L_12a0167d;
  /* 12a01676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a01678 jmp 0x12a01785 */
  goto L_12a01785;
L_12a0167d:;
  /* 12a0167d mov eax, dword ptr [0x12a2e488] */
  EAX = (r32((uint32_t)(0x12a2e488)));
  /* 12a01682 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12a01685 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0168a mov dword ptr [0x12a2e494], eax */
  w32((uint32_t)(0x12a2e494), (EAX));
  /* 12a0168f mov ecx, dword ptr [0x12a2e488] */
  ECX = (r32((uint32_t)(0x12a2e488)));
  /* 12a01695 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0169b mov dword ptr [0x12a2e490], ecx */
  w32((uint32_t)(0x12a2e490), (ECX));
  /* 12a016a1 mov edx, dword ptr [0x12a2e490] */
  EDX = (r32((uint32_t)(0x12a2e490)));
  /* 12a016a7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12a016aa add edx, dword ptr [0x12a2e494] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2e494))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a016b0 mov dword ptr [0x12a2e48c], edx */
  w32((uint32_t)(0x12a2e48c), (EDX));
  /* 12a016b6 mov eax, dword ptr [0x12a2e488] */
  EAX = (r32((uint32_t)(0x12a2e488)));
  /* 12a016bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a016be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a016c3 mov dword ptr [0x12a2e488], eax */
  w32((uint32_t)(0x12a2e488), (EAX));
  /* 12a016c8 call 0x12a02280 */
  push32(0x12a016cdu); f_12a02280();
  /* 12a016cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a016cf jne 0x12a016dd */
  if (!C.zf) goto L_12a016dd;
  /* 12a016d1 call 0x12a05160 */
  push32(0x12a016d6u); f_12a05160();
  /* 12a016d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a016d8 jmp 0x12a01785 */
  goto L_12a01785;
L_12a016dd:;
  /* 12a016dd call dword ptr [0x12a30244] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30244))), 0x12a016e3u);
  /* 12a016e3 mov dword ptr [0x12a2ffcc], eax */
  w32((uint32_t)(0x12a2ffcc), (EAX));
  /* 12a016e8 call 0x12a04ef0 */
  push32(0x12a016edu); f_12a04ef0();
  /* 12a016ed mov dword ptr [0x12a2e470], eax */
  w32((uint32_t)(0x12a2e470), (EAX));
  /* 12a016f2 call 0x12a02530 */
  push32(0x12a016f7u); f_12a02530();
  /* 12a016f7 call 0x12a049e0 */
  push32(0x12a016fcu); f_12a049e0();
  /* 12a016fc call 0x12a04890 */
  push32(0x12a01701u); f_12a04890();
  /* 12a01701 call 0x12a02080 */
  push32(0x12a01706u); f_12a02080();
  /* 12a01706 mov ecx, dword ptr [0x12a2e46c] */
  ECX = (r32((uint32_t)(0x12a2e46c)));
  /* 12a0170c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0170f mov dword ptr [0x12a2e46c], ecx */
  w32((uint32_t)(0x12a2e46c), (ECX));
  /* 12a01715 jmp 0x12a01780 */
  goto L_12a01780;
L_12a01717:;
  /* 12a01717 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0171b jne 0x12a01770 */
  if (!C.zf) goto L_12a01770;
  /* 12a0171d cmp dword ptr [0x12a2e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01724 jle 0x12a0176a */
  if ((C.zf||C.sf!=C.of)) goto L_12a0176a;
  /* 12a01726 mov edx, dword ptr [0x12a2e46c] */
  EDX = (r32((uint32_t)(0x12a2e46c)));
  /* 12a0172c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0172f mov dword ptr [0x12a2e46c], edx */
  w32((uint32_t)(0x12a2e46c), (EDX));
  /* 12a01735 cmp dword ptr [0x12a2e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0173c jne 0x12a01743 */
  if (!C.zf) goto L_12a01743;
  /* 12a0173e call 0x12a02100 */
  push32(0x12a01743u); f_12a02100();
L_12a01743:;
  /* 12a01743 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a01745 call 0x12a03e30 */
  push32(0x12a0174au); f_12a03e30();
  /* 12a0174a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0174d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12a01750 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01752 je 0x12a01759 */
  if (C.zf) goto L_12a01759;
  /* 12a01754 call 0x12a04740 */
  push32(0x12a01759u); f_12a04740();
L_12a01759:;
  /* 12a01759 call 0x12a02860 */
  push32(0x12a0175eu); f_12a02860();
  /* 12a0175e call 0x12a02310 */
  push32(0x12a01763u); f_12a02310();
  /* 12a01763 call 0x12a05160 */
  push32(0x12a01768u); f_12a05160();
  /* 12a01768 jmp 0x12a0176e */
  goto L_12a0176e;
L_12a0176a:;
  /* 12a0176a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0176c jmp 0x12a01785 */
  goto L_12a01785;
L_12a0176e:;
  /* 12a0176e jmp 0x12a01780 */
  goto L_12a01780;
L_12a01770:;
  /* 12a01770 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01774 jne 0x12a01780 */
  if (!C.zf) goto L_12a01780;
  /* 12a01776 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01778 call 0x12a02400 */
  push32(0x12a0177du); f_12a02400();
  /* 12a0177d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01780:;
  /* 12a01780 mov eax, 1 */
  EAX = (0x1u);
L_12a01785:;
  /* 12a01785 pop ebp */
  EBP = (pop32());
  /* 12a01786 ret 0xc */
  ESPCHK(0x12a01650u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12a01790 (243 bytes, 86 insns) */
void f_12a01790(void) {
  FTRACE(0x12a01790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01790 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01791 mov ebp, esp */
  EBP = (ESP);
  /* 12a01793 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01794 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a0179b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0179f jne 0x12a017b1 */
  if (!C.zf) goto L_12a017b1;
  /* 12a017a1 cmp dword ptr [0x12a2e46c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e46c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017a8 jne 0x12a017b1 */
  if (!C.zf) goto L_12a017b1;
  /* 12a017aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a017ac jmp 0x12a0187d */
  goto L_12a0187d;
L_12a017b1:;
  /* 12a017b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017b5 je 0x12a017bd */
  if (C.zf) goto L_12a017bd;
  /* 12a017b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017bb jne 0x12a017ff */
  if (!C.zf) goto L_12a017ff;
L_12a017bd:;
  /* 12a017bd cmp dword ptr [0x12a2ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017c4 je 0x12a017db */
  if (C.zf) goto L_12a017db;
  /* 12a017c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a017c9 push eax */
  push32((uint32_t)(EAX));
  /* 12a017ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a017cd push ecx */
  push32((uint32_t)(ECX));
  /* 12a017ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a017d1 push edx */
  push32((uint32_t)(EDX));
  /* 12a017d2 call dword ptr [0x12a2ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2ffdc))), 0x12a017d8u);
  /* 12a017d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a017db:;
  /* 12a017db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017df je 0x12a017f5 */
  if (C.zf) goto L_12a017f5;
  /* 12a017e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a017e4 push eax */
  push32((uint32_t)(EAX));
  /* 12a017e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a017e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a017e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a017ec push edx */
  push32((uint32_t)(EDX));
  /* 12a017ed call 0x12a01650 */
  push32(0x12a017f2u); f_12a01650();
  /* 12a017f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a017f5:;
  /* 12a017f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a017f9 jne 0x12a017ff */
  if (!C.zf) goto L_12a017ff;
  /* 12a017fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a017fd jmp 0x12a0187d */
  goto L_12a0187d;
L_12a017ff:;
  /* 12a017ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01802 push eax */
  push32((uint32_t)(EAX));
  /* 12a01803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01806 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01807 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0180a push edx */
  push32((uint32_t)(EDX));
  /* 12a0180b call 0x12a01014 */
  push32(0x12a01810u); f_12a01014();
  /* 12a01810 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a01813 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01817 jne 0x12a0182e */
  if (!C.zf) goto L_12a0182e;
  /* 12a01819 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0181d jne 0x12a0182e */
  if (!C.zf) goto L_12a0182e;
  /* 12a0181f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01822 push eax */
  push32((uint32_t)(EAX));
  /* 12a01823 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01825 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01828 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01829 call 0x12a01650 */
  push32(0x12a0182eu); f_12a01650();
L_12a0182e:;
  /* 12a0182e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01832 je 0x12a0183a */
  if (C.zf) goto L_12a0183a;
  /* 12a01834 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01838 jne 0x12a0187a */
  if (!C.zf) goto L_12a0187a;
L_12a0183a:;
  /* 12a0183a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0183d push edx */
  push32((uint32_t)(EDX));
  /* 12a0183e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01841 push eax */
  push32((uint32_t)(EAX));
  /* 12a01842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01845 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01846 call 0x12a01650 */
  push32(0x12a0184bu); f_12a01650();
  /* 12a0184b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0184d jne 0x12a01856 */
  if (!C.zf) goto L_12a01856;
  /* 12a0184f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a01856:;
  /* 12a01856 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0185a je 0x12a0187a */
  if (C.zf) goto L_12a0187a;
  /* 12a0185c cmp dword ptr [0x12a2ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01863 je 0x12a0187a */
  if (C.zf) goto L_12a0187a;
  /* 12a01865 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01868 push edx */
  push32((uint32_t)(EDX));
  /* 12a01869 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0186c push eax */
  push32((uint32_t)(EAX));
  /* 12a0186d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01870 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01871 call dword ptr [0x12a2ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2ffdc))), 0x12a01877u);
  /* 12a01877 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0187a:;
  /* 12a0187a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0187d:;
  /* 12a0187d mov esp, ebp */
  ESP = (EBP);
  /* 12a0187f pop ebp */
  EBP = (pop32());
  /* 12a01880 ret 0xc */
  ESPCHK(0x12a01790u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12a01890 (58 bytes, 18 insns) */
void f_12a01890(void) {
  FTRACE(0x12a01890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01890 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01891 mov ebp, esp */
  EBP = (ESP);
  /* 12a01893 cmp dword ptr [0x12a2e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0189a je 0x12a018ae */
  if (C.zf) goto L_12a018ae;
  /* 12a0189c cmp dword ptr [0x12a2e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a018a3 jne 0x12a018b3 */
  if (!C.zf) goto L_12a018b3;
  /* 12a018a5 cmp dword ptr [0x12a2e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a018ac jne 0x12a018b3 */
  if (!C.zf) goto L_12a018b3;
L_12a018ae:;
  /* 12a018ae call 0x12a05200 */
  push32(0x12a018b3u); f_12a05200();
L_12a018b3:;
  /* 12a018b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a018b6 push eax */
  push32((uint32_t)(EAX));
  /* 12a018b7 call 0x12a05250 */
  push32(0x12a018bcu); f_12a05250();
  /* 12a018bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a018bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 12a018c4 call dword ptr [0x12a2ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2ca30))), 0x12a018cau);
  /* 12a018ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a018cd pop ebp */
  EBP = (pop32());
  /* 12a018ce ret  */
  ESPCHK(0x12a01890u, _esp0);
  ESP += 4; return;
}

/* FUN_100018d0 @ 0x12a018d0 (11 bytes, 5 insns) */
void f_12a018d0(void) {
  FTRACE(0x12a018d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a018d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a018d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a018d3 call dword ptr [0x12a3024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3024c))), 0x12a018d9u);
  /* 12a018d9 pop ebp */
  EBP = (pop32());
  /* 12a018da ret  */
  ESPCHK(0x12a018d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100018e0 @ 0x12a018e0 (87 bytes, 30 insns) */
void f_12a018e0(void) {
  FTRACE(0x12a018e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a018e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a018e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a018e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a018e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a018e8 jl 0x12a018f0 */
  if ((C.sf!=C.of)) goto L_12a018f0;
  /* 12a018ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a018ee jl 0x12a018f5 */
  if ((C.sf!=C.of)) goto L_12a018f5;
L_12a018f0:;
  /* 12a018f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a018f3 jmp 0x12a01933 */
  goto L_12a01933;
L_12a018f5:;
  /* 12a018f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a018f9 jne 0x12a01907 */
  if (!C.zf) goto L_12a01907;
  /* 12a018fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a018fe mov eax, dword ptr [eax*4 + 0x12a2ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12a2ca38)));
  /* 12a01905 jmp 0x12a01933 */
  goto L_12a01933;
L_12a01907:;
  /* 12a01907 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0190a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0190d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0190f je 0x12a01916 */
  if (C.zf) goto L_12a01916;
  /* 12a01911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01914 jmp 0x12a01933 */
  goto L_12a01933;
L_12a01916:;
  /* 12a01916 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01919 mov eax, dword ptr [edx*4 + 0x12a2ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2ca38)));
  /* 12a01920 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a01923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01926 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01929 mov dword ptr [ecx*4 + 0x12a2ca38], edx */
  w32((uint32_t)(ECX*4 + 0x12a2ca38), (EDX));
  /* 12a01930 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a01933:;
  /* 12a01933 mov esp, ebp */
  ESP = (EBP);
  /* 12a01935 pop ebp */
  EBP = (pop32());
  /* 12a01936 ret  */
  ESPCHK(0x12a018e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12a01940 (126 bytes, 38 insns) */
void f_12a01940(void) {
  FTRACE(0x12a01940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01940 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01941 mov ebp, esp */
  EBP = (ESP);
  /* 12a01943 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01944 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01948 jl 0x12a01950 */
  if ((C.sf!=C.of)) goto L_12a01950;
  /* 12a0194a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0194e jl 0x12a01957 */
  if ((C.sf!=C.of)) goto L_12a01957;
L_12a01950:;
  /* 12a01950 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12a01955 jmp 0x12a019ba */
  goto L_12a019ba;
L_12a01957:;
  /* 12a01957 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0195b jne 0x12a01969 */
  if (!C.zf) goto L_12a01969;
  /* 12a0195d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01960 mov eax, dword ptr [eax*4 + 0x12a2ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12a2ca44)));
  /* 12a01967 jmp 0x12a019ba */
  goto L_12a019ba;
L_12a01969:;
  /* 12a01969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0196c mov edx, dword ptr [ecx*4 + 0x12a2ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca44)));
  /* 12a01973 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a01976 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0197a jne 0x12a01990 */
  if (!C.zf) goto L_12a01990;
  /* 12a0197c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12a0197e call dword ptr [0x12a30250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30250))), 0x12a01984u);
  /* 12a01984 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01987 mov dword ptr [ecx*4 + 0x12a2ca44], eax */
  w32((uint32_t)(ECX*4 + 0x12a2ca44), (EAX));
  /* 12a0198e jmp 0x12a019b7 */
  goto L_12a019b7;
L_12a01990:;
  /* 12a01990 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01994 jne 0x12a019aa */
  if (!C.zf) goto L_12a019aa;
  /* 12a01996 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12a01998 call dword ptr [0x12a30250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30250))), 0x12a0199eu);
  /* 12a0199e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a019a1 mov dword ptr [edx*4 + 0x12a2ca44], eax */
  w32((uint32_t)(EDX*4 + 0x12a2ca44), (EAX));
  /* 12a019a8 jmp 0x12a019b7 */
  goto L_12a019b7;
L_12a019aa:;
  /* 12a019aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a019ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a019b0 mov dword ptr [eax*4 + 0x12a2ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x12a2ca44), (ECX));
L_12a019b7:;
  /* 12a019b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a019ba:;
  /* 12a019ba mov esp, ebp */
  ESP = (EBP);
  /* 12a019bc pop ebp */
  EBP = (pop32());
  /* 12a019bd ret  */
  ESPCHK(0x12a01940u, _esp0);
  ESP += 4; return;
}

/* FUN_100019c0 @ 0x12a019c0 (28 bytes, 11 insns) */
void f_12a019c0(void) {
  FTRACE(0x12a019c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a019c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a019c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a019c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a019c4 mov eax, dword ptr [0x12a2ffc0] */
  EAX = (r32((uint32_t)(0x12a2ffc0)));
  /* 12a019c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a019cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a019cf mov dword ptr [0x12a2ffc0], ecx */
  w32((uint32_t)(0x12a2ffc0), (ECX));
  /* 12a019d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a019d8 mov esp, ebp */
  ESP = (EBP);
  /* 12a019da pop ebp */
  EBP = (pop32());
  /* 12a019db ret  */
  ESPCHK(0x12a019c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100019e0 @ 0x12a019e0 (912 bytes, 248 insns) */
void f_12a019e0(void) {
  FTRACE(0x12a019e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a019e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a019e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a019e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12a019e8 call 0x12a05ac0 */
  push32(0x12a019edu); f_12a05ac0();
  /* 12a019ed push edi */
  push32((uint32_t)(EDI));
  /* 12a019ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12a019f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12a019fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a019fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12a01a02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01a04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12a01a06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12a01a07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12a01a0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12a01a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a01a15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12a01a1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01a1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12a01a1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12a01a20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12a01a27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12a01a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a01a2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12a01a34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a01a36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12a01a38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12a01a39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12a01a3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12a01a42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01a46 jl 0x12a01a4e */
  if ((C.sf!=C.of)) goto L_12a01a4e;
  /* 12a01a48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01a4c jl 0x12a01a56 */
  if ((C.sf!=C.of)) goto L_12a01a56;
L_12a01a4e:;
  /* 12a01a4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01a51 jmp 0x12a01d6b */
  goto L_12a01d6b;
L_12a01a56:;
  /* 12a01a56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01a5a jne 0x12a01b00 */
  if (!C.zf) goto L_12a01b00;
  /* 12a01a60 push 0x12a2ca34 */
  push32((uint32_t)(0x12a2ca34u));
  /* 12a01a65 call dword ptr [0x12a30268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30268))), 0x12a01a6bu);
  /* 12a01a6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01a6d jle 0x12a01b00 */
  if ((C.zf||C.sf!=C.of)) goto L_12a01b00;
  /* 12a01a73 cmp dword ptr [0x12a2e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01a7a jne 0x12a01abe */
  if (!C.zf) goto L_12a01abe;
  /* 12a01a7c push 0x12a29208 */
  push32((uint32_t)(0x12a29208u));
  /* 12a01a81 call dword ptr [0x12a30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30264))), 0x12a01a87u);
  /* 12a01a87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12a01a8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01a94 je 0x12a01ab6 */
  if (C.zf) goto L_12a01ab6;
  /* 12a01a96 push 0x12a291fc */
  push32((uint32_t)(0x12a291fcu));
  /* 12a01a9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12a01aa1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01aa2 call dword ptr [0x12a30260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30260))), 0x12a01aa8u);
  /* 12a01aa8 mov dword ptr [0x12a2e480], eax */
  w32((uint32_t)(0x12a2e480), (EAX));
  /* 12a01aad cmp dword ptr [0x12a2e480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01ab4 jne 0x12a01abe */
  if (!C.zf) goto L_12a01abe;
L_12a01ab6:;
  /* 12a01ab6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01ab9 jmp 0x12a01d6b */
  goto L_12a01d6b;
L_12a01abe:;
  /* 12a01abe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01ac1 push edx */
  push32((uint32_t)(EDX));
  /* 12a01ac2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01ac5 push eax */
  push32((uint32_t)(EAX));
  /* 12a01ac6 push 0x12a291c8 */
  push32((uint32_t)(0x12a291c8u));
  /* 12a01acb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12a01ad1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01ad2 call dword ptr [0x12a2e480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e480))), 0x12a01ad8u);
  /* 12a01ad8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01adb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12a01ae1 push edx */
  push32((uint32_t)(EDX));
  /* 12a01ae2 call dword ptr [0x12a3025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3025c))), 0x12a01ae8u);
  /* 12a01ae8 push 0x12a2ca34 */
  push32((uint32_t)(0x12a2ca34u));
  /* 12a01aed call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a01af3u);
  /* 12a01af3 call 0x12a018d0 */
  push32(0x12a01af8u); f_12a018d0();
  /* 12a01af8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a01afb jmp 0x12a01d6b */
  goto L_12a01d6b;
L_12a01b00:;
  /* 12a01b00 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01b04 je 0x12a01b3d */
  if (C.zf) goto L_12a01b3d;
  /* 12a01b06 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12a01b0c push eax */
  push32((uint32_t)(EAX));
  /* 12a01b0d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a01b10 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01b11 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12a01b16 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12a01b1c push edx */
  push32((uint32_t)(EDX));
  /* 12a01b1d call 0x12a059c0 */
  push32(0x12a01b22u); f_12a059c0();
  /* 12a01b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01b27 jge 0x12a01b3d */
  if ((C.sf==C.of)) goto L_12a01b3d;
  /* 12a01b29 push 0x12a2919c */
  push32((uint32_t)(0x12a2919cu));
  /* 12a01b2e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12a01b34 push eax */
  push32((uint32_t)(EAX));
  /* 12a01b35 call 0x12a058d0 */
  push32(0x12a01b3au); f_12a058d0();
  /* 12a01b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01b3d:;
  /* 12a01b3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01b41 jne 0x12a01b75 */
  if (!C.zf) goto L_12a01b75;
  /* 12a01b43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01b47 je 0x12a01b55 */
  if (C.zf) goto L_12a01b55;
  /* 12a01b49 mov dword ptr [ebp - 0x3028], 0x12a29188 */
  w32((uint32_t)(EBP + -0x3028), (0x12a29188u));
  /* 12a01b53 jmp 0x12a01b5f */
  goto L_12a01b5f;
L_12a01b55:;
  /* 12a01b55 mov dword ptr [ebp - 0x3028], 0x12a29174 */
  w32((uint32_t)(EBP + -0x3028), (0x12a29174u));
L_12a01b5f:;
  /* 12a01b5f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12a01b65 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01b66 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12a01b6c push edx */
  push32((uint32_t)(EDX));
  /* 12a01b6d call 0x12a058d0 */
  push32(0x12a01b72u); f_12a058d0();
  /* 12a01b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01b75:;
  /* 12a01b75 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12a01b7b push eax */
  push32((uint32_t)(EAX));
  /* 12a01b7c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12a01b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01b83 call 0x12a058e0 */
  push32(0x12a01b88u); f_12a058e0();
  /* 12a01b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01b8b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01b8f jne 0x12a01bca */
  if (!C.zf) goto L_12a01bca;
  /* 12a01b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01b94 mov eax, dword ptr [edx*4 + 0x12a2ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2ca38)));
  /* 12a01b9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12a01b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01ba0 je 0x12a01bb6 */
  if (C.zf) goto L_12a01bb6;
  /* 12a01ba2 push 0x12a29170 */
  push32((uint32_t)(0x12a29170u));
  /* 12a01ba7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12a01bad push ecx */
  push32((uint32_t)(ECX));
  /* 12a01bae call 0x12a058e0 */
  push32(0x12a01bb3u); f_12a058e0();
  /* 12a01bb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01bb6:;
  /* 12a01bb6 push 0x12a2916c */
  push32((uint32_t)(0x12a2916cu));
  /* 12a01bbb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12a01bc1 push edx */
  push32((uint32_t)(EDX));
  /* 12a01bc2 call 0x12a058e0 */
  push32(0x12a01bc7u); f_12a058e0();
  /* 12a01bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01bca:;
  /* 12a01bca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01bce je 0x12a01c12 */
  if (C.zf) goto L_12a01c12;
  /* 12a01bd0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12a01bd6 push eax */
  push32((uint32_t)(EAX));
  /* 12a01bd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01bda push ecx */
  push32((uint32_t)(ECX));
  /* 12a01bdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01bde push edx */
  push32((uint32_t)(EDX));
  /* 12a01bdf push 0x12a29160 */
  push32((uint32_t)(0x12a29160u));
  /* 12a01be4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12a01be9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12a01bef push eax */
  push32((uint32_t)(EAX));
  /* 12a01bf0 call 0x12a057d0 */
  push32(0x12a01bf5u); f_12a057d0();
  /* 12a01bf5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01bfa jge 0x12a01c10 */
  if ((C.sf==C.of)) goto L_12a01c10;
  /* 12a01bfc push 0x12a2919c */
  push32((uint32_t)(0x12a2919cu));
  /* 12a01c01 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12a01c07 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01c08 call 0x12a058d0 */
  push32(0x12a01c0du); f_12a058d0();
  /* 12a01c0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01c10:;
  /* 12a01c10 jmp 0x12a01c28 */
  goto L_12a01c28;
L_12a01c12:;
  /* 12a01c12 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12a01c18 push edx */
  push32((uint32_t)(EDX));
  /* 12a01c19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12a01c1f push eax */
  push32((uint32_t)(EAX));
  /* 12a01c20 call 0x12a058d0 */
  push32(0x12a01c25u); f_12a058d0();
  /* 12a01c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01c28:;
  /* 12a01c28 cmp dword ptr [0x12a2ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01c2f je 0x12a01c6c */
  if (C.zf) goto L_12a01c6c;
  /* 12a01c31 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12a01c37 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01c38 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12a01c3e push edx */
  push32((uint32_t)(EDX));
  /* 12a01c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01c42 push eax */
  push32((uint32_t)(EAX));
  /* 12a01c43 call dword ptr [0x12a2ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2ffc0))), 0x12a01c49u);
  /* 12a01c49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01c4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01c4e je 0x12a01c6c */
  if (C.zf) goto L_12a01c6c;
  /* 12a01c50 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01c54 jne 0x12a01c61 */
  if (!C.zf) goto L_12a01c61;
  /* 12a01c56 push 0x12a2ca34 */
  push32((uint32_t)(0x12a2ca34u));
  /* 12a01c5b call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a01c61u);
L_12a01c61:;
  /* 12a01c61 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12a01c67 jmp 0x12a01d6b */
  goto L_12a01d6b;
L_12a01c6c:;
  /* 12a01c6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01c6f mov edx, dword ptr [ecx*4 + 0x12a2ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca38)));
  /* 12a01c76 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a01c79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a01c7b je 0x12a01cbb */
  if (C.zf) goto L_12a01cbb;
  /* 12a01c7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01c80 cmp dword ptr [eax*4 + 0x12a2ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12a2ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01c88 je 0x12a01cbb */
  if (C.zf) goto L_12a01cbb;
  /* 12a01c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01c8c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12a01c92 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01c93 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12a01c99 push edx */
  push32((uint32_t)(EDX));
  /* 12a01c9a call 0x12a05750 */
  push32(0x12a01c9fu); f_12a05750();
  /* 12a01c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01ca2 push eax */
  push32((uint32_t)(EAX));
  /* 12a01ca3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12a01ca9 push eax */
  push32((uint32_t)(EAX));
  /* 12a01caa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01cad mov edx, dword ptr [ecx*4 + 0x12a2ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca44)));
  /* 12a01cb4 push edx */
  push32((uint32_t)(EDX));
  /* 12a01cb5 call dword ptr [0x12a30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30254))), 0x12a01cbbu);
L_12a01cbb:;
  /* 12a01cbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01cbe mov ecx, dword ptr [eax*4 + 0x12a2ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2ca38)));
  /* 12a01cc5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12a01cc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a01cca je 0x12a01cd9 */
  if (C.zf) goto L_12a01cd9;
  /* 12a01ccc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12a01cd2 push edx */
  push32((uint32_t)(EDX));
  /* 12a01cd3 call dword ptr [0x12a3025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3025c))), 0x12a01cd9u);
L_12a01cd9:;
  /* 12a01cd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01cdc mov ecx, dword ptr [eax*4 + 0x12a2ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2ca38)));
  /* 12a01ce3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a01ce6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a01ce8 je 0x12a01d58 */
  if (C.zf) goto L_12a01d58;
  /* 12a01cea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01cee je 0x12a01d0d */
  if (C.zf) goto L_12a01d0d;
  /* 12a01cf0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a01cf2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12a01cf8 push edx */
  push32((uint32_t)(EDX));
  /* 12a01cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01cfc push eax */
  push32((uint32_t)(EAX));
  /* 12a01cfd call 0x12a05460 */
  push32(0x12a01d02u); f_12a05460();
  /* 12a01d02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01d05 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12a01d0b jmp 0x12a01d17 */
  goto L_12a01d17;
L_12a01d0d:;
  /* 12a01d0d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12a01d17:;
  /* 12a01d17 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12a01d1d push ecx */
  push32((uint32_t)(ECX));
  /* 12a01d1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a01d21 push edx */
  push32((uint32_t)(EDX));
  /* 12a01d22 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12a01d28 push eax */
  push32((uint32_t)(EAX));
  /* 12a01d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01d2c push ecx */
  push32((uint32_t)(ECX));
  /* 12a01d2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01d30 push edx */
  push32((uint32_t)(EDX));
  /* 12a01d31 call 0x12a01d70 */
  push32(0x12a01d36u); f_12a01d70();
  /* 12a01d36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01d39 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12a01d3f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01d43 jne 0x12a01d50 */
  if (!C.zf) goto L_12a01d50;
  /* 12a01d45 push 0x12a2ca34 */
  push32((uint32_t)(0x12a2ca34u));
  /* 12a01d4a call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a01d50u);
L_12a01d50:;
  /* 12a01d50 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12a01d56 jmp 0x12a01d6b */
  goto L_12a01d6b;
L_12a01d58:;
  /* 12a01d58 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01d5c jne 0x12a01d69 */
  if (!C.zf) goto L_12a01d69;
  /* 12a01d5e push 0x12a2ca34 */
  push32((uint32_t)(0x12a2ca34u));
  /* 12a01d63 call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a01d69u);
L_12a01d69:;
  /* 12a01d69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a01d6b:;
  /* 12a01d6b pop edi */
  EDI = (pop32());
  /* 12a01d6c mov esp, ebp */
  ESP = (EBP);
  /* 12a01d6e pop ebp */
  EBP = (pop32());
  /* 12a01d6f ret  */
  ESPCHK(0x12a019e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d70 @ 0x12a01d70 (780 bytes, 197 insns) */
void f_12a01d70(void) {
  FTRACE(0x12a01d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a01d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12a01d71 mov ebp, esp */
  EBP = (ESP);
  /* 12a01d73 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12a01d78 call 0x12a05ac0 */
  push32(0x12a01d7du); f_12a05ac0();
L_12a01d7d:;
  /* 12a01d7d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01d81 jne 0x12a01da8 */
  if (!C.zf) goto L_12a01da8;
  /* 12a01d83 push 0x12a29358 */
  push32((uint32_t)(0x12a29358u));
  /* 12a01d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01d8a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12a01d8f push 0x12a2934c */
  push32((uint32_t)(0x12a2934cu));
  /* 12a01d94 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a01d96 call 0x12a019e0 */
  push32(0x12a01d9bu); f_12a019e0();
  /* 12a01d9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01d9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01da1 jne 0x12a01da8 */
  if (!C.zf) goto L_12a01da8;
  /* 12a01da3 call 0x12a018d0 */
  push32(0x12a01da8u); f_12a018d0();
L_12a01da8:;
  /* 12a01da8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a01daa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01dac jne 0x12a01d7d */
  if (!C.zf) goto L_12a01d7d;
  /* 12a01dae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12a01db3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12a01db9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01dba push 0 */
  push32((uint32_t)(0x0u));
  /* 12a01dbc call dword ptr [0x12a3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3026c))), 0x12a01dc2u);
  /* 12a01dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a01dc4 jne 0x12a01dda */
  if (!C.zf) goto L_12a01dda;
  /* 12a01dc6 push 0x12a29334 */
  push32((uint32_t)(0x12a29334u));
  /* 12a01dcb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12a01dd1 push edx */
  push32((uint32_t)(EDX));
  /* 12a01dd2 call 0x12a058d0 */
  push32(0x12a01dd7u); f_12a058d0();
  /* 12a01dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01dda:;
  /* 12a01dda lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12a01de0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a01de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a01de6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01de7 call 0x12a05750 */
  push32(0x12a01decu); f_12a05750();
  /* 12a01dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01def cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01df2 jbe 0x12a01e1d */
  if ((C.cf||C.zf)) goto L_12a01e1d;
  /* 12a01df4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a01df7 push edx */
  push32((uint32_t)(EDX));
  /* 12a01df8 call 0x12a05750 */
  push32(0x12a01dfdu); f_12a05750();
  /* 12a01dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01e00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a01e03 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12a01e07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a01e0a push 3 */
  push32((uint32_t)(0x3u));
  /* 12a01e0c push 0x12a29330 */
  push32((uint32_t)(0x12a29330u));
  /* 12a01e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a01e14 push eax */
  push32((uint32_t)(EAX));
  /* 12a01e15 call 0x12a06140 */
  push32(0x12a01e1au); f_12a06140();
  /* 12a01e1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01e1d:;
  /* 12a01e1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a01e20 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12a01e26 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01e2d je 0x12a01e78 */
  if (C.zf) goto L_12a01e78;
  /* 12a01e2f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12a01e35 push edx */
  push32((uint32_t)(EDX));
  /* 12a01e36 call 0x12a05750 */
  push32(0x12a01e3bu); f_12a05750();
  /* 12a01e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01e3e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01e41 jbe 0x12a01e78 */
  if ((C.cf||C.zf)) goto L_12a01e78;
  /* 12a01e43 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12a01e49 push eax */
  push32((uint32_t)(EAX));
  /* 12a01e4a call 0x12a05750 */
  push32(0x12a01e4fu); f_12a05750();
  /* 12a01e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a01e52 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12a01e58 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12a01e5c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12a01e62 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a01e64 push 0x12a29330 */
  push32((uint32_t)(0x12a29330u));
  /* 12a01e69 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12a01e6f push eax */
  push32((uint32_t)(EAX));
  /* 12a01e70 call 0x12a06140 */
  push32(0x12a01e75u); f_12a06140();
  /* 12a01e75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a01e78:;
  /* 12a01e78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01e7c jne 0x12a01e8a */
  if (!C.zf) goto L_12a01e8a;
  /* 12a01e7e mov dword ptr [ebp - 0x1114], 0x12a292bc */
  w32((uint32_t)(EBP + -0x1114), (0x12a292bcu));
  /* 12a01e88 jmp 0x12a01e94 */
  goto L_12a01e94;
L_12a01e8a:;
  /* 12a01e8a mov dword ptr [ebp - 0x1114], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1114), (0x12a2905cu));
L_12a01e94:;
  /* 12a01e94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a01e97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a01e9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a01e9c je 0x12a01ea9 */
  if (C.zf) goto L_12a01ea9;
  /* 12a01e9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a01ea1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12a01ea7 jmp 0x12a01eb3 */
  goto L_12a01eb3;
L_12a01ea9:;
  /* 12a01ea9 mov dword ptr [ebp - 0x1118], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1118), (0x12a2905cu));
L_12a01eb3:;
  /* 12a01eb3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a01eb6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a01eb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a01ebb je 0x12a01ecf */
  if (C.zf) goto L_12a01ecf;
  /* 12a01ebd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01ec1 jne 0x12a01ecf */
  if (!C.zf) goto L_12a01ecf;
  /* 12a01ec3 mov dword ptr [ebp - 0x111c], 0x12a292ac */
  w32((uint32_t)(EBP + -0x111c), (0x12a292acu));
  /* 12a01ecd jmp 0x12a01ed9 */
  goto L_12a01ed9;
L_12a01ecf:;
  /* 12a01ecf mov dword ptr [ebp - 0x111c], 0x12a2905c */
  w32((uint32_t)(EBP + -0x111c), (0x12a2905cu));
L_12a01ed9:;
  /* 12a01ed9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a01edc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a01edf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a01ee1 je 0x12a01eef */
  if (C.zf) goto L_12a01eef;
  /* 12a01ee3 mov dword ptr [ebp - 0x1120], 0x12a292a8 */
  w32((uint32_t)(EBP + -0x1120), (0x12a292a8u));
  /* 12a01eed jmp 0x12a01ef9 */
  goto L_12a01ef9;
L_12a01eef:;
  /* 12a01eef mov dword ptr [ebp - 0x1120], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1120), (0x12a2905cu));
L_12a01ef9:;
  /* 12a01ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01efd je 0x12a01f0a */
  if (C.zf) goto L_12a01f0a;
  /* 12a01eff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a01f02 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12a01f08 jmp 0x12a01f14 */
  goto L_12a01f14;
L_12a01f0a:;
  /* 12a01f0a mov dword ptr [ebp - 0x1124], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1124), (0x12a2905cu));
L_12a01f14:;
  /* 12a01f14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01f18 je 0x12a01f26 */
  if (C.zf) goto L_12a01f26;
  /* 12a01f1a mov dword ptr [ebp - 0x1128], 0x12a292a0 */
  w32((uint32_t)(EBP + -0x1128), (0x12a292a0u));
  /* 12a01f24 jmp 0x12a01f30 */
  goto L_12a01f30;
L_12a01f26:;
  /* 12a01f26 mov dword ptr [ebp - 0x1128], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1128), (0x12a2905cu));
L_12a01f30:;
  /* 12a01f30 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01f34 je 0x12a01f41 */
  if (C.zf) goto L_12a01f41;
  /* 12a01f36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a01f39 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12a01f3f jmp 0x12a01f4b */
  goto L_12a01f4b;
L_12a01f41:;
  /* 12a01f41 mov dword ptr [ebp - 0x112c], 0x12a2905c */
  w32((uint32_t)(EBP + -0x112c), (0x12a2905cu));
L_12a01f4b:;
  /* 12a01f4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01f4f je 0x12a01f5d */
  if (C.zf) goto L_12a01f5d;
  /* 12a01f51 mov dword ptr [ebp - 0x1130], 0x12a29298 */
  w32((uint32_t)(EBP + -0x1130), (0x12a29298u));
  /* 12a01f5b jmp 0x12a01f67 */
  goto L_12a01f67;
L_12a01f5d:;
  /* 12a01f5d mov dword ptr [ebp - 0x1130], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1130), (0x12a2905cu));
L_12a01f67:;
  /* 12a01f67 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01f6e je 0x12a01f7e */
  if (C.zf) goto L_12a01f7e;
  /* 12a01f70 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12a01f76 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12a01f7c jmp 0x12a01f88 */
  goto L_12a01f88;
L_12a01f7e:;
  /* 12a01f7e mov dword ptr [ebp - 0x1134], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1134), (0x12a2905cu));
L_12a01f88:;
  /* 12a01f88 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a01f8f je 0x12a01f9d */
  if (C.zf) goto L_12a01f9d;
  /* 12a01f91 mov dword ptr [ebp - 0x1138], 0x12a2928c */
  w32((uint32_t)(EBP + -0x1138), (0x12a2928cu));
  /* 12a01f9b jmp 0x12a01fa7 */
  goto L_12a01fa7;
L_12a01f9d:;
  /* 12a01f9d mov dword ptr [ebp - 0x1138], 0x12a2905c */
  w32((uint32_t)(EBP + -0x1138), (0x12a2905cu));
L_12a01fa7:;
  /* 12a01fa7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12a01fad push edx */
  push32((uint32_t)(EDX));
  /* 12a01fae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12a01fb4 push eax */
  push32((uint32_t)(EAX));
  /* 12a01fb5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12a01fbb push ecx */
  push32((uint32_t)(ECX));
  /* 12a01fbc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12a01fc2 push edx */
  push32((uint32_t)(EDX));
  /* 12a01fc3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12a01fc9 push eax */
  push32((uint32_t)(EAX));
  /* 12a01fca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12a01fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01fd1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12a01fd7 push edx */
  push32((uint32_t)(EDX));
  /* 12a01fd8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12a01fde push eax */
  push32((uint32_t)(EAX));
  /* 12a01fdf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12a01fe5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a01fe6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12a01fec push edx */
  push32((uint32_t)(EDX));
  /* 12a01fed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a01ff0 push eax */
  push32((uint32_t)(EAX));
  /* 12a01ff1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a01ff4 mov edx, dword ptr [ecx*4 + 0x12a2ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca50)));
  /* 12a01ffb push edx */
  push32((uint32_t)(EDX));
  /* 12a01ffc push 0x12a29238 */
  push32((uint32_t)(0x12a29238u));
  /* 12a02001 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12a02006 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12a0200c push eax */
  push32((uint32_t)(EAX));
  /* 12a0200d call 0x12a057d0 */
  push32(0x12a02012u); f_12a057d0();
  /* 12a02012 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02015 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02017 jge 0x12a0202d */
  if ((C.sf==C.of)) goto L_12a0202d;
  /* 12a02019 push 0x12a2919c */
  push32((uint32_t)(0x12a2919cu));
  /* 12a0201e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12a02024 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02025 call 0x12a058d0 */
  push32(0x12a0202au); f_12a058d0();
  /* 12a0202a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0202d:;
  /* 12a0202d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12a02032 push 0x12a29214 */
  push32((uint32_t)(0x12a29214u));
  /* 12a02037 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12a0203d push edx */
  push32((uint32_t)(EDX));
  /* 12a0203e call 0x12a06080 */
  push32(0x12a02043u); f_12a06080();
  /* 12a02043 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02046 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12a0204c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02053 jne 0x12a02066 */
  if (!C.zf) goto L_12a02066;
  /* 12a02055 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12a02057 call 0x12a05dc0 */
  push32(0x12a0205cu); f_12a05dc0();
  /* 12a0205c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0205f push 3 */
  push32((uint32_t)(0x3u));
  /* 12a02061 call 0x12a020e0 */
  push32(0x12a02066u); f_12a020e0();
L_12a02066:;
  /* 12a02066 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0206d jne 0x12a02076 */
  if (!C.zf) goto L_12a02076;
  /* 12a0206f mov eax, 1 */
  EAX = (0x1u);
  /* 12a02074 jmp 0x12a02078 */
  goto L_12a02078;
L_12a02076:;
  /* 12a02076 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a02078:;
  /* 12a02078 mov esp, ebp */
  ESP = (EBP);
  /* 12a0207a pop ebp */
  EBP = (pop32());
  /* 12a0207b ret  */
  ESPCHK(0x12a01d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002080 @ 0x12a02080 (56 bytes, 15 insns) */
void f_12a02080(void) {
  FTRACE(0x12a02080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02080 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02081 mov ebp, esp */
  EBP = (ESP);
  /* 12a02083 cmp dword ptr [0x12a2ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0208a je 0x12a02092 */
  if (C.zf) goto L_12a02092;
  /* 12a0208c call dword ptr [0x12a2ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2ffbc))), 0x12a02092u);
L_12a02092:;
  /* 12a02092 push 0x12a2c418 */
  push32((uint32_t)(0x12a2c418u));
  /* 12a02097 push 0x12a2c208 */
  push32((uint32_t)(0x12a2c208u));
  /* 12a0209c call 0x12a02250 */
  push32(0x12a020a1u); f_12a02250();
  /* 12a020a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a020a4 push 0x12a2c104 */
  push32((uint32_t)(0x12a2c104u));
  /* 12a020a9 push 0x12a2c000 */
  push32((uint32_t)(0x12a2c000u));
  /* 12a020ae call 0x12a02250 */
  push32(0x12a020b3u); f_12a02250();
  /* 12a020b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a020b6 pop ebp */
  EBP = (pop32());
  /* 12a020b7 ret  */
  ESPCHK(0x12a02080u, _esp0);
  ESP += 4; return;
}

/* FUN_100020c0 @ 0x12a020c0 (21 bytes, 10 insns) */
void f_12a020c0(void) {
  FTRACE(0x12a020c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a020c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a020c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a020c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a020c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a020c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a020ca push eax */
  push32((uint32_t)(EAX));
  /* 12a020cb call 0x12a02140 */
  push32(0x12a020d0u); f_12a02140();
  /* 12a020d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a020d3 pop ebp */
  EBP = (pop32());
  /* 12a020d4 ret  */
  ESPCHK(0x12a020c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12a020e0 (21 bytes, 10 insns) */
void f_12a020e0(void) {
  FTRACE(0x12a020e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a020e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a020e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a020e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a020e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a020e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a020ea push eax */
  push32((uint32_t)(EAX));
  /* 12a020eb call 0x12a02140 */
  push32(0x12a020f0u); f_12a02140();
  /* 12a020f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a020f3 pop ebp */
  EBP = (pop32());
  /* 12a020f4 ret  */
  ESPCHK(0x12a020e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x12a02100 (19 bytes, 9 insns) */
void f_12a02100(void) {
  FTRACE(0x12a02100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02100 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02101 mov ebp, esp */
  EBP = (ESP);
  /* 12a02103 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02109 call 0x12a02140 */
  push32(0x12a0210eu); f_12a02140();
  /* 12a0210e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02111 pop ebp */
  EBP = (pop32());
  /* 12a02112 ret  */
  ESPCHK(0x12a02100u, _esp0);
  ESP += 4; return;
}

/* FUN_10002120 @ 0x12a02120 (19 bytes, 9 insns) */
void f_12a02120(void) {
  FTRACE(0x12a02120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02120 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02121 mov ebp, esp */
  EBP = (ESP);
  /* 12a02123 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02125 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02127 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02129 call 0x12a02140 */
  push32(0x12a0212eu); f_12a02140();
  /* 12a0212e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02131 pop ebp */
  EBP = (pop32());
  /* 12a02132 ret  */
  ESPCHK(0x12a02120u, _esp0);
  ESP += 4; return;
}

/* FUN_10002140 @ 0x12a02140 (227 bytes, 61 insns) */
void f_12a02140(void) {
  FTRACE(0x12a02140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02140 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02141 mov ebp, esp */
  EBP = (ESP);
  /* 12a02143 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02144 call 0x12a02230 */
  push32(0x12a02149u); f_12a02230();
  /* 12a02149 cmp dword ptr [0x12a2e4c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02150 jne 0x12a02163 */
  if (!C.zf) goto L_12a02163;
  /* 12a02152 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02155 push eax */
  push32((uint32_t)(EAX));
  /* 12a02156 call dword ptr [0x12a30278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30278))), 0x12a0215cu);
  /* 12a0215c push eax */
  push32((uint32_t)(EAX));
  /* 12a0215d call dword ptr [0x12a30274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30274))), 0x12a02163u);
L_12a02163:;
  /* 12a02163 mov dword ptr [0x12a2e4c0], 1 */
  w32((uint32_t)(0x12a2e4c0), (0x1u));
  /* 12a0216d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12a02170 mov byte ptr [0x12a2e4bc], cl */
  w8((uint32_t)(0x12a2e4bc), (CL));
  /* 12a02176 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0217a jne 0x12a021c3 */
  if (!C.zf) goto L_12a021c3;
  /* 12a0217c cmp dword ptr [0x12a2ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02183 je 0x12a021b1 */
  if (C.zf) goto L_12a021b1;
  /* 12a02185 mov edx, dword ptr [0x12a2ffb4] */
  EDX = (r32((uint32_t)(0x12a2ffb4)));
  /* 12a0218b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0218e:;
  /* 12a0218e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02191 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02194 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a02197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0219a cmp ecx, dword ptr [0x12a2ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a021a0 jb 0x12a021b1 */
  if (C.cf) goto L_12a021b1;
  /* 12a021a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a021a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a021a8 je 0x12a021af */
  if (C.zf) goto L_12a021af;
  /* 12a021aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a021ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12a021afu);
L_12a021af:;
  /* 12a021af jmp 0x12a0218e */
  goto L_12a0218e;
L_12a021b1:;
  /* 12a021b1 push 0x12a2c724 */
  push32((uint32_t)(0x12a2c724u));
  /* 12a021b6 push 0x12a2c51c */
  push32((uint32_t)(0x12a2c51cu));
  /* 12a021bb call 0x12a02250 */
  push32(0x12a021c0u); f_12a02250();
  /* 12a021c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a021c3:;
  /* 12a021c3 push 0x12a2c92c */
  push32((uint32_t)(0x12a2c92cu));
  /* 12a021c8 push 0x12a2c828 */
  push32((uint32_t)(0x12a2c828u));
  /* 12a021cd call 0x12a02250 */
  push32(0x12a021d2u); f_12a02250();
  /* 12a021d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a021d5 cmp dword ptr [0x12a2e4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a021dc jne 0x12a021fe */
  if (!C.zf) goto L_12a021fe;
  /* 12a021de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a021e0 call 0x12a03e30 */
  push32(0x12a021e5u); f_12a03e30();
  /* 12a021e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a021e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12a021eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a021ed je 0x12a021fe */
  if (C.zf) goto L_12a021fe;
  /* 12a021ef mov dword ptr [0x12a2e4c8], 1 */
  w32((uint32_t)(0x12a2e4c8), (0x1u));
  /* 12a021f9 call 0x12a04740 */
  push32(0x12a021feu); f_12a04740();
L_12a021fe:;
  /* 12a021fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02202 je 0x12a0220b */
  if (C.zf) goto L_12a0220b;
  /* 12a02204 call 0x12a02240 */
  push32(0x12a02209u); f_12a02240();
  /* 12a02209 jmp 0x12a0221f */
  goto L_12a0221f;
L_12a0220b:;
  /* 12a0220b mov dword ptr [0x12a2e4c4], 1 */
  w32((uint32_t)(0x12a2e4c4), (0x1u));
  /* 12a02215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02218 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02219 call dword ptr [0x12a30270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30270))), 0x12a0221fu);
L_12a0221f:;
  /* 12a0221f mov esp, ebp */
  ESP = (EBP);
  /* 12a02221 pop ebp */
  EBP = (pop32());
  /* 12a02222 ret  */
  ESPCHK(0x12a02140u, _esp0);
  ESP += 4; return;
}

/* FUN_10002230 @ 0x12a02230 (15 bytes, 7 insns) */
void f_12a02230(void) {
  FTRACE(0x12a02230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02230 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02231 mov ebp, esp */
  EBP = (ESP);
  /* 12a02233 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12a02235 call 0x12a06320 */
  push32(0x12a0223au); f_12a06320();
  /* 12a0223a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0223d pop ebp */
  EBP = (pop32());
  /* 12a0223e ret  */
  ESPCHK(0x12a02230u, _esp0);
  ESP += 4; return;
}

/* FUN_10002240 @ 0x12a02240 (15 bytes, 7 insns) */
void f_12a02240(void) {
  FTRACE(0x12a02240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02240 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02241 mov ebp, esp */
  EBP = (ESP);
  /* 12a02243 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12a02245 call 0x12a063c0 */
  push32(0x12a0224au); f_12a063c0();
  /* 12a0224a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0224d pop ebp */
  EBP = (pop32());
  /* 12a0224e ret  */
  ESPCHK(0x12a02240u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12a02250 (37 bytes, 16 insns) */
void f_12a02250(void) {
  FTRACE(0x12a02250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02250 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02251 mov ebp, esp */
  EBP = (ESP);
L_12a02253:;
  /* 12a02253 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02256 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02259 jae 0x12a02273 */
  if (!C.cf) goto L_12a02273;
  /* 12a0225b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0225e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02261 je 0x12a02268 */
  if (C.zf) goto L_12a02268;
  /* 12a02263 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02266 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12a02268u);
L_12a02268:;
  /* 12a02268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0226b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0226e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a02271 jmp 0x12a02253 */
  goto L_12a02253;
L_12a02273:;
  /* 12a02273 pop ebp */
  EBP = (pop32());
  /* 12a02274 ret  */
  ESPCHK(0x12a02250u, _esp0);
  ESP += 4; return;
}

/* FUN_10002280 @ 0x12a02280 (130 bytes, 42 insns) */
void f_12a02280(void) {
  FTRACE(0x12a02280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02280 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02281 mov ebp, esp */
  EBP = (ESP);
  /* 12a02283 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02284 call 0x12a06240 */
  push32(0x12a02289u); f_12a06240();
  /* 12a02289 call dword ptr [0x12a30284] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30284))), 0x12a0228fu);
  /* 12a0228f mov dword ptr [0x12a2ca5c], eax */
  w32((uint32_t)(0x12a2ca5c), (EAX));
  /* 12a02294 cmp dword ptr [0x12a2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0229b jne 0x12a022a1 */
  if (!C.zf) goto L_12a022a1;
  /* 12a0229d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0229f jmp 0x12a022fe */
  goto L_12a022fe;
L_12a022a1:;
  /* 12a022a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12a022a3 push 0x12a29370 */
  push32((uint32_t)(0x12a29370u));
  /* 12a022a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a022aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12a022ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12a022ae call 0x12a02d30 */
  push32(0x12a022b3u); f_12a02d30();
  /* 12a022b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a022b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a022b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a022bd je 0x12a022d4 */
  if (C.zf) goto L_12a022d4;
  /* 12a022bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a022c2 push eax */
  push32((uint32_t)(EAX));
  /* 12a022c3 mov ecx, dword ptr [0x12a2ca5c] */
  ECX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a022c9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a022ca call dword ptr [0x12a30280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30280))), 0x12a022d0u);
  /* 12a022d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a022d2 jne 0x12a022d8 */
  if (!C.zf) goto L_12a022d8;
L_12a022d4:;
  /* 12a022d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a022d6 jmp 0x12a022fe */
  goto L_12a022fe;
L_12a022d8:;
  /* 12a022d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a022db push edx */
  push32((uint32_t)(EDX));
  /* 12a022dc call 0x12a02340 */
  push32(0x12a022e1u); f_12a02340();
  /* 12a022e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a022e4 call dword ptr [0x12a3027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3027c))), 0x12a022eau);
  /* 12a022ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a022ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a022ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a022f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12a022f9 mov eax, 1 */
  EAX = (0x1u);
L_12a022fe:;
  /* 12a022fe mov esp, ebp */
  ESP = (EBP);
  /* 12a02300 pop ebp */
  EBP = (pop32());
  /* 12a02301 ret  */
  ESPCHK(0x12a02280u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x12a02310 (41 bytes, 11 insns) */
void f_12a02310(void) {
  FTRACE(0x12a02310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02310 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02311 mov ebp, esp */
  EBP = (ESP);
  /* 12a02313 call 0x12a06280 */
  push32(0x12a02318u); f_12a06280();
  /* 12a02318 cmp dword ptr [0x12a2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0231f je 0x12a02337 */
  if (C.zf) goto L_12a02337;
  /* 12a02321 mov eax, dword ptr [0x12a2ca5c] */
  EAX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a02326 push eax */
  push32((uint32_t)(EAX));
  /* 12a02327 call dword ptr [0x12a30288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30288))), 0x12a0232du);
  /* 12a0232d mov dword ptr [0x12a2ca5c], 0xffffffff */
  w32((uint32_t)(0x12a2ca5c), (0xffffffffu));
L_12a02337:;
  /* 12a02337 pop ebp */
  EBP = (pop32());
  /* 12a02338 ret  */
  ESPCHK(0x12a02310u, _esp0);
  ESP += 4; return;
}

/* FUN_10002340 @ 0x12a02340 (25 bytes, 8 insns) */
void f_12a02340(void) {
  FTRACE(0x12a02340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02340 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02341 mov ebp, esp */
  EBP = (ESP);
  /* 12a02343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02346 mov dword ptr [eax + 0x50], 0x12a2cc00 */
  w32((uint32_t)(EAX + 0x50), (0x12a2cc00u));
  /* 12a0234d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02350 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12a02357 pop ebp */
  EBP = (pop32());
  /* 12a02358 ret  */
  ESPCHK(0x12a02340u, _esp0);
  ESP += 4; return;
}

/* FUN_10002360 @ 0x12a02360 (152 bytes, 48 insns) */
void f_12a02360(void) {
  FTRACE(0x12a02360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02360 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02361 mov ebp, esp */
  EBP = (ESP);
  /* 12a02363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02366 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0236cu);
  /* 12a0236c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0236f mov eax, dword ptr [0x12a2ca5c] */
  EAX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a02374 push eax */
  push32((uint32_t)(EAX));
  /* 12a02375 call dword ptr [0x12a30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30290))), 0x12a0237bu);
  /* 12a0237b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0237e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02382 jne 0x12a023e7 */
  if (!C.zf) goto L_12a023e7;
  /* 12a02384 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12a02389 push 0x12a29370 */
  push32((uint32_t)(0x12a29370u));
  /* 12a0238e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02390 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12a02392 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02394 call 0x12a02d30 */
  push32(0x12a02399u); f_12a02d30();
  /* 12a02399 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0239c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0239f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a023a3 je 0x12a023dd */
  if (C.zf) goto L_12a023dd;
  /* 12a023a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a023a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a023a9 mov edx, dword ptr [0x12a2ca5c] */
  EDX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a023af push edx */
  push32((uint32_t)(EDX));
  /* 12a023b0 call dword ptr [0x12a30280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30280))), 0x12a023b6u);
  /* 12a023b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a023b8 je 0x12a023dd */
  if (C.zf) goto L_12a023dd;
  /* 12a023ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a023bd push eax */
  push32((uint32_t)(EAX));
  /* 12a023be call 0x12a02340 */
  push32(0x12a023c3u); f_12a02340();
  /* 12a023c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a023c6 call dword ptr [0x12a3027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3027c))), 0x12a023ccu);
  /* 12a023cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a023cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a023d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a023d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12a023db jmp 0x12a023e7 */
  goto L_12a023e7;
L_12a023dd:;
  /* 12a023dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12a023df call 0x12a01890 */
  push32(0x12a023e4u); f_12a01890();
  /* 12a023e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a023e7:;
  /* 12a023e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a023ea push eax */
  push32((uint32_t)(EAX));
  /* 12a023eb call dword ptr [0x12a3028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3028c))), 0x12a023f1u);
  /* 12a023f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a023f4 mov esp, ebp */
  ESP = (EBP);
  /* 12a023f6 pop ebp */
  EBP = (pop32());
  /* 12a023f7 ret  */
  ESPCHK(0x12a02360u, _esp0);
  ESP += 4; return;
}

/* FUN_10002400 @ 0x12a02400 (263 bytes, 86 insns) */
void f_12a02400(void) {
  FTRACE(0x12a02400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02400 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02401 mov ebp, esp */
  EBP = (ESP);
  /* 12a02403 cmp dword ptr [0x12a2ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0240a je 0x12a02505 */
  if (C.zf) goto L_12a02505;
  /* 12a02410 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02414 jne 0x12a02425 */
  if (!C.zf) goto L_12a02425;
  /* 12a02416 mov eax, dword ptr [0x12a2ca5c] */
  EAX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a0241b push eax */
  push32((uint32_t)(EAX));
  /* 12a0241c call dword ptr [0x12a30290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30290))), 0x12a02422u);
  /* 12a02422 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a02425:;
  /* 12a02425 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02429 je 0x12a024f6 */
  if (C.zf) goto L_12a024f6;
  /* 12a0242f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02432 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02436 je 0x12a02449 */
  if (C.zf) goto L_12a02449;
  /* 12a02438 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0243a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0243d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12a02440 push eax */
  push32((uint32_t)(EAX));
  /* 12a02441 call 0x12a033b0 */
  push32(0x12a02446u); f_12a033b0();
  /* 12a02446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a02449:;
  /* 12a02449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0244c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02450 je 0x12a02463 */
  if (C.zf) goto L_12a02463;
  /* 12a02452 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02454 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02457 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12a0245a push eax */
  push32((uint32_t)(EAX));
  /* 12a0245b call 0x12a033b0 */
  push32(0x12a02460u); f_12a033b0();
  /* 12a02460 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a02463:;
  /* 12a02463 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02466 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0246a je 0x12a0247d */
  if (C.zf) goto L_12a0247d;
  /* 12a0246c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0246e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02471 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12a02474 push eax */
  push32((uint32_t)(EAX));
  /* 12a02475 call 0x12a033b0 */
  push32(0x12a0247au); f_12a033b0();
  /* 12a0247a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0247d:;
  /* 12a0247d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02480 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02484 je 0x12a02497 */
  if (C.zf) goto L_12a02497;
  /* 12a02486 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0248b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12a0248e push eax */
  push32((uint32_t)(EAX));
  /* 12a0248f call 0x12a033b0 */
  push32(0x12a02494u); f_12a033b0();
  /* 12a02494 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a02497:;
  /* 12a02497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0249a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0249e je 0x12a024b1 */
  if (C.zf) goto L_12a024b1;
  /* 12a024a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a024a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12a024a8 push eax */
  push32((uint32_t)(EAX));
  /* 12a024a9 call 0x12a033b0 */
  push32(0x12a024aeu); f_12a033b0();
  /* 12a024ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a024b1:;
  /* 12a024b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a024b8 je 0x12a024cb */
  if (C.zf) goto L_12a024cb;
  /* 12a024ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12a024bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12a024c2 push eax */
  push32((uint32_t)(EAX));
  /* 12a024c3 call 0x12a033b0 */
  push32(0x12a024c8u); f_12a033b0();
  /* 12a024c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a024cb:;
  /* 12a024cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024ce cmp dword ptr [ecx + 0x50], 0x12a2cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12a2cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a024d5 je 0x12a024e8 */
  if (C.zf) goto L_12a024e8;
  /* 12a024d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a024d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12a024df push eax */
  push32((uint32_t)(EAX));
  /* 12a024e0 call 0x12a033b0 */
  push32(0x12a024e5u); f_12a033b0();
  /* 12a024e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a024e8:;
  /* 12a024e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a024ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a024ed push ecx */
  push32((uint32_t)(ECX));
  /* 12a024ee call 0x12a033b0 */
  push32(0x12a024f3u); f_12a033b0();
  /* 12a024f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a024f6:;
  /* 12a024f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a024f8 mov edx, dword ptr [0x12a2ca5c] */
  EDX = (r32((uint32_t)(0x12a2ca5c)));
  /* 12a024fe push edx */
  push32((uint32_t)(EDX));
  /* 12a024ff call dword ptr [0x12a30280] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30280))), 0x12a02505u);
L_12a02505:;
  /* 12a02505 pop ebp */
  EBP = (pop32());
  /* 12a02506 ret  */
  ESPCHK(0x12a02400u, _esp0);
  ESP += 4; return;
}

/* FUN_10002510 @ 0x12a02510 (11 bytes, 5 insns) */
void f_12a02510(void) {
  FTRACE(0x12a02510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02510 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02511 mov ebp, esp */
  EBP = (ESP);
  /* 12a02513 call dword ptr [0x12a3027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3027c))), 0x12a02519u);
  /* 12a02519 pop ebp */
  EBP = (pop32());
  /* 12a0251a ret  */
  ESPCHK(0x12a02510u, _esp0);
  ESP += 4; return;
}

/* FUN_10002520 @ 0x12a02520 (11 bytes, 5 insns) */
void f_12a02520(void) {
  FTRACE(0x12a02520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02520 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02521 mov ebp, esp */
  EBP = (ESP);
  /* 12a02523 call dword ptr [0x12a30298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30298))), 0x12a02529u);
  /* 12a02529 pop ebp */
  EBP = (pop32());
  /* 12a0252a ret  */
  ESPCHK(0x12a02520u, _esp0);
  ESP += 4; return;
}

/* FUN_10002530 @ 0x12a02530 (804 bytes, 236 insns) */
void f_12a02530(void) {
  FTRACE(0x12a02530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02530 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02531 mov ebp, esp */
  EBP = (ESP);
  /* 12a02533 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02536 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12a0253b push 0x12a2937c */
  push32((uint32_t)(0x12a2937cu));
  /* 12a02540 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02542 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12a02547 call 0x12a02920 */
  push32(0x12a0254cu); f_12a02920();
  /* 12a0254c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0254f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12a02552 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02556 jne 0x12a02562 */
  if (!C.zf) goto L_12a02562;
  /* 12a02558 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12a0255a call 0x12a01890 */
  push32(0x12a0255fu); f_12a01890();
  /* 12a0255f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a02562:;
  /* 12a02562 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02565 mov dword ptr [0x12a2fe60], eax */
  w32((uint32_t)(0x12a2fe60), (EAX));
  /* 12a0256a mov dword ptr [0x12a2ff9c], 0x20 */
  w32((uint32_t)(0x12a2ff9c), (0x20u));
  /* 12a02574 jmp 0x12a0257f */
  goto L_12a0257f;
L_12a02576:;
  /* 12a02576 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02579 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0257c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_12a0257f:;
  /* 12a0257f mov edx, dword ptr [0x12a2fe60] */
  EDX = (r32((uint32_t)(0x12a2fe60)));
  /* 12a02585 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0258b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0258e jae 0x12a025b3 */
  if (!C.cf) goto L_12a025b3;
  /* 12a02590 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02593 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12a02597 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0259a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12a025a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a025a3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12a025a7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a025aa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12a025b1 jmp 0x12a02576 */
  goto L_12a02576;
L_12a025b3:;
  /* 12a025b3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12a025b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a025b7 call dword ptr [0x12a302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a4))), 0x12a025bdu);
  /* 12a025bd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12a025c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a025c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a025c8 je 0x12a02755 */
  if (C.zf) goto L_12a02755;
  /* 12a025ce cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a025d2 je 0x12a02755 */
  if (C.zf) goto L_12a02755;
  /* 12a025d8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a025db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a025dd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12a025e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a025e3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a025e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a025e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a025ec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a025ef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12a025f2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a025f9 jge 0x12a02603 */
  if ((C.sf==C.of)) goto L_12a02603;
  /* 12a025fb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12a025fe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12a02601 jmp 0x12a0260a */
  goto L_12a0260a;
L_12a02603:;
  /* 12a02603 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12a0260a:;
  /* 12a0260a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12a0260d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12a02610 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12a02617 jmp 0x12a02622 */
  goto L_12a02622;
L_12a02619:;
  /* 12a02619 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12a0261c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0261f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12a02622:;
  /* 12a02622 mov ecx, dword ptr [0x12a2ff9c] */
  ECX = (r32((uint32_t)(0x12a2ff9c)));
  /* 12a02628 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0262b jge 0x12a026c2 */
  if ((C.sf==C.of)) goto L_12a026c2;
  /* 12a02631 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12a02636 push 0x12a2937c */
  push32((uint32_t)(0x12a2937cu));
  /* 12a0263b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0263d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12a02642 call 0x12a02920 */
  push32(0x12a02647u); f_12a02920();
  /* 12a02647 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0264a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12a0264d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02651 jne 0x12a0265e */
  if (!C.zf) goto L_12a0265e;
  /* 12a02653 mov edx, dword ptr [0x12a2ff9c] */
  EDX = (r32((uint32_t)(0x12a2ff9c)));
  /* 12a02659 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12a0265c jmp 0x12a026c2 */
  goto L_12a026c2;
L_12a0265e:;
  /* 12a0265e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12a02661 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02664 mov dword ptr [eax*4 + 0x12a2fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12a2fe60), (ECX));
  /* 12a0266b mov edx, dword ptr [0x12a2ff9c] */
  EDX = (r32((uint32_t)(0x12a2ff9c)));
  /* 12a02671 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02674 mov dword ptr [0x12a2ff9c], edx */
  w32((uint32_t)(0x12a2ff9c), (EDX));
  /* 12a0267a jmp 0x12a02685 */
  goto L_12a02685;
L_12a0267c:;
  /* 12a0267c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0267f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02682 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12a02685:;
  /* 12a02685 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12a02688 mov edx, dword ptr [ecx*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0268f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02695 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02698 jae 0x12a026bd */
  if (!C.cf) goto L_12a026bd;
  /* 12a0269a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0269d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12a026a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a026a4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12a026aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a026ad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12a026b1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a026b4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12a026bb jmp 0x12a0267c */
  goto L_12a0267c;
L_12a026bd:;
  /* 12a026bd jmp 0x12a02619 */
  goto L_12a02619;
L_12a026c2:;
  /* 12a026c2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12a026c9 jmp 0x12a026e6 */
  goto L_12a026e6;
L_12a026cb:;
  /* 12a026cb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a026ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a026d1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12a026d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a026d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a026da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a026dd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12a026e0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a026e3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12a026e6:;
  /* 12a026e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a026e9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a026ec jge 0x12a02755 */
  if ((C.sf==C.of)) goto L_12a02755;
  /* 12a026ee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12a026f1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a026f4 je 0x12a02750 */
  if (C.zf) goto L_12a02750;
  /* 12a026f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a026f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a026fc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a026ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a02701 je 0x12a02750 */
  if (C.zf) goto L_12a02750;
  /* 12a02703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02706 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a02709 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0270c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0270e jne 0x12a02720 */
  if (!C.zf) goto L_12a02720;
  /* 12a02710 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12a02713 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a02715 push edx */
  push32((uint32_t)(EDX));
  /* 12a02716 call dword ptr [0x12a302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a0))), 0x12a0271cu);
  /* 12a0271c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0271e je 0x12a02750 */
  if (C.zf) goto L_12a02750;
L_12a02720:;
  /* 12a02720 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a02723 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a02726 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a02729 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0272c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0272f mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a02736 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02738 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12a0273b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0273e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12a02741 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a02743 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a02745 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02748 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0274b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0274d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12a02750:;
  /* 12a02750 jmp 0x12a026cb */
  goto L_12a026cb;
L_12a02755:;
  /* 12a02755 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12a0275c jmp 0x12a02767 */
  goto L_12a02767;
L_12a0275e:;
  /* 12a0275e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a02761 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02764 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12a02767:;
  /* 12a02767 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0276b jge 0x12a02844 */
  if ((C.sf==C.of)) goto L_12a02844;
  /* 12a02771 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a02774 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a02777 mov edx, dword ptr [0x12a2fe60] */
  EDX = (r32((uint32_t)(0x12a2fe60)));
  /* 12a0277d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0277f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12a02782 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02785 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02788 jne 0x12a02830 */
  if (!C.zf) goto L_12a02830;
  /* 12a0278e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02791 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12a02795 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02799 jne 0x12a027a4 */
  if (!C.zf) goto L_12a027a4;
  /* 12a0279b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12a027a2 jmp 0x12a027b4 */
  goto L_12a027b4;
L_12a027a4:;
  /* 12a027a4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12a027a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a027aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a027ac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a027ae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a027b1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12a027b4:;
  /* 12a027b4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12a027b7 push eax */
  push32((uint32_t)(EAX));
  /* 12a027b8 call dword ptr [0x12a30250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30250))), 0x12a027beu);
  /* 12a027be mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12a027c1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a027c5 je 0x12a0281f */
  if (C.zf) goto L_12a0281f;
  /* 12a027c7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a027ca push ecx */
  push32((uint32_t)(ECX));
  /* 12a027cb call dword ptr [0x12a302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a0))), 0x12a027d1u);
  /* 12a027d1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12a027d4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a027d8 je 0x12a0281f */
  if (C.zf) goto L_12a0281f;
  /* 12a027da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a027dd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a027e0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a027e2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12a027e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a027eb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a027ee jne 0x12a02800 */
  if (!C.zf) goto L_12a02800;
  /* 12a027f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a027f3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12a027f6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12a027f8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a027fb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12a027fe jmp 0x12a0281d */
  goto L_12a0281d;
L_12a02800:;
  /* 12a02800 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12a02803 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a02809 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0280c jne 0x12a0281d */
  if (!C.zf) goto L_12a0281d;
  /* 12a0280e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02811 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a02814 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12a02817 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0281a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12a0281d:;
  /* 12a0281d jmp 0x12a0282e */
  goto L_12a0282e;
L_12a0281f:;
  /* 12a0281f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02822 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a02825 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12a02828 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0282b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12a0282e:;
  /* 12a0282e jmp 0x12a0283f */
  goto L_12a0283f;
L_12a02830:;
  /* 12a02830 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a02833 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a02836 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12a02839 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0283c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12a0283f:;
  /* 12a0283f jmp 0x12a0275e */
  goto L_12a0275e;
L_12a02844:;
  /* 12a02844 mov eax, dword ptr [0x12a2ff9c] */
  EAX = (r32((uint32_t)(0x12a2ff9c)));
  /* 12a02849 push eax */
  push32((uint32_t)(EAX));
  /* 12a0284a call dword ptr [0x12a3029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3029c))), 0x12a02850u);
  /* 12a02850 mov esp, ebp */
  ESP = (EBP);
  /* 12a02852 pop ebp */
  EBP = (pop32());
  /* 12a02853 ret  */
  ESPCHK(0x12a02530u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12a02860 (155 bytes, 45 insns) */
void f_12a02860(void) {
  FTRACE(0x12a02860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02860 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02861 mov ebp, esp */
  EBP = (ESP);
  /* 12a02863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02866 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0286d jmp 0x12a02878 */
  goto L_12a02878;
L_12a0286f:;
  /* 12a0286f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02872 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02875 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a02878:;
  /* 12a02878 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0287c jge 0x12a028f7 */
  if ((C.sf==C.of)) goto L_12a028f7;
  /* 12a0287e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02881 cmp dword ptr [ecx*4 + 0x12a2fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12a2fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02889 je 0x12a028f2 */
  if (C.zf) goto L_12a028f2;
  /* 12a0288b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0288e mov eax, dword ptr [edx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a02895 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a02898 jmp 0x12a028a3 */
  goto L_12a028a3;
L_12a0289a:;
  /* 12a0289a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0289d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a028a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a028a3:;
  /* 12a028a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a028a6 mov eax, dword ptr [edx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a028ad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a028b2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a028b5 jae 0x12a028cf */
  if (!C.cf) goto L_12a028cf;
  /* 12a028b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a028ba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a028be je 0x12a028cd */
  if (C.zf) goto L_12a028cd;
  /* 12a028c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a028c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a028c6 push edx */
  push32((uint32_t)(EDX));
  /* 12a028c7 call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a028cdu);
L_12a028cd:;
  /* 12a028cd jmp 0x12a0289a */
  goto L_12a0289a;
L_12a028cf:;
  /* 12a028cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12a028d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a028d4 mov ecx, dword ptr [eax*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a028db push ecx */
  push32((uint32_t)(ECX));
  /* 12a028dc call 0x12a033b0 */
  push32(0x12a028e1u); f_12a033b0();
  /* 12a028e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a028e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a028e7 mov dword ptr [edx*4 + 0x12a2fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x12a2fe60), (0x0u));
L_12a028f2:;
  /* 12a028f2 jmp 0x12a0286f */
  goto L_12a0286f;
L_12a028f7:;
  /* 12a028f7 mov esp, ebp */
  ESP = (EBP);
  /* 12a028f9 pop ebp */
  EBP = (pop32());
  /* 12a028fa ret  */
  ESPCHK(0x12a02860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x12a02900 (29 bytes, 13 insns) */
void f_12a02900(void) {
  FTRACE(0x12a02900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02900 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02901 mov ebp, esp */
  EBP = (ESP);
  /* 12a02903 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02905 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02907 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02909 mov eax, dword ptr [0x12a2e670] */
  EAX = (r32((uint32_t)(0x12a2e670)));
  /* 12a0290e push eax */
  push32((uint32_t)(EAX));
  /* 12a0290f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02912 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02913 call 0x12a02970 */
  push32(0x12a02918u); f_12a02970();
  /* 12a02918 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0291b pop ebp */
  EBP = (pop32());
  /* 12a0291c ret  */
  ESPCHK(0x12a02900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002920 @ 0x12a02920 (35 bytes, 16 insns) */
void f_12a02920(void) {
  FTRACE(0x12a02920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02920 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02921 mov ebp, esp */
  EBP = (ESP);
  /* 12a02923 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02926 push eax */
  push32((uint32_t)(EAX));
  /* 12a02927 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0292a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0292b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0292e push edx */
  push32((uint32_t)(EDX));
  /* 12a0292f mov eax, dword ptr [0x12a2e670] */
  EAX = (r32((uint32_t)(0x12a2e670)));
  /* 12a02934 push eax */
  push32((uint32_t)(EAX));
  /* 12a02935 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02938 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02939 call 0x12a02970 */
  push32(0x12a0293eu); f_12a02970();
  /* 12a0293e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02941 pop ebp */
  EBP = (pop32());
  /* 12a02942 ret  */
  ESPCHK(0x12a02920u, _esp0);
  ESP += 4; return;
}

/* FUN_10002950 @ 0x12a02950 (27 bytes, 13 insns) */
void f_12a02950(void) {
  FTRACE(0x12a02950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02950 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02951 mov ebp, esp */
  EBP = (ESP);
  /* 12a02953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02957 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02959 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0295c push eax */
  push32((uint32_t)(EAX));
  /* 12a0295d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02960 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02961 call 0x12a02970 */
  push32(0x12a02966u); f_12a02970();
  /* 12a02966 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02969 pop ebp */
  EBP = (pop32());
  /* 12a0296a ret  */
  ESPCHK(0x12a02950u, _esp0);
  ESP += 4; return;
}

/* FUN_10002970 @ 0x12a02970 (94 bytes, 38 insns) */
void f_12a02970(void) {
  FTRACE(0x12a02970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02970 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02971 mov ebp, esp */
  EBP = (ESP);
  /* 12a02973 push ecx */
  push32((uint32_t)(ECX));
L_12a02974:;
  /* 12a02974 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a02976 call 0x12a06320 */
  push32(0x12a0297bu); f_12a06320();
  /* 12a0297b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0297e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02981 push eax */
  push32((uint32_t)(EAX));
  /* 12a02982 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02985 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02986 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02989 push edx */
  push32((uint32_t)(EDX));
  /* 12a0298a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0298d push eax */
  push32((uint32_t)(EAX));
  /* 12a0298e call 0x12a029f0 */
  push32(0x12a02993u); f_12a029f0();
  /* 12a02993 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02996 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a02999 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a0299b call 0x12a063c0 */
  push32(0x12a029a0u); f_12a063c0();
  /* 12a029a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a029a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a029a7 jne 0x12a029af */
  if (!C.zf) goto L_12a029af;
  /* 12a029a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a029ad jne 0x12a029b4 */
  if (!C.zf) goto L_12a029b4;
L_12a029af:;
  /* 12a029af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a029b2 jmp 0x12a029ca */
  goto L_12a029ca;
L_12a029b4:;
  /* 12a029b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a029b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a029b8 call 0x12a06660 */
  push32(0x12a029bdu); f_12a06660();
  /* 12a029bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a029c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a029c2 jne 0x12a029c8 */
  if (!C.zf) goto L_12a029c8;
  /* 12a029c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a029c6 jmp 0x12a029ca */
  goto L_12a029ca;
L_12a029c8:;
  /* 12a029c8 jmp 0x12a02974 */
  goto L_12a02974;
L_12a029ca:;
  /* 12a029ca mov esp, ebp */
  ESP = (EBP);
  /* 12a029cc pop ebp */
  EBP = (pop32());
  /* 12a029cd ret  */
  ESPCHK(0x12a02970u, _esp0);
  ESP += 4; return;
}

/* FUN_100029d0 @ 0x12a029d0 (23 bytes, 11 insns) */
void f_12a029d0(void) {
  FTRACE(0x12a029d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a029d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a029d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a029d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a029d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a029d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a029d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a029dc push eax */
  push32((uint32_t)(EAX));
  /* 12a029dd call 0x12a029f0 */
  push32(0x12a029e2u); f_12a029f0();
  /* 12a029e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a029e5 pop ebp */
  EBP = (pop32());
  /* 12a029e6 ret  */
  ESPCHK(0x12a029d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029f0 @ 0x12a029f0 (787 bytes, 254 insns) */
void f_12a029f0(void) {
  FTRACE(0x12a029f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a029f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a029f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a029f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a029f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a029f7 push esi */
  push32((uint32_t)(ESI));
  /* 12a029f8 push edi */
  push32((uint32_t)(EDI));
  /* 12a029f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a02a00 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a02a05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a02a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02a0a je 0x12a02a3c */
  if (C.zf) goto L_12a02a3c;
L_12a02a0c:;
  /* 12a02a0c call 0x12a03ac0 */
  push32(0x12a02a11u); f_12a03ac0();
  /* 12a02a11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02a13 jne 0x12a02a36 */
  if (!C.zf) goto L_12a02a36;
  /* 12a02a15 push 0x12a29470 */
  push32((uint32_t)(0x12a29470u));
  /* 12a02a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12a02a21 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a02a26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02a28 call 0x12a019e0 */
  push32(0x12a02a2du); f_12a019e0();
  /* 12a02a2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02a30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02a33 jne 0x12a02a36 */
  if (!C.zf) goto L_12a02a36;
  /* 12a02a35 int3  */
  x86_unimpl("int3 @ 0x12a02a35");
L_12a02a36:;
  /* 12a02a36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a02a38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a02a3a jne 0x12a02a0c */
  if (!C.zf) goto L_12a02a0c;
L_12a02a3c:;
  /* 12a02a3c mov edx, dword ptr [0x12a2ca88] */
  EDX = (r32((uint32_t)(0x12a2ca88)));
  /* 12a02a42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a02a45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02a48 cmp eax, dword ptr [0x12a2ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02a4e jne 0x12a02a51 */
  if (!C.zf) goto L_12a02a51;
  /* 12a02a50 int3  */
  x86_unimpl("int3 @ 0x12a02a50");
L_12a02a51:;
  /* 12a02a51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02a54 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02a55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02a58 push edx */
  push32((uint32_t)(EDX));
  /* 12a02a59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02a5c push eax */
  push32((uint32_t)(EAX));
  /* 12a02a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02a64 push edx */
  push32((uint32_t)(EDX));
  /* 12a02a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02a69 call dword ptr [0x12a2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2cc90))), 0x12a02a6fu);
  /* 12a02a6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02a74 jne 0x12a02ad4 */
  if (!C.zf) goto L_12a02ad4;
  /* 12a02a76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02a7a je 0x12a02aa7 */
  if (C.zf) goto L_12a02aa7;
L_12a02a7c:;
  /* 12a02a7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02a7f push eax */
  push32((uint32_t)(EAX));
  /* 12a02a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02a83 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02a84 push 0x12a2942c */
  push32((uint32_t)(0x12a2942cu));
  /* 12a02a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02a91 call 0x12a019e0 */
  push32(0x12a02a96u); f_12a019e0();
  /* 12a02a96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02a99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02a9c jne 0x12a02a9f */
  if (!C.zf) goto L_12a02a9f;
  /* 12a02a9e int3  */
  x86_unimpl("int3 @ 0x12a02a9e");
L_12a02a9f:;
  /* 12a02a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a02aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a02aa3 jne 0x12a02a7c */
  if (!C.zf) goto L_12a02a7c;
  /* 12a02aa5 jmp 0x12a02acd */
  goto L_12a02acd;
L_12a02aa7:;
  /* 12a02aa7 push 0x12a29408 */
  push32((uint32_t)(0x12a29408u));
  /* 12a02aac push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a02ab1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ab9 call 0x12a019e0 */
  push32(0x12a02abeu); f_12a019e0();
  /* 12a02abe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02ac1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02ac4 jne 0x12a02ac7 */
  if (!C.zf) goto L_12a02ac7;
  /* 12a02ac6 int3  */
  x86_unimpl("int3 @ 0x12a02ac6");
L_12a02ac7:;
  /* 12a02ac7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02ac9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02acb jne 0x12a02aa7 */
  if (!C.zf) goto L_12a02aa7;
L_12a02acd:;
  /* 12a02acd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02acf jmp 0x12a02cfc */
  goto L_12a02cfc;
L_12a02ad4:;
  /* 12a02ad4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02ad7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a02add cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02ae0 je 0x12a02af6 */
  if (C.zf) goto L_12a02af6;
  /* 12a02ae2 mov edx, dword ptr [0x12a2ca84] */
  EDX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a02ae8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a02aeb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a02aed jne 0x12a02af6 */
  if (!C.zf) goto L_12a02af6;
  /* 12a02aef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12a02af6:;
  /* 12a02af6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02afa ja 0x12a02b07 */
  if ((!C.cf&&!C.zf)) goto L_12a02b07;
  /* 12a02afc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02aff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02b02 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b05 jbe 0x12a02b33 */
  if ((C.cf||C.zf)) goto L_12a02b33;
L_12a02b07:;
  /* 12a02b07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02b0a push ecx */
  push32((uint32_t)(ECX));
  /* 12a02b0b push 0x12a293e0 */
  push32((uint32_t)(0x12a293e0u));
  /* 12a02b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b16 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02b18 call 0x12a019e0 */
  push32(0x12a02b1du); f_12a019e0();
  /* 12a02b1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02b20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b23 jne 0x12a02b26 */
  if (!C.zf) goto L_12a02b26;
  /* 12a02b25 int3  */
  x86_unimpl("int3 @ 0x12a02b25");
L_12a02b26:;
  /* 12a02b26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a02b28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a02b2a jne 0x12a02b07 */
  if (!C.zf) goto L_12a02b07;
  /* 12a02b2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02b2e jmp 0x12a02cfc */
  goto L_12a02cfc;
L_12a02b33:;
  /* 12a02b33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02b36 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a02b3b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b3e je 0x12a02b80 */
  if (C.zf) goto L_12a02b80;
  /* 12a02b40 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b44 je 0x12a02b80 */
  if (C.zf) goto L_12a02b80;
  /* 12a02b46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02b49 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a02b4f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b52 je 0x12a02b80 */
  if (C.zf) goto L_12a02b80;
  /* 12a02b54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b58 je 0x12a02b80 */
  if (C.zf) goto L_12a02b80;
L_12a02b5a:;
  /* 12a02b5a push 0x12a293ac */
  push32((uint32_t)(0x12a293acu));
  /* 12a02b5f push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a02b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02b6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02b6c call 0x12a019e0 */
  push32(0x12a02b71u); f_12a019e0();
  /* 12a02b71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02b74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b77 jne 0x12a02b7a */
  if (!C.zf) goto L_12a02b7a;
  /* 12a02b79 int3  */
  x86_unimpl("int3 @ 0x12a02b79");
L_12a02b7a:;
  /* 12a02b7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a02b7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a02b7e jne 0x12a02b5a */
  if (!C.zf) goto L_12a02b5a;
L_12a02b80:;
  /* 12a02b80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02b83 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02b86 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a02b89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a02b8c push ecx */
  push32((uint32_t)(ECX));
  /* 12a02b8d call 0x12a06770 */
  push32(0x12a02b92u); f_12a06770();
  /* 12a02b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02b95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a02b98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02b9c jne 0x12a02ba5 */
  if (!C.zf) goto L_12a02ba5;
  /* 12a02b9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02ba0 jmp 0x12a02cfc */
  goto L_12a02cfc;
L_12a02ba5:;
  /* 12a02ba5 mov edx, dword ptr [0x12a2ca88] */
  EDX = (r32((uint32_t)(0x12a2ca88)));
  /* 12a02bab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02bae mov dword ptr [0x12a2ca88], edx */
  w32((uint32_t)(0x12a2ca88), (EDX));
  /* 12a02bb4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02bb8 je 0x12a02c03 */
  if (C.zf) goto L_12a02c03;
  /* 12a02bba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bbd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a02bc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bc6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12a02bcd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bd0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12a02bd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bda mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12a02be1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02be4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02be7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12a02bea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12a02bf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02bf7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12a02bfe jmp 0x12a02ca3 */
  goto L_12a02ca3;
L_12a02c03:;
  /* 12a02c03 mov edx, dword ptr [0x12a2e4d0] */
  EDX = (r32((uint32_t)(0x12a2e4d0)));
  /* 12a02c09 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02c0c mov dword ptr [0x12a2e4d0], edx */
  w32((uint32_t)(0x12a2e4d0), (EDX));
  /* 12a02c12 mov eax, dword ptr [0x12a2e4d8] */
  EAX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a02c17 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02c1a mov dword ptr [0x12a2e4d8], eax */
  w32((uint32_t)(0x12a2e4d8), (EAX));
  /* 12a02c1f mov ecx, dword ptr [0x12a2e4d8] */
  ECX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a02c25 cmp ecx, dword ptr [0x12a2e4dc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02c2b jbe 0x12a02c39 */
  if ((C.cf||C.zf)) goto L_12a02c39;
  /* 12a02c2d mov edx, dword ptr [0x12a2e4d8] */
  EDX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a02c33 mov dword ptr [0x12a2e4dc], edx */
  w32((uint32_t)(0x12a2e4dc), (EDX));
L_12a02c39:;
  /* 12a02c39 cmp dword ptr [0x12a2e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02c40 je 0x12a02c4f */
  if (C.zf) goto L_12a02c4f;
  /* 12a02c42 mov eax, dword ptr [0x12a2e4d4] */
  EAX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a02c47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12a02c4d jmp 0x12a02c58 */
  goto L_12a02c58;
L_12a02c4f:;
  /* 12a02c4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c52 mov dword ptr [0x12a2e4cc], edx */
  w32((uint32_t)(0x12a2e4cc), (EDX));
L_12a02c58:;
  /* 12a02c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c5b mov ecx, dword ptr [0x12a2e4d4] */
  ECX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a02c61 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a02c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c66 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12a02c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02c73 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12a02c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02c7c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12a02c7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02c85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12a02c88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02c8e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12a02c91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02c97 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12a02c9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02c9d mov dword ptr [0x12a2e4d4], ecx */
  w32((uint32_t)(0x12a2e4d4), (ECX));
L_12a02ca3:;
  /* 12a02ca3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a02ca5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a02ca7 mov dl, byte ptr [0x12a2ca90] */
  DL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a02cad push edx */
  push32((uint32_t)(EDX));
  /* 12a02cae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02cb1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02cb4 push eax */
  push32((uint32_t)(EAX));
  /* 12a02cb5 call 0x12a06690 */
  push32(0x12a02cbau); f_12a06690();
  /* 12a02cba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02cbd push 4 */
  push32((uint32_t)(0x4u));
  /* 12a02cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a02cc1 mov cl, byte ptr [0x12a2ca90] */
  CL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a02cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02cce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12a02cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02cd3 call 0x12a06690 */
  push32(0x12a02cd8u); f_12a06690();
  /* 12a02cd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02cdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02cde push edx */
  push32((uint32_t)(EDX));
  /* 12a02cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02ce1 mov al, byte ptr [0x12a2ca92] */
  AL = (r8((uint32_t)(0x12a2ca92)));
  /* 12a02ce6 push eax */
  push32((uint32_t)(EAX));
  /* 12a02ce7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02cea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02ced push ecx */
  push32((uint32_t)(ECX));
  /* 12a02cee call 0x12a06690 */
  push32(0x12a02cf3u); f_12a06690();
  /* 12a02cf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02cf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02cf9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12a02cfc:;
  /* 12a02cfc pop edi */
  EDI = (pop32());
  /* 12a02cfd pop esi */
  ESI = (pop32());
  /* 12a02cfe pop ebx */
  EBX = (pop32());
  /* 12a02cff mov esp, ebp */
  ESP = (EBP);
  /* 12a02d01 pop ebp */
  EBP = (pop32());
  /* 12a02d02 ret  */
  ESPCHK(0x12a029f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d10 @ 0x12a02d10 (27 bytes, 13 insns) */
void f_12a02d10(void) {
  FTRACE(0x12a02d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02d11 mov ebp, esp */
  EBP = (ESP);
  /* 12a02d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02d17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02d19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02d1c push eax */
  push32((uint32_t)(EAX));
  /* 12a02d1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02d20 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02d21 call 0x12a02d30 */
  push32(0x12a02d26u); f_12a02d30();
  /* 12a02d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02d29 pop ebp */
  EBP = (pop32());
  /* 12a02d2a ret  */
  ESPCHK(0x12a02d10u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12a02d30 (96 bytes, 37 insns) */
void f_12a02d30(void) {
  FTRACE(0x12a02d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02d31 mov ebp, esp */
  EBP = (ESP);
  /* 12a02d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02d36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02d39 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a02d3d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12a02d40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02d43 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02d44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02d47 push edx */
  push32((uint32_t)(EDX));
  /* 12a02d48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02d4b push eax */
  push32((uint32_t)(EAX));
  /* 12a02d4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02d4f push ecx */
  push32((uint32_t)(ECX));
  /* 12a02d50 call 0x12a02920 */
  push32(0x12a02d55u); f_12a02920();
  /* 12a02d55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02d58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a02d5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02d5f je 0x12a02d89 */
  if (C.zf) goto L_12a02d89;
  /* 12a02d61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02d64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a02d67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a02d6a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02d6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a02d70:;
  /* 12a02d70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a02d73 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02d76 jae 0x12a02d89 */
  if (!C.cf) goto L_12a02d89;
  /* 12a02d78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a02d7b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a02d7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a02d81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02d84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a02d87 jmp 0x12a02d70 */
  goto L_12a02d70;
L_12a02d89:;
  /* 12a02d89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02d8c mov esp, ebp */
  ESP = (EBP);
  /* 12a02d8e pop ebp */
  EBP = (pop32());
  /* 12a02d8f ret  */
  ESPCHK(0x12a02d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d90 @ 0x12a02d90 (27 bytes, 13 insns) */
void f_12a02d90(void) {
  FTRACE(0x12a02d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02d91 mov ebp, esp */
  EBP = (ESP);
  /* 12a02d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02d97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02d99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02d9c push eax */
  push32((uint32_t)(EAX));
  /* 12a02d9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02da0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02da1 call 0x12a02db0 */
  push32(0x12a02da6u); f_12a02db0();
  /* 12a02da6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02da9 pop ebp */
  EBP = (pop32());
  /* 12a02daa ret  */
  ESPCHK(0x12a02d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002db0 @ 0x12a02db0 (64 bytes, 27 insns) */
void f_12a02db0(void) {
  FTRACE(0x12a02db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02db1 mov ebp, esp */
  EBP = (ESP);
  /* 12a02db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02db4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a02db6 call 0x12a06320 */
  push32(0x12a02dbbu); f_12a06320();
  /* 12a02dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02dbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02dc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02dc3 push eax */
  push32((uint32_t)(EAX));
  /* 12a02dc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02dc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02dcb push edx */
  push32((uint32_t)(EDX));
  /* 12a02dcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02dcf push eax */
  push32((uint32_t)(EAX));
  /* 12a02dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02dd4 call 0x12a02df0 */
  push32(0x12a02dd9u); f_12a02df0();
  /* 12a02dd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02ddc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a02ddf push 9 */
  push32((uint32_t)(0x9u));
  /* 12a02de1 call 0x12a063c0 */
  push32(0x12a02de6u); f_12a063c0();
  /* 12a02de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02de9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a02dec mov esp, ebp */
  ESP = (EBP);
  /* 12a02dee pop ebp */
  EBP = (pop32());
  /* 12a02def ret  */
  ESPCHK(0x12a02db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002df0 @ 0x12a02df0 (1297 bytes, 431 insns) */
void f_12a02df0(void) {
  FTRACE(0x12a02df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a02df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a02df1 mov ebp, esp */
  EBP = (ESP);
  /* 12a02df3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02df6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a02df7 push esi */
  push32((uint32_t)(ESI));
  /* 12a02df8 push edi */
  push32((uint32_t)(EDI));
  /* 12a02df9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12a02e00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02e04 jne 0x12a02e23 */
  if (!C.zf) goto L_12a02e23;
  /* 12a02e06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02e09 push eax */
  push32((uint32_t)(EAX));
  /* 12a02e0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02e0d push ecx */
  push32((uint32_t)(ECX));
  /* 12a02e0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02e11 push edx */
  push32((uint32_t)(EDX));
  /* 12a02e12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02e15 push eax */
  push32((uint32_t)(EAX));
  /* 12a02e16 call 0x12a02920 */
  push32(0x12a02e1bu); f_12a02920();
  /* 12a02e1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02e1e jmp 0x12a032fa */
  goto L_12a032fa;
L_12a02e23:;
  /* 12a02e23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02e27 je 0x12a02e46 */
  if (C.zf) goto L_12a02e46;
  /* 12a02e29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02e2d jne 0x12a02e46 */
  if (!C.zf) goto L_12a02e46;
  /* 12a02e2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02e32 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02e33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02e36 push edx */
  push32((uint32_t)(EDX));
  /* 12a02e37 call 0x12a033b0 */
  push32(0x12a02e3cu); f_12a033b0();
  /* 12a02e3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02e3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02e41 jmp 0x12a032fa */
  goto L_12a032fa;
L_12a02e46:;
  /* 12a02e46 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a02e4b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a02e4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02e50 je 0x12a02e82 */
  if (C.zf) goto L_12a02e82;
L_12a02e52:;
  /* 12a02e52 call 0x12a03ac0 */
  push32(0x12a02e57u); f_12a03ac0();
  /* 12a02e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02e59 jne 0x12a02e7c */
  if (!C.zf) goto L_12a02e7c;
  /* 12a02e5b push 0x12a29470 */
  push32((uint32_t)(0x12a29470u));
  /* 12a02e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02e62 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12a02e67 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a02e6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02e6e call 0x12a019e0 */
  push32(0x12a02e73u); f_12a019e0();
  /* 12a02e73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02e76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02e79 jne 0x12a02e7c */
  if (!C.zf) goto L_12a02e7c;
  /* 12a02e7b int3  */
  x86_unimpl("int3 @ 0x12a02e7b");
L_12a02e7c:;
  /* 12a02e7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a02e7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a02e80 jne 0x12a02e52 */
  if (!C.zf) goto L_12a02e52;
L_12a02e82:;
  /* 12a02e82 mov edx, dword ptr [0x12a2ca88] */
  EDX = (r32((uint32_t)(0x12a2ca88)));
  /* 12a02e88 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a02e8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a02e8e cmp eax, dword ptr [0x12a2ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02e94 jne 0x12a02e97 */
  if (!C.zf) goto L_12a02e97;
  /* 12a02e96 int3  */
  x86_unimpl("int3 @ 0x12a02e96");
L_12a02e97:;
  /* 12a02e97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02e9a push ecx */
  push32((uint32_t)(ECX));
  /* 12a02e9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02e9e push edx */
  push32((uint32_t)(EDX));
  /* 12a02e9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a02ea2 push eax */
  push32((uint32_t)(EAX));
  /* 12a02ea3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02ea7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02eaa push edx */
  push32((uint32_t)(EDX));
  /* 12a02eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02eae push eax */
  push32((uint32_t)(EAX));
  /* 12a02eaf push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02eb1 call dword ptr [0x12a2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2cc90))), 0x12a02eb7u);
  /* 12a02eb7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02eba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02ebc jne 0x12a02f1c */
  if (!C.zf) goto L_12a02f1c;
  /* 12a02ebe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02ec2 je 0x12a02eef */
  if (C.zf) goto L_12a02eef;
L_12a02ec4:;
  /* 12a02ec4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a02ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02ec8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a02ecb push edx */
  push32((uint32_t)(EDX));
  /* 12a02ecc push 0x12a295ec */
  push32((uint32_t)(0x12a295ecu));
  /* 12a02ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02ed9 call 0x12a019e0 */
  push32(0x12a02edeu); f_12a019e0();
  /* 12a02ede add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02ee4 jne 0x12a02ee7 */
  if (!C.zf) goto L_12a02ee7;
  /* 12a02ee6 int3  */
  x86_unimpl("int3 @ 0x12a02ee6");
L_12a02ee7:;
  /* 12a02ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02eeb jne 0x12a02ec4 */
  if (!C.zf) goto L_12a02ec4;
  /* 12a02eed jmp 0x12a02f15 */
  goto L_12a02f15;
L_12a02eef:;
  /* 12a02eef push 0x12a295c8 */
  push32((uint32_t)(0x12a295c8u));
  /* 12a02ef4 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a02ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02efb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02efd push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02eff push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f01 call 0x12a019e0 */
  push32(0x12a02f06u); f_12a019e0();
  /* 12a02f06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02f09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f0c jne 0x12a02f0f */
  if (!C.zf) goto L_12a02f0f;
  /* 12a02f0e int3  */
  x86_unimpl("int3 @ 0x12a02f0e");
L_12a02f0f:;
  /* 12a02f0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a02f11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a02f13 jne 0x12a02eef */
  if (!C.zf) goto L_12a02eef;
L_12a02f15:;
  /* 12a02f15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02f17 jmp 0x12a032fa */
  goto L_12a032fa;
L_12a02f1c:;
  /* 12a02f1c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f20 jbe 0x12a02f4e */
  if ((C.cf||C.zf)) goto L_12a02f4e;
L_12a02f22:;
  /* 12a02f22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a02f25 push edx */
  push32((uint32_t)(EDX));
  /* 12a02f26 push 0x12a29598 */
  push32((uint32_t)(0x12a29598u));
  /* 12a02f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02f33 call 0x12a019e0 */
  push32(0x12a02f38u); f_12a019e0();
  /* 12a02f38 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02f3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f3e jne 0x12a02f41 */
  if (!C.zf) goto L_12a02f41;
  /* 12a02f40 int3  */
  x86_unimpl("int3 @ 0x12a02f40");
L_12a02f41:;
  /* 12a02f41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02f45 jne 0x12a02f22 */
  if (!C.zf) goto L_12a02f22;
  /* 12a02f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02f49 jmp 0x12a032fa */
  goto L_12a032fa;
L_12a02f4e:;
  /* 12a02f4e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f52 je 0x12a02f96 */
  if (C.zf) goto L_12a02f96;
  /* 12a02f54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02f57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a02f5d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f60 je 0x12a02f96 */
  if (C.zf) goto L_12a02f96;
  /* 12a02f62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a02f65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a02f6b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f6e je 0x12a02f96 */
  if (C.zf) goto L_12a02f96;
L_12a02f70:;
  /* 12a02f70 push 0x12a293ac */
  push32((uint32_t)(0x12a293acu));
  /* 12a02f75 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a02f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02f80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a02f82 call 0x12a019e0 */
  push32(0x12a02f87u); f_12a019e0();
  /* 12a02f87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02f8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02f8d jne 0x12a02f90 */
  if (!C.zf) goto L_12a02f90;
  /* 12a02f8f int3  */
  x86_unimpl("int3 @ 0x12a02f8f");
L_12a02f90:;
  /* 12a02f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a02f92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02f94 jne 0x12a02f70 */
  if (!C.zf) goto L_12a02f70;
L_12a02f96:;
  /* 12a02f96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02f99 push ecx */
  push32((uint32_t)(ECX));
  /* 12a02f9a call 0x12a03f20 */
  push32(0x12a02f9fu); f_12a03f20();
  /* 12a02f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a02fa4 jne 0x12a02fc7 */
  if (!C.zf) goto L_12a02fc7;
  /* 12a02fa6 push 0x12a29574 */
  push32((uint32_t)(0x12a29574u));
  /* 12a02fab push 0 */
  push32((uint32_t)(0x0u));
  /* 12a02fad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12a02fb2 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a02fb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a02fb9 call 0x12a019e0 */
  push32(0x12a02fbeu); f_12a019e0();
  /* 12a02fbe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a02fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02fc4 jne 0x12a02fc7 */
  if (!C.zf) goto L_12a02fc7;
  /* 12a02fc6 int3  */
  x86_unimpl("int3 @ 0x12a02fc6");
L_12a02fc7:;
  /* 12a02fc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a02fc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a02fcb jne 0x12a02f96 */
  if (!C.zf) goto L_12a02f96;
  /* 12a02fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a02fd0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a02fd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a02fd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02fd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02fdd jne 0x12a02fe6 */
  if (!C.zf) goto L_12a02fe6;
  /* 12a02fdf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12a02fe6:;
  /* 12a02fe6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02fea je 0x12a0302a */
  if (C.zf) goto L_12a0302a;
L_12a02fec:;
  /* 12a02fec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02fef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02ff6 jne 0x12a03001 */
  if (!C.zf) goto L_12a03001;
  /* 12a02ff8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a02ffb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a02fff je 0x12a03022 */
  if (C.zf) goto L_12a03022;
L_12a03001:;
  /* 12a03001 push 0x12a2952c */
  push32((uint32_t)(0x12a2952cu));
  /* 12a03006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03008 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12a0300d push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03012 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03014 call 0x12a019e0 */
  push32(0x12a03019u); f_12a019e0();
  /* 12a03019 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0301c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0301f jne 0x12a03022 */
  if (!C.zf) goto L_12a03022;
  /* 12a03021 int3  */
  x86_unimpl("int3 @ 0x12a03021");
L_12a03022:;
  /* 12a03022 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03024 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03026 jne 0x12a02fec */
  if (!C.zf) goto L_12a02fec;
  /* 12a03028 jmp 0x12a0308e */
  goto L_12a0308e;
L_12a0302a:;
  /* 12a0302a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0302d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03030 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a03035 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03038 jne 0x12a0304f */
  if (!C.zf) goto L_12a0304f;
  /* 12a0303a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0303d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03043 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03046 jne 0x12a0304f */
  if (!C.zf) goto L_12a0304f;
  /* 12a03048 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12a0304f:;
  /* 12a0304f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03052 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03055 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0305a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0305d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03063 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03065 je 0x12a03088 */
  if (C.zf) goto L_12a03088;
  /* 12a03067 push 0x12a294f0 */
  push32((uint32_t)(0x12a294f0u));
  /* 12a0306c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0306e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12a03073 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03078 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0307a call 0x12a019e0 */
  push32(0x12a0307fu); f_12a019e0();
  /* 12a0307f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03082 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03085 jne 0x12a03088 */
  if (!C.zf) goto L_12a03088;
  /* 12a03087 int3  */
  x86_unimpl("int3 @ 0x12a03087");
L_12a03088:;
  /* 12a03088 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0308a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0308c jne 0x12a0304f */
  if (!C.zf) goto L_12a0304f;
L_12a0308e:;
  /* 12a0308e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03092 je 0x12a030b9 */
  if (C.zf) goto L_12a030b9;
  /* 12a03094 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03097 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0309a push eax */
  push32((uint32_t)(EAX));
  /* 12a0309b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0309e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0309f call 0x12a068a0 */
  push32(0x12a030a4u); f_12a068a0();
  /* 12a030a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a030a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a030aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a030ae jne 0x12a030b7 */
  if (!C.zf) goto L_12a030b7;
  /* 12a030b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a030b2 jmp 0x12a032fa */
  goto L_12a032fa;
L_12a030b7:;
  /* 12a030b7 jmp 0x12a030dc */
  goto L_12a030dc;
L_12a030b9:;
  /* 12a030b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a030bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a030bf push edx */
  push32((uint32_t)(EDX));
  /* 12a030c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a030c3 push eax */
  push32((uint32_t)(EAX));
  /* 12a030c4 call 0x12a067f0 */
  push32(0x12a030c9u); f_12a067f0();
  /* 12a030c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a030cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a030cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a030d3 jne 0x12a030dc */
  if (!C.zf) goto L_12a030dc;
  /* 12a030d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a030d7 jmp 0x12a032fa */
  goto L_12a032fa;
L_12a030dc:;
  /* 12a030dc mov ecx, dword ptr [0x12a2ca88] */
  ECX = (r32((uint32_t)(0x12a2ca88)));
  /* 12a030e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a030e5 mov dword ptr [0x12a2ca88], ecx */
  w32((uint32_t)(0x12a2ca88), (ECX));
  /* 12a030eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a030ef jne 0x12a03147 */
  if (!C.zf) goto L_12a03147;
  /* 12a030f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a030f4 mov eax, dword ptr [0x12a2e4d0] */
  EAX = (r32((uint32_t)(0x12a2e4d0)));
  /* 12a030f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a030fc mov dword ptr [0x12a2e4d0], eax */
  w32((uint32_t)(0x12a2e4d0), (EAX));
  /* 12a03101 mov ecx, dword ptr [0x12a2e4d0] */
  ECX = (r32((uint32_t)(0x12a2e4d0)));
  /* 12a03107 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0310a mov dword ptr [0x12a2e4d0], ecx */
  w32((uint32_t)(0x12a2e4d0), (ECX));
  /* 12a03110 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03113 mov eax, dword ptr [0x12a2e4d8] */
  EAX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a03118 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0311b mov dword ptr [0x12a2e4d8], eax */
  w32((uint32_t)(0x12a2e4d8), (EAX));
  /* 12a03120 mov ecx, dword ptr [0x12a2e4d8] */
  ECX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a03126 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03129 mov dword ptr [0x12a2e4d8], ecx */
  w32((uint32_t)(0x12a2e4d8), (ECX));
  /* 12a0312f mov edx, dword ptr [0x12a2e4d8] */
  EDX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a03135 cmp edx, dword ptr [0x12a2e4dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2e4dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0313b jbe 0x12a03147 */
  if ((C.cf||C.zf)) goto L_12a03147;
  /* 12a0313d mov eax, dword ptr [0x12a2e4d8] */
  EAX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a03142 mov dword ptr [0x12a2e4dc], eax */
  w32((uint32_t)(0x12a2e4dc), (EAX));
L_12a03147:;
  /* 12a03147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0314a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0314d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a03150 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03153 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03156 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03159 jbe 0x12a0317f */
  if ((C.cf||C.zf)) goto L_12a0317f;
  /* 12a0315b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0315e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03161 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03164 push edx */
  push32((uint32_t)(EDX));
  /* 12a03165 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03167 mov al, byte ptr [0x12a2ca92] */
  AL = (r8((uint32_t)(0x12a2ca92)));
  /* 12a0316c push eax */
  push32((uint32_t)(EAX));
  /* 12a0316d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03170 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03173 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03176 push edx */
  push32((uint32_t)(EDX));
  /* 12a03177 call 0x12a06690 */
  push32(0x12a0317cu); f_12a06690();
  /* 12a0317c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0317f:;
  /* 12a0317f push 4 */
  push32((uint32_t)(0x4u));
  /* 12a03181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03183 mov al, byte ptr [0x12a2ca90] */
  AL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a03188 push eax */
  push32((uint32_t)(EAX));
  /* 12a03189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0318c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0318f push ecx */
  push32((uint32_t)(ECX));
  /* 12a03190 call 0x12a06690 */
  push32(0x12a03195u); f_12a06690();
  /* 12a03195 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03198 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0319c jne 0x12a031b9 */
  if (!C.zf) goto L_12a031b9;
  /* 12a0319e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a031a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a031a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a031a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a031aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a031ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12a031b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a031b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a031b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12a031b9:;
  /* 12a031b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a031bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a031bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12a031c2:;
  /* 12a031c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a031c6 jne 0x12a031f7 */
  if (!C.zf) goto L_12a031f7;
  /* 12a031c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a031cc jne 0x12a031d6 */
  if (!C.zf) goto L_12a031d6;
  /* 12a031ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a031d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a031d4 je 0x12a031f7 */
  if (C.zf) goto L_12a031f7;
L_12a031d6:;
  /* 12a031d6 push 0x12a294bc */
  push32((uint32_t)(0x12a294bcu));
  /* 12a031db push 0 */
  push32((uint32_t)(0x0u));
  /* 12a031dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12a031e2 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a031e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a031e9 call 0x12a019e0 */
  push32(0x12a031eeu); f_12a019e0();
  /* 12a031ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a031f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a031f4 jne 0x12a031f7 */
  if (!C.zf) goto L_12a031f7;
  /* 12a031f6 int3  */
  x86_unimpl("int3 @ 0x12a031f6");
L_12a031f7:;
  /* 12a031f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a031f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a031fb jne 0x12a031c2 */
  if (!C.zf) goto L_12a031c2;
  /* 12a031fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03200 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03203 je 0x12a0320b */
  if (C.zf) goto L_12a0320b;
  /* 12a03205 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03209 je 0x12a03213 */
  if (C.zf) goto L_12a03213;
L_12a0320b:;
  /* 12a0320b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0320e jmp 0x12a032fa */
  goto L_12a032fa;
L_12a03213:;
  /* 12a03213 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03216 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03219 je 0x12a0322b */
  if (C.zf) goto L_12a0322b;
  /* 12a0321b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0321e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a03220 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03223 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a03226 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a03229 jmp 0x12a03267 */
  goto L_12a03267;
L_12a0322b:;
  /* 12a0322b mov eax, dword ptr [0x12a2e4cc] */
  EAX = (r32((uint32_t)(0x12a2e4cc)));
  /* 12a03230 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03233 je 0x12a03256 */
  if (C.zf) goto L_12a03256;
  /* 12a03235 push 0x12a294a0 */
  push32((uint32_t)(0x12a294a0u));
  /* 12a0323a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0323c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12a03241 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03246 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03248 call 0x12a019e0 */
  push32(0x12a0324du); f_12a019e0();
  /* 12a0324d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03250 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03253 jne 0x12a03256 */
  if (!C.zf) goto L_12a03256;
  /* 12a03255 int3  */
  x86_unimpl("int3 @ 0x12a03255");
L_12a03256:;
  /* 12a03256 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03258 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0325a jne 0x12a0322b */
  if (!C.zf) goto L_12a0322b;
  /* 12a0325c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0325f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a03262 mov dword ptr [0x12a2e4cc], eax */
  w32((uint32_t)(0x12a2e4cc), (EAX));
L_12a03267:;
  /* 12a03267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0326a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0326e je 0x12a0327f */
  if (C.zf) goto L_12a0327f;
  /* 12a03270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03273 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a03276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03279 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0327b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0327d jmp 0x12a032ba */
  goto L_12a032ba;
L_12a0327f:;
  /* 12a0327f mov eax, dword ptr [0x12a2e4d4] */
  EAX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a03284 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03287 je 0x12a032aa */
  if (C.zf) goto L_12a032aa;
  /* 12a03289 push 0x12a29484 */
  push32((uint32_t)(0x12a29484u));
  /* 12a0328e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03290 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12a03295 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a0329a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0329c call 0x12a019e0 */
  push32(0x12a032a1u); f_12a019e0();
  /* 12a032a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a032a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a032a7 jne 0x12a032aa */
  if (!C.zf) goto L_12a032aa;
  /* 12a032a9 int3  */
  x86_unimpl("int3 @ 0x12a032a9");
L_12a032aa:;
  /* 12a032aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a032ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a032ae jne 0x12a0327f */
  if (!C.zf) goto L_12a0327f;
  /* 12a032b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a032b5 mov dword ptr [0x12a2e4d4], eax */
  w32((uint32_t)(0x12a2e4d4), (EAX));
L_12a032ba:;
  /* 12a032ba cmp dword ptr [0x12a2e4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a032c1 je 0x12a032d1 */
  if (C.zf) goto L_12a032d1;
  /* 12a032c3 mov ecx, dword ptr [0x12a2e4d4] */
  ECX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a032c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12a032cf jmp 0x12a032d9 */
  goto L_12a032d9;
L_12a032d1:;
  /* 12a032d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032d4 mov dword ptr [0x12a2e4cc], eax */
  w32((uint32_t)(0x12a2e4cc), (EAX));
L_12a032d9:;
  /* 12a032d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032dc mov edx, dword ptr [0x12a2e4d4] */
  EDX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a032e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a032e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12a032ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a032f1 mov dword ptr [0x12a2e4d4], ecx */
  w32((uint32_t)(0x12a2e4d4), (ECX));
  /* 12a032f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a032fa:;
  /* 12a032fa pop edi */
  EDI = (pop32());
  /* 12a032fb pop esi */
  ESI = (pop32());
  /* 12a032fc pop ebx */
  EBX = (pop32());
  /* 12a032fd mov esp, ebp */
  ESP = (EBP);
  /* 12a032ff pop ebp */
  EBP = (pop32());
  /* 12a03300 ret  */
  ESPCHK(0x12a02df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003310 @ 0x12a03310 (27 bytes, 13 insns) */
void f_12a03310(void) {
  FTRACE(0x12a03310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03310 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03311 mov ebp, esp */
  EBP = (ESP);
  /* 12a03313 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03315 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03317 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a03319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0331c push eax */
  push32((uint32_t)(EAX));
  /* 12a0331d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03320 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03321 call 0x12a03330 */
  push32(0x12a03326u); f_12a03330();
  /* 12a03326 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03329 pop ebp */
  EBP = (pop32());
  /* 12a0332a ret  */
  ESPCHK(0x12a03310u, _esp0);
  ESP += 4; return;
}

/* FUN_10003330 @ 0x12a03330 (64 bytes, 27 insns) */
void f_12a03330(void) {
  FTRACE(0x12a03330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03330 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03331 mov ebp, esp */
  EBP = (ESP);
  /* 12a03333 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03334 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03336 call 0x12a06320 */
  push32(0x12a0333bu); f_12a06320();
  /* 12a0333b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0333e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03340 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a03343 push eax */
  push32((uint32_t)(EAX));
  /* 12a03344 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a03347 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03348 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0334b push edx */
  push32((uint32_t)(EDX));
  /* 12a0334c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0334f push eax */
  push32((uint32_t)(EAX));
  /* 12a03350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03353 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03354 call 0x12a02df0 */
  push32(0x12a03359u); f_12a02df0();
  /* 12a03359 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0335c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0335f push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03361 call 0x12a063c0 */
  push32(0x12a03366u); f_12a063c0();
  /* 12a03366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0336c mov esp, ebp */
  ESP = (EBP);
  /* 12a0336e pop ebp */
  EBP = (pop32());
  /* 12a0336f ret  */
  ESPCHK(0x12a03330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x12a03370 (19 bytes, 9 insns) */
void f_12a03370(void) {
  FTRACE(0x12a03370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03370 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03371 mov ebp, esp */
  EBP = (ESP);
  /* 12a03373 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a03375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03378 push eax */
  push32((uint32_t)(EAX));
  /* 12a03379 call 0x12a033b0 */
  push32(0x12a0337eu); f_12a033b0();
  /* 12a0337e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03381 pop ebp */
  EBP = (pop32());
  /* 12a03382 ret  */
  ESPCHK(0x12a03370u, _esp0);
  ESP += 4; return;
}

/* FUN_10003390 @ 0x12a03390 (19 bytes, 9 insns) */
void f_12a03390(void) {
  FTRACE(0x12a03390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03390 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03391 mov ebp, esp */
  EBP = (ESP);
  /* 12a03393 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a03395 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03398 push eax */
  push32((uint32_t)(EAX));
  /* 12a03399 call 0x12a033e0 */
  push32(0x12a0339eu); f_12a033e0();
  /* 12a0339e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a033a1 pop ebp */
  EBP = (pop32());
  /* 12a033a2 ret  */
  ESPCHK(0x12a03390u, _esp0);
  ESP += 4; return;
}

/* FUN_100033b0 @ 0x12a033b0 (41 bytes, 16 insns) */
void f_12a033b0(void) {
  FTRACE(0x12a033b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a033b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a033b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a033b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a033b5 call 0x12a06320 */
  push32(0x12a033bau); f_12a06320();
  /* 12a033ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a033bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a033c0 push eax */
  push32((uint32_t)(EAX));
  /* 12a033c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a033c4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a033c5 call 0x12a033e0 */
  push32(0x12a033cau); f_12a033e0();
  /* 12a033ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a033cd push 9 */
  push32((uint32_t)(0x9u));
  /* 12a033cf call 0x12a063c0 */
  push32(0x12a033d4u); f_12a063c0();
  /* 12a033d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a033d7 pop ebp */
  EBP = (pop32());
  /* 12a033d8 ret  */
  ESPCHK(0x12a033b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100033e0 @ 0x12a033e0 (1004 bytes, 342 insns) */
void f_12a033e0(void) {
  FTRACE(0x12a033e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a033e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a033e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a033e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a033e4 push ebx */
  push32((uint32_t)(EBX));
  /* 12a033e5 push esi */
  push32((uint32_t)(ESI));
  /* 12a033e6 push edi */
  push32((uint32_t)(EDI));
  /* 12a033e7 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a033ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a033ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a033f1 je 0x12a03423 */
  if (C.zf) goto L_12a03423;
L_12a033f3:;
  /* 12a033f3 call 0x12a03ac0 */
  push32(0x12a033f8u); f_12a03ac0();
  /* 12a033f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a033fa jne 0x12a0341d */
  if (!C.zf) goto L_12a0341d;
  /* 12a033fc push 0x12a29470 */
  push32((uint32_t)(0x12a29470u));
  /* 12a03401 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03403 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12a03408 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a0340d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0340f call 0x12a019e0 */
  push32(0x12a03414u); f_12a019e0();
  /* 12a03414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0341a jne 0x12a0341d */
  if (!C.zf) goto L_12a0341d;
  /* 12a0341c int3  */
  x86_unimpl("int3 @ 0x12a0341c");
L_12a0341d:;
  /* 12a0341d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0341f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03421 jne 0x12a033f3 */
  if (!C.zf) goto L_12a033f3;
L_12a03423:;
  /* 12a03423 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03427 jne 0x12a0342e */
  if (!C.zf) goto L_12a0342e;
  /* 12a03429 jmp 0x12a037c5 */
  goto L_12a037c5;
L_12a0342e:;
  /* 12a0342e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03430 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03432 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03434 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03437 push edx */
  push32((uint32_t)(EDX));
  /* 12a03438 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0343a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0343d push eax */
  push32((uint32_t)(EAX));
  /* 12a0343e push 3 */
  push32((uint32_t)(0x3u));
  /* 12a03440 call dword ptr [0x12a2cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2cc90))), 0x12a03446u);
  /* 12a03446 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0344b jne 0x12a03478 */
  if (!C.zf) goto L_12a03478;
L_12a0344d:;
  /* 12a0344d push 0x12a29734 */
  push32((uint32_t)(0x12a29734u));
  /* 12a03452 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03457 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03459 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0345b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0345d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0345f call 0x12a019e0 */
  push32(0x12a03464u); f_12a019e0();
  /* 12a03464 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03467 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0346a jne 0x12a0346d */
  if (!C.zf) goto L_12a0346d;
  /* 12a0346c int3  */
  x86_unimpl("int3 @ 0x12a0346c");
L_12a0346d:;
  /* 12a0346d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0346f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03471 jne 0x12a0344d */
  if (!C.zf) goto L_12a0344d;
  /* 12a03473 jmp 0x12a037c5 */
  goto L_12a037c5;
L_12a03478:;
  /* 12a03478 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0347b push edx */
  push32((uint32_t)(EDX));
  /* 12a0347c call 0x12a03f20 */
  push32(0x12a03481u); f_12a03f20();
  /* 12a03481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03486 jne 0x12a034a9 */
  if (!C.zf) goto L_12a034a9;
  /* 12a03488 push 0x12a29574 */
  push32((uint32_t)(0x12a29574u));
  /* 12a0348d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0348f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12a03494 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03499 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0349b call 0x12a019e0 */
  push32(0x12a034a0u); f_12a019e0();
  /* 12a034a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a034a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a034a6 jne 0x12a034a9 */
  if (!C.zf) goto L_12a034a9;
  /* 12a034a8 int3  */
  x86_unimpl("int3 @ 0x12a034a8");
L_12a034a9:;
  /* 12a034a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a034ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a034ad jne 0x12a03478 */
  if (!C.zf) goto L_12a03478;
  /* 12a034af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a034b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a034b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a034b8:;
  /* 12a034b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a034bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a034be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a034c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a034c6 je 0x12a0350b */
  if (C.zf) goto L_12a0350b;
  /* 12a034c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a034cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a034cf je 0x12a0350b */
  if (C.zf) goto L_12a0350b;
  /* 12a034d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a034d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a034d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a034dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a034df je 0x12a0350b */
  if (C.zf) goto L_12a0350b;
  /* 12a034e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a034e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a034e8 je 0x12a0350b */
  if (C.zf) goto L_12a0350b;
  /* 12a034ea push 0x12a2970c */
  push32((uint32_t)(0x12a2970cu));
  /* 12a034ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12a034f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12a034f6 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a034fb push 2 */
  push32((uint32_t)(0x2u));
  /* 12a034fd call 0x12a019e0 */
  push32(0x12a03502u); f_12a019e0();
  /* 12a03502 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03505 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03508 jne 0x12a0350b */
  if (!C.zf) goto L_12a0350b;
  /* 12a0350a int3  */
  x86_unimpl("int3 @ 0x12a0350a");
L_12a0350b:;
  /* 12a0350b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0350d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0350f jne 0x12a034b8 */
  if (!C.zf) goto L_12a034b8;
  /* 12a03511 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a03516 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a03519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0351b jne 0x12a035e6 */
  if (!C.zf) goto L_12a035e6;
  /* 12a03521 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a03523 mov cl, byte ptr [0x12a2ca90] */
  CL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a03529 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0352a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0352d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03530 push edx */
  push32((uint32_t)(EDX));
  /* 12a03531 call 0x12a03a30 */
  push32(0x12a03536u); f_12a03a30();
  /* 12a03536 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0353b jne 0x12a03580 */
  if (!C.zf) goto L_12a03580;
L_12a0353d:;
  /* 12a0353d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03540 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03543 push eax */
  push32((uint32_t)(EAX));
  /* 12a03544 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03547 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a0354a push edx */
  push32((uint32_t)(EDX));
  /* 12a0354b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0354e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a03551 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03557 mov edx, dword ptr [ecx*4 + 0x12a2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca94)));
  /* 12a0355e push edx */
  push32((uint32_t)(EDX));
  /* 12a0355f push 0x12a296e0 */
  push32((uint32_t)(0x12a296e0u));
  /* 12a03564 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03566 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03568 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0356a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0356c call 0x12a019e0 */
  push32(0x12a03571u); f_12a019e0();
  /* 12a03571 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03574 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03577 jne 0x12a0357a */
  if (!C.zf) goto L_12a0357a;
  /* 12a03579 int3  */
  x86_unimpl("int3 @ 0x12a03579");
L_12a0357a:;
  /* 12a0357a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0357c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0357e jne 0x12a0353d */
  if (!C.zf) goto L_12a0353d;
L_12a03580:;
  /* 12a03580 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a03582 mov cl, byte ptr [0x12a2ca90] */
  CL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a03588 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0358c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0358f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03592 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12a03596 push edx */
  push32((uint32_t)(EDX));
  /* 12a03597 call 0x12a03a30 */
  push32(0x12a0359cu); f_12a03a30();
  /* 12a0359c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0359f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a035a1 jne 0x12a035e6 */
  if (!C.zf) goto L_12a035e6;
L_12a035a3:;
  /* 12a035a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a035a9 push eax */
  push32((uint32_t)(EAX));
  /* 12a035aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035ad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a035b0 push edx */
  push32((uint32_t)(EDX));
  /* 12a035b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035b4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a035b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a035bd mov edx, dword ptr [ecx*4 + 0x12a2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca94)));
  /* 12a035c4 push edx */
  push32((uint32_t)(EDX));
  /* 12a035c5 push 0x12a296b4 */
  push32((uint32_t)(0x12a296b4u));
  /* 12a035ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12a035cc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a035ce push 0 */
  push32((uint32_t)(0x0u));
  /* 12a035d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a035d2 call 0x12a019e0 */
  push32(0x12a035d7u); f_12a019e0();
  /* 12a035d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a035da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a035dd jne 0x12a035e0 */
  if (!C.zf) goto L_12a035e0;
  /* 12a035df int3  */
  x86_unimpl("int3 @ 0x12a035df");
L_12a035e0:;
  /* 12a035e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a035e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a035e4 jne 0x12a035a3 */
  if (!C.zf) goto L_12a035a3;
L_12a035e6:;
  /* 12a035e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a035ed jne 0x12a0365b */
  if (!C.zf) goto L_12a0365b;
L_12a035ef:;
  /* 12a035ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035f2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a035f9 jne 0x12a03604 */
  if (!C.zf) goto L_12a03604;
  /* 12a035fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a035fe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03602 je 0x12a03625 */
  if (C.zf) goto L_12a03625;
L_12a03604:;
  /* 12a03604 push 0x12a29674 */
  push32((uint32_t)(0x12a29674u));
  /* 12a03609 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0360b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12a03610 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03615 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03617 call 0x12a019e0 */
  push32(0x12a0361cu); f_12a019e0();
  /* 12a0361c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0361f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03622 jne 0x12a03625 */
  if (!C.zf) goto L_12a03625;
  /* 12a03624 int3  */
  x86_unimpl("int3 @ 0x12a03624");
L_12a03625:;
  /* 12a03625 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03627 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03629 jne 0x12a035ef */
  if (!C.zf) goto L_12a035ef;
  /* 12a0362b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0362e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a03631 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03634 push eax */
  push32((uint32_t)(EAX));
  /* 12a03635 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03637 mov cl, byte ptr [0x12a2ca91] */
  CL = (r8((uint32_t)(0x12a2ca91)));
  /* 12a0363d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0363e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03641 push edx */
  push32((uint32_t)(EDX));
  /* 12a03642 call 0x12a06690 */
  push32(0x12a03647u); f_12a06690();
  /* 12a03647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0364a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0364d push eax */
  push32((uint32_t)(EAX));
  /* 12a0364e call 0x12a06a90 */
  push32(0x12a03653u); f_12a06a90();
  /* 12a03653 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03656 jmp 0x12a037c5 */
  goto L_12a037c5;
L_12a0365b:;
  /* 12a0365b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0365e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03662 jne 0x12a03671 */
  if (!C.zf) goto L_12a03671;
  /* 12a03664 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03668 jne 0x12a03671 */
  if (!C.zf) goto L_12a03671;
  /* 12a0366a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12a03671:;
  /* 12a03671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03674 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03677 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0367a je 0x12a0369d */
  if (C.zf) goto L_12a0369d;
  /* 12a0367c push 0x12a29654 */
  push32((uint32_t)(0x12a29654u));
  /* 12a03681 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03683 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12a03688 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a0368d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0368f call 0x12a019e0 */
  push32(0x12a03694u); f_12a019e0();
  /* 12a03694 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0369a jne 0x12a0369d */
  if (!C.zf) goto L_12a0369d;
  /* 12a0369c int3  */
  x86_unimpl("int3 @ 0x12a0369c");
L_12a0369d:;
  /* 12a0369d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0369f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a036a1 jne 0x12a03671 */
  if (!C.zf) goto L_12a03671;
  /* 12a036a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a036a6 mov eax, dword ptr [0x12a2e4d8] */
  EAX = (r32((uint32_t)(0x12a2e4d8)));
  /* 12a036ab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a036ae mov dword ptr [0x12a2e4d8], eax */
  w32((uint32_t)(0x12a2e4d8), (EAX));
  /* 12a036b3 mov ecx, dword ptr [0x12a2ca84] */
  ECX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a036b9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12a036bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a036be jne 0x12a0379c */
  if (!C.zf) goto L_12a0379c;
  /* 12a036c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a036c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a036ca je 0x12a036dc */
  if (C.zf) goto L_12a036dc;
  /* 12a036cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a036cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a036d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a036d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a036d7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12a036da jmp 0x12a0371a */
  goto L_12a0371a;
L_12a036dc:;
  /* 12a036dc mov ecx, dword ptr [0x12a2e4cc] */
  ECX = (r32((uint32_t)(0x12a2e4cc)));
  /* 12a036e2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a036e5 je 0x12a03708 */
  if (C.zf) goto L_12a03708;
  /* 12a036e7 push 0x12a2963c */
  push32((uint32_t)(0x12a2963cu));
  /* 12a036ec push 0 */
  push32((uint32_t)(0x0u));
  /* 12a036ee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12a036f3 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a036f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a036fa call 0x12a019e0 */
  push32(0x12a036ffu); f_12a019e0();
  /* 12a036ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03702 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03705 jne 0x12a03708 */
  if (!C.zf) goto L_12a03708;
  /* 12a03707 int3  */
  x86_unimpl("int3 @ 0x12a03707");
L_12a03708:;
  /* 12a03708 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0370a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0370c jne 0x12a036dc */
  if (!C.zf) goto L_12a036dc;
  /* 12a0370e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03711 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a03714 mov dword ptr [0x12a2e4cc], ecx */
  w32((uint32_t)(0x12a2e4cc), (ECX));
L_12a0371a:;
  /* 12a0371a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0371d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03721 je 0x12a03732 */
  if (C.zf) goto L_12a03732;
  /* 12a03723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03726 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a03729 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0372c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0372e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a03730 jmp 0x12a0376f */
  goto L_12a0376f;
L_12a03732:;
  /* 12a03732 mov ecx, dword ptr [0x12a2e4d4] */
  ECX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a03738 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0373b je 0x12a0375e */
  if (C.zf) goto L_12a0375e;
  /* 12a0373d push 0x12a29624 */
  push32((uint32_t)(0x12a29624u));
  /* 12a03742 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03744 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12a03749 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a0374e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03750 call 0x12a019e0 */
  push32(0x12a03755u); f_12a019e0();
  /* 12a03755 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03758 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0375b jne 0x12a0375e */
  if (!C.zf) goto L_12a0375e;
  /* 12a0375d int3  */
  x86_unimpl("int3 @ 0x12a0375d");
L_12a0375e:;
  /* 12a0375e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03760 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a03762 jne 0x12a03732 */
  if (!C.zf) goto L_12a03732;
  /* 12a03764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03767 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a03769 mov dword ptr [0x12a2e4d4], ecx */
  w32((uint32_t)(0x12a2e4d4), (ECX));
L_12a0376f:;
  /* 12a0376f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03772 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a03775 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03778 push eax */
  push32((uint32_t)(EAX));
  /* 12a03779 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0377b mov cl, byte ptr [0x12a2ca91] */
  CL = (r8((uint32_t)(0x12a2ca91)));
  /* 12a03781 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03782 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03785 push edx */
  push32((uint32_t)(EDX));
  /* 12a03786 call 0x12a06690 */
  push32(0x12a0378bu); f_12a06690();
  /* 12a0378b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0378e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03791 push eax */
  push32((uint32_t)(EAX));
  /* 12a03792 call 0x12a06a90 */
  push32(0x12a03797u); f_12a06a90();
  /* 12a03797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0379a jmp 0x12a037c5 */
  goto L_12a037c5;
L_12a0379c:;
  /* 12a0379c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0379f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12a037a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a037a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a037ac push eax */
  push32((uint32_t)(EAX));
  /* 12a037ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a037af mov cl, byte ptr [0x12a2ca91] */
  CL = (r8((uint32_t)(0x12a2ca91)));
  /* 12a037b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a037b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a037b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a037bc push edx */
  push32((uint32_t)(EDX));
  /* 12a037bd call 0x12a06690 */
  push32(0x12a037c2u); f_12a06690();
  /* 12a037c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a037c5:;
  /* 12a037c5 pop edi */
  EDI = (pop32());
  /* 12a037c6 pop esi */
  ESI = (pop32());
  /* 12a037c7 pop ebx */
  EBX = (pop32());
  /* 12a037c8 mov esp, ebp */
  ESP = (EBP);
  /* 12a037ca pop ebp */
  EBP = (pop32());
  /* 12a037cb ret  */
  ESPCHK(0x12a033e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037d0 @ 0x12a037d0 (19 bytes, 9 insns) */
void f_12a037d0(void) {
  FTRACE(0x12a037d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a037d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a037d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a037d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a037d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a037d8 push eax */
  push32((uint32_t)(EAX));
  /* 12a037d9 call 0x12a037f0 */
  push32(0x12a037deu); f_12a037f0();
  /* 12a037de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a037e1 pop ebp */
  EBP = (pop32());
  /* 12a037e2 ret  */
  ESPCHK(0x12a037d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100037f0 @ 0x12a037f0 (342 bytes, 119 insns) */
void f_12a037f0(void) {
  FTRACE(0x12a037f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a037f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a037f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a037f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a037f6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a037f7 push esi */
  push32((uint32_t)(ESI));
  /* 12a037f8 push edi */
  push32((uint32_t)(EDI));
  /* 12a037f9 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a037fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a03801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03803 je 0x12a03835 */
  if (C.zf) goto L_12a03835;
L_12a03805:;
  /* 12a03805 call 0x12a03ac0 */
  push32(0x12a0380au); f_12a03ac0();
  /* 12a0380a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0380c jne 0x12a0382f */
  if (!C.zf) goto L_12a0382f;
  /* 12a0380e push 0x12a29470 */
  push32((uint32_t)(0x12a29470u));
  /* 12a03813 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03815 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12a0381a push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a0381f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03821 call 0x12a019e0 */
  push32(0x12a03826u); f_12a019e0();
  /* 12a03826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0382c jne 0x12a0382f */
  if (!C.zf) goto L_12a0382f;
  /* 12a0382e int3  */
  x86_unimpl("int3 @ 0x12a0382e");
L_12a0382f:;
  /* 12a0382f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03831 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03833 jne 0x12a03805 */
  if (!C.zf) goto L_12a03805;
L_12a03835:;
  /* 12a03835 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03837 call 0x12a06320 */
  push32(0x12a0383cu); f_12a06320();
  /* 12a0383c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0383f:;
  /* 12a0383f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03842 push edx */
  push32((uint32_t)(EDX));
  /* 12a03843 call 0x12a03f20 */
  push32(0x12a03848u); f_12a03f20();
  /* 12a03848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0384b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0384d jne 0x12a03870 */
  if (!C.zf) goto L_12a03870;
  /* 12a0384f push 0x12a29574 */
  push32((uint32_t)(0x12a29574u));
  /* 12a03854 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03856 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12a0385b push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03860 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03862 call 0x12a019e0 */
  push32(0x12a03867u); f_12a019e0();
  /* 12a03867 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0386a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0386d jne 0x12a03870 */
  if (!C.zf) goto L_12a03870;
  /* 12a0386f int3  */
  x86_unimpl("int3 @ 0x12a0386f");
L_12a03870:;
  /* 12a03870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03874 jne 0x12a0383f */
  if (!C.zf) goto L_12a0383f;
  /* 12a03876 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03879 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0387c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a0387f:;
  /* 12a0387f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03882 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03885 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0388a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0388d je 0x12a038d2 */
  if (C.zf) goto L_12a038d2;
  /* 12a0388f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03892 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03896 je 0x12a038d2 */
  if (C.zf) goto L_12a038d2;
  /* 12a03898 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0389b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a0389e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a038a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038a6 je 0x12a038d2 */
  if (C.zf) goto L_12a038d2;
  /* 12a038a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a038ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038af je 0x12a038d2 */
  if (C.zf) goto L_12a038d2;
  /* 12a038b1 push 0x12a2970c */
  push32((uint32_t)(0x12a2970cu));
  /* 12a038b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a038b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12a038bd push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a038c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a038c4 call 0x12a019e0 */
  push32(0x12a038c9u); f_12a019e0();
  /* 12a038c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a038cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038cf jne 0x12a038d2 */
  if (!C.zf) goto L_12a038d2;
  /* 12a038d1 int3  */
  x86_unimpl("int3 @ 0x12a038d1");
L_12a038d2:;
  /* 12a038d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a038d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a038d6 jne 0x12a0387f */
  if (!C.zf) goto L_12a0387f;
  /* 12a038d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a038db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038df jne 0x12a038ee */
  if (!C.zf) goto L_12a038ee;
  /* 12a038e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038e5 jne 0x12a038ee */
  if (!C.zf) goto L_12a038ee;
  /* 12a038e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12a038ee:;
  /* 12a038ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a038f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a038f5 je 0x12a03929 */
  if (C.zf) goto L_12a03929;
L_12a038f7:;
  /* 12a038f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a038fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a038fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03900 je 0x12a03923 */
  if (C.zf) goto L_12a03923;
  /* 12a03902 push 0x12a29654 */
  push32((uint32_t)(0x12a29654u));
  /* 12a03907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03909 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12a0390e push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a03913 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a03915 call 0x12a019e0 */
  push32(0x12a0391au); f_12a019e0();
  /* 12a0391a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0391d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03920 jne 0x12a03923 */
  if (!C.zf) goto L_12a03923;
  /* 12a03922 int3  */
  x86_unimpl("int3 @ 0x12a03922");
L_12a03923:;
  /* 12a03923 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03925 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03927 jne 0x12a038f7 */
  if (!C.zf) goto L_12a038f7;
L_12a03929:;
  /* 12a03929 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0392c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0392f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a03932 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03934 call 0x12a063c0 */
  push32(0x12a03939u); f_12a063c0();
  /* 12a03939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0393c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0393f pop edi */
  EDI = (pop32());
  /* 12a03940 pop esi */
  ESI = (pop32());
  /* 12a03941 pop ebx */
  EBX = (pop32());
  /* 12a03942 mov esp, ebp */
  ESP = (EBP);
  /* 12a03944 pop ebp */
  EBP = (pop32());
  /* 12a03945 ret  */
  ESPCHK(0x12a037f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003950 @ 0x12a03950 (28 bytes, 11 insns) */
void f_12a03950(void) {
  FTRACE(0x12a03950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03950 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03951 mov ebp, esp */
  EBP = (ESP);
  /* 12a03953 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03954 mov eax, dword ptr [0x12a2ca8c] */
  EAX = (r32((uint32_t)(0x12a2ca8c)));
  /* 12a03959 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0395c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0395f mov dword ptr [0x12a2ca8c], ecx */
  w32((uint32_t)(0x12a2ca8c), (ECX));
  /* 12a03965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03968 mov esp, ebp */
  ESP = (EBP);
  /* 12a0396a pop ebp */
  EBP = (pop32());
  /* 12a0396b ret  */
  ESPCHK(0x12a03950u, _esp0);
  ESP += 4; return;
}

/* FUN_10003970 @ 0x12a03970 (157 bytes, 59 insns) */
void f_12a03970(void) {
  FTRACE(0x12a03970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03970 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03971 mov ebp, esp */
  EBP = (ESP);
  /* 12a03973 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03974 push ebx */
  push32((uint32_t)(EBX));
  /* 12a03975 push esi */
  push32((uint32_t)(ESI));
  /* 12a03976 push edi */
  push32((uint32_t)(EDI));
  /* 12a03977 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03979 call 0x12a06320 */
  push32(0x12a0397eu); f_12a06320();
  /* 12a0397e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03981 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03984 push eax */
  push32((uint32_t)(EAX));
  /* 12a03985 call 0x12a03f20 */
  push32(0x12a0398au); f_12a03f20();
  /* 12a0398a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0398d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0398f je 0x12a039fc */
  if (C.zf) goto L_12a039fc;
  /* 12a03991 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03994 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03997 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a0399a:;
  /* 12a0399a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0399d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a039a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a039a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a039a8 je 0x12a039ed */
  if (C.zf) goto L_12a039ed;
  /* 12a039aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a039ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a039b1 je 0x12a039ed */
  if (C.zf) goto L_12a039ed;
  /* 12a039b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a039b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a039b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a039be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a039c1 je 0x12a039ed */
  if (C.zf) goto L_12a039ed;
  /* 12a039c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a039c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a039ca je 0x12a039ed */
  if (C.zf) goto L_12a039ed;
  /* 12a039cc push 0x12a2970c */
  push32((uint32_t)(0x12a2970cu));
  /* 12a039d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a039d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12a039d8 push 0x12a29464 */
  push32((uint32_t)(0x12a29464u));
  /* 12a039dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12a039df call 0x12a019e0 */
  push32(0x12a039e4u); f_12a019e0();
  /* 12a039e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a039e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a039ea jne 0x12a039ed */
  if (!C.zf) goto L_12a039ed;
  /* 12a039ec int3  */
  x86_unimpl("int3 @ 0x12a039ec");
L_12a039ed:;
  /* 12a039ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a039ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a039f1 jne 0x12a0399a */
  if (!C.zf) goto L_12a0399a;
  /* 12a039f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a039f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a039f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12a039fc:;
  /* 12a039fc push 9 */
  push32((uint32_t)(0x9u));
  /* 12a039fe call 0x12a063c0 */
  push32(0x12a03a03u); f_12a063c0();
  /* 12a03a03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03a06 pop edi */
  EDI = (pop32());
  /* 12a03a07 pop esi */
  ESI = (pop32());
  /* 12a03a08 pop ebx */
  EBX = (pop32());
  /* 12a03a09 mov esp, ebp */
  ESP = (EBP);
  /* 12a03a0b pop ebp */
  EBP = (pop32());
  /* 12a03a0c ret  */
  ESPCHK(0x12a03970u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x12a03a10 (28 bytes, 11 insns) */
void f_12a03a10(void) {
  FTRACE(0x12a03a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03a11 mov ebp, esp */
  EBP = (ESP);
  /* 12a03a13 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03a14 mov eax, dword ptr [0x12a2cc90] */
  EAX = (r32((uint32_t)(0x12a2cc90)));
  /* 12a03a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a03a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03a1f mov dword ptr [0x12a2cc90], ecx */
  w32((uint32_t)(0x12a2cc90), (ECX));
  /* 12a03a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03a28 mov esp, ebp */
  ESP = (EBP);
  /* 12a03a2a pop ebp */
  EBP = (pop32());
  /* 12a03a2b ret  */
  ESPCHK(0x12a03a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a30 @ 0x12a03a30 (136 bytes, 55 insns) */
void f_12a03a30(void) {
  FTRACE(0x12a03a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03a31 mov ebp, esp */
  EBP = (ESP);
  /* 12a03a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03a34 push ebx */
  push32((uint32_t)(EBX));
  /* 12a03a35 push esi */
  push32((uint32_t)(ESI));
  /* 12a03a36 push edi */
  push32((uint32_t)(EDI));
  /* 12a03a37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12a03a3e:;
  /* 12a03a3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a03a41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a03a44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03a47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a03a4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03a4c je 0x12a03aae */
  if (C.zf) goto L_12a03aae;
  /* 12a03a4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03a51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03a53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a03a55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03a58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03a61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03a64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a03a67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03a69 je 0x12a03aac */
  if (C.zf) goto L_12a03aac;
L_12a03a6b:;
  /* 12a03a6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03a6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a03a73 push eax */
  push32((uint32_t)(EAX));
  /* 12a03a74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03a77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03a79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12a03a7c push edx */
  push32((uint32_t)(EDX));
  /* 12a03a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03a80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03a83 push eax */
  push32((uint32_t)(EAX));
  /* 12a03a84 push 0x12a29750 */
  push32((uint32_t)(0x12a29750u));
  /* 12a03a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03a8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03a91 call 0x12a019e0 */
  push32(0x12a03a96u); f_12a019e0();
  /* 12a03a96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03a99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03a9c jne 0x12a03a9f */
  if (!C.zf) goto L_12a03a9f;
  /* 12a03a9e int3  */
  x86_unimpl("int3 @ 0x12a03a9e");
L_12a03a9f:;
  /* 12a03a9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03aa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03aa3 jne 0x12a03a6b */
  if (!C.zf) goto L_12a03a6b;
  /* 12a03aa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a03aac:;
  /* 12a03aac jmp 0x12a03a3e */
  goto L_12a03a3e;
L_12a03aae:;
  /* 12a03aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03ab1 pop edi */
  EDI = (pop32());
  /* 12a03ab2 pop esi */
  ESI = (pop32());
  /* 12a03ab3 pop ebx */
  EBX = (pop32());
  /* 12a03ab4 mov esp, ebp */
  ESP = (EBP);
  /* 12a03ab6 pop ebp */
  EBP = (pop32());
  /* 12a03ab7 ret  */
  ESPCHK(0x12a03a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ac0 @ 0x12a03ac0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12a03ac0(void) {
  FTRACE(0x12a03ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12a03ac3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a03ac7 push esi */
  push32((uint32_t)(ESI));
  /* 12a03ac8 push edi */
  push32((uint32_t)(EDI));
  /* 12a03ac9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a03ad0 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a03ad5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12a03ad8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03ada jne 0x12a03ae6 */
  if (!C.zf) goto L_12a03ae6;
  /* 12a03adc mov eax, 1 */
  EAX = (0x1u);
  /* 12a03ae1 jmp 0x12a03e18 */
  goto L_12a03e18;
L_12a03ae6:;
  /* 12a03ae6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03ae8 call 0x12a06320 */
  push32(0x12a03aedu); f_12a06320();
  /* 12a03aed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03af0 call 0x12a06b00 */
  push32(0x12a03af5u); f_12a06b00();
  /* 12a03af5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a03af8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03afc je 0x12a03c09 */
  if (C.zf) goto L_12a03c09;
  /* 12a03b02 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03b06 je 0x12a03c09 */
  if (C.zf) goto L_12a03c09;
  /* 12a03b0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a03b0f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a03b12 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a03b15 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03b18 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a03b1b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03b1f ja 0x12a03bd2 */
  if ((!C.cf&&!C.zf)) goto L_12a03bd2;
  /* 12a03b25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a03b28 jmp dword ptr [eax*4 + 0x12a03e1f] */
  switch (EAX) {
    case 0: goto L_12a03baa;
    case 1: goto L_12a03b82;
    case 2: goto L_12a03b5a;
    case 3: goto L_12a03b2f;
    default: x86_unimpl("switch@0x12a03b28 out of table"); return;
  }
L_12a03b2f:;
  /* 12a03b2f push 0x12a298a4 */
  push32((uint32_t)(0x12a298a4u));
  /* 12a03b34 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b41 call 0x12a019e0 */
  push32(0x12a03b46u); f_12a019e0();
  /* 12a03b46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03b49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03b4c jne 0x12a03b4f */
  if (!C.zf) goto L_12a03b4f;
  /* 12a03b4e int3  */
  x86_unimpl("int3 @ 0x12a03b4e");
L_12a03b4f:;
  /* 12a03b4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03b51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03b53 jne 0x12a03b2f */
  if (!C.zf) goto L_12a03b2f;
  /* 12a03b55 jmp 0x12a03bf8 */
  goto L_12a03bf8;
L_12a03b5a:;
  /* 12a03b5a push 0x12a29880 */
  push32((uint32_t)(0x12a29880u));
  /* 12a03b5f push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b6c call 0x12a019e0 */
  push32(0x12a03b71u); f_12a019e0();
  /* 12a03b71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03b74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03b77 jne 0x12a03b7a */
  if (!C.zf) goto L_12a03b7a;
  /* 12a03b79 int3  */
  x86_unimpl("int3 @ 0x12a03b79");
L_12a03b7a:;
  /* 12a03b7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03b7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a03b7e jne 0x12a03b5a */
  if (!C.zf) goto L_12a03b5a;
  /* 12a03b80 jmp 0x12a03bf8 */
  goto L_12a03bf8;
L_12a03b82:;
  /* 12a03b82 push 0x12a2985c */
  push32((uint32_t)(0x12a2985cu));
  /* 12a03b87 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03b8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03b94 call 0x12a019e0 */
  push32(0x12a03b99u); f_12a019e0();
  /* 12a03b99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03b9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03b9f jne 0x12a03ba2 */
  if (!C.zf) goto L_12a03ba2;
  /* 12a03ba1 int3  */
  x86_unimpl("int3 @ 0x12a03ba1");
L_12a03ba2:;
  /* 12a03ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03ba4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03ba6 jne 0x12a03b82 */
  if (!C.zf) goto L_12a03b82;
  /* 12a03ba8 jmp 0x12a03bf8 */
  goto L_12a03bf8;
L_12a03baa:;
  /* 12a03baa push 0x12a29838 */
  push32((uint32_t)(0x12a29838u));
  /* 12a03baf push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03bb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03bba push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03bbc call 0x12a019e0 */
  push32(0x12a03bc1u); f_12a019e0();
  /* 12a03bc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03bc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03bc7 jne 0x12a03bca */
  if (!C.zf) goto L_12a03bca;
  /* 12a03bc9 int3  */
  x86_unimpl("int3 @ 0x12a03bc9");
L_12a03bca:;
  /* 12a03bca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03bce jne 0x12a03baa */
  if (!C.zf) goto L_12a03baa;
  /* 12a03bd0 jmp 0x12a03bf8 */
  goto L_12a03bf8;
L_12a03bd2:;
  /* 12a03bd2 push 0x12a2980c */
  push32((uint32_t)(0x12a2980cu));
  /* 12a03bd7 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a03bdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03bde push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03be0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03be4 call 0x12a019e0 */
  push32(0x12a03be9u); f_12a019e0();
  /* 12a03be9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03bec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03bef jne 0x12a03bf2 */
  if (!C.zf) goto L_12a03bf2;
  /* 12a03bf1 int3  */
  x86_unimpl("int3 @ 0x12a03bf1");
L_12a03bf2:;
  /* 12a03bf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03bf4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a03bf6 jne 0x12a03bd2 */
  if (!C.zf) goto L_12a03bd2;
L_12a03bf8:;
  /* 12a03bf8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03bfa call 0x12a063c0 */
  push32(0x12a03bffu); f_12a063c0();
  /* 12a03bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03c02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03c04 jmp 0x12a03e18 */
  goto L_12a03e18;
L_12a03c09:;
  /* 12a03c09 mov eax, dword ptr [0x12a2e4d4] */
  EAX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a03c0e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a03c11 jmp 0x12a03c1b */
  goto L_12a03c1b;
L_12a03c13:;
  /* 12a03c13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a03c18 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a03c1b:;
  /* 12a03c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03c1f je 0x12a03e0b */
  if (C.zf) goto L_12a03e0b;
  /* 12a03c25 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12a03c2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c2f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a03c32 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03c38 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03c3b je 0x12a03c60 */
  if (C.zf) goto L_12a03c60;
  /* 12a03c3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c40 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03c44 je 0x12a03c60 */
  if (C.zf) goto L_12a03c60;
  /* 12a03c46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c49 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a03c4c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03c52 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03c55 je 0x12a03c60 */
  if (C.zf) goto L_12a03c60;
  /* 12a03c57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c5a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03c5e jne 0x12a03c78 */
  if (!C.zf) goto L_12a03c78;
L_12a03c60:;
  /* 12a03c60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c63 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a03c66 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a03c6c mov edx, dword ptr [ecx*4 + 0x12a2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca94)));
  /* 12a03c73 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a03c76 jmp 0x12a03c7f */
  goto L_12a03c7f;
L_12a03c78:;
  /* 12a03c78 mov dword ptr [ebp - 0x14], 0x12a29804 */
  w32((uint32_t)(EBP + -0x14), (0x12a29804u));
L_12a03c7f:;
  /* 12a03c7f push 4 */
  push32((uint32_t)(0x4u));
  /* 12a03c81 mov al, byte ptr [0x12a2ca90] */
  AL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a03c86 push eax */
  push32((uint32_t)(EAX));
  /* 12a03c87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c8a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03c8d push ecx */
  push32((uint32_t)(ECX));
  /* 12a03c8e call 0x12a03a30 */
  push32(0x12a03c93u); f_12a03a30();
  /* 12a03c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03c96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03c98 jne 0x12a03cd4 */
  if (!C.zf) goto L_12a03cd4;
L_12a03c9a:;
  /* 12a03c9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03c9d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03ca0 push edx */
  push32((uint32_t)(EDX));
  /* 12a03ca1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03ca4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12a03ca7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03ca8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a03cab push edx */
  push32((uint32_t)(EDX));
  /* 12a03cac push 0x12a296e0 */
  push32((uint32_t)(0x12a296e0u));
  /* 12a03cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03cb9 call 0x12a019e0 */
  push32(0x12a03cbeu); f_12a019e0();
  /* 12a03cbe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03cc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03cc4 jne 0x12a03cc7 */
  if (!C.zf) goto L_12a03cc7;
  /* 12a03cc6 int3  */
  x86_unimpl("int3 @ 0x12a03cc6");
L_12a03cc7:;
  /* 12a03cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03ccb jne 0x12a03c9a */
  if (!C.zf) goto L_12a03c9a;
  /* 12a03ccd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12a03cd4:;
  /* 12a03cd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a03cd6 mov cl, byte ptr [0x12a2ca90] */
  CL = (r8((uint32_t)(0x12a2ca90)));
  /* 12a03cdc push ecx */
  push32((uint32_t)(ECX));
  /* 12a03cdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03ce0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a03ce3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03ce6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12a03cea push edx */
  push32((uint32_t)(EDX));
  /* 12a03ceb call 0x12a03a30 */
  push32(0x12a03cf0u); f_12a03a30();
  /* 12a03cf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03cf5 jne 0x12a03d31 */
  if (!C.zf) goto L_12a03d31;
L_12a03cf7:;
  /* 12a03cf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03cfa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03cfd push eax */
  push32((uint32_t)(EAX));
  /* 12a03cfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d01 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a03d04 push edx */
  push32((uint32_t)(EDX));
  /* 12a03d05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a03d08 push eax */
  push32((uint32_t)(EAX));
  /* 12a03d09 push 0x12a296b4 */
  push32((uint32_t)(0x12a296b4u));
  /* 12a03d0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d16 call 0x12a019e0 */
  push32(0x12a03d1bu); f_12a019e0();
  /* 12a03d1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03d1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03d21 jne 0x12a03d24 */
  if (!C.zf) goto L_12a03d24;
  /* 12a03d23 int3  */
  x86_unimpl("int3 @ 0x12a03d23");
L_12a03d24:;
  /* 12a03d24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a03d26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03d28 jne 0x12a03cf7 */
  if (!C.zf) goto L_12a03cf7;
  /* 12a03d2a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12a03d31:;
  /* 12a03d31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d34 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03d38 jne 0x12a03d8a */
  if (!C.zf) goto L_12a03d8a;
  /* 12a03d3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a03d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03d41 mov dl, byte ptr [0x12a2ca91] */
  DL = (r8((uint32_t)(0x12a2ca91)));
  /* 12a03d47 push edx */
  push32((uint32_t)(EDX));
  /* 12a03d48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d4b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03d4e push eax */
  push32((uint32_t)(EAX));
  /* 12a03d4f call 0x12a03a30 */
  push32(0x12a03d54u); f_12a03a30();
  /* 12a03d54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03d59 jne 0x12a03d8a */
  if (!C.zf) goto L_12a03d8a;
L_12a03d5b:;
  /* 12a03d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d5e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03d61 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03d62 push 0x12a297d8 */
  push32((uint32_t)(0x12a297d8u));
  /* 12a03d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03d6f call 0x12a019e0 */
  push32(0x12a03d74u); f_12a019e0();
  /* 12a03d74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03d77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03d7a jne 0x12a03d7d */
  if (!C.zf) goto L_12a03d7d;
  /* 12a03d7c int3  */
  x86_unimpl("int3 @ 0x12a03d7c");
L_12a03d7d:;
  /* 12a03d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03d7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a03d81 jne 0x12a03d5b */
  if (!C.zf) goto L_12a03d5b;
  /* 12a03d83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12a03d8a:;
  /* 12a03d8a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03d8e jne 0x12a03e06 */
  if (!C.zf) goto L_12a03e06;
  /* 12a03d90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03d97 je 0x12a03dcc */
  if (C.zf) goto L_12a03dcc;
L_12a03d99:;
  /* 12a03d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03d9c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a03d9f push edx */
  push32((uint32_t)(EDX));
  /* 12a03da0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03da3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a03da6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03da7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a03daa push edx */
  push32((uint32_t)(EDX));
  /* 12a03dab push 0x12a297b8 */
  push32((uint32_t)(0x12a297b8u));
  /* 12a03db0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03db4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03db8 call 0x12a019e0 */
  push32(0x12a03dbdu); f_12a019e0();
  /* 12a03dbd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03dc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03dc3 jne 0x12a03dc6 */
  if (!C.zf) goto L_12a03dc6;
  /* 12a03dc5 int3  */
  x86_unimpl("int3 @ 0x12a03dc5");
L_12a03dc6:;
  /* 12a03dc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03dc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03dca jne 0x12a03d99 */
  if (!C.zf) goto L_12a03d99;
L_12a03dcc:;
  /* 12a03dcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03dcf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a03dd2 push edx */
  push32((uint32_t)(EDX));
  /* 12a03dd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a03dd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12a03dda mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a03ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12a03dde push 0x12a2978c */
  push32((uint32_t)(0x12a2978cu));
  /* 12a03de3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03deb call 0x12a019e0 */
  push32(0x12a03df0u); f_12a019e0();
  /* 12a03df0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03df3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03df6 jne 0x12a03df9 */
  if (!C.zf) goto L_12a03df9;
  /* 12a03df8 int3  */
  x86_unimpl("int3 @ 0x12a03df8");
L_12a03df9:;
  /* 12a03df9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a03dfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a03dfd jne 0x12a03dcc */
  if (!C.zf) goto L_12a03dcc;
  /* 12a03dff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a03e06:;
  /* 12a03e06 jmp 0x12a03c13 */
  goto L_12a03c13;
L_12a03e0b:;
  /* 12a03e0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03e0d call 0x12a063c0 */
  push32(0x12a03e12u); f_12a063c0();
  /* 12a03e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a03e18:;
  /* 12a03e18 pop edi */
  EDI = (pop32());
  /* 12a03e19 pop esi */
  ESI = (pop32());
  /* 12a03e1a pop ebx */
  EBX = (pop32());
  /* 12a03e1b mov esp, ebp */
  ESP = (EBP);
  /* 12a03e1d pop ebp */
  EBP = (pop32());
  /* 12a03e1e ret  */
  ESPCHK(0x12a03ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e30 @ 0x12a03e30 (34 bytes, 13 insns) */
void f_12a03e30(void) {
  FTRACE(0x12a03e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03e31 mov ebp, esp */
  EBP = (ESP);
  /* 12a03e33 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03e34 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a03e39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a03e3c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03e40 je 0x12a03e4b */
  if (C.zf) goto L_12a03e4b;
  /* 12a03e42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03e45 mov dword ptr [0x12a2ca84], ecx */
  w32((uint32_t)(0x12a2ca84), (ECX));
L_12a03e4b:;
  /* 12a03e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03e4e mov esp, ebp */
  ESP = (EBP);
  /* 12a03e50 pop ebp */
  EBP = (pop32());
  /* 12a03e51 ret  */
  ESPCHK(0x12a03e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x12a03e60 (103 bytes, 38 insns) */
void f_12a03e60(void) {
  FTRACE(0x12a03e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03e61 mov ebp, esp */
  EBP = (ESP);
  /* 12a03e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03e64 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a03e69 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12a03e6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03e6e jne 0x12a03e72 */
  if (!C.zf) goto L_12a03e72;
  /* 12a03e70 jmp 0x12a03ec3 */
  goto L_12a03ec3;
L_12a03e72:;
  /* 12a03e72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03e74 call 0x12a06320 */
  push32(0x12a03e79u); f_12a06320();
  /* 12a03e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03e7c mov ecx, dword ptr [0x12a2e4d4] */
  ECX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a03e82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a03e85 jmp 0x12a03e8f */
  goto L_12a03e8f;
L_12a03e87:;
  /* 12a03e87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03e8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a03e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a03e8f:;
  /* 12a03e8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03e93 je 0x12a03eb9 */
  if (C.zf) goto L_12a03eb9;
  /* 12a03e95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03e98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a03e9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a03ea1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03ea4 jne 0x12a03eb7 */
  if (!C.zf) goto L_12a03eb7;
  /* 12a03ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03ea9 push eax */
  push32((uint32_t)(EAX));
  /* 12a03eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03ead add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03eb1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12a03eb4u);
  /* 12a03eb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a03eb7:;
  /* 12a03eb7 jmp 0x12a03e87 */
  goto L_12a03e87;
L_12a03eb9:;
  /* 12a03eb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03ebb call 0x12a063c0 */
  push32(0x12a03ec0u); f_12a063c0();
  /* 12a03ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a03ec3:;
  /* 12a03ec3 mov esp, ebp */
  ESP = (EBP);
  /* 12a03ec5 pop ebp */
  EBP = (pop32());
  /* 12a03ec6 ret  */
  ESPCHK(0x12a03e60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12a03ed0 (75 bytes, 28 insns) */
void f_12a03ed0(void) {
  FTRACE(0x12a03ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12a03ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03ed8 je 0x12a03f0d */
  if (C.zf) goto L_12a03f0d;
  /* 12a03eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03edd push eax */
  push32((uint32_t)(EAX));
  /* 12a03ede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03ee2 call dword ptr [0x12a302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302b0))), 0x12a03ee8u);
  /* 12a03ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03eea jne 0x12a03f0d */
  if (!C.zf) goto L_12a03f0d;
  /* 12a03eec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03ef0 je 0x12a03f04 */
  if (C.zf) goto L_12a03f04;
  /* 12a03ef2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a03ef5 push edx */
  push32((uint32_t)(EDX));
  /* 12a03ef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12a03efa call dword ptr [0x12a302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302ac))), 0x12a03f00u);
  /* 12a03f00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03f02 jne 0x12a03f0d */
  if (!C.zf) goto L_12a03f0d;
L_12a03f04:;
  /* 12a03f04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a03f0b jmp 0x12a03f14 */
  goto L_12a03f14;
L_12a03f0d:;
  /* 12a03f0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a03f14:;
  /* 12a03f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03f17 mov esp, ebp */
  ESP = (EBP);
  /* 12a03f19 pop ebp */
  EBP = (pop32());
  /* 12a03f1a ret  */
  ESPCHK(0x12a03ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f20 @ 0x12a03f20 (134 bytes, 50 insns) */
void f_12a03f20(void) {
  FTRACE(0x12a03f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03f21 mov ebp, esp */
  EBP = (ESP);
  /* 12a03f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03f24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03f28 jne 0x12a03f2e */
  if (!C.zf) goto L_12a03f2e;
  /* 12a03f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03f2c jmp 0x12a03fa2 */
  goto L_12a03fa2;
L_12a03f2e:;
  /* 12a03f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a03f30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12a03f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03f35 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03f38 push eax */
  push32((uint32_t)(EAX));
  /* 12a03f39 call 0x12a03ed0 */
  push32(0x12a03f3eu); f_12a03ed0();
  /* 12a03f3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03f41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03f43 jne 0x12a03f49 */
  if (!C.zf) goto L_12a03f49;
  /* 12a03f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03f47 jmp 0x12a03fa2 */
  goto L_12a03fa2;
L_12a03f49:;
  /* 12a03f49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03f4c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03f4f push ecx */
  push32((uint32_t)(ECX));
  /* 12a03f50 call 0x12a06c20 */
  push32(0x12a03f55u); f_12a06c20();
  /* 12a03f55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03f58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a03f5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03f5f je 0x12a03f76 */
  if (C.zf) goto L_12a03f76;
  /* 12a03f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03f64 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03f67 push edx */
  push32((uint32_t)(EDX));
  /* 12a03f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03f6b push eax */
  push32((uint32_t)(EAX));
  /* 12a03f6c call 0x12a06c80 */
  push32(0x12a03f71u); f_12a06c80();
  /* 12a03f71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03f74 jmp 0x12a03fa2 */
  goto L_12a03fa2;
L_12a03f76:;
  /* 12a03f76 mov ecx, dword ptr [0x12a2e488] */
  ECX = (r32((uint32_t)(0x12a2e488)));
  /* 12a03f7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12a03f82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a03f84 je 0x12a03f8d */
  if (C.zf) goto L_12a03f8d;
  /* 12a03f86 mov eax, 1 */
  EAX = (0x1u);
  /* 12a03f8b jmp 0x12a03fa2 */
  goto L_12a03fa2;
L_12a03f8d:;
  /* 12a03f8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03f90 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03f93 push edx */
  push32((uint32_t)(EDX));
  /* 12a03f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a03f96 mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a03f9b push eax */
  push32((uint32_t)(EAX));
  /* 12a03f9c call dword ptr [0x12a302b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302b4))), 0x12a03fa2u);
L_12a03fa2:;
  /* 12a03fa2 mov esp, ebp */
  ESP = (EBP);
  /* 12a03fa4 pop ebp */
  EBP = (pop32());
  /* 12a03fa5 ret  */
  ESPCHK(0x12a03f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x12a03fb0 (227 bytes, 80 insns) */
void f_12a03fb0(void) {
  FTRACE(0x12a03fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a03fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a03fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12a03fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a03fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03fb7 push eax */
  push32((uint32_t)(EAX));
  /* 12a03fb8 call 0x12a03f20 */
  push32(0x12a03fbdu); f_12a03f20();
  /* 12a03fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a03fc2 jne 0x12a03fcb */
  if (!C.zf) goto L_12a03fcb;
  /* 12a03fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a03fc6 jmp 0x12a0408f */
  goto L_12a0408f;
L_12a03fcb:;
  /* 12a03fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 12a03fcd call 0x12a06320 */
  push32(0x12a03fd2u); f_12a06320();
  /* 12a03fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a03fd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a03fd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a03fdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a03fde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03fe1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03fe4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a03fe9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03fec je 0x12a04010 */
  if (C.zf) goto L_12a04010;
  /* 12a03fee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03ff1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a03ff5 je 0x12a04010 */
  if (C.zf) goto L_12a04010;
  /* 12a03ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a03ffa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a03ffd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a04002 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04005 je 0x12a04010 */
  if (C.zf) goto L_12a04010;
  /* 12a04007 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0400a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0400e jne 0x12a04083 */
  if (!C.zf) goto L_12a04083;
L_12a04010:;
  /* 12a04010 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a04012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04015 push edx */
  push32((uint32_t)(EDX));
  /* 12a04016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04019 push eax */
  push32((uint32_t)(EAX));
  /* 12a0401a call 0x12a03ed0 */
  push32(0x12a0401fu); f_12a03ed0();
  /* 12a0401f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04022 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04024 je 0x12a04083 */
  if (C.zf) goto L_12a04083;
  /* 12a04026 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04029 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a0402c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0402f jne 0x12a04083 */
  if (!C.zf) goto L_12a04083;
  /* 12a04031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04034 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12a04037 cmp ecx, dword ptr [0x12a2ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0403d jg 0x12a04083 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a04083;
  /* 12a0403f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04043 je 0x12a04050 */
  if (C.zf) goto L_12a04050;
  /* 12a04045 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04048 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0404b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12a0404e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a04050:;
  /* 12a04050 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04054 je 0x12a04061 */
  if (C.zf) goto L_12a04061;
  /* 12a04056 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04059 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0405c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0405f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a04061:;
  /* 12a04061 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04065 je 0x12a04072 */
  if (C.zf) goto L_12a04072;
  /* 12a04067 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0406a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0406d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a04070 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a04072:;
  /* 12a04072 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a04074 call 0x12a063c0 */
  push32(0x12a04079u); f_12a063c0();
  /* 12a04079 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0407c mov eax, 1 */
  EAX = (0x1u);
  /* 12a04081 jmp 0x12a0408f */
  goto L_12a0408f;
L_12a04083:;
  /* 12a04083 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a04085 call 0x12a063c0 */
  push32(0x12a0408au); f_12a063c0();
  /* 12a0408a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0408d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0408f:;
  /* 12a0408f mov esp, ebp */
  ESP = (EBP);
  /* 12a04091 pop ebp */
  EBP = (pop32());
  /* 12a04092 ret  */
  ESPCHK(0x12a03fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x12a040a0 (28 bytes, 11 insns) */
void f_12a040a0(void) {
  FTRACE(0x12a040a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a040a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a040a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a040a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a040a4 mov eax, dword ptr [0x12a2fe38] */
  EAX = (r32((uint32_t)(0x12a2fe38)));
  /* 12a040a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a040ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a040af mov dword ptr [0x12a2fe38], ecx */
  w32((uint32_t)(0x12a2fe38), (ECX));
  /* 12a040b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a040b8 mov esp, ebp */
  ESP = (EBP);
  /* 12a040ba pop ebp */
  EBP = (pop32());
  /* 12a040bb ret  */
  ESPCHK(0x12a040a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040c0 @ 0x12a040c0 (362 bytes, 116 insns) */
void f_12a040c0(void) {
  FTRACE(0x12a040c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a040c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a040c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a040c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a040c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a040c7 push esi */
  push32((uint32_t)(ESI));
  /* 12a040c8 push edi */
  push32((uint32_t)(EDI));
  /* 12a040c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a040cd jne 0x12a040fa */
  if (!C.zf) goto L_12a040fa;
L_12a040cf:;
  /* 12a040cf push 0x12a298ec */
  push32((uint32_t)(0x12a298ecu));
  /* 12a040d4 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a040d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a040db push 0 */
  push32((uint32_t)(0x0u));
  /* 12a040dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12a040df push 0 */
  push32((uint32_t)(0x0u));
  /* 12a040e1 call 0x12a019e0 */
  push32(0x12a040e6u); f_12a019e0();
  /* 12a040e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a040e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a040ec jne 0x12a040ef */
  if (!C.zf) goto L_12a040ef;
  /* 12a040ee int3  */
  x86_unimpl("int3 @ 0x12a040ee");
L_12a040ef:;
  /* 12a040ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a040f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a040f3 jne 0x12a040cf */
  if (!C.zf) goto L_12a040cf;
  /* 12a040f5 jmp 0x12a04223 */
  goto L_12a04223;
L_12a040fa:;
  /* 12a040fa push 9 */
  push32((uint32_t)(0x9u));
  /* 12a040fc call 0x12a06320 */
  push32(0x12a04101u); f_12a06320();
  /* 12a04101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04107 mov edx, dword ptr [0x12a2e4d4] */
  EDX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a0410d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a0410f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a04116 jmp 0x12a04121 */
  goto L_12a04121;
L_12a04118:;
  /* 12a04118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0411b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0411e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a04121:;
  /* 12a04121 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04125 jge 0x12a04145 */
  if ((C.sf==C.of)) goto L_12a04145;
  /* 12a04127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0412a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0412d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12a04135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04138 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0413b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12a04143 jmp 0x12a04118 */
  goto L_12a04118;
L_12a04145:;
  /* 12a04145 mov edx, dword ptr [0x12a2e4d4] */
  EDX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a0414b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0414e jmp 0x12a04158 */
  goto L_12a04158;
L_12a04150:;
  /* 12a04150 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04153 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04155 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a04158:;
  /* 12a04158 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0415c je 0x12a04201 */
  if (C.zf) goto L_12a04201;
  /* 12a04162 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04165 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a04168 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0416d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0416f jl 0x12a041d7 */
  if ((C.sf!=C.of)) goto L_12a041d7;
  /* 12a04171 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04174 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a04177 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0417d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04180 jge 0x12a041d7 */
  if ((C.sf==C.of)) goto L_12a041d7;
  /* 12a04182 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04185 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a04188 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0418e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04191 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12a04195 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04198 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0419b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a0419e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a041a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a041a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12a041ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a041ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a041b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a041b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a041b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12a041bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a041c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a041c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a041c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a041c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a041ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a041d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12a041d5 jmp 0x12a041fc */
  goto L_12a041fc;
L_12a041d7:;
  /* 12a041d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a041da push edx */
  push32((uint32_t)(EDX));
  /* 12a041db push 0x12a298c8 */
  push32((uint32_t)(0x12a298c8u));
  /* 12a041e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a041e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a041e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a041e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a041e8 call 0x12a019e0 */
  push32(0x12a041edu); f_12a019e0();
  /* 12a041ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a041f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a041f3 jne 0x12a041f6 */
  if (!C.zf) goto L_12a041f6;
  /* 12a041f5 int3  */
  x86_unimpl("int3 @ 0x12a041f5");
L_12a041f6:;
  /* 12a041f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a041f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a041fa jne 0x12a041d7 */
  if (!C.zf) goto L_12a041d7;
L_12a041fc:;
  /* 12a041fc jmp 0x12a04150 */
  goto L_12a04150;
L_12a04201:;
  /* 12a04201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04204 mov edx, dword ptr [0x12a2e4dc] */
  EDX = (r32((uint32_t)(0x12a2e4dc)));
  /* 12a0420a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12a0420d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04210 mov ecx, dword ptr [0x12a2e4d0] */
  ECX = (r32((uint32_t)(0x12a2e4d0)));
  /* 12a04216 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12a04219 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a0421b call 0x12a063c0 */
  push32(0x12a04220u); f_12a063c0();
  /* 12a04220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a04223:;
  /* 12a04223 pop edi */
  EDI = (pop32());
  /* 12a04224 pop esi */
  ESI = (pop32());
  /* 12a04225 pop ebx */
  EBX = (pop32());
  /* 12a04226 mov esp, ebp */
  ESP = (EBP);
  /* 12a04228 pop ebp */
  EBP = (pop32());
  /* 12a04229 ret  */
  ESPCHK(0x12a040c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x12a04230 (291 bytes, 95 insns) */
void f_12a04230(void) {
  FTRACE(0x12a04230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04230 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04231 mov ebp, esp */
  EBP = (ESP);
  /* 12a04233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04236 push ebx */
  push32((uint32_t)(EBX));
  /* 12a04237 push esi */
  push32((uint32_t)(ESI));
  /* 12a04238 push edi */
  push32((uint32_t)(EDI));
  /* 12a04239 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a04240 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04244 je 0x12a04252 */
  if (C.zf) goto L_12a04252;
  /* 12a04246 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0424a je 0x12a04252 */
  if (C.zf) goto L_12a04252;
  /* 12a0424c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04250 jne 0x12a04280 */
  if (!C.zf) goto L_12a04280;
L_12a04252:;
  /* 12a04252 push 0x12a29914 */
  push32((uint32_t)(0x12a29914u));
  /* 12a04257 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a0425c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0425e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04260 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04262 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04264 call 0x12a019e0 */
  push32(0x12a04269u); f_12a019e0();
  /* 12a04269 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0426c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0426f jne 0x12a04272 */
  if (!C.zf) goto L_12a04272;
  /* 12a04271 int3  */
  x86_unimpl("int3 @ 0x12a04271");
L_12a04272:;
  /* 12a04272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04276 jne 0x12a04252 */
  if (!C.zf) goto L_12a04252;
  /* 12a04278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0427b jmp 0x12a0434c */
  goto L_12a0434c;
L_12a04280:;
  /* 12a04280 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a04287 jmp 0x12a04292 */
  goto L_12a04292;
L_12a04289:;
  /* 12a04289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0428c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0428f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a04292:;
  /* 12a04292 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04296 jge 0x12a0431c */
  if ((C.sf==C.of)) goto L_12a0431c;
  /* 12a0429c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0429f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a042a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a042a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12a042ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a042b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a042b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12a042ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a042c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a042c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12a042ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a042ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a042d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12a042d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a042de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a042e3 jne 0x12a042f2 */
  if (!C.zf) goto L_12a042f2;
  /* 12a042e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a042e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a042eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a042f0 je 0x12a04317 */
  if (C.zf) goto L_12a04317;
L_12a042f2:;
  /* 12a042f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a042f6 je 0x12a04317 */
  if (C.zf) goto L_12a04317;
  /* 12a042f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a042fc jne 0x12a04310 */
  if (!C.zf) goto L_12a04310;
  /* 12a042fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04302 jne 0x12a04317 */
  if (!C.zf) goto L_12a04317;
  /* 12a04304 mov eax, dword ptr [0x12a2ca84] */
  EAX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a04309 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0430c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0430e je 0x12a04317 */
  if (C.zf) goto L_12a04317;
L_12a04310:;
  /* 12a04310 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12a04317:;
  /* 12a04317 jmp 0x12a04289 */
  goto L_12a04289;
L_12a0431c:;
  /* 12a0431c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0431f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04322 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12a04325 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0432b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12a0432e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04331 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04334 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12a04337 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0433a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0433d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12a04340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04343 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a04349 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0434c:;
  /* 12a0434c pop edi */
  EDI = (pop32());
  /* 12a0434d pop esi */
  ESI = (pop32());
  /* 12a0434e pop ebx */
  EBX = (pop32());
  /* 12a0434f mov esp, ebp */
  ESP = (EBP);
  /* 12a04351 pop ebp */
  EBP = (pop32());
  /* 12a04352 ret  */
  ESPCHK(0x12a04230u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x12a04360 (697 bytes, 253 insns) */
void f_12a04360(void) {
  FTRACE(0x12a04360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04360 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04361 mov ebp, esp */
  EBP = (ESP);
  /* 12a04363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04366 push ebx */
  push32((uint32_t)(EBX));
  /* 12a04367 push esi */
  push32((uint32_t)(ESI));
  /* 12a04368 push edi */
  push32((uint32_t)(EDI));
  /* 12a04369 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a04370 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a04372 call 0x12a06320 */
  push32(0x12a04377u); f_12a06320();
  /* 12a04377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0437a:;
  /* 12a0437a push 0x12a29a0c */
  push32((uint32_t)(0x12a29a0cu));
  /* 12a0437f push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a04384 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04386 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04388 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0438a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0438c call 0x12a019e0 */
  push32(0x12a04391u); f_12a019e0();
  /* 12a04391 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04394 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04397 jne 0x12a0439a */
  if (!C.zf) goto L_12a0439a;
  /* 12a04399 int3  */
  x86_unimpl("int3 @ 0x12a04399");
L_12a0439a:;
  /* 12a0439a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0439c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0439e jne 0x12a0437a */
  if (!C.zf) goto L_12a0437a;
  /* 12a043a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a043a4 je 0x12a043ae */
  if (C.zf) goto L_12a043ae;
  /* 12a043a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a043a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a043ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a043ae:;
  /* 12a043ae mov eax, dword ptr [0x12a2e4d4] */
  EAX = (r32((uint32_t)(0x12a2e4d4)));
  /* 12a043b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a043b6 jmp 0x12a043c0 */
  goto L_12a043c0;
L_12a043b8:;
  /* 12a043b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a043bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a043bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a043c0:;
  /* 12a043c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a043c4 je 0x12a045e2 */
  if (C.zf) goto L_12a045e2;
  /* 12a043ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a043cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a043d0 je 0x12a045e2 */
  if (C.zf) goto L_12a045e2;
  /* 12a043d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a043d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a043dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a043e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a043e5 je 0x12a04414 */
  if (C.zf) goto L_12a04414;
  /* 12a043e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a043ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12a043ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a043f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a043f5 je 0x12a04414 */
  if (C.zf) goto L_12a04414;
  /* 12a043f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a043fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a043fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a04402 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04405 jne 0x12a04419 */
  if (!C.zf) goto L_12a04419;
  /* 12a04407 mov ecx, dword ptr [0x12a2ca84] */
  ECX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a0440d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12a04410 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04412 jne 0x12a04419 */
  if (!C.zf) goto L_12a04419;
L_12a04414:;
  /* 12a04414 jmp 0x12a045dd */
  goto L_12a045dd;
L_12a04419:;
  /* 12a04419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0441c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04420 je 0x12a04492 */
  if (C.zf) goto L_12a04492;
  /* 12a04422 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04424 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a04426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04429 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0442c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0442d call 0x12a03ed0 */
  push32(0x12a04432u); f_12a03ed0();
  /* 12a04432 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04435 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04437 jne 0x12a04463 */
  if (!C.zf) goto L_12a04463;
L_12a04439:;
  /* 12a04439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0443c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a0443f push eax */
  push32((uint32_t)(EAX));
  /* 12a04440 push 0x12a299f8 */
  push32((uint32_t)(0x12a299f8u));
  /* 12a04445 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04447 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04449 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0444b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0444d call 0x12a019e0 */
  push32(0x12a04452u); f_12a019e0();
  /* 12a04452 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04455 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04458 jne 0x12a0445b */
  if (!C.zf) goto L_12a0445b;
  /* 12a0445a int3  */
  x86_unimpl("int3 @ 0x12a0445a");
L_12a0445b:;
  /* 12a0445b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0445d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0445f jne 0x12a04439 */
  if (!C.zf) goto L_12a04439;
  /* 12a04461 jmp 0x12a04492 */
  goto L_12a04492;
L_12a04463:;
  /* 12a04463 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04466 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a04469 push eax */
  push32((uint32_t)(EAX));
  /* 12a0446a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0446d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a04470 push edx */
  push32((uint32_t)(EDX));
  /* 12a04471 push 0x12a299ec */
  push32((uint32_t)(0x12a299ecu));
  /* 12a04476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04478 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0447a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0447c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0447e call 0x12a019e0 */
  push32(0x12a04483u); f_12a019e0();
  /* 12a04483 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04486 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04489 jne 0x12a0448c */
  if (!C.zf) goto L_12a0448c;
  /* 12a0448b int3  */
  x86_unimpl("int3 @ 0x12a0448b");
L_12a0448c:;
  /* 12a0448c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0448e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04490 jne 0x12a04463 */
  if (!C.zf) goto L_12a04463;
L_12a04492:;
  /* 12a04492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04495 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a04498 push edx */
  push32((uint32_t)(EDX));
  /* 12a04499 push 0x12a299e4 */
  push32((uint32_t)(0x12a299e4u));
  /* 12a0449e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044a6 call 0x12a019e0 */
  push32(0x12a044abu); f_12a019e0();
  /* 12a044ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a044ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a044b1 jne 0x12a044b4 */
  if (!C.zf) goto L_12a044b4;
  /* 12a044b3 int3  */
  x86_unimpl("int3 @ 0x12a044b3");
L_12a044b4:;
  /* 12a044b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a044b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a044b8 jne 0x12a04492 */
  if (!C.zf) goto L_12a04492;
  /* 12a044ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a044bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a044c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a044c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a044c9 jne 0x12a0453c */
  if (!C.zf) goto L_12a0453c;
L_12a044cb:;
  /* 12a044cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a044ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a044d1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a044d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a044d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a044d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a044db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a044e0 push eax */
  push32((uint32_t)(EAX));
  /* 12a044e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a044e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a044e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a044e8 push 0x12a299b0 */
  push32((uint32_t)(0x12a299b0u));
  /* 12a044ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044ef push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a044f5 call 0x12a019e0 */
  push32(0x12a044fau); f_12a019e0();
  /* 12a044fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a044fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04500 jne 0x12a04503 */
  if (!C.zf) goto L_12a04503;
  /* 12a04502 int3  */
  x86_unimpl("int3 @ 0x12a04502");
L_12a04503:;
  /* 12a04503 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04505 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04507 jne 0x12a044cb */
  if (!C.zf) goto L_12a044cb;
  /* 12a04509 cmp dword ptr [0x12a2fe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04510 je 0x12a0452b */
  if (C.zf) goto L_12a0452b;
  /* 12a04512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04515 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a04518 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04519 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0451c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0451f push edx */
  push32((uint32_t)(EDX));
  /* 12a04520 call dword ptr [0x12a2fe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2fe38))), 0x12a04526u);
  /* 12a04526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04529 jmp 0x12a04537 */
  goto L_12a04537;
L_12a0452b:;
  /* 12a0452b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0452e push eax */
  push32((uint32_t)(EAX));
  /* 12a0452f call 0x12a04620 */
  push32(0x12a04534u); f_12a04620();
  /* 12a04534 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a04537:;
  /* 12a04537 jmp 0x12a045dd */
  goto L_12a045dd;
L_12a0453c:;
  /* 12a0453c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0453f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04543 jne 0x12a04582 */
  if (!C.zf) goto L_12a04582;
L_12a04545:;
  /* 12a04545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04548 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0454b push eax */
  push32((uint32_t)(EAX));
  /* 12a0454c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0454f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04552 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04553 push 0x12a29988 */
  push32((uint32_t)(0x12a29988u));
  /* 12a04558 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0455a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0455c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0455e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04560 call 0x12a019e0 */
  push32(0x12a04565u); f_12a019e0();
  /* 12a04565 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04568 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0456b jne 0x12a0456e */
  if (!C.zf) goto L_12a0456e;
  /* 12a0456d int3  */
  x86_unimpl("int3 @ 0x12a0456d");
L_12a0456e:;
  /* 12a0456e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04570 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04572 jne 0x12a04545 */
  if (!C.zf) goto L_12a04545;
  /* 12a04574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04577 push eax */
  push32((uint32_t)(EAX));
  /* 12a04578 call 0x12a04620 */
  push32(0x12a0457du); f_12a04620();
  /* 12a0457d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04580 jmp 0x12a045dd */
  goto L_12a045dd;
L_12a04582:;
  /* 12a04582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04585 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12a04588 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0458e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04591 jne 0x12a045dd */
  if (!C.zf) goto L_12a045dd;
L_12a04593:;
  /* 12a04593 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04596 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a04599 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0459a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0459d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a045a0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a045a3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a045a8 push eax */
  push32((uint32_t)(EAX));
  /* 12a045a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a045ac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a045af push ecx */
  push32((uint32_t)(ECX));
  /* 12a045b0 push 0x12a29954 */
  push32((uint32_t)(0x12a29954u));
  /* 12a045b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045bd call 0x12a019e0 */
  push32(0x12a045c2u); f_12a019e0();
  /* 12a045c2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a045c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a045c8 jne 0x12a045cb */
  if (!C.zf) goto L_12a045cb;
  /* 12a045ca int3  */
  x86_unimpl("int3 @ 0x12a045ca");
L_12a045cb:;
  /* 12a045cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a045cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a045cf jne 0x12a04593 */
  if (!C.zf) goto L_12a04593;
  /* 12a045d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a045d4 push eax */
  push32((uint32_t)(EAX));
  /* 12a045d5 call 0x12a04620 */
  push32(0x12a045dau); f_12a04620();
  /* 12a045da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a045dd:;
  /* 12a045dd jmp 0x12a043b8 */
  goto L_12a043b8;
L_12a045e2:;
  /* 12a045e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a045e4 call 0x12a063c0 */
  push32(0x12a045e9u); f_12a063c0();
  /* 12a045e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a045ec:;
  /* 12a045ec push 0x12a2993c */
  push32((uint32_t)(0x12a2993cu));
  /* 12a045f1 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a045f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045fc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a045fe call 0x12a019e0 */
  push32(0x12a04603u); f_12a019e0();
  /* 12a04603 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04606 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04609 jne 0x12a0460c */
  if (!C.zf) goto L_12a0460c;
  /* 12a0460b int3  */
  x86_unimpl("int3 @ 0x12a0460b");
L_12a0460c:;
  /* 12a0460c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0460e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04610 jne 0x12a045ec */
  if (!C.zf) goto L_12a045ec;
  /* 12a04612 pop edi */
  EDI = (pop32());
  /* 12a04613 pop esi */
  ESI = (pop32());
  /* 12a04614 pop ebx */
  EBX = (pop32());
  /* 12a04615 mov esp, ebp */
  ESP = (EBP);
  /* 12a04617 pop ebp */
  EBP = (pop32());
  /* 12a04618 ret  */
  ESPCHK(0x12a04360u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x12a04620 (276 bytes, 89 insns) */
void f_12a04620(void) {
  FTRACE(0x12a04620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04620 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04621 mov ebp, esp */
  EBP = (ESP);
  /* 12a04623 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04626 push ebx */
  push32((uint32_t)(EBX));
  /* 12a04627 push esi */
  push32((uint32_t)(ESI));
  /* 12a04628 push edi */
  push32((uint32_t)(EDI));
  /* 12a04629 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12a04630 jmp 0x12a0463b */
  goto L_12a0463b;
L_12a04632:;
  /* 12a04632 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a04635 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04638 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12a0463b:;
  /* 12a0463b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0463e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04642 jge 0x12a0464f */
  if ((C.sf==C.of)) goto L_12a0464f;
  /* 12a04644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04647 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0464a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12a0464d jmp 0x12a04656 */
  goto L_12a04656;
L_12a0464f:;
  /* 12a0464f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12a04656:;
  /* 12a04656 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a04659 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0465c jge 0x12a046fc */
  if ((C.sf==C.of)) goto L_12a046fc;
  /* 12a04662 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04665 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04668 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12a0466b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12a0466e cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04675 jle 0x12a04693 */
  if ((C.zf||C.sf!=C.of)) goto L_12a04693;
  /* 12a04677 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12a0467c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a0467f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a04685 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04686 call 0x12a08930 */
  push32(0x12a0468bu); f_12a08930();
  /* 12a0468b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0468e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12a04691 jmp 0x12a046b0 */
  goto L_12a046b0;
L_12a04693:;
  /* 12a04693 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a04696 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0469c mov eax, dword ptr [0x12a2cc98] */
  EAX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a046a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a046a3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12a046a7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12a046ad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12a046b0:;
  /* 12a046b0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a046b4 je 0x12a046c4 */
  if (C.zf) goto L_12a046c4;
  /* 12a046b6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a046b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a046bf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12a046c2 jmp 0x12a046cb */
  goto L_12a046cb;
L_12a046c4:;
  /* 12a046c4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12a046cb:;
  /* 12a046cb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a046ce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12a046d1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12a046d5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12a046d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a046de push edx */
  push32((uint32_t)(EDX));
  /* 12a046df push 0x12a29a30 */
  push32((uint32_t)(0x12a29a30u));
  /* 12a046e4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a046e7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a046ea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12a046ee push ecx */
  push32((uint32_t)(ECX));
  /* 12a046ef call 0x12a08830 */
  push32(0x12a046f4u); f_12a08830();
  /* 12a046f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a046f7 jmp 0x12a04632 */
  goto L_12a04632;
L_12a046fc:;
  /* 12a046fc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12a046ff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12a04704:;
  /* 12a04704 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12a04707 push eax */
  push32((uint32_t)(EAX));
  /* 12a04708 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12a0470b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0470c push 0x12a29a20 */
  push32((uint32_t)(0x12a29a20u));
  /* 12a04711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04713 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04715 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04717 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04719 call 0x12a019e0 */
  push32(0x12a0471eu); f_12a019e0();
  /* 12a0471e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04721 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04724 jne 0x12a04727 */
  if (!C.zf) goto L_12a04727;
  /* 12a04726 int3  */
  x86_unimpl("int3 @ 0x12a04726");
L_12a04727:;
  /* 12a04727 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04729 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0472b jne 0x12a04704 */
  if (!C.zf) goto L_12a04704;
  /* 12a0472d pop edi */
  EDI = (pop32());
  /* 12a0472e pop esi */
  ESI = (pop32());
  /* 12a0472f pop ebx */
  EBX = (pop32());
  /* 12a04730 mov esp, ebp */
  ESP = (EBP);
  /* 12a04732 pop ebp */
  EBP = (pop32());
  /* 12a04733 ret  */
  ESPCHK(0x12a04620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x12a04740 (116 bytes, 46 insns) */
void f_12a04740(void) {
  FTRACE(0x12a04740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04740 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04741 mov ebp, esp */
  EBP = (ESP);
  /* 12a04743 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04746 push ebx */
  push32((uint32_t)(EBX));
  /* 12a04747 push esi */
  push32((uint32_t)(ESI));
  /* 12a04748 push edi */
  push32((uint32_t)(EDI));
  /* 12a04749 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12a0474c push eax */
  push32((uint32_t)(EAX));
  /* 12a0474d call 0x12a040c0 */
  push32(0x12a04752u); f_12a040c0();
  /* 12a04752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04755 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04759 jne 0x12a04774 */
  if (!C.zf) goto L_12a04774;
  /* 12a0475b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0475f jne 0x12a04774 */
  if (!C.zf) goto L_12a04774;
  /* 12a04761 mov ecx, dword ptr [0x12a2ca84] */
  ECX = (r32((uint32_t)(0x12a2ca84)));
  /* 12a04767 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0476a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0476c je 0x12a047ab */
  if (C.zf) goto L_12a047ab;
  /* 12a0476e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04772 je 0x12a047ab */
  if (C.zf) goto L_12a047ab;
L_12a04774:;
  /* 12a04774 push 0x12a29a38 */
  push32((uint32_t)(0x12a29a38u));
  /* 12a04779 push 0x12a29404 */
  push32((uint32_t)(0x12a29404u));
  /* 12a0477e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04780 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04782 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04784 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04786 call 0x12a019e0 */
  push32(0x12a0478bu); f_12a019e0();
  /* 12a0478b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0478e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04791 jne 0x12a04794 */
  if (!C.zf) goto L_12a04794;
  /* 12a04793 int3  */
  x86_unimpl("int3 @ 0x12a04793");
L_12a04794:;
  /* 12a04794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04796 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04798 jne 0x12a04774 */
  if (!C.zf) goto L_12a04774;
  /* 12a0479a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0479c call 0x12a04360 */
  push32(0x12a047a1u); f_12a04360();
  /* 12a047a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a047a4 mov eax, 1 */
  EAX = (0x1u);
  /* 12a047a9 jmp 0x12a047ad */
  goto L_12a047ad;
L_12a047ab:;
  /* 12a047ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a047ad:;
  /* 12a047ad pop edi */
  EDI = (pop32());
  /* 12a047ae pop esi */
  ESI = (pop32());
  /* 12a047af pop ebx */
  EBX = (pop32());
  /* 12a047b0 mov esp, ebp */
  ESP = (EBP);
  /* 12a047b2 pop ebp */
  EBP = (pop32());
  /* 12a047b3 ret  */
  ESPCHK(0x12a04740u, _esp0);
  ESP += 4; return;
}

/* FUN_100047c0 @ 0x12a047c0 (197 bytes, 79 insns) */
void f_12a047c0(void) {
  FTRACE(0x12a047c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a047c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a047c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a047c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a047c4 push ebx */
  push32((uint32_t)(EBX));
  /* 12a047c5 push esi */
  push32((uint32_t)(ESI));
  /* 12a047c6 push edi */
  push32((uint32_t)(EDI));
  /* 12a047c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a047cb jne 0x12a047d2 */
  if (!C.zf) goto L_12a047d2;
  /* 12a047cd jmp 0x12a0487e */
  goto L_12a0487e;
L_12a047d2:;
  /* 12a047d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a047d9 jmp 0x12a047e4 */
  goto L_12a047e4;
L_12a047db:;
  /* 12a047db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a047de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a047e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a047e4:;
  /* 12a047e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a047e8 jge 0x12a0482e */
  if ((C.sf==C.of)) goto L_12a0482e;
L_12a047ea:;
  /* 12a047ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a047ed mov edx, dword ptr [ecx*4 + 0x12a2ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2ca94)));
  /* 12a047f4 push edx */
  push32((uint32_t)(EDX));
  /* 12a047f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a047f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a047fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12a047ff push edx */
  push32((uint32_t)(EDX));
  /* 12a04800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04806 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12a0480a push edx */
  push32((uint32_t)(EDX));
  /* 12a0480b push 0x12a29a94 */
  push32((uint32_t)(0x12a29a94u));
  /* 12a04810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04812 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04816 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04818 call 0x12a019e0 */
  push32(0x12a0481du); f_12a019e0();
  /* 12a0481d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04820 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04823 jne 0x12a04826 */
  if (!C.zf) goto L_12a04826;
  /* 12a04825 int3  */
  x86_unimpl("int3 @ 0x12a04825");
L_12a04826:;
  /* 12a04826 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04828 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0482a jne 0x12a047ea */
  if (!C.zf) goto L_12a047ea;
  /* 12a0482c jmp 0x12a047db */
  goto L_12a047db;
L_12a0482e:;
  /* 12a0482e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04831 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12a04834 push edx */
  push32((uint32_t)(EDX));
  /* 12a04835 push 0x12a29a70 */
  push32((uint32_t)(0x12a29a70u));
  /* 12a0483a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0483c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0483e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04840 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04842 call 0x12a019e0 */
  push32(0x12a04847u); f_12a019e0();
  /* 12a04847 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0484a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0484d jne 0x12a04850 */
  if (!C.zf) goto L_12a04850;
  /* 12a0484f int3  */
  x86_unimpl("int3 @ 0x12a0484f");
L_12a04850:;
  /* 12a04850 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04854 jne 0x12a0482e */
  if (!C.zf) goto L_12a0482e;
L_12a04856:;
  /* 12a04856 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04859 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12a0485c push edx */
  push32((uint32_t)(EDX));
  /* 12a0485d push 0x12a29a50 */
  push32((uint32_t)(0x12a29a50u));
  /* 12a04862 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04864 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04866 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04868 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0486a call 0x12a019e0 */
  push32(0x12a0486fu); f_12a019e0();
  /* 12a0486f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04872 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04875 jne 0x12a04878 */
  if (!C.zf) goto L_12a04878;
  /* 12a04877 int3  */
  x86_unimpl("int3 @ 0x12a04877");
L_12a04878:;
  /* 12a04878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0487a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0487c jne 0x12a04856 */
  if (!C.zf) goto L_12a04856;
L_12a0487e:;
  /* 12a0487e pop edi */
  EDI = (pop32());
  /* 12a0487f pop esi */
  ESI = (pop32());
  /* 12a04880 pop ebx */
  EBX = (pop32());
  /* 12a04881 mov esp, ebp */
  ESP = (EBP);
  /* 12a04883 pop ebp */
  EBP = (pop32());
  /* 12a04884 ret  */
  ESPCHK(0x12a047c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x12a04890 (329 bytes, 102 insns) */
void f_12a04890(void) {
  FTRACE(0x12a04890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04890 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04891 mov ebp, esp */
  EBP = (ESP);
  /* 12a04893 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04896 cmp dword ptr [0x12a2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0489d jne 0x12a048a4 */
  if (!C.zf) goto L_12a048a4;
  /* 12a0489f call 0x12a091d0 */
  push32(0x12a048a4u); f_12a091d0();
L_12a048a4:;
  /* 12a048a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a048ab mov eax, dword ptr [0x12a2e470] */
  EAX = (r32((uint32_t)(0x12a2e470)));
  /* 12a048b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a048b3:;
  /* 12a048b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a048b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a048b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a048bb je 0x12a048e9 */
  if (C.zf) goto L_12a048e9;
  /* 12a048bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a048c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a048c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a048c6 je 0x12a048d1 */
  if (C.zf) goto L_12a048d1;
  /* 12a048c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a048cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a048ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a048d1:;
  /* 12a048d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a048d4 push eax */
  push32((uint32_t)(EAX));
  /* 12a048d5 call 0x12a05750 */
  push32(0x12a048dau); f_12a05750();
  /* 12a048da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a048dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a048e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12a048e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a048e7 jmp 0x12a048b3 */
  goto L_12a048b3;
L_12a048e9:;
  /* 12a048e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12a048eb push 0x12a29ab4 */
  push32((uint32_t)(0x12a29ab4u));
  /* 12a048f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a048f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a048f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12a048fc push ecx */
  push32((uint32_t)(ECX));
  /* 12a048fd call 0x12a02920 */
  push32(0x12a04902u); f_12a02920();
  /* 12a04902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04905 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a04908 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0490b mov dword ptr [0x12a2e4a4], edx */
  w32((uint32_t)(0x12a2e4a4), (EDX));
  /* 12a04911 cmp dword ptr [0x12a2e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04918 jne 0x12a04924 */
  if (!C.zf) goto L_12a04924;
  /* 12a0491a push 9 */
  push32((uint32_t)(0x9u));
  /* 12a0491c call 0x12a01890 */
  push32(0x12a04921u); f_12a01890();
  /* 12a04921 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a04924:;
  /* 12a04924 mov eax, dword ptr [0x12a2e470] */
  EAX = (r32((uint32_t)(0x12a2e470)));
  /* 12a04929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0492c jmp 0x12a04937 */
  goto L_12a04937;
L_12a0492e:;
  /* 12a0492e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04931 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04934 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a04937:;
  /* 12a04937 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0493a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0493d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0493f je 0x12a049a7 */
  if (C.zf) goto L_12a049a7;
  /* 12a04941 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04944 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04945 call 0x12a05750 */
  push32(0x12a0494au); f_12a05750();
  /* 12a0494a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0494d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04950 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a04953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04956 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a04959 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0495c je 0x12a049a5 */
  if (C.zf) goto L_12a049a5;
  /* 12a0495e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12a04960 push 0x12a29ab4 */
  push32((uint32_t)(0x12a29ab4u));
  /* 12a04965 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a04967 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0496a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0496b call 0x12a02920 */
  push32(0x12a04970u); f_12a02920();
  /* 12a04970 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04973 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04976 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a04978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0497b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0497e jne 0x12a0498a */
  if (!C.zf) goto L_12a0498a;
  /* 12a04980 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a04982 call 0x12a01890 */
  push32(0x12a04987u); f_12a01890();
  /* 12a04987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0498a:;
  /* 12a0498a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0498d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0498e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04991 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a04993 push eax */
  push32((uint32_t)(EAX));
  /* 12a04994 call 0x12a058d0 */
  push32(0x12a04999u); f_12a058d0();
  /* 12a04999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0499c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0499f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a049a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12a049a5:;
  /* 12a049a5 jmp 0x12a0492e */
  goto L_12a0492e;
L_12a049a7:;
  /* 12a049a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a049a9 mov edx, dword ptr [0x12a2e470] */
  EDX = (r32((uint32_t)(0x12a2e470)));
  /* 12a049af push edx */
  push32((uint32_t)(EDX));
  /* 12a049b0 call 0x12a033b0 */
  push32(0x12a049b5u); f_12a033b0();
  /* 12a049b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a049b8 mov dword ptr [0x12a2e470], 0 */
  w32((uint32_t)(0x12a2e470), (0x0u));
  /* 12a049c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a049c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a049cb mov dword ptr [0x12a2ffa0], 1 */
  w32((uint32_t)(0x12a2ffa0), (0x1u));
  /* 12a049d5 mov esp, ebp */
  ESP = (EBP);
  /* 12a049d7 pop ebp */
  EBP = (pop32());
  /* 12a049d8 ret  */
  ESPCHK(0x12a04890u, _esp0);
  ESP += 4; return;
}

/* FUN_100049e0 @ 0x12a049e0 (216 bytes, 69 insns) */
void f_12a049e0(void) {
  FTRACE(0x12a049e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a049e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a049e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a049e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a049e6 cmp dword ptr [0x12a2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a049ed jne 0x12a049f4 */
  if (!C.zf) goto L_12a049f4;
  /* 12a049ef call 0x12a091d0 */
  push32(0x12a049f4u); f_12a091d0();
L_12a049f4:;
  /* 12a049f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12a049f9 push 0x12a2e4e0 */
  push32((uint32_t)(0x12a2e4e0u));
  /* 12a049fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04a00 call dword ptr [0x12a3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3026c))), 0x12a04a06u);
  /* 12a04a06 mov dword ptr [0x12a2e4b4], 0x12a2e4e0 */
  w32((uint32_t)(0x12a2e4b4), (0x12a2e4e0u));
  /* 12a04a10 mov eax, dword ptr [0x12a2ffcc] */
  EAX = (r32((uint32_t)(0x12a2ffcc)));
  /* 12a04a15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04a18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04a1a jne 0x12a04a27 */
  if (!C.zf) goto L_12a04a27;
  /* 12a04a1c mov edx, dword ptr [0x12a2e4b4] */
  EDX = (r32((uint32_t)(0x12a2e4b4)));
  /* 12a04a22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a04a25 jmp 0x12a04a2f */
  goto L_12a04a2f;
L_12a04a27:;
  /* 12a04a27 mov eax, dword ptr [0x12a2ffcc] */
  EAX = (r32((uint32_t)(0x12a2ffcc)));
  /* 12a04a2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12a04a2f:;
  /* 12a04a2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a04a32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a04a35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12a04a38 push edx */
  push32((uint32_t)(EDX));
  /* 12a04a39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12a04a3c push eax */
  push32((uint32_t)(EAX));
  /* 12a04a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04a41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04a44 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04a45 call 0x12a04ac0 */
  push32(0x12a04a4au); f_12a04ac0();
  /* 12a04a4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04a4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12a04a52 push 0x12a29ac0 */
  push32((uint32_t)(0x12a29ac0u));
  /* 12a04a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a04a59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04a5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04a5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12a04a62 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04a63 call 0x12a02920 */
  push32(0x12a04a68u); f_12a02920();
  /* 12a04a68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04a6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a04a6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04a72 jne 0x12a04a7e */
  if (!C.zf) goto L_12a04a7e;
  /* 12a04a74 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a04a76 call 0x12a01890 */
  push32(0x12a04a7bu); f_12a01890();
  /* 12a04a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a04a7e:;
  /* 12a04a7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12a04a81 push edx */
  push32((uint32_t)(EDX));
  /* 12a04a82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12a04a85 push eax */
  push32((uint32_t)(EAX));
  /* 12a04a86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04a89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04a8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12a04a8f push eax */
  push32((uint32_t)(EAX));
  /* 12a04a90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04a94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04a97 push edx */
  push32((uint32_t)(EDX));
  /* 12a04a98 call 0x12a04ac0 */
  push32(0x12a04a9du); f_12a04ac0();
  /* 12a04a9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04aa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04aa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04aa6 mov dword ptr [0x12a2e498], eax */
  w32((uint32_t)(0x12a2e498), (EAX));
  /* 12a04aab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04aae mov dword ptr [0x12a2e49c], ecx */
  w32((uint32_t)(0x12a2e49c), (ECX));
  /* 12a04ab4 mov esp, ebp */
  ESP = (EBP);
  /* 12a04ab6 pop ebp */
  EBP = (pop32());
  /* 12a04ab7 ret  */
  ESPCHK(0x12a049e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x12a04ac0 (1060 bytes, 360 insns) */
void f_12a04ac0(void) {
  FTRACE(0x12a04ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12a04ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04ac6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04ac9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a04acf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04ad2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12a04ad8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a04adb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a04ade cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ae2 je 0x12a04af5 */
  if (C.zf) goto L_12a04af5;
  /* 12a04ae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04ae7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04aea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a04aec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04aef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04af2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12a04af5:;
  /* 12a04af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04af8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04afb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04afe jne 0x12a04bcd */
  if (!C.zf) goto L_12a04bcd;
L_12a04b04:;
  /* 12a04b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b0a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a04b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b10 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04b13 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04b16 je 0x12a04b92 */
  if (C.zf) goto L_12a04b92;
  /* 12a04b18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b1b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a04b1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04b20 je 0x12a04b92 */
  if (C.zf) goto L_12a04b92;
  /* 12a04b22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04b27 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a04b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04b2b mov al, byte ptr [edx + 0x12a2fd01] */
  AL = (r8((uint32_t)(EDX + 0x12a2fd01)));
  /* 12a04b31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a04b34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04b36 je 0x12a04b67 */
  if (C.zf) goto L_12a04b67;
  /* 12a04b38 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a04b3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a04b45 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04b49 je 0x12a04b67 */
  if (C.zf) goto L_12a04b67;
  /* 12a04b4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04b4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a04b53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a04b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04b58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a04b5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a04b67:;
  /* 12a04b67 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04b6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a04b74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04b78 je 0x12a04b8d */
  if (C.zf) goto L_12a04b8d;
  /* 12a04b7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04b7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04b80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a04b82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a04b84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04b87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b8a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12a04b8d:;
  /* 12a04b8d jmp 0x12a04b04 */
  goto L_12a04b04;
L_12a04b92:;
  /* 12a04b92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b95 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a04b97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04b9a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04b9d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a04b9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ba3 je 0x12a04bb4 */
  if (C.zf) goto L_12a04bb4;
  /* 12a04ba5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04ba8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12a04bab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04bae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04bb1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12a04bb4:;
  /* 12a04bb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04bb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04bba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04bbd jne 0x12a04bc8 */
  if (!C.zf) goto L_12a04bc8;
  /* 12a04bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04bc2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04bc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a04bc8:;
  /* 12a04bc8 jmp 0x12a04c9c */
  goto L_12a04c9c;
L_12a04bcd:;
  /* 12a04bcd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04bd0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04bd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04bd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04bd8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a04bda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04bde je 0x12a04bf3 */
  if (C.zf) goto L_12a04bf3;
  /* 12a04be0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04be3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04be6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a04be8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a04bea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04bed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04bf0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12a04bf3:;
  /* 12a04bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a04bf8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12a04bfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04bfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04c01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a04c04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04c07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a04c0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04c0f mov dl, byte ptr [ecx + 0x12a2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12a2fd01)));
  /* 12a04c15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a04c18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04c1a je 0x12a04c4b */
  if (C.zf) goto L_12a04c4b;
  /* 12a04c1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04c1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04c21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04c24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04c27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a04c29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04c2d je 0x12a04c42 */
  if (C.zf) goto L_12a04c42;
  /* 12a04c2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04c32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04c35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a04c37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a04c39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04c3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04c3f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12a04c42:;
  /* 12a04c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04c45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04c48 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a04c4b:;
  /* 12a04c4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04c4e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a04c54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04c57 je 0x12a04c77 */
  if (C.zf) goto L_12a04c77;
  /* 12a04c59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04c5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a04c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04c63 je 0x12a04c77 */
  if (C.zf) goto L_12a04c77;
  /* 12a04c65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04c68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a04c6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04c71 jne 0x12a04bcd */
  if (!C.zf) goto L_12a04bcd;
L_12a04c77:;
  /* 12a04c77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a04c7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a04c80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04c82 jne 0x12a04c8f */
  if (!C.zf) goto L_12a04c8f;
  /* 12a04c84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04c87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04c8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a04c8d jmp 0x12a04c9c */
  goto L_12a04c9c;
L_12a04c8f:;
  /* 12a04c8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04c93 je 0x12a04c9c */
  if (C.zf) goto L_12a04c9c;
  /* 12a04c95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04c98 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12a04c9c:;
  /* 12a04c9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12a04ca3:;
  /* 12a04ca3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04ca6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a04ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04cab je 0x12a04cce */
  if (C.zf) goto L_12a04cce;
L_12a04cad:;
  /* 12a04cad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04cb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a04cb3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04cb6 je 0x12a04cc3 */
  if (C.zf) goto L_12a04cc3;
  /* 12a04cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04cbb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04cbe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04cc1 jne 0x12a04cce */
  if (!C.zf) goto L_12a04cce;
L_12a04cc3:;
  /* 12a04cc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04cc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a04ccc jmp 0x12a04cad */
  goto L_12a04cad;
L_12a04cce:;
  /* 12a04cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04cd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04cd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04cd6 jne 0x12a04cdd */
  if (!C.zf) goto L_12a04cdd;
  /* 12a04cd8 jmp 0x12a04ebb */
  goto L_12a04ebb;
L_12a04cdd:;
  /* 12a04cdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ce1 je 0x12a04cf4 */
  if (C.zf) goto L_12a04cf4;
  /* 12a04ce3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04ce6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04ce9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a04ceb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04cee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04cf1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12a04cf4:;
  /* 12a04cf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04cf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a04cf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04cfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04cff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12a04d01:;
  /* 12a04d01 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12a04d08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12a04d0f:;
  /* 12a04d0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04d12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a04d15 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d18 jne 0x12a04d2e */
  if (!C.zf) goto L_12a04d2e;
  /* 12a04d1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04d1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04d20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a04d23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04d26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04d29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a04d2c jmp 0x12a04d0f */
  goto L_12a04d0f;
L_12a04d2e:;
  /* 12a04d2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04d31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04d34 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d37 jne 0x12a04d8a */
  if (!C.zf) goto L_12a04d8a;
  /* 12a04d39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04d3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04d3e mov ecx, 2 */
  ECX = (0x2u);
  /* 12a04d43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a04d45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04d47 jne 0x12a04d82 */
  if (!C.zf) goto L_12a04d82;
  /* 12a04d49 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d4d je 0x12a04d6f */
  if (C.zf) goto L_12a04d6f;
  /* 12a04d4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04d52 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a04d56 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d59 jne 0x12a04d66 */
  if (!C.zf) goto L_12a04d66;
  /* 12a04d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04d5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04d61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a04d64 jmp 0x12a04d6d */
  goto L_12a04d6d;
L_12a04d66:;
  /* 12a04d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a04d6d:;
  /* 12a04d6d jmp 0x12a04d76 */
  goto L_12a04d76;
L_12a04d6f:;
  /* 12a04d6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a04d76:;
  /* 12a04d76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04d78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d7c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12a04d7f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12a04d82:;
  /* 12a04d82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04d85 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a04d87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12a04d8a:;
  /* 12a04d8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04d8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04d90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04d93 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a04d96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04d98 je 0x12a04dbe */
  if (C.zf) goto L_12a04dbe;
  /* 12a04d9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04d9e je 0x12a04daf */
  if (C.zf) goto L_12a04daf;
  /* 12a04da0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04da3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12a04da6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04da9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04dac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12a04daf:;
  /* 12a04daf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04db2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a04db4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04db7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04dba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a04dbc jmp 0x12a04d8a */
  goto L_12a04d8a;
L_12a04dbe:;
  /* 12a04dbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04dc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a04dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a04dc6 je 0x12a04de4 */
  if (C.zf) goto L_12a04de4;
  /* 12a04dc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04dcc jne 0x12a04de9 */
  if (!C.zf) goto L_12a04de9;
  /* 12a04dce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04dd1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a04dd4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04dd7 je 0x12a04de4 */
  if (C.zf) goto L_12a04de4;
  /* 12a04dd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04ddc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a04ddf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04de2 jne 0x12a04de9 */
  if (!C.zf) goto L_12a04de9;
L_12a04de4:;
  /* 12a04de4 jmp 0x12a04e94 */
  goto L_12a04e94;
L_12a04de9:;
  /* 12a04de9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ded je 0x12a04e86 */
  if (C.zf) goto L_12a04e86;
  /* 12a04df3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04df7 je 0x12a04e4d */
  if (C.zf) goto L_12a04e4d;
  /* 12a04df9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04dfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a04e00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a04e02 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a04e08 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a04e0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04e0d je 0x12a04e38 */
  if (C.zf) goto L_12a04e38;
  /* 12a04e0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04e12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e15 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a04e17 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12a04e19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04e1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e1f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12a04e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a04e2b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a04e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a04e38:;
  /* 12a04e38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a04e40 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a04e42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e48 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12a04e4b jmp 0x12a04e79 */
  goto L_12a04e79;
L_12a04e4d:;
  /* 12a04e4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04e52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a04e54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a04e56 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a04e5c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a04e5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a04e61 je 0x12a04e79 */
  if (C.zf) goto L_12a04e79;
  /* 12a04e63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a04e6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04e71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a04e79:;
  /* 12a04e79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04e7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04e84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a04e86:;
  /* 12a04e86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04e89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04e8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a04e8f jmp 0x12a04d01 */
  goto L_12a04d01;
L_12a04e94:;
  /* 12a04e94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04e98 je 0x12a04ea9 */
  if (C.zf) goto L_12a04ea9;
  /* 12a04e9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04e9d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12a04ea0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a04ea3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04ea6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12a04ea9:;
  /* 12a04ea9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04eac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a04eae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04eb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a04eb4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a04eb6 jmp 0x12a04ca3 */
  goto L_12a04ca3;
L_12a04ebb:;
  /* 12a04ebb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ebf je 0x12a04ed3 */
  if (C.zf) goto L_12a04ed3;
  /* 12a04ec1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04ec4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a04eca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a04ecd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04ed0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12a04ed3:;
  /* 12a04ed3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04ed6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a04ed8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04edb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a04ede mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a04ee0 mov esp, ebp */
  ESP = (EBP);
  /* 12a04ee2 pop ebp */
  EBP = (pop32());
  /* 12a04ee3 ret  */
  ESPCHK(0x12a04ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x12a04ef0 (537 bytes, 173 insns) */
void f_12a04ef0(void) {
  FTRACE(0x12a04ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a04ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a04ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12a04ef3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04ef6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12a04efd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12a04f04 cmp dword ptr [0x12a2e5e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e5e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f0b jne 0x12a04f4a */
  if (!C.zf) goto L_12a04f4a;
  /* 12a04f0d call dword ptr [0x12a302c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c8))), 0x12a04f13u);
  /* 12a04f13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a04f16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f1a je 0x12a04f28 */
  if (C.zf) goto L_12a04f28;
  /* 12a04f1c mov dword ptr [0x12a2e5e4], 1 */
  w32((uint32_t)(0x12a2e5e4), (0x1u));
  /* 12a04f26 jmp 0x12a04f4a */
  goto L_12a04f4a;
L_12a04f28:;
  /* 12a04f28 call dword ptr [0x12a302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c4))), 0x12a04f2eu);
  /* 12a04f2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a04f31 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f35 je 0x12a04f43 */
  if (C.zf) goto L_12a04f43;
  /* 12a04f37 mov dword ptr [0x12a2e5e4], 2 */
  w32((uint32_t)(0x12a2e5e4), (0x2u));
  /* 12a04f41 jmp 0x12a04f4a */
  goto L_12a04f4a;
L_12a04f43:;
  /* 12a04f43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04f45 jmp 0x12a05105 */
  goto L_12a05105;
L_12a04f4a:;
  /* 12a04f4a cmp dword ptr [0x12a2e5e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e5e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f51 jne 0x12a0504e */
  if (!C.zf) goto L_12a0504e;
  /* 12a04f57 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f5b jne 0x12a04f73 */
  if (!C.zf) goto L_12a04f73;
  /* 12a04f5d call dword ptr [0x12a302c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c8))), 0x12a04f63u);
  /* 12a04f63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a04f66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04f6a jne 0x12a04f73 */
  if (!C.zf) goto L_12a04f73;
  /* 12a04f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a04f6e jmp 0x12a05105 */
  goto L_12a05105;
L_12a04f73:;
  /* 12a04f73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a04f76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a04f79:;
  /* 12a04f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04f7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04f7e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12a04f81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04f83 je 0x12a04fa5 */
  if (C.zf) goto L_12a04fa5;
  /* 12a04f85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04f88 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04f8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a04f8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04f91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a04f93 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12a04f96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a04f98 jne 0x12a04fa3 */
  if (!C.zf) goto L_12a04fa3;
  /* 12a04f9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04f9d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04fa0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a04fa3:;
  /* 12a04fa3 jmp 0x12a04f79 */
  goto L_12a04f79;
L_12a04fa5:;
  /* 12a04fa5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a04fa8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a04fab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12a04fad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04fb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a04fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a04fbe push edx */
  push32((uint32_t)(EDX));
  /* 12a04fbf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a04fc2 push eax */
  push32((uint32_t)(EAX));
  /* 12a04fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a04fc7 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a04fcdu);
  /* 12a04fcd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a04fd0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04fd4 je 0x12a04ff4 */
  if (C.zf) goto L_12a04ff4;
  /* 12a04fd6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12a04fd8 push 0x12a29acc */
  push32((uint32_t)(0x12a29accu));
  /* 12a04fdd push 2 */
  push32((uint32_t)(0x2u));
  /* 12a04fdf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a04fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a04fe3 call 0x12a02920 */
  push32(0x12a04fe8u); f_12a02920();
  /* 12a04fe8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a04feb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a04fee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a04ff2 jne 0x12a05005 */
  if (!C.zf) goto L_12a05005;
L_12a04ff4:;
  /* 12a04ff4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a04ff7 push edx */
  push32((uint32_t)(EDX));
  /* 12a04ff8 call dword ptr [0x12a30220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30220))), 0x12a04ffeu);
  /* 12a04ffe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05000 jmp 0x12a05105 */
  goto L_12a05105;
L_12a05005:;
  /* 12a05005 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05007 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05009 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0500c push eax */
  push32((uint32_t)(EAX));
  /* 12a0500d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05010 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05011 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05014 push edx */
  push32((uint32_t)(EDX));
  /* 12a05015 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a05018 push eax */
  push32((uint32_t)(EAX));
  /* 12a05019 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0501b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0501d call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a05023u);
  /* 12a05023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a05025 jne 0x12a0503c */
  if (!C.zf) goto L_12a0503c;
  /* 12a05027 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a05029 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0502c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0502d call 0x12a033b0 */
  push32(0x12a05032u); f_12a033b0();
  /* 12a05032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05035 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12a0503c:;
  /* 12a0503c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0503f push edx */
  push32((uint32_t)(EDX));
  /* 12a05040 call dword ptr [0x12a30220] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30220))), 0x12a05046u);
  /* 12a05046 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05049 jmp 0x12a05105 */
  goto L_12a05105;
L_12a0504e:;
  /* 12a0504e cmp dword ptr [0x12a2e5e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e5e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05055 jne 0x12a05103 */
  if (!C.zf) goto L_12a05103;
  /* 12a0505b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0505f jne 0x12a05077 */
  if (!C.zf) goto L_12a05077;
  /* 12a05061 call dword ptr [0x12a302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c4))), 0x12a05067u);
  /* 12a05067 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a0506a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0506e jne 0x12a05077 */
  if (!C.zf) goto L_12a05077;
  /* 12a05070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05072 jmp 0x12a05105 */
  goto L_12a05105;
L_12a05077:;
  /* 12a05077 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0507a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0507d:;
  /* 12a0507d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05080 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a05083 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a05085 je 0x12a050a5 */
  if (C.zf) goto L_12a050a5;
  /* 12a05087 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0508a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0508d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05093 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a05096 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a05098 jne 0x12a050a3 */
  if (!C.zf) goto L_12a050a3;
  /* 12a0509a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0509d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a050a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a050a3:;
  /* 12a050a3 jmp 0x12a0507d */
  goto L_12a0507d;
L_12a050a5:;
  /* 12a050a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a050a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a050ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a050ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a050b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12a050b6 push 0x12a29acc */
  push32((uint32_t)(0x12a29accu));
  /* 12a050bb push 2 */
  push32((uint32_t)(0x2u));
  /* 12a050bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a050c0 push edx */
  push32((uint32_t)(EDX));
  /* 12a050c1 call 0x12a02920 */
  push32(0x12a050c6u); f_12a02920();
  /* 12a050c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a050c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a050cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a050d0 jne 0x12a050e0 */
  if (!C.zf) goto L_12a050e0;
  /* 12a050d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a050d5 push eax */
  push32((uint32_t)(EAX));
  /* 12a050d6 call dword ptr [0x12a302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302b8))), 0x12a050dcu);
  /* 12a050dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a050de jmp 0x12a05105 */
  goto L_12a05105;
L_12a050e0:;
  /* 12a050e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a050e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a050e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a050e7 push edx */
  push32((uint32_t)(EDX));
  /* 12a050e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a050eb push eax */
  push32((uint32_t)(EAX));
  /* 12a050ec call 0x12a09200 */
  push32(0x12a050f1u); f_12a09200();
  /* 12a050f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a050f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a050f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a050f8 call dword ptr [0x12a302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302b8))), 0x12a050feu);
  /* 12a050fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05101 jmp 0x12a05105 */
  goto L_12a05105;
L_12a05103:;
  /* 12a05103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a05105:;
  /* 12a05105 mov esp, ebp */
  ESP = (EBP);
  /* 12a05107 pop ebp */
  EBP = (pop32());
  /* 12a05108 ret  */
  ESPCHK(0x12a04ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x12a05110 (77 bytes, 25 insns) */
void f_12a05110(void) {
  FTRACE(0x12a05110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05110 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05111 mov ebp, esp */
  EBP = (ESP);
  /* 12a05113 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05115 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12a0511a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0511c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05120 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12a05123 push eax */
  push32((uint32_t)(EAX));
  /* 12a05124 call dword ptr [0x12a302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d0))), 0x12a0512au);
  /* 12a0512a mov dword ptr [0x12a2fe2c], eax */
  w32((uint32_t)(0x12a2fe2c), (EAX));
  /* 12a0512f cmp dword ptr [0x12a2fe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05136 jne 0x12a0513c */
  if (!C.zf) goto L_12a0513c;
  /* 12a05138 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0513a jmp 0x12a0515b */
  goto L_12a0515b;
L_12a0513c:;
  /* 12a0513c call 0x12a06bc0 */
  push32(0x12a05141u); f_12a06bc0();
  /* 12a05141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a05143 jne 0x12a05156 */
  if (!C.zf) goto L_12a05156;
  /* 12a05145 mov ecx, dword ptr [0x12a2fe2c] */
  ECX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a0514b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0514c call dword ptr [0x12a302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302cc))), 0x12a05152u);
  /* 12a05152 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05154 jmp 0x12a0515b */
  goto L_12a0515b;
L_12a05156:;
  /* 12a05156 mov eax, 1 */
  EAX = (0x1u);
L_12a0515b:;
  /* 12a0515b pop ebp */
  EBP = (pop32());
  /* 12a0515c ret  */
  ESPCHK(0x12a05110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x12a05160 (156 bytes, 48 insns) */
void f_12a05160(void) {
  FTRACE(0x12a05160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05160 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05161 mov ebp, esp */
  EBP = (ESP);
  /* 12a05163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05166 mov eax, dword ptr [0x12a2fe28] */
  EAX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a0516b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0516e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a05175 jmp 0x12a05180 */
  goto L_12a05180;
L_12a05177:;
  /* 12a05177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0517a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0517d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a05180:;
  /* 12a05180 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05183 cmp edx, dword ptr [0x12a2fe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05189 jge 0x12a051d6 */
  if ((C.sf==C.of)) goto L_12a051d6;
  /* 12a0518b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12a05190 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12a05195 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05198 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0519b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0519c call dword ptr [0x12a302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d8))), 0x12a051a2u);
  /* 12a051a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a051a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a051a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a051ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a051af push eax */
  push32((uint32_t)(EAX));
  /* 12a051b0 call dword ptr [0x12a302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d8))), 0x12a051b6u);
  /* 12a051b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a051b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a051bc push edx */
  push32((uint32_t)(EDX));
  /* 12a051bd push 0 */
  push32((uint32_t)(0x0u));
  /* 12a051bf mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a051c4 push eax */
  push32((uint32_t)(EAX));
  /* 12a051c5 call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a051cbu);
  /* 12a051cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a051ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a051d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a051d4 jmp 0x12a05177 */
  goto L_12a05177;
L_12a051d6:;
  /* 12a051d6 mov edx, dword ptr [0x12a2fe28] */
  EDX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a051dc push edx */
  push32((uint32_t)(EDX));
  /* 12a051dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12a051df mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a051e4 push eax */
  push32((uint32_t)(EAX));
  /* 12a051e5 call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a051ebu);
  /* 12a051eb mov ecx, dword ptr [0x12a2fe2c] */
  ECX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a051f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a051f2 call dword ptr [0x12a302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302cc))), 0x12a051f8u);
  /* 12a051f8 mov esp, ebp */
  ESP = (EBP);
  /* 12a051fa pop ebp */
  EBP = (pop32());
  /* 12a051fb ret  */
  ESPCHK(0x12a05160u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12a05200 (73 bytes, 19 insns) */
void f_12a05200(void) {
  FTRACE(0x12a05200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05200 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05201 mov ebp, esp */
  EBP = (ESP);
  /* 12a05203 cmp dword ptr [0x12a2e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0520a je 0x12a0521e */
  if (C.zf) goto L_12a0521e;
  /* 12a0520c cmp dword ptr [0x12a2e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05213 jne 0x12a05247 */
  if (!C.zf) goto L_12a05247;
  /* 12a05215 cmp dword ptr [0x12a2e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0521c jne 0x12a05247 */
  if (!C.zf) goto L_12a05247;
L_12a0521e:;
  /* 12a0521e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12a05223 call 0x12a05250 */
  push32(0x12a05228u); f_12a05250();
  /* 12a05228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0522b cmp dword ptr [0x12a2e5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05232 je 0x12a0523a */
  if (C.zf) goto L_12a0523a;
  /* 12a05234 call dword ptr [0x12a2e5e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e5e8))), 0x12a0523au);
L_12a0523a:;
  /* 12a0523a push 0xff */
  push32((uint32_t)(0xffu));
  /* 12a0523f call 0x12a05250 */
  push32(0x12a05244u); f_12a05250();
  /* 12a05244 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05247:;
  /* 12a05247 pop ebp */
  EBP = (pop32());
  /* 12a05248 ret  */
  ESPCHK(0x12a05200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005250 @ 0x12a05250 (447 bytes, 131 insns) */
void f_12a05250(void) {
  FTRACE(0x12a05250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05250 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05251 mov ebp, esp */
  EBP = (ESP);
  /* 12a05253 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05259 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0525a push esi */
  push32((uint32_t)(ESI));
  /* 12a0525b push edi */
  push32((uint32_t)(EDI));
  /* 12a0525c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a05263 jmp 0x12a0526e */
  goto L_12a0526e;
L_12a05265:;
  /* 12a05265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05268 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0526b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0526e:;
  /* 12a0526e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05272 jae 0x12a05287 */
  if (!C.cf) goto L_12a05287;
  /* 12a05274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05277 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0527a cmp edx, dword ptr [ecx*8 + 0x12a2cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12a2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05281 jne 0x12a05285 */
  if (!C.zf) goto L_12a05285;
  /* 12a05283 jmp 0x12a05287 */
  goto L_12a05287;
L_12a05285:;
  /* 12a05285 jmp 0x12a05265 */
  goto L_12a05265;
L_12a05287:;
  /* 12a05287 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0528a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0528d cmp ecx, dword ptr [eax*8 + 0x12a2cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12a2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05294 jne 0x12a05408 */
  if (!C.zf) goto L_12a05408;
  /* 12a0529a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a052a1 je 0x12a052c4 */
  if (C.zf) goto L_12a052c4;
  /* 12a052a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a052a6 mov eax, dword ptr [edx*8 + 0x12a2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12a2cab4)));
  /* 12a052ad push eax */
  push32((uint32_t)(EAX));
  /* 12a052ae push 0 */
  push32((uint32_t)(0x0u));
  /* 12a052b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a052b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a052b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a052b6 call 0x12a019e0 */
  push32(0x12a052bbu); f_12a019e0();
  /* 12a052bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a052be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a052c1 jne 0x12a052c4 */
  if (!C.zf) goto L_12a052c4;
  /* 12a052c3 int3  */
  x86_unimpl("int3 @ 0x12a052c3");
L_12a052c4:;
  /* 12a052c4 cmp dword ptr [0x12a2e478], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a052cb je 0x12a052df */
  if (C.zf) goto L_12a052df;
  /* 12a052cd cmp dword ptr [0x12a2e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a052d4 jne 0x12a05318 */
  if (!C.zf) goto L_12a05318;
  /* 12a052d6 cmp dword ptr [0x12a2e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a052dd jne 0x12a05318 */
  if (!C.zf) goto L_12a05318;
L_12a052df:;
  /* 12a052df push 0 */
  push32((uint32_t)(0x0u));
  /* 12a052e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12a052e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a052e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a052e8 mov eax, dword ptr [edx*8 + 0x12a2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12a2cab4)));
  /* 12a052ef push eax */
  push32((uint32_t)(EAX));
  /* 12a052f0 call 0x12a05750 */
  push32(0x12a052f5u); f_12a05750();
  /* 12a052f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a052f8 push eax */
  push32((uint32_t)(EAX));
  /* 12a052f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a052fc mov edx, dword ptr [ecx*8 + 0x12a2cab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12a2cab4)));
  /* 12a05303 push edx */
  push32((uint32_t)(EDX));
  /* 12a05304 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12a05306 call dword ptr [0x12a30250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30250))), 0x12a0530cu);
  /* 12a0530c push eax */
  push32((uint32_t)(EAX));
  /* 12a0530d call dword ptr [0x12a30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30254))), 0x12a05313u);
  /* 12a05313 jmp 0x12a05408 */
  goto L_12a05408;
L_12a05318:;
  /* 12a05318 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0531f je 0x12a05408 */
  if (C.zf) goto L_12a05408;
  /* 12a05325 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12a0532a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12a05330 push eax */
  push32((uint32_t)(EAX));
  /* 12a05331 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05333 call dword ptr [0x12a3026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3026c))), 0x12a05339u);
  /* 12a05339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0533b jne 0x12a05351 */
  if (!C.zf) goto L_12a05351;
  /* 12a0533d push 0x12a29334 */
  push32((uint32_t)(0x12a29334u));
  /* 12a05342 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12a05348 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05349 call 0x12a058d0 */
  push32(0x12a0534eu); f_12a058d0();
  /* 12a0534e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05351:;
  /* 12a05351 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12a05357 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a0535a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0535d push eax */
  push32((uint32_t)(EAX));
  /* 12a0535e call 0x12a05750 */
  push32(0x12a05363u); f_12a05750();
  /* 12a05363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05366 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05369 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0536c jbe 0x12a0539a */
  if ((C.cf||C.zf)) goto L_12a0539a;
  /* 12a0536e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12a05374 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05375 call 0x12a05750 */
  push32(0x12a0537au); f_12a05750();
  /* 12a0537a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0537d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05380 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12a05384 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05387 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a05389 push 0x12a29330 */
  push32((uint32_t)(0x12a29330u));
  /* 12a0538e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05391 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05392 call 0x12a06140 */
  push32(0x12a05397u); f_12a06140();
  /* 12a05397 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0539a:;
  /* 12a0539a push 0x12a29d88 */
  push32((uint32_t)(0x12a29d88u));
  /* 12a0539f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12a053a5 push edx */
  push32((uint32_t)(EDX));
  /* 12a053a6 call 0x12a058d0 */
  push32(0x12a053abu); f_12a058d0();
  /* 12a053ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a053ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a053b1 push eax */
  push32((uint32_t)(EAX));
  /* 12a053b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12a053b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a053b9 call 0x12a058e0 */
  push32(0x12a053beu); f_12a058e0();
  /* 12a053be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a053c1 push 0x12a292a8 */
  push32((uint32_t)(0x12a292a8u));
  /* 12a053c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12a053cc push edx */
  push32((uint32_t)(EDX));
  /* 12a053cd call 0x12a058e0 */
  push32(0x12a053d2u); f_12a058e0();
  /* 12a053d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a053d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a053d8 mov ecx, dword ptr [eax*8 + 0x12a2cab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12a2cab4)));
  /* 12a053df push ecx */
  push32((uint32_t)(ECX));
  /* 12a053e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12a053e6 push edx */
  push32((uint32_t)(EDX));
  /* 12a053e7 call 0x12a058e0 */
  push32(0x12a053ecu); f_12a058e0();
  /* 12a053ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a053ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12a053f4 push 0x12a29d60 */
  push32((uint32_t)(0x12a29d60u));
  /* 12a053f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12a053ff push eax */
  push32((uint32_t)(EAX));
  /* 12a05400 call 0x12a06080 */
  push32(0x12a05405u); f_12a06080();
  /* 12a05405 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05408:;
  /* 12a05408 pop edi */
  EDI = (pop32());
  /* 12a05409 pop esi */
  ESI = (pop32());
  /* 12a0540a pop ebx */
  EBX = (pop32());
  /* 12a0540b mov esp, ebp */
  ESP = (EBP);
  /* 12a0540d pop ebp */
  EBP = (pop32());
  /* 12a0540e ret  */
  ESPCHK(0x12a05250u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12a05410 (80 bytes, 27 insns) */
void f_12a05410(void) {
  FTRACE(0x12a05410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05410 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05411 mov ebp, esp */
  EBP = (ESP);
  /* 12a05413 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05414 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0541b jmp 0x12a05426 */
  goto L_12a05426;
L_12a0541d:;
  /* 12a0541d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05423 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a05426:;
  /* 12a05426 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0542a jae 0x12a0543f */
  if (!C.cf) goto L_12a0543f;
  /* 12a0542c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0542f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05432 cmp edx, dword ptr [ecx*8 + 0x12a2cab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12a2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05439 jne 0x12a0543d */
  if (!C.zf) goto L_12a0543d;
  /* 12a0543b jmp 0x12a0543f */
  goto L_12a0543f;
L_12a0543d:;
  /* 12a0543d jmp 0x12a0541d */
  goto L_12a0541d;
L_12a0543f:;
  /* 12a0543f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05445 cmp ecx, dword ptr [eax*8 + 0x12a2cab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12a2cab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0544c jne 0x12a0545a */
  if (!C.zf) goto L_12a0545a;
  /* 12a0544e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05451 mov eax, dword ptr [edx*8 + 0x12a2cab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12a2cab4)));
  /* 12a05458 jmp 0x12a0545c */
  goto L_12a0545c;
L_12a0545a:;
  /* 12a0545a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0545c:;
  /* 12a0545c mov esp, ebp */
  ESP = (EBP);
  /* 12a0545e pop ebp */
  EBP = (pop32());
  /* 12a0545f ret  */
  ESPCHK(0x12a05410u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12a05460 (66 bytes, 28 insns) */
void f_12a05460(void) {
  FTRACE(0x12a05460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05460 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05461 mov ebp, esp */
  EBP = (ESP);
  /* 12a05463 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05467 jne 0x12a05487 */
  if (!C.zf) goto L_12a05487;
  /* 12a05469 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0546d jge 0x12a05487 */
  if ((C.sf==C.of)) goto L_12a05487;
  /* 12a0546f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05471 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05474 push eax */
  push32((uint32_t)(EAX));
  /* 12a05475 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05478 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0547c push edx */
  push32((uint32_t)(EDX));
  /* 12a0547d call 0x12a054b0 */
  push32(0x12a05482u); f_12a054b0();
  /* 12a05482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05485 jmp 0x12a0549d */
  goto L_12a0549d;
L_12a05487:;
  /* 12a05487 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05489 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0548c push eax */
  push32((uint32_t)(EAX));
  /* 12a0548d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05490 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05494 push edx */
  push32((uint32_t)(EDX));
  /* 12a05495 call 0x12a054b0 */
  push32(0x12a0549au); f_12a054b0();
  /* 12a0549a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0549d:;
  /* 12a0549d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a054a0 pop ebp */
  EBP = (pop32());
  /* 12a054a1 ret  */
  ESPCHK(0x12a05460u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12a054b0 (194 bytes, 71 insns) */
void f_12a054b0(void) {
  FTRACE(0x12a054b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a054b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a054b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a054b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a054b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a054b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a054bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a054c0 je 0x12a054d9 */
  if (C.zf) goto L_12a054d9;
  /* 12a054c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a054c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12a054c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a054cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a054ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a054d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a054d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a054d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a054d9:;
  /* 12a054d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a054dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a054df:;
  /* 12a054df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a054e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a054e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a054e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a054ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a054ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a054ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a054f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a054f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a054f9 jbe 0x12a05511 */
  if ((C.cf||C.zf)) goto L_12a05511;
  /* 12a054fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a054fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05504 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a05506 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05509 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0550c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0550f jmp 0x12a05525 */
  goto L_12a05525;
L_12a05511:;
  /* 12a05511 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05514 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05517 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0551a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a0551c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0551f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05522 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a05525:;
  /* 12a05525 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05529 ja 0x12a054df */
  if ((!C.cf&&!C.zf)) goto L_12a054df;
  /* 12a0552b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0552e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a05531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05534 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0553a:;
  /* 12a0553a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0553d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0553f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12a05542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05545 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05548 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0554a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a0554c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0554f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12a05552 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12a05554 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05557 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0555a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0555d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05563 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a05566 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05569 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0556c jb 0x12a0553a */
  if (C.cf) goto L_12a0553a;
  /* 12a0556e mov esp, ebp */
  ESP = (EBP);
  /* 12a05570 pop ebp */
  EBP = (pop32());
  /* 12a05571 ret  */
  ESPCHK(0x12a054b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12a05580 (63 bytes, 24 insns) */
void f_12a05580(void) {
  FTRACE(0x12a05580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05580 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05581 mov ebp, esp */
  EBP = (ESP);
  /* 12a05583 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05584 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05588 jne 0x12a05599 */
  if (!C.zf) goto L_12a05599;
  /* 12a0558a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0558e jge 0x12a05599 */
  if ((C.sf==C.of)) goto L_12a05599;
  /* 12a05590 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a05597 jmp 0x12a055a0 */
  goto L_12a055a0;
L_12a05599:;
  /* 12a05599 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a055a0:;
  /* 12a055a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a055a3 push eax */
  push32((uint32_t)(EAX));
  /* 12a055a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a055a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a055a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a055ab push edx */
  push32((uint32_t)(EDX));
  /* 12a055ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a055af push eax */
  push32((uint32_t)(EAX));
  /* 12a055b0 call 0x12a054b0 */
  push32(0x12a055b5u); f_12a054b0();
  /* 12a055b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a055b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a055bb mov esp, ebp */
  ESP = (EBP);
  /* 12a055bd pop ebp */
  EBP = (pop32());
  /* 12a055be ret  */
  ESPCHK(0x12a05580u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12a055c0 (30 bytes, 14 insns) */
void f_12a055c0(void) {
  FTRACE(0x12a055c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a055c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a055c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a055c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a055c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a055c8 push eax */
  push32((uint32_t)(EAX));
  /* 12a055c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a055cc push ecx */
  push32((uint32_t)(ECX));
  /* 12a055cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a055d0 push edx */
  push32((uint32_t)(EDX));
  /* 12a055d1 call 0x12a054b0 */
  push32(0x12a055d6u); f_12a054b0();
  /* 12a055d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a055d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a055dc pop ebp */
  EBP = (pop32());
  /* 12a055dd ret  */
  ESPCHK(0x12a055c0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12a055e0 (72 bytes, 28 insns) */
void f_12a055e0(void) {
  FTRACE(0x12a055e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a055e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a055e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a055e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a055e4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a055e8 jne 0x12a05601 */
  if (!C.zf) goto L_12a05601;
  /* 12a055ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a055ee jg 0x12a05601 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a05601;
  /* 12a055f0 jl 0x12a055f8 */
  if ((C.sf!=C.of)) goto L_12a055f8;
  /* 12a055f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a055f6 jae 0x12a05601 */
  if (!C.cf) goto L_12a05601;
L_12a055f8:;
  /* 12a055f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a055ff jmp 0x12a05608 */
  goto L_12a05608;
L_12a05601:;
  /* 12a05601 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a05608:;
  /* 12a05608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0560b push eax */
  push32((uint32_t)(EAX));
  /* 12a0560c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0560f push ecx */
  push32((uint32_t)(ECX));
  /* 12a05610 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05613 push edx */
  push32((uint32_t)(EDX));
  /* 12a05614 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05617 push eax */
  push32((uint32_t)(EAX));
  /* 12a05618 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0561b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0561c call 0x12a05630 */
  push32(0x12a05621u); f_12a05630();
  /* 12a05621 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05624 mov esp, ebp */
  ESP = (EBP);
  /* 12a05626 pop ebp */
  EBP = (pop32());
  /* 12a05627 ret  */
  ESPCHK(0x12a055e0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12a05630 (242 bytes, 91 insns) */
void f_12a05630(void) {
  FTRACE(0x12a05630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05630 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05631 mov ebp, esp */
  EBP = (ESP);
  /* 12a05633 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05639 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0563c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05640 je 0x12a05664 */
  if (C.zf) goto L_12a05664;
  /* 12a05642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05645 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12a05648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0564b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0564e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a05651 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05654 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a05656 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05659 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0565c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0565e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a05661 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12a05664:;
  /* 12a05664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05667 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a0566a:;
  /* 12a0566a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0566d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0566f push ecx */
  push32((uint32_t)(ECX));
  /* 12a05670 push eax */
  push32((uint32_t)(EAX));
  /* 12a05671 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05674 push edx */
  push32((uint32_t)(EDX));
  /* 12a05675 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05678 push eax */
  push32((uint32_t)(EAX));
  /* 12a05679 call 0x12a095b0 */
  push32(0x12a0567eu); f_12a095b0();
  /* 12a0567e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05681 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a05684 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a05686 push edx */
  push32((uint32_t)(EDX));
  /* 12a05687 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05688 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0568b push eax */
  push32((uint32_t)(EAX));
  /* 12a0568c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0568f push ecx */
  push32((uint32_t)(ECX));
  /* 12a05690 call 0x12a09540 */
  push32(0x12a05695u); f_12a09540();
  /* 12a05695 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a05698 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12a0569b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0569f jbe 0x12a056b7 */
  if ((C.cf||C.zf)) goto L_12a056b7;
  /* 12a056a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a056a4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a056a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a056ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a056b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a056b5 jmp 0x12a056cb */
  goto L_12a056cb;
L_12a056b7:;
  /* 12a056b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a056ba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a056bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a056c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a056c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a056cb:;
  /* 12a056cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a056cf ja 0x12a0566a */
  if ((!C.cf&&!C.zf)) goto L_12a0566a;
  /* 12a056d1 jb 0x12a056d9 */
  if (C.cf) goto L_12a056d9;
  /* 12a056d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a056d7 ja 0x12a0566a */
  if ((!C.cf&&!C.zf)) goto L_12a0566a;
L_12a056d9:;
  /* 12a056d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056dc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a056df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a056e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a056e8:;
  /* 12a056e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a056ed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12a056f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a056f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a056f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a056f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12a056fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a056fd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12a05700 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12a05702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05705 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05708 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0570b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0570e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a05714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05717 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0571a jb 0x12a056e8 */
  if (C.cf) goto L_12a056e8;
  /* 12a0571c mov esp, ebp */
  ESP = (EBP);
  /* 12a0571e pop ebp */
  EBP = (pop32());
  /* 12a0571f ret 0x14 */
  ESPCHK(0x12a05630u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12a05730 (31 bytes, 15 insns) */
void f_12a05730(void) {
  FTRACE(0x12a05730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05730 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05731 mov ebp, esp */
  EBP = (ESP);
  /* 12a05733 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05735 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a05738 push eax */
  push32((uint32_t)(EAX));
  /* 12a05739 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0573c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0573d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05740 push edx */
  push32((uint32_t)(EDX));
  /* 12a05741 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05744 push eax */
  push32((uint32_t)(EAX));
  /* 12a05745 call 0x12a05630 */
  push32(0x12a0574au); f_12a05630();
  /* 12a0574a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0574d pop ebp */
  EBP = (pop32());
  /* 12a0574e ret  */
  ESPCHK(0x12a05730u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12a05750 (123 bytes, 44 insns) */
void f_12a05750(void) {
  FTRACE(0x12a05750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05750 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a05754 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a0575a je 0x12a05770 */
  if (C.zf) goto L_12a05770;
L_12a0575c:;
  /* 12a0575c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12a0575e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12a0575f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a05761 je 0x12a057a3 */
  if (C.zf) goto L_12a057a3;
  /* 12a05763 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a05769 jne 0x12a0575c */
  if (!C.zf) goto L_12a0575c;
  /* 12a0576b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12a05770:;
  /* 12a05770 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12a05772 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12a05777 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05779 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0577c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0577e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05781 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12a05786 je 0x12a05770 */
  if (C.zf) goto L_12a05770;
  /* 12a05788 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a0578b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a0578d je 0x12a057c1 */
  if (C.zf) goto L_12a057c1;
  /* 12a0578f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12a05791 je 0x12a057b7 */
  if (C.zf) goto L_12a057b7;
  /* 12a05793 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12a05798 je 0x12a057ad */
  if (C.zf) goto L_12a057ad;
  /* 12a0579a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12a0579f je 0x12a057a3 */
  if (C.zf) goto L_12a057a3;
  /* 12a057a1 jmp 0x12a05770 */
  goto L_12a05770;
L_12a057a3:;
  /* 12a057a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12a057a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a057aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a057ac ret  */
  ESPCHK(0x12a05750u, _esp0);
  ESP += 4; return;
L_12a057ad:;
  /* 12a057ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12a057b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a057b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a057b6 ret  */
  ESPCHK(0x12a05750u, _esp0);
  ESP += 4; return;
L_12a057b7:;
  /* 12a057b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12a057ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a057be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a057c0 ret  */
  ESPCHK(0x12a05750u, _esp0);
  ESP += 4; return;
L_12a057c1:;
  /* 12a057c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12a057c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a057c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a057ca ret  */
  ESPCHK(0x12a05750u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x12a057d0 (249 bytes, 93 insns) */
void f_12a057d0(void) {
  FTRACE(0x12a057d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a057d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a057d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a057d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a057d6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a057d7 push esi */
  push32((uint32_t)(ESI));
  /* 12a057d8 push edi */
  push32((uint32_t)(EDI));
  /* 12a057d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12a057dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a057df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12a057e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12a057e5:;
  /* 12a057e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a057e9 jne 0x12a05809 */
  if (!C.zf) goto L_12a05809;
  /* 12a057eb push 0x12a29dc0 */
  push32((uint32_t)(0x12a29dc0u));
  /* 12a057f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a057f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12a057f4 push 0x12a29db4 */
  push32((uint32_t)(0x12a29db4u));
  /* 12a057f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a057fb call 0x12a019e0 */
  push32(0x12a05800u); f_12a019e0();
  /* 12a05800 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05803 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05806 jne 0x12a05809 */
  if (!C.zf) goto L_12a05809;
  /* 12a05808 int3  */
  x86_unimpl("int3 @ 0x12a05808");
L_12a05809:;
  /* 12a05809 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0580b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0580d jne 0x12a057e5 */
  if (!C.zf) goto L_12a057e5;
L_12a0580f:;
  /* 12a0580f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05813 jne 0x12a05833 */
  if (!C.zf) goto L_12a05833;
  /* 12a05815 push 0x12a29da4 */
  push32((uint32_t)(0x12a29da4u));
  /* 12a0581a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0581c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12a0581e push 0x12a29db4 */
  push32((uint32_t)(0x12a29db4u));
  /* 12a05823 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a05825 call 0x12a019e0 */
  push32(0x12a0582au); f_12a019e0();
  /* 12a0582a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0582d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05830 jne 0x12a05833 */
  if (!C.zf) goto L_12a05833;
  /* 12a05832 int3  */
  x86_unimpl("int3 @ 0x12a05832");
L_12a05833:;
  /* 12a05833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05835 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a05837 jne 0x12a0580f */
  if (!C.zf) goto L_12a0580f;
  /* 12a05839 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0583c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12a05843 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05849 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a0584c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0584f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05852 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a05854 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05857 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0585a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12a0585d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a05860 push edx */
  push32((uint32_t)(EDX));
  /* 12a05861 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05864 push eax */
  push32((uint32_t)(EAX));
  /* 12a05865 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05868 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05869 call 0x12a098b0 */
  push32(0x12a0586eu); f_12a098b0();
  /* 12a0586e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05871 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a05874 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05877 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a0587a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0587d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05880 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12a05883 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05886 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0588a jl 0x12a058ae */
  if ((C.sf!=C.of)) goto L_12a058ae;
  /* 12a0588c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0588f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a05891 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12a05894 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a05896 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0589c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12a0589f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a058a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a058a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a058a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a058aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a058ac jmp 0x12a058bf */
  goto L_12a058bf;
L_12a058ae:;
  /* 12a058ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a058b1 push eax */
  push32((uint32_t)(EAX));
  /* 12a058b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a058b4 call 0x12a09630 */
  push32(0x12a058b9u); f_12a09630();
  /* 12a058b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a058bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12a058bf:;
  /* 12a058bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a058c2 pop edi */
  EDI = (pop32());
  /* 12a058c3 pop esi */
  ESI = (pop32());
  /* 12a058c4 pop ebx */
  EBX = (pop32());
  /* 12a058c5 mov esp, ebp */
  ESP = (EBP);
  /* 12a058c7 pop ebp */
  EBP = (pop32());
  /* 12a058c8 ret  */
  ESPCHK(0x12a057d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x12a058d0 (7 bytes, 3 insns) */
void f_12a058d0(void) {
  FTRACE(0x12a058d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a058d0 push edi */
  push32((uint32_t)(EDI));
  /* 12a058d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12a058d5 jmp 0x12a05941 */
  jmp_ind(0x12a05941u); return;
}

/* FUN_100058e0 @ 0x12a058e0 (224 bytes, 84 insns) */
void f_12a058e0(void) {
  FTRACE(0x12a058e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a058e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a058e4 push edi */
  push32((uint32_t)(EDI));
  /* 12a058e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a058eb je 0x12a058fc */
  if (C.zf) goto L_12a058fc;
L_12a058ed:;
  /* 12a058ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12a058ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12a058f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a058f2 je 0x12a0592f */
  if (C.zf) goto L_12a0592f;
  /* 12a058f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a058fa jne 0x12a058ed */
  if (!C.zf) goto L_12a058ed;
L_12a058fc:;
  /* 12a058fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12a058fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12a05903 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05905 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a05908 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0590a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0590d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12a05912 je 0x12a058fc */
  if (C.zf) goto L_12a058fc;
  /* 12a05914 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a05917 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a05919 je 0x12a0593e */
  if (C.zf) goto L_12a0593e;
  /* 12a0591b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12a0591d je 0x12a05939 */
  if (C.zf) goto L_12a05939;
  /* 12a0591f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12a05924 je 0x12a05934 */
  if (C.zf) goto L_12a05934;
  /* 12a05926 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12a0592b je 0x12a0592f */
  if (C.zf) goto L_12a0592f;
  /* 12a0592d jmp 0x12a058fc */
  goto L_12a058fc;
L_12a0592f:;
  /* 12a0592f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12a05932 jmp 0x12a05941 */
  goto L_12a05941;
L_12a05934:;
  /* 12a05934 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12a05937 jmp 0x12a05941 */
  goto L_12a05941;
L_12a05939:;
  /* 12a05939 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12a0593c jmp 0x12a05941 */
  goto L_12a05941;
L_12a0593e:;
  /* 12a0593e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12a05941:;
  /* 12a05941 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a05945 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a0594b je 0x12a05966 */
  if (C.zf) goto L_12a05966;
L_12a0594d:;
  /* 12a0594d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0594f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12a05950 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12a05952 je 0x12a059b8 */
  if (C.zf) goto L_12a059b8;
  /* 12a05954 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12a05956 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a05957 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12a0595d jne 0x12a0594d */
  if (!C.zf) goto L_12a0594d;
  /* 12a0595f jmp 0x12a05966 */
  goto L_12a05966;
L_12a05961:;
  /* 12a05961 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a05963 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12a05966:;
  /* 12a05966 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12a0596b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12a0596d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0596f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a05972 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05974 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05976 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05979 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12a0597e je 0x12a05961 */
  if (C.zf) goto L_12a05961;
  /* 12a05980 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12a05982 je 0x12a059b8 */
  if (C.zf) goto L_12a059b8;
  /* 12a05984 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12a05986 je 0x12a059af */
  if (C.zf) goto L_12a059af;
  /* 12a05988 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12a0598e je 0x12a059a2 */
  if (C.zf) goto L_12a059a2;
  /* 12a05990 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12a05996 je 0x12a0599a */
  if (C.zf) goto L_12a0599a;
  /* 12a05998 jmp 0x12a05961 */
  goto L_12a05961;
L_12a0599a:;
  /* 12a0599a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a0599c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a059a0 pop edi */
  EDI = (pop32());
  /* 12a059a1 ret  */
  ESPCHK(0x12a058e0u, _esp0);
  ESP += 4; return;
L_12a059a2:;
  /* 12a059a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12a059a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a059a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12a059ad pop edi */
  EDI = (pop32());
  /* 12a059ae ret  */
  ESPCHK(0x12a058e0u, _esp0);
  ESP += 4; return;
L_12a059af:;
  /* 12a059af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12a059b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a059b6 pop edi */
  EDI = (pop32());
  /* 12a059b7 ret  */
  ESPCHK(0x12a058e0u, _esp0);
  ESP += 4; return;
L_12a059b8:;
  /* 12a059b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12a059ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a059be pop edi */
  EDI = (pop32());
  /* 12a059bf ret  */
  ESPCHK(0x12a058e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c0 @ 0x12a059c0 (243 bytes, 91 insns) */
void f_12a059c0(void) {
  FTRACE(0x12a059c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a059c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a059c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a059c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a059c6 push ebx */
  push32((uint32_t)(EBX));
  /* 12a059c7 push esi */
  push32((uint32_t)(ESI));
  /* 12a059c8 push edi */
  push32((uint32_t)(EDI));
  /* 12a059c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12a059cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a059cf:;
  /* 12a059cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a059d3 jne 0x12a059f3 */
  if (!C.zf) goto L_12a059f3;
  /* 12a059d5 push 0x12a29dc0 */
  push32((uint32_t)(0x12a29dc0u));
  /* 12a059da push 0 */
  push32((uint32_t)(0x0u));
  /* 12a059dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12a059de push 0x12a29dd0 */
  push32((uint32_t)(0x12a29dd0u));
  /* 12a059e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a059e5 call 0x12a019e0 */
  push32(0x12a059eau); f_12a019e0();
  /* 12a059ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a059ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a059f0 jne 0x12a059f3 */
  if (!C.zf) goto L_12a059f3;
  /* 12a059f2 int3  */
  x86_unimpl("int3 @ 0x12a059f2");
L_12a059f3:;
  /* 12a059f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a059f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a059f7 jne 0x12a059cf */
  if (!C.zf) goto L_12a059cf;
L_12a059f9:;
  /* 12a059f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a059fd jne 0x12a05a1d */
  if (!C.zf) goto L_12a05a1d;
  /* 12a059ff push 0x12a29da4 */
  push32((uint32_t)(0x12a29da4u));
  /* 12a05a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05a06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12a05a08 push 0x12a29dd0 */
  push32((uint32_t)(0x12a29dd0u));
  /* 12a05a0d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a05a0f call 0x12a019e0 */
  push32(0x12a05a14u); f_12a019e0();
  /* 12a05a14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05a17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05a1a jne 0x12a05a1d */
  if (!C.zf) goto L_12a05a1d;
  /* 12a05a1c int3  */
  x86_unimpl("int3 @ 0x12a05a1c");
L_12a05a1d:;
  /* 12a05a1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a05a1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a05a21 jne 0x12a059f9 */
  if (!C.zf) goto L_12a059f9;
  /* 12a05a23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12a05a2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05a33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12a05a36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05a3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a05a3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05a44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12a05a47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a05a4a push ecx */
  push32((uint32_t)(ECX));
  /* 12a05a4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a05a4e push edx */
  push32((uint32_t)(EDX));
  /* 12a05a4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a52 push eax */
  push32((uint32_t)(EAX));
  /* 12a05a53 call 0x12a098b0 */
  push32(0x12a05a58u); f_12a098b0();
  /* 12a05a58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05a5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a05a5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a05a64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05a67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a05a6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05a74 jl 0x12a05a98 */
  if ((C.sf!=C.of)) goto L_12a05a98;
  /* 12a05a76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a05a7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a05a7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a05a80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a05a86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a05a89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a05a8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05a91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a05a96 jmp 0x12a05aa9 */
  goto L_12a05aa9;
L_12a05a98:;
  /* 12a05a98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a05a9b push edx */
  push32((uint32_t)(EDX));
  /* 12a05a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a05a9e call 0x12a09630 */
  push32(0x12a05aa3u); f_12a09630();
  /* 12a05aa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05aa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12a05aa9:;
  /* 12a05aa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a05aac pop edi */
  EDI = (pop32());
  /* 12a05aad pop esi */
  ESI = (pop32());
  /* 12a05aae pop ebx */
  EBX = (pop32());
  /* 12a05aaf mov esp, ebp */
  ESP = (EBP);
  /* 12a05ab1 pop ebp */
  EBP = (pop32());
  /* 12a05ab2 ret  */
  ESPCHK(0x12a059c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x12a05ac0 (47 bytes, 17 insns) */
void f_12a05ac0(void) {
  FTRACE(0x12a05ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a05ac1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ac6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12a05aca jb 0x12a05ae0 */
  if (C.cf) goto L_12a05ae0;
L_12a05acc:;
  /* 12a05acc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05ad2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05ad7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12a05ad9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ade jae 0x12a05acc */
  if (!C.cf) goto L_12a05acc;
L_12a05ae0:;
  /* 12a05ae0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05ae2 mov eax, esp */
  EAX = (ESP);
  /* 12a05ae4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12a05ae6 mov esp, ecx */
  ESP = (ECX);
  /* 12a05ae8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a05aea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a05aed push eax */
  push32((uint32_t)(EAX));
  /* 12a05aee ret  */
  ESPCHK(0x12a05ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005af0 @ 0x12a05af0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12a05af0(void) {
  FTRACE(0x12a05af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05af1 mov ebp, esp */
  EBP = (ESP);
  /* 12a05af3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05af6 push esi */
  push32((uint32_t)(ESI));
  /* 12a05af7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05afb je 0x12a05b03 */
  if (C.zf) goto L_12a05b03;
  /* 12a05afd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b01 jne 0x12a05b08 */
  if (!C.zf) goto L_12a05b08;
L_12a05b03:;
  /* 12a05b03 jmp 0x12a05cd8 */
  goto L_12a05cd8;
L_12a05b08:;
  /* 12a05b08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b0c je 0x12a05b24 */
  if (C.zf) goto L_12a05b24;
  /* 12a05b0e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b12 je 0x12a05b24 */
  if (C.zf) goto L_12a05b24;
  /* 12a05b14 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b18 je 0x12a05b24 */
  if (C.zf) goto L_12a05b24;
  /* 12a05b1a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b1e jne 0x12a05c01 */
  if (!C.zf) goto L_12a05c01;
L_12a05b24:;
  /* 12a05b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05b26 call 0x12a06320 */
  push32(0x12a05b2bu); f_12a06320();
  /* 12a05b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05b2e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b32 je 0x12a05b3a */
  if (C.zf) goto L_12a05b3a;
  /* 12a05b34 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b38 jne 0x12a05b7f */
  if (!C.zf) goto L_12a05b7f;
L_12a05b3a:;
  /* 12a05b3a cmp dword ptr [0x12a2e5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b41 jne 0x12a05b7f */
  if (!C.zf) goto L_12a05b7f;
  /* 12a05b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05b45 push 0x12a05d20 */
  push32((uint32_t)(0x12a05d20u));
  /* 12a05b4a call dword ptr [0x12a302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302dc))), 0x12a05b50u);
  /* 12a05b50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b53 jne 0x12a05b61 */
  if (!C.zf) goto L_12a05b61;
  /* 12a05b55 mov dword ptr [0x12a2e5fc], 1 */
  w32((uint32_t)(0x12a2e5fc), (0x1u));
  /* 12a05b5f jmp 0x12a05b7f */
  goto L_12a05b7f;
L_12a05b61:;
  /* 12a05b61 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a05b67u);
  /* 12a05b67 mov esi, eax */
  ESI = (EAX);
  /* 12a05b69 call 0x12a0a800 */
  push32(0x12a05b6eu); f_12a0a800();
  /* 12a05b6e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12a05b70 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05b72 call 0x12a063c0 */
  push32(0x12a05b77u); f_12a063c0();
  /* 12a05b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05b7a jmp 0x12a05cd8 */
  goto L_12a05cd8;
L_12a05b7f:;
  /* 12a05b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05b82 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a05b85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a05b88 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05b8b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a05b8e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05b92 ja 0x12a05bf2 */
  if ((!C.cf&&!C.zf)) goto L_12a05bf2;
  /* 12a05b94 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a05b97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a05b99 mov dl, byte ptr [eax + 0x12a05cff] */
  DL = (r8((uint32_t)(EAX + 0x12a05cff)));
  /* 12a05b9f jmp dword ptr [edx*4 + 0x12a05ceb] */
  switch (EDX) {
    case 0: goto L_12a05ba6;
    case 1: goto L_12a05be0;
    case 2: goto L_12a05bba;
    case 3: goto L_12a05bcd;
    case 4: goto L_12a05bf2;
    default: x86_unimpl("switch@0x12a05b9f out of table"); return;
  }
L_12a05ba6:;
  /* 12a05ba6 mov ecx, dword ptr [0x12a2e5ec] */
  ECX = (r32((uint32_t)(0x12a2e5ec)));
  /* 12a05bac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a05baf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05bb2 mov dword ptr [0x12a2e5ec], edx */
  w32((uint32_t)(0x12a2e5ec), (EDX));
  /* 12a05bb8 jmp 0x12a05bf2 */
  goto L_12a05bf2;
L_12a05bba:;
  /* 12a05bba mov eax, dword ptr [0x12a2e5f0] */
  EAX = (r32((uint32_t)(0x12a2e5f0)));
  /* 12a05bbf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05bc2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05bc5 mov dword ptr [0x12a2e5f0], ecx */
  w32((uint32_t)(0x12a2e5f0), (ECX));
  /* 12a05bcb jmp 0x12a05bf2 */
  goto L_12a05bf2;
L_12a05bcd:;
  /* 12a05bcd mov edx, dword ptr [0x12a2e5f4] */
  EDX = (r32((uint32_t)(0x12a2e5f4)));
  /* 12a05bd3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a05bd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05bd9 mov dword ptr [0x12a2e5f4], eax */
  w32((uint32_t)(0x12a2e5f4), (EAX));
  /* 12a05bde jmp 0x12a05bf2 */
  goto L_12a05bf2;
L_12a05be0:;
  /* 12a05be0 mov ecx, dword ptr [0x12a2e5f8] */
  ECX = (r32((uint32_t)(0x12a2e5f8)));
  /* 12a05be6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a05be9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05bec mov dword ptr [0x12a2e5f8], edx */
  w32((uint32_t)(0x12a2e5f8), (EDX));
L_12a05bf2:;
  /* 12a05bf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05bf4 call 0x12a063c0 */
  push32(0x12a05bf9u); f_12a063c0();
  /* 12a05bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05bfc jmp 0x12a05cd3 */
  goto L_12a05cd3;
L_12a05c01:;
  /* 12a05c01 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c05 je 0x12a05c18 */
  if (C.zf) goto L_12a05c18;
  /* 12a05c07 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c0b je 0x12a05c18 */
  if (C.zf) goto L_12a05c18;
  /* 12a05c0d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c11 je 0x12a05c18 */
  if (C.zf) goto L_12a05c18;
  /* 12a05c13 jmp 0x12a05cd8 */
  goto L_12a05cd8;
L_12a05c18:;
  /* 12a05c18 call 0x12a02360 */
  push32(0x12a05c1du); f_12a02360();
  /* 12a05c1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a05c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05c23 cmp dword ptr [eax + 0x50], 0x12a2cc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12a2cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c2a jne 0x12a05c75 */
  if (!C.zf) goto L_12a05c75;
  /* 12a05c2c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12a05c31 push 0x12a29ddc */
  push32((uint32_t)(0x12a29ddcu));
  /* 12a05c36 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a05c38 mov ecx, dword ptr [0x12a2cc80] */
  ECX = (r32((uint32_t)(0x12a2cc80)));
  /* 12a05c3e push ecx */
  push32((uint32_t)(ECX));
  /* 12a05c3f call 0x12a02920 */
  push32(0x12a05c44u); f_12a02920();
  /* 12a05c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05c47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05c4a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12a05c4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05c50 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c54 je 0x12a05c73 */
  if (C.zf) goto L_12a05c73;
  /* 12a05c56 mov ecx, dword ptr [0x12a2cc80] */
  ECX = (r32((uint32_t)(0x12a2cc80)));
  /* 12a05c5c push ecx */
  push32((uint32_t)(ECX));
  /* 12a05c5d push 0x12a2cc00 */
  push32((uint32_t)(0x12a2cc00u));
  /* 12a05c62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05c65 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12a05c68 push eax */
  push32((uint32_t)(EAX));
  /* 12a05c69 call 0x12a09200 */
  push32(0x12a05c6eu); f_12a09200();
  /* 12a05c6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05c71 jmp 0x12a05c75 */
  goto L_12a05c75;
L_12a05c73:;
  /* 12a05c73 jmp 0x12a05cd8 */
  goto L_12a05cd8;
L_12a05c75:;
  /* 12a05c75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05c78 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12a05c7b push edx */
  push32((uint32_t)(EDX));
  /* 12a05c7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05c7f push eax */
  push32((uint32_t)(EAX));
  /* 12a05c80 call 0x12a06000 */
  push32(0x12a05c85u); f_12a06000();
  /* 12a05c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05c88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a05c8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05c8f jne 0x12a05c93 */
  if (!C.zf) goto L_12a05c93;
  /* 12a05c91 jmp 0x12a05cd8 */
  goto L_12a05cd8;
L_12a05c93:;
  /* 12a05c93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05c96 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a05c99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a05c9c:;
  /* 12a05c9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05c9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a05ca2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ca5 jne 0x12a05cd3 */
  if (!C.zf) goto L_12a05cd3;
  /* 12a05ca7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05caa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a05cad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a05cb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05cb3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05cb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a05cb9 mov edx, dword ptr [0x12a2cc84] */
  EDX = (r32((uint32_t)(0x12a2cc84)));
  /* 12a05cbf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a05cc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05cc5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12a05cc8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05cca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ccd jb 0x12a05cd1 */
  if (C.cf) goto L_12a05cd1;
  /* 12a05ccf jmp 0x12a05cd3 */
  goto L_12a05cd3;
L_12a05cd1:;
  /* 12a05cd1 jmp 0x12a05c9c */
  goto L_12a05c9c;
L_12a05cd3:;
  /* 12a05cd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05cd6 jmp 0x12a05ce6 */
  goto L_12a05ce6;
L_12a05cd8:;
  /* 12a05cd8 call 0x12a0a7f0 */
  push32(0x12a05cddu); f_12a0a7f0();
  /* 12a05cdd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12a05ce3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a05ce6:;
  /* 12a05ce6 pop esi */
  ESI = (pop32());
  /* 12a05ce7 mov esp, ebp */
  ESP = (EBP);
  /* 12a05ce9 pop ebp */
  EBP = (pop32());
  /* 12a05cea ret  */
  ESPCHK(0x12a05af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d20 @ 0x12a05d20 (146 bytes, 45 insns) */
void f_12a05d20(void) {
  FTRACE(0x12a05d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05d21 mov ebp, esp */
  EBP = (ESP);
  /* 12a05d23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05d26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05d28 call 0x12a06320 */
  push32(0x12a05d2du); f_12a06320();
  /* 12a05d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05d30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05d34 jne 0x12a05d4e */
  if (!C.zf) goto L_12a05d4e;
  /* 12a05d36 mov dword ptr [ebp - 8], 0x12a2e5ec */
  w32((uint32_t)(EBP + -0x8), (0x12a2e5ecu));
  /* 12a05d3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05d40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a05d42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a05d45 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12a05d4c jmp 0x12a05d64 */
  goto L_12a05d64;
L_12a05d4e:;
  /* 12a05d4e mov dword ptr [ebp - 8], 0x12a2e5f0 */
  w32((uint32_t)(EBP + -0x8), (0x12a2e5f0u));
  /* 12a05d55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05d58 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a05d5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05d5d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12a05d64:;
  /* 12a05d64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05d68 jne 0x12a05d78 */
  if (!C.zf) goto L_12a05d78;
  /* 12a05d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05d6c call 0x12a063c0 */
  push32(0x12a05d71u); f_12a063c0();
  /* 12a05d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05d76 jmp 0x12a05dac */
  goto L_12a05dac;
L_12a05d78:;
  /* 12a05d78 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05d7c je 0x12a05d9d */
  if (C.zf) goto L_12a05d9d;
  /* 12a05d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05d81 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12a05d87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05d89 call 0x12a063c0 */
  push32(0x12a05d8eu); f_12a063c0();
  /* 12a05d8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05d91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05d94 push edx */
  push32((uint32_t)(EDX));
  /* 12a05d95 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12a05d98u);
  /* 12a05d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05d9b jmp 0x12a05da7 */
  goto L_12a05da7;
L_12a05d9d:;
  /* 12a05d9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05d9f call 0x12a063c0 */
  push32(0x12a05da4u); f_12a063c0();
  /* 12a05da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05da7:;
  /* 12a05da7 mov eax, 1 */
  EAX = (0x1u);
L_12a05dac:;
  /* 12a05dac mov esp, ebp */
  ESP = (EBP);
  /* 12a05dae pop ebp */
  EBP = (pop32());
  /* 12a05daf ret 4 */
  ESPCHK(0x12a05d20u, _esp0);
  ESP += 8; return;
}

/* FUN_10005dc0 @ 0x12a05dc0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12a05dc0(void) {
  FTRACE(0x12a05dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a05dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a05dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12a05dc3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05dc6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a05dcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05dd0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a05dd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a05dd6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a05dd9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a05ddc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05de0 ja 0x12a05e8e */
  if ((!C.cf&&!C.zf)) goto L_12a05e8e;
  /* 12a05de6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a05de9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a05deb mov dl, byte ptr [eax + 0x12a05fe2] */
  DL = (r8((uint32_t)(EAX + 0x12a05fe2)));
  /* 12a05df1 jmp dword ptr [edx*4 + 0x12a05fca] */
  switch (EDX) {
    case 0: goto L_12a05df8;
    case 1: goto L_12a05e63;
    case 2: goto L_12a05e49;
    case 3: goto L_12a05e15;
    case 4: goto L_12a05e2f;
    case 5: goto L_12a05e8e;
    default: x86_unimpl("switch@0x12a05df1 out of table"); return;
  }
L_12a05df8:;
  /* 12a05df8 mov dword ptr [ebp - 0x18], 0x12a2e5ec */
  w32((uint32_t)(EBP + -0x18), (0x12a2e5ecu));
  /* 12a05dff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05e02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05e04 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a05e07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05e0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05e10 jmp 0x12a05e96 */
  goto L_12a05e96;
L_12a05e15:;
  /* 12a05e15 mov dword ptr [ebp - 0x18], 0x12a2e5f0 */
  w32((uint32_t)(EBP + -0x18), (0x12a2e5f0u));
  /* 12a05e1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05e1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05e21 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a05e24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05e27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05e2d jmp 0x12a05e96 */
  goto L_12a05e96;
L_12a05e2f:;
  /* 12a05e2f mov dword ptr [ebp - 0x18], 0x12a2e5f4 */
  w32((uint32_t)(EBP + -0x18), (0x12a2e5f4u));
  /* 12a05e36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05e39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05e3b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a05e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05e41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05e47 jmp 0x12a05e96 */
  goto L_12a05e96;
L_12a05e49:;
  /* 12a05e49 mov dword ptr [ebp - 0x18], 0x12a2e5f8 */
  w32((uint32_t)(EBP + -0x18), (0x12a2e5f8u));
  /* 12a05e50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05e53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05e55 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a05e58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a05e5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a05e61 jmp 0x12a05e96 */
  goto L_12a05e96;
L_12a05e63:;
  /* 12a05e63 call 0x12a02360 */
  push32(0x12a05e68u); f_12a02360();
  /* 12a05e68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a05e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05e6e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12a05e71 push edx */
  push32((uint32_t)(EDX));
  /* 12a05e72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05e75 push eax */
  push32((uint32_t)(EAX));
  /* 12a05e76 call 0x12a06000 */
  push32(0x12a05e7bu); f_12a06000();
  /* 12a05e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05e81 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a05e84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05e87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a05e89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a05e8c jmp 0x12a05e96 */
  goto L_12a05e96;
L_12a05e8e:;
  /* 12a05e8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a05e91 jmp 0x12a05fc6 */
  goto L_12a05fc6;
L_12a05e96:;
  /* 12a05e96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05e9a je 0x12a05ea6 */
  if (C.zf) goto L_12a05ea6;
  /* 12a05e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05e9e call 0x12a06320 */
  push32(0x12a05ea3u); f_12a06320();
  /* 12a05ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05ea6:;
  /* 12a05ea6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05eaa jne 0x12a05ec3 */
  if (!C.zf) goto L_12a05ec3;
  /* 12a05eac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05eb0 je 0x12a05ebc */
  if (C.zf) goto L_12a05ebc;
  /* 12a05eb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05eb4 call 0x12a063c0 */
  push32(0x12a05eb9u); f_12a063c0();
  /* 12a05eb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05ebc:;
  /* 12a05ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a05ebe jmp 0x12a05fc6 */
  goto L_12a05fc6;
L_12a05ec3:;
  /* 12a05ec3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ec7 jne 0x12a05ee0 */
  if (!C.zf) goto L_12a05ee0;
  /* 12a05ec9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ecd je 0x12a05ed9 */
  if (C.zf) goto L_12a05ed9;
  /* 12a05ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05ed1 call 0x12a063c0 */
  push32(0x12a05ed6u); f_12a063c0();
  /* 12a05ed6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05ed9:;
  /* 12a05ed9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12a05edb call 0x12a020e0 */
  push32(0x12a05ee0u); f_12a020e0();
L_12a05ee0:;
  /* 12a05ee0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ee4 je 0x12a05ef2 */
  if (C.zf) goto L_12a05ef2;
  /* 12a05ee6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05eea je 0x12a05ef2 */
  if (C.zf) goto L_12a05ef2;
  /* 12a05eec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05ef0 jne 0x12a05f1e */
  if (!C.zf) goto L_12a05f1e;
L_12a05ef2:;
  /* 12a05ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05ef5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12a05ef8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a05efb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05efe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12a05f05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f09 jne 0x12a05f1e */
  if (!C.zf) goto L_12a05f1e;
  /* 12a05f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05f0e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12a05f11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a05f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05f17 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12a05f1e:;
  /* 12a05f1e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f22 jne 0x12a05f60 */
  if (!C.zf) goto L_12a05f60;
  /* 12a05f24 mov eax, dword ptr [0x12a2cc78] */
  EAX = (r32((uint32_t)(0x12a2cc78)));
  /* 12a05f29 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a05f2c jmp 0x12a05f37 */
  goto L_12a05f37;
L_12a05f2e:;
  /* 12a05f2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a05f31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05f34 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a05f37:;
  /* 12a05f37 mov edx, dword ptr [0x12a2cc78] */
  EDX = (r32((uint32_t)(0x12a2cc78)));
  /* 12a05f3d add edx, dword ptr [0x12a2cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05f43 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f46 jge 0x12a05f5e */
  if ((C.sf==C.of)) goto L_12a05f5e;
  /* 12a05f48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a05f4b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a05f4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05f51 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12a05f54 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12a05f5c jmp 0x12a05f2e */
  goto L_12a05f2e;
L_12a05f5e:;
  /* 12a05f5e jmp 0x12a05f69 */
  goto L_12a05f69;
L_12a05f60:;
  /* 12a05f60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a05f63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12a05f69:;
  /* 12a05f69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f6d je 0x12a05f79 */
  if (C.zf) goto L_12a05f79;
  /* 12a05f6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a05f71 call 0x12a063c0 */
  push32(0x12a05f76u); f_12a063c0();
  /* 12a05f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05f79:;
  /* 12a05f79 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f7d jne 0x12a05f90 */
  if (!C.zf) goto L_12a05f90;
  /* 12a05f7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05f82 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12a05f85 push edx */
  push32((uint32_t)(EDX));
  /* 12a05f86 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a05f88 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12a05f8bu);
  /* 12a05f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a05f8e jmp 0x12a05f9a */
  goto L_12a05f9a;
L_12a05f90:;
  /* 12a05f90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a05f93 push eax */
  push32((uint32_t)(EAX));
  /* 12a05f94 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12a05f97u);
  /* 12a05f97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a05f9a:;
  /* 12a05f9a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05f9e je 0x12a05fac */
  if (C.zf) goto L_12a05fac;
  /* 12a05fa0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05fa4 je 0x12a05fac */
  if (C.zf) goto L_12a05fac;
  /* 12a05fa6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05faa jne 0x12a05fc4 */
  if (!C.zf) goto L_12a05fc4;
L_12a05fac:;
  /* 12a05fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05faf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a05fb2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12a05fb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a05fb9 jne 0x12a05fc4 */
  if (!C.zf) goto L_12a05fc4;
  /* 12a05fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a05fbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a05fc1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12a05fc4:;
  /* 12a05fc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a05fc6:;
  /* 12a05fc6 mov esp, ebp */
  ESP = (EBP);
  /* 12a05fc8 pop ebp */
  EBP = (pop32());
  /* 12a05fc9 ret  */
  ESPCHK(0x12a05dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x12a06000 (91 bytes, 35 insns) */
void f_12a06000(void) {
  FTRACE(0x12a06000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06000 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06001 mov ebp, esp */
  EBP = (ESP);
  /* 12a06003 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06004 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06007 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0600a:;
  /* 12a0600a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0600d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a06010 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06013 je 0x12a06033 */
  if (C.zf) goto L_12a06033;
  /* 12a06015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06018 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0601b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0601e mov ecx, dword ptr [0x12a2cc84] */
  ECX = (r32((uint32_t)(0x12a2cc84)));
  /* 12a06024 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a06027 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0602a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0602c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0602f jae 0x12a06033 */
  if (!C.cf) goto L_12a06033;
  /* 12a06031 jmp 0x12a0600a */
  goto L_12a0600a;
L_12a06033:;
  /* 12a06033 mov eax, dword ptr [0x12a2cc84] */
  EAX = (r32((uint32_t)(0x12a2cc84)));
  /* 12a06038 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0603b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0603e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06040 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06043 jae 0x12a06055 */
  if (!C.cf) goto L_12a06055;
  /* 12a06045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06048 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a0604b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0604e jne 0x12a06055 */
  if (!C.zf) goto L_12a06055;
  /* 12a06050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06053 jmp 0x12a06057 */
  goto L_12a06057;
L_12a06055:;
  /* 12a06055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a06057:;
  /* 12a06057 mov esp, ebp */
  ESP = (EBP);
  /* 12a06059 pop ebp */
  EBP = (pop32());
  /* 12a0605a ret  */
  ESPCHK(0x12a06000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x12a06060 (13 bytes, 6 insns) */
void f_12a06060(void) {
  FTRACE(0x12a06060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06060 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06061 mov ebp, esp */
  EBP = (ESP);
  /* 12a06063 call 0x12a02360 */
  push32(0x12a06068u); f_12a02360();
  /* 12a06068 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0606b pop ebp */
  EBP = (pop32());
  /* 12a0606c ret  */
  ESPCHK(0x12a06060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006070 @ 0x12a06070 (13 bytes, 6 insns) */
void f_12a06070(void) {
  FTRACE(0x12a06070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06070 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06071 mov ebp, esp */
  EBP = (ESP);
  /* 12a06073 call 0x12a02360 */
  push32(0x12a06078u); f_12a02360();
  /* 12a06078 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0607b pop ebp */
  EBP = (pop32());
  /* 12a0607c ret  */
  ESPCHK(0x12a06070u, _esp0);
  ESP += 4; return;
}

/* FUN_10006080 @ 0x12a06080 (187 bytes, 54 insns) */
void f_12a06080(void) {
  FTRACE(0x12a06080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06080 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06081 mov ebp, esp */
  EBP = (ESP);
  /* 12a06083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06086 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0608d cmp dword ptr [0x12a2e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06094 jne 0x12a060f3 */
  if (!C.zf) goto L_12a060f3;
  /* 12a06096 push 0x12a29208 */
  push32((uint32_t)(0x12a29208u));
  /* 12a0609b call dword ptr [0x12a30264] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30264))), 0x12a060a1u);
  /* 12a060a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a060a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a060a8 je 0x12a060c7 */
  if (C.zf) goto L_12a060c7;
  /* 12a060aa push 0x12a29e0c */
  push32((uint32_t)(0x12a29e0cu));
  /* 12a060af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a060b2 push eax */
  push32((uint32_t)(EAX));
  /* 12a060b3 call dword ptr [0x12a30260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30260))), 0x12a060b9u);
  /* 12a060b9 mov dword ptr [0x12a2e600], eax */
  w32((uint32_t)(0x12a2e600), (EAX));
  /* 12a060be cmp dword ptr [0x12a2e600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a060c5 jne 0x12a060cb */
  if (!C.zf) goto L_12a060cb;
L_12a060c7:;
  /* 12a060c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a060c9 jmp 0x12a06137 */
  goto L_12a06137;
L_12a060cb:;
  /* 12a060cb push 0x12a29dfc */
  push32((uint32_t)(0x12a29dfcu));
  /* 12a060d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a060d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a060d4 call dword ptr [0x12a30260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30260))), 0x12a060dau);
  /* 12a060da mov dword ptr [0x12a2e604], eax */
  w32((uint32_t)(0x12a2e604), (EAX));
  /* 12a060df push 0x12a29de8 */
  push32((uint32_t)(0x12a29de8u));
  /* 12a060e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a060e7 push edx */
  push32((uint32_t)(EDX));
  /* 12a060e8 call dword ptr [0x12a30260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30260))), 0x12a060eeu);
  /* 12a060ee mov dword ptr [0x12a2e608], eax */
  w32((uint32_t)(0x12a2e608), (EAX));
L_12a060f3:;
  /* 12a060f3 cmp dword ptr [0x12a2e604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a060fa je 0x12a06105 */
  if (C.zf) goto L_12a06105;
  /* 12a060fc call dword ptr [0x12a2e604] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e604))), 0x12a06102u);
  /* 12a06102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a06105:;
  /* 12a06105 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06109 je 0x12a06121 */
  if (C.zf) goto L_12a06121;
  /* 12a0610b cmp dword ptr [0x12a2e608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06112 je 0x12a06121 */
  if (C.zf) goto L_12a06121;
  /* 12a06114 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06117 push eax */
  push32((uint32_t)(EAX));
  /* 12a06118 call dword ptr [0x12a2e608] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e608))), 0x12a0611eu);
  /* 12a0611e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a06121:;
  /* 12a06121 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a06124 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06125 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06128 push edx */
  push32((uint32_t)(EDX));
  /* 12a06129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0612c push eax */
  push32((uint32_t)(EAX));
  /* 12a0612d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06130 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06131 call dword ptr [0x12a2e600] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e600))), 0x12a06137u);
L_12a06137:;
  /* 12a06137 mov esp, ebp */
  ESP = (EBP);
  /* 12a06139 pop ebp */
  EBP = (pop32());
  /* 12a0613a ret  */
  ESPCHK(0x12a06080u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12a06140 (254 bytes, 109 insns) */
void f_12a06140(void) {
  FTRACE(0x12a06140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06140 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a06144 push edi */
  push32((uint32_t)(EDI));
  /* 12a06145 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06147 je 0x12a061c3 */
  if (C.zf) goto L_12a061c3;
  /* 12a06149 push esi */
  push32((uint32_t)(ESI));
  /* 12a0614a push ebx */
  push32((uint32_t)(EBX));
  /* 12a0614b mov ebx, ecx */
  EBX = (ECX);
  /* 12a0614d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12a06151 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12a06157 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12a0615b jne 0x12a06164 */
  if (!C.zf) goto L_12a06164;
  /* 12a0615d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a06160 jne 0x12a061d1 */
  if (!C.zf) goto L_12a061d1;
  /* 12a06162 jmp 0x12a06185 */
  goto L_12a06185;
L_12a06164:;
  /* 12a06164 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a06166 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a06167 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a06169 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a0616a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a0616b je 0x12a06192 */
  if (C.zf) goto L_12a06192;
  /* 12a0616d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a0616f je 0x12a0619a */
  if (C.zf) goto L_12a0619a;
  /* 12a06171 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12a06177 jne 0x12a06164 */
  if (!C.zf) goto L_12a06164;
  /* 12a06179 mov ebx, ecx */
  EBX = (ECX);
  /* 12a0617b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0617e jne 0x12a061d1 */
  if (!C.zf) goto L_12a061d1;
L_12a06180:;
  /* 12a06180 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12a06183 je 0x12a06192 */
  if (C.zf) goto L_12a06192;
L_12a06185:;
  /* 12a06185 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a06187 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a06188 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0618a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a0618b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12a0618d je 0x12a061be */
  if (C.zf) goto L_12a061be;
  /* 12a0618f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12a06190 jne 0x12a06185 */
  if (!C.zf) goto L_12a06185;
L_12a06192:;
  /* 12a06192 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a06196 pop ebx */
  EBX = (pop32());
  /* 12a06197 pop esi */
  ESI = (pop32());
  /* 12a06198 pop edi */
  EDI = (pop32());
  /* 12a06199 ret  */
  ESPCHK(0x12a06140u, _esp0);
  ESP += 4; return;
L_12a0619a:;
  /* 12a0619a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a061a0 je 0x12a061b4 */
  if (C.zf) goto L_12a061b4;
L_12a061a2:;
  /* 12a061a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a061a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a061a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a061a6 je 0x12a06236 */
  if (C.zf) goto L_12a06236;
  /* 12a061ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a061b2 jne 0x12a061a2 */
  if (!C.zf) goto L_12a061a2;
L_12a061b4:;
  /* 12a061b4 mov ebx, ecx */
  EBX = (ECX);
  /* 12a061b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a061b9 jne 0x12a06227 */
  if (!C.zf) goto L_12a06227;
L_12a061bb:;
  /* 12a061bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a061bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12a061be:;
  /* 12a061be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12a061bf jne 0x12a061bb */
  if (!C.zf) goto L_12a061bb;
  /* 12a061c1 pop ebx */
  EBX = (pop32());
  /* 12a061c2 pop esi */
  ESI = (pop32());
L_12a061c3:;
  /* 12a061c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a061c7 pop edi */
  EDI = (pop32());
  /* 12a061c8 ret  */
  ESPCHK(0x12a06140u, _esp0);
  ESP += 4; return;
L_12a061c9:;
  /* 12a061c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a061cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a061ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a061cf je 0x12a06180 */
  if (C.zf) goto L_12a06180;
L_12a061d1:;
  /* 12a061d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12a061d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12a061d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a061da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a061dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a061df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12a061e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a061e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12a061e9 je 0x12a061c9 */
  if (C.zf) goto L_12a061c9;
  /* 12a061eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12a061ed je 0x12a0621b */
  if (C.zf) goto L_12a0621b;
  /* 12a061ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12a061f1 je 0x12a06211 */
  if (C.zf) goto L_12a06211;
  /* 12a061f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12a061f9 je 0x12a06207 */
  if (C.zf) goto L_12a06207;
  /* 12a061fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12a06201 jne 0x12a061c9 */
  if (!C.zf) goto L_12a061c9;
  /* 12a06203 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a06205 jmp 0x12a0621f */
  goto L_12a0621f;
L_12a06207:;
  /* 12a06207 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0620d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a0620f jmp 0x12a0621f */
  goto L_12a0621f;
L_12a06211:;
  /* 12a06211 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a06217 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12a06219 jmp 0x12a0621f */
  goto L_12a0621f;
L_12a0621b:;
  /* 12a0621b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0621d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12a0621f:;
  /* 12a0621f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06222 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06224 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a06225 je 0x12a06231 */
  if (C.zf) goto L_12a06231;
L_12a06227:;
  /* 12a06227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a06229:;
  /* 12a06229 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12a0622b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0622e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a0622f jne 0x12a06229 */
  if (!C.zf) goto L_12a06229;
L_12a06231:;
  /* 12a06231 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12a06234 jne 0x12a061bb */
  if (!C.zf) goto L_12a061bb;
L_12a06236:;
  /* 12a06236 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a0623a pop ebx */
  EBX = (pop32());
  /* 12a0623b pop esi */
  ESI = (pop32());
  /* 12a0623c pop edi */
  EDI = (pop32());
  /* 12a0623d ret  */
  ESPCHK(0x12a06140u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x12a06240 (55 bytes, 16 insns) */
void f_12a06240(void) {
  FTRACE(0x12a06240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06240 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06241 mov ebp, esp */
  EBP = (ESP);
  /* 12a06243 mov eax, dword ptr [0x12a2cb84] */
  EAX = (r32((uint32_t)(0x12a2cb84)));
  /* 12a06248 push eax */
  push32((uint32_t)(EAX));
  /* 12a06249 call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a0624fu);
  /* 12a0624f mov ecx, dword ptr [0x12a2cb74] */
  ECX = (r32((uint32_t)(0x12a2cb74)));
  /* 12a06255 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06256 call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a0625cu);
  /* 12a0625c mov edx, dword ptr [0x12a2cb64] */
  EDX = (r32((uint32_t)(0x12a2cb64)));
  /* 12a06262 push edx */
  push32((uint32_t)(EDX));
  /* 12a06263 call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a06269u);
  /* 12a06269 mov eax, dword ptr [0x12a2cb44] */
  EAX = (r32((uint32_t)(0x12a2cb44)));
  /* 12a0626e push eax */
  push32((uint32_t)(EAX));
  /* 12a0626f call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a06275u);
  /* 12a06275 pop ebp */
  EBP = (pop32());
  /* 12a06276 ret  */
  ESPCHK(0x12a06240u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x12a06280 (159 bytes, 47 insns) */
void f_12a06280(void) {
  FTRACE(0x12a06280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06280 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06281 mov ebp, esp */
  EBP = (ESP);
  /* 12a06283 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06284 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0628b jmp 0x12a06296 */
  goto L_12a06296;
L_12a0628d:;
  /* 12a0628d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06290 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06293 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a06296:;
  /* 12a06296 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0629a jge 0x12a062e9 */
  if ((C.sf==C.of)) goto L_12a062e9;
  /* 12a0629c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0629f cmp dword ptr [ecx*4 + 0x12a2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12a2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a062a7 je 0x12a062e7 */
  if (C.zf) goto L_12a062e7;
  /* 12a062a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a062ad je 0x12a062e7 */
  if (C.zf) goto L_12a062e7;
  /* 12a062af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a062b3 je 0x12a062e7 */
  if (C.zf) goto L_12a062e7;
  /* 12a062b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a062b9 je 0x12a062e7 */
  if (C.zf) goto L_12a062e7;
  /* 12a062bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a062bf je 0x12a062e7 */
  if (C.zf) goto L_12a062e7;
  /* 12a062c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a062c4 mov eax, dword ptr [edx*4 + 0x12a2cb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2cb40)));
  /* 12a062cb push eax */
  push32((uint32_t)(EAX));
  /* 12a062cc call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a062d2u);
  /* 12a062d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a062d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a062d7 mov edx, dword ptr [ecx*4 + 0x12a2cb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2cb40)));
  /* 12a062de push edx */
  push32((uint32_t)(EDX));
  /* 12a062df call 0x12a033b0 */
  push32(0x12a062e4u); f_12a033b0();
  /* 12a062e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a062e7:;
  /* 12a062e7 jmp 0x12a0628d */
  goto L_12a0628d;
L_12a062e9:;
  /* 12a062e9 mov eax, dword ptr [0x12a2cb64] */
  EAX = (r32((uint32_t)(0x12a2cb64)));
  /* 12a062ee push eax */
  push32((uint32_t)(EAX));
  /* 12a062ef call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a062f5u);
  /* 12a062f5 mov ecx, dword ptr [0x12a2cb74] */
  ECX = (r32((uint32_t)(0x12a2cb74)));
  /* 12a062fb push ecx */
  push32((uint32_t)(ECX));
  /* 12a062fc call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a06302u);
  /* 12a06302 mov edx, dword ptr [0x12a2cb84] */
  EDX = (r32((uint32_t)(0x12a2cb84)));
  /* 12a06308 push edx */
  push32((uint32_t)(EDX));
  /* 12a06309 call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a0630fu);
  /* 12a0630f mov eax, dword ptr [0x12a2cb44] */
  EAX = (r32((uint32_t)(0x12a2cb44)));
  /* 12a06314 push eax */
  push32((uint32_t)(EAX));
  /* 12a06315 call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a0631bu);
  /* 12a0631b mov esp, ebp */
  ESP = (EBP);
  /* 12a0631d pop ebp */
  EBP = (pop32());
  /* 12a0631e ret  */
  ESPCHK(0x12a06280u, _esp0);
  ESP += 4; return;
}

/* FUN_10006320 @ 0x12a06320 (151 bytes, 46 insns) */
void f_12a06320(void) {
  FTRACE(0x12a06320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06320 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06321 mov ebp, esp */
  EBP = (ESP);
  /* 12a06323 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06327 cmp dword ptr [eax*4 + 0x12a2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12a2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0632f jne 0x12a063a2 */
  if (!C.zf) goto L_12a063a2;
  /* 12a06331 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12a06336 push 0x12a29e18 */
  push32((uint32_t)(0x12a29e18u));
  /* 12a0633b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0633d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12a0633f call 0x12a02920 */
  push32(0x12a06344u); f_12a02920();
  /* 12a06344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06347 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0634a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0634e jne 0x12a0635a */
  if (!C.zf) goto L_12a0635a;
  /* 12a06350 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a06352 call 0x12a01890 */
  push32(0x12a06357u); f_12a01890();
  /* 12a06357 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0635a:;
  /* 12a0635a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0635c call 0x12a06320 */
  push32(0x12a06361u); f_12a06320();
  /* 12a06361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06364 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06367 cmp dword ptr [ecx*4 + 0x12a2cb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12a2cb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0636f jne 0x12a0638a */
  if (!C.zf) goto L_12a0638a;
  /* 12a06371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06374 push edx */
  push32((uint32_t)(EDX));
  /* 12a06375 call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a0637bu);
  /* 12a0637b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0637e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06381 mov dword ptr [eax*4 + 0x12a2cb40], ecx */
  w32((uint32_t)(EAX*4 + 0x12a2cb40), (ECX));
  /* 12a06388 jmp 0x12a06398 */
  goto L_12a06398;
L_12a0638a:;
  /* 12a0638a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0638c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0638f push edx */
  push32((uint32_t)(EDX));
  /* 12a06390 call 0x12a033b0 */
  push32(0x12a06395u); f_12a033b0();
  /* 12a06395 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a06398:;
  /* 12a06398 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0639a call 0x12a063c0 */
  push32(0x12a0639fu); f_12a063c0();
  /* 12a0639f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a063a2:;
  /* 12a063a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a063a5 mov ecx, dword ptr [eax*4 + 0x12a2cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2cb40)));
  /* 12a063ac push ecx */
  push32((uint32_t)(ECX));
  /* 12a063ad call dword ptr [0x12a302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e4))), 0x12a063b3u);
  /* 12a063b3 mov esp, ebp */
  ESP = (EBP);
  /* 12a063b5 pop ebp */
  EBP = (pop32());
  /* 12a063b6 ret  */
  ESPCHK(0x12a06320u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x12a063c0 (22 bytes, 8 insns) */
void f_12a063c0(void) {
  FTRACE(0x12a063c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a063c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a063c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a063c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a063c6 mov ecx, dword ptr [eax*4 + 0x12a2cb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12a2cb40)));
  /* 12a063cd push ecx */
  push32((uint32_t)(ECX));
  /* 12a063ce call dword ptr [0x12a302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e8))), 0x12a063d4u);
  /* 12a063d4 pop ebp */
  EBP = (pop32());
  /* 12a063d5 ret  */
  ESPCHK(0x12a063c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063e0 @ 0x12a063e0 (26 bytes, 10 insns) */
void f_12a063e0(void) {
  FTRACE(0x12a063e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a063e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a063e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a063e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a063e6 push eax */
  push32((uint32_t)(EAX));
  /* 12a063e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a063e9 call dword ptr [0x12a302ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302ec))), 0x12a063efu);
  /* 12a063ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 12a063f4 call dword ptr [0x12a30270] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30270))), 0x12a063fau);
  /* 12a063fa pop ebp */
  EBP = (pop32());
  /* 12a063fb ret  */
  ESPCHK(0x12a063e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12a06400 (446 bytes, 130 insns) */
void f_12a06400(void) {
  FTRACE(0x12a06400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06400 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06401 mov ebp, esp */
  EBP = (ESP);
  /* 12a06403 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06406 call 0x12a02360 */
  push32(0x12a0640bu); f_12a02360();
  /* 12a0640b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0640e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06411 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12a06414 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06418 push edx */
  push32((uint32_t)(EDX));
  /* 12a06419 call 0x12a065c0 */
  push32(0x12a0641eu); f_12a065c0();
  /* 12a0641e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06421 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a06424 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06428 je 0x12a06433 */
  if (C.zf) goto L_12a06433;
  /* 12a0642a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0642d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06431 jne 0x12a06442 */
  if (!C.zf) goto L_12a06442;
L_12a06433:;
  /* 12a06433 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06436 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06437 call dword ptr [0x12a302f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f0))), 0x12a0643du);
  /* 12a0643d jmp 0x12a065ba */
  goto L_12a065ba;
L_12a06442:;
  /* 12a06442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06445 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06449 jne 0x12a0645f */
  if (!C.zf) goto L_12a0645f;
  /* 12a0644b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0644e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12a06455 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0645a jmp 0x12a065ba */
  goto L_12a065ba;
L_12a0645f:;
  /* 12a0645f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06462 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06466 jne 0x12a06470 */
  if (!C.zf) goto L_12a06470;
  /* 12a06468 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0646b jmp 0x12a065ba */
  goto L_12a065ba;
L_12a06470:;
  /* 12a06470 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06473 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a06476 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a06479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0647c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12a0647f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a06482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06485 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06488 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12a0648b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0648e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06492 jne 0x12a06597 */
  if (!C.zf) goto L_12a06597;
  /* 12a06498 mov eax, dword ptr [0x12a2cc78] */
  EAX = (r32((uint32_t)(0x12a2cc78)));
  /* 12a0649d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a064a0 jmp 0x12a064ab */
  goto L_12a064ab;
L_12a064a2:;
  /* 12a064a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a064a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a064a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12a064ab:;
  /* 12a064ab mov edx, dword ptr [0x12a2cc78] */
  EDX = (r32((uint32_t)(0x12a2cc78)));
  /* 12a064b1 add edx, dword ptr [0x12a2cc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2cc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a064b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a064ba jge 0x12a064d2 */
  if ((C.sf==C.of)) goto L_12a064d2;
  /* 12a064bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a064bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a064c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a064c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12a064c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12a064d0 jmp 0x12a064a2 */
  goto L_12a064a2;
L_12a064d2:;
  /* 12a064d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a064d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12a064d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a064db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a064de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a064e4 jne 0x12a064f5 */
  if (!C.zf) goto L_12a064f5;
  /* 12a064e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a064e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12a064f0 jmp 0x12a0657d */
  goto L_12a0657d;
L_12a064f5:;
  /* 12a064f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a064f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a064fe jne 0x12a0650c */
  if (!C.zf) goto L_12a0650c;
  /* 12a06500 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06503 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12a0650a jmp 0x12a0657d */
  goto L_12a0657d;
L_12a0650c:;
  /* 12a0650c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0650f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06515 jne 0x12a06523 */
  if (!C.zf) goto L_12a06523;
  /* 12a06517 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0651a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12a06521 jmp 0x12a0657d */
  goto L_12a0657d;
L_12a06523:;
  /* 12a06523 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06526 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0652c jne 0x12a0653a */
  if (!C.zf) goto L_12a0653a;
  /* 12a0652e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06531 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12a06538 jmp 0x12a0657d */
  goto L_12a0657d;
L_12a0653a:;
  /* 12a0653a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0653d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06543 jne 0x12a06551 */
  if (!C.zf) goto L_12a06551;
  /* 12a06545 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06548 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12a0654f jmp 0x12a0657d */
  goto L_12a0657d;
L_12a06551:;
  /* 12a06551 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06554 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0655a jne 0x12a06568 */
  if (!C.zf) goto L_12a06568;
  /* 12a0655c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0655f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12a06566 jmp 0x12a0657d */
  goto L_12a0657d;
L_12a06568:;
  /* 12a06568 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0656b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06571 jne 0x12a0657d */
  if (!C.zf) goto L_12a0657d;
  /* 12a06573 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06576 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_12a0657d:;
  /* 12a0657d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06580 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12a06583 push edx */
  push32((uint32_t)(EDX));
  /* 12a06584 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a06586 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12a06589u);
  /* 12a06589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0658c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0658f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06592 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12a06595 jmp 0x12a065ae */
  goto L_12a065ae;
L_12a06597:;
  /* 12a06597 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0659a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12a065a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a065a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a065a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a065a8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12a065abu);
  /* 12a065ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a065ae:;
  /* 12a065ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a065b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a065b4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12a065b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a065ba:;
  /* 12a065ba mov esp, ebp */
  ESP = (EBP);
  /* 12a065bc pop ebp */
  EBP = (pop32());
  /* 12a065bd ret  */
  ESPCHK(0x12a06400u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c0 @ 0x12a065c0 (89 bytes, 35 insns) */
void f_12a065c0(void) {
  FTRACE(0x12a065c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a065c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a065c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a065c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a065c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a065c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a065ca:;
  /* 12a065ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a065cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a065cf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a065d2 je 0x12a065f2 */
  if (C.zf) goto L_12a065f2;
  /* 12a065d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a065d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a065da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a065dd mov ecx, dword ptr [0x12a2cc84] */
  ECX = (r32((uint32_t)(0x12a2cc84)));
  /* 12a065e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a065e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a065e9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a065eb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a065ee jae 0x12a065f2 */
  if (!C.cf) goto L_12a065f2;
  /* 12a065f0 jmp 0x12a065ca */
  goto L_12a065ca;
L_12a065f2:;
  /* 12a065f2 mov eax, dword ptr [0x12a2cc84] */
  EAX = (r32((uint32_t)(0x12a2cc84)));
  /* 12a065f7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a065fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a065fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a065ff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06602 jae 0x12a0660e */
  if (!C.cf) goto L_12a0660e;
  /* 12a06604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06607 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a06609 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0660c je 0x12a06612 */
  if (C.zf) goto L_12a06612;
L_12a0660e:;
  /* 12a0660e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06610 jmp 0x12a06615 */
  goto L_12a06615;
L_12a06612:;
  /* 12a06612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a06615:;
  /* 12a06615 mov esp, ebp */
  ESP = (EBP);
  /* 12a06617 pop ebp */
  EBP = (pop32());
  /* 12a06618 ret  */
  ESPCHK(0x12a065c0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12a06620 (48 bytes, 17 insns) */
void f_12a06620(void) {
  FTRACE(0x12a06620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06620 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06621 mov ebp, esp */
  EBP = (ESP);
  /* 12a06623 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06624 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06626 call 0x12a06320 */
  push32(0x12a0662bu); f_12a06320();
  /* 12a0662b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0662e mov eax, dword ptr [0x12a2e674] */
  EAX = (r32((uint32_t)(0x12a2e674)));
  /* 12a06633 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a06636 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06639 mov dword ptr [0x12a2e674], ecx */
  w32((uint32_t)(0x12a2e674), (ECX));
  /* 12a0663f push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06641 call 0x12a063c0 */
  push32(0x12a06646u); f_12a063c0();
  /* 12a06646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0664c mov esp, ebp */
  ESP = (EBP);
  /* 12a0664e pop ebp */
  EBP = (pop32());
  /* 12a0664f ret  */
  ESPCHK(0x12a06620u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x12a06650 (10 bytes, 5 insns) */
void f_12a06650(void) {
  FTRACE(0x12a06650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06650 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06651 mov ebp, esp */
  EBP = (ESP);
  /* 12a06653 mov eax, dword ptr [0x12a2e674] */
  EAX = (r32((uint32_t)(0x12a2e674)));
  /* 12a06658 pop ebp */
  EBP = (pop32());
  /* 12a06659 ret  */
  ESPCHK(0x12a06650u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12a06660 (45 bytes, 19 insns) */
void f_12a06660(void) {
  FTRACE(0x12a06660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06660 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06661 mov ebp, esp */
  EBP = (ESP);
  /* 12a06663 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06664 mov eax, dword ptr [0x12a2e674] */
  EAX = (r32((uint32_t)(0x12a2e674)));
  /* 12a06669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0666c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06670 je 0x12a06680 */
  if (C.zf) goto L_12a06680;
  /* 12a06672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06675 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06676 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12a06679u);
  /* 12a06679 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0667c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0667e jne 0x12a06684 */
  if (!C.zf) goto L_12a06684;
L_12a06680:;
  /* 12a06680 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06682 jmp 0x12a06689 */
  goto L_12a06689;
L_12a06684:;
  /* 12a06684 mov eax, 1 */
  EAX = (0x1u);
L_12a06689:;
  /* 12a06689 mov esp, ebp */
  ESP = (EBP);
  /* 12a0668b pop ebp */
  EBP = (pop32());
  /* 12a0668c ret  */
  ESPCHK(0x12a06660u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12a06690 (88 bytes, 40 insns) */
void f_12a06690(void) {
  FTRACE(0x12a06690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06690 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a06694 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a06698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0669a je 0x12a066e3 */
  if (C.zf) goto L_12a066e3;
  /* 12a0669c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0669e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12a066a2 push edi */
  push32((uint32_t)(EDI));
  /* 12a066a3 mov edi, ecx */
  EDI = (ECX);
  /* 12a066a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a066a8 jb 0x12a066d7 */
  if (C.cf) goto L_12a066d7;
  /* 12a066aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a066ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12a066af je 0x12a066b9 */
  if (C.zf) goto L_12a066b9;
  /* 12a066b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12a066b3:;
  /* 12a066b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a066b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a066b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a066b7 jne 0x12a066b3 */
  if (!C.zf) goto L_12a066b3;
L_12a066b9:;
  /* 12a066b9 mov ecx, eax */
  ECX = (EAX);
  /* 12a066bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12a066be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a066c0 mov ecx, eax */
  ECX = (EAX);
  /* 12a066c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a066c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a066c7 mov ecx, edx */
  ECX = (EDX);
  /* 12a066c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a066cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a066cf je 0x12a066d7 */
  if (C.zf) goto L_12a066d7;
  /* 12a066d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12a066d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a066d5 je 0x12a066dd */
  if (C.zf) goto L_12a066dd;
L_12a066d7:;
  /* 12a066d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a066d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a066da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12a066db jne 0x12a066d7 */
  if (!C.zf) goto L_12a066d7;
L_12a066dd:;
  /* 12a066dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a066e1 pop edi */
  EDI = (pop32());
  /* 12a066e2 ret  */
  ESPCHK(0x12a06690u, _esp0);
  ESP += 4; return;
L_12a066e3:;
  /* 12a066e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a066e7 ret  */
  ESPCHK(0x12a06690u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x12a066f0 (23 bytes, 10 insns) */
void f_12a066f0(void) {
  FTRACE(0x12a066f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a066f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a066f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a066f3 mov eax, dword ptr [0x12a2e670] */
  EAX = (r32((uint32_t)(0x12a2e670)));
  /* 12a066f8 push eax */
  push32((uint32_t)(EAX));
  /* 12a066f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a066fc push ecx */
  push32((uint32_t)(ECX));
  /* 12a066fd call 0x12a06710 */
  push32(0x12a06702u); f_12a06710();
  /* 12a06702 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06705 pop ebp */
  EBP = (pop32());
  /* 12a06706 ret  */
  ESPCHK(0x12a066f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12a06710 (87 bytes, 34 insns) */
void f_12a06710(void) {
  FTRACE(0x12a06710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06710 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06711 mov ebp, esp */
  EBP = (ESP);
  /* 12a06713 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06714 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06718 jbe 0x12a0671e */
  if ((C.cf||C.zf)) goto L_12a0671e;
  /* 12a0671a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0671c jmp 0x12a06763 */
  goto L_12a06763;
L_12a0671e:;
  /* 12a0671e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06722 ja 0x12a06735 */
  if ((!C.cf&&!C.zf)) goto L_12a06735;
  /* 12a06724 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06727 push eax */
  push32((uint32_t)(EAX));
  /* 12a06728 call 0x12a06770 */
  push32(0x12a0672du); f_12a06770();
  /* 12a0672d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06730 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a06733 jmp 0x12a0673c */
  goto L_12a0673c;
L_12a06735:;
  /* 12a06735 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a0673c:;
  /* 12a0673c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06740 jne 0x12a06748 */
  if (!C.zf) goto L_12a06748;
  /* 12a06742 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06746 jne 0x12a0674d */
  if (!C.zf) goto L_12a0674d;
L_12a06748:;
  /* 12a06748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0674b jmp 0x12a06763 */
  goto L_12a06763;
L_12a0674d:;
  /* 12a0674d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06750 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06751 call 0x12a06660 */
  push32(0x12a06756u); f_12a06660();
  /* 12a06756 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06759 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0675b jne 0x12a06761 */
  if (!C.zf) goto L_12a06761;
  /* 12a0675d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0675f jmp 0x12a06763 */
  goto L_12a06763;
L_12a06761:;
  /* 12a06761 jmp 0x12a0671e */
  goto L_12a0671e;
L_12a06763:;
  /* 12a06763 mov esp, ebp */
  ESP = (EBP);
  /* 12a06765 pop ebp */
  EBP = (pop32());
  /* 12a06766 ret  */
  ESPCHK(0x12a06710u, _esp0);
  ESP += 4; return;
}

/* FUN_10006770 @ 0x12a06770 (109 bytes, 37 insns) */
void f_12a06770(void) {
  FTRACE(0x12a06770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06770 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06771 mov ebp, esp */
  EBP = (ESP);
  /* 12a06773 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06777 cmp eax, dword ptr [0x12a2cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0677d ja 0x12a067ad */
  if ((!C.cf&&!C.zf)) goto L_12a067ad;
  /* 12a0677f push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06781 call 0x12a06320 */
  push32(0x12a06786u); f_12a06320();
  /* 12a06786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06789 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0678c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0678d call 0x12a072b0 */
  push32(0x12a06792u); f_12a072b0();
  /* 12a06792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06795 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a06798 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a0679a call 0x12a063c0 */
  push32(0x12a0679fu); f_12a063c0();
  /* 12a0679f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a067a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a067a6 je 0x12a067ad */
  if (C.zf) goto L_12a067ad;
  /* 12a067a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a067ab jmp 0x12a067d9 */
  goto L_12a067d9;
L_12a067ad:;
  /* 12a067ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a067b1 jne 0x12a067ba */
  if (!C.zf) goto L_12a067ba;
  /* 12a067b3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12a067ba:;
  /* 12a067ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a067bd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a067c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12a067c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a067c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a067c9 push eax */
  push32((uint32_t)(EAX));
  /* 12a067ca push 0 */
  push32((uint32_t)(0x0u));
  /* 12a067cc mov ecx, dword ptr [0x12a2fe2c] */
  ECX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a067d2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a067d3 call dword ptr [0x12a302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f4))), 0x12a067d9u);
L_12a067d9:;
  /* 12a067d9 mov esp, ebp */
  ESP = (EBP);
  /* 12a067db pop ebp */
  EBP = (pop32());
  /* 12a067dc ret  */
  ESPCHK(0x12a06770u, _esp0);
  ESP += 4; return;
}

