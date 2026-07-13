#include "recomp.h"

/* FUN_1000dd70 @ 0x10fddd70 (116 bytes, 34 insns) */
void f_10fddd70(void) {
  FTRACE(0x10fddd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fddd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fddd71 mov ebp, esp */
  EBP = (ESP);
  /* 10fddd73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fddd74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10fddd7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10fddd7d call 0x10fdd590 */
  push32(0x10fddd82u); f_10fdd590();
  /* 10fddd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fddd85 call 0x10fdf480 */
  push32(0x10fddd8au); f_10fdf480();
  /* 10fddd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fddd8c jge 0x10fddd95 */
  if ((C.sf==C.of)) goto L_10fddd95;
  /* 10fddd8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10fddd95:;
  /* 10fddd95 push 9 */
  push32((uint32_t)(0x9u));
  /* 10fddd97 call 0x10fdd630 */
  push32(0x10fddd9cu); f_10fdd630();
  /* 10fddd9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fddd9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fddda1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fddda3 mov eax, dword ptr [0x1100716c] */
  EAX = (r32((uint32_t)(0x1100716c)));
  /* 10fddda8 push eax */
  push32((uint32_t)(EAX));
  /* 10fddda9 call dword ptr [0x1100837c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100837c))), 0x10fdddafu);
  /* 10fdddaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdddb1 jne 0x10fddddd */
  if (!C.zf) goto L_10fddddd;
  /* 10fdddb3 call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fdddb9u);
  /* 10fdddb9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdddbc jne 0x10fdddd6 */
  if (!C.zf) goto L_10fdddd6;
  /* 10fdddbe call 0x10fe1a70 */
  push32(0x10fdddc3u); f_10fe1a70();
  /* 10fdddc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10fdddc9 call 0x10fe1a60 */
  push32(0x10fdddceu); f_10fe1a60();
  /* 10fdddce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10fdddd4 jmp 0x10fddddd */
  goto L_10fddddd;
L_10fdddd6:;
  /* 10fdddd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10fddddd:;
  /* 10fddddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fddde0 mov esp, ebp */
  ESP = (EBP);
  /* 10fddde2 pop ebp */
  EBP = (pop32());
  /* 10fddde3 ret  */
  ESPCHK(0x10fddd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x10fdddf0 (10 bytes, 5 insns) */
void f_10fdddf0(void) {
  FTRACE(0x10fdddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdddf1 mov ebp, esp */
  EBP = (ESP);
  /* 10fdddf3 call 0x10fddd70 */
  push32(0x10fdddf8u); f_10fddd70();
  /* 10fdddf8 pop ebp */
  EBP = (pop32());
  /* 10fdddf9 ret  */
  ESPCHK(0x10fdddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x10fdde00 (10 bytes, 5 insns) */
void f_10fdde00(void) {
  FTRACE(0x10fdde00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdde00 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdde01 mov ebp, esp */
  EBP = (ESP);
  /* 10fdde03 mov eax, dword ptr [0x11003c94] */
  EAX = (r32((uint32_t)(0x11003c94)));
  /* 10fdde08 pop ebp */
  EBP = (pop32());
  /* 10fdde09 ret  */
  ESPCHK(0x10fdde00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x10fdde10 (31 bytes, 11 insns) */
void f_10fdde10(void) {
  FTRACE(0x10fdde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdde10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdde11 mov ebp, esp */
  EBP = (ESP);
  /* 10fdde13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdde1a jbe 0x10fdde20 */
  if ((C.cf||C.zf)) goto L_10fdde20;
  /* 10fdde1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdde1e jmp 0x10fdde2d */
  goto L_10fdde2d;
L_10fdde20:;
  /* 10fdde20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdde23 mov dword ptr [0x11003c94], eax */
  w32((uint32_t)(0x11003c94), (EAX));
  /* 10fdde28 mov eax, 1 */
  EAX = (0x1u);
L_10fdde2d:;
  /* 10fdde2d pop ebp */
  EBP = (pop32());
  /* 10fdde2e ret  */
  ESPCHK(0x10fdde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x10fdde30 (89 bytes, 20 insns) */
void f_10fdde30(void) {
  FTRACE(0x10fdde30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdde30 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdde31 mov ebp, esp */
  EBP = (ESP);
  /* 10fdde33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10fdde38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdde3a mov eax, dword ptr [0x1100716c] */
  EAX = (r32((uint32_t)(0x1100716c)));
  /* 10fdde3f push eax */
  push32((uint32_t)(EAX));
  /* 10fdde40 call dword ptr [0x1100833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100833c))), 0x10fdde46u);
  /* 10fdde46 mov dword ptr [0x11007168], eax */
  w32((uint32_t)(0x11007168), (EAX));
  /* 10fdde4b cmp dword ptr [0x11007168], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11007168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdde52 jne 0x10fdde58 */
  if (!C.zf) goto L_10fdde58;
  /* 10fdde54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdde56 jmp 0x10fdde87 */
  goto L_10fdde87;
L_10fdde58:;
  /* 10fdde58 mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fdde5e mov dword ptr [0x1100715c], ecx */
  w32((uint32_t)(0x1100715c), (ECX));
  /* 10fdde64 mov dword ptr [0x11007160], 0 */
  w32((uint32_t)(0x11007160), (0x0u));
  /* 10fdde6e mov dword ptr [0x11007164], 0 */
  w32((uint32_t)(0x11007164), (0x0u));
  /* 10fdde78 mov dword ptr [0x11007148], 0x10 */
  w32((uint32_t)(0x11007148), (0x10u));
  /* 10fdde82 mov eax, 1 */
  EAX = (0x1u);
L_10fdde87:;
  /* 10fdde87 pop ebp */
  EBP = (pop32());
  /* 10fdde88 ret  */
  ESPCHK(0x10fdde30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x10fdde90 (85 bytes, 29 insns) */
void f_10fdde90(void) {
  FTRACE(0x10fdde90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdde90 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdde91 mov ebp, esp */
  EBP = (ESP);
  /* 10fdde93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdde96 mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdde9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdde9e mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fddea4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fddea6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fddea9 mov edx, dword ptr [0x11007168] */
  EDX = (r32((uint32_t)(0x11007168)));
  /* 10fddeaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fddeb2:;
  /* 10fddeb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fddeb5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fddeb8 jae 0x10fddedf */
  if (!C.cf) goto L_10fddedf;
  /* 10fddeba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fddebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fddec0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddec3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fddec6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fddecd jae 0x10fdded4 */
  if (!C.cf) goto L_10fdded4;
  /* 10fddecf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdded2 jmp 0x10fddee1 */
  goto L_10fddee1;
L_10fdded4:;
  /* 10fdded4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdded7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fddeda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fddedd jmp 0x10fddeb2 */
  goto L_10fddeb2;
L_10fddedf:;
  /* 10fddedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fddee1:;
  /* 10fddee1 mov esp, ebp */
  ESP = (EBP);
  /* 10fddee3 pop ebp */
  EBP = (pop32());
  /* 10fddee4 ret  */
  ESPCHK(0x10fdde90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x10fddef0 (95 bytes, 33 insns) */
void f_10fddef0(void) {
  FTRACE(0x10fddef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fddef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fddef1 mov ebp, esp */
  EBP = (ESP);
  /* 10fddef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fddef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fddefc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddeff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fddf02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fddf05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10fddf08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fddf0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fddf10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fddf13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fddf15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fddf18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fddf1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fddf1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fddf1f jne 0x10fddf41 */
  if (!C.zf) goto L_10fddf41;
  /* 10fddf21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fddf24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10fddf27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fddf29 jne 0x10fddf41 */
  if (!C.zf) goto L_10fddf41;
  /* 10fddf2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fddf2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fddf34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fddf36 je 0x10fddf41 */
  if (C.zf) goto L_10fddf41;
  /* 10fddf38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10fddf3f jmp 0x10fddf48 */
  goto L_10fddf48;
L_10fddf41:;
  /* 10fddf41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10fddf48:;
  /* 10fddf48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fddf4b mov esp, ebp */
  ESP = (EBP);
  /* 10fddf4d pop ebp */
  EBP = (pop32());
  /* 10fddf4e ret  */
  ESPCHK(0x10fddef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df50 @ 0x10fddf50 (1485 bytes, 453 insns) */
void f_10fddf50(void) {
  FTRACE(0x10fddf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fddf50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fddf51 mov ebp, esp */
  EBP = (ESP);
  /* 10fddf53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddf56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fddf59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fddf5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10fddf5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fddf62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fddf65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddf68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fddf6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fddf6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10fddf71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fddf74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fddf77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fddf7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fddf80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10fddf87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fddf8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fddf8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddf90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10fddf93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fddf96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fddf98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddf9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10fddf9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fddfa1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fddfa4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10fddfa7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fddfaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fddfac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fddfaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fddfb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10fddfb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fddfb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fddfbb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fddfbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fddfc0 jne 0x10fde0e8 */
  if (!C.zf) goto L_10fde0e8;
  /* 10fddfc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fddfc9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fddfcc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fddfcf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fddfd2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fddfd6 jbe 0x10fddfdf */
  if ((C.cf||C.zf)) goto L_10fddfdf;
  /* 10fddfd8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10fddfdf:;
  /* 10fddfdf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fddfe2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fddfe5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fddfe8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fddfeb jne 0x10fde0c1 */
  if (!C.zf) goto L_10fde0c1;
  /* 10fddff1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fddff5 jae 0x10fde056 */
  if (!C.cf) goto L_10fde056;
  /* 10fddff7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fddffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fddfff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde001 not eax */
  EAX = (~(EAX));
  /* 10fde003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde006 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde009 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10fde00d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde012 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde015 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10fde019 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde01c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde01f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10fde022 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde025 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde028 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde02b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10fde02e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde031 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde034 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fde038 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde03a jne 0x10fde054 */
  if (!C.zf) goto L_10fde054;
  /* 10fde03c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde041 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde044 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde046 not eax */
  EAX = (~(EAX));
  /* 10fde048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde04b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fde04d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fde04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde052 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fde054:;
  /* 10fde054 jmp 0x10fde0c1 */
  goto L_10fde0c1;
L_10fde056:;
  /* 10fde056 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde059 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde05c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde061 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde063 not edx */
  EDX = (~(EDX));
  /* 10fde065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde068 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde06b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10fde072 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde077 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde07a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10fde081 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde084 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde087 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fde08a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde08d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde090 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde093 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10fde096 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde099 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde09c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fde0a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde0a2 jne 0x10fde0c1 */
  if (!C.zf) goto L_10fde0c1;
  /* 10fde0a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde0a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde0aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde0af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde0b1 not edx */
  EDX = (~(EDX));
  /* 10fde0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde0b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde0b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde0bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde0be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10fde0c1:;
  /* 10fde0c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde0c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fde0c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde0ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fde0cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10fde0d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde0d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde0d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde0d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fde0dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fde0df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde0e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde0e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10fde0e8:;
  /* 10fde0e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde0eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10fde0ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde0f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fde0f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde0f8 jbe 0x10fde101 */
  if ((C.cf||C.zf)) goto L_10fde101;
  /* 10fde0fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10fde101:;
  /* 10fde101 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde104 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fde107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde109 jne 0x10fde265 */
  if (!C.zf) goto L_10fde265;
  /* 10fde10f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde112 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde115 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10fde118 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde11b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10fde11e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde121 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10fde124 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde128 jbe 0x10fde131 */
  if ((C.cf||C.zf)) goto L_10fde131;
  /* 10fde12a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10fde131:;
  /* 10fde131 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde134 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde137 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10fde13a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde13d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fde140 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde143 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10fde146 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde14a jbe 0x10fde153 */
  if ((C.cf||C.zf)) goto L_10fde153;
  /* 10fde14c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10fde153:;
  /* 10fde153 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde156 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde159 je 0x10fde25f */
  if (C.zf) goto L_10fde25f;
  /* 10fde15f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde162 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde165 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde168 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde16b jne 0x10fde241 */
  if (!C.zf) goto L_10fde241;
  /* 10fde171 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde175 jae 0x10fde1d6 */
  if (!C.cf) goto L_10fde1d6;
  /* 10fde177 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde17c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde17f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde181 not edx */
  EDX = (~(EDX));
  /* 10fde183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde189 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10fde18d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde18f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde192 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde195 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10fde199 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde19c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde19f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fde1a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde1a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde1a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde1ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10fde1ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde1b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde1b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fde1b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde1ba jne 0x10fde1d4 */
  if (!C.zf) goto L_10fde1d4;
  /* 10fde1bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde1c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde1c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde1c6 not edx */
  EDX = (~(EDX));
  /* 10fde1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde1cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fde1cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde1cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde1d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fde1d4:;
  /* 10fde1d4 jmp 0x10fde241 */
  goto L_10fde241;
L_10fde1d6:;
  /* 10fde1d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde1d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde1dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde1e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde1e3 not eax */
  EAX = (~(EAX));
  /* 10fde1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde1e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde1eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10fde1f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde1f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde1fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10fde201 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde204 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde207 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10fde20a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde20d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde210 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde213 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10fde216 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde219 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde21c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fde220 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde222 jne 0x10fde241 */
  if (!C.zf) goto L_10fde241;
  /* 10fde224 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde227 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde22a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde22f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde231 not eax */
  EAX = (~(EAX));
  /* 10fde233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde236 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde239 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fde23b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde23e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fde241:;
  /* 10fde241 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde244 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fde247 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde24a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde24d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fde250 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde253 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fde256 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde259 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fde25c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10fde25f:;
  /* 10fde25f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde262 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10fde265:;
  /* 10fde265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde268 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fde26b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde26d jne 0x10fde27b */
  if (!C.zf) goto L_10fde27b;
  /* 10fde26f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fde272 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde275 je 0x10fde38b */
  if (C.zf) goto L_10fde38b;
L_10fde27b:;
  /* 10fde27b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde27e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde281 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10fde284 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fde287 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde28a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde28d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde290 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fde293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde296 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde299 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10fde29c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde29f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde2a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10fde2a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde2a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde2ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde2ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fde2b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde2b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde2b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde2ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde2bd jne 0x10fde38b */
  if (!C.zf) goto L_10fde38b;
  /* 10fde2c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde2c7 jae 0x10fde324 */
  if (!C.cf) goto L_10fde324;
  /* 10fde2c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde2cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde2cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fde2d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde2d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde2d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fde2dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fde2df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde2e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde2e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10fde2e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde2ea jne 0x10fde302 */
  if (!C.zf) goto L_10fde302;
  /* 10fde2ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde2f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde2f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde2f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde2f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fde2fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde2fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde300 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fde302:;
  /* 10fde302 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde30a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde30c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde30f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde312 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10fde316 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde31b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde31e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10fde322 jmp 0x10fde38b */
  goto L_10fde38b;
L_10fde324:;
  /* 10fde324 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde327 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde32a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fde32e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde331 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde334 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fde337 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fde33a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde33d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde340 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10fde343 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde345 jne 0x10fde362 */
  if (!C.zf) goto L_10fde362;
  /* 10fde347 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde34a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde34d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde352 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde357 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde35a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde35f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10fde362:;
  /* 10fde362 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde365 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde368 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde36d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde36f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde372 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde375 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10fde37c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde37e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde381 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10fde384 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10fde38b:;
  /* 10fde38b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde38e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde391 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10fde393 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde396 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde399 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde39c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10fde39f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde3a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fde3a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde3a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde3aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fde3ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde3af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde3b2 jne 0x10fde519 */
  if (!C.zf) goto L_10fde519;
  /* 10fde3b8 cmp dword ptr [0x11007160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11007160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde3bf je 0x10fde508 */
  if (C.zf) goto L_10fde508;
  /* 10fde3c5 mov eax, dword ptr [0x11007158] */
  EAX = (r32((uint32_t)(0x11007158)));
  /* 10fde3ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10fde3cd mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fde3d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fde3d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde3d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fde3db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10fde3e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10fde3e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde3e8 push eax */
  push32((uint32_t)(EAX));
  /* 10fde3e9 call dword ptr [0x11008358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008358))), 0x10fde3efu);
  /* 10fde3ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde3f4 mov ecx, dword ptr [0x11007158] */
  ECX = (r32((uint32_t)(0x11007158)));
  /* 10fde3fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde3fc mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde401 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fde404 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde406 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde40c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fde40f mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde414 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fde417 mov edx, dword ptr [0x11007158] */
  EDX = (r32((uint32_t)(0x11007158)));
  /* 10fde41d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10fde428 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde42d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fde430 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10fde433 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde436 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde43b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fde43e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10fde441 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde447 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fde44a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10fde44e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde450 jne 0x10fde466 */
  if (!C.zf) goto L_10fde466;
  /* 10fde452 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde458 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fde45b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10fde45d mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fde463 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10fde466:;
  /* 10fde466 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde46c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde470 jne 0x10fde508 */
  if (!C.zf) goto L_10fde508;
  /* 10fde476 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10fde47b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fde47d mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde482 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fde485 push ecx */
  push32((uint32_t)(ECX));
  /* 10fde486 call dword ptr [0x11008358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008358))), 0x10fde48cu);
  /* 10fde48c mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde492 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fde495 push eax */
  push32((uint32_t)(EAX));
  /* 10fde496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fde498 mov ecx, dword ptr [0x1100716c] */
  ECX = (r32((uint32_t)(0x1100716c)));
  /* 10fde49e push ecx */
  push32((uint32_t)(ECX));
  /* 10fde49f call dword ptr [0x1100835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100835c))), 0x10fde4a5u);
  /* 10fde4a5 mov edx, dword ptr [0x11007164] */
  EDX = (r32((uint32_t)(0x11007164)));
  /* 10fde4ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fde4ae mov eax, dword ptr [0x11007168] */
  EAX = (r32((uint32_t)(0x11007168)));
  /* 10fde4b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde4b5 mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fde4bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde4be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde4c0 push eax */
  push32((uint32_t)(EAX));
  /* 10fde4c1 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fde4c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde4ca push edx */
  push32((uint32_t)(EDX));
  /* 10fde4cb mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fde4d0 push eax */
  push32((uint32_t)(EAX));
  /* 10fde4d1 call 0x10fe1a80 */
  push32(0x10fde4d6u); f_10fe1a80();
  /* 10fde4d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde4d9 mov ecx, dword ptr [0x11007164] */
  ECX = (r32((uint32_t)(0x11007164)));
  /* 10fde4df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde4e2 mov dword ptr [0x11007164], ecx */
  w32((uint32_t)(0x11007164), (ECX));
  /* 10fde4e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde4eb cmp edx, dword ptr [0x11007160] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11007160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde4f1 jbe 0x10fde4fc */
  if ((C.cf||C.zf)) goto L_10fde4fc;
  /* 10fde4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde4f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde4f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fde4fc:;
  /* 10fde4fc mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fde502 mov dword ptr [0x1100715c], ecx */
  w32((uint32_t)(0x1100715c), (ECX));
L_10fde508:;
  /* 10fde508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde50b mov dword ptr [0x11007160], edx */
  w32((uint32_t)(0x11007160), (EDX));
  /* 10fde511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde514 mov dword ptr [0x11007158], eax */
  w32((uint32_t)(0x11007158), (EAX));
L_10fde519:;
  /* 10fde519 mov esp, ebp */
  ESP = (EBP);
  /* 10fde51b pop ebp */
  EBP = (pop32());
  /* 10fde51c ret  */
  ESPCHK(0x10fddf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x10fde520 (1334 bytes, 427 insns) */
void f_10fde520(void) {
  FTRACE(0x10fde520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fde520 push ebp */
  push32((uint32_t)(EBP));
  /* 10fde521 mov ebp, esp */
  EBP = (ESP);
  /* 10fde523 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde526 push esi */
  push32((uint32_t)(ESI));
  /* 10fde527 mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fde52c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fde52f mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fde535 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde537 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fde53a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fde53d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde540 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10fde543 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10fde546 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde549 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10fde54c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde54f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fde552 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde556 jge 0x10fde56c */
  if ((C.sf==C.of)) goto L_10fde56c;
  /* 10fde558 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fde55b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde55e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde560 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fde563 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10fde56a jmp 0x10fde581 */
  goto L_10fde581;
L_10fde56c:;
  /* 10fde56c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fde573 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde576 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde579 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fde57c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde57e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10fde581:;
  /* 10fde581 mov ecx, dword ptr [0x1100715c] */
  ECX = (r32((uint32_t)(0x1100715c)));
  /* 10fde587 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10fde58a:;
  /* 10fde58a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde58d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde590 jae 0x10fde5b6 */
  if (!C.cf) goto L_10fde5b6;
  /* 10fde592 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde598 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10fde59a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde59d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde5a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10fde5a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde5a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde5a7 je 0x10fde5ab */
  if (C.zf) goto L_10fde5ab;
  /* 10fde5a9 jmp 0x10fde5b6 */
  goto L_10fde5b6;
L_10fde5ab:;
  /* 10fde5ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde5b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fde5b4 jmp 0x10fde58a */
  goto L_10fde58a;
L_10fde5b6:;
  /* 10fde5b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde5bc jne 0x10fde69d */
  if (!C.zf) goto L_10fde69d;
  /* 10fde5c2 mov eax, dword ptr [0x11007168] */
  EAX = (r32((uint32_t)(0x11007168)));
  /* 10fde5c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10fde5ca:;
  /* 10fde5ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5cd cmp ecx, dword ptr [0x1100715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1100715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde5d3 jae 0x10fde5f9 */
  if (!C.cf) goto L_10fde5f9;
  /* 10fde5d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde5db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10fde5dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde5e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10fde5e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde5e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fde5ea je 0x10fde5ee */
  if (C.zf) goto L_10fde5ee;
  /* 10fde5ec jmp 0x10fde5f9 */
  goto L_10fde5f9;
L_10fde5ee:;
  /* 10fde5ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde5f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fde5f7 jmp 0x10fde5ca */
  goto L_10fde5ca;
L_10fde5f9:;
  /* 10fde5f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde5fc cmp ecx, dword ptr [0x1100715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1100715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde602 jne 0x10fde69d */
  if (!C.zf) goto L_10fde69d;
L_10fde608:;
  /* 10fde608 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde60b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde60e jae 0x10fde626 */
  if (!C.cf) goto L_10fde626;
  /* 10fde610 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde613 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde617 je 0x10fde61b */
  if (C.zf) goto L_10fde61b;
  /* 10fde619 jmp 0x10fde626 */
  goto L_10fde626;
L_10fde61b:;
  /* 10fde61b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde61e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde621 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fde624 jmp 0x10fde608 */
  goto L_10fde608;
L_10fde626:;
  /* 10fde626 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde629 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde62c jne 0x10fde677 */
  if (!C.zf) goto L_10fde677;
  /* 10fde62e mov eax, dword ptr [0x11007168] */
  EAX = (r32((uint32_t)(0x11007168)));
  /* 10fde633 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10fde636:;
  /* 10fde636 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde639 cmp ecx, dword ptr [0x1100715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1100715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde63f jae 0x10fde657 */
  if (!C.cf) goto L_10fde657;
  /* 10fde641 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde644 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde648 je 0x10fde64c */
  if (C.zf) goto L_10fde64c;
  /* 10fde64a jmp 0x10fde657 */
  goto L_10fde657;
L_10fde64c:;
  /* 10fde64c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde64f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde652 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fde655 jmp 0x10fde636 */
  goto L_10fde636;
L_10fde657:;
  /* 10fde657 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde65a cmp ecx, dword ptr [0x1100715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1100715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde660 jne 0x10fde677 */
  if (!C.zf) goto L_10fde677;
  /* 10fde662 call 0x10fdea60 */
  push32(0x10fde667u); f_10fdea60();
  /* 10fde667 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fde66a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde66e jne 0x10fde677 */
  if (!C.zf) goto L_10fde677;
  /* 10fde670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde672 jmp 0x10fdea51 */
  goto L_10fdea51;
L_10fde677:;
  /* 10fde677 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde67a push edx */
  push32((uint32_t)(EDX));
  /* 10fde67b call 0x10fdeb70 */
  push32(0x10fde680u); f_10fdeb70();
  /* 10fde680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde683 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde686 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10fde689 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fde68b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde68e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fde691 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde694 jne 0x10fde69d */
  if (!C.zf) goto L_10fde69d;
  /* 10fde696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde698 jmp 0x10fdea51 */
  goto L_10fdea51;
L_10fde69d:;
  /* 10fde69d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde6a0 mov dword ptr [0x1100715c], edx */
  w32((uint32_t)(0x1100715c), (EDX));
  /* 10fde6a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde6a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fde6ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10fde6af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde6b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fde6b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10fde6b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde6bb je 0x10fde6e0 */
  if (C.zf) goto L_10fde6e0;
  /* 10fde6bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde6c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde6c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde6c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10fde6ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde6cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde6d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde6d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10fde6da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10fde6dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fde6de jne 0x10fde715 */
  if (!C.zf) goto L_10fde715;
L_10fde6e0:;
  /* 10fde6e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10fde6e7:;
  /* 10fde6e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde6ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde6ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde6f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10fde6f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde6f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde6fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde6fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10fde704 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10fde706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde708 jne 0x10fde715 */
  if (!C.zf) goto L_10fde715;
  /* 10fde70a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde710 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10fde713 jmp 0x10fde6e7 */
  goto L_10fde6e7;
L_10fde715:;
  /* 10fde715 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde718 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fde71e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde721 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10fde728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fde72b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fde732 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde735 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde738 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fde73b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10fde73f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10fde742 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde746 jne 0x10fde762 */
  if (!C.zf) goto L_10fde762;
  /* 10fde748 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10fde74f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde752 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde755 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fde758 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10fde75f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10fde762:;
  /* 10fde762 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde766 jl 0x10fde77b */
  if ((C.sf!=C.of)) goto L_10fde77b;
  /* 10fde768 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fde76b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fde76d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fde770 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde776 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fde779 jmp 0x10fde762 */
  goto L_10fde762;
L_10fde77b:;
  /* 10fde77b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde781 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10fde785 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fde788 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde78b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fde78d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde790 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fde793 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde796 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10fde799 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde79c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fde79f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde7a3 jle 0x10fde7ac */
  if ((C.zf||C.sf!=C.of)) goto L_10fde7ac;
  /* 10fde7a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10fde7ac:;
  /* 10fde7ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde7af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde7b2 je 0x10fde9d0 */
  if (C.zf) goto L_10fde9d0;
  /* 10fde7b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde7bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde7be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde7c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde7c4 jne 0x10fde89a */
  if (!C.zf) goto L_10fde89a;
  /* 10fde7ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde7ce jge 0x10fde82f */
  if ((C.sf==C.of)) goto L_10fde82f;
  /* 10fde7d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde7d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde7d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde7da not eax */
  EAX = (~(EAX));
  /* 10fde7dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde7df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde7e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10fde7e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde7e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde7eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde7ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10fde7f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde7f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde7f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10fde7fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde7fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde801 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde804 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10fde807 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde80a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde80d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fde811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fde813 jne 0x10fde82d */
  if (!C.zf) goto L_10fde82d;
  /* 10fde815 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde81a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde81d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde81f not eax */
  EAX = (~(EAX));
  /* 10fde821 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde824 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fde826 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fde828 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde82b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fde82d:;
  /* 10fde82d jmp 0x10fde89a */
  goto L_10fde89a;
L_10fde82f:;
  /* 10fde82f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde83a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde83c not edx */
  EDX = (~(EDX));
  /* 10fde83e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde841 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde844 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10fde84b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde84d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde850 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde853 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10fde85a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde85d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde860 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fde863 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fde866 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde869 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde86c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10fde86f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde872 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde875 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fde879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde87b jne 0x10fde89a */
  if (!C.zf) goto L_10fde89a;
  /* 10fde87d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fde880 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde883 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde888 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde88a not edx */
  EDX = (~(EDX));
  /* 10fde88c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde88f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde892 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fde894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10fde89a:;
  /* 10fde89a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde89d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fde8a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fde8a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10fde8a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde8af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fde8b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fde8b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde8bc je 0x10fde9d0 */
  if (C.zf) goto L_10fde9d0;
  /* 10fde8c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fde8c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10fde8cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fde8ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde8d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde8d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fde8da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde8e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fde8e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fde8e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10fde8ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde8f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10fde8f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde8fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fde901 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde904 jne 0x10fde9d0 */
  if (!C.zf) goto L_10fde9d0;
  /* 10fde90a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde90e jge 0x10fde96a */
  if ((C.sf==C.of)) goto L_10fde96a;
  /* 10fde910 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde913 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde916 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fde91a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde91d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde920 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10fde923 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fde925 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde928 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde92b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10fde92e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde930 jne 0x10fde948 */
  if (!C.zf) goto L_10fde948;
  /* 10fde932 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde937 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde93a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde93c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde93f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fde941 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fde943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde946 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fde948:;
  /* 10fde948 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde94d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde952 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde955 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde958 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10fde95c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde95e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde961 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde964 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10fde968 jmp 0x10fde9d0 */
  goto L_10fde9d0;
L_10fde96a:;
  /* 10fde96a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde96d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde970 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fde974 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde977 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde97a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10fde97d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fde97f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde982 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde985 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10fde988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fde98a jne 0x10fde9a7 */
  if (!C.zf) goto L_10fde9a7;
  /* 10fde98c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde98f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde992 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fde997 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fde999 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde99c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fde99f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fde9a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fde9a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fde9a7:;
  /* 10fde9a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fde9aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fde9ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fde9b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fde9b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde9b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde9ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10fde9c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fde9c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fde9c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fde9c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10fde9d0:;
  /* 10fde9d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fde9d4 je 0x10fde9ea */
  if (C.zf) goto L_10fde9ea;
  /* 10fde9d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde9d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde9dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fde9de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde9e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde9e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fde9e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10fde9ea:;
  /* 10fde9ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde9ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde9f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fde9f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fde9f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fde9f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fde9fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fde9fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdea01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdea04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdea07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdea0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10fdea0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdea10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fdea12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdea15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fdea17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdea1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdea1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fdea1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdea21 jne 0x10fdea43 */
  if (!C.zf) goto L_10fdea43;
  /* 10fdea23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdea26 cmp eax, dword ptr [0x11007160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11007160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdea2c jne 0x10fdea43 */
  if (!C.zf) goto L_10fdea43;
  /* 10fdea2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdea31 cmp ecx, dword ptr [0x11007158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11007158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdea37 jne 0x10fdea43 */
  if (!C.zf) goto L_10fdea43;
  /* 10fdea39 mov dword ptr [0x11007160], 0 */
  w32((uint32_t)(0x11007160), (0x0u));
L_10fdea43:;
  /* 10fdea43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10fdea46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdea49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10fdea4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdea4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10fdea51:;
  /* 10fdea51 pop esi */
  ESI = (pop32());
  /* 10fdea52 mov esp, ebp */
  ESP = (EBP);
  /* 10fdea54 pop ebp */
  EBP = (pop32());
  /* 10fdea55 ret  */
  ESPCHK(0x10fde520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x10fdea60 (271 bytes, 78 insns) */
void f_10fdea60(void) {
  FTRACE(0x10fdea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdea60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdea61 mov ebp, esp */
  EBP = (ESP);
  /* 10fdea63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdea64 mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdea69 cmp eax, dword ptr [0x11007148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11007148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdea6f jne 0x10fdeabb */
  if (!C.zf) goto L_10fdeabb;
  /* 10fdea71 mov ecx, dword ptr [0x11007148] */
  ECX = (r32((uint32_t)(0x11007148)));
  /* 10fdea77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdea7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdea7d push ecx */
  push32((uint32_t)(ECX));
  /* 10fdea7e mov edx, dword ptr [0x11007168] */
  EDX = (r32((uint32_t)(0x11007168)));
  /* 10fdea84 push edx */
  push32((uint32_t)(EDX));
  /* 10fdea85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdea87 mov eax, dword ptr [0x1100716c] */
  EAX = (r32((uint32_t)(0x1100716c)));
  /* 10fdea8c push eax */
  push32((uint32_t)(EAX));
  /* 10fdea8d call dword ptr [0x11008338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008338))), 0x10fdea93u);
  /* 10fdea93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fdea96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdea9a jne 0x10fdeaa3 */
  if (!C.zf) goto L_10fdeaa3;
  /* 10fdea9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdea9e jmp 0x10fdeb6b */
  goto L_10fdeb6b;
L_10fdeaa3:;
  /* 10fdeaa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeaa6 mov dword ptr [0x11007168], ecx */
  w32((uint32_t)(0x11007168), (ECX));
  /* 10fdeaac mov edx, dword ptr [0x11007148] */
  EDX = (r32((uint32_t)(0x11007148)));
  /* 10fdeab2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeab5 mov dword ptr [0x11007148], edx */
  w32((uint32_t)(0x11007148), (EDX));
L_10fdeabb:;
  /* 10fdeabb mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdeac0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdeac3 mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fdeac9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeacb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fdeace push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10fdead3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10fdead5 mov edx, dword ptr [0x1100716c] */
  EDX = (r32((uint32_t)(0x1100716c)));
  /* 10fdeadb push edx */
  push32((uint32_t)(EDX));
  /* 10fdeadc call dword ptr [0x1100833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100833c))), 0x10fdeae2u);
  /* 10fdeae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeae5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10fdeae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeaeb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdeaef jne 0x10fdeaf5 */
  if (!C.zf) goto L_10fdeaf5;
  /* 10fdeaf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdeaf3 jmp 0x10fdeb6b */
  goto L_10fdeb6b;
L_10fdeaf5:;
  /* 10fdeaf5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fdeaf7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10fdeafc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10fdeb01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdeb03 call dword ptr [0x11008334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008334))), 0x10fdeb09u);
  /* 10fdeb09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10fdeb0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdeb16 jne 0x10fdeb32 */
  if (!C.zf) goto L_10fdeb32;
  /* 10fdeb18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdeb1e push ecx */
  push32((uint32_t)(ECX));
  /* 10fdeb1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdeb21 mov edx, dword ptr [0x1100716c] */
  EDX = (r32((uint32_t)(0x1100716c)));
  /* 10fdeb27 push edx */
  push32((uint32_t)(EDX));
  /* 10fdeb28 call dword ptr [0x1100835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100835c))), 0x10fdeb2eu);
  /* 10fdeb2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdeb30 jmp 0x10fdeb6b */
  goto L_10fdeb6b;
L_10fdeb32:;
  /* 10fdeb32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fdeb3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10fdeb45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10fdeb4f mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdeb54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeb57 mov dword ptr [0x11007164], eax */
  w32((uint32_t)(0x11007164), (EAX));
  /* 10fdeb5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeb5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10fdeb62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10fdeb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fdeb6b:;
  /* 10fdeb6b mov esp, ebp */
  ESP = (EBP);
  /* 10fdeb6d pop ebp */
  EBP = (pop32());
  /* 10fdeb6e ret  */
  ESPCHK(0x10fdea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x10fdeb70 (494 bytes, 149 insns) */
void f_10fdeb70(void) {
  FTRACE(0x10fdeb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdeb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdeb71 mov ebp, esp */
  EBP = (ESP);
  /* 10fdeb73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdeb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdeb79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdeb7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fdeb7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdeb82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fdeb85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fdeb88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10fdeb8f:;
  /* 10fdeb8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdeb93 jl 0x10fdeba8 */
  if ((C.sf!=C.of)) goto L_10fdeba8;
  /* 10fdeb95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdeb98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10fdeb9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fdeb9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdeba0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeba3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10fdeba6 jmp 0x10fdeb8f */
  goto L_10fdeb8f;
L_10fdeba8:;
  /* 10fdeba8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdebab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdebb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdebb4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10fdebbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fdebbe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fdebc5 jmp 0x10fdebd0 */
  goto L_10fdebd0;
L_10fdebc7:;
  /* 10fdebc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdebca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdebcd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10fdebd0:;
  /* 10fdebd0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdebd4 jge 0x10fdebf6 */
  if ((C.sf==C.of)) goto L_10fdebf6;
  /* 10fdebd6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdebd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdebdc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10fdebdf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fdebe2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdebe5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdebe8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10fdebeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdebee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdebf1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10fdebf4 jmp 0x10fdebc7 */
  goto L_10fdebc7;
L_10fdebf6:;
  /* 10fdebf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdebf9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10fdebfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdebff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fdec02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fdec07 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fdec09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10fdec0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10fdec13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdec16 push edx */
  push32((uint32_t)(EDX));
  /* 10fdec17 call dword ptr [0x11008334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008334))), 0x10fdec1du);
  /* 10fdec1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdec1f jne 0x10fdec29 */
  if (!C.zf) goto L_10fdec29;
  /* 10fdec21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fdec24 jmp 0x10fded5a */
  goto L_10fded5a;
L_10fdec29:;
  /* 10fdec29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdec2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fdec34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdec37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fdec3a jmp 0x10fdec48 */
  goto L_10fdec48;
L_10fdec3c:;
  /* 10fdec3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdec3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fdec48:;
  /* 10fdec48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdec4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdec4e ja 0x10fdecad */
  if ((!C.cf&&!C.zf)) goto L_10fdecad;
  /* 10fdec50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdec53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10fdec5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdec5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10fdec67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdec6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fdec70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10fdec79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fdec88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdec91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fdec97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdec9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdec9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fdeca2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdeca5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10fdecab jmp 0x10fdec3c */
  goto L_10fdec3c;
L_10fdecad:;
  /* 10fdecad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdecb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdecb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fdecb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdecbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdecbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdecc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10fdecc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdecc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fdeccb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fdecce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdecd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdecd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10fdecd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdecda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdecdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdece0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10fdece3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdece6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fdece9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fdecec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdecef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdecf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10fdecf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdecf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdecfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10fded03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fded06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fded09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10fded14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fded17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10fded1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fded1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10fded21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fded24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fded27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10fded2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fded2c jne 0x10fded3d */
  if (!C.zf) goto L_10fded3d;
  /* 10fded2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fded34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fded37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fded3d:;
  /* 10fded3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fded42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fded45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fded47 not edx */
  EDX = (~(EDX));
  /* 10fded49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fded4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fded51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fded57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10fded5a:;
  /* 10fded5a mov esp, ebp */
  ESP = (EBP);
  /* 10fded5c pop ebp */
  EBP = (pop32());
  /* 10fded5d ret  */
  ESPCHK(0x10fdeb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x10fded60 (1515 bytes, 489 insns) */
void f_10fded60(void) {
  FTRACE(0x10fded60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fded60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fded61 mov ebp, esp */
  EBP = (ESP);
  /* 10fded63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fded66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fded69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fded6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10fded6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fded71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10fded77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10fded7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fded7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fded80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fded83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fded86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fded89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10fded8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fded8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fded92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fded98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fded9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10fdeda2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fdeda5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fdeda8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdedab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fdedae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdedb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fdedb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdedb6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10fdedb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdedbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdedbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10fdedc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdedc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fdedc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fdedca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdedcd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdedd0 jle 0x10fdf086 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf086;
  /* 10fdedd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdedd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fdeddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdedde jne 0x10fdedeb */
  if (!C.zf) goto L_10fdedeb;
  /* 10fdede0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdede3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdede6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdede9 jle 0x10fdedf2 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdedf2;
L_10fdedeb:;
  /* 10fdedeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdeded jmp 0x10fdf347 */
  goto L_10fdf347;
L_10fdedf2:;
  /* 10fdedf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdedf5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10fdedf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdedfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fdedfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdee02 jbe 0x10fdee0b */
  if ((C.cf||C.zf)) goto L_10fdee0b;
  /* 10fdee04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10fdee0b:;
  /* 10fdee0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdee0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdee11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdee14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdee17 jne 0x10fdeeed */
  if (!C.zf) goto L_10fdeeed;
  /* 10fdee1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdee21 jae 0x10fdee82 */
  if (!C.cf) goto L_10fdee82;
  /* 10fdee23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdee28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdee2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdee2d not edx */
  EDX = (~(EDX));
  /* 10fdee2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdee32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10fdee39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdee3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdee3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10fdee45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdee4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fdee4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fdee51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdee57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10fdee5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdee60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fdee64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdee66 jne 0x10fdee80 */
  if (!C.zf) goto L_10fdee80;
  /* 10fdee68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdee6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdee70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdee72 not edx */
  EDX = (~(EDX));
  /* 10fdee74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdee77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fdee79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdee7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdee7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fdee80:;
  /* 10fdee80 jmp 0x10fdeeed */
  goto L_10fdeeed;
L_10fdee82:;
  /* 10fdee82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdee85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdee88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdee8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdee8f not eax */
  EAX = (~(EAX));
  /* 10fdee91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdee94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdee97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10fdee9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdeea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdeea3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdeea6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10fdeead mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdeeb0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeeb3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10fdeeb6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fdeeb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdeebc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeebf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10fdeec2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdeec5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeec8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fdeecc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdeece jne 0x10fdeeed */
  if (!C.zf) goto L_10fdeeed;
  /* 10fdeed0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdeed3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdeed6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdeedb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdeedd not eax */
  EAX = (~(EAX));
  /* 10fdeedf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdeee2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdeee5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdeee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdeeea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fdeeed:;
  /* 10fdeeed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdeef0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fdeef3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdeef6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdeef9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fdeefc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdeeff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fdef02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fdef08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10fdef0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdef0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdef11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdef14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fdef17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdef1b jle 0x10fdf067 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf067;
  /* 10fdef21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdef24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdef27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fdef2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdef2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fdef30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdef33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fdef36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdef3a jbe 0x10fdef43 */
  if ((C.cf||C.zf)) goto L_10fdef43;
  /* 10fdef3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10fdef43:;
  /* 10fdef43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdef46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdef49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10fdef4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fdef4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdef55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdef58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fdef5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdef61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10fdef64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdef67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10fdef6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdef73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fdef79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdef7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdef82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdef85 jne 0x10fdf053 */
  if (!C.zf) goto L_10fdf053;
  /* 10fdef8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdef8f jae 0x10fdefec */
  if (!C.cf) goto L_10fdefec;
  /* 10fdef91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdef94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdef97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fdef9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdef9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdefa1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fdefa4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fdefa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdefaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdefad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10fdefb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdefb2 jne 0x10fdefca */
  if (!C.zf) goto L_10fdefca;
  /* 10fdefb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdefb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdefbc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdefbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdefc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fdefc3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdefc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdefc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fdefca:;
  /* 10fdefca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdefcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdefd2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdefd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdefd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdefda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10fdefde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdefe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdefe3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdefe6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10fdefea jmp 0x10fdf053 */
  goto L_10fdf053;
L_10fdefec:;
  /* 10fdefec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdefef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeff2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fdeff6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdeff9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdeffc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fdefff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fdf002 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf005 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf008 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10fdf00b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdf00d jne 0x10fdf02a */
  if (!C.zf) goto L_10fdf02a;
  /* 10fdf00f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf012 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf015 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf01a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf01c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf01f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf022 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf027 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10fdf02a:;
  /* 10fdf02a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf02d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf030 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdf035 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdf037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf03a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf03d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10fdf044 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf049 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf04c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10fdf053:;
  /* 10fdf053 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf056 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf059 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10fdf05b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf05e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf061 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf064 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10fdf067:;
  /* 10fdf067 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdf06a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf06d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf070 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fdf072 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdf075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf078 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf07b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf07e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10fdf081 jmp 0x10fdf342 */
  goto L_10fdf342;
L_10fdf086:;
  /* 10fdf086 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdf089 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf08c jge 0x10fdf342 */
  if ((C.sf==C.of)) goto L_10fdf342;
  /* 10fdf092 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdf095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf098 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf09b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fdf09d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fdf0a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf0a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf0a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf0a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10fdf0ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf0af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf0b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fdf0b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf0b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf0bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fdf0be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf0c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10fdf0c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf0c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fdf0ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf0ce jbe 0x10fdf0d7 */
  if ((C.cf||C.zf)) goto L_10fdf0d7;
  /* 10fdf0d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10fdf0d7:;
  /* 10fdf0d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf0da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fdf0dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdf0df jne 0x10fdf220 */
  if (!C.zf) goto L_10fdf220;
  /* 10fdf0e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf0e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10fdf0eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf0ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fdf0f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf0f5 jbe 0x10fdf0fe */
  if ((C.cf||C.zf)) goto L_10fdf0fe;
  /* 10fdf0f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10fdf0fe:;
  /* 10fdf0fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf101 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf104 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdf107 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf10a jne 0x10fdf1e0 */
  if (!C.zf) goto L_10fdf1e0;
  /* 10fdf110 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf114 jae 0x10fdf175 */
  if (!C.cf) goto L_10fdf175;
  /* 10fdf116 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf11b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf11e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf120 not edx */
  EDX = (~(EDX));
  /* 10fdf122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf128 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10fdf12c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf131 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf134 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10fdf138 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf13b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf13e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10fdf141 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fdf144 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf147 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf14a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10fdf14d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf150 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf153 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fdf157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdf159 jne 0x10fdf173 */
  if (!C.zf) goto L_10fdf173;
  /* 10fdf15b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf163 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf165 not edx */
  EDX = (~(EDX));
  /* 10fdf167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf16a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fdf16c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf16e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf171 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10fdf173:;
  /* 10fdf173 jmp 0x10fdf1e0 */
  goto L_10fdf1e0;
L_10fdf175:;
  /* 10fdf175 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf178 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf17b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdf180 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdf182 not eax */
  EAX = (~(EAX));
  /* 10fdf184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf187 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf18a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10fdf191 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf196 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf199 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10fdf1a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf1a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf1a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10fdf1a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fdf1ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf1af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf1b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10fdf1b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf1b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf1bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fdf1bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdf1c1 jne 0x10fdf1e0 */
  if (!C.zf) goto L_10fdf1e0;
  /* 10fdf1c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fdf1c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf1c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdf1ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdf1d0 not eax */
  EAX = (~(EAX));
  /* 10fdf1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf1d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdf1d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdf1da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf1dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fdf1e0:;
  /* 10fdf1e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf1e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fdf1e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf1e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf1ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fdf1ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf1f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fdf1f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdf1f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fdf1fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10fdf1fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf201 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf204 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fdf207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf20a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10fdf20d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf210 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fdf213 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf217 jbe 0x10fdf220 */
  if ((C.cf||C.zf)) goto L_10fdf220;
  /* 10fdf219 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10fdf220:;
  /* 10fdf220 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdf223 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdf226 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10fdf229 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fdf22c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf22f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdf232 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf235 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fdf238 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf23b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdf23e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fdf241 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdf244 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf247 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10fdf24a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf24d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf253 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10fdf256 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf259 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf25c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf25f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf262 jne 0x10fdf32e */
  if (!C.zf) goto L_10fdf32e;
  /* 10fdf268 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf26c jae 0x10fdf2c8 */
  if (!C.cf) goto L_10fdf2c8;
  /* 10fdf26e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf271 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf274 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fdf278 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf27b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf27e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10fdf281 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fdf283 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf286 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf289 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10fdf28c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdf28e jne 0x10fdf2a6 */
  if (!C.zf) goto L_10fdf2a6;
  /* 10fdf290 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdf295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdf298 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdf29a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf29d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fdf29f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdf2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf2a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fdf2a6:;
  /* 10fdf2a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf2ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdf2ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf2b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf2b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf2b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10fdf2ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf2bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf2c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10fdf2c6 jmp 0x10fdf32e */
  goto L_10fdf32e;
L_10fdf2c8:;
  /* 10fdf2c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf2cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf2ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10fdf2d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf2d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf2d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10fdf2db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fdf2dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf2e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf2e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10fdf2e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdf2e8 jne 0x10fdf305 */
  if (!C.zf) goto L_10fdf305;
  /* 10fdf2ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdf2ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf2f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10fdf2f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10fdf2f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf2fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdf2fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdf2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdf302 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10fdf305:;
  /* 10fdf305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdf308 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf30b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf315 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf318 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10fdf31f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fdf327 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10fdf32e:;
  /* 10fdf32e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf331 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf334 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fdf336 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf339 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf33c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdf33f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10fdf342:;
  /* 10fdf342 mov eax, 1 */
  EAX = (0x1u);
L_10fdf347:;
  /* 10fdf347 mov esp, ebp */
  ESP = (EBP);
  /* 10fdf349 pop ebp */
  EBP = (pop32());
  /* 10fdf34a ret  */
  ESPCHK(0x10fded60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x10fdf350 (304 bytes, 79 insns) */
void f_10fdf350(void) {
  FTRACE(0x10fdf350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdf350 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdf351 mov ebp, esp */
  EBP = (ESP);
  /* 10fdf353 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf354 cmp dword ptr [0x11007160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11007160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf35b je 0x10fdf47c */
  if (C.zf) goto L_10fdf47c;
  /* 10fdf361 mov eax, dword ptr [0x11007158] */
  EAX = (r32((uint32_t)(0x11007158)));
  /* 10fdf366 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10fdf369 mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fdf36f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fdf372 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fdf377 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10fdf37c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10fdf381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdf384 push eax */
  push32((uint32_t)(EAX));
  /* 10fdf385 call dword ptr [0x11008358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008358))), 0x10fdf38bu);
  /* 10fdf38b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf390 mov ecx, dword ptr [0x11007158] */
  ECX = (r32((uint32_t)(0x11007158)));
  /* 10fdf396 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf398 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf39d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fdf3a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf3a2 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fdf3ab mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdf3b3 mov edx, dword ptr [0x11007158] */
  EDX = (r32((uint32_t)(0x11007158)));
  /* 10fdf3b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10fdf3c4 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdf3cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10fdf3cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10fdf3d2 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdf3da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10fdf3dd mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fdf3e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10fdf3ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdf3ec jne 0x10fdf402 */
  if (!C.zf) goto L_10fdf402;
  /* 10fdf3ee mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fdf3f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10fdf3f9 mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fdf3ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10fdf402:;
  /* 10fdf402 mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fdf408 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf40c jne 0x10fdf472 */
  if (!C.zf) goto L_10fdf472;
  /* 10fdf40e cmp dword ptr [0x11007164], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11007164))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf415 jle 0x10fdf472 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf472;
  /* 10fdf417 mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf41c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fdf41f push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdf422 mov edx, dword ptr [0x1100716c] */
  EDX = (r32((uint32_t)(0x1100716c)));
  /* 10fdf428 push edx */
  push32((uint32_t)(EDX));
  /* 10fdf429 call dword ptr [0x1100835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100835c))), 0x10fdf42fu);
  /* 10fdf42f mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdf434 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdf437 mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fdf43d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf43f mov edx, dword ptr [0x11007160] */
  EDX = (r32((uint32_t)(0x11007160)));
  /* 10fdf445 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf448 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf44a push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf44b mov eax, dword ptr [0x11007160] */
  EAX = (r32((uint32_t)(0x11007160)));
  /* 10fdf450 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf453 push eax */
  push32((uint32_t)(EAX));
  /* 10fdf454 mov ecx, dword ptr [0x11007160] */
  ECX = (r32((uint32_t)(0x11007160)));
  /* 10fdf45a push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf45b call 0x10fe1a80 */
  push32(0x10fdf460u); f_10fe1a80();
  /* 10fdf460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf463 mov edx, dword ptr [0x11007164] */
  EDX = (r32((uint32_t)(0x11007164)));
  /* 10fdf469 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf46c mov dword ptr [0x11007164], edx */
  w32((uint32_t)(0x11007164), (EDX));
L_10fdf472:;
  /* 10fdf472 mov dword ptr [0x11007160], 0 */
  w32((uint32_t)(0x11007160), (0x0u));
L_10fdf47c:;
  /* 10fdf47c mov esp, ebp */
  ESP = (EBP);
  /* 10fdf47e pop ebp */
  EBP = (pop32());
  /* 10fdf47f ret  */
  ESPCHK(0x10fdf350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x10fdf480 (1565 bytes, 343 insns) */
void f_10fdf480(void) {
  FTRACE(0x10fdf480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdf480 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdf481 mov ebp, esp */
  EBP = (ESP);
  /* 10fdf483 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf489 mov eax, dword ptr [0x11007164] */
  EAX = (r32((uint32_t)(0x11007164)));
  /* 10fdf48e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdf491 push eax */
  push32((uint32_t)(EAX));
  /* 10fdf492 mov ecx, dword ptr [0x11007168] */
  ECX = (r32((uint32_t)(0x11007168)));
  /* 10fdf498 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf499 call dword ptr [0x110083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083e4))), 0x10fdf49fu);
  /* 10fdf49f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdf4a1 je 0x10fdf4ab */
  if (C.zf) goto L_10fdf4ab;
  /* 10fdf4a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf4a6 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf4ab:;
  /* 10fdf4ab mov edx, dword ptr [0x11007168] */
  EDX = (r32((uint32_t)(0x11007168)));
  /* 10fdf4b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10fdf4b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10fdf4c1 jmp 0x10fdf4d2 */
  goto L_10fdf4d2;
L_10fdf4c3:;
  /* 10fdf4c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10fdf4c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf4cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10fdf4d2:;
  /* 10fdf4d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10fdf4d8 cmp ecx, dword ptr [0x11007164] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11007164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf4de jge 0x10fdfa97 */
  if ((C.sf==C.of)) goto L_10fdfa97;
  /* 10fdf4e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdf4ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fdf4ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10fdf4f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10fdf4f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10fdf4fe push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf4ff call dword ptr [0x110083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083e4))), 0x10fdf505u);
  /* 10fdf505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdf507 je 0x10fdf513 */
  if (C.zf) goto L_10fdf513;
  /* 10fdf509 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10fdf50e jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf513:;
  /* 10fdf513 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdf519 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fdf51c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10fdf522 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10fdf528 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf52e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fdf531 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdf537 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fdf53a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fdf53d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10fdf547 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10fdf551 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fdf558 jmp 0x10fdf563 */
  goto L_10fdf563;
L_10fdf55a:;
  /* 10fdf55a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdf55d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fdf563:;
  /* 10fdf563 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf567 jge 0x10fdfa5b */
  if ((C.sf==C.of)) goto L_10fdfa5b;
  /* 10fdf56d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10fdf577 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10fdf581 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10fdf58b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10fdf595 jmp 0x10fdf5a6 */
  goto L_10fdf5a6;
L_10fdf597:;
  /* 10fdf597 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10fdf59d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf5a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10fdf5a6:;
  /* 10fdf5a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf5ad jge 0x10fdf5c2 */
  if ((C.sf==C.of)) goto L_10fdf5c2;
  /* 10fdf5af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10fdf5b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10fdf5c0 jmp 0x10fdf597 */
  goto L_10fdf597;
L_10fdf5c2:;
  /* 10fdf5c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf5c6 jl 0x10fdf9fd */
  if ((C.sf!=C.of)) goto L_10fdf9fd;
  /* 10fdf5cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10fdf5d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10fdf5d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdf5d8 call dword ptr [0x110083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083e4))), 0x10fdf5deu);
  /* 10fdf5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdf5e0 je 0x10fdf5ec */
  if (C.zf) goto L_10fdf5ec;
  /* 10fdf5e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10fdf5e7 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf5ec:;
  /* 10fdf5ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10fdf5f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fdf5f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10fdf5ff jmp 0x10fdf610 */
  goto L_10fdf610;
L_10fdf601:;
  /* 10fdf601 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10fdf607 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf60a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10fdf610:;
  /* 10fdf610 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf617 jge 0x10fdf794 */
  if ((C.sf==C.of)) goto L_10fdf794;
  /* 10fdf61d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdf620 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf623 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10fdf629 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf62f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf635 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10fdf63b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf641 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf645 jne 0x10fdf652 */
  if (!C.zf) goto L_10fdf652;
  /* 10fdf647 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10fdf64d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf650 je 0x10fdf65c */
  if (C.zf) goto L_10fdf65c;
L_10fdf652:;
  /* 10fdf652 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10fdf657 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf65c:;
  /* 10fdf65c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf662 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fdf664 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10fdf66a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10fdf670 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10fdf676 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10fdf67c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fdf67f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdf681 je 0x10fdf6b9 */
  if (C.zf) goto L_10fdf6b9;
  /* 10fdf683 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10fdf689 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf68c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10fdf692 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf69c jle 0x10fdf6a8 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf6a8;
  /* 10fdf69e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10fdf6a3 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf6a8:;
  /* 10fdf6a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10fdf6ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf6b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10fdf6b7 jmp 0x10fdf6fb */
  goto L_10fdf6fb;
L_10fdf6b9:;
  /* 10fdf6b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10fdf6bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fdf6c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf6c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10fdf6cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf6d2 jle 0x10fdf6de */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf6de;
  /* 10fdf6d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10fdf6de:;
  /* 10fdf6de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10fdf6e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10fdf6eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf6ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10fdf6f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10fdf6fb:;
  /* 10fdf6fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf702 jl 0x10fdf71d */
  if ((C.sf!=C.of)) goto L_10fdf71d;
  /* 10fdf704 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10fdf70a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf70d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdf70f jne 0x10fdf71d */
  if (!C.zf) goto L_10fdf71d;
  /* 10fdf711 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf71b jle 0x10fdf727 */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf727;
L_10fdf71d:;
  /* 10fdf71d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10fdf722 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf727:;
  /* 10fdf727 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf72d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf733 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10fdf736 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf73c je 0x10fdf748 */
  if (C.zf) goto L_10fdf748;
  /* 10fdf73e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10fdf743 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf748:;
  /* 10fdf748 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf74e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf754 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10fdf75a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf760 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf766 jb 0x10fdf65c */
  if (C.cf) goto L_10fdf65c;
  /* 10fdf76c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf772 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf778 je 0x10fdf784 */
  if (C.zf) goto L_10fdf784;
  /* 10fdf77a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10fdf77f jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf784:;
  /* 10fdf784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdf787 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf78c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fdf78f jmp 0x10fdf601 */
  goto L_10fdf601;
L_10fdf794:;
  /* 10fdf794 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdf797 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fdf799 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf79f je 0x10fdf7ab */
  if (C.zf) goto L_10fdf7ab;
  /* 10fdf7a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10fdf7a6 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf7ab:;
  /* 10fdf7ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdf7ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10fdf7b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10fdf7bb jmp 0x10fdf7c6 */
  goto L_10fdf7c6;
L_10fdf7bd:;
  /* 10fdf7bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf7c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf7c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10fdf7c6:;
  /* 10fdf7c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf7ca jge 0x10fdf9fd */
  if ((C.sf==C.of)) goto L_10fdf9fd;
  /* 10fdf7d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10fdf7da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10fdf7e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10fdf7e6:;
  /* 10fdf7e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf7ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fdf7ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10fdf7f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf7fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf801 je 0x10fdf92a */
  if (C.zf) goto L_10fdf92a;
  /* 10fdf807 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf80a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10fdf810 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf817 je 0x10fdf92a */
  if (C.zf) goto L_10fdf92a;
  /* 10fdf81d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf823 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf829 jb 0x10fdf83e */
  if (C.cf) goto L_10fdf83e;
  /* 10fdf82b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10fdf831 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf836 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf83c jb 0x10fdf848 */
  if (C.cf) goto L_10fdf848;
L_10fdf83e:;
  /* 10fdf83e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10fdf843 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf848:;
  /* 10fdf848 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf84e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf854 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10fdf85a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10fdf860 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fdf866 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf869 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf86e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10fdf874:;
  /* 10fdf874 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf877 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf87d je 0x10fdf89e */
  if (C.zf) goto L_10fdf89e;
  /* 10fdf87f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf882 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf888 jne 0x10fdf88c */
  if (!C.zf) goto L_10fdf88c;
  /* 10fdf88a jmp 0x10fdf89e */
  goto L_10fdf89e;
L_10fdf88c:;
  /* 10fdf88c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf88f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fdf891 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10fdf894 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf897 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf899 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fdf89c jmp 0x10fdf874 */
  goto L_10fdf874;
L_10fdf89e:;
  /* 10fdf89e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fdf8a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf8a7 jne 0x10fdf8b3 */
  if (!C.zf) goto L_10fdf8b3;
  /* 10fdf8a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10fdf8ae jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf8b3:;
  /* 10fdf8b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf8b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fdf8bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fdf8be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf8c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10fdf8c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf8ce jle 0x10fdf8da */
  if ((C.zf||C.sf!=C.of)) goto L_10fdf8da;
  /* 10fdf8d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10fdf8da:;
  /* 10fdf8da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10fdf8e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf8e3 je 0x10fdf8ef */
  if (C.zf) goto L_10fdf8ef;
  /* 10fdf8e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10fdf8ea jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf8ef:;
  /* 10fdf8ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf8f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fdf8f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf8fe je 0x10fdf90a */
  if (C.zf) goto L_10fdf90a;
  /* 10fdf900 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10fdf905 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf90a:;
  /* 10fdf90a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10fdf910 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10fdf916 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10fdf91c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf91f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10fdf925 jmp 0x10fdf7e6 */
  goto L_10fdf7e6;
L_10fdf92a:;
  /* 10fdf92a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf931 je 0x10fdf9a1 */
  if (C.zf) goto L_10fdf9a1;
  /* 10fdf933 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf937 jge 0x10fdf96b */
  if ((C.sf==C.of)) goto L_10fdf96b;
  /* 10fdf939 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf93e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf941 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf943 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10fdf949 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf94b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10fdf951 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf956 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf959 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf95b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10fdf961 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf963 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10fdf969 jmp 0x10fdf9a1 */
  goto L_10fdf9a1;
L_10fdf96b:;
  /* 10fdf96b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf96e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf971 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf976 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf978 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10fdf97e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf980 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10fdf986 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf989 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdf98c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10fdf991 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10fdf993 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10fdf999 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdf99b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10fdf9a1:;
  /* 10fdf9a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10fdf9a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdf9aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf9b0 jne 0x10fdf9c4 */
  if (!C.zf) goto L_10fdf9c4;
  /* 10fdf9b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fdf9b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10fdf9bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf9c2 je 0x10fdf9ce */
  if (C.zf) goto L_10fdf9ce;
L_10fdf9c4:;
  /* 10fdf9c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10fdf9c9 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf9ce:;
  /* 10fdf9ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10fdf9d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fdf9d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdf9dd je 0x10fdf9e9 */
  if (C.zf) goto L_10fdf9e9;
  /* 10fdf9df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10fdf9e4 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdf9e9:;
  /* 10fdf9e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10fdf9ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdf9f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10fdf9f8 jmp 0x10fdf7bd */
  goto L_10fdf7bd;
L_10fdf9fd:;
  /* 10fdf9fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfa00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10fdfa06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10fdfa0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfa10 jne 0x10fdfa2a */
  if (!C.zf) goto L_10fdfa2a;
  /* 10fdfa12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfa15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10fdfa1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10fdfa21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfa28 je 0x10fdfa31 */
  if (C.zf) goto L_10fdfa31;
L_10fdfa2a:;
  /* 10fdfa2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10fdfa2f jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdfa31:;
  /* 10fdfa31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10fdfa37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfa3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10fdfa43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fdfa46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfa4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fdfa4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfa51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10fdfa53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fdfa56 jmp 0x10fdf55a */
  goto L_10fdf55a;
L_10fdfa5b:;
  /* 10fdfa5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdfa61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10fdfa67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfa69 jne 0x10fdfa7c */
  if (!C.zf) goto L_10fdfa7c;
  /* 10fdfa6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdfa71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10fdfa77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfa7a je 0x10fdfa83 */
  if (C.zf) goto L_10fdfa83;
L_10fdfa7c:;
  /* 10fdfa7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10fdfa81 jmp 0x10fdfa99 */
  goto L_10fdfa99;
L_10fdfa83:;
  /* 10fdfa83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10fdfa89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfa8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10fdfa92 jmp 0x10fdf4c3 */
  goto L_10fdf4c3;
L_10fdfa97:;
  /* 10fdfa97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fdfa99:;
  /* 10fdfa99 mov esp, ebp */
  ESP = (EBP);
  /* 10fdfa9b pop ebp */
  EBP = (pop32());
  /* 10fdfa9c ret  */
  ESPCHK(0x10fdf480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x10fdfaa0 (250 bytes, 92 insns) */
void f_10fdfaa0(void) {
  FTRACE(0x10fdfaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdfaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdfaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10fdfaa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdfaa6 push ebx */
  push32((uint32_t)(EBX));
  /* 10fdfaa7 push esi */
  push32((uint32_t)(ESI));
  /* 10fdfaa8 push edi */
  push32((uint32_t)(EDI));
  /* 10fdfaa9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10fdfaac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fdfaaf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10fdfab2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10fdfab5:;
  /* 10fdfab5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfab9 jne 0x10fdfad9 */
  if (!C.zf) goto L_10fdfad9;
  /* 10fdfabb push 0x110014a8 */
  push32((uint32_t)(0x110014a8u));
  /* 10fdfac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdfac2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10fdfac4 push 0x1100149c */
  push32((uint32_t)(0x1100149cu));
  /* 10fdfac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fdfacb call 0x10fd8c50 */
  push32(0x10fdfad0u); f_10fd8c50();
  /* 10fdfad0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfad3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfad6 jne 0x10fdfad9 */
  if (!C.zf) goto L_10fdfad9;
  /* 10fdfad8 int3  */
  x86_unimpl("int3 @ 0x10fdfad8");
L_10fdfad9:;
  /* 10fdfad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdfadb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fdfadd jne 0x10fdfab5 */
  if (!C.zf) goto L_10fdfab5;
L_10fdfadf:;
  /* 10fdfadf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfae3 jne 0x10fdfb03 */
  if (!C.zf) goto L_10fdfb03;
  /* 10fdfae5 push 0x1100148c */
  push32((uint32_t)(0x1100148cu));
  /* 10fdfaea push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdfaec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10fdfaee push 0x1100149c */
  push32((uint32_t)(0x1100149cu));
  /* 10fdfaf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fdfaf5 call 0x10fd8c50 */
  push32(0x10fdfafau); f_10fd8c50();
  /* 10fdfafa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfafd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfb00 jne 0x10fdfb03 */
  if (!C.zf) goto L_10fdfb03;
  /* 10fdfb02 int3  */
  x86_unimpl("int3 @ 0x10fdfb02");
L_10fdfb03:;
  /* 10fdfb03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdfb07 jne 0x10fdfadf */
  if (!C.zf) goto L_10fdfadf;
  /* 10fdfb09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10fdfb13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfb19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fdfb1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfb22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10fdfb24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10fdfb2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fdfb31 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdfb32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fdfb35 push edx */
  push32((uint32_t)(EDX));
  /* 10fdfb36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb39 push eax */
  push32((uint32_t)(EAX));
  /* 10fdfb3a call 0x10fe0b20 */
  push32(0x10fdfb3fu); f_10fe0b20();
  /* 10fdfb3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfb42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fdfb45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fdfb4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdfb4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fdfb54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfb5b jl 0x10fdfb7f */
  if ((C.sf!=C.of)) goto L_10fdfb7f;
  /* 10fdfb5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fdfb62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fdfb65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfb67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfb6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10fdfb70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fdfb75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfb78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fdfb7d jmp 0x10fdfb90 */
  goto L_10fdfb90;
L_10fdfb7f:;
  /* 10fdfb7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfb82 push edx */
  push32((uint32_t)(EDX));
  /* 10fdfb83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdfb85 call 0x10fe08a0 */
  push32(0x10fdfb8au); f_10fe08a0();
  /* 10fdfb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfb8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10fdfb90:;
  /* 10fdfb90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfb93 pop edi */
  EDI = (pop32());
  /* 10fdfb94 pop esi */
  ESI = (pop32());
  /* 10fdfb95 pop ebx */
  EBX = (pop32());
  /* 10fdfb96 mov esp, ebp */
  ESP = (EBP);
  /* 10fdfb98 pop ebp */
  EBP = (pop32());
  /* 10fdfb99 ret  */
  ESPCHK(0x10fdfaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x10fdfba0 (183 bytes, 58 insns) */
void f_10fdfba0(void) {
  FTRACE(0x10fdfba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdfba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdfba1 mov ebp, esp */
  EBP = (ESP);
  /* 10fdfba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdfba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfbac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfbb1 ja 0x10fdfbca */
  if ((!C.cf&&!C.zf)) goto L_10fdfbca;
  /* 10fdfbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfbb6 mov edx, dword ptr [0x11003c98] */
  EDX = (r32((uint32_t)(0x11003c98)));
  /* 10fdfbbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfbbe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10fdfbc2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfbc5 jmp 0x10fdfc53 */
  goto L_10fdfc53;
L_10fdfbca:;
  /* 10fdfbca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfbcd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10fdfbd0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfbd6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfbdc mov edx, dword ptr [0x11003c98] */
  EDX = (r32((uint32_t)(0x11003c98)));
  /* 10fdfbe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfbe4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10fdfbe8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfbed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdfbef je 0x10fdfc13 */
  if (C.zf) goto L_10fdfc13;
  /* 10fdfbf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfbf4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10fdfbf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfbfd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10fdfc00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fdfc03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10fdfc06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10fdfc0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10fdfc11 jmp 0x10fdfc24 */
  goto L_10fdfc24;
L_10fdfc13:;
  /* 10fdfc13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fdfc16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10fdfc19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10fdfc1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10fdfc24:;
  /* 10fdfc24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fdfc26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdfc28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fdfc2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10fdfc2d push ecx */
  push32((uint32_t)(ECX));
  /* 10fdfc2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfc31 push edx */
  push32((uint32_t)(EDX));
  /* 10fdfc32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10fdfc35 push eax */
  push32((uint32_t)(EAX));
  /* 10fdfc36 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fdfc38 call 0x10fe1dc0 */
  push32(0x10fdfc3du); f_10fe1dc0();
  /* 10fdfc3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfc40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdfc42 jne 0x10fdfc48 */
  if (!C.zf) goto L_10fdfc48;
  /* 10fdfc44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfc46 jmp 0x10fdfc53 */
  goto L_10fdfc53;
L_10fdfc48:;
  /* 10fdfc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfc4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfc50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10fdfc53:;
  /* 10fdfc53 mov esp, ebp */
  ESP = (EBP);
  /* 10fdfc55 pop ebp */
  EBP = (pop32());
  /* 10fdfc56 ret  */
  ESPCHK(0x10fdfba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x10fdfc60 (836 bytes, 238 insns) */
void f_10fdfc60(void) {
  FTRACE(0x10fdfc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdfc60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdfc61 mov ebp, esp */
  EBP = (ESP);
  /* 10fdfc63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fdfc66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdfc68 call 0x10fdd590 */
  push32(0x10fdfc6du); f_10fdd590();
  /* 10fdfc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfc73 push eax */
  push32((uint32_t)(EAX));
  /* 10fdfc74 call 0x10fdffb0 */
  push32(0x10fdfc79u); f_10fdffb0();
  /* 10fdfc79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfc7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fdfc7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfc82 cmp ecx, dword ptr [0x11006ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11006ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfc88 jne 0x10fdfc9b */
  if (!C.zf) goto L_10fdfc9b;
  /* 10fdfc8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdfc8c call 0x10fdd630 */
  push32(0x10fdfc91u); f_10fdd630();
  /* 10fdfc91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfc94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfc96 jmp 0x10fdffa0 */
  goto L_10fdffa0;
L_10fdfc9b:;
  /* 10fdfc9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfc9f jne 0x10fdfcbc */
  if (!C.zf) goto L_10fdfcbc;
  /* 10fdfca1 call 0x10fe0090 */
  push32(0x10fdfca6u); f_10fe0090();
  /* 10fdfca6 call 0x10fe0110 */
  push32(0x10fdfcabu); f_10fe0110();
  /* 10fdfcab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdfcad call 0x10fdd630 */
  push32(0x10fdfcb2u); f_10fdd630();
  /* 10fdfcb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfcb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfcb7 jmp 0x10fdffa0 */
  goto L_10fdffa0;
L_10fdfcbc:;
  /* 10fdfcbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fdfcc3 jmp 0x10fdfcce */
  goto L_10fdfcce;
L_10fdfcc5:;
  /* 10fdfcc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfcc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfccb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fdfcce:;
  /* 10fdfcce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfcd2 jae 0x10fdfe1f */
  if (!C.cf) goto L_10fdfe1f;
  /* 10fdfcd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfcdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdfcde mov ecx, dword ptr [eax + 0x11003eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11003eb8)));
  /* 10fdfce4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfce7 jne 0x10fdfe1a */
  if (!C.zf) goto L_10fdfe1a;
  /* 10fdfced mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fdfcf4 jmp 0x10fdfcff */
  goto L_10fdfcff;
L_10fdfcf6:;
  /* 10fdfcf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfcf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfcfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10fdfcff:;
  /* 10fdfcff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfd06 jae 0x10fdfd14 */
  if (!C.cf) goto L_10fdfd14;
  /* 10fdfd08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfd0b mov byte ptr [eax + 0x11007040], 0 */
  w8((uint32_t)(EAX + 0x11007040), (0x0u));
  /* 10fdfd12 jmp 0x10fdfcf6 */
  goto L_10fdfcf6;
L_10fdfd14:;
  /* 10fdfd14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fdfd1b jmp 0x10fdfd26 */
  goto L_10fdfd26;
L_10fdfd1d:;
  /* 10fdfd1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfd20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfd23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10fdfd26:;
  /* 10fdfd26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfd2a jae 0x10fdfda7 */
  if (!C.cf) goto L_10fdfda7;
  /* 10fdfd2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfd2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdfd32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfd35 lea ecx, [edx + eax*8 + 0x11003ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11003ec8));
  /* 10fdfd3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fdfd3f jmp 0x10fdfd4a */
  goto L_10fdfd4a;
L_10fdfd41:;
  /* 10fdfd41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfd44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfd47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fdfd4a:;
  /* 10fdfd4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfd4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfd4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fdfd51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdfd53 je 0x10fdfda2 */
  if (C.zf) goto L_10fdfda2;
  /* 10fdfd55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfd58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfd5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fdfd5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdfd5f je 0x10fdfda2 */
  if (C.zf) goto L_10fdfda2;
  /* 10fdfd61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfd64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdfd66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fdfd68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fdfd6b jmp 0x10fdfd76 */
  goto L_10fdfd76;
L_10fdfd6d:;
  /* 10fdfd6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfd70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfd73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fdfd76:;
  /* 10fdfd76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fdfd79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdfd7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fdfd7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfd81 ja 0x10fdfda0 */
  if ((!C.cf&&!C.zf)) goto L_10fdfda0;
  /* 10fdfd83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfd86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfd89 mov dl, byte ptr [eax + 0x11007041] */
  DL = (r8((uint32_t)(EAX + 0x11007041)));
  /* 10fdfd8f or dl, byte ptr [ecx + 0x11003eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11003eb0))); DL = (_r); fl_logic(_r,8); }
  /* 10fdfd95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfd98 mov byte ptr [eax + 0x11007041], dl */
  w8((uint32_t)(EAX + 0x11007041), (DL));
  /* 10fdfd9e jmp 0x10fdfd6d */
  goto L_10fdfd6d;
L_10fdfda0:;
  /* 10fdfda0 jmp 0x10fdfd41 */
  goto L_10fdfd41;
L_10fdfda2:;
  /* 10fdfda2 jmp 0x10fdfd1d */
  goto L_10fdfd1d;
L_10fdfda7:;
  /* 10fdfda7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfdaa mov dword ptr [0x11006ea4], ecx */
  w32((uint32_t)(0x11006ea4), (ECX));
  /* 10fdfdb0 mov dword ptr [0x11006f2c], 1 */
  w32((uint32_t)(0x11006f2c), (0x1u));
  /* 10fdfdba mov edx, dword ptr [0x11006ea4] */
  EDX = (r32((uint32_t)(0x11006ea4)));
  /* 10fdfdc0 push edx */
  push32((uint32_t)(EDX));
  /* 10fdfdc1 call 0x10fe0010 */
  push32(0x10fdfdc6u); f_10fe0010();
  /* 10fdfdc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfdc9 mov dword ptr [0x11007144], eax */
  w32((uint32_t)(0x11007144), (EAX));
  /* 10fdfdce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fdfdd5 jmp 0x10fdfde0 */
  goto L_10fdfde0;
L_10fdfdd7:;
  /* 10fdfdd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfdda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fdfde0:;
  /* 10fdfde0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfde4 jae 0x10fdfe04 */
  if (!C.cf) goto L_10fdfe04;
  /* 10fdfde6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fdfde9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fdfdec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfdef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdfdf2 mov cx, word ptr [ecx + eax*2 + 0x11003ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11003ebc)));
  /* 10fdfdfa mov word ptr [edx*2 + 0x11006f20], cx */
  w16((uint32_t)(EDX*2 + 0x11006f20), (CX));
  /* 10fdfe02 jmp 0x10fdfdd7 */
  goto L_10fdfdd7;
L_10fdfe04:;
  /* 10fdfe04 call 0x10fe0110 */
  push32(0x10fdfe09u); f_10fe0110();
  /* 10fdfe09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdfe0b call 0x10fdd630 */
  push32(0x10fdfe10u); f_10fdd630();
  /* 10fdfe10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfe13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfe15 jmp 0x10fdffa0 */
  goto L_10fdffa0;
L_10fdfe1a:;
  /* 10fdfe1a jmp 0x10fdfcc5 */
  goto L_10fdfcc5;
L_10fdfe1f:;
  /* 10fdfe1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10fdfe22 push edx */
  push32((uint32_t)(EDX));
  /* 10fdfe23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfe26 push eax */
  push32((uint32_t)(EAX));
  /* 10fdfe27 call dword ptr [0x11008330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008330))), 0x10fdfe2du);
  /* 10fdfe2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfe30 jne 0x10fdff72 */
  if (!C.zf) goto L_10fdff72;
  /* 10fdfe36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fdfe3d jmp 0x10fdfe48 */
  goto L_10fdfe48;
L_10fdfe3f:;
  /* 10fdfe3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfe42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfe45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10fdfe48:;
  /* 10fdfe48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfe4f jae 0x10fdfe5d */
  if (!C.cf) goto L_10fdfe5d;
  /* 10fdfe51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfe54 mov byte ptr [edx + 0x11007040], 0 */
  w8((uint32_t)(EDX + 0x11007040), (0x0u));
  /* 10fdfe5b jmp 0x10fdfe3f */
  goto L_10fdfe3f;
L_10fdfe5d:;
  /* 10fdfe5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fdfe60 mov dword ptr [0x11006ea4], eax */
  w32((uint32_t)(0x11006ea4), (EAX));
  /* 10fdfe65 mov dword ptr [0x11007144], 0 */
  w32((uint32_t)(0x11007144), (0x0u));
  /* 10fdfe6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfe73 jbe 0x10fdff2e */
  if ((C.cf||C.zf)) goto L_10fdff2e;
  /* 10fdfe79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10fdfe7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10fdfe7f jmp 0x10fdfe8a */
  goto L_10fdfe8a;
L_10fdfe81:;
  /* 10fdfe81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfe84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfe87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10fdfe8a:;
  /* 10fdfe8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfe8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fdfe8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fdfe91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fdfe93 je 0x10fdfedc */
  if (C.zf) goto L_10fdfedc;
  /* 10fdfe95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfe98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdfe9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fdfe9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fdfe9f je 0x10fdfedc */
  if (C.zf) goto L_10fdfedc;
  /* 10fdfea1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdfea6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fdfea8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fdfeab jmp 0x10fdfeb6 */
  goto L_10fdfeb6;
L_10fdfead:;
  /* 10fdfead mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfeb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfeb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fdfeb6:;
  /* 10fdfeb6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fdfeb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fdfebb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fdfebe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfec1 ja 0x10fdfeda */
  if ((!C.cf&&!C.zf)) goto L_10fdfeda;
  /* 10fdfec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfec6 mov cl, byte ptr [eax + 0x11007041] */
  CL = (r8((uint32_t)(EAX + 0x11007041)));
  /* 10fdfecc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10fdfecf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfed2 mov byte ptr [edx + 0x11007041], cl */
  w8((uint32_t)(EDX + 0x11007041), (CL));
  /* 10fdfed8 jmp 0x10fdfead */
  goto L_10fdfead;
L_10fdfeda:;
  /* 10fdfeda jmp 0x10fdfe81 */
  goto L_10fdfe81;
L_10fdfedc:;
  /* 10fdfedc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10fdfee3 jmp 0x10fdfeee */
  goto L_10fdfeee;
L_10fdfee5:;
  /* 10fdfee5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfee8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdfeeb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fdfeee:;
  /* 10fdfeee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfef5 jae 0x10fdff0e */
  if (!C.cf) goto L_10fdff0e;
  /* 10fdfef7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdfefa mov dl, byte ptr [ecx + 0x11007041] */
  DL = (r8((uint32_t)(ECX + 0x11007041)));
  /* 10fdff00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10fdff03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fdff06 mov byte ptr [eax + 0x11007041], dl */
  w8((uint32_t)(EAX + 0x11007041), (DL));
  /* 10fdff0c jmp 0x10fdfee5 */
  goto L_10fdfee5;
L_10fdff0e:;
  /* 10fdff0e mov ecx, dword ptr [0x11006ea4] */
  ECX = (r32((uint32_t)(0x11006ea4)));
  /* 10fdff14 push ecx */
  push32((uint32_t)(ECX));
  /* 10fdff15 call 0x10fe0010 */
  push32(0x10fdff1au); f_10fe0010();
  /* 10fdff1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdff1d mov dword ptr [0x11007144], eax */
  w32((uint32_t)(0x11007144), (EAX));
  /* 10fdff22 mov dword ptr [0x11006f2c], 1 */
  w32((uint32_t)(0x11006f2c), (0x1u));
  /* 10fdff2c jmp 0x10fdff38 */
  goto L_10fdff38;
L_10fdff2e:;
  /* 10fdff2e mov dword ptr [0x11006f2c], 0 */
  w32((uint32_t)(0x11006f2c), (0x0u));
L_10fdff38:;
  /* 10fdff38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fdff3f jmp 0x10fdff4a */
  goto L_10fdff4a;
L_10fdff41:;
  /* 10fdff41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdff44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdff47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fdff4a:;
  /* 10fdff4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdff4e jae 0x10fdff5f */
  if (!C.cf) goto L_10fdff5f;
  /* 10fdff50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fdff53 mov word ptr [eax*2 + 0x11006f20], 0 */
  w16((uint32_t)(EAX*2 + 0x11006f20), (0x0u));
  /* 10fdff5d jmp 0x10fdff41 */
  goto L_10fdff41;
L_10fdff5f:;
  /* 10fdff5f call 0x10fe0110 */
  push32(0x10fdff64u); f_10fe0110();
  /* 10fdff64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdff66 call 0x10fdd630 */
  push32(0x10fdff6bu); f_10fdd630();
  /* 10fdff6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdff6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdff70 jmp 0x10fdffa0 */
  goto L_10fdffa0;
L_10fdff72:;
  /* 10fdff72 cmp dword ptr [0x110059a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdff79 je 0x10fdff93 */
  if (C.zf) goto L_10fdff93;
  /* 10fdff7b call 0x10fe0090 */
  push32(0x10fdff80u); f_10fe0090();
  /* 10fdff80 call 0x10fe0110 */
  push32(0x10fdff85u); f_10fe0110();
  /* 10fdff85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdff87 call 0x10fdd630 */
  push32(0x10fdff8cu); f_10fdd630();
  /* 10fdff8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdff8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fdff91 jmp 0x10fdffa0 */
  goto L_10fdffa0;
L_10fdff93:;
  /* 10fdff93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fdff95 call 0x10fdd630 */
  push32(0x10fdff9au); f_10fdd630();
  /* 10fdff9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fdff9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fdffa0:;
  /* 10fdffa0 mov esp, ebp */
  ESP = (EBP);
  /* 10fdffa2 pop ebp */
  EBP = (pop32());
  /* 10fdffa3 ret  */
  ESPCHK(0x10fdfc60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10fdffb0 (89 bytes, 21 insns) */
void f_10fdffb0(void) {
  FTRACE(0x10fdffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fdffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fdffb1 mov ebp, esp */
  EBP = (ESP);
  /* 10fdffb3 mov dword ptr [0x110059a8], 0 */
  w32((uint32_t)(0x110059a8), (0x0u));
  /* 10fdffbd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdffc1 jne 0x10fdffd5 */
  if (!C.zf) goto L_10fdffd5;
  /* 10fdffc3 mov dword ptr [0x110059a8], 1 */
  w32((uint32_t)(0x110059a8), (0x1u));
  /* 10fdffcd call dword ptr [0x11008328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008328))), 0x10fdffd3u);
  /* 10fdffd3 jmp 0x10fe0007 */
  goto L_10fe0007;
L_10fdffd5:;
  /* 10fdffd5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdffd9 jne 0x10fdffed */
  if (!C.zf) goto L_10fdffed;
  /* 10fdffdb mov dword ptr [0x110059a8], 1 */
  w32((uint32_t)(0x110059a8), (0x1u));
  /* 10fdffe5 call dword ptr [0x1100832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100832c))), 0x10fdffebu);
  /* 10fdffeb jmp 0x10fe0007 */
  goto L_10fe0007;
L_10fdffed:;
  /* 10fdffed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fdfff1 jne 0x10fe0004 */
  if (!C.zf) goto L_10fe0004;
  /* 10fdfff3 mov dword ptr [0x110059a8], 1 */
  w32((uint32_t)(0x110059a8), (0x1u));
  /* 10fdfffd mov eax, dword ptr [0x110059c8] */
  EAX = (r32((uint32_t)(0x110059c8)));
  /* 10fe0002 jmp 0x10fe0007 */
  goto L_10fe0007;
L_10fe0004:;
  /* 10fe0004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10fe0007:;
  /* 10fe0007 pop ebp */
  EBP = (pop32());
  /* 10fe0008 ret  */
  ESPCHK(0x10fdffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x10fe0010 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10fe0010(void) {
  FTRACE(0x10fe0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0010 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0011 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0013 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0017 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe001a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe001d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0023 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe0026 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe002a ja 0x10fe005a */
  if ((!C.cf&&!C.zf)) goto L_10fe005a;
  /* 10fe002c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe002f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0031 mov dl, byte ptr [eax + 0x10fe0074] */
  DL = (r8((uint32_t)(EAX + 0x10fe0074)));
  /* 10fe0037 jmp dword ptr [edx*4 + 0x10fe0060] */
  switch (EDX) {
    case 0: goto L_10fe003e;
    case 1: goto L_10fe0045;
    case 2: goto L_10fe004c;
    case 3: goto L_10fe0053;
    case 4: goto L_10fe005a;
    default: x86_unimpl("switch@0x10fe0037 out of table"); return;
  }
L_10fe003e:;
  /* 10fe003e mov eax, 0x411 */
  EAX = (0x411u);
  /* 10fe0043 jmp 0x10fe005c */
  goto L_10fe005c;
L_10fe0045:;
  /* 10fe0045 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10fe004a jmp 0x10fe005c */
  goto L_10fe005c;
L_10fe004c:;
  /* 10fe004c mov eax, 0x412 */
  EAX = (0x412u);
  /* 10fe0051 jmp 0x10fe005c */
  goto L_10fe005c;
L_10fe0053:;
  /* 10fe0053 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10fe0058 jmp 0x10fe005c */
  goto L_10fe005c;
L_10fe005a:;
  /* 10fe005a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe005c:;
  /* 10fe005c mov esp, ebp */
  ESP = (EBP);
  /* 10fe005e pop ebp */
  EBP = (pop32());
  /* 10fe005f ret  */
  ESPCHK(0x10fe0010u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10fe0090 (116 bytes, 29 insns) */
void f_10fe0090(void) {
  FTRACE(0x10fe0090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0090 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0091 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0093 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe009b jmp 0x10fe00a6 */
  goto L_10fe00a6;
L_10fe009d:;
  /* 10fe009d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe00a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe00a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe00a6:;
  /* 10fe00a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe00ad jge 0x10fe00bb */
  if ((C.sf==C.of)) goto L_10fe00bb;
  /* 10fe00af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe00b2 mov byte ptr [ecx + 0x11007040], 0 */
  w8((uint32_t)(ECX + 0x11007040), (0x0u));
  /* 10fe00b9 jmp 0x10fe009d */
  goto L_10fe009d;
L_10fe00bb:;
  /* 10fe00bb mov dword ptr [0x11006ea4], 0 */
  w32((uint32_t)(0x11006ea4), (0x0u));
  /* 10fe00c5 mov dword ptr [0x11006f2c], 0 */
  w32((uint32_t)(0x11006f2c), (0x0u));
  /* 10fe00cf mov dword ptr [0x11007144], 0 */
  w32((uint32_t)(0x11007144), (0x0u));
  /* 10fe00d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe00e0 jmp 0x10fe00eb */
  goto L_10fe00eb;
L_10fe00e2:;
  /* 10fe00e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe00e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe00e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe00eb:;
  /* 10fe00eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe00ef jge 0x10fe0100 */
  if ((C.sf==C.of)) goto L_10fe0100;
  /* 10fe00f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe00f4 mov word ptr [eax*2 + 0x11006f20], 0 */
  w16((uint32_t)(EAX*2 + 0x11006f20), (0x0u));
  /* 10fe00fe jmp 0x10fe00e2 */
  goto L_10fe00e2;
L_10fe0100:;
  /* 10fe0100 mov esp, ebp */
  ESP = (EBP);
  /* 10fe0102 pop ebp */
  EBP = (pop32());
  /* 10fe0103 ret  */
  ESPCHK(0x10fe0090u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x10fe0110 (770 bytes, 175 insns) */
void f_10fe0110(void) {
  FTRACE(0x10fe0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0110 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0111 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0113 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0119 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10fe011f push eax */
  push32((uint32_t)(EAX));
  /* 10fe0120 mov ecx, dword ptr [0x11006ea4] */
  ECX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe0126 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0127 call dword ptr [0x11008330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008330))), 0x10fe012du);
  /* 10fe012d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0130 jne 0x10fe0349 */
  if (!C.zf) goto L_10fe0349;
  /* 10fe0136 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10fe0140 jmp 0x10fe0151 */
  goto L_10fe0151;
L_10fe0142:;
  /* 10fe0142 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0148 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe014b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10fe0151:;
  /* 10fe0151 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe015b jae 0x10fe0172 */
  if (!C.cf) goto L_10fe0172;
  /* 10fe015d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0163 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10fe0169 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10fe0170 jmp 0x10fe0142 */
  goto L_10fe0142;
L_10fe0172:;
  /* 10fe0172 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10fe0179 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10fe017f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe0182 jmp 0x10fe018d */
  goto L_10fe018d;
L_10fe0184:;
  /* 10fe0184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0187 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe018a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe018d:;
  /* 10fe018d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0190 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0192 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe0194 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe0196 je 0x10fe01d8 */
  if (C.zf) goto L_10fe01d8;
  /* 10fe0198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe019b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe019d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe019f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10fe01a5 jmp 0x10fe01b6 */
  goto L_10fe01b6;
L_10fe01a7:;
  /* 10fe01a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe01ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe01b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10fe01b6:;
  /* 10fe01b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe01b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe01bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fe01be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe01c4 ja 0x10fe01d6 */
  if ((!C.cf&&!C.zf)) goto L_10fe01d6;
  /* 10fe01c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe01cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10fe01d4 jmp 0x10fe01a7 */
  goto L_10fe01a7;
L_10fe01d6:;
  /* 10fe01d6 jmp 0x10fe0184 */
  goto L_10fe0184;
L_10fe01d8:;
  /* 10fe01d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe01da mov eax, dword ptr [0x11007144] */
  EAX = (r32((uint32_t)(0x11007144)));
  /* 10fe01df push eax */
  push32((uint32_t)(EAX));
  /* 10fe01e0 mov ecx, dword ptr [0x11006ea4] */
  ECX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe01e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe01e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10fe01ed push edx */
  push32((uint32_t)(EDX));
  /* 10fe01ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe01f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10fe01f9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe01fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe01fc call 0x10fe1dc0 */
  push32(0x10fe0201u); f_10fe1dc0();
  /* 10fe0201 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe0206 mov ecx, dword ptr [0x11006ea4] */
  ECX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe020c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe020d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe0212 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10fe0218 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0219 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe021e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10fe0224 push eax */
  push32((uint32_t)(EAX));
  /* 10fe0225 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe022a mov ecx, dword ptr [0x11007144] */
  ECX = (r32((uint32_t)(0x11007144)));
  /* 10fe0230 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0231 call 0x10fe1f80 */
  push32(0x10fe0236u); f_10fe1f80();
  /* 10fe0236 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0239 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe023b mov edx, dword ptr [0x11006ea4] */
  EDX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe0241 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0242 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe0247 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10fe024d push eax */
  push32((uint32_t)(EAX));
  /* 10fe024e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe0253 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10fe0259 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe025a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10fe025f mov edx, dword ptr [0x11007144] */
  EDX = (r32((uint32_t)(0x11007144)));
  /* 10fe0265 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0266 call 0x10fe1f80 */
  push32(0x10fe026bu); f_10fe1f80();
  /* 10fe026b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe026e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10fe0278 jmp 0x10fe0289 */
  goto L_10fe0289;
L_10fe027a:;
  /* 10fe027a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0283 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10fe0289:;
  /* 10fe0289 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0293 jae 0x10fe0344 */
  if (!C.cf) goto L_10fe0344;
  /* 10fe0299 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe029f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe02a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10fe02a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe02ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe02ae je 0x10fe02e6 */
  if (C.zf) goto L_10fe02e6;
  /* 10fe02b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe02b6 mov cl, byte ptr [eax + 0x11007041] */
  CL = (r8((uint32_t)(EAX + 0x11007041)));
  /* 10fe02bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10fe02bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe02c5 mov byte ptr [edx + 0x11007041], cl */
  w8((uint32_t)(EDX + 0x11007041), (CL));
  /* 10fe02cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe02d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe02d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10fe02de mov byte ptr [eax + 0x11006f40], dl */
  w8((uint32_t)(EAX + 0x11006f40), (DL));
  /* 10fe02e4 jmp 0x10fe033f */
  goto L_10fe033f;
L_10fe02e6:;
  /* 10fe02e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe02ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe02ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10fe02f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe02f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe02fb je 0x10fe0332 */
  if (C.zf) goto L_10fe0332;
  /* 10fe02fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0303 mov al, byte ptr [edx + 0x11007041] */
  AL = (r8((uint32_t)(EDX + 0x11007041)));
  /* 10fe0309 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10fe030b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0311 mov byte ptr [ecx + 0x11007041], al */
  w8((uint32_t)(ECX + 0x11007041), (AL));
  /* 10fe0317 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe031d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0323 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10fe032a mov byte ptr [edx + 0x11006f40], cl */
  w8((uint32_t)(EDX + 0x11006f40), (CL));
  /* 10fe0330 jmp 0x10fe033f */
  goto L_10fe033f;
L_10fe0332:;
  /* 10fe0332 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0338 mov byte ptr [edx + 0x11006f40], 0 */
  w8((uint32_t)(EDX + 0x11006f40), (0x0u));
L_10fe033f:;
  /* 10fe033f jmp 0x10fe027a */
  goto L_10fe027a;
L_10fe0344:;
  /* 10fe0344 jmp 0x10fe040e */
  goto L_10fe040e;
L_10fe0349:;
  /* 10fe0349 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10fe0353 jmp 0x10fe0364 */
  goto L_10fe0364;
L_10fe0355:;
  /* 10fe0355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe035b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe035e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10fe0364:;
  /* 10fe0364 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe036e jae 0x10fe040e */
  if (!C.cf) goto L_10fe040e;
  /* 10fe0374 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe037b jb 0x10fe03b8 */
  if (C.cf) goto L_10fe03b8;
  /* 10fe037d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0384 ja 0x10fe03b8 */
  if ((!C.cf&&!C.zf)) goto L_10fe03b8;
  /* 10fe0386 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe038c mov dl, byte ptr [ecx + 0x11007041] */
  DL = (r8((uint32_t)(ECX + 0x11007041)));
  /* 10fe0392 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10fe0395 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe039b mov byte ptr [eax + 0x11007041], dl */
  w8((uint32_t)(EAX + 0x11007041), (DL));
  /* 10fe03a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe03aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03b0 mov byte ptr [edx + 0x11006f40], cl */
  w8((uint32_t)(EDX + 0x11006f40), (CL));
  /* 10fe03b6 jmp 0x10fe0409 */
  goto L_10fe0409;
L_10fe03b8:;
  /* 10fe03b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe03bf jb 0x10fe03fc */
  if (C.cf) goto L_10fe03fc;
  /* 10fe03c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe03c8 ja 0x10fe03fc */
  if ((!C.cf&&!C.zf)) goto L_10fe03fc;
  /* 10fe03ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03d0 mov cl, byte ptr [eax + 0x11007041] */
  CL = (r8((uint32_t)(EAX + 0x11007041)));
  /* 10fe03d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fe03d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03df mov byte ptr [edx + 0x11007041], cl */
  w8((uint32_t)(EDX + 0x11007041), (CL));
  /* 10fe03e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe03ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe03f4 mov byte ptr [ecx + 0x11006f40], al */
  w8((uint32_t)(ECX + 0x11006f40), (AL));
  /* 10fe03fa jmp 0x10fe0409 */
  goto L_10fe0409;
L_10fe03fc:;
  /* 10fe03fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10fe0402 mov byte ptr [edx + 0x11006f40], 0 */
  w8((uint32_t)(EDX + 0x11006f40), (0x0u));
L_10fe0409:;
  /* 10fe0409 jmp 0x10fe0355 */
  goto L_10fe0355;
L_10fe040e:;
  /* 10fe040e mov esp, ebp */
  ESP = (EBP);
  /* 10fe0410 pop ebp */
  EBP = (pop32());
  /* 10fe0411 ret  */
  ESPCHK(0x10fe0110u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x10fe0420 (23 bytes, 9 insns) */
void f_10fe0420(void) {
  FTRACE(0x10fe0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0420 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0421 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0423 cmp dword ptr [0x11006f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11006f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe042a je 0x10fe0433 */
  if (C.zf) goto L_10fe0433;
  /* 10fe042c mov eax, dword ptr [0x11006ea4] */
  EAX = (r32((uint32_t)(0x11006ea4)));
  /* 10fe0431 jmp 0x10fe0435 */
  goto L_10fe0435;
L_10fe0433:;
  /* 10fe0433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe0435:;
  /* 10fe0435 pop ebp */
  EBP = (pop32());
  /* 10fe0436 ret  */
  ESPCHK(0x10fe0420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x10fe0440 (34 bytes, 10 insns) */
void f_10fe0440(void) {
  FTRACE(0x10fe0440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0441 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0443 cmp dword ptr [0x110072f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110072f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe044a jne 0x10fe0460 */
  if (!C.zf) goto L_10fe0460;
  /* 10fe044c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10fe044e call 0x10fdfc60 */
  push32(0x10fe0453u); f_10fdfc60();
  /* 10fe0453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0456 mov dword ptr [0x110072f0], 1 */
  w32((uint32_t)(0x110072f0), (0x1u));
L_10fe0460:;
  /* 10fe0460 pop ebp */
  EBP = (pop32());
  /* 10fe0461 ret  */
  ESPCHK(0x10fe0440u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x10fe0470 (664 bytes, 258 insns) [15 switch table(s)] */
void f_10fe0470(void) {
  FTRACE(0x10fe0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0470 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0471 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0473 push edi */
  push32((uint32_t)(EDI));
  /* 10fe0474 push esi */
  push32((uint32_t)(ESI));
  /* 10fe0475 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe047b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe047e mov eax, ecx */
  EAX = (ECX);
  /* 10fe0480 mov edx, ecx */
  EDX = (ECX);
  /* 10fe0482 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0484 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0486 jbe 0x10fe0490 */
  if ((C.cf||C.zf)) goto L_10fe0490;
  /* 10fe0488 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe048a jb 0x10fe0608 */
  if (C.cf) goto L_10fe0608;
L_10fe0490:;
  /* 10fe0490 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10fe0496 jne 0x10fe04ac */
  if (!C.zf) goto L_10fe04ac;
  /* 10fe0498 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe049b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe049e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe04a1 jb 0x10fe04cc */
  if (C.cf) goto L_10fe04cc;
  /* 10fe04a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe04a5 jmp dword ptr [edx*4 + 0x10fe05b8] */
  switch (EDX) {
    case 0: goto L_10fe05c8;
    case 1: goto L_10fe05d0;
    case 2: goto L_10fe05dc;
    case 3: goto L_10fe05f0;
    default: x86_unimpl("switch@0x10fe04a5 out of table"); return;
  }
L_10fe04ac:;
  /* 10fe04ac mov eax, edi */
  EAX = (EDI);
  /* 10fe04ae mov edx, 3 */
  EDX = (0x3u);
  /* 10fe04b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe04b6 jb 0x10fe04c4 */
  if (C.cf) goto L_10fe04c4;
  /* 10fe04b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe04bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe04bd jmp dword ptr [eax*4 + 0x10fe04d0] */
  switch (EAX) {
    case 1: goto L_10fe04e0;
    case 2: goto L_10fe050c;
    case 3: goto L_10fe0530;
    default: x86_unimpl("switch@0x10fe04bd out of table"); return;
  }
L_10fe04c4:;
  /* 10fe04c4 jmp dword ptr [ecx*4 + 0x10fe05c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10fe05c8)))); return;
  /* 10fe04cb nop  */
  /* nop */
L_10fe04cc:;
  /* 10fe04cc jmp dword ptr [ecx*4 + 0x10fe054c] */
  switch (ECX) {
    case 0: goto L_10fe05af;
    case 1: goto L_10fe059c;
    case 2: goto L_10fe0594;
    case 3: goto L_10fe058c;
    case 4: goto L_10fe0584;
    case 5: goto L_10fe057c;
    case 6: goto L_10fe0574;
    case 7: goto L_10fe056c;
    default: x86_unimpl("switch@0x10fe04cc out of table"); return;
  }
  /* 10fe04d3 nop  */
  /* nop */
L_10fe04e0:;
  /* 10fe04e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe04e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe04e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe04e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe04e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe04ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe04ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe04f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe04f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe04f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe04fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe04fe jb 0x10fe04cc */
  if (C.cf) goto L_10fe04cc;
  /* 10fe0500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe0502 jmp dword ptr [edx*4 + 0x10fe05b8] */
  switch (EDX) {
    case 0: goto L_10fe05c8;
    case 1: goto L_10fe05d0;
    case 2: goto L_10fe05dc;
    case 3: goto L_10fe05f0;
    default: x86_unimpl("switch@0x10fe0502 out of table"); return;
  }
  /* 10fe0509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe050c:;
  /* 10fe050c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe050e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe0510 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe0512 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe0515 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe0518 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe051b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe051e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0521 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0524 jb 0x10fe04cc */
  if (C.cf) goto L_10fe04cc;
  /* 10fe0526 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe0528 jmp dword ptr [edx*4 + 0x10fe05b8] */
  switch (EDX) {
    case 0: goto L_10fe05c8;
    case 1: goto L_10fe05d0;
    case 2: goto L_10fe05dc;
    case 3: goto L_10fe05f0;
    default: x86_unimpl("switch@0x10fe0528 out of table"); return;
  }
  /* 10fe052f nop  */
  /* nop */
L_10fe0530:;
  /* 10fe0530 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0532 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe0534 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe0536 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe0537 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe053a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe053b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe053e jb 0x10fe04cc */
  if (C.cf) goto L_10fe04cc;
  /* 10fe0540 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe0542 jmp dword ptr [edx*4 + 0x10fe05b8] */
  switch (EDX) {
    case 0: goto L_10fe05c8;
    case 1: goto L_10fe05d0;
    case 2: goto L_10fe05dc;
    case 3: goto L_10fe05f0;
    default: x86_unimpl("switch@0x10fe0542 out of table"); return;
  }
  /* 10fe0549 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe056c:;
  /* 10fe056c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10fe0570 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10fe0574:;
  /* 10fe0574 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10fe0578 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10fe057c:;
  /* 10fe057c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10fe0580 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10fe0584:;
  /* 10fe0584 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10fe0588 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10fe058c:;
  /* 10fe058c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10fe0590 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10fe0594:;
  /* 10fe0594 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10fe0598 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10fe059c:;
  /* 10fe059c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10fe05a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10fe05a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10fe05ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe05ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10fe05af:;
  /* 10fe05af jmp dword ptr [edx*4 + 0x10fe05b8] */
  switch (EDX) {
    case 0: goto L_10fe05c8;
    case 1: goto L_10fe05d0;
    case 2: goto L_10fe05dc;
    case 3: goto L_10fe05f0;
    default: x86_unimpl("switch@0x10fe05af out of table"); return;
  }
  /* 10fe05b6 mov edi, edi */
  EDI = (EDI);
L_10fe05c8:;
  /* 10fe05c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe05cb pop esi */
  ESI = (pop32());
  /* 10fe05cc pop edi */
  EDI = (pop32());
  /* 10fe05cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe05ce ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe05cf nop  */
  /* nop */
L_10fe05d0:;
  /* 10fe05d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe05d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe05d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe05d7 pop esi */
  ESI = (pop32());
  /* 10fe05d8 pop edi */
  EDI = (pop32());
  /* 10fe05d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe05da ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe05db nop  */
  /* nop */
L_10fe05dc:;
  /* 10fe05dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe05de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe05e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe05e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe05e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe05e9 pop esi */
  ESI = (pop32());
  /* 10fe05ea pop edi */
  EDI = (pop32());
  /* 10fe05eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe05ec ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe05ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe05f0:;
  /* 10fe05f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe05f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe05f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe05f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe05fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe05fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe0600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0603 pop esi */
  ESI = (pop32());
  /* 10fe0604 pop edi */
  EDI = (pop32());
  /* 10fe0605 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe0606 ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe0607 nop  */
  /* nop */
L_10fe0608:;
  /* 10fe0608 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10fe060c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10fe0610 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10fe0616 jne 0x10fe063c */
  if (!C.zf) goto L_10fe063c;
  /* 10fe0618 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe061b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe061e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0621 jb 0x10fe0630 */
  if (C.cf) goto L_10fe0630;
  /* 10fe0623 std  */
  C.df=1;
  /* 10fe0624 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe0626 cld  */
  C.df=0;
  /* 10fe0627 jmp dword ptr [edx*4 + 0x10fe0750] */
  switch (EDX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe0627 out of table"); return;
  }
  /* 10fe062e mov edi, edi */
  EDI = (EDI);
L_10fe0630:;
  /* 10fe0630 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe0632 jmp dword ptr [ecx*4 + 0x10fe0700] */
  switch (ECX) {
    case 0: goto L_10fe0747;
    default: x86_unimpl("switch@0x10fe0632 out of table"); return;
  }
  /* 10fe0639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe063c:;
  /* 10fe063c mov eax, edi */
  EAX = (EDI);
  /* 10fe063e mov edx, 3 */
  EDX = (0x3u);
  /* 10fe0643 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0646 jb 0x10fe0654 */
  if (C.cf) goto L_10fe0654;
  /* 10fe0648 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe064b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe064d jmp dword ptr [eax*4 + 0x10fe0658] */
  switch (EAX) {
    case 1: goto L_10fe0668;
    case 2: goto L_10fe0688;
    case 3: goto L_10fe06b0;
    default: x86_unimpl("switch@0x10fe064d out of table"); return;
  }
L_10fe0654:;
  /* 10fe0654 jmp dword ptr [ecx*4 + 0x10fe0750] */
  switch (ECX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe0654 out of table"); return;
  }
  /* 10fe065b nop  */
  /* nop */
L_10fe0668:;
  /* 10fe0668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe066b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe066d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe0670 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10fe0671 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe0674 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10fe0675 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0678 jb 0x10fe0630 */
  if (C.cf) goto L_10fe0630;
  /* 10fe067a std  */
  C.df=1;
  /* 10fe067b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe067d cld  */
  C.df=0;
  /* 10fe067e jmp dword ptr [edx*4 + 0x10fe0750] */
  switch (EDX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe067e out of table"); return;
  }
  /* 10fe0685 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe0688:;
  /* 10fe0688 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe068b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe068d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe0690 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe0693 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe0696 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe0699 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe069c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe069f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe06a2 jb 0x10fe0630 */
  if (C.cf) goto L_10fe0630;
  /* 10fe06a4 std  */
  C.df=1;
  /* 10fe06a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe06a7 cld  */
  C.df=0;
  /* 10fe06a8 jmp dword ptr [edx*4 + 0x10fe0750] */
  switch (EDX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe06a8 out of table"); return;
  }
  /* 10fe06af nop  */
  /* nop */
L_10fe06b0:;
  /* 10fe06b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe06b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe06b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe06b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe06bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe06be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe06c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe06c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe06c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe06ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe06cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe06d0 jb 0x10fe0630 */
  if (C.cf) goto L_10fe0630;
  /* 10fe06d6 std  */
  C.df=1;
  /* 10fe06d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe06d9 cld  */
  C.df=0;
  /* 10fe06da jmp dword ptr [edx*4 + 0x10fe0750] */
  switch (EDX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe06da out of table"); return;
  }
  /* 10fe06e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10fe06e4 add al, 7 */
  { uint32_t _a=(AL),_b=(0x7u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe06e7 adc byte ptr [edi + eax], cl */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe06eb adc byte ptr [edi + eax], dl */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe06ef adc byte ptr [edi + eax], bl */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe06f3 adc byte ptr [edi + eax], ah */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(AH),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe06f7 adc byte ptr [edi + eax], ch */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe06fb adc byte ptr [edi + eax], dh */
  { uint32_t _a=(r8((uint32_t)(EDI + EAX*1))),_b=(C.d.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDI + EAX*1), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe0704 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10fe0708 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10fe070c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10fe0710 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10fe0714 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10fe0718 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10fe071c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10fe0720 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10fe0724 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10fe0728 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10fe072c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10fe0730 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10fe0734 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10fe0738 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10fe073c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10fe0743 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0745 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10fe0747:;
  /* 10fe0747 jmp dword ptr [edx*4 + 0x10fe0750] */
  switch (EDX) {
    case 0: goto L_10fe0760;
    case 1: goto L_10fe0768;
    case 2: goto L_10fe0778;
    case 3: goto L_10fe078c;
    default: x86_unimpl("switch@0x10fe0747 out of table"); return;
  }
  /* 10fe074e mov edi, edi */
  EDI = (EDI);
L_10fe0760:;
  /* 10fe0760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0763 pop esi */
  ESI = (pop32());
  /* 10fe0764 pop edi */
  EDI = (pop32());
  /* 10fe0765 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe0766 ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe0767 nop  */
  /* nop */
L_10fe0768:;
  /* 10fe0768 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe076b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe076e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0771 pop esi */
  ESI = (pop32());
  /* 10fe0772 pop edi */
  EDI = (pop32());
  /* 10fe0773 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe0774 ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe0775 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe0778:;
  /* 10fe0778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe077b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe077e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe0781 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe0784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0787 pop esi */
  ESI = (pop32());
  /* 10fe0788 pop edi */
  EDI = (pop32());
  /* 10fe0789 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe078a ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
  /* 10fe078b nop  */
  /* nop */
L_10fe078c:;
  /* 10fe078c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe078f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe0792 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe0795 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe0798 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe079b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe079e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe07a1 pop esi */
  ESI = (pop32());
  /* 10fe07a2 pop edi */
  EDI = (pop32());
  /* 10fe07a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe07a4 ret  */
  ESPCHK(0x10fe0470u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10fe07b0 (104 bytes, 43 insns) */
void f_10fe07b0(void) {
  FTRACE(0x10fe07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe07b0 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe07b1 push esi */
  push32((uint32_t)(ESI));
  /* 10fe07b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10fe07b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe07b8 jne 0x10fe07d2 */
  if (!C.zf) goto L_10fe07d2;
  /* 10fe07ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10fe07be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe07c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe07c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe07c6 mov ebx, eax */
  EBX = (EAX);
  /* 10fe07c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10fe07cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe07ce mov edx, ebx */
  EDX = (EBX);
  /* 10fe07d0 jmp 0x10fe0813 */
  goto L_10fe0813;
L_10fe07d2:;
  /* 10fe07d2 mov ecx, eax */
  ECX = (EAX);
  /* 10fe07d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10fe07d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe07dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10fe07e0:;
  /* 10fe07e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10fe07e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10fe07e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10fe07e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10fe07e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe07ea jne 0x10fe07e0 */
  if (!C.zf) goto L_10fe07e0;
  /* 10fe07ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe07ee mov esi, eax */
  ESI = (EAX);
  /* 10fe07f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe07f4 mov ecx, eax */
  ECX = (EAX);
  /* 10fe07f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10fe07fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe07fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe07fe jb 0x10fe080e */
  if (C.cf) goto L_10fe080e;
  /* 10fe0800 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0804 ja 0x10fe080e */
  if ((!C.cf&&!C.zf)) goto L_10fe080e;
  /* 10fe0806 jb 0x10fe080f */
  if (C.cf) goto L_10fe080f;
  /* 10fe0808 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe080c jbe 0x10fe080f */
  if ((C.cf||C.zf)) goto L_10fe080f;
L_10fe080e:;
  /* 10fe080e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10fe080f:;
  /* 10fe080f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0811 mov eax, esi */
  EAX = (ESI);
L_10fe0813:;
  /* 10fe0813 pop esi */
  ESI = (pop32());
  /* 10fe0814 pop ebx */
  EBX = (pop32());
  /* 10fe0815 ret 0x10 */
  ESPCHK(0x10fe07b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10fe0820 (117 bytes, 44 insns) */
void f_10fe0820(void) {
  FTRACE(0x10fe0820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0820 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe0821 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10fe0825 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0827 jne 0x10fe0841 */
  if (!C.zf) goto L_10fe0841;
  /* 10fe0829 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe082d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10fe0831 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0833 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe0835 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe0839 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe083b mov eax, edx */
  EAX = (EDX);
  /* 10fe083d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe083f jmp 0x10fe0891 */
  goto L_10fe0891;
L_10fe0841:;
  /* 10fe0841 mov ecx, eax */
  ECX = (EAX);
  /* 10fe0843 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe0847 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10fe084b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10fe084f:;
  /* 10fe084f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10fe0851 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10fe0853 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10fe0855 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10fe0857 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0859 jne 0x10fe084f */
  if (!C.zf) goto L_10fe084f;
  /* 10fe085b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe085d mov ecx, eax */
  ECX = (EAX);
  /* 10fe085f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe0863 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10fe0864 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10fe0868 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe086a jb 0x10fe087a */
  if (C.cf) goto L_10fe087a;
  /* 10fe086c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0870 ja 0x10fe087a */
  if ((!C.cf&&!C.zf)) goto L_10fe087a;
  /* 10fe0872 jb 0x10fe0882 */
  if (C.cf) goto L_10fe0882;
  /* 10fe0874 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0878 jbe 0x10fe0882 */
  if ((C.cf||C.zf)) goto L_10fe0882;
L_10fe087a:;
  /* 10fe087a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe087e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10fe0882:;
  /* 10fe0882 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0886 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe088a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe088c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe088e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10fe0891:;
  /* 10fe0891 pop ebx */
  EBX = (pop32());
  /* 10fe0892 ret 0x10 */
  ESPCHK(0x10fe0820u, _esp0);
  ESP += 20; return;
}

/* FUN_100108a0 @ 0x10fe08a0 (628 bytes, 214 insns) */
void f_10fe08a0(void) {
  FTRACE(0x10fe08a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe08a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe08a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe08a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe08a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe08a7 push esi */
  push32((uint32_t)(ESI));
  /* 10fe08a8 push edi */
  push32((uint32_t)(EDI));
L_10fe08a9:;
  /* 10fe08a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe08ad jne 0x10fe08cd */
  if (!C.zf) goto L_10fe08cd;
  /* 10fe08af push 0x11001554 */
  push32((uint32_t)(0x11001554u));
  /* 10fe08b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe08b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10fe08b8 push 0x11001548 */
  push32((uint32_t)(0x11001548u));
  /* 10fe08bd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe08bf call 0x10fd8c50 */
  push32(0x10fe08c4u); f_10fd8c50();
  /* 10fe08c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe08c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe08ca jne 0x10fe08cd */
  if (!C.zf) goto L_10fe08cd;
  /* 10fe08cc int3  */
  x86_unimpl("int3 @ 0x10fe08cc");
L_10fe08cd:;
  /* 10fe08cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe08cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe08d1 jne 0x10fe08a9 */
  if (!C.zf) goto L_10fe08a9;
  /* 10fe08d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe08d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe08d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe08dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fe08df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe08e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe08e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe08e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe08ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe08f0 je 0x10fe08ff */
  if (C.zf) goto L_10fe08ff;
  /* 10fe08f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe08f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe08f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe08fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe08fd je 0x10fe0915 */
  if (C.zf) goto L_10fe0915;
L_10fe08ff:;
  /* 10fe08ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0902 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fe0905 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10fe0907 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe090a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10fe090d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0910 jmp 0x10fe0b0d */
  goto L_10fe0b0d;
L_10fe0915:;
  /* 10fe0915 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0918 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fe091b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe091e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0920 je 0x10fe096c */
  if (C.zf) goto L_10fe096c;
  /* 10fe0922 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0925 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10fe092c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe092f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fe0932 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0937 je 0x10fe0955 */
  if (C.zf) goto L_10fe0955;
  /* 10fe0939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe093c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe093f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe0942 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe0944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0947 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe094a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe094d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0950 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe0953 jmp 0x10fe096c */
  goto L_10fe096c;
L_10fe0955:;
  /* 10fe0955 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0958 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe095b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe095e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0961 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe0964 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0967 jmp 0x10fe0b0d */
  goto L_10fe0b0d;
L_10fe096c:;
  /* 10fe096c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe096f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe0972 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0978 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe097b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe097e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe0981 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0987 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe098a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe098d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10fe0994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe099b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe099e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe09a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe09a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe09a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe09ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe09af jne 0x10fe09df */
  if (!C.zf) goto L_10fe09df;
  /* 10fe09b1 cmp dword ptr [ebp - 8], 0x11004140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11004140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe09b8 je 0x10fe09c3 */
  if (C.zf) goto L_10fe09c3;
  /* 10fe09ba cmp dword ptr [ebp - 8], 0x11004160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11004160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe09c1 jne 0x10fe09d3 */
  if (!C.zf) goto L_10fe09d3;
L_10fe09c3:;
  /* 10fe09c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe09c6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe09c7 call 0x10fe2810 */
  push32(0x10fe09ccu); f_10fe2810();
  /* 10fe09cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe09cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe09d1 jne 0x10fe09df */
  if (!C.zf) goto L_10fe09df;
L_10fe09d3:;
  /* 10fe09d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe09d6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe09d7 call 0x10fe2740 */
  push32(0x10fe09dcu); f_10fe2740();
  /* 10fe09dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe09df:;
  /* 10fe09df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe09e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe09e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe09eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe09ed je 0x10fe0acb */
  if (C.zf) goto L_10fe0acb;
L_10fe09f3:;
  /* 10fe09f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe09f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe09f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10fe09fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe09fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe0a00 jge 0x10fe0a23 */
  if ((C.sf==C.of)) goto L_10fe0a23;
  /* 10fe0a02 push 0x11001508 */
  push32((uint32_t)(0x11001508u));
  /* 10fe0a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe0a09 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10fe0a0e push 0x11001548 */
  push32((uint32_t)(0x11001548u));
  /* 10fe0a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe0a15 call 0x10fd8c50 */
  push32(0x10fe0a1au); f_10fd8c50();
  /* 10fe0a1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0a1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0a20 jne 0x10fe0a23 */
  if (!C.zf) goto L_10fe0a23;
  /* 10fe0a22 int3  */
  x86_unimpl("int3 @ 0x10fe0a22");
L_10fe0a23:;
  /* 10fe0a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0a27 jne 0x10fe09f3 */
  if (!C.zf) goto L_10fe09f3;
  /* 10fe0a29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a2f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10fe0a31 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0a34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe0a37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a3a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fe0a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0a40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe0a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a48 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fe0a4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0a4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fe0a54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0a58 jle 0x10fe0a76 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe0a76;
  /* 10fe0a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0a5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0a61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe0a64 push eax */
  push32((uint32_t)(EAX));
  /* 10fe0a65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe0a68 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0a69 call 0x10fe2430 */
  push32(0x10fe0a6eu); f_10fe2430();
  /* 10fe0a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0a71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe0a74 jmp 0x10fe0abe */
  goto L_10fe0abe;
L_10fe0a76:;
  /* 10fe0a76 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0a7a je 0x10fe0a99 */
  if (C.zf) goto L_10fe0a99;
  /* 10fe0a7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe0a7f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fe0a82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe0a85 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0a88 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe0a8b mov ecx, dword ptr [edx*4 + 0x110071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe0a92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0a94 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe0a97 jmp 0x10fe0aa0 */
  goto L_10fe0aa0;
L_10fe0a99:;
  /* 10fe0a99 mov dword ptr [ebp - 0x14], 0x11003a60 */
  w32((uint32_t)(EBP + -0x14), (0x11003a60u));
L_10fe0aa0:;
  /* 10fe0aa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe0aa3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10fe0aa7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0aac je 0x10fe0abe */
  if (C.zf) goto L_10fe0abe;
  /* 10fe0aae push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe0ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe0ab2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe0ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0ab6 call 0x10fe22e0 */
  push32(0x10fe0abbu); f_10fe22e0();
  /* 10fe0abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe0abe:;
  /* 10fe0abe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0ac1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe0ac4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fe0ac7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10fe0ac9 jmp 0x10fe0ae9 */
  goto L_10fe0ae9;
L_10fe0acb:;
  /* 10fe0acb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe0ad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0ad5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0ad6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10fe0ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe0ada mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe0add push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0ade call 0x10fe2430 */
  push32(0x10fe0ae3u); f_10fe2430();
  /* 10fe0ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0ae6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe0ae9:;
  /* 10fe0ae9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe0aec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0aef je 0x10fe0b05 */
  if (C.zf) goto L_10fe0b05;
  /* 10fe0af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0af4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe0af7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0afa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0afd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10fe0b00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0b03 jmp 0x10fe0b0d */
  goto L_10fe0b0d;
L_10fe0b05:;
  /* 10fe0b05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0b08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10fe0b0d:;
  /* 10fe0b0d pop edi */
  EDI = (pop32());
  /* 10fe0b0e pop esi */
  ESI = (pop32());
  /* 10fe0b0f pop ebx */
  EBX = (pop32());
  /* 10fe0b10 mov esp, ebp */
  ESP = (EBP);
  /* 10fe0b12 pop ebp */
  EBP = (pop32());
  /* 10fe0b13 ret  */
  ESPCHK(0x10fe08a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b20 @ 0x10fe0b20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10fe0b20(void) {
  FTRACE(0x10fe0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe0b21 mov ebp, esp */
  EBP = (ESP);
  /* 10fe0b23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0b29 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe0b2a push esi */
  push32((uint32_t)(ESI));
  /* 10fe0b2b push edi */
  push32((uint32_t)(EDI));
  /* 10fe0b2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fe0b33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10fe0b3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10fe0b44:;
  /* 10fe0b44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0b47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe0b49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10fe0b4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0b50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0b53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0b56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10fe0b59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe0b5b je 0x10fe1737 */
  if (C.zf) goto L_10fe1737;
  /* 10fe0b61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0b68 jl 0x10fe1737 */
  if ((C.sf!=C.of)) goto L_10fe1737;
  /* 10fe0b6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0b72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0b75 jl 0x10fe0b96 */
  if ((C.sf!=C.of)) goto L_10fe0b96;
  /* 10fe0b77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0b7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0b7e jg 0x10fe0b96 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe0b96;
  /* 10fe0b80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0b84 movsx ecx, byte ptr [eax + 0x11001540] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11001540))));
  /* 10fe0b8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0b8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10fe0b94 jmp 0x10fe0ba0 */
  goto L_10fe0ba0;
L_10fe0b96:;
  /* 10fe0b96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10fe0ba0:;
  /* 10fe0ba0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10fe0ba6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe0ba9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe0bac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe0baf movsx edx, byte ptr [ecx + eax*8 + 0x11001560] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11001560))));
  /* 10fe0bb7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10fe0bba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fe0bbd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe0bc0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10fe0bc6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0bcd ja 0x10fe1732 */
  if ((!C.cf&&!C.zf)) goto L_10fe1732;
  /* 10fe0bd3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10fe0bd9 jmp dword ptr [ecx*4 + 0x10fe1744] */
  switch (ECX) {
    case 0: goto L_10fe0be0;
    case 1: goto L_10fe0c7a;
    case 2: goto L_10fe0cbc;
    case 3: goto L_10fe0d2b;
    case 4: goto L_10fe0d83;
    case 5: goto L_10fe0d92;
    case 6: goto L_10fe0dde;
    case 7: goto L_10fe0e71;
    case 8: goto L_10fe0d08;
    case 9: goto L_10fe0d13;
    case 10: goto L_10fe0cfe;
    case 11: goto L_10fe0cf3;
    case 12: goto L_10fe0d1e;
    case 13: goto L_10fe0d26;
    default: x86_unimpl("switch@0x10fe0bd9 out of table"); return;
  }
L_10fe0be0:;
  /* 10fe0be0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10fe0be7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe0bea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0bf0 mov eax, dword ptr [0x11003c98] */
  EAX = (r32((uint32_t)(0x11003c98)));
  /* 10fe0bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0bf7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10fe0bfb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe0c03 je 0x10fe0c5d */
  if (C.zf) goto L_10fe0c5d;
  /* 10fe0c05 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10fe0c0b push edx */
  push32((uint32_t)(EDX));
  /* 10fe0c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0c0f push eax */
  push32((uint32_t)(EAX));
  /* 10fe0c10 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0c14 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0c15 call 0x10fe1850 */
  push32(0x10fe0c1au); f_10fe1850();
  /* 10fe0c1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0c1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0c20 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe0c22 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10fe0c25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0c2b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10fe0c2e:;
  /* 10fe0c2e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0c32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe0c34 jne 0x10fe0c57 */
  if (!C.zf) goto L_10fe0c57;
  /* 10fe0c36 push 0x110015e0 */
  push32((uint32_t)(0x110015e0u));
  /* 10fe0c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe0c3d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10fe0c42 push 0x110015d4 */
  push32((uint32_t)(0x110015d4u));
  /* 10fe0c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe0c49 call 0x10fd8c50 */
  push32(0x10fe0c4eu); f_10fd8c50();
  /* 10fe0c4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0c54 jne 0x10fe0c57 */
  if (!C.zf) goto L_10fe0c57;
  /* 10fe0c56 int3  */
  x86_unimpl("int3 @ 0x10fe0c56");
L_10fe0c57:;
  /* 10fe0c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0c5b jne 0x10fe0c2e */
  if (!C.zf) goto L_10fe0c2e;
L_10fe0c5d:;
  /* 10fe0c5d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10fe0c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe0c67 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0c68 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0c6c push eax */
  push32((uint32_t)(EAX));
  /* 10fe0c6d call 0x10fe1850 */
  push32(0x10fe0c72u); f_10fe1850();
  /* 10fe0c72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0c75 jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0c7a:;
  /* 10fe0c7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe0c81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe0c84 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10fe0c8a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10fe0c90 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10fe0c96 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10fe0c9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10fe0c9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe0ca6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10fe0cb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10fe0cb7 jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0cbc:;
  /* 10fe0cbc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0cc0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10fe0cc6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10fe0ccc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0ccf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10fe0cd5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0cdc ja 0x10fe0d26 */
  if ((!C.cf&&!C.zf)) goto L_10fe0d26;
  /* 10fe0cde mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10fe0ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0ce6 mov al, byte ptr [ecx + 0x10fe177c] */
  AL = (r8((uint32_t)(ECX + 0x10fe177c)));
  /* 10fe0cec jmp dword ptr [eax*4 + 0x10fe1764] */
  switch (EAX) {
    case 0: goto L_10fe0d08;
    case 1: goto L_10fe0d13;
    case 2: goto L_10fe0cfe;
    case 3: goto L_10fe0cf3;
    case 4: goto L_10fe0d1e;
    case 5: goto L_10fe0d26;
    default: x86_unimpl("switch@0x10fe0cec out of table"); return;
  }
L_10fe0cf3:;
  /* 10fe0cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0cf6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0cf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe0cfc jmp 0x10fe0d26 */
  goto L_10fe0d26;
L_10fe0cfe:;
  /* 10fe0cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0d01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10fe0d03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe0d06 jmp 0x10fe0d26 */
  goto L_10fe0d26;
L_10fe0d08:;
  /* 10fe0d08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0d0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0d0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe0d11 jmp 0x10fe0d26 */
  goto L_10fe0d26;
L_10fe0d13:;
  /* 10fe0d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0d16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10fe0d19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe0d1c jmp 0x10fe0d26 */
  goto L_10fe0d26;
L_10fe0d1e:;
  /* 10fe0d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0d21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10fe0d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe0d26:;
  /* 10fe0d26 jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0d2b:;
  /* 10fe0d2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0d2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0d32 jne 0x10fe0d67 */
  if (!C.zf) goto L_10fe0d67;
  /* 10fe0d34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10fe0d37 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0d38 call 0x10fe1960 */
  push32(0x10fe0d3du); f_10fe1960();
  /* 10fe0d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0d40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10fe0d46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0d4d jge 0x10fe0d65 */
  if ((C.sf==C.of)) goto L_10fe0d65;
  /* 10fe0d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0d52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10fe0d54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe0d57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10fe0d5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe0d5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10fe0d65:;
  /* 10fe0d65 jmp 0x10fe0d7e */
  goto L_10fe0d7e;
L_10fe0d67:;
  /* 10fe0d67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10fe0d6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe0d70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0d74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10fe0d78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10fe0d7e:;
  /* 10fe0d7e jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0d83:;
  /* 10fe0d83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10fe0d8d jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0d92:;
  /* 10fe0d92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0d96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0d99 jne 0x10fe0dc2 */
  if (!C.zf) goto L_10fe0dc2;
  /* 10fe0d9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fe0d9e push eax */
  push32((uint32_t)(EAX));
  /* 10fe0d9f call 0x10fe1960 */
  push32(0x10fe0da4u); f_10fe1960();
  /* 10fe0da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0da7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10fe0dad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0db4 jge 0x10fe0dc0 */
  if ((C.sf==C.of)) goto L_10fe0dc0;
  /* 10fe0db6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10fe0dc0:;
  /* 10fe0dc0 jmp 0x10fe0dd9 */
  goto L_10fe0dd9;
L_10fe0dc2:;
  /* 10fe0dc2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10fe0dc8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe0dcb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0dcf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10fe0dd3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10fe0dd9:;
  /* 10fe0dd9 jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0dde:;
  /* 10fe0dde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0de2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10fe0de8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10fe0dee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0df1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10fe0df7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0dfe ja 0x10fe0e6c */
  if ((!C.cf&&!C.zf)) goto L_10fe0e6c;
  /* 10fe0e00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10fe0e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0e08 mov al, byte ptr [ecx + 0x10fe17a1] */
  AL = (r8((uint32_t)(ECX + 0x10fe17a1)));
  /* 10fe0e0e jmp dword ptr [eax*4 + 0x10fe178d] */
  switch (EAX) {
    case 0: goto L_10fe0e20;
    case 1: goto L_10fe0e59;
    case 2: goto L_10fe0e15;
    case 3: goto L_10fe0e63;
    case 4: goto L_10fe0e6c;
    default: x86_unimpl("switch@0x10fe0e0e out of table"); return;
  }
L_10fe0e15:;
  /* 10fe0e15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0e18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0e1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe0e1e jmp 0x10fe0e6c */
  goto L_10fe0e6c;
L_10fe0e20:;
  /* 10fe0e20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0e23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe0e26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0e29 jne 0x10fe0e4b */
  if (!C.zf) goto L_10fe0e4b;
  /* 10fe0e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0e2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fe0e32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0e35 jne 0x10fe0e4b */
  if (!C.zf) goto L_10fe0e4b;
  /* 10fe0e37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe0e3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0e3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10fe0e40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0e43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fe0e46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe0e49 jmp 0x10fe0e57 */
  goto L_10fe0e57;
L_10fe0e4b:;
  /* 10fe0e4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10fe0e52 jmp 0x10fe0be0 */
  goto L_10fe0be0;
L_10fe0e57:;
  /* 10fe0e57 jmp 0x10fe0e6c */
  goto L_10fe0e6c;
L_10fe0e59:;
  /* 10fe0e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0e5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10fe0e5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe0e61 jmp 0x10fe0e6c */
  goto L_10fe0e6c;
L_10fe0e63:;
  /* 10fe0e63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0e66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10fe0e69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe0e6c:;
  /* 10fe0e6c jmp 0x10fe1732 */
  goto L_10fe1732;
L_10fe0e71:;
  /* 10fe0e71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe0e75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10fe0e7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10fe0e81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe0e84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10fe0e8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0e91 ja 0x10fe1557 */
  if ((!C.cf&&!C.zf)) goto L_10fe1557;
  /* 10fe0e97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10fe0e9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0e9f mov cl, byte ptr [edx + 0x10fe180c] */
  CL = (r8((uint32_t)(EDX + 0x10fe180c)));
  /* 10fe0ea5 jmp dword ptr [ecx*4 + 0x10fe17d0] */
  switch (ECX) {
    case 0: goto L_10fe0eac;
    case 1: goto L_10fe1140;
    case 2: goto L_10fe0fd0;
    case 3: goto L_10fe1279;
    case 4: goto L_10fe0f3b;
    case 5: goto L_10fe0ec1;
    case 6: goto L_10fe124b;
    case 7: goto L_10fe1150;
    case 8: goto L_10fe10f5;
    case 9: goto L_10fe12c5;
    case 10: goto L_10fe126f;
    case 11: goto L_10fe0fe6;
    case 12: goto L_10fe1263;
    case 13: goto L_10fe1285;
    case 14: goto L_10fe1557;
    default: x86_unimpl("switch@0x10fe0ea5 out of table"); return;
  }
L_10fe0eac:;
  /* 10fe0eac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0eaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe0eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe0eb6 jne 0x10fe0ec1 */
  if (!C.zf) goto L_10fe0ec1;
  /* 10fe0eb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0ebb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10fe0ebe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe0ec1:;
  /* 10fe0ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0ec4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe0eca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe0ecc je 0x10fe0f07 */
  if (C.zf) goto L_10fe0f07;
  /* 10fe0ece lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fe0ed1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe0ed2 call 0x10fe19a0 */
  push32(0x10fe0ed7u); f_10fe19a0();
  /* 10fe0ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0eda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10fe0ede mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10fe0ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe0ee3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10fe0ee9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe0eea call 0x10fe2a80 */
  push32(0x10fe0eefu); f_10fe2a80();
  /* 10fe0eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0ef2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe0ef5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0ef9 jge 0x10fe0f05 */
  if ((C.sf==C.of)) goto L_10fe0f05;
  /* 10fe0efb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10fe0f05:;
  /* 10fe0f05 jmp 0x10fe0f2d */
  goto L_10fe0f2d;
L_10fe0f07:;
  /* 10fe0f07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fe0f0a push eax */
  push32((uint32_t)(EAX));
  /* 10fe0f0b call 0x10fe1960 */
  push32(0x10fe0f10u); f_10fe1960();
  /* 10fe0f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0f13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10fe0f1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10fe0f20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10fe0f26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10fe0f2d:;
  /* 10fe0f2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10fe0f33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fe0f36 jmp 0x10fe1557 */
  goto L_10fe1557;
L_10fe0f3b:;
  /* 10fe0f3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fe0f3e push eax */
  push32((uint32_t)(EAX));
  /* 10fe0f3f call 0x10fe1960 */
  push32(0x10fe0f44u); f_10fe1960();
  /* 10fe0f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0f47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10fe0f4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0f54 je 0x10fe0f62 */
  if (C.zf) goto L_10fe0f62;
  /* 10fe0f56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10fe0f5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0f60 jne 0x10fe0f7c */
  if (!C.zf) goto L_10fe0f7c;
L_10fe0f62:;
  /* 10fe0f62 mov edx, dword ptr [0x11003fb0] */
  EDX = (r32((uint32_t)(0x11003fb0)));
  /* 10fe0f68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fe0f6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe0f6e push eax */
  push32((uint32_t)(EAX));
  /* 10fe0f6f call 0x10fdc9c0 */
  push32(0x10fe0f74u); f_10fdc9c0();
  /* 10fe0f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe0f77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe0f7a jmp 0x10fe0fcb */
  goto L_10fe0fcb;
L_10fe0f7c:;
  /* 10fe0f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0f7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0f85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe0f87 je 0x10fe0fac */
  if (C.zf) goto L_10fe0fac;
  /* 10fe0f89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10fe0f8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10fe0f92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe0f95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10fe0f9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10fe0f9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10fe0fa0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fe0fa3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10fe0faa jmp 0x10fe0fcb */
  goto L_10fe0fcb;
L_10fe0fac:;
  /* 10fe0fac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10fe0fb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10fe0fb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe0fbc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fe0fbf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10fe0fc5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10fe0fc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10fe0fcb:;
  /* 10fe0fcb jmp 0x10fe1557 */
  goto L_10fe1557;
L_10fe0fd0:;
  /* 10fe0fd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0fd3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe0fd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe0fdb jne 0x10fe0fe6 */
  if (!C.zf) goto L_10fe0fe6;
  /* 10fe0fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe0fe0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fe0fe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe0fe6:;
  /* 10fe0fe6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe0fed jne 0x10fe0ffb */
  if (!C.zf) goto L_10fe0ffb;
  /* 10fe0fef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10fe0ff9 jmp 0x10fe1007 */
  goto L_10fe1007;
L_10fe0ffb:;
  /* 10fe0ffb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10fe1001 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10fe1007:;
  /* 10fe1007 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10fe100d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10fe1013 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10fe1016 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1017 call 0x10fe1960 */
  push32(0x10fe101cu); f_10fe1960();
  /* 10fe101c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe101f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe1022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1025 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe102a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe102c je 0x10fe1096 */
  if (C.zf) goto L_10fe1096;
  /* 10fe102e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1032 jne 0x10fe103d */
  if (!C.zf) goto L_10fe103d;
  /* 10fe1034 mov ecx, dword ptr [0x11003fb4] */
  ECX = (r32((uint32_t)(0x11003fb4)));
  /* 10fe103a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fe103d:;
  /* 10fe103d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10fe1044 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1047 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10fe104d:;
  /* 10fe104d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10fe1053 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10fe1059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe105c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10fe1062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1064 je 0x10fe1086 */
  if (C.zf) goto L_10fe1086;
  /* 10fe1066 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10fe106c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe106e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10fe1071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1073 je 0x10fe1086 */
  if (C.zf) goto L_10fe1086;
  /* 10fe1075 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10fe107b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe107e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10fe1084 jmp 0x10fe104d */
  goto L_10fe104d;
L_10fe1086:;
  /* 10fe1086 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10fe108c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe108f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10fe1091 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10fe1094 jmp 0x10fe10f0 */
  goto L_10fe10f0;
L_10fe1096:;
  /* 10fe1096 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe109a jne 0x10fe10a4 */
  if (!C.zf) goto L_10fe10a4;
  /* 10fe109c mov eax, dword ptr [0x11003fb0] */
  EAX = (r32((uint32_t)(0x11003fb0)));
  /* 10fe10a1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10fe10a4:;
  /* 10fe10a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe10a7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10fe10ad:;
  /* 10fe10ad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10fe10b3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10fe10b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe10bc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10fe10c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe10c4 je 0x10fe10e4 */
  if (C.zf) goto L_10fe10e4;
  /* 10fe10c6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10fe10cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe10cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe10d1 je 0x10fe10e4 */
  if (C.zf) goto L_10fe10e4;
  /* 10fe10d3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10fe10d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe10dc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10fe10e2 jmp 0x10fe10ad */
  goto L_10fe10ad;
L_10fe10e4:;
  /* 10fe10e4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10fe10ea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe10ed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10fe10f0:;
  /* 10fe10f0 jmp 0x10fe1557 */
  goto L_10fe1557;
L_10fe10f5:;
  /* 10fe10f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10fe10f8 push edx */
  push32((uint32_t)(EDX));
  /* 10fe10f9 call 0x10fe1960 */
  push32(0x10fe10feu); f_10fe1960();
  /* 10fe10fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1101 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10fe1107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe110a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe110d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe110f je 0x10fe1123 */
  if (C.zf) goto L_10fe1123;
  /* 10fe1111 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10fe1117 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10fe111e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10fe1121 jmp 0x10fe1131 */
  goto L_10fe1131;
L_10fe1123:;
  /* 10fe1123 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10fe1129 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10fe112f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10fe1131:;
  /* 10fe1131 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10fe113b jmp 0x10fe1557 */
  goto L_10fe1557;
L_10fe1140:;
  /* 10fe1140 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fe1147 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10fe114a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe114d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10fe1150:;
  /* 10fe1150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1153 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10fe1155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe1158 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10fe115e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fe1161 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1168 jge 0x10fe1176 */
  if ((C.sf==C.of)) goto L_10fe1176;
  /* 10fe116a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10fe1174 jmp 0x10fe1192 */
  goto L_10fe1192;
L_10fe1176:;
  /* 10fe1176 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe117d jne 0x10fe1192 */
  if (!C.zf) goto L_10fe1192;
  /* 10fe117f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe1183 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1186 jne 0x10fe1192 */
  if (!C.zf) goto L_10fe1192;
  /* 10fe1188 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10fe1192:;
  /* 10fe1192 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe1195 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1198 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10fe119b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe119e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe11a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe11a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fe11a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10fe11ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10fe11b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe11b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe11b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10fe11bc push edx */
  push32((uint32_t)(EDX));
  /* 10fe11bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe11c1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe11c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe11c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe11c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10fe11cc push edx */
  push32((uint32_t)(EDX));
  /* 10fe11cd call dword ptr [0x110043a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110043a0))), 0x10fe11d3u);
  /* 10fe11d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe11d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe11d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe11de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe11e0 je 0x10fe11f8 */
  if (C.zf) goto L_10fe11f8;
  /* 10fe11e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe11e9 jne 0x10fe11f8 */
  if (!C.zf) goto L_10fe11f8;
  /* 10fe11eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe11ee push ecx */
  push32((uint32_t)(ECX));
  /* 10fe11ef call dword ptr [0x110043ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110043ac))), 0x10fe11f5u);
  /* 10fe11f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe11f8:;
  /* 10fe11f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10fe11fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe11ff jne 0x10fe121a */
  if (!C.zf) goto L_10fe121a;
  /* 10fe1201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1204 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe120b jne 0x10fe121a */
  if (!C.zf) goto L_10fe121a;
  /* 10fe120d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1210 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1211 call dword ptr [0x110043a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110043a4))), 0x10fe1217u);
  /* 10fe1217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe121a:;
  /* 10fe121a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe121d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe1220 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1223 jne 0x10fe1237 */
  if (!C.zf) goto L_10fe1237;
  /* 10fe1225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1228 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10fe122b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe122e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1231 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1234 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10fe1237:;
  /* 10fe1237 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe123a push eax */
  push32((uint32_t)(EAX));
  /* 10fe123b call 0x10fdc9c0 */
  push32(0x10fe1240u); f_10fdc9c0();
  /* 10fe1240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1243 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe1246 jmp 0x10fe1557 */
  goto L_10fe1557;
L_10fe124b:;
  /* 10fe124b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe124e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1251 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe1254 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10fe125e jmp 0x10fe12e5 */
  goto L_10fe12e5;
L_10fe1263:;
  /* 10fe1263 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10fe126d jmp 0x10fe12e5 */
  goto L_10fe12e5;
L_10fe126f:;
  /* 10fe126f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10fe1279:;
  /* 10fe1279 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10fe1283 jmp 0x10fe128f */
  goto L_10fe128f;
L_10fe1285:;
  /* 10fe1285 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10fe128f:;
  /* 10fe128f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10fe1299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe129c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe12a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe12a4 je 0x10fe12c3 */
  if (C.zf) goto L_10fe12c3;
  /* 10fe12a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10fe12ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10fe12b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe12b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10fe12bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10fe12c3:;
  /* 10fe12c3 jmp 0x10fe12e5 */
  goto L_10fe12e5;
L_10fe12c5:;
  /* 10fe12c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10fe12cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe12d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe12d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe12da je 0x10fe12e5 */
  if (C.zf) goto L_10fe12e5;
  /* 10fe12dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe12df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fe12e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe12e5:;
  /* 10fe12e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe12e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe12ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe12ef je 0x10fe130e */
  if (C.zf) goto L_10fe130e;
  /* 10fe12f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10fe12f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe12f5 call 0x10fe1980 */
  push32(0x10fe12fau); f_10fe1980();
  /* 10fe12fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe12fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10fe1303 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10fe1309 jmp 0x10fe139f */
  goto L_10fe139f;
L_10fe130e:;
  /* 10fe130e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1311 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1314 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1316 je 0x10fe1360 */
  if (C.zf) goto L_10fe1360;
  /* 10fe1318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe131b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe131e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1320 je 0x10fe1340 */
  if (C.zf) goto L_10fe1340;
  /* 10fe1322 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10fe1325 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1326 call 0x10fe1960 */
  push32(0x10fe132bu); f_10fe1960();
  /* 10fe132b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe132e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10fe1331 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe1332 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10fe1338 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10fe133e jmp 0x10fe135e */
  goto L_10fe135e;
L_10fe1340:;
  /* 10fe1340 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10fe1343 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1344 call 0x10fe1960 */
  push32(0x10fe1349u); f_10fe1960();
  /* 10fe1349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe134c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1351 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe1352 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10fe1358 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10fe135e:;
  /* 10fe135e jmp 0x10fe139f */
  goto L_10fe139f;
L_10fe1360:;
  /* 10fe1360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1363 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1368 je 0x10fe1385 */
  if (C.zf) goto L_10fe1385;
  /* 10fe136a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10fe136d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe136e call 0x10fe1960 */
  push32(0x10fe1373u); f_10fe1960();
  /* 10fe1373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1376 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe1377 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10fe137d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10fe1383 jmp 0x10fe139f */
  goto L_10fe139f;
L_10fe1385:;
  /* 10fe1385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10fe1388 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1389 call 0x10fe1960 */
  push32(0x10fe138eu); f_10fe1960();
  /* 10fe138e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1393 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10fe1399 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10fe139f:;
  /* 10fe139f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe13a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe13a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe13a7 je 0x10fe13e7 */
  if (C.zf) goto L_10fe13e7;
  /* 10fe13a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe13b0 jg 0x10fe13e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe13e7;
  /* 10fe13b2 jl 0x10fe13bd */
  if ((C.sf!=C.of)) goto L_10fe13bd;
  /* 10fe13b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe13bb jae 0x10fe13e7 */
  if (!C.cf) goto L_10fe13e7;
L_10fe13bd:;
  /* 10fe13bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10fe13c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe13c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10fe13cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe13ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe13d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10fe13d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10fe13dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe13df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fe13e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe13e5 jmp 0x10fe13ff */
  goto L_10fe13ff;
L_10fe13e7:;
  /* 10fe13e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10fe13ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10fe13f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10fe13f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10fe13ff:;
  /* 10fe13ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1402 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe140a jne 0x10fe1427 */
  if (!C.zf) goto L_10fe1427;
  /* 10fe140c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10fe1412 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10fe1418 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe141b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10fe1421 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10fe1427:;
  /* 10fe1427 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe142e jge 0x10fe143c */
  if ((C.sf==C.of)) goto L_10fe143c;
  /* 10fe1430 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10fe143a jmp 0x10fe1445 */
  goto L_10fe1445;
L_10fe143c:;
  /* 10fe143c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe143f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe1445:;
  /* 10fe1445 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10fe144b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1453 jne 0x10fe145c */
  if (!C.zf) goto L_10fe145c;
  /* 10fe1455 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10fe145c:;
  /* 10fe145c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10fe145f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fe1462:;
  /* 10fe1462 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10fe1468 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10fe146e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1471 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10fe1477 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1479 jg 0x10fe148f */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe148f;
  /* 10fe147b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10fe1481 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1487 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe1489 je 0x10fe1510 */
  if (C.zf) goto L_10fe1510;
L_10fe148f:;
  /* 10fe148f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10fe1495 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe1496 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1497 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1498 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10fe149e push edx */
  push32((uint32_t)(EDX));
  /* 10fe149f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10fe14a5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe14a6 call 0x10fe0820 */
  push32(0x10fe14abu); f_10fe0820();
  /* 10fe14ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe14ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10fe14b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10fe14ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe14bb push edx */
  push32((uint32_t)(EDX));
  /* 10fe14bc push eax */
  push32((uint32_t)(EAX));
  /* 10fe14bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10fe14c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe14c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10fe14ca push edx */
  push32((uint32_t)(EDX));
  /* 10fe14cb call 0x10fe07b0 */
  push32(0x10fe14d0u); f_10fe07b0();
  /* 10fe14d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10fe14d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10fe14dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe14e3 jle 0x10fe14f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe14f7;
  /* 10fe14e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10fe14eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe14f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10fe14f7:;
  /* 10fe14f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe14fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10fe1500 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10fe1502 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1505 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1508 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe150b jmp 0x10fe1462 */
  goto L_10fe1462;
L_10fe1510:;
  /* 10fe1510 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10fe1513 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1516 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe1519 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe151c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe151f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fe1522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1525 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe152a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe152c je 0x10fe1557 */
  if (C.zf) goto L_10fe1557;
  /* 10fe152e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1531 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe1534 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1537 jne 0x10fe153f */
  if (!C.zf) goto L_10fe153f;
  /* 10fe1539 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe153d jne 0x10fe1557 */
  if (!C.zf) goto L_10fe1557;
L_10fe153f:;
  /* 10fe153f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1542 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1545 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe1548 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe154b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10fe154e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe1551 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1554 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10fe1557:;
  /* 10fe1557 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe155e jne 0x10fe1732 */
  if (!C.zf) goto L_10fe1732;
  /* 10fe1564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1567 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe156a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe156c je 0x10fe15bd */
  if (C.zf) goto L_10fe15bd;
  /* 10fe156e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1571 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1577 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe1579 je 0x10fe158b */
  if (C.zf) goto L_10fe158b;
  /* 10fe157b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10fe1582 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10fe1589 jmp 0x10fe15bd */
  goto L_10fe15bd;
L_10fe158b:;
  /* 10fe158b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe158e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1593 je 0x10fe15a5 */
  if (C.zf) goto L_10fe15a5;
  /* 10fe1595 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10fe159c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10fe15a3 jmp 0x10fe15bd */
  goto L_10fe15bd;
L_10fe15a5:;
  /* 10fe15a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe15a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe15ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe15ad je 0x10fe15bd */
  if (C.zf) goto L_10fe15bd;
  /* 10fe15af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10fe15b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10fe15bd:;
  /* 10fe15bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10fe15c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe15c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe15c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10fe15cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe15d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe15d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe15d7 jne 0x10fe15f5 */
  if (!C.zf) goto L_10fe15f5;
  /* 10fe15d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10fe15df push eax */
  push32((uint32_t)(EAX));
  /* 10fe15e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe15e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe15e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10fe15ea push edx */
  push32((uint32_t)(EDX));
  /* 10fe15eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10fe15ed call 0x10fe18d0 */
  push32(0x10fe15f2u); f_10fe18d0();
  /* 10fe15f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe15f5:;
  /* 10fe15f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10fe15fb push eax */
  push32((uint32_t)(EAX));
  /* 10fe15fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe15ff push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1600 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe1603 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1604 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10fe160a push eax */
  push32((uint32_t)(EAX));
  /* 10fe160b call 0x10fe1910 */
  push32(0x10fe1610u); f_10fe1910();
  /* 10fe1610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1613 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1616 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1619 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe161b je 0x10fe1643 */
  if (C.zf) goto L_10fe1643;
  /* 10fe161d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1620 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1623 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1625 jne 0x10fe1643 */
  if (!C.zf) goto L_10fe1643;
  /* 10fe1627 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10fe162d push eax */
  push32((uint32_t)(EAX));
  /* 10fe162e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1631 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1632 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10fe1638 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1639 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fe163b call 0x10fe18d0 */
  push32(0x10fe1640u); f_10fe18d0();
  /* 10fe1640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe1643:;
  /* 10fe1643 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1647 je 0x10fe16f1 */
  if (C.zf) goto L_10fe16f1;
  /* 10fe164d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1651 jle 0x10fe16f1 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe16f1;
  /* 10fe1657 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe165a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10fe1660 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe1663 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10fe1669:;
  /* 10fe1669 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10fe166f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10fe1675 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1678 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10fe167e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1680 je 0x10fe16ef */
  if (C.zf) goto L_10fe16ef;
  /* 10fe1682 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10fe1688 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10fe168b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10fe1692 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10fe1699 push eax */
  push32((uint32_t)(EAX));
  /* 10fe169a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10fe16a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe16a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10fe16a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe16aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10fe16b0 call 0x10fe2a80 */
  push32(0x10fe16b5u); f_10fe2a80();
  /* 10fe16b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe16b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10fe16be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe16c5 jg 0x10fe16c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe16c9;
  /* 10fe16c7 jmp 0x10fe16ef */
  goto L_10fe16ef;
L_10fe16c9:;
  /* 10fe16c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10fe16cf push eax */
  push32((uint32_t)(EAX));
  /* 10fe16d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe16d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe16d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10fe16da push edx */
  push32((uint32_t)(EDX));
  /* 10fe16db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10fe16e1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe16e2 call 0x10fe1910 */
  push32(0x10fe16e7u); f_10fe1910();
  /* 10fe16e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe16ea jmp 0x10fe1669 */
  goto L_10fe1669;
L_10fe16ef:;
  /* 10fe16ef jmp 0x10fe170c */
  goto L_10fe170c;
L_10fe16f1:;
  /* 10fe16f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10fe16f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe16f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe16fb push edx */
  push32((uint32_t)(EDX));
  /* 10fe16fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe16ff push eax */
  push32((uint32_t)(EAX));
  /* 10fe1700 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1703 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1704 call 0x10fe1910 */
  push32(0x10fe1709u); f_10fe1910();
  /* 10fe1709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe170c:;
  /* 10fe170c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe170f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe1714 je 0x10fe1732 */
  if (C.zf) goto L_10fe1732;
  /* 10fe1716 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10fe171c push eax */
  push32((uint32_t)(EAX));
  /* 10fe171d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1720 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1721 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10fe1727 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1728 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10fe172a call 0x10fe18d0 */
  push32(0x10fe172fu); f_10fe18d0();
  /* 10fe172f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe1732:;
  /* 10fe1732 jmp 0x10fe0b44 */
  goto L_10fe0b44;
L_10fe1737:;
  /* 10fe1737 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10fe173d pop edi */
  EDI = (pop32());
  /* 10fe173e pop esi */
  ESI = (pop32());
  /* 10fe173f pop ebx */
  EBX = (pop32());
  /* 10fe1740 mov esp, ebp */
  ESP = (EBP);
  /* 10fe1742 pop ebp */
  EBP = (pop32());
  /* 10fe1743 ret  */
  ESPCHK(0x10fe0b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x10fe1850 (119 bytes, 44 insns) */
void f_10fe1850(void) {
  FTRACE(0x10fe1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1850 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1851 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1853 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1857 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe185a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe185d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1860 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10fe1863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1866 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe186a jl 0x10fe1892 */
  if ((C.sf!=C.of)) goto L_10fe1892;
  /* 10fe186c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe186f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe1871 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10fe1874 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10fe1876 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10fe187a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe1880 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe1883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1886 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe1888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe188b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe188e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe1890 jmp 0x10fe18a5 */
  goto L_10fe18a5;
L_10fe1892:;
  /* 10fe1892 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1895 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1899 push eax */
  push32((uint32_t)(EAX));
  /* 10fe189a call 0x10fe08a0 */
  push32(0x10fe189fu); f_10fe08a0();
  /* 10fe189f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe18a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe18a5:;
  /* 10fe18a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe18a9 jne 0x10fe18b6 */
  if (!C.zf) goto L_10fe18b6;
  /* 10fe18ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe18ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10fe18b4 jmp 0x10fe18c3 */
  goto L_10fe18c3;
L_10fe18b6:;
  /* 10fe18b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe18b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe18bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe18be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe18c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10fe18c3:;
  /* 10fe18c3 mov esp, ebp */
  ESP = (EBP);
  /* 10fe18c5 pop ebp */
  EBP = (pop32());
  /* 10fe18c6 ret  */
  ESPCHK(0x10fe1850u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x10fe18d0 (53 bytes, 23 insns) */
void f_10fe18d0(void) {
  FTRACE(0x10fe18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe18d1 mov ebp, esp */
  EBP = (ESP);
L_10fe18d3:;
  /* 10fe18d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe18d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe18d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe18dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10fe18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe18e1 jle 0x10fe1903 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe1903;
  /* 10fe18e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe18e6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe18e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe18ea push eax */
  push32((uint32_t)(EAX));
  /* 10fe18eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe18ee push ecx */
  push32((uint32_t)(ECX));
  /* 10fe18ef call 0x10fe1850 */
  push32(0x10fe18f4u); f_10fe1850();
  /* 10fe18f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe18f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe18fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe18fd jne 0x10fe1901 */
  if (!C.zf) goto L_10fe1901;
  /* 10fe18ff jmp 0x10fe1903 */
  goto L_10fe1903;
L_10fe1901:;
  /* 10fe1901 jmp 0x10fe18d3 */
  goto L_10fe18d3;
L_10fe1903:;
  /* 10fe1903 pop ebp */
  EBP = (pop32());
  /* 10fe1904 ret  */
  ESPCHK(0x10fe18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011910 @ 0x10fe1910 (74 bytes, 31 insns) */
void f_10fe1910(void) {
  FTRACE(0x10fe1910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1910 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1911 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1913 push ecx */
  push32((uint32_t)(ECX));
L_10fe1914:;
  /* 10fe1914 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1917 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe191a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe191d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10fe1920 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1922 jle 0x10fe1956 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe1956;
  /* 10fe1924 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe1927 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe192b push eax */
  push32((uint32_t)(EAX));
  /* 10fe192c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe192f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe1932 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe1935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe1938 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe193c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe193f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe1942 call 0x10fe1850 */
  push32(0x10fe1947u); f_10fe1850();
  /* 10fe1947 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe194a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe194d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1950 jne 0x10fe1954 */
  if (!C.zf) goto L_10fe1954;
  /* 10fe1952 jmp 0x10fe1956 */
  goto L_10fe1956;
L_10fe1954:;
  /* 10fe1954 jmp 0x10fe1914 */
  goto L_10fe1914;
L_10fe1956:;
  /* 10fe1956 mov esp, ebp */
  ESP = (EBP);
  /* 10fe1958 pop ebp */
  EBP = (pop32());
  /* 10fe1959 ret  */
  ESPCHK(0x10fe1910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x10fe1960 (26 bytes, 12 insns) */
void f_10fe1960(void) {
  FTRACE(0x10fe1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1960 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1961 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe1968 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe196b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe196e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe1970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe1975 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10fe1978 pop ebp */
  EBP = (pop32());
  /* 10fe1979 ret  */
  ESPCHK(0x10fe1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x10fe1980 (31 bytes, 14 insns) */
void f_10fe1980(void) {
  FTRACE(0x10fe1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1980 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1981 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1986 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe1988 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe198b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe198e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe1990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1993 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe1995 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1998 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10fe199a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fe199d pop ebp */
  EBP = (pop32());
  /* 10fe199e ret  */
  ESPCHK(0x10fe1980u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x10fe19a0 (27 bytes, 12 insns) */
void f_10fe19a0(void) {
  FTRACE(0x10fe19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe19a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe19a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe19a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe19a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe19ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe19ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10fe19b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe19b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe19b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10fe19b9 pop ebp */
  EBP = (pop32());
  /* 10fe19ba ret  */
  ESPCHK(0x10fe19a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10fe19c0 (145 bytes, 42 insns) */
void f_10fe19c0(void) {
  FTRACE(0x10fe19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe19c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe19c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe19c4 call 0x10fe1a70 */
  push32(0x10fe19c9u); f_10fe1a70();
  /* 10fe19c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe19cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fe19ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe19d5 jmp 0x10fe19e0 */
  goto L_10fe19e0;
L_10fe19d7:;
  /* 10fe19d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe19da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe19dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe19e0:;
  /* 10fe19e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe19e4 jae 0x10fe1a0a */
  if (!C.cf) goto L_10fe1a0a;
  /* 10fe19e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe19e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe19ec cmp ecx, dword ptr [eax*8 + 0x11003fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11003fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe19f3 jne 0x10fe1a08 */
  if (!C.zf) goto L_10fe1a08;
  /* 10fe19f5 call 0x10fe1a60 */
  push32(0x10fe19fau); f_10fe1a60();
  /* 10fe19fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe19fd mov ecx, dword ptr [edx*8 + 0x11003fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11003fbc)));
  /* 10fe1a04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fe1a06 jmp 0x10fe1a4d */
  goto L_10fe1a4d;
L_10fe1a08:;
  /* 10fe1a08 jmp 0x10fe19d7 */
  goto L_10fe19d7;
L_10fe1a0a:;
  /* 10fe1a0a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a0e jb 0x10fe1a23 */
  if (C.cf) goto L_10fe1a23;
  /* 10fe1a10 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a14 ja 0x10fe1a23 */
  if ((!C.cf&&!C.zf)) goto L_10fe1a23;
  /* 10fe1a16 call 0x10fe1a60 */
  push32(0x10fe1a1bu); f_10fe1a60();
  /* 10fe1a1b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10fe1a21 jmp 0x10fe1a4d */
  goto L_10fe1a4d;
L_10fe1a23:;
  /* 10fe1a23 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a2a jb 0x10fe1a42 */
  if (C.cf) goto L_10fe1a42;
  /* 10fe1a2c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a33 ja 0x10fe1a42 */
  if ((!C.cf&&!C.zf)) goto L_10fe1a42;
  /* 10fe1a35 call 0x10fe1a60 */
  push32(0x10fe1a3au); f_10fe1a60();
  /* 10fe1a3a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10fe1a40 jmp 0x10fe1a4d */
  goto L_10fe1a4d;
L_10fe1a42:;
  /* 10fe1a42 call 0x10fe1a60 */
  push32(0x10fe1a47u); f_10fe1a60();
  /* 10fe1a47 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10fe1a4d:;
  /* 10fe1a4d mov esp, ebp */
  ESP = (EBP);
  /* 10fe1a4f pop ebp */
  EBP = (pop32());
  /* 10fe1a50 ret  */
  ESPCHK(0x10fe19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x10fe1a60 (13 bytes, 6 insns) */
void f_10fe1a60(void) {
  FTRACE(0x10fe1a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1a61 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1a63 call 0x10fd95d0 */
  push32(0x10fe1a68u); f_10fd95d0();
  /* 10fe1a68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1a6b pop ebp */
  EBP = (pop32());
  /* 10fe1a6c ret  */
  ESPCHK(0x10fe1a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x10fe1a70 (13 bytes, 6 insns) */
void f_10fe1a70(void) {
  FTRACE(0x10fe1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1a71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1a73 call 0x10fd95d0 */
  push32(0x10fe1a78u); f_10fd95d0();
  /* 10fe1a78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1a7b pop ebp */
  EBP = (pop32());
  /* 10fe1a7c ret  */
  ESPCHK(0x10fe1a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x10fe1a80 (664 bytes, 255 insns) [15 switch table(s)] */
void f_10fe1a80(void) {
  FTRACE(0x10fe1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1a81 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1a83 push edi */
  push32((uint32_t)(EDI));
  /* 10fe1a84 push esi */
  push32((uint32_t)(ESI));
  /* 10fe1a85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1a88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe1a8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1a8e mov eax, ecx */
  EAX = (ECX);
  /* 10fe1a90 mov edx, ecx */
  EDX = (ECX);
  /* 10fe1a92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1a94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a96 jbe 0x10fe1aa0 */
  if ((C.cf||C.zf)) goto L_10fe1aa0;
  /* 10fe1a98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1a9a jb 0x10fe1c18 */
  if (C.cf) goto L_10fe1c18;
L_10fe1aa0:;
  /* 10fe1aa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10fe1aa6 jne 0x10fe1abc */
  if (!C.zf) goto L_10fe1abc;
  /* 10fe1aa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1aab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1aae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1ab1 jb 0x10fe1adc */
  if (C.cf) goto L_10fe1adc;
  /* 10fe1ab3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1ab5 jmp dword ptr [edx*4 + 0x10fe1bc8] */
  switch (EDX) {
    case 0: goto L_10fe1bd8;
    case 1: goto L_10fe1be0;
    case 2: goto L_10fe1bec;
    case 3: goto L_10fe1c00;
    default: x86_unimpl("switch@0x10fe1ab5 out of table"); return;
  }
L_10fe1abc:;
  /* 10fe1abc mov eax, edi */
  EAX = (EDI);
  /* 10fe1abe mov edx, 3 */
  EDX = (0x3u);
  /* 10fe1ac3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1ac6 jb 0x10fe1ad4 */
  if (C.cf) goto L_10fe1ad4;
  /* 10fe1ac8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1acb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1acd jmp dword ptr [eax*4 + 0x10fe1ae0] */
  switch (EAX) {
    case 1: goto L_10fe1af0;
    case 2: goto L_10fe1b1c;
    case 3: goto L_10fe1b40;
    default: x86_unimpl("switch@0x10fe1acd out of table"); return;
  }
L_10fe1ad4:;
  /* 10fe1ad4 jmp dword ptr [ecx*4 + 0x10fe1bd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10fe1bd8)))); return;
  /* 10fe1adb nop  */
  /* nop */
L_10fe1adc:;
  /* 10fe1adc jmp dword ptr [ecx*4 + 0x10fe1b5c] */
  switch (ECX) {
    case 0: goto L_10fe1bbf;
    case 1: goto L_10fe1bac;
    case 2: goto L_10fe1ba4;
    case 3: goto L_10fe1b9c;
    case 4: goto L_10fe1b94;
    case 5: goto L_10fe1b8c;
    case 6: goto L_10fe1b84;
    case 7: goto L_10fe1b7c;
    default: x86_unimpl("switch@0x10fe1adc out of table"); return;
  }
  /* 10fe1ae3 nop  */
  /* nop */
L_10fe1af0:;
  /* 10fe1af0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1af2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1af4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1af6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1af9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1afc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1aff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1b02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1b05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1b08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1b0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1b0e jb 0x10fe1adc */
  if (C.cf) goto L_10fe1adc;
  /* 10fe1b10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1b12 jmp dword ptr [edx*4 + 0x10fe1bc8] */
  switch (EDX) {
    case 0: goto L_10fe1bd8;
    case 1: goto L_10fe1be0;
    case 2: goto L_10fe1bec;
    case 3: goto L_10fe1c00;
    default: x86_unimpl("switch@0x10fe1b12 out of table"); return;
  }
  /* 10fe1b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1b1c:;
  /* 10fe1b1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1b1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1b20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1b22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1b25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1b28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1b2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1b2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1b31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1b34 jb 0x10fe1adc */
  if (C.cf) goto L_10fe1adc;
  /* 10fe1b36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1b38 jmp dword ptr [edx*4 + 0x10fe1bc8] */
  switch (EDX) {
    case 0: goto L_10fe1bd8;
    case 1: goto L_10fe1be0;
    case 2: goto L_10fe1bec;
    case 3: goto L_10fe1c00;
    default: x86_unimpl("switch@0x10fe1b38 out of table"); return;
  }
  /* 10fe1b3f nop  */
  /* nop */
L_10fe1b40:;
  /* 10fe1b40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1b42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1b44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1b46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe1b47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1b4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10fe1b4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1b4e jb 0x10fe1adc */
  if (C.cf) goto L_10fe1adc;
  /* 10fe1b50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1b52 jmp dword ptr [edx*4 + 0x10fe1bc8] */
  switch (EDX) {
    case 0: goto L_10fe1bd8;
    case 1: goto L_10fe1be0;
    case 2: goto L_10fe1bec;
    case 3: goto L_10fe1c00;
    default: x86_unimpl("switch@0x10fe1b52 out of table"); return;
  }
  /* 10fe1b59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1b7c:;
  /* 10fe1b7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10fe1b80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10fe1b84:;
  /* 10fe1b84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10fe1b88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10fe1b8c:;
  /* 10fe1b8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10fe1b90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10fe1b94:;
  /* 10fe1b94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10fe1b98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10fe1b9c:;
  /* 10fe1b9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10fe1ba0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10fe1ba4:;
  /* 10fe1ba4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10fe1ba8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10fe1bac:;
  /* 10fe1bac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10fe1bb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10fe1bb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10fe1bbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1bbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10fe1bbf:;
  /* 10fe1bbf jmp dword ptr [edx*4 + 0x10fe1bc8] */
  switch (EDX) {
    case 0: goto L_10fe1bd8;
    case 1: goto L_10fe1be0;
    case 2: goto L_10fe1bec;
    case 3: goto L_10fe1c00;
    default: x86_unimpl("switch@0x10fe1bbf out of table"); return;
  }
  /* 10fe1bc6 mov edi, edi */
  EDI = (EDI);
L_10fe1bd8:;
  /* 10fe1bd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1bdb pop esi */
  ESI = (pop32());
  /* 10fe1bdc pop edi */
  EDI = (pop32());
  /* 10fe1bdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1bde ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1bdf nop  */
  /* nop */
L_10fe1be0:;
  /* 10fe1be0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1be2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1be7 pop esi */
  ESI = (pop32());
  /* 10fe1be8 pop edi */
  EDI = (pop32());
  /* 10fe1be9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1bea ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1beb nop  */
  /* nop */
L_10fe1bec:;
  /* 10fe1bec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1bee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1bf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1bf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1bf9 pop esi */
  ESI = (pop32());
  /* 10fe1bfa pop edi */
  EDI = (pop32());
  /* 10fe1bfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1bfc ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1bfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1c00:;
  /* 10fe1c00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe1c02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10fe1c04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1c07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1c0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1c0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1c13 pop esi */
  ESI = (pop32());
  /* 10fe1c14 pop edi */
  EDI = (pop32());
  /* 10fe1c15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1c16 ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1c17 nop  */
  /* nop */
L_10fe1c18:;
  /* 10fe1c18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10fe1c1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10fe1c20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10fe1c26 jne 0x10fe1c4c */
  if (!C.zf) goto L_10fe1c4c;
  /* 10fe1c28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1c2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1c2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1c31 jb 0x10fe1c40 */
  if (C.cf) goto L_10fe1c40;
  /* 10fe1c33 std  */
  C.df=1;
  /* 10fe1c34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1c36 cld  */
  C.df=0;
  /* 10fe1c37 jmp dword ptr [edx*4 + 0x10fe1d60] */
  switch (EDX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1c37 out of table"); return;
  }
  /* 10fe1c3e mov edi, edi */
  EDI = (EDI);
L_10fe1c40:;
  /* 10fe1c40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe1c42 jmp dword ptr [ecx*4 + 0x10fe1d10] */
  switch (ECX) {
    case 0: goto L_10fe1d57;
    default: x86_unimpl("switch@0x10fe1c42 out of table"); return;
  }
  /* 10fe1c49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1c4c:;
  /* 10fe1c4c mov eax, edi */
  EAX = (EDI);
  /* 10fe1c4e mov edx, 3 */
  EDX = (0x3u);
  /* 10fe1c53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1c56 jb 0x10fe1c64 */
  if (C.cf) goto L_10fe1c64;
  /* 10fe1c58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1c5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1c5d jmp dword ptr [eax*4 + 0x10fe1c68] */
  switch (EAX) {
    case 1: goto L_10fe1c78;
    case 2: goto L_10fe1c98;
    case 3: goto L_10fe1cc0;
    default: x86_unimpl("switch@0x10fe1c5d out of table"); return;
  }
L_10fe1c64:;
  /* 10fe1c64 jmp dword ptr [ecx*4 + 0x10fe1d60] */
  switch (ECX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1c64 out of table"); return;
  }
  /* 10fe1c6b nop  */
  /* nop */
L_10fe1c78:;
  /* 10fe1c78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1c7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1c7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1c80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10fe1c81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1c84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10fe1c85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1c88 jb 0x10fe1c40 */
  if (C.cf) goto L_10fe1c40;
  /* 10fe1c8a std  */
  C.df=1;
  /* 10fe1c8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1c8d cld  */
  C.df=0;
  /* 10fe1c8e jmp dword ptr [edx*4 + 0x10fe1d60] */
  switch (EDX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1c8e out of table"); return;
  }
  /* 10fe1c95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1c98:;
  /* 10fe1c98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1c9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1c9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1ca0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1ca3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1ca6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1ca9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1cac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1caf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1cb2 jb 0x10fe1c40 */
  if (C.cf) goto L_10fe1c40;
  /* 10fe1cb4 std  */
  C.df=1;
  /* 10fe1cb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1cb7 cld  */
  C.df=0;
  /* 10fe1cb8 jmp dword ptr [edx*4 + 0x10fe1d60] */
  switch (EDX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1cb8 out of table"); return;
  }
  /* 10fe1cbf nop  */
  /* nop */
L_10fe1cc0:;
  /* 10fe1cc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1cc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1cc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1cc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1ccb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1cce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1cd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10fe1cd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1cd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1cda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1cdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1ce0 jb 0x10fe1c40 */
  if (C.cf) goto L_10fe1c40;
  /* 10fe1ce6 std  */
  C.df=1;
  /* 10fe1ce7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10fe1ce9 cld  */
  C.df=0;
  /* 10fe1cea jmp dword ptr [edx*4 + 0x10fe1d60] */
  switch (EDX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1cea out of table"); return;
  }
  /* 10fe1cf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10fe1cf4 adc al, 0x1d */
  { uint32_t _a=(AL),_b=(0x1du),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe1cf7 adc byte ptr [ebx + 0x1d2410fe], bl */
  { uint32_t _a=(r8((uint32_t)(EBX*1 + 0x1d2410fe))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(EBX*1 + 0x1d2410fe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe1cff adc byte ptr [ebx + 0x1d3410fe], ch */
  { uint32_t _a=(r8((uint32_t)(EBX*1 + 0x1d3410fe))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX*1 + 0x1d3410fe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe1d07 adc byte ptr [ebx + 0x1d4410fe], bh */
  { uint32_t _a=(r8((uint32_t)(EBX*1 + 0x1d4410fe))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EBX*1 + 0x1d4410fe), (_r)); fl_add(_a,_b,_r,8); }
  /* 10fe1d14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10fe1d18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10fe1d1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10fe1d20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10fe1d24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10fe1d28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10fe1d2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10fe1d30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10fe1d34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10fe1d38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10fe1d3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10fe1d40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10fe1d44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10fe1d48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10fe1d4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10fe1d53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1d55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10fe1d57:;
  /* 10fe1d57 jmp dword ptr [edx*4 + 0x10fe1d60] */
  switch (EDX) {
    case 0: goto L_10fe1d70;
    case 1: goto L_10fe1d78;
    case 2: goto L_10fe1d88;
    case 3: goto L_10fe1d9c;
    default: x86_unimpl("switch@0x10fe1d57 out of table"); return;
  }
  /* 10fe1d5e mov edi, edi */
  EDI = (EDI);
L_10fe1d70:;
  /* 10fe1d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1d73 pop esi */
  ESI = (pop32());
  /* 10fe1d74 pop edi */
  EDI = (pop32());
  /* 10fe1d75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1d76 ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1d77 nop  */
  /* nop */
L_10fe1d78:;
  /* 10fe1d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1d7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1d7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1d81 pop esi */
  ESI = (pop32());
  /* 10fe1d82 pop edi */
  EDI = (pop32());
  /* 10fe1d83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1d84 ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1d85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe1d88:;
  /* 10fe1d88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1d8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1d8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1d91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1d97 pop esi */
  ESI = (pop32());
  /* 10fe1d98 pop edi */
  EDI = (pop32());
  /* 10fe1d99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1d9a ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
  /* 10fe1d9b nop  */
  /* nop */
L_10fe1d9c:;
  /* 10fe1d9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10fe1d9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10fe1da2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10fe1da5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10fe1da8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10fe1dab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10fe1dae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1db1 pop esi */
  ESI = (pop32());
  /* 10fe1db2 pop edi */
  EDI = (pop32());
  /* 10fe1db3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe1db4 ret  */
  ESPCHK(0x10fe1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x10fe1dc0 (421 bytes, 148 insns) */
void f_10fe1dc0(void) {
  FTRACE(0x10fe1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1dc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe1dc5 push 0x110015f8 */
  push32((uint32_t)(0x110015f8u));
  /* 10fe1dca push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe1dcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe1dd5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1dd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe1ddd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1de0 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe1de1 push esi */
  push32((uint32_t)(ESI));
  /* 10fe1de2 push edi */
  push32((uint32_t)(EDI));
  /* 10fe1de3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe1de6 cmp dword ptr [0x110059ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1ded jne 0x10fe1e3e */
  if (!C.zf) goto L_10fe1e3e;
  /* 10fe1def lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10fe1df2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1df5 push 0x110015f4 */
  push32((uint32_t)(0x110015f4u));
  /* 10fe1dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1dfc call dword ptr [0x1100831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100831c))), 0x10fe1e02u);
  /* 10fe1e02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1e04 je 0x10fe1e12 */
  if (C.zf) goto L_10fe1e12;
  /* 10fe1e06 mov dword ptr [0x110059ac], 1 */
  w32((uint32_t)(0x110059ac), (0x1u));
  /* 10fe1e10 jmp 0x10fe1e3e */
  goto L_10fe1e3e;
L_10fe1e12:;
  /* 10fe1e12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10fe1e15 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1e18 push 0x110015f0 */
  push32((uint32_t)(0x110015f0u));
  /* 10fe1e1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1e21 call dword ptr [0x11008320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008320))), 0x10fe1e27u);
  /* 10fe1e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1e29 je 0x10fe1e37 */
  if (C.zf) goto L_10fe1e37;
  /* 10fe1e2b mov dword ptr [0x110059ac], 2 */
  w32((uint32_t)(0x110059ac), (0x2u));
  /* 10fe1e35 jmp 0x10fe1e3e */
  goto L_10fe1e3e;
L_10fe1e37:;
  /* 10fe1e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1e39 jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1e3e:;
  /* 10fe1e3e cmp dword ptr [0x110059ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110059ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1e45 jne 0x10fe1e75 */
  if (!C.zf) goto L_10fe1e75;
  /* 10fe1e47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1e4b jne 0x10fe1e56 */
  if (!C.zf) goto L_10fe1e56;
  /* 10fe1e4d mov edx, dword ptr [0x110059b8] */
  EDX = (r32((uint32_t)(0x110059b8)));
  /* 10fe1e53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10fe1e56:;
  /* 10fe1e56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe1e59 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1e5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe1e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1e5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1e61 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1e62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1e65 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1e66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe1e69 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1e6a call dword ptr [0x11008320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008320))), 0x10fe1e70u);
  /* 10fe1e70 jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1e75:;
  /* 10fe1e75 cmp dword ptr [0x110059ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110059ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1e7c jne 0x10fe1f66 */
  if (!C.zf) goto L_10fe1f66;
  /* 10fe1e82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1e86 jne 0x10fe1e91 */
  if (!C.zf) goto L_10fe1e91;
  /* 10fe1e88 mov edx, dword ptr [0x110059c8] */
  EDX = (r32((uint32_t)(0x110059c8)));
  /* 10fe1e8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10fe1e91:;
  /* 10fe1e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1e95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe1e98 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1e9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe1ea0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe1ea2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe1ea4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe1ea7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1eaa push edx */
  push32((uint32_t)(EDX));
  /* 10fe1eab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe1eae push eax */
  push32((uint32_t)(EAX));
  /* 10fe1eaf call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe1eb5u);
  /* 10fe1eb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe1eb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1ebc jne 0x10fe1ec5 */
  if (!C.zf) goto L_10fe1ec5;
  /* 10fe1ebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1ec0 jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1ec5:;
  /* 10fe1ec5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe1ecc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1ecf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe1ed1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1ed4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe1ed6 call 0x10fdcd30 */
  push32(0x10fe1edbu); f_10fdcd30();
  /* 10fe1edb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10fe1ede mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe1ee1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe1ee4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe1ee7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1eea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10fe1eec push edx */
  push32((uint32_t)(EDX));
  /* 10fe1eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1eef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe1ef2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1ef3 call 0x10fdd900 */
  push32(0x10fe1ef8u); f_10fdd900();
  /* 10fe1ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1efb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe1f02 jmp 0x10fe1f1b */
  goto L_10fe1f1b;
  /* 10fe1f04 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe1f09 ret  */
  ESPCHK(0x10fe1dc0u, _esp0);
  ESP += 4; return;
  /* 10fe1f0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe1f0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fe1f14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe1f1b:;
  /* 10fe1f1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1f1f jne 0x10fe1f25 */
  if (!C.zf) goto L_10fe1f25;
  /* 10fe1f21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1f23 jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1f25:;
  /* 10fe1f25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe1f28 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1f29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe1f2c push edx */
  push32((uint32_t)(EDX));
  /* 10fe1f2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe1f30 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1f31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe1f34 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1f37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe1f3a push edx */
  push32((uint32_t)(EDX));
  /* 10fe1f3b call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe1f41u);
  /* 10fe1f41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe1f44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1f48 jne 0x10fe1f4e */
  if (!C.zf) goto L_10fe1f4e;
  /* 10fe1f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe1f4c jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1f4e:;
  /* 10fe1f4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe1f51 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1f52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe1f55 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe1f56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe1f59 push edx */
  push32((uint32_t)(EDX));
  /* 10fe1f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe1f5d push eax */
  push32((uint32_t)(EAX));
  /* 10fe1f5e call dword ptr [0x1100831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100831c))), 0x10fe1f64u);
  /* 10fe1f64 jmp 0x10fe1f68 */
  goto L_10fe1f68;
L_10fe1f66:;
  /* 10fe1f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe1f68:;
  /* 10fe1f68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10fe1f6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe1f6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe1f75 pop edi */
  EDI = (pop32());
  /* 10fe1f76 pop esi */
  ESI = (pop32());
  /* 10fe1f77 pop ebx */
  EBX = (pop32());
  /* 10fe1f78 mov esp, ebp */
  ESP = (EBP);
  /* 10fe1f7a pop ebp */
  EBP = (pop32());
  /* 10fe1f7b ret  */
  ESPCHK(0x10fe1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x10fe1f80 (727 bytes, 263 insns) */
void f_10fe1f80(void) {
  FTRACE(0x10fe1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe1f81 mov ebp, esp */
  EBP = (ESP);
  /* 10fe1f83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10fe1f85 push 0x11001608 */
  push32((uint32_t)(0x11001608u));
  /* 10fe1f8a push 0x10fe2c98 */
  push32((uint32_t)(0x10fe2c98u));
  /* 10fe1f8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10fe1f95 push eax */
  push32((uint32_t)(EAX));
  /* 10fe1f96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10fe1f9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe1fa0 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe1fa1 push esi */
  push32((uint32_t)(ESI));
  /* 10fe1fa2 push edi */
  push32((uint32_t)(EDI));
  /* 10fe1fa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe1fa6 cmp dword ptr [0x110059d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe1fad jne 0x10fe2006 */
  if (!C.zf) goto L_10fe2006;
  /* 10fe1faf push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1fb5 push 0x110015f4 */
  push32((uint32_t)(0x110015f4u));
  /* 10fe1fba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe1fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fc1 call dword ptr [0x11008314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008314))), 0x10fe1fc7u);
  /* 10fe1fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1fc9 je 0x10fe1fd7 */
  if (C.zf) goto L_10fe1fd7;
  /* 10fe1fcb mov dword ptr [0x110059d0], 1 */
  w32((uint32_t)(0x110059d0), (0x1u));
  /* 10fe1fd5 jmp 0x10fe2006 */
  goto L_10fe2006;
L_10fe1fd7:;
  /* 10fe1fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe1fdd push 0x110015f0 */
  push32((uint32_t)(0x110015f0u));
  /* 10fe1fe2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe1fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe1fe9 call dword ptr [0x11008318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008318))), 0x10fe1fefu);
  /* 10fe1fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe1ff1 je 0x10fe1fff */
  if (C.zf) goto L_10fe1fff;
  /* 10fe1ff3 mov dword ptr [0x110059d0], 2 */
  w32((uint32_t)(0x110059d0), (0x2u));
  /* 10fe1ffd jmp 0x10fe2006 */
  goto L_10fe2006;
L_10fe1fff:;
  /* 10fe1fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2001 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe2006:;
  /* 10fe2006 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe200a jle 0x10fe201f */
  if ((C.zf||C.sf!=C.of)) goto L_10fe201f;
  /* 10fe200c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe200f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2010 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe2013 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2014 call 0x10fe2290 */
  push32(0x10fe2019u); f_10fe2290();
  /* 10fe2019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe201c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10fe201f:;
  /* 10fe201f cmp dword ptr [0x110059d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x110059d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2026 jne 0x10fe204b */
  if (!C.zf) goto L_10fe204b;
  /* 10fe2028 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe202b push edx */
  push32((uint32_t)(EDX));
  /* 10fe202c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe202f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2030 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe2033 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2034 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe2037 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2038 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe203b push eax */
  push32((uint32_t)(EAX));
  /* 10fe203c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe203f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2040 call dword ptr [0x11008318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008318))), 0x10fe2046u);
  /* 10fe2046 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe204b:;
  /* 10fe204b cmp dword ptr [0x110059d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110059d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2052 jne 0x10fe226f */
  if (!C.zf) goto L_10fe226f;
  /* 10fe2058 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe205c jne 0x10fe2067 */
  if (!C.zf) goto L_10fe2067;
  /* 10fe205e mov edx, dword ptr [0x110059c8] */
  EDX = (r32((uint32_t)(0x110059c8)));
  /* 10fe2064 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10fe2067:;
  /* 10fe2067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2069 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe206b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe206e push eax */
  push32((uint32_t)(EAX));
  /* 10fe206f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe2072 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2073 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10fe2076 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe2078 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe207a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe207d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2080 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2081 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe2084 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2085 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe208bu);
  /* 10fe208b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe208e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2092 jne 0x10fe209b */
  if (!C.zf) goto L_10fe209b;
  /* 10fe2094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2096 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe209b:;
  /* 10fe209b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe20a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe20a5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe20a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe20aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe20ac call 0x10fdcd30 */
  push32(0x10fe20b1u); f_10fdcd30();
  /* 10fe20b1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10fe20b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe20b7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe20ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe20bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe20c4 jmp 0x10fe20dd */
  goto L_10fe20dd;
  /* 10fe20c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe20cb ret  */
  ESPCHK(0x10fe1f80u, _esp0);
  ESP += 4; return;
  /* 10fe20cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe20cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fe20d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe20dd:;
  /* 10fe20dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe20e1 jne 0x10fe20ea */
  if (!C.zf) goto L_10fe20ea;
  /* 10fe20e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe20e5 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe20ea:;
  /* 10fe20ea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe20ed push edx */
  push32((uint32_t)(EDX));
  /* 10fe20ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe20f1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe20f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe20f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe20f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe20f9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe20fa push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe20fc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe20ff push eax */
  push32((uint32_t)(EAX));
  /* 10fe2100 call dword ptr [0x11008324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008324))), 0x10fe2106u);
  /* 10fe2106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe2108 jne 0x10fe2111 */
  if (!C.zf) goto L_10fe2111;
  /* 10fe210a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe210c jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe2111:;
  /* 10fe2111 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2115 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe2118 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2119 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe211c push edx */
  push32((uint32_t)(EDX));
  /* 10fe211d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2120 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2124 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2125 call dword ptr [0x11008314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008314))), 0x10fe212bu);
  /* 10fe212b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe212e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2132 jne 0x10fe213b */
  if (!C.zf) goto L_10fe213b;
  /* 10fe2134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2136 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe213b:;
  /* 10fe213b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe213e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe2146 je 0x10fe218b */
  if (C.zf) goto L_10fe218b;
  /* 10fe2148 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe214c je 0x10fe2186 */
  if (C.zf) goto L_10fe2186;
  /* 10fe214e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe2151 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2154 jle 0x10fe215d */
  if ((C.zf||C.sf!=C.of)) goto L_10fe215d;
  /* 10fe2156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2158 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe215d:;
  /* 10fe215d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe2160 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2161 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe2164 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2165 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe2168 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2169 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe216c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe216d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2170 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2174 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2175 call dword ptr [0x11008314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008314))), 0x10fe217bu);
  /* 10fe217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe217d jne 0x10fe2186 */
  if (!C.zf) goto L_10fe2186;
  /* 10fe217f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2181 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe2186:;
  /* 10fe2186 jmp 0x10fe226a */
  goto L_10fe226a;
L_10fe218b:;
  /* 10fe218b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe218e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fe2191 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe2198 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe219b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe219d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe21a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fe21a2 call 0x10fdcd30 */
  push32(0x10fe21a7u); f_10fdcd30();
  /* 10fe21a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10fe21aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fe21ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fe21b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fe21b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe21ba jmp 0x10fe21d3 */
  goto L_10fe21d3;
  /* 10fe21bc mov eax, 1 */
  EAX = (0x1u);
  /* 10fe21c1 ret  */
  ESPCHK(0x10fe1f80u, _esp0);
  ESP += 4; return;
  /* 10fe21c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe21c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fe21cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe21d3:;
  /* 10fe21d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe21d7 jne 0x10fe21e0 */
  if (!C.zf) goto L_10fe21e0;
  /* 10fe21d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe21db jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe21e0:;
  /* 10fe21e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe21e3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe21e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe21e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe21e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe21eb push edx */
  push32((uint32_t)(EDX));
  /* 10fe21ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe21ef push eax */
  push32((uint32_t)(EAX));
  /* 10fe21f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe21f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe21f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe21f7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe21f8 call dword ptr [0x11008314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008314))), 0x10fe21feu);
  /* 10fe21fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe2200 jne 0x10fe2206 */
  if (!C.zf) goto L_10fe2206;
  /* 10fe2202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2204 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe2206:;
  /* 10fe2206 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe220a jne 0x10fe223a */
  if (!C.zf) goto L_10fe223a;
  /* 10fe220c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe220e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2210 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2212 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2214 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe2217 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2218 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe221b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe221c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe2221 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe2224 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2225 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe222bu);
  /* 10fe222b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe222e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2232 jne 0x10fe2238 */
  if (!C.zf) goto L_10fe2238;
  /* 10fe2234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2236 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe2238:;
  /* 10fe2238 jmp 0x10fe226a */
  goto L_10fe226a;
L_10fe223a:;
  /* 10fe223a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe223c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe223e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fe2241 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2242 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fe2245 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2246 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe2249 push edx */
  push32((uint32_t)(EDX));
  /* 10fe224a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe224d push eax */
  push32((uint32_t)(EAX));
  /* 10fe224e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe2253 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fe2256 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2257 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe225du);
  /* 10fe225d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe2260 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2264 jne 0x10fe226a */
  if (!C.zf) goto L_10fe226a;
  /* 10fe2266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2268 jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe226a:;
  /* 10fe226a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe226d jmp 0x10fe2271 */
  goto L_10fe2271;
L_10fe226f:;
  /* 10fe226f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe2271:;
  /* 10fe2271 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10fe2274 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe2277 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fe227e pop edi */
  EDI = (pop32());
  /* 10fe227f pop esi */
  ESI = (pop32());
  /* 10fe2280 pop ebx */
  EBX = (pop32());
  /* 10fe2281 mov esp, ebp */
  ESP = (EBP);
  /* 10fe2283 pop ebp */
  EBP = (pop32());
  /* 10fe2284 ret  */
  ESPCHK(0x10fe1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x10fe2290 (80 bytes, 32 insns) */
void f_10fe2290(void) {
  FTRACE(0x10fe2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2290 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2291 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2296 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2299 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe229c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe229f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe22a2:;
  /* 10fe22a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe22a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe22a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe22ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe22ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe22b0 je 0x10fe22c7 */
  if (C.zf) goto L_10fe22c7;
  /* 10fe22b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe22b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe22b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe22ba je 0x10fe22c7 */
  if (C.zf) goto L_10fe22c7;
  /* 10fe22bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe22bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe22c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe22c5 jmp 0x10fe22a2 */
  goto L_10fe22a2;
L_10fe22c7:;
  /* 10fe22c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe22ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe22cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe22cf jne 0x10fe22d9 */
  if (!C.zf) goto L_10fe22d9;
  /* 10fe22d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe22d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe22d7 jmp 0x10fe22dc */
  goto L_10fe22dc;
L_10fe22d9:;
  /* 10fe22d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10fe22dc:;
  /* 10fe22dc mov esp, ebp */
  ESP = (EBP);
  /* 10fe22de pop ebp */
  EBP = (pop32());
  /* 10fe22df ret  */
  ESPCHK(0x10fe2290u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x10fe22e0 (130 bytes, 43 insns) */
void f_10fe22e0(void) {
  FTRACE(0x10fe22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe22e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe22e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe22e7 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe22ed jae 0x10fe2311 */
  if (!C.cf) goto L_10fe2311;
  /* 10fe22ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe22f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe22f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe22f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe22fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe22fe mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2305 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe230a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe230d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe230f jne 0x10fe232c */
  if (!C.zf) goto L_10fe232c;
L_10fe2311:;
  /* 10fe2311 call 0x10fe1a60 */
  push32(0x10fe2316u); f_10fe1a60();
  /* 10fe2316 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe231c call 0x10fe1a70 */
  push32(0x10fe2321u); f_10fe1a70();
  /* 10fe2321 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe2327 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe232a jmp 0x10fe235e */
  goto L_10fe235e;
L_10fe232c:;
  /* 10fe232c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe232f push edx */
  push32((uint32_t)(EDX));
  /* 10fe2330 call 0x10fe3280 */
  push32(0x10fe2335u); f_10fe3280();
  /* 10fe2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe233b push eax */
  push32((uint32_t)(EAX));
  /* 10fe233c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe233f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2343 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2344 call 0x10fe2370 */
  push32(0x10fe2349u); f_10fe2370();
  /* 10fe2349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe234c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe234f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2352 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2353 call 0x10fe3310 */
  push32(0x10fe2358u); f_10fe3310();
  /* 10fe2358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe235b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe235e:;
  /* 10fe235e mov esp, ebp */
  ESP = (EBP);
  /* 10fe2360 pop ebp */
  EBP = (pop32());
  /* 10fe2361 ret  */
  ESPCHK(0x10fe22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x10fe2370 (178 bytes, 56 insns) */
void f_10fe2370(void) {
  FTRACE(0x10fe2370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2370 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2371 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2379 push eax */
  push32((uint32_t)(EAX));
  /* 10fe237a call 0x10fe3100 */
  push32(0x10fe237fu); f_10fe3100();
  /* 10fe237f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe2385 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2389 jne 0x10fe239e */
  if (!C.zf) goto L_10fe239e;
  /* 10fe238b call 0x10fe1a60 */
  push32(0x10fe2390u); f_10fe1a60();
  /* 10fe2390 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe2396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2399 jmp 0x10fe241e */
  goto L_10fe241e;
L_10fe239e:;
  /* 10fe239e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe23a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe23a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe23a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe23a7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe23a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe23ab push eax */
  push32((uint32_t)(EAX));
  /* 10fe23ac call dword ptr [0x11008310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008310))), 0x10fe23b2u);
  /* 10fe23b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe23b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe23b9 jne 0x10fe23c6 */
  if (!C.zf) goto L_10fe23c6;
  /* 10fe23bb call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe23c1u);
  /* 10fe23c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe23c4 jmp 0x10fe23cd */
  goto L_10fe23cd;
L_10fe23c6:;
  /* 10fe23c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fe23cd:;
  /* 10fe23cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe23d1 je 0x10fe23e4 */
  if (C.zf) goto L_10fe23e4;
  /* 10fe23d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe23d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe23d7 call 0x10fe19c0 */
  push32(0x10fe23dcu); f_10fe19c0();
  /* 10fe23dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe23df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe23e2 jmp 0x10fe241e */
  goto L_10fe241e;
L_10fe23e4:;
  /* 10fe23e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe23e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fe23ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe23ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe23f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe23f3 mov ecx, dword ptr [edx*4 + 0x110071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe23fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10fe23fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10fe2401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2404 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe2407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe240a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe240d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2410 mov eax, dword ptr [eax*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe2417 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10fe241b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe241e:;
  /* 10fe241e mov esp, ebp */
  ESP = (EBP);
  /* 10fe2420 pop ebp */
  EBP = (pop32());
  /* 10fe2421 ret  */
  ESPCHK(0x10fe2370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x10fe2430 (130 bytes, 43 insns) */
void f_10fe2430(void) {
  FTRACE(0x10fe2430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2430 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2431 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2433 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2437 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe243d jae 0x10fe2461 */
  if (!C.cf) goto L_10fe2461;
  /* 10fe243f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2442 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2448 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe244b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe244e mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2455 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe245a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe245d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe245f jne 0x10fe247c */
  if (!C.zf) goto L_10fe247c;
L_10fe2461:;
  /* 10fe2461 call 0x10fe1a60 */
  push32(0x10fe2466u); f_10fe1a60();
  /* 10fe2466 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe246c call 0x10fe1a70 */
  push32(0x10fe2471u); f_10fe1a70();
  /* 10fe2471 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe2477 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe247a jmp 0x10fe24ae */
  goto L_10fe24ae;
L_10fe247c:;
  /* 10fe247c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe247f push edx */
  push32((uint32_t)(EDX));
  /* 10fe2480 call 0x10fe3280 */
  push32(0x10fe2485u); f_10fe3280();
  /* 10fe2485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2488 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe248b push eax */
  push32((uint32_t)(EAX));
  /* 10fe248c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe248f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2493 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2494 call 0x10fe24c0 */
  push32(0x10fe2499u); f_10fe24c0();
  /* 10fe2499 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe249c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe249f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe24a2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe24a3 call 0x10fe3310 */
  push32(0x10fe24a8u); f_10fe3310();
  /* 10fe24a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe24ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe24ae:;
  /* 10fe24ae mov esp, ebp */
  ESP = (EBP);
  /* 10fe24b0 pop ebp */
  EBP = (pop32());
  /* 10fe24b1 ret  */
  ESPCHK(0x10fe2430u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x10fe24c0 (627 bytes, 182 insns) */
void f_10fe24c0(void) {
  FTRACE(0x10fe24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe24c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe24c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe24c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe24d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe24d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10fe24d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe24dd jne 0x10fe24e6 */
  if (!C.zf) goto L_10fe24e6;
  /* 10fe24df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe24e1 jmp 0x10fe272f */
  goto L_10fe272f;
L_10fe24e6:;
  /* 10fe24e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe24e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe24ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe24ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe24f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe24f5 mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe24fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe2501 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe2504 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe2506 je 0x10fe2518 */
  if (C.zf) goto L_10fe2518;
  /* 10fe2508 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe250a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe250c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe250f push edx */
  push32((uint32_t)(EDX));
  /* 10fe2510 call 0x10fe2370 */
  push32(0x10fe2515u); f_10fe2370();
  /* 10fe2515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe2518:;
  /* 10fe2518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe251b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe251e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2521 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe2524 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2527 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe252e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fe2533 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe253a je 0x10fe264c */
  if (C.zf) goto L_10fe264c;
  /* 10fe2540 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2543 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe2546 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10fe254d:;
  /* 10fe254d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2550 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2553 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2556 jae 0x10fe264a */
  if (!C.cf) goto L_10fe264a;
  /* 10fe255c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10fe2562 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe2565:;
  /* 10fe2565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe2568 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10fe256e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2570 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2576 jge 0x10fe25d7 */
  if ((C.sf==C.of)) goto L_10fe25d7;
  /* 10fe2578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe257b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe257e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2581 jae 0x10fe25d7 */
  if (!C.cf) goto L_10fe25d7;
  /* 10fe2583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2586 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe2588 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10fe258e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2591 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2594 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe2597 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10fe259e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe25a1 jne 0x10fe25c1 */
  if (!C.zf) goto L_10fe25c1;
  /* 10fe25a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10fe25a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe25ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10fe25b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe25b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10fe25b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe25bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe25be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fe25c1:;
  /* 10fe25c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe25c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10fe25ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10fe25cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe25cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe25d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe25d5 jmp 0x10fe2565 */
  goto L_10fe2565;
L_10fe25d7:;
  /* 10fe25d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe25d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10fe25df push edx */
  push32((uint32_t)(EDX));
  /* 10fe25e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe25e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10fe25e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe25eb push eax */
  push32((uint32_t)(EAX));
  /* 10fe25ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10fe25f2 push edx */
  push32((uint32_t)(EDX));
  /* 10fe25f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe25f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe25f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe25fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe25ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2602 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe2609 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10fe260c push eax */
  push32((uint32_t)(EAX));
  /* 10fe260d call dword ptr [0x11008390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008390))), 0x10fe2613u);
  /* 10fe2613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe2615 je 0x10fe263a */
  if (C.zf) goto L_10fe263a;
  /* 10fe2617 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe261a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2620 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fe2623 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe2626 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10fe262c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe262e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2634 jge 0x10fe2638 */
  if ((C.sf==C.of)) goto L_10fe2638;
  /* 10fe2636 jmp 0x10fe264a */
  goto L_10fe264a;
L_10fe2638:;
  /* 10fe2638 jmp 0x10fe2645 */
  goto L_10fe2645;
L_10fe263a:;
  /* 10fe263a call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe2640u);
  /* 10fe2640 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe2643 jmp 0x10fe264a */
  goto L_10fe264a;
L_10fe2645:;
  /* 10fe2645 jmp 0x10fe254d */
  goto L_10fe254d;
L_10fe264a:;
  /* 10fe264a jmp 0x10fe269c */
  goto L_10fe269c;
L_10fe264c:;
  /* 10fe264c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe264e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10fe2654 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2655 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe2658 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe265c push eax */
  push32((uint32_t)(EAX));
  /* 10fe265d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2660 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2666 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2669 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe266c mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2673 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10fe2676 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2677 call dword ptr [0x11008390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008390))), 0x10fe267du);
  /* 10fe267d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe267f je 0x10fe2693 */
  if (C.zf) goto L_10fe2693;
  /* 10fe2681 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe2688 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10fe268e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fe2691 jmp 0x10fe269c */
  goto L_10fe269c;
L_10fe2693:;
  /* 10fe2693 call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe2699u);
  /* 10fe2699 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe269c:;
  /* 10fe269c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe26a0 jne 0x10fe2726 */
  if (!C.zf) goto L_10fe2726;
  /* 10fe26a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe26aa je 0x10fe26da */
  if (C.zf) goto L_10fe26da;
  /* 10fe26ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe26b0 jne 0x10fe26c9 */
  if (!C.zf) goto L_10fe26c9;
  /* 10fe26b2 call 0x10fe1a60 */
  push32(0x10fe26b7u); f_10fe1a60();
  /* 10fe26b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe26bd call 0x10fe1a70 */
  push32(0x10fe26c2u); f_10fe1a70();
  /* 10fe26c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe26c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fe26c7 jmp 0x10fe26d5 */
  goto L_10fe26d5;
L_10fe26c9:;
  /* 10fe26c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe26cc push edx */
  push32((uint32_t)(EDX));
  /* 10fe26cd call 0x10fe19c0 */
  push32(0x10fe26d2u); f_10fe19c0();
  /* 10fe26d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe26d5:;
  /* 10fe26d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe26d8 jmp 0x10fe272f */
  goto L_10fe272f;
L_10fe26da:;
  /* 10fe26da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe26dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe26e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe26e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe26e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe26e9 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe26f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fe26f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe26f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe26fa je 0x10fe270b */
  if (C.zf) goto L_10fe270b;
  /* 10fe26fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe26ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe2702 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2705 jne 0x10fe270b */
  if (!C.zf) goto L_10fe270b;
  /* 10fe2707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2709 jmp 0x10fe272f */
  goto L_10fe272f;
L_10fe270b:;
  /* 10fe270b call 0x10fe1a60 */
  push32(0x10fe2710u); f_10fe1a60();
  /* 10fe2710 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10fe2716 call 0x10fe1a70 */
  push32(0x10fe271bu); f_10fe1a70();
  /* 10fe271b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe2721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2724 jmp 0x10fe272f */
  goto L_10fe272f;
L_10fe2726:;
  /* 10fe2726 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe2729 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fe272f:;
  /* 10fe272f mov esp, ebp */
  ESP = (EBP);
  /* 10fe2731 pop ebp */
  EBP = (pop32());
  /* 10fe2732 ret  */
  ESPCHK(0x10fe24c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x10fe2740 (199 bytes, 68 insns) */
void f_10fe2740(void) {
  FTRACE(0x10fe2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2740 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2741 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2743 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2744 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe2745 push esi */
  push32((uint32_t)(ESI));
  /* 10fe2746 push edi */
  push32((uint32_t)(EDI));
L_10fe2747:;
  /* 10fe2747 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe274b jne 0x10fe276b */
  if (!C.zf) goto L_10fe276b;
  /* 10fe274d push 0x11001554 */
  push32((uint32_t)(0x11001554u));
  /* 10fe2752 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2754 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10fe2756 push 0x11001620 */
  push32((uint32_t)(0x11001620u));
  /* 10fe275b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe275d call 0x10fd8c50 */
  push32(0x10fe2762u); f_10fd8c50();
  /* 10fe2762 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2765 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2768 jne 0x10fe276b */
  if (!C.zf) goto L_10fe276b;
  /* 10fe276a int3  */
  x86_unimpl("int3 @ 0x10fe276a");
L_10fe276b:;
  /* 10fe276b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe276d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe276f jne 0x10fe2747 */
  if (!C.zf) goto L_10fe2747;
  /* 10fe2771 mov ecx, dword ptr [0x110059d4] */
  ECX = (r32((uint32_t)(0x110059d4)));
  /* 10fe2777 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe277a mov dword ptr [0x110059d4], ecx */
  w32((uint32_t)(0x110059d4), (ECX));
  /* 10fe2780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2783 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe2786 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10fe2788 push 0x11001620 */
  push32((uint32_t)(0x11001620u));
  /* 10fe278d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe278f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10fe2794 call 0x10fd9b90 */
  push32(0x10fe2799u); f_10fd9b90();
  /* 10fe2799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe279c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe279f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10fe27a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe27a9 je 0x10fe27c6 */
  if (C.zf) goto L_10fe27c6;
  /* 10fe27ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe27b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe27b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10fe27ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10fe27c4 jmp 0x10fe27eb */
  goto L_10fe27eb;
L_10fe27c6:;
  /* 10fe27c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe27cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe27cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe27d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe27db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fe27e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10fe27eb:;
  /* 10fe27eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe27f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe27f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe27f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10fe2800 pop edi */
  EDI = (pop32());
  /* 10fe2801 pop esi */
  ESI = (pop32());
  /* 10fe2802 pop ebx */
  EBX = (pop32());
  /* 10fe2803 mov esp, ebp */
  ESP = (EBP);
  /* 10fe2805 pop ebp */
  EBP = (pop32());
  /* 10fe2806 ret  */
  ESPCHK(0x10fe2740u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10fe2810 (50 bytes, 17 insns) */
void f_10fe2810(void) {
  FTRACE(0x10fe2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2810 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2811 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2816 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe281c jb 0x10fe2822 */
  if (C.cf) goto L_10fe2822;
  /* 10fe281e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2820 jmp 0x10fe2840 */
  goto L_10fe2840;
L_10fe2822:;
  /* 10fe2822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2825 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe282b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe282e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2831 mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2838 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe283d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10fe2840:;
  /* 10fe2840 pop ebp */
  EBP = (pop32());
  /* 10fe2841 ret  */
  ESPCHK(0x10fe2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x10fe2850 (300 bytes, 80 insns) */
void f_10fe2850(void) {
  FTRACE(0x10fe2850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2850 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2851 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2853 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2854 cmp dword ptr [0x11006ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11006ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe285b jne 0x10fe2869 */
  if (!C.zf) goto L_10fe2869;
  /* 10fe285d mov dword ptr [0x11006ea0], 0x200 */
  w32((uint32_t)(0x11006ea0), (0x200u));
  /* 10fe2867 jmp 0x10fe287c */
  goto L_10fe287c;
L_10fe2869:;
  /* 10fe2869 cmp dword ptr [0x11006ea0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11006ea0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2870 jge 0x10fe287c */
  if ((C.sf==C.of)) goto L_10fe287c;
  /* 10fe2872 mov dword ptr [0x11006ea0], 0x14 */
  w32((uint32_t)(0x11006ea0), (0x14u));
L_10fe287c:;
  /* 10fe287c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10fe2881 push 0x1100162c */
  push32((uint32_t)(0x1100162cu));
  /* 10fe2886 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe2888 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe288a mov eax, dword ptr [0x11006ea0] */
  EAX = (r32((uint32_t)(0x11006ea0)));
  /* 10fe288f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2890 call 0x10fd9fa0 */
  push32(0x10fe2895u); f_10fd9fa0();
  /* 10fe2895 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2898 mov dword ptr [0x11005b48], eax */
  w32((uint32_t)(0x11005b48), (EAX));
  /* 10fe289d cmp dword ptr [0x11005b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe28a4 jne 0x10fe28e5 */
  if (!C.zf) goto L_10fe28e5;
  /* 10fe28a6 mov dword ptr [0x11006ea0], 0x14 */
  w32((uint32_t)(0x11006ea0), (0x14u));
  /* 10fe28b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10fe28b5 push 0x1100162c */
  push32((uint32_t)(0x1100162cu));
  /* 10fe28ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe28bc push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe28be mov ecx, dword ptr [0x11006ea0] */
  ECX = (r32((uint32_t)(0x11006ea0)));
  /* 10fe28c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe28c5 call 0x10fd9fa0 */
  push32(0x10fe28cau); f_10fd9fa0();
  /* 10fe28ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe28cd mov dword ptr [0x11005b48], eax */
  w32((uint32_t)(0x11005b48), (EAX));
  /* 10fe28d2 cmp dword ptr [0x11005b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe28d9 jne 0x10fe28e5 */
  if (!C.zf) goto L_10fe28e5;
  /* 10fe28db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10fe28dd call 0x10fd8b00 */
  push32(0x10fe28e2u); f_10fd8b00();
  /* 10fe28e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe28e5:;
  /* 10fe28e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe28ec jmp 0x10fe28f7 */
  goto L_10fe28f7;
L_10fe28ee:;
  /* 10fe28ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe28f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe28f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe28f7:;
  /* 10fe28f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe28fb jge 0x10fe2916 */
  if ((C.sf==C.of)) goto L_10fe2916;
  /* 10fe28fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2900 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe2903 add eax, 0x11004120 */
  { uint32_t _a=(EAX),_b=(0x11004120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe290b mov edx, dword ptr [0x11005b48] */
  EDX = (r32((uint32_t)(0x11005b48)));
  /* 10fe2911 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10fe2914 jmp 0x10fe28ee */
  goto L_10fe28ee;
L_10fe2916:;
  /* 10fe2916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe291d jmp 0x10fe2928 */
  goto L_10fe2928;
L_10fe291f:;
  /* 10fe291f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2922 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2925 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe2928:;
  /* 10fe2928 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe292c jge 0x10fe2978 */
  if ((C.sf==C.of)) goto L_10fe2978;
  /* 10fe292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2931 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2934 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2937 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe293a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe293d mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2944 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2948 je 0x10fe2966 */
  if (C.zf) goto L_10fe2966;
  /* 10fe294a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe294d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2950 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2953 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2956 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2959 mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2960 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2964 jne 0x10fe2976 */
  if (!C.zf) goto L_10fe2976;
L_10fe2966:;
  /* 10fe2966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2969 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe296c mov dword ptr [ecx + 0x11004130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11004130), (0xffffffffu));
L_10fe2976:;
  /* 10fe2976 jmp 0x10fe291f */
  goto L_10fe291f;
L_10fe2978:;
  /* 10fe2978 mov esp, ebp */
  ESP = (EBP);
  /* 10fe297a pop ebp */
  EBP = (pop32());
  /* 10fe297b ret  */
  ESPCHK(0x10fe2850u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x10fe2980 (26 bytes, 9 insns) */
void f_10fe2980(void) {
  FTRACE(0x10fe2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2980 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2981 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2983 call 0x10fe3580 */
  push32(0x10fe2988u); f_10fe3580();
  /* 10fe2988 movsx eax, byte ptr [0x110057ec] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x110057ec))));
  /* 10fe298f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe2991 je 0x10fe2998 */
  if (C.zf) goto L_10fe2998;
  /* 10fe2993 call 0x10fe3340 */
  push32(0x10fe2998u); f_10fe3340();
L_10fe2998:;
  /* 10fe2998 pop ebp */
  EBP = (pop32());
  /* 10fe2999 ret  */
  ESPCHK(0x10fe2980u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x10fe29a0 (61 bytes, 20 insns) */
void f_10fe29a0(void) {
  FTRACE(0x10fe29a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe29a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe29a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe29a3 cmp dword ptr [ebp + 8], 0x11004120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11004120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe29aa jb 0x10fe29ce */
  if (C.cf) goto L_10fe29ce;
  /* 10fe29ac cmp dword ptr [ebp + 8], 0x11004380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11004380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe29b3 ja 0x10fe29ce */
  if ((!C.cf&&!C.zf)) goto L_10fe29ce;
  /* 10fe29b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe29b8 sub eax, 0x11004120 */
  { uint32_t _a=(EAX),_b=(0x11004120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe29bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe29c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe29c3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe29c4 call 0x10fdd590 */
  push32(0x10fe29c9u); f_10fdd590();
  /* 10fe29c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe29cc jmp 0x10fe29db */
  goto L_10fe29db;
L_10fe29ce:;
  /* 10fe29ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe29d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe29d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe29d5 call dword ptr [0x1100834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100834c))), 0x10fe29dbu);
L_10fe29db:;
  /* 10fe29db pop ebp */
  EBP = (pop32());
  /* 10fe29dc ret  */
  ESPCHK(0x10fe29a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x10fe29e0 (41 bytes, 16 insns) */
void f_10fe29e0(void) {
  FTRACE(0x10fe29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe29e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe29e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe29e7 jge 0x10fe29fa */
  if ((C.sf==C.of)) goto L_10fe29fa;
  /* 10fe29e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe29ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe29ef push eax */
  push32((uint32_t)(EAX));
  /* 10fe29f0 call 0x10fdd590 */
  push32(0x10fe29f5u); f_10fdd590();
  /* 10fe29f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe29f8 jmp 0x10fe2a07 */
  goto L_10fe2a07;
L_10fe29fa:;
  /* 10fe29fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe29fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a00 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2a01 call dword ptr [0x1100834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100834c))), 0x10fe2a07u);
L_10fe2a07:;
  /* 10fe2a07 pop ebp */
  EBP = (pop32());
  /* 10fe2a08 ret  */
  ESPCHK(0x10fe29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x10fe2a10 (61 bytes, 20 insns) */
void f_10fe2a10(void) {
  FTRACE(0x10fe2a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2a11 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2a13 cmp dword ptr [ebp + 8], 0x11004120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11004120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2a1a jb 0x10fe2a3e */
  if (C.cf) goto L_10fe2a3e;
  /* 10fe2a1c cmp dword ptr [ebp + 8], 0x11004380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11004380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2a23 ja 0x10fe2a3e */
  if ((!C.cf&&!C.zf)) goto L_10fe2a3e;
  /* 10fe2a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2a28 sub eax, 0x11004120 */
  { uint32_t _a=(EAX),_b=(0x11004120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2a2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe2a30 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a33 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2a34 call 0x10fdd630 */
  push32(0x10fe2a39u); f_10fdd630();
  /* 10fe2a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a3c jmp 0x10fe2a4b */
  goto L_10fe2a4b;
L_10fe2a3e:;
  /* 10fe2a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2a41 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a44 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2a45 call dword ptr [0x11008348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008348))), 0x10fe2a4bu);
L_10fe2a4b:;
  /* 10fe2a4b pop ebp */
  EBP = (pop32());
  /* 10fe2a4c ret  */
  ESPCHK(0x10fe2a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x10fe2a50 (41 bytes, 16 insns) */
void f_10fe2a50(void) {
  FTRACE(0x10fe2a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2a51 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2a53 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2a57 jge 0x10fe2a6a */
  if ((C.sf==C.of)) goto L_10fe2a6a;
  /* 10fe2a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2a5c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a5f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2a60 call 0x10fdd630 */
  push32(0x10fe2a65u); f_10fdd630();
  /* 10fe2a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a68 jmp 0x10fe2a77 */
  goto L_10fe2a77;
L_10fe2a6a:;
  /* 10fe2a6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2a6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2a70 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2a71 call dword ptr [0x11008348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008348))), 0x10fe2a77u);
L_10fe2a77:;
  /* 10fe2a77 pop ebp */
  EBP = (pop32());
  /* 10fe2a78 ret  */
  ESPCHK(0x10fe2a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x10fe2a80 (119 bytes, 34 insns) */
void f_10fe2a80(void) {
  FTRACE(0x10fe2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2a81 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2a86 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe2a8b call dword ptr [0x110083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083a4))), 0x10fe2a91u);
  /* 10fe2a91 cmp dword ptr [0x11005b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2a98 je 0x10fe2ab8 */
  if (C.zf) goto L_10fe2ab8;
  /* 10fe2a9a push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe2a9f call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe2aa5u);
  /* 10fe2aa5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe2aa7 call 0x10fdd590 */
  push32(0x10fe2aacu); f_10fdd590();
  /* 10fe2aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2aaf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe2ab6 jmp 0x10fe2abf */
  goto L_10fe2abf;
L_10fe2ab8:;
  /* 10fe2ab8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fe2abf:;
  /* 10fe2abf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10fe2ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2ac8 call 0x10fe2b00 */
  push32(0x10fe2acdu); f_10fe2b00();
  /* 10fe2acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2ad0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe2ad3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2ad7 je 0x10fe2ae5 */
  if (C.zf) goto L_10fe2ae5;
  /* 10fe2ad9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe2adb call 0x10fdd630 */
  push32(0x10fe2ae0u); f_10fdd630();
  /* 10fe2ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2ae3 jmp 0x10fe2af0 */
  goto L_10fe2af0;
L_10fe2ae5:;
  /* 10fe2ae5 push 0x11005b44 */
  push32((uint32_t)(0x11005b44u));
  /* 10fe2aea call dword ptr [0x11008394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008394))), 0x10fe2af0u);
L_10fe2af0:;
  /* 10fe2af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe2af3 mov esp, ebp */
  ESP = (EBP);
  /* 10fe2af5 pop ebp */
  EBP = (pop32());
  /* 10fe2af6 ret  */
  ESPCHK(0x10fe2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x10fe2b00 (160 bytes, 50 insns) */
void f_10fe2b00(void) {
  FTRACE(0x10fe2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2b01 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2b06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2b0a jne 0x10fe2b13 */
  if (!C.zf) goto L_10fe2b13;
  /* 10fe2b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2b0e jmp 0x10fe2b9c */
  goto L_10fe2b9c;
L_10fe2b13:;
  /* 10fe2b13 cmp dword ptr [0x110059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2b1a jne 0x10fe2b4a */
  if (!C.zf) goto L_10fe2b4a;
  /* 10fe2b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2b1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2b24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2b29 jle 0x10fe2b3b */
  if ((C.zf||C.sf!=C.of)) goto L_10fe2b3b;
  /* 10fe2b2b call 0x10fe1a60 */
  push32(0x10fe2b30u); f_10fe1a60();
  /* 10fe2b30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10fe2b36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2b39 jmp 0x10fe2b9c */
  goto L_10fe2b9c;
L_10fe2b3b:;
  /* 10fe2b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2b3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10fe2b41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10fe2b43 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe2b48 jmp 0x10fe2b9c */
  goto L_10fe2b9c;
L_10fe2b4a:;
  /* 10fe2b4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe2b51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fe2b54 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2b57 mov ecx, dword ptr [0x11003ea4] */
  ECX = (r32((uint32_t)(0x11003ea4)));
  /* 10fe2b5d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2b61 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe2b64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10fe2b67 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2b68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fe2b6d mov ecx, dword ptr [0x110059c8] */
  ECX = (r32((uint32_t)(0x110059c8)));
  /* 10fe2b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2b74 call dword ptr [0x11008370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008370))), 0x10fe2b7au);
  /* 10fe2b7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe2b7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2b81 je 0x10fe2b89 */
  if (C.zf) goto L_10fe2b89;
  /* 10fe2b83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2b87 je 0x10fe2b99 */
  if (C.zf) goto L_10fe2b99;
L_10fe2b89:;
  /* 10fe2b89 call 0x10fe1a60 */
  push32(0x10fe2b8eu); f_10fe1a60();
  /* 10fe2b8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10fe2b94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2b97 jmp 0x10fe2b9c */
  goto L_10fe2b9c;
L_10fe2b99:;
  /* 10fe2b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe2b9c:;
  /* 10fe2b9c mov esp, ebp */
  ESP = (EBP);
  /* 10fe2b9e pop ebp */
  EBP = (pop32());
  /* 10fe2b9f ret  */
  ESPCHK(0x10fe2b00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10fe2ba0 (32 bytes, 18 insns) */
void f_10fe2ba0(void) {
  FTRACE(0x10fe2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe2ba4 push esi */
  push32((uint32_t)(ESI));
  /* 10fe2ba5 push edi */
  push32((uint32_t)(EDI));
  /* 10fe2ba6 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe2bab push 0x10fe2bb8 */
  push32((uint32_t)(0x10fe2bb8u));
  /* 10fe2bb0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10fe2bb3 call 0x10fea2ec */
  push32(0x10fe2bb8u); f_10fea2ec();
  /* 10fe2bb8 pop ebp */
  EBP = (pop32());
  /* 10fe2bb9 pop edi */
  EDI = (pop32());
  /* 10fe2bba pop esi */
  ESI = (pop32());
  /* 10fe2bbb pop ebx */
  EBX = (pop32());
  /* 10fe2bbc mov esp, ebp */
  ESP = (EBP);
  /* 10fe2bbe pop ebp */
  EBP = (pop32());
  /* 10fe2bbf ret  */
  ESPCHK(0x10fe2ba0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10fe2be2 (104 bytes, 33 insns) */
void f_10fe2be2(void) {
  FTRACE(0x10fe2be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2be2 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe2be3 push esi */
  push32((uint32_t)(ESI));
  /* 10fe2be4 push edi */
  push32((uint32_t)(EDI));
  /* 10fe2be5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fe2be9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2bea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10fe2bec push 0x10fe2bc0 */
  push32((uint32_t)(0x10fe2bc0u));
  /* 10fe2bf1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10fe2bf8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10fe2bff:;
  /* 10fe2bff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10fe2c03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe2c06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe2c09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2c0c je 0x10fe2c3c */
  if (C.zf) goto L_10fe2c3c;
  /* 10fe2c0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2c12 je 0x10fe2c3c */
  if (C.zf) goto L_10fe2c3c;
  /* 10fe2c14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10fe2c17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10fe2c1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10fe2c1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10fe2c21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2c26 jne 0x10fe2c3a */
  if (!C.zf) goto L_10fe2c3a;
  /* 10fe2c28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10fe2c2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10fe2c31 call 0x10fe2c76 */
  push32(0x10fe2c36u); f_10fe2c76();
  /* 10fe2c36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10fe2c3au);
L_10fe2c3a:;
  /* 10fe2c3a jmp 0x10fe2bff */
  goto L_10fe2bff;
L_10fe2c3c:;
  /* 10fe2c3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10fe2c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2c46 pop edi */
  EDI = (pop32());
  /* 10fe2c47 pop esi */
  ESI = (pop32());
  /* 10fe2c48 pop ebx */
  EBX = (pop32());
  /* 10fe2c49 ret  */
  ESPCHK(0x10fe2be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c76 @ 0x10fe2c76 (24 bytes, 10 insns) */
void f_10fe2c76(void) {
  FTRACE(0x10fe2c76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2c76 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe2c77 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2c78 mov ebx, 0x110043b8 */
  EBX = (0x110043b8u);
  /* 10fe2c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2c80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10fe2c83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10fe2c86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10fe2c89 pop ecx */
  ECX = (pop32());
  /* 10fe2c8a pop ebx */
  EBX = (pop32());
  /* 10fe2c8b ret 4 */
  ESPCHK(0x10fe2c76u, _esp0);
  ESP += 8; return;
}

/* FUN_10012d55 @ 0x10fe2d55 (27 bytes, 11 insns) */
void f_10fe2d55(void) {
  FTRACE(0x10fe2d55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2d55 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2d56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe2d5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10fe2d5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fe2d5f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2d60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fe2d63 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2d64 call 0x10fe2be2 */
  push32(0x10fe2d69u); f_10fe2be2();
  /* 10fe2d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2d6c pop ebp */
  EBP = (pop32());
  /* 10fe2d6d ret 4 */
  ESPCHK(0x10fe2d55u, _esp0);
  ESP += 8; return;
}

/* FUN_10012d70 @ 0x10fe2d70 (482 bytes, 138 insns) */
void f_10fe2d70(void) {
  FTRACE(0x10fe2d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2d71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2d73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2d76 push esi */
  push32((uint32_t)(ESI));
  /* 10fe2d77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10fe2d7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10fe2d80 call 0x10fdd590 */
  push32(0x10fe2d85u); f_10fdd590();
  /* 10fe2d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2d88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe2d8f jmp 0x10fe2d9a */
  goto L_10fe2d9a;
L_10fe2d91:;
  /* 10fe2d91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2d94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2d97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe2d9a:;
  /* 10fe2d9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2d9e jge 0x10fe2f40 */
  if ((C.sf==C.of)) goto L_10fe2f40;
  /* 10fe2da4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2da7 cmp dword ptr [ecx*4 + 0x110071a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x110071a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2daf je 0x10fe2ea6 */
  if (C.zf) goto L_10fe2ea6;
  /* 10fe2db5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2db8 mov eax, dword ptr [edx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe2dbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe2dc2 jmp 0x10fe2dcd */
  goto L_10fe2dcd;
L_10fe2dc4:;
  /* 10fe2dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2dc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2dca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe2dcd:;
  /* 10fe2dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2dd0 mov eax, dword ptr [edx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe2dd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2ddc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2ddf jae 0x10fe2e96 */
  if (!C.cf) goto L_10fe2e96;
  /* 10fe2de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2de8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fe2dec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe2df1 jne 0x10fe2e91 */
  if (!C.zf) goto L_10fe2e91;
  /* 10fe2df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2dfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2dfe jne 0x10fe2e39 */
  if (!C.zf) goto L_10fe2e39;
  /* 10fe2e00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fe2e02 call 0x10fdd590 */
  push32(0x10fe2e07u); f_10fdd590();
  /* 10fe2e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2e11 jne 0x10fe2e2f */
  if (!C.zf) goto L_10fe2e2f;
  /* 10fe2e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e19 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2e1a call dword ptr [0x11008350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008350))), 0x10fe2e20u);
  /* 10fe2e20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe2e26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10fe2e2f:;
  /* 10fe2e2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fe2e31 call 0x10fdd630 */
  push32(0x10fe2e36u); f_10fdd630();
  /* 10fe2e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe2e39:;
  /* 10fe2e39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e3f push eax */
  push32((uint32_t)(EAX));
  /* 10fe2e40 call dword ptr [0x1100834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100834c))), 0x10fe2e46u);
  /* 10fe2e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fe2e4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2e50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe2e52 je 0x10fe2e66 */
  if (C.zf) goto L_10fe2e66;
  /* 10fe2e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e5a push eax */
  push32((uint32_t)(EAX));
  /* 10fe2e5b call dword ptr [0x11008348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008348))), 0x10fe2e61u);
  /* 10fe2e61 jmp 0x10fe2dc4 */
  goto L_10fe2dc4;
L_10fe2e66:;
  /* 10fe2e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10fe2e6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2e72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2e75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2e7b sub eax, dword ptr [edx*4 + 0x110071a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x110071a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe2e82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe2e83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10fe2e88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fe2e8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2e8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe2e8f jmp 0x10fe2e96 */
  goto L_10fe2e96;
L_10fe2e91:;
  /* 10fe2e91 jmp 0x10fe2dc4 */
  goto L_10fe2dc4;
L_10fe2e96:;
  /* 10fe2e96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2e9a je 0x10fe2ea1 */
  if (C.zf) goto L_10fe2ea1;
  /* 10fe2e9c jmp 0x10fe2f40 */
  goto L_10fe2f40;
L_10fe2ea1:;
  /* 10fe2ea1 jmp 0x10fe2f3b */
  goto L_10fe2f3b;
L_10fe2ea6:;
  /* 10fe2ea6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10fe2ea8 push 0x11001634 */
  push32((uint32_t)(0x11001634u));
  /* 10fe2ead push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe2eaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10fe2eb4 call 0x10fd9b90 */
  push32(0x10fe2eb9u); f_10fd9b90();
  /* 10fe2eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2ebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe2ebf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2ec3 je 0x10fe2f39 */
  if (C.zf) goto L_10fe2f39;
  /* 10fe2ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2ec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2ecb mov dword ptr [eax*4 + 0x110071a0], ecx */
  w32((uint32_t)(EAX*4 + 0x110071a0), (ECX));
  /* 10fe2ed2 mov edx, dword ptr [0x110072dc] */
  EDX = (r32((uint32_t)(0x110072dc)));
  /* 10fe2ed8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2edb mov dword ptr [0x110072dc], edx */
  w32((uint32_t)(0x110072dc), (EDX));
  /* 10fe2ee1 jmp 0x10fe2eec */
  goto L_10fe2eec;
L_10fe2ee3:;
  /* 10fe2ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2ee6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2ee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe2eec:;
  /* 10fe2eec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2eef mov edx, dword ptr [ecx*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2ef6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2efc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2eff jae 0x10fe2f24 */
  if (!C.cf) goto L_10fe2f24;
  /* 10fe2f01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2f04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10fe2f08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2f0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10fe2f11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2f14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10fe2f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe2f1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10fe2f22 jmp 0x10fe2ee3 */
  goto L_10fe2ee3;
L_10fe2f24:;
  /* 10fe2f24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe2f27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2f2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe2f2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe2f30 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2f31 call 0x10fe3280 */
  push32(0x10fe2f36u); f_10fe3280();
  /* 10fe2f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe2f39:;
  /* 10fe2f39 jmp 0x10fe2f40 */
  goto L_10fe2f40;
L_10fe2f3b:;
  /* 10fe2f3b jmp 0x10fe2d91 */
  goto L_10fe2d91;
L_10fe2f40:;
  /* 10fe2f40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10fe2f42 call 0x10fdd630 */
  push32(0x10fe2f47u); f_10fdd630();
  /* 10fe2f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe2f4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe2f4d pop esi */
  ESI = (pop32());
  /* 10fe2f4e mov esp, ebp */
  ESP = (EBP);
  /* 10fe2f50 pop ebp */
  EBP = (pop32());
  /* 10fe2f51 ret  */
  ESPCHK(0x10fe2d70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10fe2f60 (183 bytes, 57 insns) */
void f_10fe2f60(void) {
  FTRACE(0x10fe2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe2f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe2f61 mov ebp, esp */
  EBP = (ESP);
  /* 10fe2f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2f67 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2f6d jae 0x10fe2ffa */
  if (!C.cf) goto L_10fe2ffa;
  /* 10fe2f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2f76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe2f79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2f7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe2f7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2f82 mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe2f89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2f8d jne 0x10fe2ffa */
  if (!C.zf) goto L_10fe2ffa;
  /* 10fe2f8f cmp dword ptr [0x110057ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110057ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2f96 jne 0x10fe2fda */
  if (!C.zf) goto L_10fe2fda;
  /* 10fe2f98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2f9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe2f9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2fa2 je 0x10fe2fb2 */
  if (C.zf) goto L_10fe2fb2;
  /* 10fe2fa4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2fa8 je 0x10fe2fc0 */
  if (C.zf) goto L_10fe2fc0;
  /* 10fe2faa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe2fae je 0x10fe2fce */
  if (C.zf) goto L_10fe2fce;
  /* 10fe2fb0 jmp 0x10fe2fda */
  goto L_10fe2fda;
L_10fe2fb2:;
  /* 10fe2fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2fb5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe2fb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10fe2fb8 call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe2fbeu);
  /* 10fe2fbe jmp 0x10fe2fda */
  goto L_10fe2fda;
L_10fe2fc0:;
  /* 10fe2fc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10fe2fc4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10fe2fc6 call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe2fccu);
  /* 10fe2fcc jmp 0x10fe2fda */
  goto L_10fe2fda;
L_10fe2fce:;
  /* 10fe2fce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe2fd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10fe2fd4 call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe2fdau);
L_10fe2fda:;
  /* 10fe2fda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2fdd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fe2fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe2fe3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2fe6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe2fe9 mov ecx, dword ptr [edx*4 + 0x110071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe2ff0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe2ff3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10fe2ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe2ff8 jmp 0x10fe3013 */
  goto L_10fe3013;
L_10fe2ffa:;
  /* 10fe2ffa call 0x10fe1a60 */
  push32(0x10fe2fffu); f_10fe1a60();
  /* 10fe2fff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe3005 call 0x10fe1a70 */
  push32(0x10fe300au); f_10fe1a70();
  /* 10fe300a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe3010 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fe3013:;
  /* 10fe3013 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3015 pop ebp */
  EBP = (pop32());
  /* 10fe3016 ret  */
  ESPCHK(0x10fe2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x10fe3020 (216 bytes, 63 insns) */
void f_10fe3020(void) {
  FTRACE(0x10fe3020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3020 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3021 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3023 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3027 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe302d jae 0x10fe30db */
  if (!C.cf) goto L_10fe30db;
  /* 10fe3033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3036 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe3039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe303c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe303f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3042 mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe3049 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe304e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe3051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe3053 je 0x10fe30db */
  if (C.zf) goto L_10fe30db;
  /* 10fe3059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe305c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fe305f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3062 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3065 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3068 mov ecx, dword ptr [edx*4 + 0x110071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe306f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3073 je 0x10fe30db */
  if (C.zf) goto L_10fe30db;
  /* 10fe3075 cmp dword ptr [0x110057ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110057ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe307c jne 0x10fe30ba */
  if (!C.zf) goto L_10fe30ba;
  /* 10fe307e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3081 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe3084 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3088 je 0x10fe3098 */
  if (C.zf) goto L_10fe3098;
  /* 10fe308a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe308e je 0x10fe30a4 */
  if (C.zf) goto L_10fe30a4;
  /* 10fe3090 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3094 je 0x10fe30b0 */
  if (C.zf) goto L_10fe30b0;
  /* 10fe3096 jmp 0x10fe30ba */
  goto L_10fe30ba;
L_10fe3098:;
  /* 10fe3098 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe309a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10fe309c call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe30a2u);
  /* 10fe30a2 jmp 0x10fe30ba */
  goto L_10fe30ba;
L_10fe30a4:;
  /* 10fe30a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe30a6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10fe30a8 call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe30aeu);
  /* 10fe30ae jmp 0x10fe30ba */
  goto L_10fe30ba;
L_10fe30b0:;
  /* 10fe30b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe30b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10fe30b4 call dword ptr [0x11008308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008308))), 0x10fe30bau);
L_10fe30ba:;
  /* 10fe30ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe30bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe30c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe30c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe30c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe30c9 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe30d0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10fe30d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe30d9 jmp 0x10fe30f4 */
  goto L_10fe30f4;
L_10fe30db:;
  /* 10fe30db call 0x10fe1a60 */
  push32(0x10fe30e0u); f_10fe1a60();
  /* 10fe30e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe30e6 call 0x10fe1a70 */
  push32(0x10fe30ebu); f_10fe1a70();
  /* 10fe30eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe30f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fe30f4:;
  /* 10fe30f4 mov esp, ebp */
  ESP = (EBP);
  /* 10fe30f6 pop ebp */
  EBP = (pop32());
  /* 10fe30f7 ret  */
  ESPCHK(0x10fe3020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x10fe3100 (102 bytes, 30 insns) */
void f_10fe3100(void) {
  FTRACE(0x10fe3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3100 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3101 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3106 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe310c jae 0x10fe314b */
  if (!C.cf) goto L_10fe314b;
  /* 10fe310e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3111 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe3114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3117 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe311a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe311d mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe3124 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe3129 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe312c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe312e je 0x10fe314b */
  if (C.zf) goto L_10fe314b;
  /* 10fe3130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3133 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fe3136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3139 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe313c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe313f mov ecx, dword ptr [edx*4 + 0x110071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x110071a0)));
  /* 10fe3146 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10fe3149 jmp 0x10fe3164 */
  goto L_10fe3164;
L_10fe314b:;
  /* 10fe314b call 0x10fe1a60 */
  push32(0x10fe3150u); f_10fe1a60();
  /* 10fe3150 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe3156 call 0x10fe1a70 */
  push32(0x10fe315bu); f_10fe1a70();
  /* 10fe315b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe3161 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fe3164:;
  /* 10fe3164 pop ebp */
  EBP = (pop32());
  /* 10fe3165 ret  */
  ESPCHK(0x10fe3100u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x10fe3170 (260 bytes, 83 insns) */
void f_10fe3170(void) {
  FTRACE(0x10fe3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3170 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3171 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3176 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe317a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe317d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3182 je 0x10fe318d */
  if (C.zf) goto L_10fe318d;
  /* 10fe3184 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe3187 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fe318a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10fe318d:;
  /* 10fe318d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3190 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe3196 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe3198 je 0x10fe31a2 */
  if (C.zf) goto L_10fe31a2;
  /* 10fe319a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe319d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10fe319f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10fe31a2:;
  /* 10fe31a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe31a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe31ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe31ad je 0x10fe31b8 */
  if (C.zf) goto L_10fe31b8;
  /* 10fe31af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe31b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10fe31b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10fe31b8:;
  /* 10fe31b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe31bb push eax */
  push32((uint32_t)(EAX));
  /* 10fe31bc call dword ptr [0x110083d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083d8))), 0x10fe31c2u);
  /* 10fe31c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe31c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe31c9 jne 0x10fe31e2 */
  if (!C.zf) goto L_10fe31e2;
  /* 10fe31cb call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe31d1u);
  /* 10fe31d1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe31d2 call 0x10fe19c0 */
  push32(0x10fe31d7u); f_10fe19c0();
  /* 10fe31d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe31da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe31dd jmp 0x10fe3270 */
  goto L_10fe3270;
L_10fe31e2:;
  /* 10fe31e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe31e6 jne 0x10fe31f3 */
  if (!C.zf) goto L_10fe31f3;
  /* 10fe31e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe31eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10fe31ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10fe31f1 jmp 0x10fe3202 */
  goto L_10fe3202;
L_10fe31f3:;
  /* 10fe31f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe31f7 jne 0x10fe3202 */
  if (!C.zf) goto L_10fe3202;
  /* 10fe31f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe31fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10fe31ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10fe3202:;
  /* 10fe3202 call 0x10fe2d70 */
  push32(0x10fe3207u); f_10fe2d70();
  /* 10fe3207 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe320a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe320e jne 0x10fe322b */
  if (!C.zf) goto L_10fe322b;
  /* 10fe3210 call 0x10fe1a60 */
  push32(0x10fe3215u); f_10fe1a60();
  /* 10fe3215 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10fe321b call 0x10fe1a70 */
  push32(0x10fe3220u); f_10fe1a70();
  /* 10fe3220 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe3226 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3229 jmp 0x10fe3270 */
  goto L_10fe3270;
L_10fe322b:;
  /* 10fe322b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe322e push eax */
  push32((uint32_t)(EAX));
  /* 10fe322f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3232 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3233 call 0x10fe2f60 */
  push32(0x10fe3238u); f_10fe2f60();
  /* 10fe3238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe323b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe323e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10fe3241 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10fe3244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3247 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe324a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe324d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe3250 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3253 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe325a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fe325d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10fe3261 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3264 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3265 call 0x10fe3310 */
  push32(0x10fe326au); f_10fe3310();
  /* 10fe326a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe326d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe3270:;
  /* 10fe3270 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3272 pop ebp */
  EBP = (pop32());
  /* 10fe3273 ret  */
  ESPCHK(0x10fe3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x10fe3280 (134 bytes, 44 insns) */
void f_10fe3280(void) {
  FTRACE(0x10fe3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3280 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3281 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3283 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3287 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe328a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe328d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe3290 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3293 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe329a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe329c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fe329f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe32a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe32a6 jne 0x10fe32e1 */
  if (!C.zf) goto L_10fe32e1;
  /* 10fe32a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fe32aa call 0x10fdd590 */
  push32(0x10fe32afu); f_10fdd590();
  /* 10fe32af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe32b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe32b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe32b9 jne 0x10fe32d7 */
  if (!C.zf) goto L_10fe32d7;
  /* 10fe32bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe32be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe32c1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe32c2 call dword ptr [0x11008350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008350))), 0x10fe32c8u);
  /* 10fe32c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe32cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe32ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe32d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe32d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10fe32d7:;
  /* 10fe32d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fe32d9 call 0x10fdd630 */
  push32(0x10fe32deu); f_10fdd630();
  /* 10fe32de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe32e1:;
  /* 10fe32e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe32e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe32e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe32ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe32ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe32f0 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe32f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10fe32fb push eax */
  push32((uint32_t)(EAX));
  /* 10fe32fc call dword ptr [0x1100834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1100834c))), 0x10fe3302u);
  /* 10fe3302 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3304 pop ebp */
  EBP = (pop32());
  /* 10fe3305 ret  */
  ESPCHK(0x10fe3280u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10fe3310 (38 bytes, 13 insns) */
void f_10fe3310(void) {
  FTRACE(0x10fe3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3310 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3311 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3316 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe3319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe331c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe331f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3322 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe3329 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10fe332d push eax */
  push32((uint32_t)(EAX));
  /* 10fe332e call dword ptr [0x11008348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008348))), 0x10fe3334u);
  /* 10fe3334 pop ebp */
  EBP = (pop32());
  /* 10fe3335 ret  */
  ESPCHK(0x10fe3310u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x10fe3340 (218 bytes, 63 insns) */
void f_10fe3340(void) {
  FTRACE(0x10fe3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3340 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3341 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe334d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe334f call 0x10fdd590 */
  push32(0x10fe3354u); f_10fdd590();
  /* 10fe3354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3357 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10fe335e jmp 0x10fe3369 */
  goto L_10fe3369;
L_10fe3360:;
  /* 10fe3360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3363 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3366 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe3369:;
  /* 10fe3369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe336c cmp ecx, dword ptr [0x11006ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11006ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3372 jge 0x10fe3409 */
  if ((C.sf==C.of)) goto L_10fe3409;
  /* 10fe3378 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe337b mov eax, dword ptr [0x11005b48] */
  EAX = (r32((uint32_t)(0x11005b48)));
  /* 10fe3380 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3384 je 0x10fe3404 */
  if (C.zf) goto L_10fe3404;
  /* 10fe3386 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3389 mov edx, dword ptr [0x11005b48] */
  EDX = (r32((uint32_t)(0x11005b48)));
  /* 10fe338f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fe3392 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe3395 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe339b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe339d je 0x10fe33c1 */
  if (C.zf) goto L_10fe33c1;
  /* 10fe339f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe33a2 mov eax, dword ptr [0x11005b48] */
  EAX = (r32((uint32_t)(0x11005b48)));
  /* 10fe33a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe33aa push ecx */
  push32((uint32_t)(ECX));
  /* 10fe33ab call 0x10fe4130 */
  push32(0x10fe33b0u); f_10fe4130();
  /* 10fe33b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe33b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe33b6 je 0x10fe33c1 */
  if (C.zf) goto L_10fe33c1;
  /* 10fe33b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe33bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe33be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fe33c1:;
  /* 10fe33c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe33c5 jl 0x10fe3404 */
  if ((C.sf!=C.of)) goto L_10fe3404;
  /* 10fe33c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe33ca mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe33d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe33d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe33d6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe33d7 call dword ptr [0x110083e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083e0))), 0x10fe33ddu);
  /* 10fe33dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe33df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe33e2 mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe33e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe33eb push edx */
  push32((uint32_t)(EDX));
  /* 10fe33ec call 0x10fda620 */
  push32(0x10fe33f1u); f_10fda620();
  /* 10fe33f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe33f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe33f7 mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe33fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10fe3404:;
  /* 10fe3404 jmp 0x10fe3360 */
  goto L_10fe3360;
L_10fe3409:;
  /* 10fe3409 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe340b call 0x10fdd630 */
  push32(0x10fe3410u); f_10fdd630();
  /* 10fe3410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3416 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3418 pop ebp */
  EBP = (pop32());
  /* 10fe3419 ret  */
  ESPCHK(0x10fe3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013420 @ 0x10fe3420 (68 bytes, 26 insns) */
void f_10fe3420(void) {
  FTRACE(0x10fe3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3420 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3421 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3423 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3428 jne 0x10fe3436 */
  if (!C.zf) goto L_10fe3436;
  /* 10fe342a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe342c call 0x10fe3590 */
  push32(0x10fe3431u); f_10fe3590();
  /* 10fe3431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3434 jmp 0x10fe3460 */
  goto L_10fe3460;
L_10fe3436:;
  /* 10fe3436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3439 push eax */
  push32((uint32_t)(EAX));
  /* 10fe343a call 0x10fe29a0 */
  push32(0x10fe343fu); f_10fe29a0();
  /* 10fe343f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3445 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3446 call 0x10fe3470 */
  push32(0x10fe344bu); f_10fe3470();
  /* 10fe344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe344e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe3451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3454 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3455 call 0x10fe2a10 */
  push32(0x10fe345au); f_10fe2a10();
  /* 10fe345a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe345d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe3460:;
  /* 10fe3460 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3462 pop ebp */
  EBP = (pop32());
  /* 10fe3463 ret  */
  ESPCHK(0x10fe3420u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x10fe3470 (65 bytes, 26 insns) */
void f_10fe3470(void) {
  FTRACE(0x10fe3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3470 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3471 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3476 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3477 call 0x10fe34c0 */
  push32(0x10fe347cu); f_10fe34c0();
  /* 10fe347c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe347f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3481 je 0x10fe3488 */
  if (C.zf) goto L_10fe3488;
  /* 10fe3483 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3486 jmp 0x10fe34af */
  goto L_10fe34af;
L_10fe3488:;
  /* 10fe3488 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe348b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe348e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe3494 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe3496 je 0x10fe34ad */
  if (C.zf) goto L_10fe34ad;
  /* 10fe3498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe349b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe349e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe349f call 0x10fe4280 */
  push32(0x10fe34a4u); f_10fe4280();
  /* 10fe34a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe34a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe34a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe34ab jmp 0x10fe34af */
  goto L_10fe34af;
L_10fe34ad:;
  /* 10fe34ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe34af:;
  /* 10fe34af pop ebp */
  EBP = (pop32());
  /* 10fe34b0 ret  */
  ESPCHK(0x10fe3470u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x10fe34c0 (183 bytes, 62 insns) */
void f_10fe34c0(void) {
  FTRACE(0x10fe34c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe34c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe34c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe34c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe34c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe34cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe34d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe34d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe34d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe34d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe34dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe34df jne 0x10fe355b */
  if (!C.zf) goto L_10fe355b;
  /* 10fe34e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe34e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe34e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe34ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe34ef je 0x10fe355b */
  if (C.zf) goto L_10fe355b;
  /* 10fe34f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe34f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe34f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10fe34f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe34fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe34ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3503 jle 0x10fe355b */
  if ((C.zf||C.sf!=C.of)) goto L_10fe355b;
  /* 10fe3505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3508 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3509 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe350c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe350f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3510 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3513 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fe3516 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3517 call 0x10fe2430 */
  push32(0x10fe351cu); f_10fe2430();
  /* 10fe351c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe351f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3522 jne 0x10fe3545 */
  if (!C.zf) goto L_10fe3545;
  /* 10fe3524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3527 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe352a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe3530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe3532 je 0x10fe3543 */
  if (C.zf) goto L_10fe3543;
  /* 10fe3534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3537 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe353a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe353d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3540 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10fe3543:;
  /* 10fe3543 jmp 0x10fe355b */
  goto L_10fe355b;
L_10fe3545:;
  /* 10fe3545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3548 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe354b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe354e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3551 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10fe3554 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe355b:;
  /* 10fe355b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe355e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3561 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fe3564 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe3566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3569 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10fe3570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3573 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3575 pop ebp */
  EBP = (pop32());
  /* 10fe3576 ret  */
  ESPCHK(0x10fe34c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x10fe3580 (15 bytes, 7 insns) */
void f_10fe3580(void) {
  FTRACE(0x10fe3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3580 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3581 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3583 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe3585 call 0x10fe3590 */
  push32(0x10fe358au); f_10fe3590();
  /* 10fe358a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe358d pop ebp */
  EBP = (pop32());
  /* 10fe358e ret  */
  ESPCHK(0x10fe3580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x10fe3590 (319 bytes, 94 insns) */
void f_10fe3590(void) {
  FTRACE(0x10fe3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3590 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3591 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe359d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe35a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe35a6 call 0x10fdd590 */
  push32(0x10fe35abu); f_10fdd590();
  /* 10fe35ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe35ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe35b5 jmp 0x10fe35c0 */
  goto L_10fe35c0;
L_10fe35b7:;
  /* 10fe35b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe35ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe35bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe35c0:;
  /* 10fe35c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe35c3 cmp ecx, dword ptr [0x11006ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11006ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe35c9 jge 0x10fe36b3 */
  if ((C.sf==C.of)) goto L_10fe36b3;
  /* 10fe35cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe35d2 mov eax, dword ptr [0x11005b48] */
  EAX = (r32((uint32_t)(0x11005b48)));
  /* 10fe35d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe35db je 0x10fe36ae */
  if (C.zf) goto L_10fe36ae;
  /* 10fe35e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe35e4 mov edx, dword ptr [0x11005b48] */
  EDX = (r32((uint32_t)(0x11005b48)));
  /* 10fe35ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fe35ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe35f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe35f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe35f8 je 0x10fe36ae */
  if (C.zf) goto L_10fe36ae;
  /* 10fe35fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3601 mov eax, dword ptr [0x11005b48] */
  EAX = (r32((uint32_t)(0x11005b48)));
  /* 10fe3606 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe3609 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe360a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe360d push edx */
  push32((uint32_t)(EDX));
  /* 10fe360e call 0x10fe29e0 */
  push32(0x10fe3613u); f_10fe29e0();
  /* 10fe3613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3616 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3619 mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe361f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe3622 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fe3625 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe362a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe362c je 0x10fe3695 */
  if (C.zf) goto L_10fe3695;
  /* 10fe362e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3632 jne 0x10fe3659 */
  if (!C.zf) goto L_10fe3659;
  /* 10fe3634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3637 mov edx, dword ptr [0x11005b48] */
  EDX = (r32((uint32_t)(0x11005b48)));
  /* 10fe363d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fe3640 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3641 call 0x10fe3470 */
  push32(0x10fe3646u); f_10fe3470();
  /* 10fe3646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3649 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe364c je 0x10fe3657 */
  if (C.zf) goto L_10fe3657;
  /* 10fe364e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3654 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe3657:;
  /* 10fe3657 jmp 0x10fe3695 */
  goto L_10fe3695;
L_10fe3659:;
  /* 10fe3659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe365d jne 0x10fe3695 */
  if (!C.zf) goto L_10fe3695;
  /* 10fe365f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3662 mov eax, dword ptr [0x11005b48] */
  EAX = (r32((uint32_t)(0x11005b48)));
  /* 10fe3667 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe366a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe366d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe3670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe3672 je 0x10fe3695 */
  if (C.zf) goto L_10fe3695;
  /* 10fe3674 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3677 mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe367d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe3680 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3681 call 0x10fe3470 */
  push32(0x10fe3686u); f_10fe3470();
  /* 10fe3686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3689 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe368c jne 0x10fe3695 */
  if (!C.zf) goto L_10fe3695;
  /* 10fe368e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10fe3695:;
  /* 10fe3695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3698 mov ecx, dword ptr [0x11005b48] */
  ECX = (r32((uint32_t)(0x11005b48)));
  /* 10fe369e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fe36a1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe36a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe36a5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe36a6 call 0x10fe2a50 */
  push32(0x10fe36abu); f_10fe2a50();
  /* 10fe36ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe36ae:;
  /* 10fe36ae jmp 0x10fe35b7 */
  goto L_10fe35b7;
L_10fe36b3:;
  /* 10fe36b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe36b5 call 0x10fdd630 */
  push32(0x10fe36bau); f_10fdd630();
  /* 10fe36ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe36bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe36c1 jne 0x10fe36c8 */
  if (!C.zf) goto L_10fe36c8;
  /* 10fe36c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe36c6 jmp 0x10fe36cb */
  goto L_10fe36cb;
L_10fe36c8:;
  /* 10fe36c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe36cb:;
  /* 10fe36cb mov esp, ebp */
  ESP = (EBP);
  /* 10fe36cd pop ebp */
  EBP = (pop32());
  /* 10fe36ce ret  */
  ESPCHK(0x10fe3590u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10fe36d0 (15 bytes, 7 insns) */
void f_10fe36d0(void) {
  FTRACE(0x10fe36d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe36d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe36d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe36d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe36d5 call 0x10fd8b00 */
  push32(0x10fe36dau); f_10fd8b00();
  /* 10fe36da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe36dd pop ebp */
  EBP = (pop32());
  /* 10fe36de ret  */
  ESPCHK(0x10fe36d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x10fe36e0 (1007 bytes, 269 insns) */
void f_10fe36e0(void) {
  FTRACE(0x10fe36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe36e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe36e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe36e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe36ed jl 0x10fe36f5 */
  if ((C.sf!=C.of)) goto L_10fe36f5;
  /* 10fe36ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe36f3 jle 0x10fe36fc */
  if ((C.zf||C.sf!=C.of)) goto L_10fe36fc;
L_10fe36f5:;
  /* 10fe36f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe36f7 jmp 0x10fe3acb */
  goto L_10fe3acb;
L_10fe36fc:;
  /* 10fe36fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe36fe call 0x10fdd590 */
  push32(0x10fe3703u); f_10fdd590();
  /* 10fe3703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3706 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe370d mov eax, dword ptr [0x11005b34] */
  EAX = (r32((uint32_t)(0x11005b34)));
  /* 10fe3712 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3715 mov dword ptr [0x11005b34], eax */
  w32((uint32_t)(0x11005b34), (EAX));
L_10fe371a:;
  /* 10fe371a cmp dword ptr [0x11005b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3721 je 0x10fe372d */
  if (C.zf) goto L_10fe372d;
  /* 10fe3723 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe3725 call dword ptr [0x11008304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008304))), 0x10fe372bu);
  /* 10fe372b jmp 0x10fe371a */
  goto L_10fe371a;
L_10fe372d:;
  /* 10fe372d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3731 je 0x10fe3771 */
  if (C.zf) goto L_10fe3771;
  /* 10fe3733 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3737 je 0x10fe3751 */
  if (C.zf) goto L_10fe3751;
  /* 10fe3739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe373c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe373d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3740 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3741 call 0x10fe3ad0 */
  push32(0x10fe3746u); f_10fe3ad0();
  /* 10fe3746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3749 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10fe374f jmp 0x10fe3763 */
  goto L_10fe3763;
L_10fe3751:;
  /* 10fe3751 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3754 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3757 mov ecx, dword ptr [eax + 0x110044dc] */
  ECX = (r32((uint32_t)(EAX + 0x110044dc)));
  /* 10fe375d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10fe3763:;
  /* 10fe3763 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10fe3769 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe376c jmp 0x10fe3aab */
  goto L_10fe3aab;
L_10fe3771:;
  /* 10fe3771 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10fe3778 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe377f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3783 je 0x10fe3aa3 */
  if (C.zf) goto L_10fe3aa3;
  /* 10fe3789 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe378c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe378f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3792 jne 0x10fe39b4 */
  if (!C.zf) goto L_10fe39b4;
  /* 10fe3798 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe379b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fe379f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe37a2 jne 0x10fe39b4 */
  if (!C.zf) goto L_10fe39b4;
  /* 10fe37a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe37ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10fe37af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe37b2 jne 0x10fe39b4 */
  if (!C.zf) goto L_10fe39b4;
  /* 10fe37b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe37bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10fe37c1:;
  /* 10fe37c1 push 0x11001684 */
  push32((uint32_t)(0x11001684u));
  /* 10fe37c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe37cc push ecx */
  push32((uint32_t)(ECX));
  /* 10fe37cd call 0x10fe5930 */
  push32(0x10fe37d2u); f_10fe5930();
  /* 10fe37d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe37d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10fe37db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe37e2 je 0x10fe380d */
  if (C.zf) goto L_10fe380d;
  /* 10fe37e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe37ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe37f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10fe37f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe37fd je 0x10fe380d */
  if (C.zf) goto L_10fe380d;
  /* 10fe37ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe3805 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe3808 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe380b jne 0x10fe3833 */
  if (!C.zf) goto L_10fe3833;
L_10fe380d:;
  /* 10fe380d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3811 je 0x10fe382c */
  if (C.zf) goto L_10fe382c;
  /* 10fe3813 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe3815 call 0x10fdd630 */
  push32(0x10fe381au); f_10fdd630();
  /* 10fe381a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe381d mov edx, dword ptr [0x11005b34] */
  EDX = (r32((uint32_t)(0x11005b34)));
  /* 10fe3823 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3826 mov dword ptr [0x11005b34], edx */
  w32((uint32_t)(0x11005b34), (EDX));
L_10fe382c:;
  /* 10fe382c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe382e jmp 0x10fe3acb */
  goto L_10fe3acb;
L_10fe3833:;
  /* 10fe3833 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10fe383a jmp 0x10fe3845 */
  goto L_10fe3845;
L_10fe383c:;
  /* 10fe383c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe383f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3842 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fe3845:;
  /* 10fe3845 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3849 jg 0x10fe3893 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe3893;
  /* 10fe384b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fe3851 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3852 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe3858 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3859 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe385c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe385f mov ecx, dword ptr [eax + 0x110044d8] */
  ECX = (r32((uint32_t)(EAX + 0x110044d8)));
  /* 10fe3865 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3866 call 0x10fe58f0 */
  push32(0x10fe386bu); f_10fe58f0();
  /* 10fe386b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe386e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3870 jne 0x10fe3891 */
  if (!C.zf) goto L_10fe3891;
  /* 10fe3872 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe3875 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3878 mov eax, dword ptr [edx + 0x110044d8] */
  EAX = (r32((uint32_t)(EDX + 0x110044d8)));
  /* 10fe387e push eax */
  push32((uint32_t)(EAX));
  /* 10fe387f call 0x10fdc9c0 */
  push32(0x10fe3884u); f_10fdc9c0();
  /* 10fe3884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3887 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe388d jne 0x10fe3891 */
  if (!C.zf) goto L_10fe3891;
  /* 10fe388f jmp 0x10fe3893 */
  goto L_10fe3893;
L_10fe3891:;
  /* 10fe3891 jmp 0x10fe383c */
  goto L_10fe383c;
L_10fe3893:;
  /* 10fe3893 push 0x11001680 */
  push32((uint32_t)(0x11001680u));
  /* 10fe3898 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe389e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe38a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10fe38a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe38ad push edx */
  push32((uint32_t)(EDX));
  /* 10fe38ae call 0x10fe58b0 */
  push32(0x10fe38b3u); f_10fe58b0();
  /* 10fe38b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe38b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10fe38bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe38c3 jne 0x10fe38f9 */
  if (!C.zf) goto L_10fe38f9;
  /* 10fe38c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe38cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe38ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe38d1 je 0x10fe38f9 */
  if (C.zf) goto L_10fe38f9;
  /* 10fe38d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe38d7 je 0x10fe38f2 */
  if (C.zf) goto L_10fe38f2;
  /* 10fe38d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe38db call 0x10fdd630 */
  push32(0x10fe38e0u); f_10fdd630();
  /* 10fe38e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe38e3 mov edx, dword ptr [0x11005b34] */
  EDX = (r32((uint32_t)(0x11005b34)));
  /* 10fe38e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe38ec mov dword ptr [0x11005b34], edx */
  w32((uint32_t)(0x11005b34), (EDX));
L_10fe38f2:;
  /* 10fe38f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe38f4 jmp 0x10fe3acb */
  goto L_10fe3acb;
L_10fe38f9:;
  /* 10fe38f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe38fd jg 0x10fe394a */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe394a;
  /* 10fe38ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fe3905 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3906 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe390c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe390d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10fe3913 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3914 call 0x10fdd3b0 */
  push32(0x10fe3919u); f_10fdd3b0();
  /* 10fe3919 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe391c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fe3922 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10fe392a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10fe3930 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3931 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe3934 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3935 call 0x10fe3ad0 */
  push32(0x10fe393au); f_10fe3ad0();
  /* 10fe393a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe393d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe393f je 0x10fe394a */
  if (C.zf) goto L_10fe394a;
  /* 10fe3941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3947 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe394a:;
  /* 10fe394a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe3950 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3956 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10fe395c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe3962 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe3965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3967 je 0x10fe3978 */
  if (C.zf) goto L_10fe3978;
  /* 10fe3969 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe396f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3972 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10fe3978:;
  /* 10fe3978 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fe397e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe3981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3983 jne 0x10fe37c1 */
  if (!C.zf) goto L_10fe37c1;
  /* 10fe3989 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe398d je 0x10fe399c */
  if (C.zf) goto L_10fe399c;
  /* 10fe398f call 0x10fe3c70 */
  push32(0x10fe3994u); f_10fe3c70();
  /* 10fe3994 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10fe399a jmp 0x10fe39a6 */
  goto L_10fe39a6;
L_10fe399c:;
  /* 10fe399c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10fe39a6:;
  /* 10fe39a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10fe39ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe39af jmp 0x10fe3aa1 */
  goto L_10fe3aa1;
L_10fe39b4:;
  /* 10fe39b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe39b7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe39b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe39ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe39bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10fe39c2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe39c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe39c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe39c7 call 0x10fe3d70 */
  push32(0x10fe39ccu); f_10fe3d70();
  /* 10fe39cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe39cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe39d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe39d6 je 0x10fe3aa1 */
  if (C.zf) goto L_10fe3aa1;
  /* 10fe39dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe39e3 jmp 0x10fe39ee */
  goto L_10fe39ee;
L_10fe39e5:;
  /* 10fe39e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe39e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe39eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe39ee:;
  /* 10fe39ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe39f2 jg 0x10fe3a50 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe3a50;
  /* 10fe39f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe39f8 je 0x10fe3a4e */
  if (C.zf) goto L_10fe3a4e;
  /* 10fe39fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe39fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3a00 mov ecx, dword ptr [eax + 0x110044dc] */
  ECX = (r32((uint32_t)(EAX + 0x110044dc)));
  /* 10fe3a06 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3a07 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10fe3a0d push edx */
  push32((uint32_t)(EDX));
  /* 10fe3a0e call 0x10fe5820 */
  push32(0x10fe3a13u); f_10fe5820();
  /* 10fe3a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3a18 je 0x10fe3a45 */
  if (C.zf) goto L_10fe3a45;
  /* 10fe3a1a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10fe3a20 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3a21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe3a24 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3a25 call 0x10fe3ad0 */
  push32(0x10fe3a2au); f_10fe3ad0();
  /* 10fe3a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3a2f je 0x10fe3a3c */
  if (C.zf) goto L_10fe3a3c;
  /* 10fe3a31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3a34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3a37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fe3a3a jmp 0x10fe3a43 */
  goto L_10fe3a43;
L_10fe3a3c:;
  /* 10fe3a3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10fe3a43:;
  /* 10fe3a43 jmp 0x10fe3a4e */
  goto L_10fe3a4e;
L_10fe3a45:;
  /* 10fe3a45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3a48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3a4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fe3a4e:;
  /* 10fe3a4e jmp 0x10fe39e5 */
  goto L_10fe39e5;
L_10fe3a50:;
  /* 10fe3a50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3a54 je 0x10fe3a7b */
  if (C.zf) goto L_10fe3a7b;
  /* 10fe3a56 call 0x10fe3c70 */
  push32(0x10fe3a5bu); f_10fe3c70();
  /* 10fe3a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe3a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3a60 mov ecx, dword ptr [0x110044dc] */
  ECX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3a67 call 0x10fda620 */
  push32(0x10fe3a6cu); f_10fda620();
  /* 10fe3a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3a6f mov dword ptr [0x110044dc], 0 */
  w32((uint32_t)(0x110044dc), (0x0u));
  /* 10fe3a79 jmp 0x10fe3aa1 */
  goto L_10fe3aa1;
L_10fe3a7b:;
  /* 10fe3a7b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3a7f je 0x10fe3a8e */
  if (C.zf) goto L_10fe3a8e;
  /* 10fe3a81 call 0x10fe3c70 */
  push32(0x10fe3a86u); f_10fe3c70();
  /* 10fe3a86 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10fe3a8c jmp 0x10fe3a98 */
  goto L_10fe3a98;
L_10fe3a8e:;
  /* 10fe3a8e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10fe3a98:;
  /* 10fe3a98 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10fe3a9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fe3aa1:;
  /* 10fe3aa1 jmp 0x10fe3aab */
  goto L_10fe3aab;
L_10fe3aa3:;
  /* 10fe3aa3 call 0x10fe3c70 */
  push32(0x10fe3aa8u); f_10fe3c70();
  /* 10fe3aa8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe3aab:;
  /* 10fe3aab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3aaf je 0x10fe3ac8 */
  if (C.zf) goto L_10fe3ac8;
  /* 10fe3ab1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fe3ab3 call 0x10fdd630 */
  push32(0x10fe3ab8u); f_10fdd630();
  /* 10fe3ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3abb mov eax, dword ptr [0x11005b34] */
  EAX = (r32((uint32_t)(0x11005b34)));
  /* 10fe3ac0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3ac3 mov dword ptr [0x11005b34], eax */
  w32((uint32_t)(0x11005b34), (EAX));
L_10fe3ac8:;
  /* 10fe3ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe3acb:;
  /* 10fe3acb mov esp, ebp */
  ESP = (EBP);
  /* 10fe3acd pop ebp */
  EBP = (pop32());
  /* 10fe3ace ret  */
  ESPCHK(0x10fe36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ad0 @ 0x10fe3ad0 (403 bytes, 117 insns) */
void f_10fe3ad0(void) {
  FTRACE(0x10fe3ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3ad3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3adc push eax */
  push32((uint32_t)(EAX));
  /* 10fe3add lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10fe3ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3ae4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10fe3aea push edx */
  push32((uint32_t)(EDX));
  /* 10fe3aeb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10fe3af1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3af2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3af6 call 0x10fe3d70 */
  push32(0x10fe3afbu); f_10fe3d70();
  /* 10fe3afb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3b00 jne 0x10fe3b09 */
  if (!C.zf) goto L_10fe3b09;
  /* 10fe3b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3b04 jmp 0x10fe3c5f */
  goto L_10fe3c5f;
L_10fe3b09:;
  /* 10fe3b09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10fe3b0e push 0x11001688 */
  push32((uint32_t)(0x11001688u));
  /* 10fe3b13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3b15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10fe3b1b push edx */
  push32((uint32_t)(EDX));
  /* 10fe3b1c call 0x10fdc9c0 */
  push32(0x10fe3b21u); f_10fdc9c0();
  /* 10fe3b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b27 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3b28 call 0x10fd9b90 */
  push32(0x10fe3b2du); f_10fd9b90();
  /* 10fe3b2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe3b33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3b37 jne 0x10fe3b40 */
  if (!C.zf) goto L_10fe3b40;
  /* 10fe3b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3b3b jmp 0x10fe3c5f */
  goto L_10fe3c5f;
L_10fe3b40:;
  /* 10fe3b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3b43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3b46 mov ecx, dword ptr [eax + 0x110044dc] */
  ECX = (r32((uint32_t)(EAX + 0x110044dc)));
  /* 10fe3b4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe3b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3b52 mov eax, dword ptr [edx*4 + 0x110059b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x110059b0)));
  /* 10fe3b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe3b5c push 6 */
  push32((uint32_t)(0x6u));
  /* 10fe3b5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3b61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3b64 add ecx, 0x11005a00 */
  { uint32_t _a=(ECX),_b=(0x11005a00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b6a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3b6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10fe3b6e push edx */
  push32((uint32_t)(EDX));
  /* 10fe3b6f call 0x10fe0470 */
  push32(0x10fe3b74u); f_10fe0470();
  /* 10fe3b74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b77 mov eax, dword ptr [0x110059c8] */
  EAX = (r32((uint32_t)(0x110059c8)));
  /* 10fe3b7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fe3b7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10fe3b85 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3b86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3b89 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3b8a call 0x10fdcb40 */
  push32(0x10fe3b8fu); f_10fdcb40();
  /* 10fe3b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3b95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3b98 mov dword ptr [ecx + 0x110044dc], eax */
  w32((uint32_t)(ECX + 0x110044dc), (EAX));
  /* 10fe3b9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10fe3ba4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe3baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3bad mov dword ptr [eax*4 + 0x110059b0], edx */
  w32((uint32_t)(EAX*4 + 0x110059b0), (EDX));
  /* 10fe3bb4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10fe3bb6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10fe3bbc push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3bc0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3bc3 add edx, 0x11005a00 */
  { uint32_t _a=(EDX),_b=(0x11005a00u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3bc9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3bca call 0x10fe0470 */
  push32(0x10fe3bcfu); f_10fe0470();
  /* 10fe3bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3bd2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3bd6 jne 0x10fe3be3 */
  if (!C.zf) goto L_10fe3be3;
  /* 10fe3bd8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe3bde mov dword ptr [0x110059c8], eax */
  w32((uint32_t)(0x110059c8), (EAX));
L_10fe3be3:;
  /* 10fe3be3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3be7 jne 0x10fe3bf5 */
  if (!C.zf) goto L_10fe3bf5;
  /* 10fe3be9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fe3bef mov dword ptr [0x110059cc], ecx */
  w32((uint32_t)(0x110059cc), (ECX));
L_10fe3bf5:;
  /* 10fe3bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3bf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3bfb call dword ptr [edx + 0x110044e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x110044e0))), 0x10fe3c01u);
  /* 10fe3c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3c03 je 0x10fe3c3c */
  if (C.zf) goto L_10fe3c3c;
  /* 10fe3c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3c08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3c0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3c0e mov dword ptr [eax + 0x110044dc], ecx */
  w32((uint32_t)(EAX + 0x110044dc), (ECX));
  /* 10fe3c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3c16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3c19 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3c1a call 0x10fda620 */
  push32(0x10fe3c1fu); f_10fda620();
  /* 10fe3c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3c25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3c28 mov dword ptr [eax*4 + 0x110059b0], ecx */
  w32((uint32_t)(EAX*4 + 0x110059b0), (ECX));
  /* 10fe3c2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe3c32 mov dword ptr [0x110059c8], edx */
  w32((uint32_t)(0x110059c8), (EDX));
  /* 10fe3c38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3c3a jmp 0x10fe3c5f */
  goto L_10fe3c5f;
L_10fe3c3c:;
  /* 10fe3c3c cmp dword ptr [ebp - 0xc], 0x110043c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x110043c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3c43 je 0x10fe3c53 */
  if (C.zf) goto L_10fe3c53;
  /* 10fe3c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3c47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe3c4a push eax */
  push32((uint32_t)(EAX));
  /* 10fe3c4b call 0x10fda620 */
  push32(0x10fe3c50u); f_10fda620();
  /* 10fe3c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe3c53:;
  /* 10fe3c53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3c56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3c59 mov eax, dword ptr [ecx + 0x110044dc] */
  EAX = (r32((uint32_t)(ECX + 0x110044dc)));
L_10fe3c5f:;
  /* 10fe3c5f mov esp, ebp */
  ESP = (EBP);
  /* 10fe3c61 pop ebp */
  EBP = (pop32());
  /* 10fe3c62 ret  */
  ESPCHK(0x10fe3ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x10fe3c70 (256 bytes, 72 insns) */
void f_10fe3c70(void) {
  FTRACE(0x10fe3c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3c71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3c76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fe3c7d cmp dword ptr [0x110044dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110044dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3c84 jne 0x10fe3ca4 */
  if (!C.zf) goto L_10fe3ca4;
  /* 10fe3c86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10fe3c8b push 0x11001688 */
  push32((uint32_t)(0x11001688u));
  /* 10fe3c90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3c92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10fe3c97 call 0x10fd9b90 */
  push32(0x10fe3c9cu); f_10fd9b90();
  /* 10fe3c9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3c9f mov dword ptr [0x110044dc], eax */
  w32((uint32_t)(0x110044dc), (EAX));
L_10fe3ca4:;
  /* 10fe3ca4 mov eax, dword ptr [0x110044dc] */
  EAX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3ca9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fe3cac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fe3cb3 jmp 0x10fe3cbe */
  goto L_10fe3cbe;
L_10fe3cb5:;
  /* 10fe3cb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3cb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3cbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fe3cbe:;
  /* 10fe3cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3cc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3cc4 mov eax, dword ptr [edx + 0x110044dc] */
  EAX = (r32((uint32_t)(EDX + 0x110044dc)));
  /* 10fe3cca push eax */
  push32((uint32_t)(EAX));
  /* 10fe3ccb push 0x11001694 */
  push32((uint32_t)(0x11001694u));
  /* 10fe3cd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3cd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3cd6 mov edx, dword ptr [ecx + 0x110044d8] */
  EDX = (r32((uint32_t)(ECX + 0x110044d8)));
  /* 10fe3cdc push edx */
  push32((uint32_t)(EDX));
  /* 10fe3cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 10fe3cdf mov eax, dword ptr [0x110044dc] */
  EAX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3ce5 call 0x10fe3f10 */
  push32(0x10fe3ceau); f_10fe3f10();
  /* 10fe3cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3ced cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3cf1 jge 0x10fe3d39 */
  if ((C.sf==C.of)) goto L_10fe3d39;
  /* 10fe3cf3 push 0x11001680 */
  push32((uint32_t)(0x11001680u));
  /* 10fe3cf8 mov ecx, dword ptr [0x110044dc] */
  ECX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3cfe push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3cff call 0x10fdcb50 */
  push32(0x10fe3d04u); f_10fdcb50();
  /* 10fe3d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3d07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3d0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3d0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3d10 mov eax, dword ptr [edx + 0x110044dc] */
  EAX = (r32((uint32_t)(EDX + 0x110044dc)));
  /* 10fe3d16 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3d1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe3d1d mov edx, dword ptr [ecx + 0x110044dc] */
  EDX = (r32((uint32_t)(ECX + 0x110044dc)));
  /* 10fe3d23 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3d24 call 0x10fe5820 */
  push32(0x10fe3d29u); f_10fe5820();
  /* 10fe3d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3d2e je 0x10fe3d37 */
  if (C.zf) goto L_10fe3d37;
  /* 10fe3d30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fe3d37:;
  /* 10fe3d37 jmp 0x10fe3d67 */
  goto L_10fe3d67;
L_10fe3d39:;
  /* 10fe3d39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3d3d jne 0x10fe3d46 */
  if (!C.zf) goto L_10fe3d46;
  /* 10fe3d3f mov eax, dword ptr [0x110044dc] */
  EAX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3d44 jmp 0x10fe3d6c */
  goto L_10fe3d6c;
L_10fe3d46:;
  /* 10fe3d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe3d48 mov eax, dword ptr [0x110044dc] */
  EAX = (r32((uint32_t)(0x110044dc)));
  /* 10fe3d4d push eax */
  push32((uint32_t)(EAX));
  /* 10fe3d4e call 0x10fda620 */
  push32(0x10fe3d53u); f_10fda620();
  /* 10fe3d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3d56 mov dword ptr [0x110044dc], 0 */
  w32((uint32_t)(0x110044dc), (0x0u));
  /* 10fe3d60 mov eax, dword ptr [0x110044f4] */
  EAX = (r32((uint32_t)(0x110044f4)));
  /* 10fe3d65 jmp 0x10fe3d6c */
  goto L_10fe3d6c;
L_10fe3d67:;
  /* 10fe3d67 jmp 0x10fe3cb5 */
  goto L_10fe3cb5;
L_10fe3d6c:;
  /* 10fe3d6c mov esp, ebp */
  ESP = (EBP);
  /* 10fe3d6e pop ebp */
  EBP = (pop32());
  /* 10fe3d6f ret  */
  ESPCHK(0x10fe3c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d70 @ 0x10fe3d70 (388 bytes, 115 insns) */
void f_10fe3d70(void) {
  FTRACE(0x10fe3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3d71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3d73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3d79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3d7d jne 0x10fe3d86 */
  if (!C.zf) goto L_10fe3d86;
  /* 10fe3d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3d81 jmp 0x10fe3ef0 */
  goto L_10fe3ef0;
L_10fe3d86:;
  /* 10fe3d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3d89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe3d8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3d8f jne 0x10fe3de0 */
  if (!C.zf) goto L_10fe3de0;
  /* 10fe3d91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3d94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fe3d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3d9a jne 0x10fe3de0 */
  if (!C.zf) goto L_10fe3de0;
  /* 10fe3d9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3d9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10fe3da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3da5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10fe3da9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3dad je 0x10fe3dc9 */
  if (C.zf) goto L_10fe3dc9;
  /* 10fe3daf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe3db2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10fe3db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe3dba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10fe3dc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe3dc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10fe3dc9:;
  /* 10fe3dc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3dcd je 0x10fe3dd8 */
  if (C.zf) goto L_10fe3dd8;
  /* 10fe3dcf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe3dd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fe3dd8:;
  /* 10fe3dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3ddb jmp 0x10fe3ef0 */
  goto L_10fe3ef0;
L_10fe3de0:;
  /* 10fe3de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3de4 push 0x11004450 */
  push32((uint32_t)(0x11004450u));
  /* 10fe3de9 call 0x10fe5820 */
  push32(0x10fe3deeu); f_10fe5820();
  /* 10fe3dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3df3 je 0x10fe3ea8 */
  if (C.zf) goto L_10fe3ea8;
  /* 10fe3df9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3dfc push edx */
  push32((uint32_t)(EDX));
  /* 10fe3dfd push 0x110043cc */
  push32((uint32_t)(0x110043ccu));
  /* 10fe3e02 call 0x10fe5820 */
  push32(0x10fe3e07u); f_10fe5820();
  /* 10fe3e07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3e0c je 0x10fe3ea8 */
  if (C.zf) goto L_10fe3ea8;
  /* 10fe3e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3e15 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3e16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10fe3e1c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3e1d call 0x10fe3f60 */
  push32(0x10fe3e22u); f_10fe3f60();
  /* 10fe3e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3e27 je 0x10fe3e30 */
  if (C.zf) goto L_10fe3e30;
  /* 10fe3e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3e2b jmp 0x10fe3ef0 */
  goto L_10fe3ef0;
L_10fe3e30:;
  /* 10fe3e30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10fe3e36 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3e37 push 0x110059d8 */
  push32((uint32_t)(0x110059d8u));
  /* 10fe3e3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10fe3e42 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3e43 call 0x10fe5970 */
  push32(0x10fe3e48u); f_10fe5970();
  /* 10fe3e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3e4d jne 0x10fe3e56 */
  if (!C.zf) goto L_10fe3e56;
  /* 10fe3e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3e51 jmp 0x10fe3ef0 */
  goto L_10fe3ef0;
L_10fe3e56:;
  /* 10fe3e56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe3e58 mov cx, word ptr [0x110059dc] */
  CX = (r16((uint32_t)(0x110059dc)));
  /* 10fe3e5f mov dword ptr [0x110059e0], ecx */
  w32((uint32_t)(0x110059e0), (ECX));
  /* 10fe3e65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10fe3e6b push edx */
  push32((uint32_t)(EDX));
  /* 10fe3e6c push 0x11004450 */
  push32((uint32_t)(0x11004450u));
  /* 10fe3e71 call 0x10fe40c0 */
  push32(0x10fe3e76u); f_10fe40c0();
  /* 10fe3e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3e7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe3e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe3e81 je 0x10fe3e96 */
  if (C.zf) goto L_10fe3e96;
  /* 10fe3e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3e86 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3e87 push 0x110043cc */
  push32((uint32_t)(0x110043ccu));
  /* 10fe3e8c call 0x10fdcb40 */
  push32(0x10fe3e91u); f_10fdcb40();
  /* 10fe3e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3e94 jmp 0x10fe3ea8 */
  goto L_10fe3ea8;
L_10fe3e96:;
  /* 10fe3e96 push 0x11004450 */
  push32((uint32_t)(0x11004450u));
  /* 10fe3e9b push 0x110043cc */
  push32((uint32_t)(0x110043ccu));
  /* 10fe3ea0 call 0x10fdcb40 */
  push32(0x10fe3ea5u); f_10fdcb40();
  /* 10fe3ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe3ea8:;
  /* 10fe3ea8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3eac je 0x10fe3ec1 */
  if (C.zf) goto L_10fe3ec1;
  /* 10fe3eae push 6 */
  push32((uint32_t)(0x6u));
  /* 10fe3eb0 push 0x110059d8 */
  push32((uint32_t)(0x110059d8u));
  /* 10fe3eb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe3eb8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3eb9 call 0x10fe0470 */
  push32(0x10fe3ebeu); f_10fe0470();
  /* 10fe3ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe3ec1:;
  /* 10fe3ec1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3ec5 je 0x10fe3eda */
  if (C.zf) goto L_10fe3eda;
  /* 10fe3ec7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fe3ec9 push 0x110059e0 */
  push32((uint32_t)(0x110059e0u));
  /* 10fe3ece mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe3ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3ed2 call 0x10fe0470 */
  push32(0x10fe3ed7u); f_10fe0470();
  /* 10fe3ed7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe3eda:;
  /* 10fe3eda push 0x11004450 */
  push32((uint32_t)(0x11004450u));
  /* 10fe3edf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3ee2 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3ee3 call 0x10fdcb40 */
  push32(0x10fe3ee8u); f_10fdcb40();
  /* 10fe3ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3eeb mov eax, 0x11004450 */
  EAX = (0x11004450u);
L_10fe3ef0:;
  /* 10fe3ef0 mov esp, ebp */
  ESP = (EBP);
  /* 10fe3ef2 pop ebp */
  EBP = (pop32());
  /* 10fe3ef3 ret  */
  ESPCHK(0x10fe3d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f00 @ 0x10fe3f00 (7 bytes, 5 insns) */
void f_10fe3f00(void) {
  FTRACE(0x10fe3f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3f01 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3f05 pop ebp */
  EBP = (pop32());
  /* 10fe3f06 ret  */
  ESPCHK(0x10fe3f00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10fe3f10 (79 bytes, 28 insns) */
void f_10fe3f10(void) {
  FTRACE(0x10fe3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3f11 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3f16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fe3f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe3f1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe3f23 jmp 0x10fe3f2e */
  goto L_10fe3f2e;
L_10fe3f25:;
  /* 10fe3f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3f28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3f2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fe3f2e:;
  /* 10fe3f2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe3f31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3f34 jge 0x10fe3f54 */
  if ((C.sf==C.of)) goto L_10fe3f54;
  /* 10fe3f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3f39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3f3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe3f3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3f42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10fe3f45 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3f49 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3f4a call 0x10fdcb50 */
  push32(0x10fe3f4fu); f_10fdcb50();
  /* 10fe3f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3f52 jmp 0x10fe3f25 */
  goto L_10fe3f25;
L_10fe3f54:;
  /* 10fe3f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe3f5b mov esp, ebp */
  ESP = (EBP);
  /* 10fe3f5d pop ebp */
  EBP = (pop32());
  /* 10fe3f5e ret  */
  ESPCHK(0x10fe3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x10fe3f60 (349 bytes, 122 insns) */
void f_10fe3f60(void) {
  FTRACE(0x10fe3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe3f61 mov ebp, esp */
  EBP = (ESP);
  /* 10fe3f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe3f66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10fe3f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe3f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3f70 push eax */
  push32((uint32_t)(EAX));
  /* 10fe3f71 call 0x10fdd900 */
  push32(0x10fe3f76u); f_10fdd900();
  /* 10fe3f76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3f79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3f7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe3f7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe3f81 jne 0x10fe3f8a */
  if (!C.zf) goto L_10fe3f8a;
  /* 10fe3f83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3f85 jmp 0x10fe40b9 */
  goto L_10fe40b9;
L_10fe3f8a:;
  /* 10fe3f8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3f8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe3f90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3f93 jne 0x10fe3fc0 */
  if (!C.zf) goto L_10fe3fc0;
  /* 10fe3f95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3f98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fe3f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe3f9e je 0x10fe3fc0 */
  if (C.zf) goto L_10fe3fc0;
  /* 10fe3fa0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3fa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe3faa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3fb0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe3fb1 call 0x10fdcb40 */
  push32(0x10fe3fb6u); f_10fdcb40();
  /* 10fe3fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3fbb jmp 0x10fe40b9 */
  goto L_10fe40b9;
L_10fe3fc0:;
  /* 10fe3fc0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe3fc7 jmp 0x10fe3fd2 */
  goto L_10fe3fd2;
L_10fe3fc9:;
  /* 10fe3fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe3fcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3fcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe3fd2:;
  /* 10fe3fd2 push 0x11001698 */
  push32((uint32_t)(0x11001698u));
  /* 10fe3fd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3fda push ecx */
  push32((uint32_t)(ECX));
  /* 10fe3fdb call 0x10fe58b0 */
  push32(0x10fe3fe0u); f_10fe58b0();
  /* 10fe3fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3fe3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe3fe6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe3fea jne 0x10fe3ff4 */
  if (!C.zf) goto L_10fe3ff4;
  /* 10fe3fec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe3fef jmp 0x10fe40b9 */
  goto L_10fe40b9;
L_10fe3ff4:;
  /* 10fe3ff4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe3ff7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe3ffa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe3ffc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10fe3fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4003 jne 0x10fe402a */
  if (!C.zf) goto L_10fe402a;
  /* 10fe4005 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4009 jge 0x10fe402a */
  if ((C.sf==C.of)) goto L_10fe402a;
  /* 10fe400b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe400f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4012 je 0x10fe402a */
  if (C.zf) goto L_10fe402a;
  /* 10fe4014 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4017 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe401b push eax */
  push32((uint32_t)(EAX));
  /* 10fe401c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe401f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4020 call 0x10fdd3b0 */
  push32(0x10fe4025u); f_10fdd3b0();
  /* 10fe4025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4028 jmp 0x10fe4090 */
  goto L_10fe4090;
L_10fe402a:;
  /* 10fe402a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe402e jne 0x10fe4058 */
  if (!C.zf) goto L_10fe4058;
  /* 10fe4030 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4034 jge 0x10fe4058 */
  if ((C.sf==C.of)) goto L_10fe4058;
  /* 10fe4036 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe403a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe403d je 0x10fe4058 */
  if (C.zf) goto L_10fe4058;
  /* 10fe403f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4042 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4043 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe4046 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe404a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe404d push edx */
  push32((uint32_t)(EDX));
  /* 10fe404e call 0x10fdd3b0 */
  push32(0x10fe4053u); f_10fdd3b0();
  /* 10fe4053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4056 jmp 0x10fe4090 */
  goto L_10fe4090;
L_10fe4058:;
  /* 10fe4058 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe405c jne 0x10fe408b */
  if (!C.zf) goto L_10fe408b;
  /* 10fe405e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe4062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe4064 je 0x10fe406f */
  if (C.zf) goto L_10fe406f;
  /* 10fe4066 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe406a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe406d jne 0x10fe408b */
  if (!C.zf) goto L_10fe408b;
L_10fe406f:;
  /* 10fe406f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4072 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe4076 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe407a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4080 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4081 call 0x10fdd3b0 */
  push32(0x10fe4086u); f_10fdd3b0();
  /* 10fe4086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4089 jmp 0x10fe4090 */
  goto L_10fe4090;
L_10fe408b:;
  /* 10fe408b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe408e jmp 0x10fe40b9 */
  goto L_10fe40b9;
L_10fe4090:;
  /* 10fe4090 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe4094 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4097 jne 0x10fe409b */
  if (!C.zf) goto L_10fe409b;
  /* 10fe4099 jmp 0x10fe40b7 */
  goto L_10fe40b7;
L_10fe409b:;
  /* 10fe409b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe409f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe40a1 jne 0x10fe40a5 */
  if (!C.zf) goto L_10fe40a5;
  /* 10fe40a3 jmp 0x10fe40b7 */
  goto L_10fe40b7;
L_10fe40a5:;
  /* 10fe40a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe40a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe40ab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10fe40af mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10fe40b2 jmp 0x10fe3fc9 */
  goto L_10fe3fc9;
L_10fe40b7:;
  /* 10fe40b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe40b9:;
  /* 10fe40b9 mov esp, ebp */
  ESP = (EBP);
  /* 10fe40bb pop ebp */
  EBP = (pop32());
  /* 10fe40bc ret  */
  ESPCHK(0x10fe3f60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10fe40c0 (101 bytes, 36 insns) */
void f_10fe40c0(void) {
  FTRACE(0x10fe40c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe40c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe40c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe40c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe40c6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe40c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe40ca push ecx */
  push32((uint32_t)(ECX));
  /* 10fe40cb call 0x10fdcb40 */
  push32(0x10fe40d0u); f_10fdcb40();
  /* 10fe40d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe40d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe40d6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10fe40da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe40dc je 0x10fe40f8 */
  if (C.zf) goto L_10fe40f8;
  /* 10fe40de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe40e1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe40e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe40e5 push 0x110016a0 */
  push32((uint32_t)(0x110016a0u));
  /* 10fe40ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe40ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe40ef push edx */
  push32((uint32_t)(EDX));
  /* 10fe40f0 call 0x10fe3f10 */
  push32(0x10fe40f5u); f_10fe3f10();
  /* 10fe40f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe40f8:;
  /* 10fe40f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe40fb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10fe4102 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe4104 je 0x10fe4123 */
  if (C.zf) goto L_10fe4123;
  /* 10fe4106 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe4109 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe410f push edx */
  push32((uint32_t)(EDX));
  /* 10fe4110 push 0x1100169c */
  push32((uint32_t)(0x1100169cu));
  /* 10fe4115 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe411a push eax */
  push32((uint32_t)(EAX));
  /* 10fe411b call 0x10fe3f10 */
  push32(0x10fe4120u); f_10fe3f10();
  /* 10fe4120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe4123:;
  /* 10fe4123 pop ebp */
  EBP = (pop32());
  /* 10fe4124 ret  */
  ESPCHK(0x10fe40c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014130 @ 0x10fe4130 (130 bytes, 50 insns) */
void f_10fe4130(void) {
  FTRACE(0x10fe4130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4130 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4131 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4133 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4134 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe4135 push esi */
  push32((uint32_t)(ESI));
  /* 10fe4136 push edi */
  push32((uint32_t)(EDI));
  /* 10fe4137 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe413e:;
  /* 10fe413e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4142 jne 0x10fe4162 */
  if (!C.zf) goto L_10fe4162;
  /* 10fe4144 push 0x110016b0 */
  push32((uint32_t)(0x110016b0u));
  /* 10fe4149 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe414b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10fe414d push 0x110016a4 */
  push32((uint32_t)(0x110016a4u));
  /* 10fe4152 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4154 call 0x10fd8c50 */
  push32(0x10fe4159u); f_10fd8c50();
  /* 10fe4159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe415c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe415f jne 0x10fe4162 */
  if (!C.zf) goto L_10fe4162;
  /* 10fe4161 int3  */
  x86_unimpl("int3 @ 0x10fe4161");
L_10fe4162:;
  /* 10fe4162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe4166 jne 0x10fe413e */
  if (!C.zf) goto L_10fe413e;
  /* 10fe4168 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe416b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe416e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe4171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe4173 je 0x10fe4181 */
  if (C.zf) goto L_10fe4181;
  /* 10fe4175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4178 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10fe417f jmp 0x10fe41a8 */
  goto L_10fe41a8;
L_10fe4181:;
  /* 10fe4181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4184 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4185 call 0x10fe29a0 */
  push32(0x10fe418au); f_10fe29a0();
  /* 10fe418a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe418d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4190 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4191 call 0x10fe41c0 */
  push32(0x10fe4196u); f_10fe41c0();
  /* 10fe4196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe419c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe419f push eax */
  push32((uint32_t)(EAX));
  /* 10fe41a0 call 0x10fe2a10 */
  push32(0x10fe41a5u); f_10fe2a10();
  /* 10fe41a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe41a8:;
  /* 10fe41a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe41ab pop edi */
  EDI = (pop32());
  /* 10fe41ac pop esi */
  ESI = (pop32());
  /* 10fe41ad pop ebx */
  EBX = (pop32());
  /* 10fe41ae mov esp, ebp */
  ESP = (EBP);
  /* 10fe41b0 pop ebp */
  EBP = (pop32());
  /* 10fe41b1 ret  */
  ESPCHK(0x10fe4130u, _esp0);
  ESP += 4; return;
}

/* FUN_100141c0 @ 0x10fe41c0 (190 bytes, 67 insns) */
void f_10fe41c0(void) {
  FTRACE(0x10fe41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe41c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe41c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe41c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe41c7 push esi */
  push32((uint32_t)(ESI));
  /* 10fe41c8 push edi */
  push32((uint32_t)(EDI));
  /* 10fe41c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe41d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe41d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe41d6:;
  /* 10fe41d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe41da jne 0x10fe41fa */
  if (!C.zf) goto L_10fe41fa;
  /* 10fe41dc push 0x11001554 */
  push32((uint32_t)(0x11001554u));
  /* 10fe41e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe41e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10fe41e5 push 0x110016a4 */
  push32((uint32_t)(0x110016a4u));
  /* 10fe41ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe41ec call 0x10fd8c50 */
  push32(0x10fe41f1u); f_10fd8c50();
  /* 10fe41f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe41f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe41f7 jne 0x10fe41fa */
  if (!C.zf) goto L_10fe41fa;
  /* 10fe41f9 int3  */
  x86_unimpl("int3 @ 0x10fe41f9");
L_10fe41fa:;
  /* 10fe41fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe41fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe41fe jne 0x10fe41d6 */
  if (!C.zf) goto L_10fe41d6;
  /* 10fe4200 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4203 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fe4206 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe420b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe420d je 0x10fe426a */
  if (C.zf) goto L_10fe426a;
  /* 10fe420f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4212 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4213 call 0x10fe34c0 */
  push32(0x10fe4218u); f_10fe34c0();
  /* 10fe4218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe421b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe421e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4221 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4222 call 0x10fe6840 */
  push32(0x10fe4227u); f_10fe6840();
  /* 10fe4227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe422a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe422d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe4230 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4231 call 0x10fe6710 */
  push32(0x10fe4236u); f_10fe6710();
  /* 10fe4236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe423b jge 0x10fe4246 */
  if ((C.sf==C.of)) goto L_10fe4246;
  /* 10fe423d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fe4244 jmp 0x10fe426a */
  goto L_10fe426a;
L_10fe4246:;
  /* 10fe4246 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4249 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe424d je 0x10fe426a */
  if (C.zf) goto L_10fe426a;
  /* 10fe424f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4254 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe4257 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4258 call 0x10fda620 */
  push32(0x10fe425du); f_10fda620();
  /* 10fe425d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4260 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4263 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10fe426a:;
  /* 10fe426a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe426d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10fe4274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4277 pop edi */
  EDI = (pop32());
  /* 10fe4278 pop esi */
  ESI = (pop32());
  /* 10fe4279 pop ebx */
  EBX = (pop32());
  /* 10fe427a mov esp, ebp */
  ESP = (EBP);
  /* 10fe427c pop ebp */
  EBP = (pop32());
  /* 10fe427d ret  */
  ESPCHK(0x10fe41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014280 @ 0x10fe4280 (210 bytes, 63 insns) */
void f_10fe4280(void) {
  FTRACE(0x10fe4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4280 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4281 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4283 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4287 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe428d jae 0x10fe42b1 */
  if (!C.cf) goto L_10fe42b1;
  /* 10fe428f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4292 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe4295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4298 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe429b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe429e mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe42a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe42aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe42ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe42af jne 0x10fe42c4 */
  if (!C.zf) goto L_10fe42c4;
L_10fe42b1:;
  /* 10fe42b1 call 0x10fe1a60 */
  push32(0x10fe42b6u); f_10fe1a60();
  /* 10fe42b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe42bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe42bf jmp 0x10fe434e */
  goto L_10fe434e;
L_10fe42c4:;
  /* 10fe42c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe42c7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe42c8 call 0x10fe3280 */
  push32(0x10fe42cdu); f_10fe3280();
  /* 10fe42cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe42d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe42d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe42d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe42d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe42dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe42df mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe42e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fe42eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe42ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe42f0 je 0x10fe432d */
  if (C.zf) goto L_10fe432d;
  /* 10fe42f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe42f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe42f6 call 0x10fe3100 */
  push32(0x10fe42fbu); f_10fe3100();
  /* 10fe42fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe42fe push eax */
  push32((uint32_t)(EAX));
  /* 10fe42ff call dword ptr [0x11008300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008300))), 0x10fe4305u);
  /* 10fe4305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe4307 jne 0x10fe4314 */
  if (!C.zf) goto L_10fe4314;
  /* 10fe4309 call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe430fu);
  /* 10fe430f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe4312 jmp 0x10fe431b */
  goto L_10fe431b;
L_10fe4314:;
  /* 10fe4314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fe431b:;
  /* 10fe431b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe431f jne 0x10fe4323 */
  if (!C.zf) goto L_10fe4323;
  /* 10fe4321 jmp 0x10fe433f */
  goto L_10fe433f;
L_10fe4323:;
  /* 10fe4323 call 0x10fe1a70 */
  push32(0x10fe4328u); f_10fe1a70();
  /* 10fe4328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe432b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fe432d:;
  /* 10fe432d call 0x10fe1a60 */
  push32(0x10fe4332u); f_10fe1a60();
  /* 10fe4332 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe4338 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fe433f:;
  /* 10fe433f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4342 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4343 call 0x10fe3310 */
  push32(0x10fe4348u); f_10fe3310();
  /* 10fe4348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe434e:;
  /* 10fe434e mov esp, ebp */
  ESP = (EBP);
  /* 10fe4350 pop ebp */
  EBP = (pop32());
  /* 10fe4351 ret  */
  ESPCHK(0x10fe4280u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10fe4360 (219 bytes, 64 insns) */
void f_10fe4360(void) {
  FTRACE(0x10fe4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4360 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4361 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4363 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4364 cmp dword ptr [0x110059c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe436b je 0x10fe4401 */
  if (C.zf) goto L_10fe4401;
  /* 10fe4371 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10fe4373 push 0x110016c0 */
  push32((uint32_t)(0x110016c0u));
  /* 10fe4378 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe437a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10fe437f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4381 call 0x10fd9fa0 */
  push32(0x10fe4386u); f_10fd9fa0();
  /* 10fe4386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe438c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4390 jne 0x10fe439c */
  if (!C.zf) goto L_10fe439c;
  /* 10fe4392 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe4397 jmp 0x10fe4437 */
  goto L_10fe4437;
L_10fe439c:;
  /* 10fe439c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe439f push eax */
  push32((uint32_t)(EAX));
  /* 10fe43a0 call 0x10fe4440 */
  push32(0x10fe43a5u); f_10fe4440();
  /* 10fe43a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe43a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe43aa je 0x10fe43cd */
  if (C.zf) goto L_10fe43cd;
  /* 10fe43ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe43af push ecx */
  push32((uint32_t)(ECX));
  /* 10fe43b0 call 0x10fe49d0 */
  push32(0x10fe43b5u); f_10fe49d0();
  /* 10fe43b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe43b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe43ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe43bd push edx */
  push32((uint32_t)(EDX));
  /* 10fe43be call 0x10fda620 */
  push32(0x10fe43c3u); f_10fda620();
  /* 10fe43c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe43c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe43cb jmp 0x10fe4437 */
  goto L_10fe4437;
L_10fe43cd:;
  /* 10fe43cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe43d0 mov dword ptr [0x11004c98], eax */
  w32((uint32_t)(0x11004c98), (EAX));
  /* 10fe43d5 mov ecx, dword ptr [0x110059e4] */
  ECX = (r32((uint32_t)(0x110059e4)));
  /* 10fe43db push ecx */
  push32((uint32_t)(ECX));
  /* 10fe43dc call 0x10fe49d0 */
  push32(0x10fe43e1u); f_10fe49d0();
  /* 10fe43e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe43e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe43e6 mov edx, dword ptr [0x110059e4] */
  EDX = (r32((uint32_t)(0x110059e4)));
  /* 10fe43ec push edx */
  push32((uint32_t)(EDX));
  /* 10fe43ed call 0x10fda620 */
  push32(0x10fe43f2u); f_10fda620();
  /* 10fe43f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe43f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe43f8 mov dword ptr [0x110059e4], eax */
  w32((uint32_t)(0x110059e4), (EAX));
  /* 10fe43fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe43ff jmp 0x10fe4437 */
  goto L_10fe4437;
L_10fe4401:;
  /* 10fe4401 mov dword ptr [0x11004c98], 0x11004ca0 */
  w32((uint32_t)(0x11004c98), (0x11004ca0u));
  /* 10fe440b mov ecx, dword ptr [0x110059e4] */
  ECX = (r32((uint32_t)(0x110059e4)));
  /* 10fe4411 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4412 call 0x10fe49d0 */
  push32(0x10fe4417u); f_10fe49d0();
  /* 10fe4417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe441a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe441c mov edx, dword ptr [0x110059e4] */
  EDX = (r32((uint32_t)(0x110059e4)));
  /* 10fe4422 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4423 call 0x10fda620 */
  push32(0x10fe4428u); f_10fda620();
  /* 10fe4428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe442b mov dword ptr [0x110059e4], 0 */
  w32((uint32_t)(0x110059e4), (0x0u));
  /* 10fe4435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe4437:;
  /* 10fe4437 mov esp, ebp */
  ESP = (EBP);
  /* 10fe4439 pop ebp */
  EBP = (pop32());
  /* 10fe443a ret  */
  ESPCHK(0x10fe4360u, _esp0);
  ESP += 4; return;
}

/* FUN_10014440 @ 0x10fe4440 (1423 bytes, 533 insns) */
void f_10fe4440(void) {
  FTRACE(0x10fe4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4441 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe4446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fe444d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe444f mov ax, word ptr [0x11005a1e] */
  AX = (r16((uint32_t)(0x11005a1e)));
  /* 10fe4455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe4458 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe445a mov cx, word ptr [0x11005a20] */
  CX = (r16((uint32_t)(0x11005a20)));
  /* 10fe4461 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe4464 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4468 jne 0x10fe4472 */
  if (!C.zf) goto L_10fe4472;
  /* 10fe446a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe446d jmp 0x10fe49cb */
  goto L_10fe49cb;
L_10fe4472:;
  /* 10fe4472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4475 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4478 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4479 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10fe447b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe447e push eax */
  push32((uint32_t)(EAX));
  /* 10fe447f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4481 call 0x10fe7d50 */
  push32(0x10fe4486u); f_10fe7d50();
  /* 10fe4486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe448c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe448e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4494 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4497 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4498 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10fe449a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe449d push eax */
  push32((uint32_t)(EAX));
  /* 10fe449e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe44a0 call 0x10fe7d50 */
  push32(0x10fe44a5u); f_10fe7d50();
  /* 10fe44a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe44ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe44ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe44b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe44b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44b6 push edx */
  push32((uint32_t)(EDX));
  /* 10fe44b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10fe44b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe44bc push eax */
  push32((uint32_t)(EAX));
  /* 10fe44bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe44bf call 0x10fe7d50 */
  push32(0x10fe44c4u); f_10fe7d50();
  /* 10fe44c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe44ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe44cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe44cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe44d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44d5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe44d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10fe44d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe44db push eax */
  push32((uint32_t)(EAX));
  /* 10fe44dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe44de call 0x10fe7d50 */
  push32(0x10fe44e3u); f_10fe7d50();
  /* 10fe44e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe44e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe44eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe44ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe44f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe44f4 push edx */
  push32((uint32_t)(EDX));
  /* 10fe44f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10fe44f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe44fa push eax */
  push32((uint32_t)(EAX));
  /* 10fe44fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe44fd call 0x10fe7d50 */
  push32(0x10fe4502u); f_10fe7d50();
  /* 10fe4502 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4508 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe450a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe450d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4510 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4513 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4514 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10fe4516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4519 push eax */
  push32((uint32_t)(EAX));
  /* 10fe451a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe451c call 0x10fe7d50 */
  push32(0x10fe4521u); f_10fe7d50();
  /* 10fe4521 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4524 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4527 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4529 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe452c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe452f push edx */
  push32((uint32_t)(EDX));
  /* 10fe4530 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10fe4532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4535 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4536 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4538 call 0x10fe7d50 */
  push32(0x10fe453du); f_10fe7d50();
  /* 10fe453d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4540 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4543 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4545 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe454b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe454e push edx */
  push32((uint32_t)(EDX));
  /* 10fe454f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10fe4551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4554 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4555 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4557 call 0x10fe7d50 */
  push32(0x10fe455cu); f_10fe7d50();
  /* 10fe455c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe455f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4562 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4564 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe456a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe456d push edx */
  push32((uint32_t)(EDX));
  /* 10fe456e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10fe4570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4573 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4574 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4576 call 0x10fe7d50 */
  push32(0x10fe457bu); f_10fe7d50();
  /* 10fe457b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe457e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4581 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4589 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe458c push edx */
  push32((uint32_t)(EDX));
  /* 10fe458d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10fe458f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4592 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4593 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4595 call 0x10fe7d50 */
  push32(0x10fe459au); f_10fe7d50();
  /* 10fe459a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe459d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe45a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe45a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe45a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe45a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45ab push edx */
  push32((uint32_t)(EDX));
  /* 10fe45ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10fe45ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe45b1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe45b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe45b4 call 0x10fe7d50 */
  push32(0x10fe45b9u); f_10fe7d50();
  /* 10fe45b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe45bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe45c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe45c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe45c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45ca push edx */
  push32((uint32_t)(EDX));
  /* 10fe45cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10fe45cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe45d0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe45d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe45d3 call 0x10fe7d50 */
  push32(0x10fe45d8u); f_10fe7d50();
  /* 10fe45d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe45de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe45e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe45e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe45e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45e9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe45ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10fe45ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe45ef push eax */
  push32((uint32_t)(EAX));
  /* 10fe45f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe45f2 call 0x10fe7d50 */
  push32(0x10fe45f7u); f_10fe7d50();
  /* 10fe45f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe45fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe45fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe45ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4605 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4608 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4609 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fe460b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe460e push eax */
  push32((uint32_t)(EAX));
  /* 10fe460f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4611 call 0x10fe7d50 */
  push32(0x10fe4616u); f_10fe7d50();
  /* 10fe4616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4619 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe461c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe461e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4624 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4627 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4628 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10fe462a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe462d push eax */
  push32((uint32_t)(EAX));
  /* 10fe462e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4630 call 0x10fe7d50 */
  push32(0x10fe4635u); f_10fe7d50();
  /* 10fe4635 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4638 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe463b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe463d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4640 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4643 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4646 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4647 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10fe4649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe464c push eax */
  push32((uint32_t)(EAX));
  /* 10fe464d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe464f call 0x10fe7d50 */
  push32(0x10fe4654u); f_10fe7d50();
  /* 10fe4654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4657 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe465a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe465c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe465f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4662 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4665 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4666 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10fe4668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe466b push eax */
  push32((uint32_t)(EAX));
  /* 10fe466c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe466e call 0x10fe7d50 */
  push32(0x10fe4673u); f_10fe7d50();
  /* 10fe4673 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4679 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe467b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe467e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4681 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4684 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4685 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10fe4687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe468a push eax */
  push32((uint32_t)(EAX));
  /* 10fe468b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe468d call 0x10fe7d50 */
  push32(0x10fe4692u); f_10fe7d50();
  /* 10fe4692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4698 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe469a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe469d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe46a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46a3 push edx */
  push32((uint32_t)(EDX));
  /* 10fe46a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10fe46a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe46a9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe46aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe46ac call 0x10fe7d50 */
  push32(0x10fe46b1u); f_10fe7d50();
  /* 10fe46b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe46b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe46b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe46bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe46bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46c2 push edx */
  push32((uint32_t)(EDX));
  /* 10fe46c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10fe46c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe46c8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe46c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe46cb call 0x10fe7d50 */
  push32(0x10fe46d0u); f_10fe7d50();
  /* 10fe46d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe46d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe46d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe46db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe46de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46e1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe46e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10fe46e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe46e7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe46e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe46ea call 0x10fe7d50 */
  push32(0x10fe46efu); f_10fe7d50();
  /* 10fe46ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe46f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe46f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe46f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe46fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe46fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4700 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4701 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10fe4703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4706 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4709 call 0x10fe7d50 */
  push32(0x10fe470eu); f_10fe7d50();
  /* 10fe470e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4711 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4714 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4716 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe471c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe471f push edx */
  push32((uint32_t)(EDX));
  /* 10fe4720 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10fe4722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4725 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4726 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4728 call 0x10fe7d50 */
  push32(0x10fe472du); f_10fe7d50();
  /* 10fe472d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4733 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4735 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe473b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe473e push edx */
  push32((uint32_t)(EDX));
  /* 10fe473f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10fe4741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4744 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4745 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4747 call 0x10fe7d50 */
  push32(0x10fe474cu); f_10fe7d50();
  /* 10fe474c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe474f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4752 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4754 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe475a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe475d push edx */
  push32((uint32_t)(EDX));
  /* 10fe475e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10fe4760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4763 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4764 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4766 call 0x10fe7d50 */
  push32(0x10fe476bu); f_10fe7d50();
  /* 10fe476b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe476e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4771 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4779 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe477c push edx */
  push32((uint32_t)(EDX));
  /* 10fe477d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10fe477f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4782 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4783 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4785 call 0x10fe7d50 */
  push32(0x10fe478au); f_10fe7d50();
  /* 10fe478a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe478d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4790 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4798 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe479b push edx */
  push32((uint32_t)(EDX));
  /* 10fe479c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10fe479e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe47a1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe47a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe47a4 call 0x10fe7d50 */
  push32(0x10fe47a9u); f_10fe7d50();
  /* 10fe47a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe47af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe47b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe47b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe47b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47ba push edx */
  push32((uint32_t)(EDX));
  /* 10fe47bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10fe47bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe47c0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe47c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe47c3 call 0x10fe7d50 */
  push32(0x10fe47c8u); f_10fe7d50();
  /* 10fe47c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe47ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe47d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe47d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe47d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47d9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe47da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10fe47dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe47df push eax */
  push32((uint32_t)(EAX));
  /* 10fe47e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe47e2 call 0x10fe7d50 */
  push32(0x10fe47e7u); f_10fe7d50();
  /* 10fe47e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe47ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe47ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe47f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe47f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe47f8 push edx */
  push32((uint32_t)(EDX));
  /* 10fe47f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10fe47fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe47fe push eax */
  push32((uint32_t)(EAX));
  /* 10fe47ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4801 call 0x10fe7d50 */
  push32(0x10fe4806u); f_10fe7d50();
  /* 10fe4806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe480c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe480e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4814 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4817 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4818 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10fe481a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe481d push eax */
  push32((uint32_t)(EAX));
  /* 10fe481e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4820 call 0x10fe7d50 */
  push32(0x10fe4825u); f_10fe7d50();
  /* 10fe4825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4828 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe482b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe482d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4833 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4836 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4837 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fe4839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe483c push eax */
  push32((uint32_t)(EAX));
  /* 10fe483d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe483f call 0x10fe7d50 */
  push32(0x10fe4844u); f_10fe7d50();
  /* 10fe4844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe484a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe484c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe484f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4852 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4858 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4859 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10fe485b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe485e push eax */
  push32((uint32_t)(EAX));
  /* 10fe485f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4861 call 0x10fe7d50 */
  push32(0x10fe4866u); f_10fe7d50();
  /* 10fe4866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe486c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe486e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4874 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe487a push edx */
  push32((uint32_t)(EDX));
  /* 10fe487b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fe487d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4880 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4881 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4883 call 0x10fe7d50 */
  push32(0x10fe4888u); f_10fe7d50();
  /* 10fe4888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe488b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe488e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4896 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe489c push edx */
  push32((uint32_t)(EDX));
  /* 10fe489d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fe489f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe48a2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe48a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe48a5 call 0x10fe7d50 */
  push32(0x10fe48aau); f_10fe7d50();
  /* 10fe48aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe48ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe48b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe48b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe48b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe48b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe48be push edx */
  push32((uint32_t)(EDX));
  /* 10fe48bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10fe48c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe48c4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe48c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe48c7 call 0x10fe7d50 */
  push32(0x10fe48ccu); f_10fe7d50();
  /* 10fe48cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe48cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe48d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe48d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe48d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe48da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe48e0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe48e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10fe48e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe48e6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe48e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe48e9 call 0x10fe7d50 */
  push32(0x10fe48eeu); f_10fe7d50();
  /* 10fe48ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe48f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe48f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe48f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe48f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe48fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4902 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4903 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10fe4905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4908 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4909 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe490b call 0x10fe7d50 */
  push32(0x10fe4910u); f_10fe7d50();
  /* 10fe4910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4913 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4916 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4918 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe491b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe491e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4924 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4925 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10fe4927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe492a push eax */
  push32((uint32_t)(EAX));
  /* 10fe492b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe492d call 0x10fe7d50 */
  push32(0x10fe4932u); f_10fe7d50();
  /* 10fe4932 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe4938 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe493a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe493d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4940 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4946 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4947 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10fe4949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe494c push eax */
  push32((uint32_t)(EAX));
  /* 10fe494d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe494f call 0x10fe7d50 */
  push32(0x10fe4954u); f_10fe7d50();
  /* 10fe4954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe495a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe495c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe495f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4962 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4968 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4969 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10fe496b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe496e push eax */
  push32((uint32_t)(EAX));
  /* 10fe496f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4971 call 0x10fe7d50 */
  push32(0x10fe4976u); f_10fe7d50();
  /* 10fe4976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4979 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe497c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe497e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe4981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4984 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe498a push edx */
  push32((uint32_t)(EDX));
  /* 10fe498b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10fe498d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4990 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4991 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4993 call 0x10fe7d50 */
  push32(0x10fe4998u); f_10fe7d50();
  /* 10fe4998 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe499b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe499e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe49a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe49a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe49a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe49ac push edx */
  push32((uint32_t)(EDX));
  /* 10fe49ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10fe49b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe49b5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe49b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe49b8 call 0x10fe7d50 */
  push32(0x10fe49bdu); f_10fe7d50();
  /* 10fe49bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe49c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe49c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe49c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fe49c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10fe49cb:;
  /* 10fe49cb mov esp, ebp */
  ESP = (EBP);
  /* 10fe49cd pop ebp */
  EBP = (pop32());
  /* 10fe49ce ret  */
  ESPCHK(0x10fe4440u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10fe49d0 (779 bytes, 265 insns) */
void f_10fe49d0(void) {
  FTRACE(0x10fe49d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe49d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe49d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe49d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe49d7 jne 0x10fe49de */
  if (!C.zf) goto L_10fe49de;
  /* 10fe49d9 jmp 0x10fe4cd9 */
  goto L_10fe4cd9;
L_10fe49de:;
  /* 10fe49de push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe49e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe49e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe49e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe49e7 call 0x10fda620 */
  push32(0x10fe49ecu); f_10fda620();
  /* 10fe49ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe49ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe49f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe49f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe49f7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe49f8 call 0x10fda620 */
  push32(0x10fe49fdu); f_10fda620();
  /* 10fe49fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe4a08 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4a09 call 0x10fda620 */
  push32(0x10fe4a0eu); f_10fda620();
  /* 10fe4a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe4a19 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4a1a call 0x10fda620 */
  push32(0x10fe4a1fu); f_10fda620();
  /* 10fe4a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a27 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe4a2a push eax */
  push32((uint32_t)(EAX));
  /* 10fe4a2b call 0x10fda620 */
  push32(0x10fe4a30u); f_10fda620();
  /* 10fe4a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a38 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fe4a3b push edx */
  push32((uint32_t)(EDX));
  /* 10fe4a3c call 0x10fda620 */
  push32(0x10fe4a41u); f_10fda620();
  /* 10fe4a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe4a4b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4a4c call 0x10fda620 */
  push32(0x10fe4a51u); f_10fda620();
  /* 10fe4a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a59 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10fe4a5c push eax */
  push32((uint32_t)(EAX));
  /* 10fe4a5d call 0x10fda620 */
  push32(0x10fe4a62u); f_10fda620();
  /* 10fe4a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a6a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10fe4a6d push edx */
  push32((uint32_t)(EDX));
  /* 10fe4a6e call 0x10fda620 */
  push32(0x10fe4a73u); f_10fda620();
  /* 10fe4a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a7b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10fe4a7e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4a7f call 0x10fda620 */
  push32(0x10fe4a84u); f_10fda620();
  /* 10fe4a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a8c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10fe4a8f push eax */
  push32((uint32_t)(EAX));
  /* 10fe4a90 call 0x10fda620 */
  push32(0x10fe4a95u); f_10fda620();
  /* 10fe4a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4a9d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10fe4aa0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4aa1 call 0x10fda620 */
  push32(0x10fe4aa6u); f_10fda620();
  /* 10fe4aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4aab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4aae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10fe4ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4ab2 call 0x10fda620 */
  push32(0x10fe4ab7u); f_10fda620();
  /* 10fe4ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4aba push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4abf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe4ac2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4ac3 call 0x10fda620 */
  push32(0x10fe4ac8u); f_10fda620();
  /* 10fe4ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4acb push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4ad0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10fe4ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4ad4 call 0x10fda620 */
  push32(0x10fe4ad9u); f_10fda620();
  /* 10fe4ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4adc push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4ae1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10fe4ae4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4ae5 call 0x10fda620 */
  push32(0x10fe4aeau); f_10fda620();
  /* 10fe4aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4aed push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4af2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10fe4af5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4af6 call 0x10fda620 */
  push32(0x10fe4afbu); f_10fda620();
  /* 10fe4afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4afe push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10fe4b06 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4b07 call 0x10fda620 */
  push32(0x10fe4b0cu); f_10fda620();
  /* 10fe4b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10fe4b17 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4b18 call 0x10fda620 */
  push32(0x10fe4b1du); f_10fda620();
  /* 10fe4b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10fe4b28 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4b29 call 0x10fda620 */
  push32(0x10fe4b2eu); f_10fda620();
  /* 10fe4b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10fe4b39 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4b3a call 0x10fda620 */
  push32(0x10fe4b3fu); f_10fda620();
  /* 10fe4b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10fe4b4a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4b4b call 0x10fda620 */
  push32(0x10fe4b50u); f_10fda620();
  /* 10fe4b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10fe4b5b push eax */
  push32((uint32_t)(EAX));
  /* 10fe4b5c call 0x10fda620 */
  push32(0x10fe4b61u); f_10fda620();
  /* 10fe4b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10fe4b6c push edx */
  push32((uint32_t)(EDX));
  /* 10fe4b6d call 0x10fda620 */
  push32(0x10fe4b72u); f_10fda620();
  /* 10fe4b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10fe4b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4b7e call 0x10fda620 */
  push32(0x10fe4b83u); f_10fda620();
  /* 10fe4b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10fe4b8e push eax */
  push32((uint32_t)(EAX));
  /* 10fe4b8f call 0x10fda620 */
  push32(0x10fe4b94u); f_10fda620();
  /* 10fe4b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4b9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10fe4b9f push edx */
  push32((uint32_t)(EDX));
  /* 10fe4ba0 call 0x10fda620 */
  push32(0x10fe4ba5u); f_10fda620();
  /* 10fe4ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4bad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10fe4bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4bb1 call 0x10fda620 */
  push32(0x10fe4bb6u); f_10fda620();
  /* 10fe4bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4bb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4bbe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10fe4bc1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4bc2 call 0x10fda620 */
  push32(0x10fe4bc7u); f_10fda620();
  /* 10fe4bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4bca push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4bcf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10fe4bd2 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4bd3 call 0x10fda620 */
  push32(0x10fe4bd8u); f_10fda620();
  /* 10fe4bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4bdb push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4be0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10fe4be3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4be4 call 0x10fda620 */
  push32(0x10fe4be9u); f_10fda620();
  /* 10fe4be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4bec push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4bf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10fe4bf4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4bf5 call 0x10fda620 */
  push32(0x10fe4bfau); f_10fda620();
  /* 10fe4bfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10fe4c08 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4c09 call 0x10fda620 */
  push32(0x10fe4c0eu); f_10fda620();
  /* 10fe4c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c11 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10fe4c1c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4c1d call 0x10fda620 */
  push32(0x10fe4c22u); f_10fda620();
  /* 10fe4c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10fe4c30 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4c31 call 0x10fda620 */
  push32(0x10fe4c36u); f_10fda620();
  /* 10fe4c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10fe4c44 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4c45 call 0x10fda620 */
  push32(0x10fe4c4au); f_10fda620();
  /* 10fe4c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10fe4c58 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4c59 call 0x10fda620 */
  push32(0x10fe4c5eu); f_10fda620();
  /* 10fe4c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10fe4c6c push eax */
  push32((uint32_t)(EAX));
  /* 10fe4c6d call 0x10fda620 */
  push32(0x10fe4c72u); f_10fda620();
  /* 10fe4c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10fe4c80 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4c81 call 0x10fda620 */
  push32(0x10fe4c86u); f_10fda620();
  /* 10fe4c86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4c8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10fe4c94 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4c95 call 0x10fda620 */
  push32(0x10fe4c9au); f_10fda620();
  /* 10fe4c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4ca2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10fe4ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4ca9 call 0x10fda620 */
  push32(0x10fe4caeu); f_10fda620();
  /* 10fe4cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4cb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4cb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4cb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10fe4cbc push edx */
  push32((uint32_t)(EDX));
  /* 10fe4cbd call 0x10fda620 */
  push32(0x10fe4cc2u); f_10fda620();
  /* 10fe4cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4cca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10fe4cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4cd1 call 0x10fda620 */
  push32(0x10fe4cd6u); f_10fda620();
  /* 10fe4cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe4cd9:;
  /* 10fe4cd9 pop ebp */
  EBP = (pop32());
  /* 10fe4cda ret  */
  ESPCHK(0x10fe49d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x10fe4ce0 (678 bytes, 180 insns) */
void f_10fe4ce0(void) {
  FTRACE(0x10fe4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe4ce6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe4ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4cef mov ax, word ptr [0x11005a1a] */
  AX = (r16((uint32_t)(0x11005a1a)));
  /* 10fe4cf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe4cf8 cmp dword ptr [0x110059c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4cff je 0x10fe4e5a */
  if (C.zf) goto L_10fe4e5a;
  /* 10fe4d05 push 0x110059e8 */
  push32((uint32_t)(0x110059e8u));
  /* 10fe4d0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10fe4d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4d0f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4d10 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4d12 call 0x10fe7d50 */
  push32(0x10fe4d17u); f_10fe7d50();
  /* 10fe4d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4d1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe4d1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe4d22 push 0x110059ec */
  push32((uint32_t)(0x110059ecu));
  /* 10fe4d27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10fe4d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4d2c push eax */
  push32((uint32_t)(EAX));
  /* 10fe4d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4d2f call 0x10fe7d50 */
  push32(0x10fe4d34u); f_10fe7d50();
  /* 10fe4d34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4d3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe4d3f push 0x110059f0 */
  push32((uint32_t)(0x110059f0u));
  /* 10fe4d44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10fe4d46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4d49 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe4d4c call 0x10fe7d50 */
  push32(0x10fe4d51u); f_10fe7d50();
  /* 10fe4d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe4d57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe4d59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe4d5c mov edx, dword ptr [0x110059f0] */
  EDX = (r32((uint32_t)(0x110059f0)));
  /* 10fe4d62 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4d63 call 0x10fe4f90 */
  push32(0x10fe4d68u); f_10fe4f90();
  /* 10fe4d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4d6f je 0x10fe4dc9 */
  if (C.zf) goto L_10fe4dc9;
  /* 10fe4d71 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4d73 mov eax, dword ptr [0x110059e8] */
  EAX = (r32((uint32_t)(0x110059e8)));
  /* 10fe4d78 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4d79 call 0x10fda620 */
  push32(0x10fe4d7eu); f_10fda620();
  /* 10fe4d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4d83 mov ecx, dword ptr [0x110059ec] */
  ECX = (r32((uint32_t)(0x110059ec)));
  /* 10fe4d89 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4d8a call 0x10fda620 */
  push32(0x10fe4d8fu); f_10fda620();
  /* 10fe4d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4d94 mov edx, dword ptr [0x110059f0] */
  EDX = (r32((uint32_t)(0x110059f0)));
  /* 10fe4d9a push edx */
  push32((uint32_t)(EDX));
  /* 10fe4d9b call 0x10fda620 */
  push32(0x10fe4da0u); f_10fda620();
  /* 10fe4da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4da3 mov dword ptr [0x110059e8], 0 */
  w32((uint32_t)(0x110059e8), (0x0u));
  /* 10fe4dad mov dword ptr [0x110059ec], 0 */
  w32((uint32_t)(0x110059ec), (0x0u));
  /* 10fe4db7 mov dword ptr [0x110059f0], 0 */
  w32((uint32_t)(0x110059f0), (0x0u));
  /* 10fe4dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4dc4 jmp 0x10fe4f82 */
  goto L_10fe4f82;
L_10fe4dc9:;
  /* 10fe4dc9 mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4dce cmp dword ptr [eax], 0x11004d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11004d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4dd4 je 0x10fe4e10 */
  if (C.zf) goto L_10fe4e10;
  /* 10fe4dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4dd8 mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe4de0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4de1 call 0x10fda620 */
  push32(0x10fe4de6u); f_10fda620();
  /* 10fe4de6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4de9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4deb mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4df0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe4df3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4df4 call 0x10fda620 */
  push32(0x10fe4df9u); f_10fda620();
  /* 10fe4df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4dfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4dfe mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4e04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe4e07 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4e08 call 0x10fda620 */
  push32(0x10fe4e0du); f_10fda620();
  /* 10fe4e0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe4e10:;
  /* 10fe4e10 mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4e16 mov edx, dword ptr [0x110059e8] */
  EDX = (r32((uint32_t)(0x110059e8)));
  /* 10fe4e1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10fe4e1e mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4e23 mov ecx, dword ptr [0x110059ec] */
  ECX = (r32((uint32_t)(0x110059ec)));
  /* 10fe4e29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10fe4e2c mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4e32 mov eax, dword ptr [0x110059f0] */
  EAX = (r32((uint32_t)(0x110059f0)));
  /* 10fe4e37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fe4e3a mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4e40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe4e42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe4e44 mov byte ptr [0x11003ea8], al */
  w8((uint32_t)(0x11003ea8), (AL));
  /* 10fe4e49 mov dword ptr [0x11003eac], 1 */
  w32((uint32_t)(0x11003eac), (0x1u));
  /* 10fe4e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4e55 jmp 0x10fe4f82 */
  goto L_10fe4f82;
L_10fe4e5a:;
  /* 10fe4e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4e5c mov ecx, dword ptr [0x110059e8] */
  ECX = (r32((uint32_t)(0x110059e8)));
  /* 10fe4e62 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4e63 call 0x10fda620 */
  push32(0x10fe4e68u); f_10fda620();
  /* 10fe4e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4e6d mov edx, dword ptr [0x110059ec] */
  EDX = (r32((uint32_t)(0x110059ec)));
  /* 10fe4e73 push edx */
  push32((uint32_t)(EDX));
  /* 10fe4e74 call 0x10fda620 */
  push32(0x10fe4e79u); f_10fda620();
  /* 10fe4e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4e7e mov eax, dword ptr [0x110059f0] */
  EAX = (r32((uint32_t)(0x110059f0)));
  /* 10fe4e83 push eax */
  push32((uint32_t)(EAX));
  /* 10fe4e84 call 0x10fda620 */
  push32(0x10fe4e89u); f_10fda620();
  /* 10fe4e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4e8c mov dword ptr [0x110059e8], 0 */
  w32((uint32_t)(0x110059e8), (0x0u));
  /* 10fe4e96 mov dword ptr [0x110059ec], 0 */
  w32((uint32_t)(0x110059ec), (0x0u));
  /* 10fe4ea0 mov dword ptr [0x110059f0], 0 */
  w32((uint32_t)(0x110059f0), (0x0u));
  /* 10fe4eaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10fe4eaf push 0x110016cc */
  push32((uint32_t)(0x110016ccu));
  /* 10fe4eb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4eb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4eb8 call 0x10fd9b90 */
  push32(0x10fe4ebdu); f_10fd9b90();
  /* 10fe4ebd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4ec0 mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4ec6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fe4ec8 mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4ece cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4ed1 jne 0x10fe4edb */
  if (!C.zf) goto L_10fe4edb;
  /* 10fe4ed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4ed6 jmp 0x10fe4f82 */
  goto L_10fe4f82;
L_10fe4edb:;
  /* 10fe4edb push 0x1100169c */
  push32((uint32_t)(0x1100169cu));
  /* 10fe4ee0 mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4ee5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fe4ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe4ee8 call 0x10fdcb40 */
  push32(0x10fe4eedu); f_10fdcb40();
  /* 10fe4eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4ef0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10fe4ef5 push 0x110016cc */
  push32((uint32_t)(0x110016ccu));
  /* 10fe4efa push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4efc push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4efe call 0x10fd9b90 */
  push32(0x10fe4f03u); f_10fd9b90();
  /* 10fe4f03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4f06 mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10fe4f0f mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4f18 jne 0x10fe4f1f */
  if (!C.zf) goto L_10fe4f1f;
  /* 10fe4f1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4f1d jmp 0x10fe4f82 */
  goto L_10fe4f82;
L_10fe4f1f:;
  /* 10fe4f1f mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fe4f28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fe4f2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10fe4f30 push 0x110016cc */
  push32((uint32_t)(0x110016ccu));
  /* 10fe4f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe4f39 call 0x10fd9b90 */
  push32(0x10fe4f3eu); f_10fd9b90();
  /* 10fe4f3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4f41 mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10fe4f4a mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4f54 jne 0x10fe4f5b */
  if (!C.zf) goto L_10fe4f5b;
  /* 10fe4f56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe4f59 jmp 0x10fe4f82 */
  goto L_10fe4f82;
L_10fe4f5b:;
  /* 10fe4f5b mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fe4f63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10fe4f66 mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe4f6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe4f6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe4f70 mov byte ptr [0x11003ea8], cl */
  w8((uint32_t)(0x11003ea8), (CL));
  /* 10fe4f76 mov dword ptr [0x11003eac], 1 */
  w32((uint32_t)(0x11003eac), (0x1u));
  /* 10fe4f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe4f82:;
  /* 10fe4f82 mov esp, ebp */
  ESP = (EBP);
  /* 10fe4f84 pop ebp */
  EBP = (pop32());
  /* 10fe4f85 ret  */
  ESPCHK(0x10fe4ce0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10fe4f90 (125 bytes, 49 insns) */
void f_10fe4f90(void) {
  FTRACE(0x10fe4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe4f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe4f91 mov ebp, esp */
  EBP = (ESP);
  /* 10fe4f93 push ecx */
  push32((uint32_t)(ECX));
L_10fe4f94:;
  /* 10fe4f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4f97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe4f9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe4f9c je 0x10fe5009 */
  if (C.zf) goto L_10fe5009;
  /* 10fe4f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe4fa4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4fa7 jl 0x10fe4fcd */
  if ((C.sf!=C.of)) goto L_10fe4fcd;
  /* 10fe4fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe4faf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4fb2 jg 0x10fe4fcd */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe4fcd;
  /* 10fe4fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe4fba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe4fbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fc0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fe4fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe4fcb jmp 0x10fe5007 */
  goto L_10fe5007;
L_10fe4fcd:;
  /* 10fe4fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe4fd3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe4fd6 jne 0x10fe4ffe */
  if (!C.zf) goto L_10fe4ffe;
  /* 10fe4fd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe4fdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe4fde:;
  /* 10fe4fde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4fe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4fe4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fe4fe7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe4fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4fec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe4fef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe4ff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe4ff5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe4ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe4ffa jne 0x10fe4fde */
  if (!C.zf) goto L_10fe4fde;
  /* 10fe4ffc jmp 0x10fe5007 */
  goto L_10fe5007;
L_10fe4ffe:;
  /* 10fe4ffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5004 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fe5007:;
  /* 10fe5007 jmp 0x10fe4f94 */
  goto L_10fe4f94;
L_10fe5009:;
  /* 10fe5009 mov esp, ebp */
  ESP = (EBP);
  /* 10fe500b pop ebp */
  EBP = (pop32());
  /* 10fe500c ret  */
  ESPCHK(0x10fe4f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015010 @ 0x10fe5010 (304 bytes, 85 insns) */
void f_10fe5010(void) {
  FTRACE(0x10fe5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5010 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5011 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5013 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5014 cmp dword ptr [0x110059bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe501b je 0x10fe50dc */
  if (C.zf) goto L_10fe50dc;
  /* 10fe5021 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10fe5023 push 0x110016d8 */
  push32((uint32_t)(0x110016d8u));
  /* 10fe5028 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe502a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fe502c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe502e call 0x10fd9fa0 */
  push32(0x10fe5033u); f_10fd9fa0();
  /* 10fe5033 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5036 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe5039 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe503d jne 0x10fe5049 */
  if (!C.zf) goto L_10fe5049;
  /* 10fe503f mov eax, 1 */
  EAX = (0x1u);
  /* 10fe5044 jmp 0x10fe513c */
  goto L_10fe513c;
L_10fe5049:;
  /* 10fe5049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe504c push eax */
  push32((uint32_t)(EAX));
  /* 10fe504d call 0x10fe5140 */
  push32(0x10fe5052u); f_10fe5140();
  /* 10fe5052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5057 je 0x10fe507d */
  if (C.zf) goto L_10fe507d;
  /* 10fe5059 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe505c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe505d call 0x10fe53d0 */
  push32(0x10fe5062u); f_10fe53d0();
  /* 10fe5062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5065 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe506a push edx */
  push32((uint32_t)(EDX));
  /* 10fe506b call 0x10fda620 */
  push32(0x10fe5070u); f_10fda620();
  /* 10fe5070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5073 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe5078 jmp 0x10fe513c */
  goto L_10fe513c;
L_10fe507d:;
  /* 10fe507d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5080 mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe5086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe5088 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe508a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe508d mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe5093 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fe5096 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fe5099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe509c mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe50a2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fe50a5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10fe50a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe50ab mov dword ptr [0x11004d88], eax */
  w32((uint32_t)(0x11004d88), (EAX));
  /* 10fe50b0 mov ecx, dword ptr [0x110059f4] */
  ECX = (r32((uint32_t)(0x110059f4)));
  /* 10fe50b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe50b7 call 0x10fe53d0 */
  push32(0x10fe50bcu); f_10fe53d0();
  /* 10fe50bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe50bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe50c1 mov edx, dword ptr [0x110059f4] */
  EDX = (r32((uint32_t)(0x110059f4)));
  /* 10fe50c7 push edx */
  push32((uint32_t)(EDX));
  /* 10fe50c8 call 0x10fda620 */
  push32(0x10fe50cdu); f_10fda620();
  /* 10fe50cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe50d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe50d3 mov dword ptr [0x110059f4], eax */
  w32((uint32_t)(0x110059f4), (EAX));
  /* 10fe50d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe50da jmp 0x10fe513c */
  goto L_10fe513c;
L_10fe50dc:;
  /* 10fe50dc mov ecx, dword ptr [0x11004d88] */
  ECX = (r32((uint32_t)(0x11004d88)));
  /* 10fe50e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe50e4 mov dword ptr [0x11004d58], edx */
  w32((uint32_t)(0x11004d58), (EDX));
  /* 10fe50ea mov eax, dword ptr [0x11004d88] */
  EAX = (r32((uint32_t)(0x11004d88)));
  /* 10fe50ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fe50f2 mov dword ptr [0x11004d5c], ecx */
  w32((uint32_t)(0x11004d5c), (ECX));
  /* 10fe50f8 mov edx, dword ptr [0x11004d88] */
  EDX = (r32((uint32_t)(0x11004d88)));
  /* 10fe50fe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe5101 mov dword ptr [0x11004d60], eax */
  w32((uint32_t)(0x11004d60), (EAX));
  /* 10fe5106 mov dword ptr [0x11004d88], 0x11004d58 */
  w32((uint32_t)(0x11004d88), (0x11004d58u));
  /* 10fe5110 mov ecx, dword ptr [0x110059f4] */
  ECX = (r32((uint32_t)(0x110059f4)));
  /* 10fe5116 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5117 call 0x10fe53d0 */
  push32(0x10fe511cu); f_10fe53d0();
  /* 10fe511c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe511f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5121 mov edx, dword ptr [0x110059f4] */
  EDX = (r32((uint32_t)(0x110059f4)));
  /* 10fe5127 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5128 call 0x10fda620 */
  push32(0x10fe512du); f_10fda620();
  /* 10fe512d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5130 mov dword ptr [0x110059f4], 0 */
  w32((uint32_t)(0x110059f4), (0x0u));
  /* 10fe513a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe513c:;
  /* 10fe513c mov esp, ebp */
  ESP = (EBP);
  /* 10fe513e pop ebp */
  EBP = (pop32());
  /* 10fe513f ret  */
  ESPCHK(0x10fe5010u, _esp0);
  ESP += 4; return;
}

/* FUN_10015140 @ 0x10fe5140 (525 bytes, 200 insns) */
void f_10fe5140(void) {
  FTRACE(0x10fe5140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5140 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5141 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5146 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe514d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe514f mov ax, word ptr [0x11005a14] */
  AX = (r16((uint32_t)(0x11005a14)));
  /* 10fe5155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe5158 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe515c jne 0x10fe5166 */
  if (!C.zf) goto L_10fe5166;
  /* 10fe515e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5161 jmp 0x10fe5349 */
  goto L_10fe5349;
L_10fe5166:;
  /* 10fe5166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5169 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe516c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe516d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10fe516f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5172 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5173 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5175 call 0x10fe7d50 */
  push32(0x10fe517au); f_10fe7d50();
  /* 10fe517a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe517d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5180 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5182 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe5185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5188 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe518b push edx */
  push32((uint32_t)(EDX));
  /* 10fe518c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10fe518e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5191 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5192 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5194 call 0x10fe7d50 */
  push32(0x10fe5199u); f_10fe7d50();
  /* 10fe5199 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe519c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe519f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe51a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe51a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe51a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51aa push edx */
  push32((uint32_t)(EDX));
  /* 10fe51ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10fe51ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe51b0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe51b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe51b3 call 0x10fe7d50 */
  push32(0x10fe51b8u); f_10fe7d50();
  /* 10fe51b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe51be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe51c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe51c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe51c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51c9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe51ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10fe51cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe51cf push eax */
  push32((uint32_t)(EAX));
  /* 10fe51d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe51d2 call 0x10fe7d50 */
  push32(0x10fe51d7u); f_10fe7d50();
  /* 10fe51d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe51dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe51df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe51e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe51e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51e8 push edx */
  push32((uint32_t)(EDX));
  /* 10fe51e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10fe51eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe51ee push eax */
  push32((uint32_t)(EAX));
  /* 10fe51ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe51f1 call 0x10fe7d50 */
  push32(0x10fe51f6u); f_10fe7d50();
  /* 10fe51f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe51f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe51fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe51fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe5201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5204 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fe5207 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5208 call 0x10fe5350 */
  push32(0x10fe520du); f_10fe5350();
  /* 10fe520d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5213 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5216 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5217 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10fe5219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe521c push edx */
  push32((uint32_t)(EDX));
  /* 10fe521d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe521f call 0x10fe7d50 */
  push32(0x10fe5224u); f_10fe7d50();
  /* 10fe5224 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe522a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe522c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe522f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5232 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5235 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5236 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10fe5238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe523b push eax */
  push32((uint32_t)(EAX));
  /* 10fe523c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe523e call 0x10fe7d50 */
  push32(0x10fe5243u); f_10fe7d50();
  /* 10fe5243 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5246 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5249 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe524b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe524e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5251 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5254 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5255 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10fe5257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe525a push eax */
  push32((uint32_t)(EAX));
  /* 10fe525b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe525d call 0x10fe7d50 */
  push32(0x10fe5262u); f_10fe7d50();
  /* 10fe5262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5268 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe526a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe526d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5270 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5273 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5274 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fe5276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5279 push eax */
  push32((uint32_t)(EAX));
  /* 10fe527a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe527c call 0x10fe7d50 */
  push32(0x10fe5281u); f_10fe7d50();
  /* 10fe5281 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5284 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5287 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5289 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe528c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe528f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5292 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5293 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10fe5295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5298 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5299 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe529b call 0x10fe7d50 */
  push32(0x10fe52a0u); f_10fe7d50();
  /* 10fe52a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe52a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe52a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe52ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe52ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52b1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe52b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10fe52b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe52b7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe52b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe52ba call 0x10fe7d50 */
  push32(0x10fe52bfu); f_10fe7d50();
  /* 10fe52bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe52c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe52c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe52ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe52cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52d0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe52d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10fe52d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe52d6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe52d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe52d9 call 0x10fe7d50 */
  push32(0x10fe52deu); f_10fe7d50();
  /* 10fe52de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe52e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe52e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe52e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe52ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe52ef push edx */
  push32((uint32_t)(EDX));
  /* 10fe52f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10fe52f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe52f5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe52f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe52f8 call 0x10fe7d50 */
  push32(0x10fe52fdu); f_10fe7d50();
  /* 10fe52fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5300 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5303 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5305 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe5308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe530b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe530e push edx */
  push32((uint32_t)(EDX));
  /* 10fe530f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10fe5311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5314 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5315 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe5317 call 0x10fe7d50 */
  push32(0x10fe531cu); f_10fe7d50();
  /* 10fe531c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe531f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5322 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5324 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe5327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe532a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe532d push edx */
  push32((uint32_t)(EDX));
  /* 10fe532e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10fe5330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5333 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5334 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe5336 call 0x10fe7d50 */
  push32(0x10fe533bu); f_10fe7d50();
  /* 10fe533b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe533e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe5341 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5343 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe5346 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fe5349:;
  /* 10fe5349 mov esp, ebp */
  ESP = (EBP);
  /* 10fe534b pop ebp */
  EBP = (pop32());
  /* 10fe534c ret  */
  ESPCHK(0x10fe5140u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10fe5350 (125 bytes, 49 insns) */
void f_10fe5350(void) {
  FTRACE(0x10fe5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5350 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5351 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5353 push ecx */
  push32((uint32_t)(ECX));
L_10fe5354:;
  /* 10fe5354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5357 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe535a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe535c je 0x10fe53c9 */
  if (C.zf) goto L_10fe53c9;
  /* 10fe535e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5361 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe5364 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5367 jl 0x10fe538d */
  if ((C.sf!=C.of)) goto L_10fe538d;
  /* 10fe5369 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe536c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe536f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5372 jg 0x10fe538d */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe538d;
  /* 10fe5374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5377 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe537a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe537d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5380 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fe5382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5388 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe538b jmp 0x10fe53c7 */
  goto L_10fe53c7;
L_10fe538d:;
  /* 10fe538d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5390 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe5393 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5396 jne 0x10fe53be */
  if (!C.zf) goto L_10fe53be;
  /* 10fe5398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe539b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe539e:;
  /* 10fe539e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe53a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe53a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fe53a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fe53a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe53ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe53af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe53b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe53b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe53b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe53ba jne 0x10fe539e */
  if (!C.zf) goto L_10fe539e;
  /* 10fe53bc jmp 0x10fe53c7 */
  goto L_10fe53c7;
L_10fe53be:;
  /* 10fe53be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe53c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe53c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fe53c7:;
  /* 10fe53c7 jmp 0x10fe5354 */
  goto L_10fe5354;
L_10fe53c9:;
  /* 10fe53c9 mov esp, ebp */
  ESP = (EBP);
  /* 10fe53cb pop ebp */
  EBP = (pop32());
  /* 10fe53cc ret  */
  ESPCHK(0x10fe5350u, _esp0);
  ESP += 4; return;
}

/* FUN_100153d0 @ 0x10fe53d0 (147 bytes, 52 insns) */
void f_10fe53d0(void) {
  FTRACE(0x10fe53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe53d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe53d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe53d7 jne 0x10fe53de */
  if (!C.zf) goto L_10fe53de;
  /* 10fe53d9 jmp 0x10fe5461 */
  goto L_10fe5461;
L_10fe53de:;
  /* 10fe53de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe53e1 cmp dword ptr [eax + 0xc], 0x11005a50 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11005a50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe53e8 je 0x10fe5461 */
  if (C.zf) goto L_10fe5461;
  /* 10fe53ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe53ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe53ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe53f2 push edx */
  push32((uint32_t)(EDX));
  /* 10fe53f3 call 0x10fda620 */
  push32(0x10fe53f8u); f_10fda620();
  /* 10fe53f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe53fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe53fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5400 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fe5403 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5404 call 0x10fda620 */
  push32(0x10fe5409u); f_10fda620();
  /* 10fe5409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe540c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe540e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5411 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fe5414 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5415 call 0x10fda620 */
  push32(0x10fe541au); f_10fda620();
  /* 10fe541a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe541d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe541f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5422 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fe5425 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5426 call 0x10fda620 */
  push32(0x10fe542bu); f_10fda620();
  /* 10fe542b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe542e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5433 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fe5436 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5437 call 0x10fda620 */
  push32(0x10fe543cu); f_10fda620();
  /* 10fe543c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe543f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5444 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10fe5447 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5448 call 0x10fda620 */
  push32(0x10fe544du); f_10fda620();
  /* 10fe544d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5450 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5455 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10fe5458 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5459 call 0x10fda620 */
  push32(0x10fe545eu); f_10fda620();
  /* 10fe545e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe5461:;
  /* 10fe5461 pop ebp */
  EBP = (pop32());
  /* 10fe5462 ret  */
  ESPCHK(0x10fe53d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015470 @ 0x10fe5470 (928 bytes, 284 insns) */
void f_10fe5470(void) {
  FTRACE(0x10fe5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5470 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5471 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5473 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5476 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10fe547d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10fe5484 cmp dword ptr [0x110059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe548b je 0x10fe57c1 */
  if (C.zf) goto L_10fe57c1;
  /* 10fe5491 cmp dword ptr [0x110059c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5498 jne 0x10fe54c0 */
  if (!C.zf) goto L_10fe54c0;
  /* 10fe549a push 0x110059c8 */
  push32((uint32_t)(0x110059c8u));
  /* 10fe549f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10fe54a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe54a6 mov ax, word ptr [0x11005a0c] */
  AX = (r16((uint32_t)(0x11005a0c)));
  /* 10fe54ac push eax */
  push32((uint32_t)(EAX));
  /* 10fe54ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe54af call 0x10fe7d50 */
  push32(0x10fe54b4u); f_10fe7d50();
  /* 10fe54b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe54b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe54b9 je 0x10fe54c0 */
  if (C.zf) goto L_10fe54c0;
  /* 10fe54bb jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe54c0:;
  /* 10fe54c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10fe54c2 push 0x110016e4 */
  push32((uint32_t)(0x110016e4u));
  /* 10fe54c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe54c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fe54ce call 0x10fd9b90 */
  push32(0x10fe54d3u); f_10fd9b90();
  /* 10fe54d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe54d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10fe54d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10fe54db push 0x110016e4 */
  push32((uint32_t)(0x110016e4u));
  /* 10fe54e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe54e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fe54e7 call 0x10fd9b90 */
  push32(0x10fe54ecu); f_10fd9b90();
  /* 10fe54ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe54ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fe54f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10fe54f4 push 0x110016e4 */
  push32((uint32_t)(0x110016e4u));
  /* 10fe54f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe54fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10fe5500 call 0x10fd9b90 */
  push32(0x10fe5505u); f_10fd9b90();
  /* 10fe5505 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5508 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10fe550b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10fe550d push 0x110016e4 */
  push32((uint32_t)(0x110016e4u));
  /* 10fe5512 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5514 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fe5519 call 0x10fd9b90 */
  push32(0x10fe551eu); f_10fd9b90();
  /* 10fe551e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5521 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fe5524 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5528 je 0x10fe553c */
  if (C.zf) goto L_10fe553c;
  /* 10fe552a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe552e je 0x10fe553c */
  if (C.zf) goto L_10fe553c;
  /* 10fe5530 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5534 je 0x10fe553c */
  if (C.zf) goto L_10fe553c;
  /* 10fe5536 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe553a jne 0x10fe5541 */
  if (!C.zf) goto L_10fe5541;
L_10fe553c:;
  /* 10fe553c jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe5541:;
  /* 10fe5541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe5544 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fe5547 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fe554e jmp 0x10fe5559 */
  goto L_10fe5559;
L_10fe5550:;
  /* 10fe5550 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe5553 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5556 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10fe5559:;
  /* 10fe5559 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5560 jge 0x10fe5575 */
  if ((C.sf==C.of)) goto L_10fe5575;
  /* 10fe5562 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe5565 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10fe5568 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10fe556a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe556d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5570 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fe5573 jmp 0x10fe5550 */
  goto L_10fe5550;
L_10fe5575:;
  /* 10fe5575 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10fe5578 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5579 mov ecx, dword ptr [0x110059c8] */
  ECX = (r32((uint32_t)(0x110059c8)));
  /* 10fe557f push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5580 call dword ptr [0x11008330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11008330))), 0x10fe5586u);
  /* 10fe5586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5588 jne 0x10fe558f */
  if (!C.zf) goto L_10fe558f;
  /* 10fe558a jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe558f:;
  /* 10fe558f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5593 jbe 0x10fe559a */
  if ((C.cf||C.zf)) goto L_10fe559a;
  /* 10fe5595 jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe559a:;
  /* 10fe559a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe559d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe55a3 mov dword ptr [0x11003ea4], edx */
  w32((uint32_t)(0x11003ea4), (EDX));
  /* 10fe55a9 cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe55b0 jle 0x10fe5609 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe5609;
  /* 10fe55b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10fe55b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fe55b8 jmp 0x10fe55c3 */
  goto L_10fe55c3;
L_10fe55ba:;
  /* 10fe55ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe55bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe55c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10fe55c3:;
  /* 10fe55c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe55c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe55c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe55ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe55cc je 0x10fe5609 */
  if (C.zf) goto L_10fe5609;
  /* 10fe55ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe55d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe55d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fe55d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe55d8 je 0x10fe5609 */
  if (C.zf) goto L_10fe5609;
  /* 10fe55da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe55dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe55df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe55e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fe55e4 jmp 0x10fe55ef */
  goto L_10fe55ef;
L_10fe55e6:;
  /* 10fe55e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe55e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe55ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10fe55ef:;
  /* 10fe55ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe55f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe55f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fe55f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe55fa jg 0x10fe5607 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe5607;
  /* 10fe55fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe55ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5602 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fe5605 jmp 0x10fe55e6 */
  goto L_10fe55e6;
L_10fe5607:;
  /* 10fe5607 jmp 0x10fe55ba */
  goto L_10fe55ba;
L_10fe5609:;
  /* 10fe5609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe560b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe560d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe560f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe5612 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5615 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5616 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe561b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe561e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe561f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5621 call 0x10fe1dc0 */
  push32(0x10fe5626u); f_10fe1dc0();
  /* 10fe5626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe562b jne 0x10fe5632 */
  if (!C.zf) goto L_10fe5632;
  /* 10fe562d jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe5632:;
  /* 10fe5632 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe5635 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10fe563a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe563d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fe5640 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fe5647 jmp 0x10fe5652 */
  goto L_10fe5652;
L_10fe5649:;
  /* 10fe5649 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe564c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe564f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fe5652:;
  /* 10fe5652 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5659 jge 0x10fe5670 */
  if ((C.sf==C.of)) goto L_10fe5670;
  /* 10fe565b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe565e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10fe5662 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10fe5665 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fe5668 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe566b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fe566e jmp 0x10fe5649 */
  goto L_10fe5649;
L_10fe5670:;
  /* 10fe5670 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe5672 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe5674 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe5677 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe567a push edx */
  push32((uint32_t)(EDX));
  /* 10fe567b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fe5680 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe5683 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5684 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5686 call 0x10fe7ff0 */
  push32(0x10fe568bu); f_10fe7ff0();
  /* 10fe568b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe568e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5690 jne 0x10fe5697 */
  if (!C.zf) goto L_10fe5697;
  /* 10fe5692 jmp 0x10fe5782 */
  goto L_10fe5782;
L_10fe5697:;
  /* 10fe5697 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe569a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10fe569f cmp dword ptr [0x11003ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11003ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe56a6 jle 0x10fe5703 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe5703;
  /* 10fe56a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10fe56ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fe56ae jmp 0x10fe56b9 */
  goto L_10fe56b9;
L_10fe56b0:;
  /* 10fe56b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe56b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe56b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10fe56b9:;
  /* 10fe56b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe56bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fe56be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fe56c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe56c2 je 0x10fe5703 */
  if (C.zf) goto L_10fe5703;
  /* 10fe56c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe56c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe56c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fe56cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe56ce je 0x10fe5703 */
  if (C.zf) goto L_10fe5703;
  /* 10fe56d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe56d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe56d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe56d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fe56da jmp 0x10fe56e5 */
  goto L_10fe56e5;
L_10fe56dc:;
  /* 10fe56dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe56df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe56e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fe56e5:;
  /* 10fe56e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fe56e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe56ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fe56ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe56f0 jg 0x10fe5701 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe5701;
  /* 10fe56f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fe56f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe56f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10fe56ff jmp 0x10fe56dc */
  goto L_10fe56dc;
L_10fe5701:;
  /* 10fe5701 jmp 0x10fe56b0 */
  goto L_10fe56b0;
L_10fe5703:;
  /* 10fe5703 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe5706 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5709 mov dword ptr [0x11003c98], eax */
  w32((uint32_t)(0x11003c98), (EAX));
  /* 10fe570e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe5711 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5714 mov dword ptr [0x11003c9c], ecx */
  w32((uint32_t)(0x11003c9c), (ECX));
  /* 10fe571a cmp dword ptr [0x110059f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5721 je 0x10fe5734 */
  if (C.zf) goto L_10fe5734;
  /* 10fe5723 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5725 mov edx, dword ptr [0x110059f8] */
  EDX = (r32((uint32_t)(0x110059f8)));
  /* 10fe572b push edx */
  push32((uint32_t)(EDX));
  /* 10fe572c call 0x10fda620 */
  push32(0x10fe5731u); f_10fda620();
  /* 10fe5731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe5734:;
  /* 10fe5734 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe5737 mov dword ptr [0x110059f8], eax */
  w32((uint32_t)(0x110059f8), (EAX));
  /* 10fe573c cmp dword ptr [0x110059fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110059fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5743 je 0x10fe5756 */
  if (C.zf) goto L_10fe5756;
  /* 10fe5745 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5747 mov ecx, dword ptr [0x110059fc] */
  ECX = (r32((uint32_t)(0x110059fc)));
  /* 10fe574d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe574e call 0x10fda620 */
  push32(0x10fe5753u); f_10fda620();
  /* 10fe5753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe5756:;
  /* 10fe5756 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe5759 mov dword ptr [0x110059fc], edx */
  w32((uint32_t)(0x110059fc), (EDX));
  /* 10fe575f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5761 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe5764 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5765 call 0x10fda620 */
  push32(0x10fe576au); f_10fda620();
  /* 10fe576a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe576d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe576f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe5772 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5773 call 0x10fda620 */
  push32(0x10fe5778u); f_10fda620();
  /* 10fe5778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe577b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe577d jmp 0x10fe580c */
  goto L_10fe580c;
L_10fe5782:;
  /* 10fe5782 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5784 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fe5787 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5788 call 0x10fda620 */
  push32(0x10fe578du); f_10fda620();
  /* 10fe578d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5790 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe5792 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fe5795 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5796 call 0x10fda620 */
  push32(0x10fe579bu); f_10fda620();
  /* 10fe579b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe579e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe57a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fe57a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe57a4 call 0x10fda620 */
  push32(0x10fe57a9u); f_10fda620();
  /* 10fe57a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe57ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe57ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fe57b1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe57b2 call 0x10fda620 */
  push32(0x10fe57b7u); f_10fda620();
  /* 10fe57b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe57ba mov eax, 1 */
  EAX = (0x1u);
  /* 10fe57bf jmp 0x10fe580c */
  goto L_10fe580c;
L_10fe57c1:;
  /* 10fe57c1 mov dword ptr [0x11003c98], 0x11003ca2 */
  w32((uint32_t)(0x11003c98), (0x11003ca2u));
  /* 10fe57cb mov dword ptr [0x11003c9c], 0x11003ca2 */
  w32((uint32_t)(0x11003c9c), (0x11003ca2u));
  /* 10fe57d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe57d7 mov eax, dword ptr [0x110059f8] */
  EAX = (r32((uint32_t)(0x110059f8)));
  /* 10fe57dc push eax */
  push32((uint32_t)(EAX));
  /* 10fe57dd call 0x10fda620 */
  push32(0x10fe57e2u); f_10fda620();
  /* 10fe57e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe57e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe57e7 mov ecx, dword ptr [0x110059fc] */
  ECX = (r32((uint32_t)(0x110059fc)));
  /* 10fe57ed push ecx */
  push32((uint32_t)(ECX));
  /* 10fe57ee call 0x10fda620 */
  push32(0x10fe57f3u); f_10fda620();
  /* 10fe57f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe57f6 mov dword ptr [0x110059f8], 0 */
  w32((uint32_t)(0x110059f8), (0x0u));
  /* 10fe5800 mov dword ptr [0x110059fc], 0 */
  w32((uint32_t)(0x110059fc), (0x0u));
  /* 10fe580a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe580c:;
  /* 10fe580c mov esp, ebp */
  ESP = (EBP);
  /* 10fe580e pop ebp */
  EBP = (pop32());
  /* 10fe580f ret  */
  ESPCHK(0x10fe5470u, _esp0);
  ESP += 4; return;
}

/* FUN_10015810 @ 0x10fe5810 (7 bytes, 5 insns) */
void f_10fe5810(void) {
  FTRACE(0x10fe5810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5810 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5811 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5815 pop ebp */
  EBP = (pop32());
  /* 10fe5816 ret  */
  ESPCHK(0x10fe5810u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10fe5820 (129 bytes, 56 insns) */
void f_10fe5820(void) {
  FTRACE(0x10fe5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5820 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10fe5824 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fe5828 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fe582e jne 0x10fe586c */
  if (!C.zf) goto L_10fe586c;
L_10fe5830:;
  /* 10fe5830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fe5832 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5834 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe5836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe5838 je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe583a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe583d jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe583f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fe5841 je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe5843 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10fe5846 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5849 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe584b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe584d je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe584f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5852 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe5854 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5857 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe585a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fe585c jne 0x10fe5830 */
  if (!C.zf) goto L_10fe5830;
  /* 10fe585e mov edi, edi */
  EDI = (EDI);
L_10fe5860:;
  /* 10fe5860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5862 ret  */
  ESPCHK(0x10fe5820u, _esp0);
  ESP += 4; return;
  /* 10fe5863 nop  */
  /* nop */
L_10fe5864:;
  /* 10fe5864 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5866 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe5868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10fe5869 ret  */
  ESPCHK(0x10fe5820u, _esp0);
  ESP += 4; return;
  /* 10fe586a mov edi, edi */
  EDI = (EDI);
L_10fe586c:;
  /* 10fe586c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10fe5872 je 0x10fe5888 */
  if (C.zf) goto L_10fe5888;
  /* 10fe5874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe5876 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fe5877 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5879 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe587b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10fe587c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe587e je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe5880 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10fe5886 je 0x10fe5830 */
  if (C.zf) goto L_10fe5830;
L_10fe5888:;
  /* 10fe5888 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10fe588b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe588e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5890 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe5892 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe5894 je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe5896 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5899 jne 0x10fe5864 */
  if (!C.zf) goto L_10fe5864;
  /* 10fe589b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fe589d je 0x10fe5860 */
  if (C.zf) goto L_10fe5860;
  /* 10fe589f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe58a2 jmp 0x10fe5830 */
  goto L_10fe5830;
}

/* FUN_100158b0 @ 0x10fe58b0 (62 bytes, 35 insns) */
void f_10fe58b0(void) {
  FTRACE(0x10fe58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe58b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe58b3 push esi */
  push32((uint32_t)(ESI));
  /* 10fe58b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe58b6 push eax */
  push32((uint32_t)(EAX));
  /* 10fe58b7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe58b8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe58b9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe58ba push eax */
  push32((uint32_t)(EAX));
  /* 10fe58bb push eax */
  push32((uint32_t)(EAX));
  /* 10fe58bc push eax */
  push32((uint32_t)(EAX));
  /* 10fe58bd push eax */
  push32((uint32_t)(EAX));
  /* 10fe58be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe58c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe58c4:;
  /* 10fe58c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe58c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe58c8 je 0x10fe58d1 */
  if (C.zf) goto L_10fe58d1;
  /* 10fe58ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fe58cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10fe58cb");
  /* 10fe58cf jmp 0x10fe58c4 */
  goto L_10fe58c4;
L_10fe58d1:;
  /* 10fe58d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe58d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe58d7 nop  */
  /* nop */
L_10fe58d8:;
  /* 10fe58d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10fe58d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe58db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe58dd je 0x10fe58e6 */
  if (C.zf) goto L_10fe58e6;
  /* 10fe58df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe58e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10fe58e0");
  /* 10fe58e4 jae 0x10fe58d8 */
  if (!C.cf) goto L_10fe58d8;
L_10fe58e6:;
  /* 10fe58e6 mov eax, ecx */
  EAX = (ECX);
  /* 10fe58e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe58eb pop esi */
  ESI = (pop32());
  /* 10fe58ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe58ed ret  */
  ESPCHK(0x10fe58b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10fe58f0 (56 bytes, 31 insns) */
void f_10fe58f0(void) {
  FTRACE(0x10fe58f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe58f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe58f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe58f3 push edi */
  push32((uint32_t)(EDI));
  /* 10fe58f4 push esi */
  push32((uint32_t)(ESI));
  /* 10fe58f5 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe58f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe58f9 jecxz 0x10fe5921 */
  x86_unimpl("jecxz @ 0x10fe58f9");
  /* 10fe58fb mov ebx, ecx */
  EBX = (ECX);
  /* 10fe58fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5900 mov esi, edi */
  ESI = (EDI);
  /* 10fe5902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5904 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10fe5906 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe5908 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe590a mov edi, esi */
  EDI = (ESI);
  /* 10fe590c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe590f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10fe5911 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10fe5914 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5916 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fe5919 ja 0x10fe591f */
  if ((!C.cf&&!C.zf)) goto L_10fe591f;
  /* 10fe591b je 0x10fe5921 */
  if (C.zf) goto L_10fe5921;
  /* 10fe591d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fe591e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10fe591f:;
  /* 10fe591f not ecx */
  ECX = (~(ECX));
L_10fe5921:;
  /* 10fe5921 mov eax, ecx */
  EAX = (ECX);
  /* 10fe5923 pop ebx */
  EBX = (pop32());
  /* 10fe5924 pop esi */
  ESI = (pop32());
  /* 10fe5925 pop edi */
  EDI = (pop32());
  /* 10fe5926 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe5927 ret  */
  ESPCHK(0x10fe58f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015930 @ 0x10fe5930 (58 bytes, 32 insns) */
void f_10fe5930(void) {
  FTRACE(0x10fe5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5930 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5931 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5933 push esi */
  push32((uint32_t)(ESI));
  /* 10fe5934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5936 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5937 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5938 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5939 push eax */
  push32((uint32_t)(EAX));
  /* 10fe593a push eax */
  push32((uint32_t)(EAX));
  /* 10fe593b push eax */
  push32((uint32_t)(EAX));
  /* 10fe593c push eax */
  push32((uint32_t)(EAX));
  /* 10fe593d push eax */
  push32((uint32_t)(EAX));
  /* 10fe593e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe5941 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fe5944:;
  /* 10fe5944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe5946 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe5948 je 0x10fe5951 */
  if (C.zf) goto L_10fe5951;
  /* 10fe594a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fe594b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10fe594b");
  /* 10fe594f jmp 0x10fe5944 */
  goto L_10fe5944;
L_10fe5951:;
  /* 10fe5951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10fe5954:;
  /* 10fe5954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fe5956 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fe5958 je 0x10fe5964 */
  if (C.zf) goto L_10fe5964;
  /* 10fe595a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fe595b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10fe595b");
  /* 10fe595f jae 0x10fe5954 */
  if (!C.cf) goto L_10fe5954;
  /* 10fe5961 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10fe5964:;
  /* 10fe5964 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5967 pop esi */
  ESI = (pop32());
  /* 10fe5968 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fe5969 ret  */
  ESPCHK(0x10fe5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10015970 @ 0x10fe5970 (512 bytes, 147 insns) */
void f_10fe5970(void) {
  FTRACE(0x10fe5970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5970 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5971 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5976 cmp dword ptr [0x11005a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe597d jne 0x10fe59a2 */
  if (!C.zf) goto L_10fe59a2;
  /* 10fe597f call 0x10fe6440 */
  push32(0x10fe5984u); f_10fe6440();
  /* 10fe5984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5986 je 0x10fe5992 */
  if (C.zf) goto L_10fe5992;
  /* 10fe5988 mov eax, dword ptr [0x110082f4] */
  EAX = (r32((uint32_t)(0x110082f4)));
  /* 10fe598d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe5990 jmp 0x10fe5999 */
  goto L_10fe5999;
L_10fe5992:;
  /* 10fe5992 mov dword ptr [ebp - 8], 0x10fe6490 */
  w32((uint32_t)(EBP + -0x8), (0x10fe6490u));
L_10fe5999:;
  /* 10fe5999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe599c mov dword ptr [0x11005a44], ecx */
  w32((uint32_t)(0x11005a44), (ECX));
L_10fe59a2:;
  /* 10fe59a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe59a6 jne 0x10fe59b2 */
  if (!C.zf) goto L_10fe59b2;
  /* 10fe59a8 call 0x10fe6290 */
  push32(0x10fe59adu); f_10fe6290();
  /* 10fe59ad jmp 0x10fe5a7e */
  goto L_10fe5a7e;
L_10fe59b2:;
  /* 10fe59b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe59b5 mov dword ptr [0x11005a34], edx */
  w32((uint32_t)(0x11005a34), (EDX));
  /* 10fe59bb cmp dword ptr [0x11005a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe59c2 je 0x10fe59e4 */
  if (C.zf) goto L_10fe59e4;
  /* 10fe59c4 mov eax, dword ptr [0x11005a34] */
  EAX = (r32((uint32_t)(0x11005a34)));
  /* 10fe59c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe59cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe59ce je 0x10fe59e4 */
  if (C.zf) goto L_10fe59e4;
  /* 10fe59d0 push 0x11005a34 */
  push32((uint32_t)(0x11005a34u));
  /* 10fe59d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fe59d7 push 0x11004a90 */
  push32((uint32_t)(0x11004a90u));
  /* 10fe59dc call 0x10fe5b70 */
  push32(0x10fe59e1u); f_10fe5b70();
  /* 10fe59e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe59e4:;
  /* 10fe59e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe59e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe59ea mov dword ptr [0x11005a38], edx */
  w32((uint32_t)(0x11005a38), (EDX));
  /* 10fe59f0 cmp dword ptr [0x11005a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe59f7 je 0x10fe5a19 */
  if (C.zf) goto L_10fe5a19;
  /* 10fe59f9 mov eax, dword ptr [0x11005a38] */
  EAX = (r32((uint32_t)(0x11005a38)));
  /* 10fe59fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe5a01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe5a03 je 0x10fe5a19 */
  if (C.zf) goto L_10fe5a19;
  /* 10fe5a05 push 0x11005a38 */
  push32((uint32_t)(0x11005a38u));
  /* 10fe5a0a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10fe5a0c push 0x110049d8 */
  push32((uint32_t)(0x110049d8u));
  /* 10fe5a11 call 0x10fe5b70 */
  push32(0x10fe5a16u); f_10fe5b70();
  /* 10fe5a16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe5a19:;
  /* 10fe5a19 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe5a23 cmp dword ptr [0x11005a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5a2a je 0x10fe5a5d */
  if (C.zf) goto L_10fe5a5d;
  /* 10fe5a2c mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5a32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fe5a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5a37 je 0x10fe5a5d */
  if (C.zf) goto L_10fe5a5d;
  /* 10fe5a39 cmp dword ptr [0x11005a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5a40 je 0x10fe5a56 */
  if (C.zf) goto L_10fe5a56;
  /* 10fe5a42 mov ecx, dword ptr [0x11005a38] */
  ECX = (r32((uint32_t)(0x11005a38)));
  /* 10fe5a48 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fe5a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe5a4d je 0x10fe5a56 */
  if (C.zf) goto L_10fe5a56;
  /* 10fe5a4f call 0x10fe5c00 */
  push32(0x10fe5a54u); f_10fe5c00();
  /* 10fe5a54 jmp 0x10fe5a5b */
  goto L_10fe5a5b;
L_10fe5a56:;
  /* 10fe5a56 call 0x10fe5ff0 */
  push32(0x10fe5a5bu); f_10fe5ff0();
L_10fe5a5b:;
  /* 10fe5a5b jmp 0x10fe5a7e */
  goto L_10fe5a7e;
L_10fe5a5d:;
  /* 10fe5a5d cmp dword ptr [0x11005a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5a64 je 0x10fe5a79 */
  if (C.zf) goto L_10fe5a79;
  /* 10fe5a66 mov eax, dword ptr [0x11005a38] */
  EAX = (r32((uint32_t)(0x11005a38)));
  /* 10fe5a6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe5a6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe5a70 je 0x10fe5a79 */
  if (C.zf) goto L_10fe5a79;
  /* 10fe5a72 call 0x10fe6190 */
  push32(0x10fe5a77u); f_10fe6190();
  /* 10fe5a77 jmp 0x10fe5a7e */
  goto L_10fe5a7e;
L_10fe5a79:;
  /* 10fe5a79 call 0x10fe6290 */
  push32(0x10fe5a7eu); f_10fe6290();
L_10fe5a7e:;
  /* 10fe5a7e cmp dword ptr [0x11005a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5a85 jne 0x10fe5a8e */
  if (!C.zf) goto L_10fe5a8e;
  /* 10fe5a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5a89 jmp 0x10fe5b6c */
  goto L_10fe5b6c;
L_10fe5a8e:;
  /* 10fe5a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5a91 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5a97 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5a98 call 0x10fe62c0 */
  push32(0x10fe5a9du); f_10fe62c0();
  /* 10fe5a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe5aa3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5aa7 je 0x10fe5abc */
  if (C.zf) goto L_10fe5abc;
  /* 10fe5aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5aac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5ab1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5ab2 call dword ptr [0x110082f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f8))), 0x10fe5ab8u);
  /* 10fe5ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5aba jne 0x10fe5ac3 */
  if (!C.zf) goto L_10fe5ac3;
L_10fe5abc:;
  /* 10fe5abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5abe jmp 0x10fe5b6c */
  goto L_10fe5b6c;
L_10fe5ac3:;
  /* 10fe5ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5ac5 mov ecx, dword ptr [0x11005a24] */
  ECX = (r32((uint32_t)(0x11005a24)));
  /* 10fe5acb push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5acc call dword ptr [0x110082fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082fc))), 0x10fe5ad2u);
  /* 10fe5ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5ad4 jne 0x10fe5add */
  if (!C.zf) goto L_10fe5add;
  /* 10fe5ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5ad8 jmp 0x10fe5b6c */
  goto L_10fe5b6c;
L_10fe5add:;
  /* 10fe5add cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5ae1 je 0x10fe5b08 */
  if (C.zf) goto L_10fe5b08;
  /* 10fe5ae3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe5ae6 mov ax, word ptr [0x11005a24] */
  AX = (r16((uint32_t)(0x11005a24)));
  /* 10fe5aec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10fe5aef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe5af2 mov dx, word ptr [0x11005a40] */
  DX = (r16((uint32_t)(0x11005a40)));
  /* 10fe5af9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10fe5afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe5b00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10fe5b04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10fe5b08:;
  /* 10fe5b08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5b0c je 0x10fe5b67 */
  if (C.zf) goto L_10fe5b67;
  /* 10fe5b0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fe5b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe5b13 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5b14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10fe5b19 mov eax, dword ptr [0x11005a24] */
  EAX = (r32((uint32_t)(0x11005a24)));
  /* 10fe5b1e push eax */
  push32((uint32_t)(EAX));
  /* 10fe5b1f call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe5b25u);
  /* 10fe5b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5b27 jne 0x10fe5b2d */
  if (!C.zf) goto L_10fe5b2d;
  /* 10fe5b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5b2b jmp 0x10fe5b6c */
  goto L_10fe5b6c;
L_10fe5b2d:;
  /* 10fe5b2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fe5b2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe5b32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5b35 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5b36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10fe5b3b mov edx, dword ptr [0x11005a40] */
  EDX = (r32((uint32_t)(0x11005a40)));
  /* 10fe5b41 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5b42 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe5b48u);
  /* 10fe5b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5b4a jne 0x10fe5b50 */
  if (!C.zf) goto L_10fe5b50;
  /* 10fe5b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5b4e jmp 0x10fe5b6c */
  goto L_10fe5b6c;
L_10fe5b50:;
  /* 10fe5b50 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fe5b52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe5b55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5b5a push eax */
  push32((uint32_t)(EAX));
  /* 10fe5b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5b5e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5b5f call 0x10fdc6d0 */
  push32(0x10fe5b64u); f_10fdc6d0();
  /* 10fe5b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe5b67:;
  /* 10fe5b67 mov eax, 1 */
  EAX = (0x1u);
L_10fe5b6c:;
  /* 10fe5b6c mov esp, ebp */
  ESP = (EBP);
  /* 10fe5b6e pop ebp */
  EBP = (pop32());
  /* 10fe5b6f ret  */
  ESPCHK(0x10fe5970u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b70 @ 0x10fe5b70 (130 bytes, 47 insns) */
void f_10fe5b70(void) {
  FTRACE(0x10fe5b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5b71 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5b76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fe5b7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10fe5b84:;
  /* 10fe5b84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe5b87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5b8a jg 0x10fe5bee */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe5bee;
  /* 10fe5b8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5b90 je 0x10fe5bee */
  if (C.zf) goto L_10fe5bee;
  /* 10fe5b92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe5b95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5b98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe5b99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5b9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe5b9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe5ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5ba6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10fe5ba9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5baa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe5bad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fe5baf push edx */
  push32((uint32_t)(EDX));
  /* 10fe5bb0 call 0x10fe8260 */
  push32(0x10fe5bb5u); f_10fe8260();
  /* 10fe5bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5bb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe5bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5bbf jne 0x10fe5bd2 */
  if (!C.zf) goto L_10fe5bd2;
  /* 10fe5bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5bc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5bc7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10fe5bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe5bce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fe5bd0 jmp 0x10fe5bec */
  goto L_10fe5bec;
L_10fe5bd2:;
  /* 10fe5bd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5bd6 jge 0x10fe5be3 */
  if ((C.sf==C.of)) goto L_10fe5be3;
  /* 10fe5bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5bdb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5bde mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10fe5be1 jmp 0x10fe5bec */
  goto L_10fe5bec;
L_10fe5be3:;
  /* 10fe5be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5be6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5be9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fe5bec:;
  /* 10fe5bec jmp 0x10fe5b84 */
  goto L_10fe5b84;
L_10fe5bee:;
  /* 10fe5bee mov esp, ebp */
  ESP = (EBP);
  /* 10fe5bf0 pop ebp */
  EBP = (pop32());
  /* 10fe5bf1 ret  */
  ESPCHK(0x10fe5b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c00 @ 0x10fe5c00 (186 bytes, 50 insns) */
void f_10fe5c00(void) {
  FTRACE(0x10fe5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5c01 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5c04 mov eax, dword ptr [0x11005a34] */
  EAX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5c09 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5c0a call 0x10fdc9c0 */
  push32(0x10fe5c0fu); f_10fdc9c0();
  /* 10fe5c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5c12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5c14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5c17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fe5c1a mov dword ptr [0x11005a30], ecx */
  w32((uint32_t)(0x11005a30), (ECX));
  /* 10fe5c20 mov edx, dword ptr [0x11005a38] */
  EDX = (r32((uint32_t)(0x11005a38)));
  /* 10fe5c26 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5c27 call 0x10fdc9c0 */
  push32(0x10fe5c2cu); f_10fdc9c0();
  /* 10fe5c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5c2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5c31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5c34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fe5c37 mov dword ptr [0x11005a28], ecx */
  w32((uint32_t)(0x11005a28), (ECX));
  /* 10fe5c3d mov dword ptr [0x11005a24], 0 */
  w32((uint32_t)(0x11005a24), (0x0u));
  /* 10fe5c47 cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5c4e je 0x10fe5c59 */
  if (C.zf) goto L_10fe5c59;
  /* 10fe5c50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fe5c57 jmp 0x10fe5c6b */
  goto L_10fe5c6b;
L_10fe5c59:;
  /* 10fe5c59 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5c5f push edx */
  push32((uint32_t)(EDX));
  /* 10fe5c60 call 0x10fe66a0 */
  push32(0x10fe5c65u); f_10fe66a0();
  /* 10fe5c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5c68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe5c6b:;
  /* 10fe5c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe5c6e mov dword ptr [0x11005a2c], eax */
  w32((uint32_t)(0x11005a2c), (EAX));
  /* 10fe5c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5c75 push 0x10fe5cc0 */
  push32((uint32_t)(0x10fe5cc0u));
  /* 10fe5c7a call dword ptr [0x110082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f0))), 0x10fe5c80u);
  /* 10fe5c80 mov ecx, dword ptr [0x11005a3c] */
  ECX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5c86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe5c8e je 0x10fe5cac */
  if (C.zf) goto L_10fe5cac;
  /* 10fe5c90 mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5c96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe5c9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe5c9e je 0x10fe5cac */
  if (C.zf) goto L_10fe5cac;
  /* 10fe5ca0 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5ca5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5caa jne 0x10fe5cb6 */
  if (!C.zf) goto L_10fe5cb6;
L_10fe5cac:;
  /* 10fe5cac mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
L_10fe5cb6:;
  /* 10fe5cb6 mov esp, ebp */
  ESP = (EBP);
  /* 10fe5cb8 pop ebp */
  EBP = (pop32());
  /* 10fe5cb9 ret  */
  ESPCHK(0x10fe5c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cc0 @ 0x10fe5cc0 (804 bytes, 220 insns) */
void f_10fe5cc0(void) {
  FTRACE(0x10fe5cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5cc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe5cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5cca call 0x10fe6620 */
  push32(0x10fe5ccfu); f_10fe6620();
  /* 10fe5ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5cd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fe5cd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe5cd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe5cda push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5cdb mov edx, dword ptr [0x11005a28] */
  EDX = (r32((uint32_t)(0x11005a28)));
  /* 10fe5ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe5ce3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5ce5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe5ceb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5cf1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5cf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5cf5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5cf6 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe5cfcu);
  /* 10fe5cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5cfe jne 0x10fe5d14 */
  if (!C.zf) goto L_10fe5d14;
  /* 10fe5d00 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe5d0a mov eax, 1 */
  EAX = (0x1u);
  /* 10fe5d0f jmp 0x10fe5fde */
  goto L_10fe5fde;
L_10fe5d14:;
  /* 10fe5d14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe5d17 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5d18 mov edx, dword ptr [0x11005a38] */
  EDX = (r32((uint32_t)(0x11005a38)));
  /* 10fe5d1e push edx */
  push32((uint32_t)(EDX));
  /* 10fe5d1f call 0x10fe8260 */
  push32(0x10fe5d24u); f_10fe8260();
  /* 10fe5d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5d29 jne 0x10fe5e4f */
  if (!C.zf) goto L_10fe5e4f;
  /* 10fe5d2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe5d31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fe5d34 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5d35 mov ecx, dword ptr [0x11005a30] */
  ECX = (r32((uint32_t)(0x11005a30)));
  /* 10fe5d3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe5d3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5d3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5d45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5d4b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5d4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5d4f push edx */
  push32((uint32_t)(EDX));
  /* 10fe5d50 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe5d56u);
  /* 10fe5d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5d58 jne 0x10fe5d6e */
  if (!C.zf) goto L_10fe5d6e;
  /* 10fe5d5a mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe5d64 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe5d69 jmp 0x10fe5fde */
  goto L_10fe5fde;
L_10fe5d6e:;
  /* 10fe5d6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fe5d71 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5d72 mov ecx, dword ptr [0x11005a34] */
  ECX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5d78 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5d79 call 0x10fe8260 */
  push32(0x10fe5d7eu); f_10fe8260();
  /* 10fe5d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5d83 jne 0x10fe5db0 */
  if (!C.zf) goto L_10fe5db0;
  /* 10fe5d85 mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5d8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe5d91 mov dword ptr [0x11005a3c], edx */
  w32((uint32_t)(0x11005a3c), (EDX));
  /* 10fe5d97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5d9a mov dword ptr [0x11005a40], eax */
  w32((uint32_t)(0x11005a40), (EAX));
  /* 10fe5d9f mov ecx, dword ptr [0x11005a40] */
  ECX = (r32((uint32_t)(0x11005a40)));
  /* 10fe5da5 mov dword ptr [0x11005a24], ecx */
  w32((uint32_t)(0x11005a24), (ECX));
  /* 10fe5dab jmp 0x10fe5e4f */
  goto L_10fe5e4f;
L_10fe5db0:;
  /* 10fe5db0 mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5db6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe5db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe5dbb jne 0x10fe5e4f */
  if (!C.zf) goto L_10fe5e4f;
  /* 10fe5dc1 cmp dword ptr [0x11005a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5dc8 je 0x10fe5e1d */
  if (C.zf) goto L_10fe5e1d;
  /* 10fe5dca mov eax, dword ptr [0x11005a2c] */
  EAX = (r32((uint32_t)(0x11005a2c)));
  /* 10fe5dcf push eax */
  push32((uint32_t)(EAX));
  /* 10fe5dd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe5dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5dd4 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5dda push edx */
  push32((uint32_t)(EDX));
  /* 10fe5ddb call 0x10fe8330 */
  push32(0x10fe5de0u); f_10fe8330();
  /* 10fe5de0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5de5 jne 0x10fe5e1d */
  if (!C.zf) goto L_10fe5e1d;
  /* 10fe5de7 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5dec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10fe5dee mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe5df3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5df6 mov dword ptr [0x11005a40], ecx */
  w32((uint32_t)(0x11005a40), (ECX));
  /* 10fe5dfc mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5e02 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5e03 call 0x10fdc9c0 */
  push32(0x10fe5e08u); f_10fdc9c0();
  /* 10fe5e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5e0b cmp eax, dword ptr [0x11005a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11005a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5e11 jne 0x10fe5e1b */
  if (!C.zf) goto L_10fe5e1b;
  /* 10fe5e13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5e16 mov dword ptr [0x11005a24], eax */
  w32((uint32_t)(0x11005a24), (EAX));
L_10fe5e1b:;
  /* 10fe5e1b jmp 0x10fe5e4f */
  goto L_10fe5e4f;
L_10fe5e1d:;
  /* 10fe5e1d mov ecx, dword ptr [0x11005a3c] */
  ECX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5e23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5e26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe5e28 jne 0x10fe5e4f */
  if (!C.zf) goto L_10fe5e4f;
  /* 10fe5e2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5e2d push edx */
  push32((uint32_t)(EDX));
  /* 10fe5e2e call 0x10fe6360 */
  push32(0x10fe5e33u); f_10fe6360();
  /* 10fe5e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5e36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5e38 je 0x10fe5e4f */
  if (C.zf) goto L_10fe5e4f;
  /* 10fe5e3a mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5e3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10fe5e41 mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe5e46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5e49 mov dword ptr [0x11005a40], ecx */
  w32((uint32_t)(0x11005a40), (ECX));
L_10fe5e4f:;
  /* 10fe5e4f mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5e55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe5e5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5e61 je 0x10fe5fd1 */
  if (C.zf) goto L_10fe5fd1;
  /* 10fe5e67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe5e69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fe5e6c push eax */
  push32((uint32_t)(EAX));
  /* 10fe5e6d mov ecx, dword ptr [0x11005a30] */
  ECX = (r32((uint32_t)(0x11005a30)));
  /* 10fe5e73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe5e75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5e77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe5e7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5e84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5e87 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5e88 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe5e8eu);
  /* 10fe5e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5e90 jne 0x10fe5ea6 */
  if (!C.zf) goto L_10fe5ea6;
  /* 10fe5e92 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe5e9c mov eax, 1 */
  EAX = (0x1u);
  /* 10fe5ea1 jmp 0x10fe5fde */
  goto L_10fe5fde;
L_10fe5ea6:;
  /* 10fe5ea6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fe5ea9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5eaa mov ecx, dword ptr [0x11005a34] */
  ECX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5eb1 call 0x10fe8260 */
  push32(0x10fe5eb6u); f_10fe8260();
  /* 10fe5eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5ebb jne 0x10fe5f70 */
  if (!C.zf) goto L_10fe5f70;
  /* 10fe5ec1 mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5ec7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fe5eca mov dword ptr [0x11005a3c], edx */
  w32((uint32_t)(0x11005a3c), (EDX));
  /* 10fe5ed0 cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5ed7 je 0x10fe5efa */
  if (C.zf) goto L_10fe5efa;
  /* 10fe5ed9 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5ede or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fe5ee1 mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe5ee6 cmp dword ptr [0x11005a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5eed jne 0x10fe5ef8 */
  if (!C.zf) goto L_10fe5ef8;
  /* 10fe5eef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5ef2 mov dword ptr [0x11005a24], ecx */
  w32((uint32_t)(0x11005a24), (ECX));
L_10fe5ef8:;
  /* 10fe5ef8 jmp 0x10fe5f6e */
  goto L_10fe5f6e;
L_10fe5efa:;
  /* 10fe5efa cmp dword ptr [0x11005a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f01 je 0x10fe5f4f */
  if (C.zf) goto L_10fe5f4f;
  /* 10fe5f03 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5f09 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5f0a call 0x10fdc9c0 */
  push32(0x10fe5f0fu); f_10fdc9c0();
  /* 10fe5f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5f12 cmp eax, dword ptr [0x11005a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11005a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f18 jne 0x10fe5f4f */
  if (!C.zf) goto L_10fe5f4f;
  /* 10fe5f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe5f1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5f1f push eax */
  push32((uint32_t)(EAX));
  /* 10fe5f20 call 0x10fe63b0 */
  push32(0x10fe5f25u); f_10fe63b0();
  /* 10fe5f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5f2a je 0x10fe5f4d */
  if (C.zf) goto L_10fe5f4d;
  /* 10fe5f2c mov ecx, dword ptr [0x11005a3c] */
  ECX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5f32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10fe5f35 mov dword ptr [0x11005a3c], ecx */
  w32((uint32_t)(0x11005a3c), (ECX));
  /* 10fe5f3b cmp dword ptr [0x11005a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f42 jne 0x10fe5f4d */
  if (!C.zf) goto L_10fe5f4d;
  /* 10fe5f44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5f47 mov dword ptr [0x11005a24], edx */
  w32((uint32_t)(0x11005a24), (EDX));
L_10fe5f4d:;
  /* 10fe5f4d jmp 0x10fe5f6e */
  goto L_10fe5f6e;
L_10fe5f4f:;
  /* 10fe5f4f mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5f54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fe5f57 mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe5f5c cmp dword ptr [0x11005a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f63 jne 0x10fe5f6e */
  if (!C.zf) goto L_10fe5f6e;
  /* 10fe5f65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5f68 mov dword ptr [0x11005a24], ecx */
  w32((uint32_t)(0x11005a24), (ECX));
L_10fe5f6e:;
  /* 10fe5f6e jmp 0x10fe5fd1 */
  goto L_10fe5fd1;
L_10fe5f70:;
  /* 10fe5f70 cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f77 jne 0x10fe5fd1 */
  if (!C.zf) goto L_10fe5fd1;
  /* 10fe5f79 cmp dword ptr [0x11005a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5f80 je 0x10fe5fd1 */
  if (C.zf) goto L_10fe5fd1;
  /* 10fe5f82 mov edx, dword ptr [0x11005a2c] */
  EDX = (r32((uint32_t)(0x11005a2c)));
  /* 10fe5f88 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5f89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fe5f8c push eax */
  push32((uint32_t)(EAX));
  /* 10fe5f8d mov ecx, dword ptr [0x11005a34] */
  ECX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5f94 call 0x10fe8330 */
  push32(0x10fe5f99u); f_10fe8330();
  /* 10fe5f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5f9e jne 0x10fe5fd1 */
  if (!C.zf) goto L_10fe5fd1;
  /* 10fe5fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe5fa2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10fe5fa6 call 0x10fe63b0 */
  push32(0x10fe5fabu); f_10fe63b0();
  /* 10fe5fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe5fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe5fb0 je 0x10fe5fd1 */
  if (C.zf) goto L_10fe5fd1;
  /* 10fe5fb2 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5fb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fe5fba mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe5fbf cmp dword ptr [0x11005a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe5fc6 jne 0x10fe5fd1 */
  if (!C.zf) goto L_10fe5fd1;
  /* 10fe5fc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe5fcb mov dword ptr [0x11005a24], ecx */
  w32((uint32_t)(0x11005a24), (ECX));
L_10fe5fd1:;
  /* 10fe5fd1 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe5fd6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe5fd9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe5fdb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe5fdd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fe5fde:;
  /* 10fe5fde mov esp, ebp */
  ESP = (EBP);
  /* 10fe5fe0 pop ebp */
  EBP = (pop32());
  /* 10fe5fe1 ret 4 */
  ESPCHK(0x10fe5cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015ff0 @ 0x10fe5ff0 (116 bytes, 33 insns) */
void f_10fe5ff0(void) {
  FTRACE(0x10fe5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe5ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe5ff4 mov eax, dword ptr [0x11005a34] */
  EAX = (r32((uint32_t)(0x11005a34)));
  /* 10fe5ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe5ffa call 0x10fdc9c0 */
  push32(0x10fe5fffu); f_10fdc9c0();
  /* 10fe5fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe6004 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6007 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fe600a mov dword ptr [0x11005a30], ecx */
  w32((uint32_t)(0x11005a30), (ECX));
  /* 10fe6010 cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6017 je 0x10fe6022 */
  if (C.zf) goto L_10fe6022;
  /* 10fe6019 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fe6020 jmp 0x10fe6034 */
  goto L_10fe6034;
L_10fe6022:;
  /* 10fe6022 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe6028 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6029 call 0x10fe66a0 */
  push32(0x10fe602eu); f_10fe66a0();
  /* 10fe602e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6031 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe6034:;
  /* 10fe6034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6037 mov dword ptr [0x11005a2c], eax */
  w32((uint32_t)(0x11005a2c), (EAX));
  /* 10fe603c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe603e push 0x10fe6070 */
  push32((uint32_t)(0x10fe6070u));
  /* 10fe6043 call dword ptr [0x110082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f0))), 0x10fe6049u);
  /* 10fe6049 mov ecx, dword ptr [0x11005a3c] */
  ECX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe604f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe6052 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe6054 jne 0x10fe6060 */
  if (!C.zf) goto L_10fe6060;
  /* 10fe6056 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
L_10fe6060:;
  /* 10fe6060 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6062 pop ebp */
  EBP = (pop32());
  /* 10fe6063 ret  */
  ESPCHK(0x10fe5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016070 @ 0x10fe6070 (287 bytes, 86 insns) */
void f_10fe6070(void) {
  FTRACE(0x10fe6070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6070 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6071 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6073 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6079 push eax */
  push32((uint32_t)(EAX));
  /* 10fe607a call 0x10fe6620 */
  push32(0x10fe607fu); f_10fe6620();
  /* 10fe607f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6082 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fe6085 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe6087 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe608a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe608b mov edx, dword ptr [0x11005a30] */
  EDX = (r32((uint32_t)(0x11005a30)));
  /* 10fe6091 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe6093 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6095 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe609b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe60a1 push edx */
  push32((uint32_t)(EDX));
  /* 10fe60a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe60a5 push eax */
  push32((uint32_t)(EAX));
  /* 10fe60a6 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe60acu);
  /* 10fe60ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe60ae jne 0x10fe60c4 */
  if (!C.zf) goto L_10fe60c4;
  /* 10fe60b0 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe60ba mov eax, 1 */
  EAX = (0x1u);
  /* 10fe60bf jmp 0x10fe6189 */
  goto L_10fe6189;
L_10fe60c4:;
  /* 10fe60c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe60c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe60c8 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe60ce push edx */
  push32((uint32_t)(EDX));
  /* 10fe60cf call 0x10fe8260 */
  push32(0x10fe60d4u); f_10fe8260();
  /* 10fe60d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe60d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe60d9 jne 0x10fe6119 */
  if (!C.zf) goto L_10fe6119;
  /* 10fe60db cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe60e2 jne 0x10fe60f6 */
  if (!C.zf) goto L_10fe60f6;
  /* 10fe60e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe60e6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe60e9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe60ea call 0x10fe63b0 */
  push32(0x10fe60efu); f_10fe63b0();
  /* 10fe60ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe60f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe60f4 je 0x10fe6117 */
  if (C.zf) goto L_10fe6117;
L_10fe60f6:;
  /* 10fe60f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe60f9 mov dword ptr [0x11005a40], ecx */
  w32((uint32_t)(0x11005a40), (ECX));
  /* 10fe60ff mov edx, dword ptr [0x11005a40] */
  EDX = (r32((uint32_t)(0x11005a40)));
  /* 10fe6105 mov dword ptr [0x11005a24], edx */
  w32((uint32_t)(0x11005a24), (EDX));
  /* 10fe610b mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe6110 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10fe6112 mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
L_10fe6117:;
  /* 10fe6117 jmp 0x10fe617c */
  goto L_10fe617c;
L_10fe6119:;
  /* 10fe6119 cmp dword ptr [0x11005a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6120 jne 0x10fe617c */
  if (!C.zf) goto L_10fe617c;
  /* 10fe6122 cmp dword ptr [0x11005a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11005a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6129 je 0x10fe617c */
  if (C.zf) goto L_10fe617c;
  /* 10fe612b mov ecx, dword ptr [0x11005a2c] */
  ECX = (r32((uint32_t)(0x11005a2c)));
  /* 10fe6131 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6132 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10fe6135 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6136 mov eax, dword ptr [0x11005a34] */
  EAX = (r32((uint32_t)(0x11005a34)));
  /* 10fe613b push eax */
  push32((uint32_t)(EAX));
  /* 10fe613c call 0x10fe8330 */
  push32(0x10fe6141u); f_10fe8330();
  /* 10fe6141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6146 jne 0x10fe617c */
  if (!C.zf) goto L_10fe617c;
  /* 10fe6148 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe614a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe614d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe614e call 0x10fe63b0 */
  push32(0x10fe6153u); f_10fe63b0();
  /* 10fe6153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6158 je 0x10fe617c */
  if (C.zf) goto L_10fe617c;
  /* 10fe615a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe615d mov dword ptr [0x11005a40], edx */
  w32((uint32_t)(0x11005a40), (EDX));
  /* 10fe6163 mov eax, dword ptr [0x11005a40] */
  EAX = (r32((uint32_t)(0x11005a40)));
  /* 10fe6168 mov dword ptr [0x11005a24], eax */
  w32((uint32_t)(0x11005a24), (EAX));
  /* 10fe616d mov ecx, dword ptr [0x11005a3c] */
  ECX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe6173 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe6176 mov dword ptr [0x11005a3c], ecx */
  w32((uint32_t)(0x11005a3c), (ECX));
L_10fe617c:;
  /* 10fe617c mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe6181 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6184 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe6186 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6188 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fe6189:;
  /* 10fe6189 mov esp, ebp */
  ESP = (EBP);
  /* 10fe618b pop ebp */
  EBP = (pop32());
  /* 10fe618c ret 4 */
  ESPCHK(0x10fe6070u, _esp0);
  ESP += 8; return;
}

/* FUN_10016190 @ 0x10fe6190 (69 bytes, 20 insns) */
void f_10fe6190(void) {
  FTRACE(0x10fe6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6190 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6191 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6193 mov eax, dword ptr [0x11005a38] */
  EAX = (r32((uint32_t)(0x11005a38)));
  /* 10fe6198 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6199 call 0x10fdc9c0 */
  push32(0x10fe619eu); f_10fdc9c0();
  /* 10fe619e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe61a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe61a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe61a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fe61a9 mov dword ptr [0x11005a28], ecx */
  w32((uint32_t)(0x11005a28), (ECX));
  /* 10fe61af push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe61b1 push 0x10fe61e0 */
  push32((uint32_t)(0x10fe61e0u));
  /* 10fe61b6 call dword ptr [0x110082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f0))), 0x10fe61bcu);
  /* 10fe61bc mov edx, dword ptr [0x11005a3c] */
  EDX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe61c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe61c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe61c7 jne 0x10fe61d3 */
  if (!C.zf) goto L_10fe61d3;
  /* 10fe61c9 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
L_10fe61d3:;
  /* 10fe61d3 pop ebp */
  EBP = (pop32());
  /* 10fe61d4 ret  */
  ESPCHK(0x10fe6190u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x10fe61e0 (172 bytes, 54 insns) */
void f_10fe61e0(void) {
  FTRACE(0x10fe61e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe61e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe61e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe61e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe61e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe61e9 push eax */
  push32((uint32_t)(EAX));
  /* 10fe61ea call 0x10fe6620 */
  push32(0x10fe61efu); f_10fe6620();
  /* 10fe61ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe61f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fe61f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe61f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe61fa push ecx */
  push32((uint32_t)(ECX));
  /* 10fe61fb mov edx, dword ptr [0x11005a28] */
  EDX = (r32((uint32_t)(0x11005a28)));
  /* 10fe6201 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe6203 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6205 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe620b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6211 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6212 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe6215 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6216 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe621cu);
  /* 10fe621c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe621e jne 0x10fe6231 */
  if (!C.zf) goto L_10fe6231;
  /* 10fe6220 mov dword ptr [0x11005a3c], 0 */
  w32((uint32_t)(0x11005a3c), (0x0u));
  /* 10fe622a mov eax, 1 */
  EAX = (0x1u);
  /* 10fe622f jmp 0x10fe6286 */
  goto L_10fe6286;
L_10fe6231:;
  /* 10fe6231 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fe6234 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6235 mov edx, dword ptr [0x11005a38] */
  EDX = (r32((uint32_t)(0x11005a38)));
  /* 10fe623b push edx */
  push32((uint32_t)(EDX));
  /* 10fe623c call 0x10fe8260 */
  push32(0x10fe6241u); f_10fe8260();
  /* 10fe6241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6246 jne 0x10fe6279 */
  if (!C.zf) goto L_10fe6279;
  /* 10fe6248 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe624b push eax */
  push32((uint32_t)(EAX));
  /* 10fe624c call 0x10fe6360 */
  push32(0x10fe6251u); f_10fe6360();
  /* 10fe6251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6256 je 0x10fe6279 */
  if (C.zf) goto L_10fe6279;
  /* 10fe6258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fe625b mov dword ptr [0x11005a40], ecx */
  w32((uint32_t)(0x11005a40), (ECX));
  /* 10fe6261 mov edx, dword ptr [0x11005a40] */
  EDX = (r32((uint32_t)(0x11005a40)));
  /* 10fe6267 mov dword ptr [0x11005a24], edx */
  w32((uint32_t)(0x11005a24), (EDX));
  /* 10fe626d mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe6272 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10fe6274 mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
L_10fe6279:;
  /* 10fe6279 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe627e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6281 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fe6283 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6285 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fe6286:;
  /* 10fe6286 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6288 pop ebp */
  EBP = (pop32());
  /* 10fe6289 ret 4 */
  ESPCHK(0x10fe61e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016290 @ 0x10fe6290 (43 bytes, 11 insns) */
void f_10fe6290(void) {
  FTRACE(0x10fe6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6290 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6291 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6293 mov eax, dword ptr [0x11005a3c] */
  EAX = (r32((uint32_t)(0x11005a3c)));
  /* 10fe6298 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10fe629d mov dword ptr [0x11005a3c], eax */
  w32((uint32_t)(0x11005a3c), (EAX));
  /* 10fe62a2 call dword ptr [0x110082ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082ec))), 0x10fe62a8u);
  /* 10fe62a8 mov dword ptr [0x11005a40], eax */
  w32((uint32_t)(0x11005a40), (EAX));
  /* 10fe62ad mov ecx, dword ptr [0x11005a40] */
  ECX = (r32((uint32_t)(0x11005a40)));
  /* 10fe62b3 mov dword ptr [0x11005a24], ecx */
  w32((uint32_t)(0x11005a24), (ECX));
  /* 10fe62b9 pop ebp */
  EBP = (pop32());
  /* 10fe62ba ret  */
  ESPCHK(0x10fe6290u, _esp0);
  ESP += 4; return;
}

/* FUN_100162c0 @ 0x10fe62c0 (155 bytes, 57 insns) */
void f_10fe62c0(void) {
  FTRACE(0x10fe62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe62c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe62c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe62c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe62ca je 0x10fe62eb */
  if (C.zf) goto L_10fe62eb;
  /* 10fe62cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe62cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fe62d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe62d4 je 0x10fe62eb */
  if (C.zf) goto L_10fe62eb;
  /* 10fe62d6 push 0x11001d74 */
  push32((uint32_t)(0x11001d74u));
  /* 10fe62db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe62de push edx */
  push32((uint32_t)(EDX));
  /* 10fe62df call 0x10fe5820 */
  push32(0x10fe62e4u); f_10fe5820();
  /* 10fe62e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe62e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe62e9 jne 0x10fe6313 */
  if (!C.zf) goto L_10fe6313;
L_10fe62eb:;
  /* 10fe62eb push 8 */
  push32((uint32_t)(0x8u));
  /* 10fe62ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fe62f0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe62f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10fe62f6 mov ecx, dword ptr [0x11005a40] */
  ECX = (r32((uint32_t)(0x11005a40)));
  /* 10fe62fc push ecx */
  push32((uint32_t)(ECX));
  /* 10fe62fd call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe6303u);
  /* 10fe6303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6305 jne 0x10fe630b */
  if (!C.zf) goto L_10fe630b;
  /* 10fe6307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6309 jmp 0x10fe6357 */
  goto L_10fe6357;
L_10fe630b:;
  /* 10fe630b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10fe630e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fe6311 jmp 0x10fe634b */
  goto L_10fe634b;
L_10fe6313:;
  /* 10fe6313 push 0x11001d70 */
  push32((uint32_t)(0x11001d70u));
  /* 10fe6318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe631b push eax */
  push32((uint32_t)(EAX));
  /* 10fe631c call 0x10fe5820 */
  push32(0x10fe6321u); f_10fe5820();
  /* 10fe6321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6326 jne 0x10fe634b */
  if (!C.zf) goto L_10fe634b;
  /* 10fe6328 push 8 */
  push32((uint32_t)(0x8u));
  /* 10fe632a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fe632d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe632e push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fe6330 mov edx, dword ptr [0x11005a40] */
  EDX = (r32((uint32_t)(0x11005a40)));
  /* 10fe6336 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6337 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe633du);
  /* 10fe633d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe633f jne 0x10fe6345 */
  if (!C.zf) goto L_10fe6345;
  /* 10fe6341 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6343 jmp 0x10fe6357 */
  goto L_10fe6357;
L_10fe6345:;
  /* 10fe6345 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fe6348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fe634b:;
  /* 10fe634b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe634e push ecx */
  push32((uint32_t)(ECX));
  /* 10fe634f call 0x10fe8440 */
  push32(0x10fe6354u); f_10fe8440();
  /* 10fe6354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fe6357:;
  /* 10fe6357 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6359 pop ebp */
  EBP = (pop32());
  /* 10fe635a ret  */
  ESPCHK(0x10fe62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016360 @ 0x10fe6360 (79 bytes, 26 insns) */
void f_10fe6360(void) {
  FTRACE(0x10fe6360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6360 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6361 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6366 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10fe636a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10fe636e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe6375 jmp 0x10fe6380 */
  goto L_10fe6380;
L_10fe6377:;
  /* 10fe6377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe637a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe637d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fe6380:;
  /* 10fe6380 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6384 jae 0x10fe63a6 */
  if (!C.cf) goto L_10fe63a6;
  /* 10fe6386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6389 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe638f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6392 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fe6394 mov cx, word ptr [eax*2 + 0x110049c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x110049c4)));
  /* 10fe639c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe639e jne 0x10fe63a4 */
  if (!C.zf) goto L_10fe63a4;
  /* 10fe63a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63a2 jmp 0x10fe63ab */
  goto L_10fe63ab;
L_10fe63a4:;
  /* 10fe63a4 jmp 0x10fe6377 */
  goto L_10fe6377;
L_10fe63a6:;
  /* 10fe63a6 mov eax, 1 */
  EAX = (0x1u);
L_10fe63ab:;
  /* 10fe63ab mov esp, ebp */
  ESP = (EBP);
  /* 10fe63ad pop ebp */
  EBP = (pop32());
  /* 10fe63ae ret  */
  ESPCHK(0x10fe6360u, _esp0);
  ESP += 4; return;
}

/* FUN_100163b0 @ 0x10fe63b0 (135 bytes, 48 insns) */
void f_10fe63b0(void) {
  FTRACE(0x10fe63b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe63b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe63b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe63b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe63b6 push esi */
  push32((uint32_t)(ESI));
  /* 10fe63b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe63ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10fe63cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe63d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fe63d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10fe63d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe63da push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe63dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe63df push edx */
  push32((uint32_t)(EDX));
  /* 10fe63e0 call dword ptr [0x11005a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x11005a44))), 0x10fe63e6u);
  /* 10fe63e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe63e8 jne 0x10fe63ee */
  if (!C.zf) goto L_10fe63ee;
  /* 10fe63ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe63ec jmp 0x10fe6432 */
  goto L_10fe6432;
L_10fe63ee:;
  /* 10fe63ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10fe63f1 push eax */
  push32((uint32_t)(EAX));
  /* 10fe63f2 call 0x10fe6620 */
  push32(0x10fe63f7u); f_10fe6620();
  /* 10fe63f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe63fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe63fd je 0x10fe642d */
  if (C.zf) goto L_10fe642d;
  /* 10fe63ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6403 je 0x10fe642d */
  if (C.zf) goto L_10fe642d;
  /* 10fe6405 mov ecx, dword ptr [0x11005a34] */
  ECX = (r32((uint32_t)(0x11005a34)));
  /* 10fe640b push ecx */
  push32((uint32_t)(ECX));
  /* 10fe640c call 0x10fe66a0 */
  push32(0x10fe6411u); f_10fe66a0();
  /* 10fe6411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6414 mov esi, eax */
  ESI = (EAX);
  /* 10fe6416 mov edx, dword ptr [0x11005a34] */
  EDX = (r32((uint32_t)(0x11005a34)));
  /* 10fe641c push edx */
  push32((uint32_t)(EDX));
  /* 10fe641d call 0x10fdc9c0 */
  push32(0x10fe6422u); f_10fdc9c0();
  /* 10fe6422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6425 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6427 jne 0x10fe642d */
  if (!C.zf) goto L_10fe642d;
  /* 10fe6429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe642b jmp 0x10fe6432 */
  goto L_10fe6432;
L_10fe642d:;
  /* 10fe642d mov eax, 1 */
  EAX = (0x1u);
L_10fe6432:;
  /* 10fe6432 pop esi */
  ESI = (pop32());
  /* 10fe6433 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6435 pop ebp */
  EBP = (pop32());
  /* 10fe6436 ret  */
  ESPCHK(0x10fe63b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x10fe6440 (77 bytes, 18 insns) */
void f_10fe6440(void) {
  FTRACE(0x10fe6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6441 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6443 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6449 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10fe6453 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10fe6459 push eax */
  push32((uint32_t)(EAX));
  /* 10fe645a call dword ptr [0x110082e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082e8))), 0x10fe6460u);
  /* 10fe6460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe6462 je 0x10fe6479 */
  if (C.zf) goto L_10fe6479;
  /* 10fe6464 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe646b jne 0x10fe6479 */
  if (!C.zf) goto L_10fe6479;
  /* 10fe646d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10fe6477 jmp 0x10fe6483 */
  goto L_10fe6483;
L_10fe6479:;
  /* 10fe6479 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10fe6483:;
  /* 10fe6483 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fe6489 mov esp, ebp */
  ESP = (EBP);
  /* 10fe648b pop ebp */
  EBP = (pop32());
  /* 10fe648c ret  */
  ESPCHK(0x10fe6440u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10fe6490 (388 bytes, 118 insns) */
void f_10fe6490(void) {
  FTRACE(0x10fe6490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6490 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6491 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6493 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe649d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10fe64a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fe64ab:;
  /* 10fe64ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe64ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64b1 jg 0x10fe65f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe65f8;
  /* 10fe64b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe64ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe64bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fe64be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe64c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fe64c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe64c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe64c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe64cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe64ce cmp edx, dword ptr [ecx + 0x11004520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11004520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64d4 jne 0x10fe65ce */
  if (!C.zf) goto L_10fe65ce;
  /* 10fe64da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe64dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe64e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64e4 ja 0x10fe6507 */
  if ((!C.cf&&!C.zf)) goto L_10fe6507;
  /* 10fe64e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64ea je 0x10fe6579 */
  if (C.zf) goto L_10fe6579;
  /* 10fe64f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64f4 je 0x10fe6524 */
  if (C.zf) goto L_10fe6524;
  /* 10fe64f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe64fa je 0x10fe6546 */
  if (C.zf) goto L_10fe6546;
  /* 10fe64fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6500 je 0x10fe6568 */
  if (C.zf) goto L_10fe6568;
  /* 10fe6502 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6507:;
  /* 10fe6507 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe650e je 0x10fe6535 */
  if (C.zf) goto L_10fe6535;
  /* 10fe6510 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6517 je 0x10fe6557 */
  if (C.zf) goto L_10fe6557;
  /* 10fe6519 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6520 je 0x10fe658a */
  if (C.zf) goto L_10fe658a;
  /* 10fe6522 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6524:;
  /* 10fe6524 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6527 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe652a add ecx, 0x11004524 */
  { uint32_t _a=(ECX),_b=(0x11004524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6530 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe6533 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6535:;
  /* 10fe6535 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6538 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe653b mov eax, dword ptr [edx + 0x1100452c] */
  EAX = (r32((uint32_t)(EDX + 0x1100452c)));
  /* 10fe6541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe6544 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6546:;
  /* 10fe6546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6549 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe654c add ecx, 0x11004530 */
  { uint32_t _a=(ECX),_b=(0x11004530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe6555 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6557:;
  /* 10fe6557 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe655a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe655d mov eax, dword ptr [edx + 0x11004534] */
  EAX = (r32((uint32_t)(EDX + 0x11004534)));
  /* 10fe6563 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fe6566 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6568:;
  /* 10fe6568 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe656b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe656e add ecx, 0x11004538 */
  { uint32_t _a=(ECX),_b=(0x11004538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6574 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe6577 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe6579:;
  /* 10fe6579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe657c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe657f add edx, 0x1100453c */
  { uint32_t _a=(EDX),_b=(0x1100453cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6585 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe6588 jmp 0x10fe6598 */
  goto L_10fe6598;
L_10fe658a:;
  /* 10fe658a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe658d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe6590 add eax, 0x11004544 */
  { uint32_t _a=(EAX),_b=(0x11004544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6595 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fe6598:;
  /* 10fe6598 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe659c je 0x10fe65a4 */
  if (C.zf) goto L_10fe65a4;
  /* 10fe659e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe65a2 jge 0x10fe65a6 */
  if ((C.sf==C.of)) goto L_10fe65a6;
L_10fe65a4:;
  /* 10fe65a4 jmp 0x10fe65f8 */
  goto L_10fe65f8;
L_10fe65a6:;
  /* 10fe65a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe65a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe65ac push ecx */
  push32((uint32_t)(ECX));
  /* 10fe65ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe65b0 push edx */
  push32((uint32_t)(EDX));
  /* 10fe65b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe65b4 push eax */
  push32((uint32_t)(EAX));
  /* 10fe65b5 call 0x10fdd3b0 */
  push32(0x10fe65bau); f_10fdd3b0();
  /* 10fe65ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe65bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe65c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe65c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10fe65c7 mov eax, 1 */
  EAX = (0x1u);
  /* 10fe65cc jmp 0x10fe660e */
  goto L_10fe660e;
L_10fe65ce:;
  /* 10fe65ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe65d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe65d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe65d7 cmp eax, dword ptr [edx + 0x11004520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11004520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe65dd jae 0x10fe65ea */
  if (!C.cf) goto L_10fe65ea;
  /* 10fe65df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe65e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe65e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fe65e8 jmp 0x10fe65f3 */
  goto L_10fe65f3;
L_10fe65ea:;
  /* 10fe65ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe65ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe65f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe65f3:;
  /* 10fe65f3 jmp 0x10fe64ab */
  goto L_10fe64ab;
L_10fe65f8:;
  /* 10fe65f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fe65fb push eax */
  push32((uint32_t)(EAX));
  /* 10fe65fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fe65ff push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fe6603 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6607 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6608 call dword ptr [0x110082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082f4))), 0x10fe660eu);
L_10fe660e:;
  /* 10fe660e mov esp, ebp */
  ESP = (EBP);
  /* 10fe6610 pop ebp */
  EBP = (pop32());
  /* 10fe6611 ret 0x10 */
  ESPCHK(0x10fe6490u, _esp0);
  ESP += 20; return;
}

/* FUN_10016620 @ 0x10fe6620 (118 bytes, 42 insns) */
void f_10fe6620(void) {
  FTRACE(0x10fe6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6620 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6621 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fe662d:;
  /* 10fe662d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6630 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe6632 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10fe6635 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe6639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe663c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe663f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fe6642 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe6644 je 0x10fe668f */
  if (C.zf) goto L_10fe668f;
  /* 10fe6646 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe664a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe664d jl 0x10fe6662 */
  if ((C.sf!=C.of)) goto L_10fe6662;
  /* 10fe664f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe6653 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6656 jg 0x10fe6662 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe6662;
  /* 10fe6658 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fe665b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe665d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10fe6660 jmp 0x10fe667c */
  goto L_10fe667c;
L_10fe6662:;
  /* 10fe6662 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe6666 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6669 jl 0x10fe667c */
  if ((C.sf!=C.of)) goto L_10fe667c;
  /* 10fe666b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe666f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6672 jg 0x10fe667c */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe667c;
  /* 10fe6674 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fe6677 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fe6679 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10fe667c:;
  /* 10fe667c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe667f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10fe6682 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fe6686 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10fe668a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe668d jmp 0x10fe662d */
  goto L_10fe662d;
L_10fe668f:;
  /* 10fe668f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6692 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6694 pop ebp */
  EBP = (pop32());
  /* 10fe6695 ret  */
  ESPCHK(0x10fe6620u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10fe66a0 (101 bytes, 36 insns) */
void f_10fe66a0(void) {
  FTRACE(0x10fe66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe66a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe66a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe66a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe66ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe66b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fe66b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10fe66b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe66b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe66bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fe66be:;
  /* 10fe66be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fe66c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe66c5 jl 0x10fe66d0 */
  if ((C.sf!=C.of)) goto L_10fe66d0;
  /* 10fe66c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fe66cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe66ce jle 0x10fe66e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10fe66e2;
L_10fe66d0:;
  /* 10fe66d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fe66d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe66d7 jl 0x10fe66fe */
  if ((C.sf!=C.of)) goto L_10fe66fe;
  /* 10fe66d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fe66dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe66e0 jg 0x10fe66fe */
  if ((!C.zf&&C.sf==C.of)) goto L_10fe66fe;
L_10fe66e2:;
  /* 10fe66e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe66e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe66e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fe66eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe66ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fe66f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10fe66f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe66f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe66f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fe66fc jmp 0x10fe66be */
  goto L_10fe66be;
L_10fe66fe:;
  /* 10fe66fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6701 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6703 pop ebp */
  EBP = (pop32());
  /* 10fe6704 ret  */
  ESPCHK(0x10fe66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016710 @ 0x10fe6710 (122 bytes, 39 insns) */
void f_10fe6710(void) {
  FTRACE(0x10fe6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6710 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6711 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6713 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6717 cmp eax, dword ptr [0x110072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x110072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe671d jae 0x10fe6741 */
  if (!C.cf) goto L_10fe6741;
  /* 10fe671f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6722 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fe6725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6728 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fe672b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe672e mov eax, dword ptr [ecx*4 + 0x110071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x110071a0)));
  /* 10fe6735 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fe673a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe673d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe673f jne 0x10fe675c */
  if (!C.zf) goto L_10fe675c;
L_10fe6741:;
  /* 10fe6741 call 0x10fe1a60 */
  push32(0x10fe6746u); f_10fe1a60();
  /* 10fe6746 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fe674c call 0x10fe1a70 */
  push32(0x10fe6751u); f_10fe1a70();
  /* 10fe6751 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fe6757 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe675a jmp 0x10fe6786 */
  goto L_10fe6786;
L_10fe675c:;
  /* 10fe675c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe675f push edx */
  push32((uint32_t)(EDX));
  /* 10fe6760 call 0x10fe3280 */
  push32(0x10fe6765u); f_10fe3280();
  /* 10fe6765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe676b push eax */
  push32((uint32_t)(EAX));
  /* 10fe676c call 0x10fe6790 */
  push32(0x10fe6771u); f_10fe6790();
  /* 10fe6771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6774 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe6777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe677a push ecx */
  push32((uint32_t)(ECX));
  /* 10fe677b call 0x10fe3310 */
  push32(0x10fe6780u); f_10fe3310();
  /* 10fe6780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fe6786:;
  /* 10fe6786 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6788 pop ebp */
  EBP = (pop32());
  /* 10fe6789 ret  */
  ESPCHK(0x10fe6710u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10fe6790 (170 bytes, 59 insns) */
void f_10fe6790(void) {
  FTRACE(0x10fe6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6790 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6791 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6793 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6794 push esi */
  push32((uint32_t)(ESI));
  /* 10fe6795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6798 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6799 call 0x10fe3100 */
  push32(0x10fe679eu); f_10fe3100();
  /* 10fe679e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe67a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe67a4 je 0x10fe67e3 */
  if (C.zf) goto L_10fe67e3;
  /* 10fe67a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe67aa je 0x10fe67b2 */
  if (C.zf) goto L_10fe67b2;
  /* 10fe67ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe67b0 jne 0x10fe67cc */
  if (!C.zf) goto L_10fe67cc;
L_10fe67b2:;
  /* 10fe67b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fe67b4 call 0x10fe3100 */
  push32(0x10fe67b9u); f_10fe3100();
  /* 10fe67b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe67bc mov esi, eax */
  ESI = (EAX);
  /* 10fe67be push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe67c0 call 0x10fe3100 */
  push32(0x10fe67c5u); f_10fe3100();
  /* 10fe67c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe67c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe67ca je 0x10fe67e3 */
  if (C.zf) goto L_10fe67e3;
L_10fe67cc:;
  /* 10fe67cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe67cf push ecx */
  push32((uint32_t)(ECX));
  /* 10fe67d0 call 0x10fe3100 */
  push32(0x10fe67d5u); f_10fe3100();
  /* 10fe67d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe67d8 push eax */
  push32((uint32_t)(EAX));
  /* 10fe67d9 call dword ptr [0x110082e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110082e4))), 0x10fe67dfu);
  /* 10fe67df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe67e1 je 0x10fe67ec */
  if (C.zf) goto L_10fe67ec;
L_10fe67e3:;
  /* 10fe67e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fe67ea jmp 0x10fe67f5 */
  goto L_10fe67f5;
L_10fe67ec:;
  /* 10fe67ec call dword ptr [0x110083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110083b4))), 0x10fe67f2u);
  /* 10fe67f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fe67f5:;
  /* 10fe67f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe67f8 push edx */
  push32((uint32_t)(EDX));
  /* 10fe67f9 call 0x10fe3020 */
  push32(0x10fe67feu); f_10fe3020();
  /* 10fe67fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6804 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fe6807 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe680a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fe680d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fe6810 mov edx, dword ptr [eax*4 + 0x110071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x110071a0)));
  /* 10fe6817 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10fe681c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6820 je 0x10fe6833 */
  if (C.zf) goto L_10fe6833;
  /* 10fe6822 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6825 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6826 call 0x10fe19c0 */
  push32(0x10fe682bu); f_10fe19c0();
  /* 10fe682b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe682e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fe6831 jmp 0x10fe6835 */
  goto L_10fe6835;
L_10fe6833:;
  /* 10fe6833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fe6835:;
  /* 10fe6835 pop esi */
  ESI = (pop32());
  /* 10fe6836 mov esp, ebp */
  ESP = (EBP);
  /* 10fe6838 pop ebp */
  EBP = (pop32());
  /* 10fe6839 ret  */
  ESPCHK(0x10fe6790u, _esp0);
  ESP += 4; return;
}

/* FUN_10016840 @ 0x10fe6840 (146 bytes, 52 insns) */
void f_10fe6840(void) {
  FTRACE(0x10fe6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6840 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6841 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6843 push ebx */
  push32((uint32_t)(EBX));
  /* 10fe6844 push esi */
  push32((uint32_t)(ESI));
  /* 10fe6845 push edi */
  push32((uint32_t)(EDI));
L_10fe6846:;
  /* 10fe6846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe684a jne 0x10fe686a */
  if (!C.zf) goto L_10fe686a;
  /* 10fe684c push 0x110016b0 */
  push32((uint32_t)(0x110016b0u));
  /* 10fe6851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fe6853 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fe6855 push 0x11001d78 */
  push32((uint32_t)(0x11001d78u));
  /* 10fe685a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe685c call 0x10fd8c50 */
  push32(0x10fe6861u); f_10fd8c50();
  /* 10fe6861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6867 jne 0x10fe686a */
  if (!C.zf) goto L_10fe686a;
  /* 10fe6869 int3  */
  x86_unimpl("int3 @ 0x10fe6869");
L_10fe686a:;
  /* 10fe686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fe686c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fe686e jne 0x10fe6846 */
  if (!C.zf) goto L_10fe6846;
  /* 10fe6870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6873 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe6876 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe687c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fe687e je 0x10fe68cd */
  if (C.zf) goto L_10fe68cd;
  /* 10fe6880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6883 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fe6886 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10fe6889 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fe688b je 0x10fe68cd */
  if (C.zf) goto L_10fe68cd;
  /* 10fe688d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fe688f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe6892 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fe6895 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6896 call 0x10fda620 */
  push32(0x10fe689bu); f_10fda620();
  /* 10fe689b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe689e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe68a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fe68a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10fe68aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe68ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fe68b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe68b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10fe68b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe68bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10fe68c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fe68c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10fe68cd:;
  /* 10fe68cd pop edi */
  EDI = (pop32());
  /* 10fe68ce pop esi */
  ESI = (pop32());
  /* 10fe68cf pop ebx */
  EBX = (pop32());
  /* 10fe68d0 pop ebp */
  EBP = (pop32());
  /* 10fe68d1 ret  */
  ESPCHK(0x10fe6840u, _esp0);
  ESP += 4; return;
}

/* FUN_100168e0 @ 0x10fe68e0 (289 bytes, 97 insns) */
void f_10fe68e0(void) {
  FTRACE(0x10fe68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe68e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fe68e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe68e6 push esi */
  push32((uint32_t)(ESI));
  /* 10fe68e7 mov eax, dword ptr [0x11004c98] */
  EAX = (r32((uint32_t)(0x11004c98)));
  /* 10fe68ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe68ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe68f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe68fd jmp 0x10fe6908 */
  goto L_10fe6908;
L_10fe68ff:;
  /* 10fe68ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6902 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6905 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fe6908:;
  /* 10fe6908 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe690c jae 0x10fe6941 */
  if (!C.cf) goto L_10fe6941;
  /* 10fe690e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6911 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6914 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe6917 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6918 call 0x10fdc9c0 */
  push32(0x10fe691du); f_10fdc9c0();
  /* 10fe691d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6920 mov esi, eax */
  ESI = (EAX);
  /* 10fe6922 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6928 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10fe692c push ecx */
  push32((uint32_t)(ECX));
  /* 10fe692d call 0x10fdc9c0 */
  push32(0x10fe6932u); f_10fdc9c0();
  /* 10fe6932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6935 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6938 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fe693c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe693f jmp 0x10fe68ff */
  goto L_10fe68ff;
L_10fe6941:;
  /* 10fe6941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6947 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6948 call 0x10fd9b70 */
  push32(0x10fe694du); f_10fd9b70();
  /* 10fe694d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe6953 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6957 je 0x10fe69f9 */
  if (C.zf) goto L_10fe69f9;
  /* 10fe695d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6960 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe6963 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe696a jmp 0x10fe6975 */
  goto L_10fe6975;
L_10fe696c:;
  /* 10fe696c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe696f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6972 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe6975:;
  /* 10fe6975 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6979 jae 0x10fe69ea */
  if (!C.cf) goto L_10fe69ea;
  /* 10fe697b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe697e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10fe6981 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6984 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6987 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe698a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe698d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6990 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fe6993 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6994 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6997 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6998 call 0x10fdcb40 */
  push32(0x10fe699du); f_10fdcb40();
  /* 10fe699d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69a0 push eax */
  push32((uint32_t)(EAX));
  /* 10fe69a1 call 0x10fdc9c0 */
  push32(0x10fe69a6u); f_10fdc9c0();
  /* 10fe69a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe69b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10fe69b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe69c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe69c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe69c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10fe69ca push eax */
  push32((uint32_t)(EAX));
  /* 10fe69cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69ce push ecx */
  push32((uint32_t)(ECX));
  /* 10fe69cf call 0x10fdcb40 */
  push32(0x10fe69d4u); f_10fdcb40();
  /* 10fe69d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69d7 push eax */
  push32((uint32_t)(EAX));
  /* 10fe69d8 call 0x10fdc9c0 */
  push32(0x10fe69ddu); f_10fdc9c0();
  /* 10fe69dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe69e8 jmp 0x10fe696c */
  goto L_10fe696c;
L_10fe69ea:;
  /* 10fe69ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fe69f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe69f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe69f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10fe69f9:;
  /* 10fe69f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe69fc pop esi */
  ESI = (pop32());
  /* 10fe69fd mov esp, ebp */
  ESP = (EBP);
  /* 10fe69ff pop ebp */
  EBP = (pop32());
  /* 10fe6a00 ret  */
  ESPCHK(0x10fe68e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a10 @ 0x10fe6a10 (291 bytes, 97 insns) */
void f_10fe6a10(void) {
  FTRACE(0x10fe6a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fe6a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fe6a11 mov ebp, esp */
  EBP = (ESP);
  /* 10fe6a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fe6a16 push esi */
  push32((uint32_t)(ESI));
  /* 10fe6a17 mov eax, dword ptr [0x11004c98] */
  EAX = (r32((uint32_t)(0x11004c98)));
  /* 10fe6a1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fe6a1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fe6a26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6a2d jmp 0x10fe6a38 */
  goto L_10fe6a38;
L_10fe6a2f:;
  /* 10fe6a2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fe6a38:;
  /* 10fe6a38 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6a3c jae 0x10fe6a72 */
  if (!C.cf) goto L_10fe6a72;
  /* 10fe6a3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6a44 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10fe6a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6a49 call 0x10fdc9c0 */
  push32(0x10fe6a4eu); f_10fdc9c0();
  /* 10fe6a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a51 mov esi, eax */
  ESI = (EAX);
  /* 10fe6a53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6a56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6a59 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10fe6a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6a5e call 0x10fdc9c0 */
  push32(0x10fe6a63u); f_10fdc9c0();
  /* 10fe6a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a66 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a69 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fe6a6d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fe6a70 jmp 0x10fe6a2f */
  goto L_10fe6a2f;
L_10fe6a72:;
  /* 10fe6a72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fe6a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a78 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6a79 call 0x10fd9b70 */
  push32(0x10fe6a7eu); f_10fd9b70();
  /* 10fe6a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6a81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fe6a84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6a88 je 0x10fe6b2b */
  if (C.zf) goto L_10fe6b2b;
  /* 10fe6a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6a91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe6a94 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fe6a9b jmp 0x10fe6aa6 */
  goto L_10fe6aa6;
L_10fe6a9d:;
  /* 10fe6a9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6aa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6aa3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fe6aa6:;
  /* 10fe6aa6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fe6aaa jae 0x10fe6b1c */
  if (!C.cf) goto L_10fe6b1c;
  /* 10fe6aac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6aaf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10fe6ab2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ab5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6ab8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe6abb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6ac1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10fe6ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6ac6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ac9 push edx */
  push32((uint32_t)(EDX));
  /* 10fe6aca call 0x10fdcb40 */
  push32(0x10fe6acfu); f_10fdcb40();
  /* 10fe6acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6ad2 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6ad3 call 0x10fdc9c0 */
  push32(0x10fe6ad8u); f_10fdc9c0();
  /* 10fe6ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6adb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ade add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6ae0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fe6ae3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6ae6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10fe6ae9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6aec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6aef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fe6af2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fe6af5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fe6af8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fe6afc push eax */
  push32((uint32_t)(EAX));
  /* 10fe6afd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6b00 push ecx */
  push32((uint32_t)(ECX));
  /* 10fe6b01 call 0x10fdcb40 */
  push32(0x10fe6b06u); f_10fdcb40();
  /* 10fe6b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b09 push eax */
  push32((uint32_t)(EAX));
  /* 10fe6b0a call 0x10fdc9c0 */
  push32(0x10fe6b0fu); f_10fdc9c0();
  /* 10fe6b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6b15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fe6b1a jmp 0x10fe6a9d */
  goto L_10fe6a9d;
L_10fe6b1c:;
  /* 10fe6b1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6b1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fe6b22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fe6b25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fe6b28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10fe6b2b:;
  /* 10fe6b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fe6b2e pop esi */
  ESI = (pop32());
  /* 10fe6b2f mov esp, ebp */
  ESP = (EBP);
  /* 10fe6b31 pop ebp */
  EBP = (pop32());
  /* 10fe6b32 ret  */
  ESPCHK(0x10fe6a10u, _esp0);
  ESP += 4; return;
}

