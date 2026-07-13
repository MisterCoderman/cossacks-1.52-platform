#include "recomp.h"

/* FUN_1000dd70 @ 0x121ddd70 (116 bytes, 34 insns) */
void f_121ddd70(void) {
  FTRACE(0x121ddd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ddd70 push ebp */
  push32((uint32_t)(EBP));
  /* 121ddd71 mov ebp, esp */
  EBP = (ESP);
  /* 121ddd73 push ecx */
  push32((uint32_t)(ECX));
  /* 121ddd74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 121ddd7b push 9 */
  push32((uint32_t)(0x9u));
  /* 121ddd7d call 0x121dd590 */
  push32(0x121ddd82u); f_121dd590();
  /* 121ddd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ddd85 call 0x121df480 */
  push32(0x121ddd8au); f_121df480();
  /* 121ddd8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121ddd8c jge 0x121ddd95 */
  if ((C.sf==C.of)) goto L_121ddd95;
  /* 121ddd8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_121ddd95:;
  /* 121ddd95 push 9 */
  push32((uint32_t)(0x9u));
  /* 121ddd97 call 0x121dd630 */
  push32(0x121ddd9cu); f_121dd630();
  /* 121ddd9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121ddd9f push 0 */
  push32((uint32_t)(0x0u));
  /* 121ddda1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121ddda3 mov eax, dword ptr [0x1220716c] */
  EAX = (r32((uint32_t)(0x1220716c)));
  /* 121ddda8 push eax */
  push32((uint32_t)(EAX));
  /* 121ddda9 call dword ptr [0x1220837c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220837c))), 0x121dddafu);
  /* 121dddaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dddb1 jne 0x121ddddd */
  if (!C.zf) goto L_121ddddd;
  /* 121dddb3 call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121dddb9u);
  /* 121dddb9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dddbc jne 0x121dddd6 */
  if (!C.zf) goto L_121dddd6;
  /* 121dddbe call 0x121e1a70 */
  push32(0x121dddc3u); f_121e1a70();
  /* 121dddc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 121dddc9 call 0x121e1a60 */
  push32(0x121dddceu); f_121e1a60();
  /* 121dddce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 121dddd4 jmp 0x121ddddd */
  goto L_121ddddd;
L_121dddd6:;
  /* 121dddd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_121ddddd:;
  /* 121ddddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ddde0 mov esp, ebp */
  ESP = (EBP);
  /* 121ddde2 pop ebp */
  EBP = (pop32());
  /* 121ddde3 ret  */
  ESPCHK(0x121ddd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x121dddf0 (10 bytes, 5 insns) */
void f_121dddf0(void) {
  FTRACE(0x121dddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 121dddf1 mov ebp, esp */
  EBP = (ESP);
  /* 121dddf3 call 0x121ddd70 */
  push32(0x121dddf8u); f_121ddd70();
  /* 121dddf8 pop ebp */
  EBP = (pop32());
  /* 121dddf9 ret  */
  ESPCHK(0x121dddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x121dde00 (10 bytes, 5 insns) */
void f_121dde00(void) {
  FTRACE(0x121dde00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dde00 push ebp */
  push32((uint32_t)(EBP));
  /* 121dde01 mov ebp, esp */
  EBP = (ESP);
  /* 121dde03 mov eax, dword ptr [0x12203c94] */
  EAX = (r32((uint32_t)(0x12203c94)));
  /* 121dde08 pop ebp */
  EBP = (pop32());
  /* 121dde09 ret  */
  ESPCHK(0x121dde00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de10 @ 0x121dde10 (31 bytes, 11 insns) */
void f_121dde10(void) {
  FTRACE(0x121dde10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dde10 push ebp */
  push32((uint32_t)(EBP));
  /* 121dde11 mov ebp, esp */
  EBP = (ESP);
  /* 121dde13 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dde1a jbe 0x121dde20 */
  if ((C.cf||C.zf)) goto L_121dde20;
  /* 121dde1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dde1e jmp 0x121dde2d */
  goto L_121dde2d;
L_121dde20:;
  /* 121dde20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dde23 mov dword ptr [0x12203c94], eax */
  w32((uint32_t)(0x12203c94), (EAX));
  /* 121dde28 mov eax, 1 */
  EAX = (0x1u);
L_121dde2d:;
  /* 121dde2d pop ebp */
  EBP = (pop32());
  /* 121dde2e ret  */
  ESPCHK(0x121dde10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de30 @ 0x121dde30 (89 bytes, 20 insns) */
void f_121dde30(void) {
  FTRACE(0x121dde30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dde30 push ebp */
  push32((uint32_t)(EBP));
  /* 121dde31 mov ebp, esp */
  EBP = (ESP);
  /* 121dde33 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 121dde38 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dde3a mov eax, dword ptr [0x1220716c] */
  EAX = (r32((uint32_t)(0x1220716c)));
  /* 121dde3f push eax */
  push32((uint32_t)(EAX));
  /* 121dde40 call dword ptr [0x1220833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220833c))), 0x121dde46u);
  /* 121dde46 mov dword ptr [0x12207168], eax */
  w32((uint32_t)(0x12207168), (EAX));
  /* 121dde4b cmp dword ptr [0x12207168], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12207168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dde52 jne 0x121dde58 */
  if (!C.zf) goto L_121dde58;
  /* 121dde54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dde56 jmp 0x121dde87 */
  goto L_121dde87;
L_121dde58:;
  /* 121dde58 mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121dde5e mov dword ptr [0x1220715c], ecx */
  w32((uint32_t)(0x1220715c), (ECX));
  /* 121dde64 mov dword ptr [0x12207160], 0 */
  w32((uint32_t)(0x12207160), (0x0u));
  /* 121dde6e mov dword ptr [0x12207164], 0 */
  w32((uint32_t)(0x12207164), (0x0u));
  /* 121dde78 mov dword ptr [0x12207148], 0x10 */
  w32((uint32_t)(0x12207148), (0x10u));
  /* 121dde82 mov eax, 1 */
  EAX = (0x1u);
L_121dde87:;
  /* 121dde87 pop ebp */
  EBP = (pop32());
  /* 121dde88 ret  */
  ESPCHK(0x121dde30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de90 @ 0x121dde90 (85 bytes, 29 insns) */
void f_121dde90(void) {
  FTRACE(0x121dde90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dde90 push ebp */
  push32((uint32_t)(EBP));
  /* 121dde91 mov ebp, esp */
  EBP = (ESP);
  /* 121dde93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dde96 mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121dde9b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121dde9e mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121ddea4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ddea6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121ddea9 mov edx, dword ptr [0x12207168] */
  EDX = (r32((uint32_t)(0x12207168)));
  /* 121ddeaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121ddeb2:;
  /* 121ddeb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121ddeb5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ddeb8 jae 0x121ddedf */
  if (!C.cf) goto L_121ddedf;
  /* 121ddeba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121ddebd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ddec0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddec3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121ddec6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ddecd jae 0x121dded4 */
  if (!C.cf) goto L_121dded4;
  /* 121ddecf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dded2 jmp 0x121ddee1 */
  goto L_121ddee1;
L_121dded4:;
  /* 121dded4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dded7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ddeda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121ddedd jmp 0x121ddeb2 */
  goto L_121ddeb2;
L_121ddedf:;
  /* 121ddedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121ddee1:;
  /* 121ddee1 mov esp, ebp */
  ESP = (EBP);
  /* 121ddee3 pop ebp */
  EBP = (pop32());
  /* 121ddee4 ret  */
  ESPCHK(0x121dde90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000def0 @ 0x121ddef0 (95 bytes, 33 insns) */
void f_121ddef0(void) {
  FTRACE(0x121ddef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ddef0 push ebp */
  push32((uint32_t)(EBP));
  /* 121ddef1 mov ebp, esp */
  EBP = (ESP);
  /* 121ddef3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ddef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121ddefc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddeff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121ddf02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121ddf05 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 121ddf08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121ddf0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121ddf10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ddf13 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121ddf15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ddf18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121ddf1b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121ddf1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121ddf1f jne 0x121ddf41 */
  if (!C.zf) goto L_121ddf41;
  /* 121ddf21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121ddf24 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 121ddf27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121ddf29 jne 0x121ddf41 */
  if (!C.zf) goto L_121ddf41;
  /* 121ddf2b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121ddf2e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 121ddf34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121ddf36 je 0x121ddf41 */
  if (C.zf) goto L_121ddf41;
  /* 121ddf38 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 121ddf3f jmp 0x121ddf48 */
  goto L_121ddf48;
L_121ddf41:;
  /* 121ddf41 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_121ddf48:;
  /* 121ddf48 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121ddf4b mov esp, ebp */
  ESP = (EBP);
  /* 121ddf4d pop ebp */
  EBP = (pop32());
  /* 121ddf4e ret  */
  ESPCHK(0x121ddef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df50 @ 0x121ddf50 (1485 bytes, 453 insns) */
void f_121ddf50(void) {
  FTRACE(0x121ddf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ddf50 push ebp */
  push32((uint32_t)(EBP));
  /* 121ddf51 mov ebp, esp */
  EBP = (ESP);
  /* 121ddf53 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddf56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ddf59 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121ddf5c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 121ddf5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ddf62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121ddf65 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddf68 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121ddf6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121ddf6e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 121ddf71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121ddf74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ddf77 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121ddf7d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121ddf80 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 121ddf87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121ddf8a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121ddf8d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddf90 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 121ddf93 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121ddf96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121ddf98 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddf9b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 121ddf9e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121ddfa1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ddfa4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 121ddfa7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121ddfaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121ddfac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121ddfaf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121ddfb2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 121ddfb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121ddfb8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121ddfbb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121ddfbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121ddfc0 jne 0x121de0e8 */
  if (!C.zf) goto L_121de0e8;
  /* 121ddfc6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121ddfc9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121ddfcc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ddfcf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121ddfd2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ddfd6 jbe 0x121ddfdf */
  if ((C.cf||C.zf)) goto L_121ddfdf;
  /* 121ddfd8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_121ddfdf:;
  /* 121ddfdf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121ddfe2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121ddfe5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 121ddfe8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ddfeb jne 0x121de0c1 */
  if (!C.zf) goto L_121de0c1;
  /* 121ddff1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121ddff5 jae 0x121de056 */
  if (!C.cf) goto L_121de056;
  /* 121ddff7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121ddffc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121ddfff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de001 not eax */
  EAX = (~(EAX));
  /* 121de003 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de006 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de009 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 121de00d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de012 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de015 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 121de019 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de01c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de01f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121de022 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de025 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de028 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de02b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 121de02e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de031 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de034 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121de038 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de03a jne 0x121de054 */
  if (!C.zf) goto L_121de054;
  /* 121de03c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de041 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de044 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de046 not eax */
  EAX = (~(EAX));
  /* 121de048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de04b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121de04d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121de04f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de052 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121de054:;
  /* 121de054 jmp 0x121de0c1 */
  goto L_121de0c1;
L_121de056:;
  /* 121de056 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de059 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de05c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de061 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de063 not edx */
  EDX = (~(EDX));
  /* 121de065 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de068 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de06b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 121de072 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de077 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de07a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 121de081 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de084 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de087 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121de08a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de08d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de090 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de093 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121de096 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de099 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de09c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121de0a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de0a2 jne 0x121de0c1 */
  if (!C.zf) goto L_121de0c1;
  /* 121de0a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de0a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de0aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de0af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de0b1 not edx */
  EDX = (~(EDX));
  /* 121de0b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de0b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de0b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de0bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de0be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_121de0c1:;
  /* 121de0c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de0c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121de0c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de0ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121de0cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121de0d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de0d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de0d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de0d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121de0dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121de0df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de0e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de0e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_121de0e8:;
  /* 121de0e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de0eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 121de0ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de0f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121de0f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de0f8 jbe 0x121de101 */
  if ((C.cf||C.zf)) goto L_121de101;
  /* 121de0fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_121de101:;
  /* 121de101 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de104 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121de107 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de109 jne 0x121de265 */
  if (!C.zf) goto L_121de265;
  /* 121de10f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de112 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de115 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 121de118 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de11b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 121de11e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de121 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 121de124 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de128 jbe 0x121de131 */
  if ((C.cf||C.zf)) goto L_121de131;
  /* 121de12a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_121de131:;
  /* 121de131 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de134 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de137 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 121de13a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de13d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121de140 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de143 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 121de146 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de14a jbe 0x121de153 */
  if ((C.cf||C.zf)) goto L_121de153;
  /* 121de14c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_121de153:;
  /* 121de153 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de156 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de159 je 0x121de25f */
  if (C.zf) goto L_121de25f;
  /* 121de15f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de162 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de165 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de168 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de16b jne 0x121de241 */
  if (!C.zf) goto L_121de241;
  /* 121de171 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de175 jae 0x121de1d6 */
  if (!C.cf) goto L_121de1d6;
  /* 121de177 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de17c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de17f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de181 not edx */
  EDX = (~(EDX));
  /* 121de183 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de186 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de189 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 121de18d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de18f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de192 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de195 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 121de199 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de19c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de19f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121de1a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de1a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de1a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de1ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121de1ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de1b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de1b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121de1b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de1ba jne 0x121de1d4 */
  if (!C.zf) goto L_121de1d4;
  /* 121de1bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de1c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de1c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de1c6 not edx */
  EDX = (~(EDX));
  /* 121de1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de1cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121de1cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de1cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de1d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121de1d4:;
  /* 121de1d4 jmp 0x121de241 */
  goto L_121de241;
L_121de1d6:;
  /* 121de1d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de1d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de1dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de1e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de1e3 not eax */
  EAX = (~(EAX));
  /* 121de1e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de1e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de1eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121de1f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de1f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de1f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de1fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 121de201 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de204 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de207 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121de20a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de20d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de210 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de213 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 121de216 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de219 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de21c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121de220 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de222 jne 0x121de241 */
  if (!C.zf) goto L_121de241;
  /* 121de224 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de227 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de22a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de22f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de231 not eax */
  EAX = (~(EAX));
  /* 121de233 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de236 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de239 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121de23b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de23e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121de241:;
  /* 121de241 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de244 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121de247 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de24a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de24d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121de250 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de253 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121de256 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de259 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121de25c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_121de25f:;
  /* 121de25f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de262 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_121de265:;
  /* 121de265 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de268 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121de26b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de26d jne 0x121de27b */
  if (!C.zf) goto L_121de27b;
  /* 121de26f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121de272 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de275 je 0x121de38b */
  if (C.zf) goto L_121de38b;
L_121de27b:;
  /* 121de27b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de27e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de281 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 121de284 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121de287 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de28a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de28d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de290 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121de293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de296 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de299 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 121de29c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de29f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de2a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121de2a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de2a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de2ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de2ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121de2b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de2b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de2b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de2ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de2bd jne 0x121de38b */
  if (!C.zf) goto L_121de38b;
  /* 121de2c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de2c7 jae 0x121de324 */
  if (!C.cf) goto L_121de324;
  /* 121de2c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de2cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de2cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121de2d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de2d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de2d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121de2dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121de2df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de2e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de2e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 121de2e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de2ea jne 0x121de302 */
  if (!C.zf) goto L_121de302;
  /* 121de2ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de2f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de2f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de2f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de2f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121de2fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de2fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de300 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121de302:;
  /* 121de302 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de307 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de30a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de30c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de30f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de312 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 121de316 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de318 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de31b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de31e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 121de322 jmp 0x121de38b */
  goto L_121de38b;
L_121de324:;
  /* 121de324 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de327 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de32a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121de32e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de331 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de334 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121de337 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121de33a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de33d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de340 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 121de343 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de345 jne 0x121de362 */
  if (!C.zf) goto L_121de362;
  /* 121de347 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de34a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de34d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de352 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de357 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de35a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de35c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de35f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_121de362:;
  /* 121de362 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de365 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de368 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de36d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de36f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de372 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de375 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121de37c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de37e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de381 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 121de384 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_121de38b:;
  /* 121de38b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de38e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de391 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121de393 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de396 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de399 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de39c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 121de39f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de3a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121de3a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de3a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de3aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121de3ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de3af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de3b2 jne 0x121de519 */
  if (!C.zf) goto L_121de519;
  /* 121de3b8 cmp dword ptr [0x12207160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12207160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de3bf je 0x121de508 */
  if (C.zf) goto L_121de508;
  /* 121de3c5 mov eax, dword ptr [0x12207158] */
  EAX = (r32((uint32_t)(0x12207158)));
  /* 121de3ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 121de3cd mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121de3d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121de3d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de3d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121de3db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 121de3e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121de3e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de3e8 push eax */
  push32((uint32_t)(EAX));
  /* 121de3e9 call dword ptr [0x12208358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208358))), 0x121de3efu);
  /* 121de3ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de3f4 mov ecx, dword ptr [0x12207158] */
  ECX = (r32((uint32_t)(0x12207158)));
  /* 121de3fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de3fc mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de401 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121de404 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de406 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de40c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121de40f mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de414 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121de417 mov edx, dword ptr [0x12207158] */
  EDX = (r32((uint32_t)(0x12207158)));
  /* 121de41d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 121de428 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de42d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121de430 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 121de433 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de436 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de43b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121de43e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 121de441 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de447 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121de44a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 121de44e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de450 jne 0x121de466 */
  if (!C.zf) goto L_121de466;
  /* 121de452 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de458 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121de45b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 121de45d mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121de463 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_121de466:;
  /* 121de466 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de46c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de470 jne 0x121de508 */
  if (!C.zf) goto L_121de508;
  /* 121de476 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121de47b push 0 */
  push32((uint32_t)(0x0u));
  /* 121de47d mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de482 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121de485 push ecx */
  push32((uint32_t)(ECX));
  /* 121de486 call dword ptr [0x12208358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208358))), 0x121de48cu);
  /* 121de48c mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de492 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121de495 push eax */
  push32((uint32_t)(EAX));
  /* 121de496 push 0 */
  push32((uint32_t)(0x0u));
  /* 121de498 mov ecx, dword ptr [0x1220716c] */
  ECX = (r32((uint32_t)(0x1220716c)));
  /* 121de49e push ecx */
  push32((uint32_t)(ECX));
  /* 121de49f call dword ptr [0x1220835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220835c))), 0x121de4a5u);
  /* 121de4a5 mov edx, dword ptr [0x12207164] */
  EDX = (r32((uint32_t)(0x12207164)));
  /* 121de4ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121de4ae mov eax, dword ptr [0x12207168] */
  EAX = (r32((uint32_t)(0x12207168)));
  /* 121de4b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de4b5 mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121de4bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de4be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de4c0 push eax */
  push32((uint32_t)(EAX));
  /* 121de4c1 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121de4c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de4ca push edx */
  push32((uint32_t)(EDX));
  /* 121de4cb mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121de4d0 push eax */
  push32((uint32_t)(EAX));
  /* 121de4d1 call 0x121e1a80 */
  push32(0x121de4d6u); f_121e1a80();
  /* 121de4d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121de4d9 mov ecx, dword ptr [0x12207164] */
  ECX = (r32((uint32_t)(0x12207164)));
  /* 121de4df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de4e2 mov dword ptr [0x12207164], ecx */
  w32((uint32_t)(0x12207164), (ECX));
  /* 121de4e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de4eb cmp edx, dword ptr [0x12207160] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12207160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de4f1 jbe 0x121de4fc */
  if ((C.cf||C.zf)) goto L_121de4fc;
  /* 121de4f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de4f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de4f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121de4fc:;
  /* 121de4fc mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121de502 mov dword ptr [0x1220715c], ecx */
  w32((uint32_t)(0x1220715c), (ECX));
L_121de508:;
  /* 121de508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de50b mov dword ptr [0x12207160], edx */
  w32((uint32_t)(0x12207160), (EDX));
  /* 121de511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de514 mov dword ptr [0x12207158], eax */
  w32((uint32_t)(0x12207158), (EAX));
L_121de519:;
  /* 121de519 mov esp, ebp */
  ESP = (EBP);
  /* 121de51b pop ebp */
  EBP = (pop32());
  /* 121de51c ret  */
  ESPCHK(0x121ddf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x121de520 (1334 bytes, 427 insns) */
void f_121de520(void) {
  FTRACE(0x121de520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121de520 push ebp */
  push32((uint32_t)(EBP));
  /* 121de521 mov ebp, esp */
  EBP = (ESP);
  /* 121de523 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de526 push esi */
  push32((uint32_t)(ESI));
  /* 121de527 mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121de52c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121de52f mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121de535 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de537 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121de53a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121de53d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de540 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 121de543 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 121de546 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de549 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 121de54c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de54f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121de552 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de556 jge 0x121de56c */
  if ((C.sf==C.of)) goto L_121de56c;
  /* 121de558 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121de55b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de55e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de560 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121de563 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 121de56a jmp 0x121de581 */
  goto L_121de581;
L_121de56c:;
  /* 121de56c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121de573 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de576 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de579 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121de57c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de57e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_121de581:;
  /* 121de581 mov ecx, dword ptr [0x1220715c] */
  ECX = (r32((uint32_t)(0x1220715c)));
  /* 121de587 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_121de58a:;
  /* 121de58a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de58d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de590 jae 0x121de5b6 */
  if (!C.cf) goto L_121de5b6;
  /* 121de592 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de598 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 121de59a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de59d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de5a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 121de5a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de5a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de5a7 je 0x121de5ab */
  if (C.zf) goto L_121de5ab;
  /* 121de5a9 jmp 0x121de5b6 */
  goto L_121de5b6;
L_121de5ab:;
  /* 121de5ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de5b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121de5b4 jmp 0x121de58a */
  goto L_121de58a;
L_121de5b6:;
  /* 121de5b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de5bc jne 0x121de69d */
  if (!C.zf) goto L_121de69d;
  /* 121de5c2 mov eax, dword ptr [0x12207168] */
  EAX = (r32((uint32_t)(0x12207168)));
  /* 121de5c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121de5ca:;
  /* 121de5ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5cd cmp ecx, dword ptr [0x1220715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1220715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de5d3 jae 0x121de5f9 */
  if (!C.cf) goto L_121de5f9;
  /* 121de5d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de5db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 121de5dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de5e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 121de5e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de5e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121de5ea je 0x121de5ee */
  if (C.zf) goto L_121de5ee;
  /* 121de5ec jmp 0x121de5f9 */
  goto L_121de5f9;
L_121de5ee:;
  /* 121de5ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de5f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121de5f7 jmp 0x121de5ca */
  goto L_121de5ca;
L_121de5f9:;
  /* 121de5f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de5fc cmp ecx, dword ptr [0x1220715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1220715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de602 jne 0x121de69d */
  if (!C.zf) goto L_121de69d;
L_121de608:;
  /* 121de608 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de60b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de60e jae 0x121de626 */
  if (!C.cf) goto L_121de626;
  /* 121de610 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de613 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de617 je 0x121de61b */
  if (C.zf) goto L_121de61b;
  /* 121de619 jmp 0x121de626 */
  goto L_121de626;
L_121de61b:;
  /* 121de61b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de61e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de621 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121de624 jmp 0x121de608 */
  goto L_121de608;
L_121de626:;
  /* 121de626 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de629 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de62c jne 0x121de677 */
  if (!C.zf) goto L_121de677;
  /* 121de62e mov eax, dword ptr [0x12207168] */
  EAX = (r32((uint32_t)(0x12207168)));
  /* 121de633 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121de636:;
  /* 121de636 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de639 cmp ecx, dword ptr [0x1220715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1220715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de63f jae 0x121de657 */
  if (!C.cf) goto L_121de657;
  /* 121de641 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de644 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de648 je 0x121de64c */
  if (C.zf) goto L_121de64c;
  /* 121de64a jmp 0x121de657 */
  goto L_121de657;
L_121de64c:;
  /* 121de64c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de64f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de652 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121de655 jmp 0x121de636 */
  goto L_121de636;
L_121de657:;
  /* 121de657 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de65a cmp ecx, dword ptr [0x1220715c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1220715c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de660 jne 0x121de677 */
  if (!C.zf) goto L_121de677;
  /* 121de662 call 0x121dea60 */
  push32(0x121de667u); f_121dea60();
  /* 121de667 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121de66a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de66e jne 0x121de677 */
  if (!C.zf) goto L_121de677;
  /* 121de670 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121de672 jmp 0x121dea51 */
  goto L_121dea51;
L_121de677:;
  /* 121de677 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de67a push edx */
  push32((uint32_t)(EDX));
  /* 121de67b call 0x121deb70 */
  push32(0x121de680u); f_121deb70();
  /* 121de680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121de683 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de686 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121de689 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121de68b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de68e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121de691 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de694 jne 0x121de69d */
  if (!C.zf) goto L_121de69d;
  /* 121de696 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121de698 jmp 0x121dea51 */
  goto L_121dea51;
L_121de69d:;
  /* 121de69d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de6a0 mov dword ptr [0x1220715c], edx */
  w32((uint32_t)(0x1220715c), (EDX));
  /* 121de6a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de6a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121de6ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 121de6af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de6b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121de6b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121de6b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de6bb je 0x121de6e0 */
  if (C.zf) goto L_121de6e0;
  /* 121de6bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de6c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de6c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de6c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 121de6ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de6cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de6d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 121de6d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 121de6da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 121de6dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121de6de jne 0x121de715 */
  if (!C.zf) goto L_121de715;
L_121de6e0:;
  /* 121de6e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_121de6e7:;
  /* 121de6e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de6ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de6ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de6f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 121de6f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de6f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de6fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 121de6fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 121de704 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 121de706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de708 jne 0x121de715 */
  if (!C.zf) goto L_121de715;
  /* 121de70a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de710 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 121de713 jmp 0x121de6e7 */
  goto L_121de6e7;
L_121de715:;
  /* 121de715 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de718 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121de71e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de721 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 121de728 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121de72b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121de732 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de735 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de738 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121de73b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 121de73f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 121de742 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de746 jne 0x121de762 */
  if (!C.zf) goto L_121de762;
  /* 121de748 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 121de74f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de752 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de755 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121de758 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 121de75f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_121de762:;
  /* 121de762 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de766 jl 0x121de77b */
  if ((C.sf!=C.of)) goto L_121de77b;
  /* 121de768 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121de76b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121de76d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121de770 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de773 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de776 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121de779 jmp 0x121de762 */
  goto L_121de762;
L_121de77b:;
  /* 121de77b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de781 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 121de785 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121de788 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de78b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121de78d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de790 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121de793 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de796 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 121de799 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de79c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121de79f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de7a3 jle 0x121de7ac */
  if ((C.zf||C.sf!=C.of)) goto L_121de7ac;
  /* 121de7a5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_121de7ac:;
  /* 121de7ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de7af cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de7b2 je 0x121de9d0 */
  if (C.zf) goto L_121de9d0;
  /* 121de7b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de7bb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de7be mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de7c1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de7c4 jne 0x121de89a */
  if (!C.zf) goto L_121de89a;
  /* 121de7ca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de7ce jge 0x121de82f */
  if ((C.sf==C.of)) goto L_121de82f;
  /* 121de7d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de7d5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de7d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de7da not eax */
  EAX = (~(EAX));
  /* 121de7dc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de7df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de7e2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 121de7e6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121de7e8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de7eb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de7ee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 121de7f2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de7f5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de7f8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121de7fb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de7fe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de801 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de804 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 121de807 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de80a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de80d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121de811 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121de813 jne 0x121de82d */
  if (!C.zf) goto L_121de82d;
  /* 121de815 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de81a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de81d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de81f not eax */
  EAX = (~(EAX));
  /* 121de821 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de824 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121de826 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121de828 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de82b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121de82d:;
  /* 121de82d jmp 0x121de89a */
  goto L_121de89a;
L_121de82f:;
  /* 121de82f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de832 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de835 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de83a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de83c not edx */
  EDX = (~(EDX));
  /* 121de83e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de841 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de844 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 121de84b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de84d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de850 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de853 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 121de85a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de85d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de860 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121de863 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121de866 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de869 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de86c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121de86f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de872 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de875 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121de879 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de87b jne 0x121de89a */
  if (!C.zf) goto L_121de89a;
  /* 121de87d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121de880 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de883 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de888 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de88a not edx */
  EDX = (~(EDX));
  /* 121de88c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de88f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de892 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121de894 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de897 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_121de89a:;
  /* 121de89a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de89d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121de8a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121de8a6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121de8a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8ac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de8af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8b2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121de8b5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121de8b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de8bc je 0x121de9d0 */
  if (C.zf) goto L_121de9d0;
  /* 121de8c2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de8c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121de8c8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 121de8cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121de8ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de8d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de8d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121de8da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de8e0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121de8e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121de8e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8e9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 121de8ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de8f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8f5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 121de8f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de8fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 121de901 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de904 jne 0x121de9d0 */
  if (!C.zf) goto L_121de9d0;
  /* 121de90a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de90e jge 0x121de96a */
  if ((C.sf==C.of)) goto L_121de96a;
  /* 121de910 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de913 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de916 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121de91a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de91d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de920 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 121de923 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121de925 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de928 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de92b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 121de92e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de930 jne 0x121de948 */
  if (!C.zf) goto L_121de948;
  /* 121de932 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de937 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de93a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de93c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de93f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121de941 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121de943 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de946 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121de948:;
  /* 121de948 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de94d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de950 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de952 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de955 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de958 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 121de95c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de95e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de961 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de964 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 121de968 jmp 0x121de9d0 */
  goto L_121de9d0;
L_121de96a:;
  /* 121de96a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de96d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de970 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121de974 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de977 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de97a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 121de97d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121de97f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de982 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de985 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 121de988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121de98a jne 0x121de9a7 */
  if (!C.zf) goto L_121de9a7;
  /* 121de98c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de98f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de992 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121de997 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121de999 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de99c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121de99f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121de9a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121de9a4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121de9a7:;
  /* 121de9a7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121de9aa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121de9ad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121de9b2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121de9b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de9b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de9ba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 121de9c1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121de9c3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121de9c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121de9c9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_121de9d0:;
  /* 121de9d0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121de9d4 je 0x121de9ea */
  if (C.zf) goto L_121de9ea;
  /* 121de9d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de9d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de9dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121de9de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de9e1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de9e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121de9e7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_121de9ea:;
  /* 121de9ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de9ed add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de9f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121de9f3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121de9f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121de9f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121de9fc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121de9fe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dea01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dea04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dea07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dea0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 121dea0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dea10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121dea12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dea15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121dea17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dea1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dea1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121dea1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121dea21 jne 0x121dea43 */
  if (!C.zf) goto L_121dea43;
  /* 121dea23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dea26 cmp eax, dword ptr [0x12207160] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12207160))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dea2c jne 0x121dea43 */
  if (!C.zf) goto L_121dea43;
  /* 121dea2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dea31 cmp ecx, dword ptr [0x12207158] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12207158))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dea37 jne 0x121dea43 */
  if (!C.zf) goto L_121dea43;
  /* 121dea39 mov dword ptr [0x12207160], 0 */
  w32((uint32_t)(0x12207160), (0x0u));
L_121dea43:;
  /* 121dea43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 121dea46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dea49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 121dea4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dea4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_121dea51:;
  /* 121dea51 pop esi */
  ESI = (pop32());
  /* 121dea52 mov esp, ebp */
  ESP = (EBP);
  /* 121dea54 pop ebp */
  EBP = (pop32());
  /* 121dea55 ret  */
  ESPCHK(0x121de520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea60 @ 0x121dea60 (271 bytes, 78 insns) */
void f_121dea60(void) {
  FTRACE(0x121dea60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dea60 push ebp */
  push32((uint32_t)(EBP));
  /* 121dea61 mov ebp, esp */
  EBP = (ESP);
  /* 121dea63 push ecx */
  push32((uint32_t)(ECX));
  /* 121dea64 mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121dea69 cmp eax, dword ptr [0x12207148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12207148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dea6f jne 0x121deabb */
  if (!C.zf) goto L_121deabb;
  /* 121dea71 mov ecx, dword ptr [0x12207148] */
  ECX = (r32((uint32_t)(0x12207148)));
  /* 121dea77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dea7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121dea7d push ecx */
  push32((uint32_t)(ECX));
  /* 121dea7e mov edx, dword ptr [0x12207168] */
  EDX = (r32((uint32_t)(0x12207168)));
  /* 121dea84 push edx */
  push32((uint32_t)(EDX));
  /* 121dea85 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dea87 mov eax, dword ptr [0x1220716c] */
  EAX = (r32((uint32_t)(0x1220716c)));
  /* 121dea8c push eax */
  push32((uint32_t)(EAX));
  /* 121dea8d call dword ptr [0x12208338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208338))), 0x121dea93u);
  /* 121dea93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121dea96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dea9a jne 0x121deaa3 */
  if (!C.zf) goto L_121deaa3;
  /* 121dea9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dea9e jmp 0x121deb6b */
  goto L_121deb6b;
L_121deaa3:;
  /* 121deaa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deaa6 mov dword ptr [0x12207168], ecx */
  w32((uint32_t)(0x12207168), (ECX));
  /* 121deaac mov edx, dword ptr [0x12207148] */
  EDX = (r32((uint32_t)(0x12207148)));
  /* 121deab2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deab5 mov dword ptr [0x12207148], edx */
  w32((uint32_t)(0x12207148), (EDX));
L_121deabb:;
  /* 121deabb mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121deac0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121deac3 mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121deac9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deacb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121deace push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 121dead3 push 8 */
  push32((uint32_t)(0x8u));
  /* 121dead5 mov edx, dword ptr [0x1220716c] */
  EDX = (r32((uint32_t)(0x1220716c)));
  /* 121deadb push edx */
  push32((uint32_t)(EDX));
  /* 121deadc call dword ptr [0x1220833c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220833c))), 0x121deae2u);
  /* 121deae2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deae5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 121deae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deaeb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121deaef jne 0x121deaf5 */
  if (!C.zf) goto L_121deaf5;
  /* 121deaf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121deaf3 jmp 0x121deb6b */
  goto L_121deb6b;
L_121deaf5:;
  /* 121deaf5 push 4 */
  push32((uint32_t)(0x4u));
  /* 121deaf7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 121deafc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 121deb01 push 0 */
  push32((uint32_t)(0x0u));
  /* 121deb03 call dword ptr [0x12208334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208334))), 0x121deb09u);
  /* 121deb09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 121deb0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121deb16 jne 0x121deb32 */
  if (!C.zf) goto L_121deb32;
  /* 121deb18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121deb1e push ecx */
  push32((uint32_t)(ECX));
  /* 121deb1f push 0 */
  push32((uint32_t)(0x0u));
  /* 121deb21 mov edx, dword ptr [0x1220716c] */
  EDX = (r32((uint32_t)(0x1220716c)));
  /* 121deb27 push edx */
  push32((uint32_t)(EDX));
  /* 121deb28 call dword ptr [0x1220835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220835c))), 0x121deb2eu);
  /* 121deb2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121deb30 jmp 0x121deb6b */
  goto L_121deb6b;
L_121deb32:;
  /* 121deb32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121deb3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121deb45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 121deb4f mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121deb54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deb57 mov dword ptr [0x12207164], eax */
  w32((uint32_t)(0x12207164), (EAX));
  /* 121deb5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deb5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121deb62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 121deb68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121deb6b:;
  /* 121deb6b mov esp, ebp */
  ESP = (EBP);
  /* 121deb6d pop ebp */
  EBP = (pop32());
  /* 121deb6e ret  */
  ESPCHK(0x121dea60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x121deb70 (494 bytes, 149 insns) */
void f_121deb70(void) {
  FTRACE(0x121deb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121deb70 push ebp */
  push32((uint32_t)(EBP));
  /* 121deb71 mov ebp, esp */
  EBP = (ESP);
  /* 121deb73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121deb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121deb79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121deb7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121deb7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121deb82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121deb85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121deb88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_121deb8f:;
  /* 121deb8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121deb93 jl 0x121deba8 */
  if ((C.sf!=C.of)) goto L_121deba8;
  /* 121deb95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121deb98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 121deb9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121deb9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121deba0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deba3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 121deba6 jmp 0x121deb8f */
  goto L_121deb8f;
L_121deba8:;
  /* 121deba8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121debab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121debb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121debb4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 121debbb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121debbe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121debc5 jmp 0x121debd0 */
  goto L_121debd0;
L_121debc7:;
  /* 121debc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121debca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121debcd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_121debd0:;
  /* 121debd0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121debd4 jge 0x121debf6 */
  if ((C.sf==C.of)) goto L_121debf6;
  /* 121debd6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121debd9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121debdc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 121debdf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121debe2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121debe5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121debe8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 121debeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121debee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121debf1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 121debf4 jmp 0x121debc7 */
  goto L_121debc7;
L_121debf6:;
  /* 121debf6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121debf9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 121debfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121debff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121dec02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121dec07 push 4 */
  push32((uint32_t)(0x4u));
  /* 121dec09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 121dec0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121dec13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dec16 push edx */
  push32((uint32_t)(EDX));
  /* 121dec17 call dword ptr [0x12208334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208334))), 0x121dec1du);
  /* 121dec1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dec1f jne 0x121dec29 */
  if (!C.zf) goto L_121dec29;
  /* 121dec21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121dec24 jmp 0x121ded5a */
  goto L_121ded5a;
L_121dec29:;
  /* 121dec29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dec2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121dec34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dec37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121dec3a jmp 0x121dec48 */
  goto L_121dec48;
L_121dec3c:;
  /* 121dec3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dec3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121dec48:;
  /* 121dec48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dec4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dec4e ja 0x121decad */
  if ((!C.cf&&!C.zf)) goto L_121decad;
  /* 121dec50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dec53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 121dec5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dec5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 121dec67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dec6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121dec70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 121dec79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121dec88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dec91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121dec97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dec9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dec9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121deca2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121deca5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 121decab jmp 0x121dec3c */
  goto L_121dec3c;
L_121decad:;
  /* 121decad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121decb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121decb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121decb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121decbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121decbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121decc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121decc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121decc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121deccb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121decce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121decd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121decd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 121decd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121decda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121decdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121dece0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 121dece3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121dece6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121dece9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121decec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121decef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121decf2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 121decf5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121decf8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121decfb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 121ded03 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121ded06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121ded09 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 121ded14 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121ded17 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 121ded1b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121ded1e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 121ded21 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121ded24 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121ded27 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 121ded2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121ded2c jne 0x121ded3d */
  if (!C.zf) goto L_121ded3d;
  /* 121ded2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded31 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121ded34 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121ded37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121ded3d:;
  /* 121ded3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121ded42 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121ded45 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121ded47 not edx */
  EDX = (~(EDX));
  /* 121ded49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded4c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121ded4f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121ded51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded54 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121ded57 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_121ded5a:;
  /* 121ded5a mov esp, ebp */
  ESP = (EBP);
  /* 121ded5c pop ebp */
  EBP = (pop32());
  /* 121ded5d ret  */
  ESPCHK(0x121deb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed60 @ 0x121ded60 (1515 bytes, 489 insns) */
void f_121ded60(void) {
  FTRACE(0x121ded60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121ded60 push ebp */
  push32((uint32_t)(EBP));
  /* 121ded61 mov ebp, esp */
  EBP = (ESP);
  /* 121ded63 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ded66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121ded69 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121ded6c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 121ded6e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121ded71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded74 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 121ded77 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 121ded7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121ded7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121ded80 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121ded83 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121ded86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121ded89 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 121ded8c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121ded8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121ded92 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121ded98 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121ded9b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 121deda2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121deda5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121deda8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dedab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121dedae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121dedb1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121dedb3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dedb6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 121dedb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121dedbc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dedbf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 121dedc2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121dedc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121dedc7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121dedca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121dedcd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dedd0 jle 0x121df086 */
  if ((C.zf||C.sf!=C.of)) goto L_121df086;
  /* 121dedd6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dedd9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121deddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121dedde jne 0x121dedeb */
  if (!C.zf) goto L_121dedeb;
  /* 121dede0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dede3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dede6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dede9 jle 0x121dedf2 */
  if ((C.zf||C.sf!=C.of)) goto L_121dedf2;
L_121dedeb:;
  /* 121dedeb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121deded jmp 0x121df347 */
  goto L_121df347;
L_121dedf2:;
  /* 121dedf2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121dedf5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 121dedf8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dedfb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121dedfe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dee02 jbe 0x121dee0b */
  if ((C.cf||C.zf)) goto L_121dee0b;
  /* 121dee04 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_121dee0b:;
  /* 121dee0b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121dee0e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121dee11 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121dee14 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dee17 jne 0x121deeed */
  if (!C.zf) goto L_121deeed;
  /* 121dee1d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dee21 jae 0x121dee82 */
  if (!C.cf) goto L_121dee82;
  /* 121dee23 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121dee28 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121dee2b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121dee2d not edx */
  EDX = (~(EDX));
  /* 121dee2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dee32 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee35 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 121dee39 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121dee3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dee3e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee41 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 121dee45 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee48 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dee4b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121dee4e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121dee51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee54 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dee57 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121dee5a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dee60 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121dee64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121dee66 jne 0x121dee80 */
  if (!C.zf) goto L_121dee80;
  /* 121dee68 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121dee6d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121dee70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121dee72 not edx */
  EDX = (~(EDX));
  /* 121dee74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dee77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121dee79 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121dee7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dee7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121dee80:;
  /* 121dee80 jmp 0x121deeed */
  goto L_121deeed;
L_121dee82:;
  /* 121dee82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121dee85 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dee88 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121dee8d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121dee8f not eax */
  EAX = (~(EAX));
  /* 121dee91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dee94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121dee97 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121dee9e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121deea0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121deea3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121deea6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 121deead mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121deeb0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deeb3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121deeb6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121deeb9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121deebc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deebf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 121deec2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121deec5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deec8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121deecc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121deece jne 0x121deeed */
  if (!C.zf) goto L_121deeed;
  /* 121deed0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121deed3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121deed6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121deedb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121deedd not eax */
  EAX = (~(EAX));
  /* 121deedf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121deee2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121deee5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121deee7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121deeea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121deeed:;
  /* 121deeed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121deef0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121deef3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121deef6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121deef9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121deefc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121deeff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121def02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def05 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121def08 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 121def0b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121def0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121def11 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121def14 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121def17 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121def1b jle 0x121df067 */
  if ((C.zf||C.sf!=C.of)) goto L_121df067;
  /* 121def21 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121def24 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121def27 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121def2a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121def2d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121def30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121def33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121def36 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121def3a jbe 0x121def43 */
  if ((C.cf||C.zf)) goto L_121def43;
  /* 121def3c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_121def43:;
  /* 121def43 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121def46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121def49 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 121def4c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121def4f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def52 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121def55 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121def58 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121def5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121def61 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 121def64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121def67 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def6a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121def6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def70 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121def73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def76 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121def79 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121def7f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121def82 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121def85 jne 0x121df053 */
  if (!C.zf) goto L_121df053;
  /* 121def8b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121def8f jae 0x121defec */
  if (!C.cf) goto L_121defec;
  /* 121def91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121def94 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121def97 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121def9b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121def9e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121defa1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121defa4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121defa7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121defaa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121defad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 121defb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121defb2 jne 0x121defca */
  if (!C.zf) goto L_121defca;
  /* 121defb4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121defb9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121defbc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121defbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121defc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121defc3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121defc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121defc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121defca:;
  /* 121defca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121defcf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121defd2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121defd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121defd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121defda mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 121defde or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121defe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121defe3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121defe6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 121defea jmp 0x121df053 */
  goto L_121df053;
L_121defec:;
  /* 121defec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121defef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deff2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121deff6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121deff9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121deffc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121defff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121df002 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df005 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df008 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 121df00b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121df00d jne 0x121df02a */
  if (!C.zf) goto L_121df02a;
  /* 121df00f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df012 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df015 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df01a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df01c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df01f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df022 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121df024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df027 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_121df02a:;
  /* 121df02a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df02d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df030 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121df035 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121df037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df03a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df03d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121df044 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121df046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df049 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df04c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_121df053:;
  /* 121df053 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df056 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df059 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121df05b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df05e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df061 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df064 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_121df067:;
  /* 121df067 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121df06a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df06d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df070 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121df072 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121df075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df078 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df07b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df07e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 121df081 jmp 0x121df342 */
  goto L_121df342;
L_121df086:;
  /* 121df086 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121df089 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df08c jge 0x121df342 */
  if ((C.sf==C.of)) goto L_121df342;
  /* 121df092 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121df095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df098 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df09b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121df09d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121df0a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df0a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df0a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df0a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 121df0ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df0af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df0b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121df0b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df0b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df0bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121df0be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df0c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 121df0c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df0c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121df0ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df0ce jbe 0x121df0d7 */
  if ((C.cf||C.zf)) goto L_121df0d7;
  /* 121df0d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_121df0d7:;
  /* 121df0d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df0da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121df0dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121df0df jne 0x121df220 */
  if (!C.zf) goto L_121df220;
  /* 121df0e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df0e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 121df0eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df0ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121df0f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df0f5 jbe 0x121df0fe */
  if ((C.cf||C.zf)) goto L_121df0fe;
  /* 121df0f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_121df0fe:;
  /* 121df0fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df101 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df104 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121df107 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df10a jne 0x121df1e0 */
  if (!C.zf) goto L_121df1e0;
  /* 121df110 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df114 jae 0x121df175 */
  if (!C.cf) goto L_121df175;
  /* 121df116 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df11b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df11e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df120 not edx */
  EDX = (~(EDX));
  /* 121df122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df125 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df128 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 121df12c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df131 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df134 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 121df138 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df13b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df13e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121df141 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121df144 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df147 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df14a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 121df14d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df150 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df153 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121df157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121df159 jne 0x121df173 */
  if (!C.zf) goto L_121df173;
  /* 121df15b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df163 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df165 not edx */
  EDX = (~(EDX));
  /* 121df167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df16a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121df16c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121df16e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df171 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121df173:;
  /* 121df173 jmp 0x121df1e0 */
  goto L_121df1e0;
L_121df175:;
  /* 121df175 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df178 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df17b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121df180 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121df182 not eax */
  EAX = (~(EAX));
  /* 121df184 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df187 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df18a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 121df191 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121df193 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df196 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df199 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 121df1a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df1a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df1a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 121df1a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121df1ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df1af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df1b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 121df1b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df1b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df1bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121df1bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121df1c1 jne 0x121df1e0 */
  if (!C.zf) goto L_121df1e0;
  /* 121df1c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121df1c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df1c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121df1ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121df1d0 not eax */
  EAX = (~(EAX));
  /* 121df1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df1d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121df1d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121df1da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df1dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121df1e0:;
  /* 121df1e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df1e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121df1e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df1e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df1ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121df1ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df1f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121df1f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121df1f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121df1fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 121df1fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df201 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df204 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121df207 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df20a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 121df20d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df210 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121df213 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df217 jbe 0x121df220 */
  if ((C.cf||C.zf)) goto L_121df220;
  /* 121df219 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_121df220:;
  /* 121df220 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121df223 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121df226 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 121df229 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121df22c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df22f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121df232 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df235 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121df238 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df23b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121df23e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121df241 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121df244 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df247 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 121df24a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df24d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df250 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df253 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 121df256 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df259 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df25c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df25f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df262 jne 0x121df32e */
  if (!C.zf) goto L_121df32e;
  /* 121df268 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df26c jae 0x121df2c8 */
  if (!C.cf) goto L_121df2c8;
  /* 121df26e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df271 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df274 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121df278 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df27b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df27e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 121df281 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121df283 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df286 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df289 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 121df28c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121df28e jne 0x121df2a6 */
  if (!C.zf) goto L_121df2a6;
  /* 121df290 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121df295 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121df298 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121df29a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df29d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121df29f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121df2a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df2a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121df2a6:;
  /* 121df2a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df2ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121df2ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df2b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df2b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df2b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 121df2ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df2bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df2c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 121df2c6 jmp 0x121df32e */
  goto L_121df32e;
L_121df2c8:;
  /* 121df2c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df2cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df2ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 121df2d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df2d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df2d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 121df2db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121df2dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df2e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df2e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 121df2e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121df2e8 jne 0x121df305 */
  if (!C.zf) goto L_121df305;
  /* 121df2ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121df2ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df2f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 121df2f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 121df2f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df2fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121df2fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121df2ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121df302 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_121df305:;
  /* 121df305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121df308 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df30b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df310 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df315 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df318 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 121df31f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df321 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df324 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121df327 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_121df32e:;
  /* 121df32e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df331 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df334 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121df336 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df339 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df33c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121df33f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_121df342:;
  /* 121df342 mov eax, 1 */
  EAX = (0x1u);
L_121df347:;
  /* 121df347 mov esp, ebp */
  ESP = (EBP);
  /* 121df349 pop ebp */
  EBP = (pop32());
  /* 121df34a ret  */
  ESPCHK(0x121ded60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x121df350 (304 bytes, 79 insns) */
void f_121df350(void) {
  FTRACE(0x121df350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121df350 push ebp */
  push32((uint32_t)(EBP));
  /* 121df351 mov ebp, esp */
  EBP = (ESP);
  /* 121df353 push ecx */
  push32((uint32_t)(ECX));
  /* 121df354 cmp dword ptr [0x12207160], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12207160))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df35b je 0x121df47c */
  if (C.zf) goto L_121df47c;
  /* 121df361 mov eax, dword ptr [0x12207158] */
  EAX = (r32((uint32_t)(0x12207158)));
  /* 121df366 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 121df369 mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121df36f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121df372 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121df377 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 121df37c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121df381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121df384 push eax */
  push32((uint32_t)(EAX));
  /* 121df385 call dword ptr [0x12208358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208358))), 0x121df38bu);
  /* 121df38b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df390 mov ecx, dword ptr [0x12207158] */
  ECX = (r32((uint32_t)(0x12207158)));
  /* 121df396 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df398 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df39d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121df3a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 121df3a2 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121df3a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121df3ab mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df3b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121df3b3 mov edx, dword ptr [0x12207158] */
  EDX = (r32((uint32_t)(0x12207158)));
  /* 121df3b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 121df3c4 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df3c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121df3cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 121df3cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 121df3d2 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df3d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121df3da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 121df3dd mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121df3e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121df3e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 121df3ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121df3ec jne 0x121df402 */
  if (!C.zf) goto L_121df402;
  /* 121df3ee mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121df3f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121df3f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 121df3f9 mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121df3ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_121df402:;
  /* 121df402 mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121df408 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df40c jne 0x121df472 */
  if (!C.zf) goto L_121df472;
  /* 121df40e cmp dword ptr [0x12207164], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12207164))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df415 jle 0x121df472 */
  if ((C.zf||C.sf!=C.of)) goto L_121df472;
  /* 121df417 mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df41c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121df41f push ecx */
  push32((uint32_t)(ECX));
  /* 121df420 push 0 */
  push32((uint32_t)(0x0u));
  /* 121df422 mov edx, dword ptr [0x1220716c] */
  EDX = (r32((uint32_t)(0x1220716c)));
  /* 121df428 push edx */
  push32((uint32_t)(EDX));
  /* 121df429 call dword ptr [0x1220835c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220835c))), 0x121df42fu);
  /* 121df42f mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121df434 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121df437 mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121df43d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df43f mov edx, dword ptr [0x12207160] */
  EDX = (r32((uint32_t)(0x12207160)));
  /* 121df445 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df448 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df44a push ecx */
  push32((uint32_t)(ECX));
  /* 121df44b mov eax, dword ptr [0x12207160] */
  EAX = (r32((uint32_t)(0x12207160)));
  /* 121df450 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df453 push eax */
  push32((uint32_t)(EAX));
  /* 121df454 mov ecx, dword ptr [0x12207160] */
  ECX = (r32((uint32_t)(0x12207160)));
  /* 121df45a push ecx */
  push32((uint32_t)(ECX));
  /* 121df45b call 0x121e1a80 */
  push32(0x121df460u); f_121e1a80();
  /* 121df460 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121df463 mov edx, dword ptr [0x12207164] */
  EDX = (r32((uint32_t)(0x12207164)));
  /* 121df469 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df46c mov dword ptr [0x12207164], edx */
  w32((uint32_t)(0x12207164), (EDX));
L_121df472:;
  /* 121df472 mov dword ptr [0x12207160], 0 */
  w32((uint32_t)(0x12207160), (0x0u));
L_121df47c:;
  /* 121df47c mov esp, ebp */
  ESP = (EBP);
  /* 121df47e pop ebp */
  EBP = (pop32());
  /* 121df47f ret  */
  ESPCHK(0x121df350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x121df480 (1565 bytes, 343 insns) */
void f_121df480(void) {
  FTRACE(0x121df480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121df480 push ebp */
  push32((uint32_t)(EBP));
  /* 121df481 mov ebp, esp */
  EBP = (ESP);
  /* 121df483 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df489 mov eax, dword ptr [0x12207164] */
  EAX = (r32((uint32_t)(0x12207164)));
  /* 121df48e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121df491 push eax */
  push32((uint32_t)(EAX));
  /* 121df492 mov ecx, dword ptr [0x12207168] */
  ECX = (r32((uint32_t)(0x12207168)));
  /* 121df498 push ecx */
  push32((uint32_t)(ECX));
  /* 121df499 call dword ptr [0x122083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083e4))), 0x121df49fu);
  /* 121df49f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121df4a1 je 0x121df4ab */
  if (C.zf) goto L_121df4ab;
  /* 121df4a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121df4a6 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df4ab:;
  /* 121df4ab mov edx, dword ptr [0x12207168] */
  EDX = (r32((uint32_t)(0x12207168)));
  /* 121df4b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 121df4b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 121df4c1 jmp 0x121df4d2 */
  goto L_121df4d2;
L_121df4c3:;
  /* 121df4c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 121df4c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df4cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_121df4d2:;
  /* 121df4d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 121df4d8 cmp ecx, dword ptr [0x12207164] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12207164))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df4de jge 0x121dfa97 */
  if ((C.sf==C.of)) goto L_121dfa97;
  /* 121df4e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121df4ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121df4ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 121df4f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 121df4f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 121df4fe push ecx */
  push32((uint32_t)(ECX));
  /* 121df4ff call dword ptr [0x122083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083e4))), 0x121df505u);
  /* 121df505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121df507 je 0x121df513 */
  if (C.zf) goto L_121df513;
  /* 121df509 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 121df50e jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df513:;
  /* 121df513 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121df519 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121df51c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 121df522 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 121df528 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df52e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121df531 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121df537 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121df53a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121df53d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 121df547 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 121df551 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121df558 jmp 0x121df563 */
  goto L_121df563;
L_121df55a:;
  /* 121df55a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121df55d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121df563:;
  /* 121df563 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df567 jge 0x121dfa5b */
  if ((C.sf==C.of)) goto L_121dfa5b;
  /* 121df56d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 121df577 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 121df581 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 121df58b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 121df595 jmp 0x121df5a6 */
  goto L_121df5a6;
L_121df597:;
  /* 121df597 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 121df59d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df5a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_121df5a6:;
  /* 121df5a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df5ad jge 0x121df5c2 */
  if ((C.sf==C.of)) goto L_121df5c2;
  /* 121df5af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 121df5b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 121df5c0 jmp 0x121df597 */
  goto L_121df597;
L_121df5c2:;
  /* 121df5c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df5c6 jl 0x121df9fd */
  if ((C.sf!=C.of)) goto L_121df9fd;
  /* 121df5cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 121df5d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 121df5d7 push ecx */
  push32((uint32_t)(ECX));
  /* 121df5d8 call dword ptr [0x122083e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083e4))), 0x121df5deu);
  /* 121df5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121df5e0 je 0x121df5ec */
  if (C.zf) goto L_121df5ec;
  /* 121df5e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 121df5e7 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df5ec:;
  /* 121df5ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 121df5f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121df5f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 121df5ff jmp 0x121df610 */
  goto L_121df610;
L_121df601:;
  /* 121df601 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 121df607 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df60a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_121df610:;
  /* 121df610 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df617 jge 0x121df794 */
  if ((C.sf==C.of)) goto L_121df794;
  /* 121df61d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121df620 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df623 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 121df629 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df62f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df635 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 121df63b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df641 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df645 jne 0x121df652 */
  if (!C.zf) goto L_121df652;
  /* 121df647 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 121df64d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df650 je 0x121df65c */
  if (C.zf) goto L_121df65c;
L_121df652:;
  /* 121df652 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 121df657 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df65c:;
  /* 121df65c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df662 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121df664 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 121df66a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 121df670 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 121df676 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 121df67c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121df67f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121df681 je 0x121df6b9 */
  if (C.zf) goto L_121df6b9;
  /* 121df683 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 121df689 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df68c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 121df692 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df69c jle 0x121df6a8 */
  if ((C.zf||C.sf!=C.of)) goto L_121df6a8;
  /* 121df69e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 121df6a3 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df6a8:;
  /* 121df6a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 121df6ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df6b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 121df6b7 jmp 0x121df6fb */
  goto L_121df6fb;
L_121df6b9:;
  /* 121df6b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 121df6bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121df6c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df6c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 121df6cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df6d2 jle 0x121df6de */
  if ((C.zf||C.sf!=C.of)) goto L_121df6de;
  /* 121df6d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_121df6de:;
  /* 121df6de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 121df6e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 121df6eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df6ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 121df6f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_121df6fb:;
  /* 121df6fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df702 jl 0x121df71d */
  if ((C.sf!=C.of)) goto L_121df71d;
  /* 121df704 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 121df70a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 121df70d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121df70f jne 0x121df71d */
  if (!C.zf) goto L_121df71d;
  /* 121df711 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df71b jle 0x121df727 */
  if ((C.zf||C.sf!=C.of)) goto L_121df727;
L_121df71d:;
  /* 121df71d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 121df722 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df727:;
  /* 121df727 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df72d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df733 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 121df736 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df73c je 0x121df748 */
  if (C.zf) goto L_121df748;
  /* 121df73e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 121df743 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df748:;
  /* 121df748 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df74e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df754 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 121df75a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df760 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df766 jb 0x121df65c */
  if (C.cf) goto L_121df65c;
  /* 121df76c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df772 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df778 je 0x121df784 */
  if (C.zf) goto L_121df784;
  /* 121df77a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 121df77f jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df784:;
  /* 121df784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121df787 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df78c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121df78f jmp 0x121df601 */
  goto L_121df601;
L_121df794:;
  /* 121df794 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121df797 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121df799 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df79f je 0x121df7ab */
  if (C.zf) goto L_121df7ab;
  /* 121df7a1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 121df7a6 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df7ab:;
  /* 121df7ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121df7ae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 121df7b4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 121df7bb jmp 0x121df7c6 */
  goto L_121df7c6;
L_121df7bd:;
  /* 121df7bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df7c0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df7c3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121df7c6:;
  /* 121df7c6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df7ca jge 0x121df9fd */
  if ((C.sf==C.of)) goto L_121df9fd;
  /* 121df7d0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 121df7da mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 121df7e0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_121df7e6:;
  /* 121df7e6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df7ec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121df7ef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 121df7f5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df7fb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df801 je 0x121df92a */
  if (C.zf) goto L_121df92a;
  /* 121df807 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df80a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 121df810 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df817 je 0x121df92a */
  if (C.zf) goto L_121df92a;
  /* 121df81d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df823 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df829 jb 0x121df83e */
  if (C.cf) goto L_121df83e;
  /* 121df82b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 121df831 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df836 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df83c jb 0x121df848 */
  if (C.cf) goto L_121df848;
L_121df83e:;
  /* 121df83e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 121df843 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df848:;
  /* 121df848 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df84e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 121df854 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 121df85a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 121df860 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df863 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121df866 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df869 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df86e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_121df874:;
  /* 121df874 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df877 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df87d je 0x121df89e */
  if (C.zf) goto L_121df89e;
  /* 121df87f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df882 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df888 jne 0x121df88c */
  if (!C.zf) goto L_121df88c;
  /* 121df88a jmp 0x121df89e */
  goto L_121df89e;
L_121df88c:;
  /* 121df88c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df88f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121df891 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 121df894 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df897 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df899 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121df89c jmp 0x121df874 */
  goto L_121df874;
L_121df89e:;
  /* 121df89e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121df8a1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df8a7 jne 0x121df8b3 */
  if (!C.zf) goto L_121df8b3;
  /* 121df8a9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 121df8ae jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df8b3:;
  /* 121df8b3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df8b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121df8bb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121df8be sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df8c1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 121df8c7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df8ce jle 0x121df8da */
  if ((C.zf||C.sf!=C.of)) goto L_121df8da;
  /* 121df8d0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_121df8da:;
  /* 121df8da mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 121df8e0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df8e3 je 0x121df8ef */
  if (C.zf) goto L_121df8ef;
  /* 121df8e5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 121df8ea jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df8ef:;
  /* 121df8ef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df8f5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121df8f8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df8fe je 0x121df90a */
  if (C.zf) goto L_121df90a;
  /* 121df900 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 121df905 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df90a:;
  /* 121df90a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 121df910 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 121df916 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 121df91c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df91f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 121df925 jmp 0x121df7e6 */
  goto L_121df7e6;
L_121df92a:;
  /* 121df92a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df931 je 0x121df9a1 */
  if (C.zf) goto L_121df9a1;
  /* 121df933 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df937 jge 0x121df96b */
  if ((C.sf==C.of)) goto L_121df96b;
  /* 121df939 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df93e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df941 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df943 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 121df949 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df94b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 121df951 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df956 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df959 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df95b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 121df961 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df963 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 121df969 jmp 0x121df9a1 */
  goto L_121df9a1;
L_121df96b:;
  /* 121df96b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df96e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df971 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df976 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df978 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 121df97e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df980 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 121df986 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df989 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121df98c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 121df991 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 121df993 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 121df999 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121df99b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_121df9a1:;
  /* 121df9a1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 121df9a7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121df9aa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df9b0 jne 0x121df9c4 */
  if (!C.zf) goto L_121df9c4;
  /* 121df9b2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121df9b5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 121df9bb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df9c2 je 0x121df9ce */
  if (C.zf) goto L_121df9ce;
L_121df9c4:;
  /* 121df9c4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 121df9c9 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df9ce:;
  /* 121df9ce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 121df9d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121df9d7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121df9dd je 0x121df9e9 */
  if (C.zf) goto L_121df9e9;
  /* 121df9df mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 121df9e4 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121df9e9:;
  /* 121df9e9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 121df9ef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121df9f2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 121df9f8 jmp 0x121df7bd */
  goto L_121df7bd;
L_121df9fd:;
  /* 121df9fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfa00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 121dfa06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 121dfa0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfa10 jne 0x121dfa2a */
  if (!C.zf) goto L_121dfa2a;
  /* 121dfa12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfa15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 121dfa1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 121dfa21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfa28 je 0x121dfa31 */
  if (C.zf) goto L_121dfa31;
L_121dfa2a:;
  /* 121dfa2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 121dfa2f jmp 0x121dfa99 */
  goto L_121dfa99;
L_121dfa31:;
  /* 121dfa31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 121dfa37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfa3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 121dfa43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121dfa46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfa4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121dfa4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfa51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 121dfa53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121dfa56 jmp 0x121df55a */
  goto L_121df55a;
L_121dfa5b:;
  /* 121dfa5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121dfa61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 121dfa67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfa69 jne 0x121dfa7c */
  if (!C.zf) goto L_121dfa7c;
  /* 121dfa6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121dfa71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 121dfa77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfa7a je 0x121dfa83 */
  if (C.zf) goto L_121dfa83;
L_121dfa7c:;
  /* 121dfa7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 121dfa81 jmp 0x121dfa99 */
  goto L_121dfa99;
L_121dfa83:;
  /* 121dfa83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 121dfa89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfa8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 121dfa92 jmp 0x121df4c3 */
  goto L_121df4c3;
L_121dfa97:;
  /* 121dfa97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121dfa99:;
  /* 121dfa99 mov esp, ebp */
  ESP = (EBP);
  /* 121dfa9b pop ebp */
  EBP = (pop32());
  /* 121dfa9c ret  */
  ESPCHK(0x121df480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faa0 @ 0x121dfaa0 (250 bytes, 92 insns) */
void f_121dfaa0(void) {
  FTRACE(0x121dfaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dfaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 121dfaa1 mov ebp, esp */
  EBP = (ESP);
  /* 121dfaa3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dfaa6 push ebx */
  push32((uint32_t)(EBX));
  /* 121dfaa7 push esi */
  push32((uint32_t)(ESI));
  /* 121dfaa8 push edi */
  push32((uint32_t)(EDI));
  /* 121dfaa9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 121dfaac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121dfaaf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 121dfab2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_121dfab5:;
  /* 121dfab5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfab9 jne 0x121dfad9 */
  if (!C.zf) goto L_121dfad9;
  /* 121dfabb push 0x122014a8 */
  push32((uint32_t)(0x122014a8u));
  /* 121dfac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dfac2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 121dfac4 push 0x1220149c */
  push32((uint32_t)(0x1220149cu));
  /* 121dfac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121dfacb call 0x121d8c50 */
  push32(0x121dfad0u); f_121d8c50();
  /* 121dfad0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfad3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfad6 jne 0x121dfad9 */
  if (!C.zf) goto L_121dfad9;
  /* 121dfad8 int3  */
  x86_unimpl("int3 @ 0x121dfad8");
L_121dfad9:;
  /* 121dfad9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121dfadb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121dfadd jne 0x121dfab5 */
  if (!C.zf) goto L_121dfab5;
L_121dfadf:;
  /* 121dfadf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfae3 jne 0x121dfb03 */
  if (!C.zf) goto L_121dfb03;
  /* 121dfae5 push 0x1220148c */
  push32((uint32_t)(0x1220148cu));
  /* 121dfaea push 0 */
  push32((uint32_t)(0x0u));
  /* 121dfaec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121dfaee push 0x1220149c */
  push32((uint32_t)(0x1220149cu));
  /* 121dfaf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121dfaf5 call 0x121d8c50 */
  push32(0x121dfafau); f_121d8c50();
  /* 121dfafa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfafd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfb00 jne 0x121dfb03 */
  if (!C.zf) goto L_121dfb03;
  /* 121dfb02 int3  */
  x86_unimpl("int3 @ 0x121dfb02");
L_121dfb03:;
  /* 121dfb03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dfb07 jne 0x121dfadf */
  if (!C.zf) goto L_121dfadf;
  /* 121dfb09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 121dfb13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfb19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121dfb1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfb22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121dfb24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 121dfb2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121dfb31 push ecx */
  push32((uint32_t)(ECX));
  /* 121dfb32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121dfb35 push edx */
  push32((uint32_t)(EDX));
  /* 121dfb36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb39 push eax */
  push32((uint32_t)(EAX));
  /* 121dfb3a call 0x121e0b20 */
  push32(0x121dfb3fu); f_121e0b20();
  /* 121dfb3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfb42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121dfb45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121dfb4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dfb4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121dfb54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfb5b jl 0x121dfb7f */
  if ((C.sf!=C.of)) goto L_121dfb7f;
  /* 121dfb5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121dfb62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121dfb65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121dfb67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121dfb6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 121dfb70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121dfb75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfb78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121dfb7d jmp 0x121dfb90 */
  goto L_121dfb90;
L_121dfb7f:;
  /* 121dfb7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfb82 push edx */
  push32((uint32_t)(EDX));
  /* 121dfb83 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dfb85 call 0x121e08a0 */
  push32(0x121dfb8au); f_121e08a0();
  /* 121dfb8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfb8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_121dfb90:;
  /* 121dfb90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfb93 pop edi */
  EDI = (pop32());
  /* 121dfb94 pop esi */
  ESI = (pop32());
  /* 121dfb95 pop ebx */
  EBX = (pop32());
  /* 121dfb96 mov esp, ebp */
  ESP = (EBP);
  /* 121dfb98 pop ebp */
  EBP = (pop32());
  /* 121dfb99 ret  */
  ESPCHK(0x121dfaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x121dfba0 (183 bytes, 58 insns) */
void f_121dfba0(void) {
  FTRACE(0x121dfba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dfba0 push ebp */
  push32((uint32_t)(EBP));
  /* 121dfba1 mov ebp, esp */
  EBP = (ESP);
  /* 121dfba3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dfba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfba9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfbac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfbb1 ja 0x121dfbca */
  if ((!C.cf&&!C.zf)) goto L_121dfbca;
  /* 121dfbb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfbb6 mov edx, dword ptr [0x12203c98] */
  EDX = (r32((uint32_t)(0x12203c98)));
  /* 121dfbbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfbbe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 121dfbc2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 121dfbc5 jmp 0x121dfc53 */
  goto L_121dfc53;
L_121dfbca:;
  /* 121dfbca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfbcd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121dfbd0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121dfbd6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121dfbdc mov edx, dword ptr [0x12203c98] */
  EDX = (r32((uint32_t)(0x12203c98)));
  /* 121dfbe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfbe4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 121dfbe8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 121dfbed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dfbef je 0x121dfc13 */
  if (C.zf) goto L_121dfc13;
  /* 121dfbf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfbf4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 121dfbf7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121dfbfd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 121dfc00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 121dfc03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 121dfc06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 121dfc0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 121dfc11 jmp 0x121dfc24 */
  goto L_121dfc24;
L_121dfc13:;
  /* 121dfc13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 121dfc16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 121dfc19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 121dfc1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_121dfc24:;
  /* 121dfc24 push 1 */
  push32((uint32_t)(0x1u));
  /* 121dfc26 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dfc28 push 0 */
  push32((uint32_t)(0x0u));
  /* 121dfc2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 121dfc2d push ecx */
  push32((uint32_t)(ECX));
  /* 121dfc2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfc31 push edx */
  push32((uint32_t)(EDX));
  /* 121dfc32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 121dfc35 push eax */
  push32((uint32_t)(EAX));
  /* 121dfc36 push 1 */
  push32((uint32_t)(0x1u));
  /* 121dfc38 call 0x121e1dc0 */
  push32(0x121dfc3du); f_121e1dc0();
  /* 121dfc3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfc40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dfc42 jne 0x121dfc48 */
  if (!C.zf) goto L_121dfc48;
  /* 121dfc44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfc46 jmp 0x121dfc53 */
  goto L_121dfc53;
L_121dfc48:;
  /* 121dfc48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfc4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121dfc50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_121dfc53:;
  /* 121dfc53 mov esp, ebp */
  ESP = (EBP);
  /* 121dfc55 pop ebp */
  EBP = (pop32());
  /* 121dfc56 ret  */
  ESPCHK(0x121dfba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x121dfc60 (836 bytes, 238 insns) */
void f_121dfc60(void) {
  FTRACE(0x121dfc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dfc60 push ebp */
  push32((uint32_t)(EBP));
  /* 121dfc61 mov ebp, esp */
  EBP = (ESP);
  /* 121dfc63 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121dfc66 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dfc68 call 0x121dd590 */
  push32(0x121dfc6du); f_121dd590();
  /* 121dfc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfc73 push eax */
  push32((uint32_t)(EAX));
  /* 121dfc74 call 0x121dffb0 */
  push32(0x121dfc79u); f_121dffb0();
  /* 121dfc79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfc7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121dfc7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfc82 cmp ecx, dword ptr [0x12206ea4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12206ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfc88 jne 0x121dfc9b */
  if (!C.zf) goto L_121dfc9b;
  /* 121dfc8a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dfc8c call 0x121dd630 */
  push32(0x121dfc91u); f_121dd630();
  /* 121dfc91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfc94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfc96 jmp 0x121dffa0 */
  goto L_121dffa0;
L_121dfc9b:;
  /* 121dfc9b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfc9f jne 0x121dfcbc */
  if (!C.zf) goto L_121dfcbc;
  /* 121dfca1 call 0x121e0090 */
  push32(0x121dfca6u); f_121e0090();
  /* 121dfca6 call 0x121e0110 */
  push32(0x121dfcabu); f_121e0110();
  /* 121dfcab push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dfcad call 0x121dd630 */
  push32(0x121dfcb2u); f_121dd630();
  /* 121dfcb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfcb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfcb7 jmp 0x121dffa0 */
  goto L_121dffa0;
L_121dfcbc:;
  /* 121dfcbc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121dfcc3 jmp 0x121dfcce */
  goto L_121dfcce;
L_121dfcc5:;
  /* 121dfcc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfcc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfccb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121dfcce:;
  /* 121dfcce cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfcd2 jae 0x121dfe1f */
  if (!C.cf) goto L_121dfe1f;
  /* 121dfcd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfcdb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121dfcde mov ecx, dword ptr [eax + 0x12203eb8] */
  ECX = (r32((uint32_t)(EAX + 0x12203eb8)));
  /* 121dfce4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfce7 jne 0x121dfe1a */
  if (!C.zf) goto L_121dfe1a;
  /* 121dfced mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121dfcf4 jmp 0x121dfcff */
  goto L_121dfcff;
L_121dfcf6:;
  /* 121dfcf6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfcf9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfcfc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_121dfcff:;
  /* 121dfcff cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfd06 jae 0x121dfd14 */
  if (!C.cf) goto L_121dfd14;
  /* 121dfd08 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfd0b mov byte ptr [eax + 0x12207040], 0 */
  w8((uint32_t)(EAX + 0x12207040), (0x0u));
  /* 121dfd12 jmp 0x121dfcf6 */
  goto L_121dfcf6;
L_121dfd14:;
  /* 121dfd14 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121dfd1b jmp 0x121dfd26 */
  goto L_121dfd26;
L_121dfd1d:;
  /* 121dfd1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfd20 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfd23 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_121dfd26:;
  /* 121dfd26 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfd2a jae 0x121dfda7 */
  if (!C.cf) goto L_121dfda7;
  /* 121dfd2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfd2f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121dfd32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfd35 lea ecx, [edx + eax*8 + 0x12203ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12203ec8));
  /* 121dfd3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121dfd3f jmp 0x121dfd4a */
  goto L_121dfd4a;
L_121dfd41:;
  /* 121dfd41 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfd44 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfd47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121dfd4a:;
  /* 121dfd4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfd4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121dfd4f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121dfd51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121dfd53 je 0x121dfda2 */
  if (C.zf) goto L_121dfda2;
  /* 121dfd55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfd58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfd5a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121dfd5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dfd5f je 0x121dfda2 */
  if (C.zf) goto L_121dfda2;
  /* 121dfd61 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfd64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121dfd66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121dfd68 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121dfd6b jmp 0x121dfd76 */
  goto L_121dfd76;
L_121dfd6d:;
  /* 121dfd6d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfd70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfd73 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121dfd76:;
  /* 121dfd76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121dfd79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121dfd7b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121dfd7e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfd81 ja 0x121dfda0 */
  if ((!C.cf&&!C.zf)) goto L_121dfda0;
  /* 121dfd83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfd86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfd89 mov dl, byte ptr [eax + 0x12207041] */
  DL = (r8((uint32_t)(EAX + 0x12207041)));
  /* 121dfd8f or dl, byte ptr [ecx + 0x12203eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12203eb0))); DL = (_r); fl_logic(_r,8); }
  /* 121dfd95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfd98 mov byte ptr [eax + 0x12207041], dl */
  w8((uint32_t)(EAX + 0x12207041), (DL));
  /* 121dfd9e jmp 0x121dfd6d */
  goto L_121dfd6d;
L_121dfda0:;
  /* 121dfda0 jmp 0x121dfd41 */
  goto L_121dfd41;
L_121dfda2:;
  /* 121dfda2 jmp 0x121dfd1d */
  goto L_121dfd1d;
L_121dfda7:;
  /* 121dfda7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfdaa mov dword ptr [0x12206ea4], ecx */
  w32((uint32_t)(0x12206ea4), (ECX));
  /* 121dfdb0 mov dword ptr [0x12206f2c], 1 */
  w32((uint32_t)(0x12206f2c), (0x1u));
  /* 121dfdba mov edx, dword ptr [0x12206ea4] */
  EDX = (r32((uint32_t)(0x12206ea4)));
  /* 121dfdc0 push edx */
  push32((uint32_t)(EDX));
  /* 121dfdc1 call 0x121e0010 */
  push32(0x121dfdc6u); f_121e0010();
  /* 121dfdc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfdc9 mov dword ptr [0x12207144], eax */
  w32((uint32_t)(0x12207144), (EAX));
  /* 121dfdce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121dfdd5 jmp 0x121dfde0 */
  goto L_121dfde0;
L_121dfdd7:;
  /* 121dfdd7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfdda add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfddd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121dfde0:;
  /* 121dfde0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfde4 jae 0x121dfe04 */
  if (!C.cf) goto L_121dfe04;
  /* 121dfde6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121dfde9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121dfdec mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfdef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dfdf2 mov cx, word ptr [ecx + eax*2 + 0x12203ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12203ebc)));
  /* 121dfdfa mov word ptr [edx*2 + 0x12206f20], cx */
  w16((uint32_t)(EDX*2 + 0x12206f20), (CX));
  /* 121dfe02 jmp 0x121dfdd7 */
  goto L_121dfdd7;
L_121dfe04:;
  /* 121dfe04 call 0x121e0110 */
  push32(0x121dfe09u); f_121e0110();
  /* 121dfe09 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dfe0b call 0x121dd630 */
  push32(0x121dfe10u); f_121dd630();
  /* 121dfe10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfe13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfe15 jmp 0x121dffa0 */
  goto L_121dffa0;
L_121dfe1a:;
  /* 121dfe1a jmp 0x121dfcc5 */
  goto L_121dfcc5;
L_121dfe1f:;
  /* 121dfe1f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 121dfe22 push edx */
  push32((uint32_t)(EDX));
  /* 121dfe23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfe26 push eax */
  push32((uint32_t)(EAX));
  /* 121dfe27 call dword ptr [0x12208330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208330))), 0x121dfe2du);
  /* 121dfe2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfe30 jne 0x121dff72 */
  if (!C.zf) goto L_121dff72;
  /* 121dfe36 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121dfe3d jmp 0x121dfe48 */
  goto L_121dfe48;
L_121dfe3f:;
  /* 121dfe3f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfe42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfe45 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_121dfe48:;
  /* 121dfe48 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfe4f jae 0x121dfe5d */
  if (!C.cf) goto L_121dfe5d;
  /* 121dfe51 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfe54 mov byte ptr [edx + 0x12207040], 0 */
  w8((uint32_t)(EDX + 0x12207040), (0x0u));
  /* 121dfe5b jmp 0x121dfe3f */
  goto L_121dfe3f;
L_121dfe5d:;
  /* 121dfe5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121dfe60 mov dword ptr [0x12206ea4], eax */
  w32((uint32_t)(0x12206ea4), (EAX));
  /* 121dfe65 mov dword ptr [0x12207144], 0 */
  w32((uint32_t)(0x12207144), (0x0u));
  /* 121dfe6f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfe73 jbe 0x121dff2e */
  if ((C.cf||C.zf)) goto L_121dff2e;
  /* 121dfe79 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 121dfe7c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 121dfe7f jmp 0x121dfe8a */
  goto L_121dfe8a;
L_121dfe81:;
  /* 121dfe81 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfe84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfe87 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_121dfe8a:;
  /* 121dfe8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfe8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121dfe8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121dfe91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121dfe93 je 0x121dfedc */
  if (C.zf) goto L_121dfedc;
  /* 121dfe95 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfe98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dfe9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121dfe9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121dfe9f je 0x121dfedc */
  if (C.zf) goto L_121dfedc;
  /* 121dfea1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfea4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121dfea6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121dfea8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121dfeab jmp 0x121dfeb6 */
  goto L_121dfeb6;
L_121dfead:;
  /* 121dfead mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfeb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfeb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121dfeb6:;
  /* 121dfeb6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121dfeb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121dfebb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121dfebe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfec1 ja 0x121dfeda */
  if ((!C.cf&&!C.zf)) goto L_121dfeda;
  /* 121dfec3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfec6 mov cl, byte ptr [eax + 0x12207041] */
  CL = (r8((uint32_t)(EAX + 0x12207041)));
  /* 121dfecc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 121dfecf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfed2 mov byte ptr [edx + 0x12207041], cl */
  w8((uint32_t)(EDX + 0x12207041), (CL));
  /* 121dfed8 jmp 0x121dfead */
  goto L_121dfead;
L_121dfeda:;
  /* 121dfeda jmp 0x121dfe81 */
  goto L_121dfe81;
L_121dfedc:;
  /* 121dfedc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 121dfee3 jmp 0x121dfeee */
  goto L_121dfeee;
L_121dfee5:;
  /* 121dfee5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfee8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dfeeb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121dfeee:;
  /* 121dfeee cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfef5 jae 0x121dff0e */
  if (!C.cf) goto L_121dff0e;
  /* 121dfef7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dfefa mov dl, byte ptr [ecx + 0x12207041] */
  DL = (r8((uint32_t)(ECX + 0x12207041)));
  /* 121dff00 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 121dff03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121dff06 mov byte ptr [eax + 0x12207041], dl */
  w8((uint32_t)(EAX + 0x12207041), (DL));
  /* 121dff0c jmp 0x121dfee5 */
  goto L_121dfee5;
L_121dff0e:;
  /* 121dff0e mov ecx, dword ptr [0x12206ea4] */
  ECX = (r32((uint32_t)(0x12206ea4)));
  /* 121dff14 push ecx */
  push32((uint32_t)(ECX));
  /* 121dff15 call 0x121e0010 */
  push32(0x121dff1au); f_121e0010();
  /* 121dff1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dff1d mov dword ptr [0x12207144], eax */
  w32((uint32_t)(0x12207144), (EAX));
  /* 121dff22 mov dword ptr [0x12206f2c], 1 */
  w32((uint32_t)(0x12206f2c), (0x1u));
  /* 121dff2c jmp 0x121dff38 */
  goto L_121dff38;
L_121dff2e:;
  /* 121dff2e mov dword ptr [0x12206f2c], 0 */
  w32((uint32_t)(0x12206f2c), (0x0u));
L_121dff38:;
  /* 121dff38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121dff3f jmp 0x121dff4a */
  goto L_121dff4a;
L_121dff41:;
  /* 121dff41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dff44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121dff47 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121dff4a:;
  /* 121dff4a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dff4e jae 0x121dff5f */
  if (!C.cf) goto L_121dff5f;
  /* 121dff50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121dff53 mov word ptr [eax*2 + 0x12206f20], 0 */
  w16((uint32_t)(EAX*2 + 0x12206f20), (0x0u));
  /* 121dff5d jmp 0x121dff41 */
  goto L_121dff41;
L_121dff5f:;
  /* 121dff5f call 0x121e0110 */
  push32(0x121dff64u); f_121e0110();
  /* 121dff64 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dff66 call 0x121dd630 */
  push32(0x121dff6bu); f_121dd630();
  /* 121dff6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dff6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dff70 jmp 0x121dffa0 */
  goto L_121dffa0;
L_121dff72:;
  /* 121dff72 cmp dword ptr [0x122059a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dff79 je 0x121dff93 */
  if (C.zf) goto L_121dff93;
  /* 121dff7b call 0x121e0090 */
  push32(0x121dff80u); f_121e0090();
  /* 121dff80 call 0x121e0110 */
  push32(0x121dff85u); f_121e0110();
  /* 121dff85 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dff87 call 0x121dd630 */
  push32(0x121dff8cu); f_121dd630();
  /* 121dff8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dff8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121dff91 jmp 0x121dffa0 */
  goto L_121dffa0;
L_121dff93:;
  /* 121dff93 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121dff95 call 0x121dd630 */
  push32(0x121dff9au); f_121dd630();
  /* 121dff9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121dff9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121dffa0:;
  /* 121dffa0 mov esp, ebp */
  ESP = (EBP);
  /* 121dffa2 pop ebp */
  EBP = (pop32());
  /* 121dffa3 ret  */
  ESPCHK(0x121dfc60u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x121dffb0 (89 bytes, 21 insns) */
void f_121dffb0(void) {
  FTRACE(0x121dffb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121dffb0 push ebp */
  push32((uint32_t)(EBP));
  /* 121dffb1 mov ebp, esp */
  EBP = (ESP);
  /* 121dffb3 mov dword ptr [0x122059a8], 0 */
  w32((uint32_t)(0x122059a8), (0x0u));
  /* 121dffbd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dffc1 jne 0x121dffd5 */
  if (!C.zf) goto L_121dffd5;
  /* 121dffc3 mov dword ptr [0x122059a8], 1 */
  w32((uint32_t)(0x122059a8), (0x1u));
  /* 121dffcd call dword ptr [0x12208328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208328))), 0x121dffd3u);
  /* 121dffd3 jmp 0x121e0007 */
  goto L_121e0007;
L_121dffd5:;
  /* 121dffd5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dffd9 jne 0x121dffed */
  if (!C.zf) goto L_121dffed;
  /* 121dffdb mov dword ptr [0x122059a8], 1 */
  w32((uint32_t)(0x122059a8), (0x1u));
  /* 121dffe5 call dword ptr [0x1220832c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220832c))), 0x121dffebu);
  /* 121dffeb jmp 0x121e0007 */
  goto L_121e0007;
L_121dffed:;
  /* 121dffed cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121dfff1 jne 0x121e0004 */
  if (!C.zf) goto L_121e0004;
  /* 121dfff3 mov dword ptr [0x122059a8], 1 */
  w32((uint32_t)(0x122059a8), (0x1u));
  /* 121dfffd mov eax, dword ptr [0x122059c8] */
  EAX = (r32((uint32_t)(0x122059c8)));
  /* 121e0002 jmp 0x121e0007 */
  goto L_121e0007;
L_121e0004:;
  /* 121e0004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_121e0007:;
  /* 121e0007 pop ebp */
  EBP = (pop32());
  /* 121e0008 ret  */
  ESPCHK(0x121dffb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x121e0010 (80 bytes, 26 insns) [1 switch table(s)] */
void f_121e0010(void) {
  FTRACE(0x121e0010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0010 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0011 mov ebp, esp */
  EBP = (ESP);
  /* 121e0013 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0017 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e001a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e001d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0023 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e0026 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e002a ja 0x121e005a */
  if ((!C.cf&&!C.zf)) goto L_121e005a;
  /* 121e002c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e002f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e0031 mov dl, byte ptr [eax + 0x121e0074] */
  DL = (r8((uint32_t)(EAX + 0x121e0074)));
  /* 121e0037 jmp dword ptr [edx*4 + 0x121e0060] */
  switch (EDX) {
    case 0: goto L_121e003e;
    case 1: goto L_121e0045;
    case 2: goto L_121e004c;
    case 3: goto L_121e0053;
    case 4: goto L_121e005a;
    default: x86_unimpl("switch@0x121e0037 out of table"); return;
  }
L_121e003e:;
  /* 121e003e mov eax, 0x411 */
  EAX = (0x411u);
  /* 121e0043 jmp 0x121e005c */
  goto L_121e005c;
L_121e0045:;
  /* 121e0045 mov eax, 0x804 */
  EAX = (0x804u);
  /* 121e004a jmp 0x121e005c */
  goto L_121e005c;
L_121e004c:;
  /* 121e004c mov eax, 0x412 */
  EAX = (0x412u);
  /* 121e0051 jmp 0x121e005c */
  goto L_121e005c;
L_121e0053:;
  /* 121e0053 mov eax, 0x404 */
  EAX = (0x404u);
  /* 121e0058 jmp 0x121e005c */
  goto L_121e005c;
L_121e005a:;
  /* 121e005a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e005c:;
  /* 121e005c mov esp, ebp */
  ESP = (EBP);
  /* 121e005e pop ebp */
  EBP = (pop32());
  /* 121e005f ret  */
  ESPCHK(0x121e0010u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x121e0090 (116 bytes, 29 insns) */
void f_121e0090(void) {
  FTRACE(0x121e0090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0090 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0091 mov ebp, esp */
  EBP = (ESP);
  /* 121e0093 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e009b jmp 0x121e00a6 */
  goto L_121e00a6;
L_121e009d:;
  /* 121e009d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e00a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e00a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e00a6:;
  /* 121e00a6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e00ad jge 0x121e00bb */
  if ((C.sf==C.of)) goto L_121e00bb;
  /* 121e00af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e00b2 mov byte ptr [ecx + 0x12207040], 0 */
  w8((uint32_t)(ECX + 0x12207040), (0x0u));
  /* 121e00b9 jmp 0x121e009d */
  goto L_121e009d;
L_121e00bb:;
  /* 121e00bb mov dword ptr [0x12206ea4], 0 */
  w32((uint32_t)(0x12206ea4), (0x0u));
  /* 121e00c5 mov dword ptr [0x12206f2c], 0 */
  w32((uint32_t)(0x12206f2c), (0x0u));
  /* 121e00cf mov dword ptr [0x12207144], 0 */
  w32((uint32_t)(0x12207144), (0x0u));
  /* 121e00d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e00e0 jmp 0x121e00eb */
  goto L_121e00eb;
L_121e00e2:;
  /* 121e00e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e00e5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e00e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e00eb:;
  /* 121e00eb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e00ef jge 0x121e0100 */
  if ((C.sf==C.of)) goto L_121e0100;
  /* 121e00f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e00f4 mov word ptr [eax*2 + 0x12206f20], 0 */
  w16((uint32_t)(EAX*2 + 0x12206f20), (0x0u));
  /* 121e00fe jmp 0x121e00e2 */
  goto L_121e00e2;
L_121e0100:;
  /* 121e0100 mov esp, ebp */
  ESP = (EBP);
  /* 121e0102 pop ebp */
  EBP = (pop32());
  /* 121e0103 ret  */
  ESPCHK(0x121e0090u, _esp0);
  ESP += 4; return;
}

/* FUN_10010110 @ 0x121e0110 (770 bytes, 175 insns) */
void f_121e0110(void) {
  FTRACE(0x121e0110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0110 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0111 mov ebp, esp */
  EBP = (ESP);
  /* 121e0113 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0119 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 121e011f push eax */
  push32((uint32_t)(EAX));
  /* 121e0120 mov ecx, dword ptr [0x12206ea4] */
  ECX = (r32((uint32_t)(0x12206ea4)));
  /* 121e0126 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0127 call dword ptr [0x12208330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208330))), 0x121e012du);
  /* 121e012d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0130 jne 0x121e0349 */
  if (!C.zf) goto L_121e0349;
  /* 121e0136 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 121e0140 jmp 0x121e0151 */
  goto L_121e0151;
L_121e0142:;
  /* 121e0142 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0148 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e014b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_121e0151:;
  /* 121e0151 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e015b jae 0x121e0172 */
  if (!C.cf) goto L_121e0172;
  /* 121e015d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0163 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 121e0169 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 121e0170 jmp 0x121e0142 */
  goto L_121e0142;
L_121e0172:;
  /* 121e0172 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 121e0179 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 121e017f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e0182 jmp 0x121e018d */
  goto L_121e018d;
L_121e0184:;
  /* 121e0184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0187 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e018a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e018d:;
  /* 121e018d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0190 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e0192 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e0194 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e0196 je 0x121e01d8 */
  if (C.zf) goto L_121e01d8;
  /* 121e0198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e019b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e019d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e019f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 121e01a5 jmp 0x121e01b6 */
  goto L_121e01b6;
L_121e01a7:;
  /* 121e01a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e01ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e01b0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_121e01b6:;
  /* 121e01b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e01b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e01bb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121e01be cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e01c4 ja 0x121e01d6 */
  if ((!C.cf&&!C.zf)) goto L_121e01d6;
  /* 121e01c6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e01cc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 121e01d4 jmp 0x121e01a7 */
  goto L_121e01a7;
L_121e01d6:;
  /* 121e01d6 jmp 0x121e0184 */
  goto L_121e0184;
L_121e01d8:;
  /* 121e01d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e01da mov eax, dword ptr [0x12207144] */
  EAX = (r32((uint32_t)(0x12207144)));
  /* 121e01df push eax */
  push32((uint32_t)(EAX));
  /* 121e01e0 mov ecx, dword ptr [0x12206ea4] */
  ECX = (r32((uint32_t)(0x12206ea4)));
  /* 121e01e6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e01e7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 121e01ed push edx */
  push32((uint32_t)(EDX));
  /* 121e01ee push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e01f3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 121e01f9 push eax */
  push32((uint32_t)(EAX));
  /* 121e01fa push 1 */
  push32((uint32_t)(0x1u));
  /* 121e01fc call 0x121e1dc0 */
  push32(0x121e0201u); f_121e1dc0();
  /* 121e0201 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0204 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e0206 mov ecx, dword ptr [0x12206ea4] */
  ECX = (r32((uint32_t)(0x12206ea4)));
  /* 121e020c push ecx */
  push32((uint32_t)(ECX));
  /* 121e020d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e0212 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 121e0218 push edx */
  push32((uint32_t)(EDX));
  /* 121e0219 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e021e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 121e0224 push eax */
  push32((uint32_t)(EAX));
  /* 121e0225 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e022a mov ecx, dword ptr [0x12207144] */
  ECX = (r32((uint32_t)(0x12207144)));
  /* 121e0230 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0231 call 0x121e1f80 */
  push32(0x121e0236u); f_121e1f80();
  /* 121e0236 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0239 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e023b mov edx, dword ptr [0x12206ea4] */
  EDX = (r32((uint32_t)(0x12206ea4)));
  /* 121e0241 push edx */
  push32((uint32_t)(EDX));
  /* 121e0242 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e0247 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 121e024d push eax */
  push32((uint32_t)(EAX));
  /* 121e024e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e0253 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 121e0259 push ecx */
  push32((uint32_t)(ECX));
  /* 121e025a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 121e025f mov edx, dword ptr [0x12207144] */
  EDX = (r32((uint32_t)(0x12207144)));
  /* 121e0265 push edx */
  push32((uint32_t)(EDX));
  /* 121e0266 call 0x121e1f80 */
  push32(0x121e026bu); f_121e1f80();
  /* 121e026b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e026e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 121e0278 jmp 0x121e0289 */
  goto L_121e0289;
L_121e027a:;
  /* 121e027a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0283 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_121e0289:;
  /* 121e0289 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0293 jae 0x121e0344 */
  if (!C.cf) goto L_121e0344;
  /* 121e0299 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e029f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e02a1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 121e02a9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121e02ac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e02ae je 0x121e02e6 */
  if (C.zf) goto L_121e02e6;
  /* 121e02b0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e02b6 mov cl, byte ptr [eax + 0x12207041] */
  CL = (r8((uint32_t)(EAX + 0x12207041)));
  /* 121e02bc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 121e02bf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e02c5 mov byte ptr [edx + 0x12207041], cl */
  w8((uint32_t)(EDX + 0x12207041), (CL));
  /* 121e02cb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e02d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e02d7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 121e02de mov byte ptr [eax + 0x12206f40], dl */
  w8((uint32_t)(EAX + 0x12206f40), (DL));
  /* 121e02e4 jmp 0x121e033f */
  goto L_121e033f;
L_121e02e6:;
  /* 121e02e6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e02ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e02ee mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 121e02f6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 121e02f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e02fb je 0x121e0332 */
  if (C.zf) goto L_121e0332;
  /* 121e02fd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0303 mov al, byte ptr [edx + 0x12207041] */
  AL = (r8((uint32_t)(EDX + 0x12207041)));
  /* 121e0309 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 121e030b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0311 mov byte ptr [ecx + 0x12207041], al */
  w8((uint32_t)(ECX + 0x12207041), (AL));
  /* 121e0317 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e031d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0323 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 121e032a mov byte ptr [edx + 0x12206f40], cl */
  w8((uint32_t)(EDX + 0x12206f40), (CL));
  /* 121e0330 jmp 0x121e033f */
  goto L_121e033f;
L_121e0332:;
  /* 121e0332 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0338 mov byte ptr [edx + 0x12206f40], 0 */
  w8((uint32_t)(EDX + 0x12206f40), (0x0u));
L_121e033f:;
  /* 121e033f jmp 0x121e027a */
  goto L_121e027a;
L_121e0344:;
  /* 121e0344 jmp 0x121e040e */
  goto L_121e040e;
L_121e0349:;
  /* 121e0349 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 121e0353 jmp 0x121e0364 */
  goto L_121e0364;
L_121e0355:;
  /* 121e0355 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e035b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e035e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_121e0364:;
  /* 121e0364 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e036e jae 0x121e040e */
  if (!C.cf) goto L_121e040e;
  /* 121e0374 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e037b jb 0x121e03b8 */
  if (C.cf) goto L_121e03b8;
  /* 121e037d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0384 ja 0x121e03b8 */
  if ((!C.cf&&!C.zf)) goto L_121e03b8;
  /* 121e0386 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e038c mov dl, byte ptr [ecx + 0x12207041] */
  DL = (r8((uint32_t)(ECX + 0x12207041)));
  /* 121e0392 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 121e0395 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e039b mov byte ptr [eax + 0x12207041], dl */
  w8((uint32_t)(EAX + 0x12207041), (DL));
  /* 121e03a1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03a7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e03aa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03b0 mov byte ptr [edx + 0x12206f40], cl */
  w8((uint32_t)(EDX + 0x12206f40), (CL));
  /* 121e03b6 jmp 0x121e0409 */
  goto L_121e0409;
L_121e03b8:;
  /* 121e03b8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e03bf jb 0x121e03fc */
  if (C.cf) goto L_121e03fc;
  /* 121e03c1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e03c8 ja 0x121e03fc */
  if ((!C.cf&&!C.zf)) goto L_121e03fc;
  /* 121e03ca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03d0 mov cl, byte ptr [eax + 0x12207041] */
  CL = (r8((uint32_t)(EAX + 0x12207041)));
  /* 121e03d6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121e03d9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03df mov byte ptr [edx + 0x12207041], cl */
  w8((uint32_t)(EDX + 0x12207041), (CL));
  /* 121e03e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03eb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e03ee mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e03f4 mov byte ptr [ecx + 0x12206f40], al */
  w8((uint32_t)(ECX + 0x12206f40), (AL));
  /* 121e03fa jmp 0x121e0409 */
  goto L_121e0409;
L_121e03fc:;
  /* 121e03fc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 121e0402 mov byte ptr [edx + 0x12206f40], 0 */
  w8((uint32_t)(EDX + 0x12206f40), (0x0u));
L_121e0409:;
  /* 121e0409 jmp 0x121e0355 */
  goto L_121e0355;
L_121e040e:;
  /* 121e040e mov esp, ebp */
  ESP = (EBP);
  /* 121e0410 pop ebp */
  EBP = (pop32());
  /* 121e0411 ret  */
  ESPCHK(0x121e0110u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x121e0420 (23 bytes, 9 insns) */
void f_121e0420(void) {
  FTRACE(0x121e0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0420 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0421 mov ebp, esp */
  EBP = (ESP);
  /* 121e0423 cmp dword ptr [0x12206f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12206f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e042a je 0x121e0433 */
  if (C.zf) goto L_121e0433;
  /* 121e042c mov eax, dword ptr [0x12206ea4] */
  EAX = (r32((uint32_t)(0x12206ea4)));
  /* 121e0431 jmp 0x121e0435 */
  goto L_121e0435;
L_121e0433:;
  /* 121e0433 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e0435:;
  /* 121e0435 pop ebp */
  EBP = (pop32());
  /* 121e0436 ret  */
  ESPCHK(0x121e0420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x121e0440 (34 bytes, 10 insns) */
void f_121e0440(void) {
  FTRACE(0x121e0440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0440 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0441 mov ebp, esp */
  EBP = (ESP);
  /* 121e0443 cmp dword ptr [0x122072f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122072f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e044a jne 0x121e0460 */
  if (!C.zf) goto L_121e0460;
  /* 121e044c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 121e044e call 0x121dfc60 */
  push32(0x121e0453u); f_121dfc60();
  /* 121e0453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0456 mov dword ptr [0x122072f0], 1 */
  w32((uint32_t)(0x122072f0), (0x1u));
L_121e0460:;
  /* 121e0460 pop ebp */
  EBP = (pop32());
  /* 121e0461 ret  */
  ESPCHK(0x121e0440u, _esp0);
  ESP += 4; return;
}

/* FUN_10010470 @ 0x121e0470 (664 bytes, 265 insns) [15 switch table(s)] */
void f_121e0470(void) {
  FTRACE(0x121e0470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0470 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0471 mov ebp, esp */
  EBP = (ESP);
  /* 121e0473 push edi */
  push32((uint32_t)(EDI));
  /* 121e0474 push esi */
  push32((uint32_t)(ESI));
  /* 121e0475 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0478 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e047b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e047e mov eax, ecx */
  EAX = (ECX);
  /* 121e0480 mov edx, ecx */
  EDX = (ECX);
  /* 121e0482 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0484 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0486 jbe 0x121e0490 */
  if ((C.cf||C.zf)) goto L_121e0490;
  /* 121e0488 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e048a jb 0x121e0608 */
  if (C.cf) goto L_121e0608;
L_121e0490:;
  /* 121e0490 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 121e0496 jne 0x121e04ac */
  if (!C.zf) goto L_121e04ac;
  /* 121e0498 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e049b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e049e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e04a1 jb 0x121e04cc */
  if (C.cf) goto L_121e04cc;
  /* 121e04a3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e04a5 jmp dword ptr [edx*4 + 0x121e05b8] */
  switch (EDX) {
    case 0: goto L_121e05c8;
    case 1: goto L_121e05d0;
    case 2: goto L_121e05dc;
    case 3: goto L_121e05f0;
    default: x86_unimpl("switch@0x121e04a5 out of table"); return;
  }
L_121e04ac:;
  /* 121e04ac mov eax, edi */
  EAX = (EDI);
  /* 121e04ae mov edx, 3 */
  EDX = (0x3u);
  /* 121e04b3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e04b6 jb 0x121e04c4 */
  if (C.cf) goto L_121e04c4;
  /* 121e04b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121e04bb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e04bd jmp dword ptr [eax*4 + 0x121e04d0] */
  switch (EAX) {
    case 1: goto L_121e04e0;
    case 2: goto L_121e050c;
    case 3: goto L_121e0530;
    default: x86_unimpl("switch@0x121e04bd out of table"); return;
  }
L_121e04c4:;
  /* 121e04c4 jmp dword ptr [ecx*4 + 0x121e05c8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x121e05c8)))); return;
  /* 121e04cb nop  */
  /* nop */
L_121e04cc:;
  /* 121e04cc jmp dword ptr [ecx*4 + 0x121e054c] */
  switch (ECX) {
    case 0: goto L_121e05af;
    case 1: goto L_121e059c;
    case 2: goto L_121e0594;
    case 3: goto L_121e058c;
    case 4: goto L_121e0584;
    case 5: goto L_121e057c;
    case 6: goto L_121e0574;
    case 7: goto L_121e056c;
    default: x86_unimpl("switch@0x121e04cc out of table"); return;
  }
  /* 121e04d3 nop  */
  /* nop */
L_121e04e0:;
  /* 121e04e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e04e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e04e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e04e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e04e9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e04ec mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e04ef shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e04f2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e04f5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e04f8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e04fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e04fe jb 0x121e04cc */
  if (C.cf) goto L_121e04cc;
  /* 121e0500 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e0502 jmp dword ptr [edx*4 + 0x121e05b8] */
  switch (EDX) {
    case 0: goto L_121e05c8;
    case 1: goto L_121e05d0;
    case 2: goto L_121e05dc;
    case 3: goto L_121e05f0;
    default: x86_unimpl("switch@0x121e0502 out of table"); return;
  }
  /* 121e0509 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e050c:;
  /* 121e050c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e050e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e0510 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e0512 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e0515 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e0518 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e051b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e051e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0521 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0524 jb 0x121e04cc */
  if (C.cf) goto L_121e04cc;
  /* 121e0526 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e0528 jmp dword ptr [edx*4 + 0x121e05b8] */
  switch (EDX) {
    case 0: goto L_121e05c8;
    case 1: goto L_121e05d0;
    case 2: goto L_121e05dc;
    case 3: goto L_121e05f0;
    default: x86_unimpl("switch@0x121e0528 out of table"); return;
  }
  /* 121e052f nop  */
  /* nop */
L_121e0530:;
  /* 121e0530 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e0532 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e0534 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e0536 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e0537 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e053a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e053b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e053e jb 0x121e04cc */
  if (C.cf) goto L_121e04cc;
  /* 121e0540 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e0542 jmp dword ptr [edx*4 + 0x121e05b8] */
  switch (EDX) {
    case 0: goto L_121e05c8;
    case 1: goto L_121e05d0;
    case 2: goto L_121e05dc;
    case 3: goto L_121e05f0;
    default: x86_unimpl("switch@0x121e0542 out of table"); return;
  }
  /* 121e0549 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e056c:;
  /* 121e056c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 121e0570 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_121e0574:;
  /* 121e0574 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 121e0578 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_121e057c:;
  /* 121e057c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 121e0580 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_121e0584:;
  /* 121e0584 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 121e0588 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_121e058c:;
  /* 121e058c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 121e0590 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_121e0594:;
  /* 121e0594 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 121e0598 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_121e059c:;
  /* 121e059c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 121e05a0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 121e05a4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 121e05ab add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e05ad add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_121e05af:;
  /* 121e05af jmp dword ptr [edx*4 + 0x121e05b8] */
  switch (EDX) {
    case 0: goto L_121e05c8;
    case 1: goto L_121e05d0;
    case 2: goto L_121e05dc;
    case 3: goto L_121e05f0;
    default: x86_unimpl("switch@0x121e05af out of table"); return;
  }
  /* 121e05b6 mov edi, edi */
  EDI = (EDI);
L_121e05c8:;
  /* 121e05c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e05cb pop esi */
  ESI = (pop32());
  /* 121e05cc pop edi */
  EDI = (pop32());
  /* 121e05cd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e05ce ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e05cf nop  */
  /* nop */
L_121e05d0:;
  /* 121e05d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e05d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e05d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e05d7 pop esi */
  ESI = (pop32());
  /* 121e05d8 pop edi */
  EDI = (pop32());
  /* 121e05d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e05da ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e05db nop  */
  /* nop */
L_121e05dc:;
  /* 121e05dc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e05de mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e05e0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e05e3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e05e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e05e9 pop esi */
  ESI = (pop32());
  /* 121e05ea pop edi */
  EDI = (pop32());
  /* 121e05eb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e05ec ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e05ed lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e05f0:;
  /* 121e05f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e05f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e05f4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e05f7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e05fa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e05fd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e0600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0603 pop esi */
  ESI = (pop32());
  /* 121e0604 pop edi */
  EDI = (pop32());
  /* 121e0605 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e0606 ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e0607 nop  */
  /* nop */
L_121e0608:;
  /* 121e0608 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 121e060c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 121e0610 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 121e0616 jne 0x121e063c */
  if (!C.zf) goto L_121e063c;
  /* 121e0618 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e061b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e061e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0621 jb 0x121e0630 */
  if (C.cf) goto L_121e0630;
  /* 121e0623 std  */
  C.df=1;
  /* 121e0624 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e0626 cld  */
  C.df=0;
  /* 121e0627 jmp dword ptr [edx*4 + 0x121e0750] */
  switch (EDX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e0627 out of table"); return;
  }
  /* 121e062e mov edi, edi */
  EDI = (EDI);
L_121e0630:;
  /* 121e0630 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e0632 jmp dword ptr [ecx*4 + 0x121e0700] */
  switch (ECX) {
    case 0: goto L_121e0747;
    default: x86_unimpl("switch@0x121e0632 out of table"); return;
  }
  /* 121e0639 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e063c:;
  /* 121e063c mov eax, edi */
  EAX = (EDI);
  /* 121e063e mov edx, 3 */
  EDX = (0x3u);
  /* 121e0643 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0646 jb 0x121e0654 */
  if (C.cf) goto L_121e0654;
  /* 121e0648 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121e064b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e064d jmp dword ptr [eax*4 + 0x121e0658] */
  switch (EAX) {
    case 1: goto L_121e0668;
    case 2: goto L_121e0688;
    case 3: goto L_121e06b0;
    default: x86_unimpl("switch@0x121e064d out of table"); return;
  }
L_121e0654:;
  /* 121e0654 jmp dword ptr [ecx*4 + 0x121e0750] */
  switch (ECX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e0654 out of table"); return;
  }
  /* 121e065b nop  */
  /* nop */
L_121e0668:;
  /* 121e0668 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e066b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e066d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e0670 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 121e0671 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e0674 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 121e0675 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0678 jb 0x121e0630 */
  if (C.cf) goto L_121e0630;
  /* 121e067a std  */
  C.df=1;
  /* 121e067b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e067d cld  */
  C.df=0;
  /* 121e067e jmp dword ptr [edx*4 + 0x121e0750] */
  switch (EDX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e067e out of table"); return;
  }
  /* 121e0685 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e0688:;
  /* 121e0688 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e068b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e068d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e0690 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e0693 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e0696 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e0699 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e069c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e069f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e06a2 jb 0x121e0630 */
  if (C.cf) goto L_121e0630;
  /* 121e06a4 std  */
  C.df=1;
  /* 121e06a5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e06a7 cld  */
  C.df=0;
  /* 121e06a8 jmp dword ptr [edx*4 + 0x121e0750] */
  switch (EDX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e06a8 out of table"); return;
  }
  /* 121e06af nop  */
  /* nop */
L_121e06b0:;
  /* 121e06b0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e06b3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e06b5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e06b8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e06bb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e06be mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e06c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e06c4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e06c7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e06ca sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e06cd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e06d0 jb 0x121e0630 */
  if (C.cf) goto L_121e0630;
  /* 121e06d6 std  */
  C.df=1;
  /* 121e06d7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e06d9 cld  */
  C.df=0;
  /* 121e06da jmp dword ptr [edx*4 + 0x121e0750] */
  switch (EDX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e06da out of table"); return;
  }
  /* 121e06e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 121e06e4 add al, 7 */
  { uint32_t _a=(AL),_b=(0x7u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06e6 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06e7 adc cl, byte ptr [edi + eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06ea push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06eb adc dl, byte ptr [edi + eax] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06ee push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06ef adc bl, byte ptr [edi + eax] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06f2 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06f3 adc ah, byte ptr [edi + eax] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06f6 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06f7 adc ch, byte ptr [edi + eax] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06fa push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e06fb adc dh, byte ptr [edi + eax] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDI + EAX*1))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 121e06fe push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e0704 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 121e0708 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 121e070c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 121e0710 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 121e0714 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 121e0718 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 121e071c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 121e0720 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 121e0724 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 121e0728 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 121e072c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 121e0730 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 121e0734 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 121e0738 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 121e073c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 121e0743 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0745 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_121e0747:;
  /* 121e0747 jmp dword ptr [edx*4 + 0x121e0750] */
  switch (EDX) {
    case 0: goto L_121e0760;
    case 1: goto L_121e0768;
    case 2: goto L_121e0778;
    case 3: goto L_121e078c;
    default: x86_unimpl("switch@0x121e0747 out of table"); return;
  }
  /* 121e074e mov edi, edi */
  EDI = (EDI);
L_121e0760:;
  /* 121e0760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0763 pop esi */
  ESI = (pop32());
  /* 121e0764 pop edi */
  EDI = (pop32());
  /* 121e0765 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e0766 ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e0767 nop  */
  /* nop */
L_121e0768:;
  /* 121e0768 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e076b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e076e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0771 pop esi */
  ESI = (pop32());
  /* 121e0772 pop edi */
  EDI = (pop32());
  /* 121e0773 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e0774 ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e0775 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e0778:;
  /* 121e0778 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e077b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e077e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e0781 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e0784 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0787 pop esi */
  ESI = (pop32());
  /* 121e0788 pop edi */
  EDI = (pop32());
  /* 121e0789 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e078a ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
  /* 121e078b nop  */
  /* nop */
L_121e078c:;
  /* 121e078c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e078f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e0792 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e0795 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e0798 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e079b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e079e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e07a1 pop esi */
  ESI = (pop32());
  /* 121e07a2 pop edi */
  EDI = (pop32());
  /* 121e07a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e07a4 ret  */
  ESPCHK(0x121e0470u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x121e07b0 (104 bytes, 43 insns) */
void f_121e07b0(void) {
  FTRACE(0x121e07b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e07b0 push ebx */
  push32((uint32_t)(EBX));
  /* 121e07b1 push esi */
  push32((uint32_t)(ESI));
  /* 121e07b2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 121e07b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e07b8 jne 0x121e07d2 */
  if (!C.zf) goto L_121e07d2;
  /* 121e07ba mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 121e07be mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e07c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e07c4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e07c6 mov ebx, eax */
  EBX = (EAX);
  /* 121e07c8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 121e07cc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e07ce mov edx, ebx */
  EDX = (EBX);
  /* 121e07d0 jmp 0x121e0813 */
  goto L_121e0813;
L_121e07d2:;
  /* 121e07d2 mov ecx, eax */
  ECX = (EAX);
  /* 121e07d4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 121e07d8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e07dc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_121e07e0:;
  /* 121e07e0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 121e07e2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 121e07e4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121e07e6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 121e07e8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e07ea jne 0x121e07e0 */
  if (!C.zf) goto L_121e07e0;
  /* 121e07ec div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e07ee mov esi, eax */
  ESI = (EAX);
  /* 121e07f0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e07f4 mov ecx, eax */
  ECX = (EAX);
  /* 121e07f6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 121e07fa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e07fc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e07fe jb 0x121e080e */
  if (C.cf) goto L_121e080e;
  /* 121e0800 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0804 ja 0x121e080e */
  if ((!C.cf&&!C.zf)) goto L_121e080e;
  /* 121e0806 jb 0x121e080f */
  if (C.cf) goto L_121e080f;
  /* 121e0808 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e080c jbe 0x121e080f */
  if ((C.cf||C.zf)) goto L_121e080f;
L_121e080e:;
  /* 121e080e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_121e080f:;
  /* 121e080f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e0811 mov eax, esi */
  EAX = (ESI);
L_121e0813:;
  /* 121e0813 pop esi */
  ESI = (pop32());
  /* 121e0814 pop ebx */
  EBX = (pop32());
  /* 121e0815 ret 0x10 */
  ESPCHK(0x121e07b0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x121e0820 (117 bytes, 44 insns) */
void f_121e0820(void) {
  FTRACE(0x121e0820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0820 push ebx */
  push32((uint32_t)(EBX));
  /* 121e0821 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 121e0825 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e0827 jne 0x121e0841 */
  if (!C.zf) goto L_121e0841;
  /* 121e0829 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e082d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 121e0831 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e0833 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e0835 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e0839 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e083b mov eax, edx */
  EAX = (EDX);
  /* 121e083d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e083f jmp 0x121e0891 */
  goto L_121e0891;
L_121e0841:;
  /* 121e0841 mov ecx, eax */
  ECX = (EAX);
  /* 121e0843 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e0847 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 121e084b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_121e084f:;
  /* 121e084f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 121e0851 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 121e0853 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121e0855 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 121e0857 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e0859 jne 0x121e084f */
  if (!C.zf) goto L_121e084f;
  /* 121e085b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e085d mov ecx, eax */
  ECX = (EAX);
  /* 121e085f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e0863 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 121e0864 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 121e0868 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e086a jb 0x121e087a */
  if (C.cf) goto L_121e087a;
  /* 121e086c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0870 ja 0x121e087a */
  if ((!C.cf&&!C.zf)) goto L_121e087a;
  /* 121e0872 jb 0x121e0882 */
  if (C.cf) goto L_121e0882;
  /* 121e0874 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0878 jbe 0x121e0882 */
  if ((C.cf||C.zf)) goto L_121e0882;
L_121e087a:;
  /* 121e087a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e087e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_121e0882:;
  /* 121e0882 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0886 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e088a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e088c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e088e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_121e0891:;
  /* 121e0891 pop ebx */
  EBX = (pop32());
  /* 121e0892 ret 0x10 */
  ESPCHK(0x121e0820u, _esp0);
  ESP += 20; return;
}

/* FUN_100108a0 @ 0x121e08a0 (628 bytes, 214 insns) */
void f_121e08a0(void) {
  FTRACE(0x121e08a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e08a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e08a1 mov ebp, esp */
  EBP = (ESP);
  /* 121e08a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e08a6 push ebx */
  push32((uint32_t)(EBX));
  /* 121e08a7 push esi */
  push32((uint32_t)(ESI));
  /* 121e08a8 push edi */
  push32((uint32_t)(EDI));
L_121e08a9:;
  /* 121e08a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e08ad jne 0x121e08cd */
  if (!C.zf) goto L_121e08cd;
  /* 121e08af push 0x12201554 */
  push32((uint32_t)(0x12201554u));
  /* 121e08b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e08b6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 121e08b8 push 0x12201548 */
  push32((uint32_t)(0x12201548u));
  /* 121e08bd push 2 */
  push32((uint32_t)(0x2u));
  /* 121e08bf call 0x121d8c50 */
  push32(0x121e08c4u); f_121d8c50();
  /* 121e08c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e08c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e08ca jne 0x121e08cd */
  if (!C.zf) goto L_121e08cd;
  /* 121e08cc int3  */
  x86_unimpl("int3 @ 0x121e08cc");
L_121e08cd:;
  /* 121e08cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e08cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e08d1 jne 0x121e08a9 */
  if (!C.zf) goto L_121e08a9;
  /* 121e08d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e08d6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e08d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e08dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121e08df mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e08e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e08e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e08e8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 121e08ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e08f0 je 0x121e08ff */
  if (C.zf) goto L_121e08ff;
  /* 121e08f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e08f5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e08f8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 121e08fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e08fd je 0x121e0915 */
  if (C.zf) goto L_121e0915;
L_121e08ff:;
  /* 121e08ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0902 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121e0905 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 121e0907 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e090a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 121e090d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e0910 jmp 0x121e0b0d */
  goto L_121e0b0d;
L_121e0915:;
  /* 121e0915 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0918 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121e091b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 121e091e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0920 je 0x121e096c */
  if (C.zf) goto L_121e096c;
  /* 121e0922 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0925 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121e092c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e092f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121e0932 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 121e0935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0937 je 0x121e0955 */
  if (C.zf) goto L_121e0955;
  /* 121e0939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e093c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e093f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e0942 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e0944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0947 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e094a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 121e094d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0950 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e0953 jmp 0x121e096c */
  goto L_121e096c;
L_121e0955:;
  /* 121e0955 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0958 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e095b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 121e095e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0961 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e0964 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e0967 jmp 0x121e0b0d */
  goto L_121e0b0d;
L_121e096c:;
  /* 121e096c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e096f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e0972 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 121e0975 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0978 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e097b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e097e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e0981 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 121e0984 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0987 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e098a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e098d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121e0994 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e099b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e099e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e09a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e09a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e09a7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 121e09ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e09af jne 0x121e09df */
  if (!C.zf) goto L_121e09df;
  /* 121e09b1 cmp dword ptr [ebp - 8], 0x12204140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12204140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e09b8 je 0x121e09c3 */
  if (C.zf) goto L_121e09c3;
  /* 121e09ba cmp dword ptr [ebp - 8], 0x12204160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12204160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e09c1 jne 0x121e09d3 */
  if (!C.zf) goto L_121e09d3;
L_121e09c3:;
  /* 121e09c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e09c6 push edx */
  push32((uint32_t)(EDX));
  /* 121e09c7 call 0x121e2810 */
  push32(0x121e09ccu); f_121e2810();
  /* 121e09cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e09cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e09d1 jne 0x121e09df */
  if (!C.zf) goto L_121e09df;
L_121e09d3:;
  /* 121e09d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e09d6 push eax */
  push32((uint32_t)(EAX));
  /* 121e09d7 call 0x121e2740 */
  push32(0x121e09dcu); f_121e2740();
  /* 121e09dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e09df:;
  /* 121e09df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e09e2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e09e5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 121e09eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e09ed je 0x121e0acb */
  if (C.zf) goto L_121e0acb;
L_121e09f3:;
  /* 121e09f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e09f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e09f9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 121e09fb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e09fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e0a00 jge 0x121e0a23 */
  if ((C.sf==C.of)) goto L_121e0a23;
  /* 121e0a02 push 0x12201508 */
  push32((uint32_t)(0x12201508u));
  /* 121e0a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e0a09 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 121e0a0e push 0x12201548 */
  push32((uint32_t)(0x12201548u));
  /* 121e0a13 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e0a15 call 0x121d8c50 */
  push32(0x121e0a1au); f_121d8c50();
  /* 121e0a1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0a1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0a20 jne 0x121e0a23 */
  if (!C.zf) goto L_121e0a23;
  /* 121e0a22 int3  */
  x86_unimpl("int3 @ 0x121e0a22");
L_121e0a23:;
  /* 121e0a23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e0a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0a27 jne 0x121e09f3 */
  if (!C.zf) goto L_121e09f3;
  /* 121e0a29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a2c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a2f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 121e0a31 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0a34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e0a37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a3a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121e0a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0a40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e0a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a48 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121e0a4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0a4e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121e0a54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0a58 jle 0x121e0a76 */
  if ((C.zf||C.sf!=C.of)) goto L_121e0a76;
  /* 121e0a5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0a5d push ecx */
  push32((uint32_t)(ECX));
  /* 121e0a5e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0a61 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e0a64 push eax */
  push32((uint32_t)(EAX));
  /* 121e0a65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e0a68 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0a69 call 0x121e2430 */
  push32(0x121e0a6eu); f_121e2430();
  /* 121e0a6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0a71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e0a74 jmp 0x121e0abe */
  goto L_121e0abe;
L_121e0a76:;
  /* 121e0a76 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0a7a je 0x121e0a99 */
  if (C.zf) goto L_121e0a99;
  /* 121e0a7c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e0a7f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121e0a82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e0a85 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121e0a88 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e0a8b mov ecx, dword ptr [edx*4 + 0x122071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e0a92 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0a94 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e0a97 jmp 0x121e0aa0 */
  goto L_121e0aa0;
L_121e0a99:;
  /* 121e0a99 mov dword ptr [ebp - 0x14], 0x12203a60 */
  w32((uint32_t)(EBP + -0x14), (0x12203a60u));
L_121e0aa0:;
  /* 121e0aa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e0aa3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 121e0aa7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 121e0aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0aac je 0x121e0abe */
  if (C.zf) goto L_121e0abe;
  /* 121e0aae push 2 */
  push32((uint32_t)(0x2u));
  /* 121e0ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e0ab2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e0ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0ab6 call 0x121e22e0 */
  push32(0x121e0abbu); f_121e22e0();
  /* 121e0abb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e0abe:;
  /* 121e0abe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0ac1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e0ac4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 121e0ac7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 121e0ac9 jmp 0x121e0ae9 */
  goto L_121e0ae9;
L_121e0acb:;
  /* 121e0acb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e0ad2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0ad5 push edx */
  push32((uint32_t)(EDX));
  /* 121e0ad6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 121e0ad9 push eax */
  push32((uint32_t)(EAX));
  /* 121e0ada mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e0add push ecx */
  push32((uint32_t)(ECX));
  /* 121e0ade call 0x121e2430 */
  push32(0x121e0ae3u); f_121e2430();
  /* 121e0ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0ae6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e0ae9:;
  /* 121e0ae9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e0aec cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0aef je 0x121e0b05 */
  if (C.zf) goto L_121e0b05;
  /* 121e0af1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0af4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e0af7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121e0afa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0afd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 121e0b00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e0b03 jmp 0x121e0b0d */
  goto L_121e0b0d;
L_121e0b05:;
  /* 121e0b05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0b08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_121e0b0d:;
  /* 121e0b0d pop edi */
  EDI = (pop32());
  /* 121e0b0e pop esi */
  ESI = (pop32());
  /* 121e0b0f pop ebx */
  EBX = (pop32());
  /* 121e0b10 mov esp, ebp */
  ESP = (EBP);
  /* 121e0b12 pop ebp */
  EBP = (pop32());
  /* 121e0b13 ret  */
  ESPCHK(0x121e08a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b20 @ 0x121e0b20 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_121e0b20(void) {
  FTRACE(0x121e0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 121e0b21 mov ebp, esp */
  EBP = (ESP);
  /* 121e0b23 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0b29 push ebx */
  push32((uint32_t)(EBX));
  /* 121e0b2a push esi */
  push32((uint32_t)(ESI));
  /* 121e0b2b push edi */
  push32((uint32_t)(EDI));
  /* 121e0b2c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121e0b33 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 121e0b3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_121e0b44:;
  /* 121e0b44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0b47 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e0b49 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 121e0b4c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0b50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0b53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0b56 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 121e0b59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e0b5b je 0x121e1737 */
  if (C.zf) goto L_121e1737;
  /* 121e0b61 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0b68 jl 0x121e1737 */
  if ((C.sf!=C.of)) goto L_121e1737;
  /* 121e0b6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0b72 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0b75 jl 0x121e0b96 */
  if ((C.sf!=C.of)) goto L_121e0b96;
  /* 121e0b77 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0b7b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0b7e jg 0x121e0b96 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e0b96;
  /* 121e0b80 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0b84 movsx ecx, byte ptr [eax + 0x12201540] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12201540))));
  /* 121e0b8b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 121e0b8e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 121e0b94 jmp 0x121e0ba0 */
  goto L_121e0ba0;
L_121e0b96:;
  /* 121e0b96 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_121e0ba0:;
  /* 121e0ba0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 121e0ba6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e0ba9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e0bac mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e0baf movsx edx, byte ptr [ecx + eax*8 + 0x12201560] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12201560))));
  /* 121e0bb7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 121e0bba mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121e0bbd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e0bc0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 121e0bc6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0bcd ja 0x121e1732 */
  if ((!C.cf&&!C.zf)) goto L_121e1732;
  /* 121e0bd3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 121e0bd9 jmp dword ptr [ecx*4 + 0x121e1744] */
  switch (ECX) {
    case 0: goto L_121e0be0;
    case 1: goto L_121e0c7a;
    case 2: goto L_121e0cbc;
    case 3: goto L_121e0d2b;
    case 4: goto L_121e0d83;
    case 5: goto L_121e0d92;
    case 6: goto L_121e0dde;
    case 7: goto L_121e0e71;
    case 8: goto L_121e0d08;
    case 9: goto L_121e0d13;
    case 10: goto L_121e0cfe;
    case 11: goto L_121e0cf3;
    case 12: goto L_121e0d1e;
    case 13: goto L_121e0d26;
    default: x86_unimpl("switch@0x121e0bd9 out of table"); return;
  }
L_121e0be0:;
  /* 121e0be0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 121e0be7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e0bea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e0bf0 mov eax, dword ptr [0x12203c98] */
  EAX = (r32((uint32_t)(0x12203c98)));
  /* 121e0bf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e0bf7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 121e0bfb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 121e0c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e0c03 je 0x121e0c5d */
  if (C.zf) goto L_121e0c5d;
  /* 121e0c05 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 121e0c0b push edx */
  push32((uint32_t)(EDX));
  /* 121e0c0c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0c0f push eax */
  push32((uint32_t)(EAX));
  /* 121e0c10 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0c14 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0c15 call 0x121e1850 */
  push32(0x121e0c1au); f_121e1850();
  /* 121e0c1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0c1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0c20 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e0c22 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 121e0c25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0c28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0c2b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_121e0c2e:;
  /* 121e0c2e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0c32 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e0c34 jne 0x121e0c57 */
  if (!C.zf) goto L_121e0c57;
  /* 121e0c36 push 0x122015e0 */
  push32((uint32_t)(0x122015e0u));
  /* 121e0c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 121e0c3d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 121e0c42 push 0x122015d4 */
  push32((uint32_t)(0x122015d4u));
  /* 121e0c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e0c49 call 0x121d8c50 */
  push32(0x121e0c4eu); f_121d8c50();
  /* 121e0c4e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0c51 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0c54 jne 0x121e0c57 */
  if (!C.zf) goto L_121e0c57;
  /* 121e0c56 int3  */
  x86_unimpl("int3 @ 0x121e0c56");
L_121e0c57:;
  /* 121e0c57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e0c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0c5b jne 0x121e0c2e */
  if (!C.zf) goto L_121e0c2e;
L_121e0c5d:;
  /* 121e0c5d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 121e0c63 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e0c67 push edx */
  push32((uint32_t)(EDX));
  /* 121e0c68 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0c6c push eax */
  push32((uint32_t)(EAX));
  /* 121e0c6d call 0x121e1850 */
  push32(0x121e0c72u); f_121e1850();
  /* 121e0c72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0c75 jmp 0x121e1732 */
  goto L_121e1732;
L_121e0c7a:;
  /* 121e0c7a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e0c81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e0c84 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 121e0c8a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 121e0c90 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 121e0c96 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 121e0c9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 121e0c9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e0ca6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 121e0cb0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 121e0cb7 jmp 0x121e1732 */
  goto L_121e1732;
L_121e0cbc:;
  /* 121e0cbc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0cc0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 121e0cc6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 121e0ccc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0ccf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 121e0cd5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0cdc ja 0x121e0d26 */
  if ((!C.cf&&!C.zf)) goto L_121e0d26;
  /* 121e0cde mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 121e0ce4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e0ce6 mov al, byte ptr [ecx + 0x121e177c] */
  AL = (r8((uint32_t)(ECX + 0x121e177c)));
  /* 121e0cec jmp dword ptr [eax*4 + 0x121e1764] */
  switch (EAX) {
    case 0: goto L_121e0d08;
    case 1: goto L_121e0d13;
    case 2: goto L_121e0cfe;
    case 3: goto L_121e0cf3;
    case 4: goto L_121e0d1e;
    case 5: goto L_121e0d26;
    default: x86_unimpl("switch@0x121e0cec out of table"); return;
  }
L_121e0cf3:;
  /* 121e0cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0cf6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e0cf9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e0cfc jmp 0x121e0d26 */
  goto L_121e0d26;
L_121e0cfe:;
  /* 121e0cfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0d01 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 121e0d03 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e0d06 jmp 0x121e0d26 */
  goto L_121e0d26;
L_121e0d08:;
  /* 121e0d08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0d0b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 121e0d0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e0d11 jmp 0x121e0d26 */
  goto L_121e0d26;
L_121e0d13:;
  /* 121e0d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0d16 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 121e0d19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e0d1c jmp 0x121e0d26 */
  goto L_121e0d26;
L_121e0d1e:;
  /* 121e0d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0d21 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 121e0d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e0d26:;
  /* 121e0d26 jmp 0x121e1732 */
  goto L_121e1732;
L_121e0d2b:;
  /* 121e0d2b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0d2f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0d32 jne 0x121e0d67 */
  if (!C.zf) goto L_121e0d67;
  /* 121e0d34 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 121e0d37 push edx */
  push32((uint32_t)(EDX));
  /* 121e0d38 call 0x121e1960 */
  push32(0x121e0d3du); f_121e1960();
  /* 121e0d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0d40 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 121e0d46 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0d4d jge 0x121e0d65 */
  if ((C.sf==C.of)) goto L_121e0d65;
  /* 121e0d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0d52 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121e0d54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e0d57 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 121e0d5d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e0d5f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_121e0d65:;
  /* 121e0d65 jmp 0x121e0d7e */
  goto L_121e0d7e;
L_121e0d67:;
  /* 121e0d67 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 121e0d6d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e0d70 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0d74 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 121e0d78 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_121e0d7e:;
  /* 121e0d7e jmp 0x121e1732 */
  goto L_121e1732;
L_121e0d83:;
  /* 121e0d83 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 121e0d8d jmp 0x121e1732 */
  goto L_121e1732;
L_121e0d92:;
  /* 121e0d92 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0d96 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0d99 jne 0x121e0dc2 */
  if (!C.zf) goto L_121e0dc2;
  /* 121e0d9b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121e0d9e push eax */
  push32((uint32_t)(EAX));
  /* 121e0d9f call 0x121e1960 */
  push32(0x121e0da4u); f_121e1960();
  /* 121e0da4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0da7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 121e0dad cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0db4 jge 0x121e0dc0 */
  if ((C.sf==C.of)) goto L_121e0dc0;
  /* 121e0db6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_121e0dc0:;
  /* 121e0dc0 jmp 0x121e0dd9 */
  goto L_121e0dd9;
L_121e0dc2:;
  /* 121e0dc2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 121e0dc8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e0dcb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0dcf lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 121e0dd3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_121e0dd9:;
  /* 121e0dd9 jmp 0x121e1732 */
  goto L_121e1732;
L_121e0dde:;
  /* 121e0dde movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0de2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 121e0de8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 121e0dee sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0df1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 121e0df7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0dfe ja 0x121e0e6c */
  if ((!C.cf&&!C.zf)) goto L_121e0e6c;
  /* 121e0e00 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 121e0e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e0e08 mov al, byte ptr [ecx + 0x121e17a1] */
  AL = (r8((uint32_t)(ECX + 0x121e17a1)));
  /* 121e0e0e jmp dword ptr [eax*4 + 0x121e178d] */
  switch (EAX) {
    case 0: goto L_121e0e20;
    case 1: goto L_121e0e59;
    case 2: goto L_121e0e15;
    case 3: goto L_121e0e63;
    case 4: goto L_121e0e6c;
    default: x86_unimpl("switch@0x121e0e0e out of table"); return;
  }
L_121e0e15:;
  /* 121e0e15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0e18 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 121e0e1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e0e1e jmp 0x121e0e6c */
  goto L_121e0e6c;
L_121e0e20:;
  /* 121e0e20 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0e23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e0e26 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0e29 jne 0x121e0e4b */
  if (!C.zf) goto L_121e0e4b;
  /* 121e0e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0e2e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121e0e32 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0e35 jne 0x121e0e4b */
  if (!C.zf) goto L_121e0e4b;
  /* 121e0e37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e0e3a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0e3d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 121e0e40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0e43 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121e0e46 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e0e49 jmp 0x121e0e57 */
  goto L_121e0e57;
L_121e0e4b:;
  /* 121e0e4b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 121e0e52 jmp 0x121e0be0 */
  goto L_121e0be0;
L_121e0e57:;
  /* 121e0e57 jmp 0x121e0e6c */
  goto L_121e0e6c;
L_121e0e59:;
  /* 121e0e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0e5c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 121e0e5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e0e61 jmp 0x121e0e6c */
  goto L_121e0e6c;
L_121e0e63:;
  /* 121e0e63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0e66 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 121e0e69 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e0e6c:;
  /* 121e0e6c jmp 0x121e1732 */
  goto L_121e1732;
L_121e0e71:;
  /* 121e0e71 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e0e75 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 121e0e7b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 121e0e81 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e0e84 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 121e0e8a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0e91 ja 0x121e1557 */
  if ((!C.cf&&!C.zf)) goto L_121e1557;
  /* 121e0e97 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 121e0e9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e0e9f mov cl, byte ptr [edx + 0x121e180c] */
  CL = (r8((uint32_t)(EDX + 0x121e180c)));
  /* 121e0ea5 jmp dword ptr [ecx*4 + 0x121e17d0] */
  switch (ECX) {
    case 0: goto L_121e0eac;
    case 1: goto L_121e1140;
    case 2: goto L_121e0fd0;
    case 3: goto L_121e1279;
    case 4: goto L_121e0f3b;
    case 5: goto L_121e0ec1;
    case 6: goto L_121e124b;
    case 7: goto L_121e1150;
    case 8: goto L_121e10f5;
    case 9: goto L_121e12c5;
    case 10: goto L_121e126f;
    case 11: goto L_121e0fe6;
    case 12: goto L_121e1263;
    case 13: goto L_121e1285;
    case 14: goto L_121e1557;
    default: x86_unimpl("switch@0x121e0ea5 out of table"); return;
  }
L_121e0eac:;
  /* 121e0eac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0eaf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 121e0eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e0eb6 jne 0x121e0ec1 */
  if (!C.zf) goto L_121e0ec1;
  /* 121e0eb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0ebb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 121e0ebe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e0ec1:;
  /* 121e0ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0ec4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 121e0eca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e0ecc je 0x121e0f07 */
  if (C.zf) goto L_121e0f07;
  /* 121e0ece lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121e0ed1 push eax */
  push32((uint32_t)(EAX));
  /* 121e0ed2 call 0x121e19a0 */
  push32(0x121e0ed7u); f_121e19a0();
  /* 121e0ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0eda mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 121e0ede mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 121e0ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 121e0ee3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 121e0ee9 push edx */
  push32((uint32_t)(EDX));
  /* 121e0eea call 0x121e2a80 */
  push32(0x121e0eefu); f_121e2a80();
  /* 121e0eef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0ef2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e0ef5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0ef9 jge 0x121e0f05 */
  if ((C.sf==C.of)) goto L_121e0f05;
  /* 121e0efb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_121e0f05:;
  /* 121e0f05 jmp 0x121e0f2d */
  goto L_121e0f2d;
L_121e0f07:;
  /* 121e0f07 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121e0f0a push eax */
  push32((uint32_t)(EAX));
  /* 121e0f0b call 0x121e1960 */
  push32(0x121e0f10u); f_121e1960();
  /* 121e0f10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0f13 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 121e0f1a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 121e0f20 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 121e0f26 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_121e0f2d:;
  /* 121e0f2d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 121e0f33 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121e0f36 jmp 0x121e1557 */
  goto L_121e1557;
L_121e0f3b:;
  /* 121e0f3b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121e0f3e push eax */
  push32((uint32_t)(EAX));
  /* 121e0f3f call 0x121e1960 */
  push32(0x121e0f44u); f_121e1960();
  /* 121e0f44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0f47 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 121e0f4d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0f54 je 0x121e0f62 */
  if (C.zf) goto L_121e0f62;
  /* 121e0f56 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 121e0f5c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0f60 jne 0x121e0f7c */
  if (!C.zf) goto L_121e0f7c;
L_121e0f62:;
  /* 121e0f62 mov edx, dword ptr [0x12203fb0] */
  EDX = (r32((uint32_t)(0x12203fb0)));
  /* 121e0f68 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121e0f6b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e0f6e push eax */
  push32((uint32_t)(EAX));
  /* 121e0f6f call 0x121dc9c0 */
  push32(0x121e0f74u); f_121dc9c0();
  /* 121e0f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e0f77 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e0f7a jmp 0x121e0fcb */
  goto L_121e0fcb;
L_121e0f7c:;
  /* 121e0f7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0f7f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 121e0f85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e0f87 je 0x121e0fac */
  if (C.zf) goto L_121e0fac;
  /* 121e0f89 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 121e0f8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121e0f92 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e0f95 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 121e0f9b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 121e0f9e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121e0fa0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121e0fa3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 121e0faa jmp 0x121e0fcb */
  goto L_121e0fcb;
L_121e0fac:;
  /* 121e0fac mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 121e0fb3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 121e0fb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e0fbc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121e0fbf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 121e0fc5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 121e0fc8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_121e0fcb:;
  /* 121e0fcb jmp 0x121e1557 */
  goto L_121e1557;
L_121e0fd0:;
  /* 121e0fd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0fd3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 121e0fd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e0fdb jne 0x121e0fe6 */
  if (!C.zf) goto L_121e0fe6;
  /* 121e0fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e0fe0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121e0fe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e0fe6:;
  /* 121e0fe6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e0fed jne 0x121e0ffb */
  if (!C.zf) goto L_121e0ffb;
  /* 121e0fef mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 121e0ff9 jmp 0x121e1007 */
  goto L_121e1007;
L_121e0ffb:;
  /* 121e0ffb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 121e1001 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_121e1007:;
  /* 121e1007 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 121e100d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 121e1013 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 121e1016 push edx */
  push32((uint32_t)(EDX));
  /* 121e1017 call 0x121e1960 */
  push32(0x121e101cu); f_121e1960();
  /* 121e101c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e101f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e1022 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1025 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 121e102a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e102c je 0x121e1096 */
  if (C.zf) goto L_121e1096;
  /* 121e102e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1032 jne 0x121e103d */
  if (!C.zf) goto L_121e103d;
  /* 121e1034 mov ecx, dword ptr [0x12203fb4] */
  ECX = (r32((uint32_t)(0x12203fb4)));
  /* 121e103a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121e103d:;
  /* 121e103d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 121e1044 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1047 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_121e104d:;
  /* 121e104d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 121e1053 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 121e1059 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e105c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 121e1062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1064 je 0x121e1086 */
  if (C.zf) goto L_121e1086;
  /* 121e1066 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 121e106c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e106e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 121e1071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1073 je 0x121e1086 */
  if (C.zf) goto L_121e1086;
  /* 121e1075 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 121e107b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e107e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 121e1084 jmp 0x121e104d */
  goto L_121e104d;
L_121e1086:;
  /* 121e1086 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 121e108c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e108f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121e1091 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 121e1094 jmp 0x121e10f0 */
  goto L_121e10f0;
L_121e1096:;
  /* 121e1096 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e109a jne 0x121e10a4 */
  if (!C.zf) goto L_121e10a4;
  /* 121e109c mov eax, dword ptr [0x12203fb0] */
  EAX = (r32((uint32_t)(0x12203fb0)));
  /* 121e10a1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_121e10a4:;
  /* 121e10a4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e10a7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_121e10ad:;
  /* 121e10ad mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 121e10b3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 121e10b9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e10bc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 121e10c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e10c4 je 0x121e10e4 */
  if (C.zf) goto L_121e10e4;
  /* 121e10c6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 121e10cc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e10cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e10d1 je 0x121e10e4 */
  if (C.zf) goto L_121e10e4;
  /* 121e10d3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 121e10d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e10dc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 121e10e2 jmp 0x121e10ad */
  goto L_121e10ad;
L_121e10e4:;
  /* 121e10e4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 121e10ea sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e10ed mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_121e10f0:;
  /* 121e10f0 jmp 0x121e1557 */
  goto L_121e1557;
L_121e10f5:;
  /* 121e10f5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 121e10f8 push edx */
  push32((uint32_t)(EDX));
  /* 121e10f9 call 0x121e1960 */
  push32(0x121e10feu); f_121e1960();
  /* 121e10fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1101 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 121e1107 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e110a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 121e110d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e110f je 0x121e1123 */
  if (C.zf) goto L_121e1123;
  /* 121e1111 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 121e1117 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 121e111e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 121e1121 jmp 0x121e1131 */
  goto L_121e1131;
L_121e1123:;
  /* 121e1123 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 121e1129 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 121e112f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_121e1131:;
  /* 121e1131 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 121e113b jmp 0x121e1557 */
  goto L_121e1557;
L_121e1140:;
  /* 121e1140 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121e1147 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 121e114a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e114d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_121e1150:;
  /* 121e1150 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1153 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 121e1155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e1158 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 121e115e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121e1161 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1168 jge 0x121e1176 */
  if ((C.sf==C.of)) goto L_121e1176;
  /* 121e116a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 121e1174 jmp 0x121e1192 */
  goto L_121e1192;
L_121e1176:;
  /* 121e1176 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e117d jne 0x121e1192 */
  if (!C.zf) goto L_121e1192;
  /* 121e117f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e1183 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1186 jne 0x121e1192 */
  if (!C.zf) goto L_121e1192;
  /* 121e1188 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_121e1192:;
  /* 121e1192 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e1195 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1198 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 121e119b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e119e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e11a1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e11a3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 121e11a6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 121e11ac mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 121e11b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e11b5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e11b6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 121e11bc push edx */
  push32((uint32_t)(EDX));
  /* 121e11bd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e11c1 push eax */
  push32((uint32_t)(EAX));
  /* 121e11c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e11c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e11c6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 121e11cc push edx */
  push32((uint32_t)(EDX));
  /* 121e11cd call dword ptr [0x122043a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122043a0))), 0x121e11d3u);
  /* 121e11d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e11d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e11d9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 121e11de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e11e0 je 0x121e11f8 */
  if (C.zf) goto L_121e11f8;
  /* 121e11e2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e11e9 jne 0x121e11f8 */
  if (!C.zf) goto L_121e11f8;
  /* 121e11eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e11ee push ecx */
  push32((uint32_t)(ECX));
  /* 121e11ef call dword ptr [0x122043ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x122043ac))), 0x121e11f5u);
  /* 121e11f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e11f8:;
  /* 121e11f8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 121e11fc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e11ff jne 0x121e121a */
  if (!C.zf) goto L_121e121a;
  /* 121e1201 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1204 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 121e1209 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e120b jne 0x121e121a */
  if (!C.zf) goto L_121e121a;
  /* 121e120d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1210 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1211 call dword ptr [0x122043a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122043a4))), 0x121e1217u);
  /* 121e1217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e121a:;
  /* 121e121a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e121d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e1220 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1223 jne 0x121e1237 */
  if (!C.zf) goto L_121e1237;
  /* 121e1225 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1228 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 121e122b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e122e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1231 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1234 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121e1237:;
  /* 121e1237 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e123a push eax */
  push32((uint32_t)(EAX));
  /* 121e123b call 0x121dc9c0 */
  push32(0x121e1240u); f_121dc9c0();
  /* 121e1240 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1243 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e1246 jmp 0x121e1557 */
  goto L_121e1557;
L_121e124b:;
  /* 121e124b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e124e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 121e1251 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e1254 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 121e125e jmp 0x121e12e5 */
  goto L_121e12e5;
L_121e1263:;
  /* 121e1263 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 121e126d jmp 0x121e12e5 */
  goto L_121e12e5;
L_121e126f:;
  /* 121e126f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_121e1279:;
  /* 121e1279 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 121e1283 jmp 0x121e128f */
  goto L_121e128f;
L_121e1285:;
  /* 121e1285 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_121e128f:;
  /* 121e128f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 121e1299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e129c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 121e12a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e12a4 je 0x121e12c3 */
  if (C.zf) goto L_121e12c3;
  /* 121e12a6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 121e12ad mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 121e12b3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e12b6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 121e12bc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_121e12c3:;
  /* 121e12c3 jmp 0x121e12e5 */
  goto L_121e12e5;
L_121e12c5:;
  /* 121e12c5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 121e12cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e12d2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 121e12d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e12da je 0x121e12e5 */
  if (C.zf) goto L_121e12e5;
  /* 121e12dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e12df or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121e12e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e12e5:;
  /* 121e12e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e12e8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 121e12ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e12ef je 0x121e130e */
  if (C.zf) goto L_121e130e;
  /* 121e12f1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 121e12f4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e12f5 call 0x121e1980 */
  push32(0x121e12fau); f_121e1980();
  /* 121e12fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e12fd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 121e1303 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 121e1309 jmp 0x121e139f */
  goto L_121e139f;
L_121e130e:;
  /* 121e130e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1311 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1314 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1316 je 0x121e1360 */
  if (C.zf) goto L_121e1360;
  /* 121e1318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e131b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121e131e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1320 je 0x121e1340 */
  if (C.zf) goto L_121e1340;
  /* 121e1322 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 121e1325 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1326 call 0x121e1960 */
  push32(0x121e132bu); f_121e1960();
  /* 121e132b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e132e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 121e1331 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e1332 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 121e1338 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 121e133e jmp 0x121e135e */
  goto L_121e135e;
L_121e1340:;
  /* 121e1340 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 121e1343 push edx */
  push32((uint32_t)(EDX));
  /* 121e1344 call 0x121e1960 */
  push32(0x121e1349u); f_121e1960();
  /* 121e1349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e134c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e1351 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e1352 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 121e1358 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_121e135e:;
  /* 121e135e jmp 0x121e139f */
  goto L_121e139f;
L_121e1360:;
  /* 121e1360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1363 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121e1366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1368 je 0x121e1385 */
  if (C.zf) goto L_121e1385;
  /* 121e136a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 121e136d push ecx */
  push32((uint32_t)(ECX));
  /* 121e136e call 0x121e1960 */
  push32(0x121e1373u); f_121e1960();
  /* 121e1373 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1376 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e1377 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 121e137d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 121e1383 jmp 0x121e139f */
  goto L_121e139f;
L_121e1385:;
  /* 121e1385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 121e1388 push edx */
  push32((uint32_t)(EDX));
  /* 121e1389 call 0x121e1960 */
  push32(0x121e138eu); f_121e1960();
  /* 121e138e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1391 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e1393 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 121e1399 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_121e139f:;
  /* 121e139f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e13a2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 121e13a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e13a7 je 0x121e13e7 */
  if (C.zf) goto L_121e13e7;
  /* 121e13a9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e13b0 jg 0x121e13e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e13e7;
  /* 121e13b2 jl 0x121e13bd */
  if ((C.sf!=C.of)) goto L_121e13bd;
  /* 121e13b4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e13bb jae 0x121e13e7 */
  if (!C.cf) goto L_121e13e7;
L_121e13bd:;
  /* 121e13bd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 121e13c3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e13c5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 121e13cb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e13ce neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e13d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 121e13d6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 121e13dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e13df or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121e13e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e13e5 jmp 0x121e13ff */
  goto L_121e13ff;
L_121e13e7:;
  /* 121e13e7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 121e13ed mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 121e13f3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 121e13f9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_121e13ff:;
  /* 121e13ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1402 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1408 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e140a jne 0x121e1427 */
  if (!C.zf) goto L_121e1427;
  /* 121e140c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 121e1412 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 121e1418 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 121e141b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 121e1421 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_121e1427:;
  /* 121e1427 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e142e jge 0x121e143c */
  if ((C.sf==C.of)) goto L_121e143c;
  /* 121e1430 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 121e143a jmp 0x121e1445 */
  goto L_121e1445;
L_121e143c:;
  /* 121e143c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e143f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1442 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e1445:;
  /* 121e1445 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 121e144b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 121e1451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1453 jne 0x121e145c */
  if (!C.zf) goto L_121e145c;
  /* 121e1455 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_121e145c:;
  /* 121e145c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 121e145f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121e1462:;
  /* 121e1462 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 121e1468 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 121e146e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1471 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 121e1477 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1479 jg 0x121e148f */
  if ((!C.zf&&C.sf==C.of)) goto L_121e148f;
  /* 121e147b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 121e1481 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 121e1487 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e1489 je 0x121e1510 */
  if (C.zf) goto L_121e1510;
L_121e148f:;
  /* 121e148f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 121e1495 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e1496 push edx */
  push32((uint32_t)(EDX));
  /* 121e1497 push eax */
  push32((uint32_t)(EAX));
  /* 121e1498 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 121e149e push edx */
  push32((uint32_t)(EDX));
  /* 121e149f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 121e14a5 push eax */
  push32((uint32_t)(EAX));
  /* 121e14a6 call 0x121e0820 */
  push32(0x121e14abu); f_121e0820();
  /* 121e14ab add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e14ae mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 121e14b4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 121e14ba cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e14bb push edx */
  push32((uint32_t)(EDX));
  /* 121e14bc push eax */
  push32((uint32_t)(EAX));
  /* 121e14bd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 121e14c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e14c4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 121e14ca push edx */
  push32((uint32_t)(EDX));
  /* 121e14cb call 0x121e07b0 */
  push32(0x121e14d0u); f_121e07b0();
  /* 121e14d0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 121e14d6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 121e14dc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e14e3 jle 0x121e14f7 */
  if ((C.zf||C.sf!=C.of)) goto L_121e14f7;
  /* 121e14e5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 121e14eb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e14f1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_121e14f7:;
  /* 121e14f7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e14fa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 121e1500 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 121e1502 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1505 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1508 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e150b jmp 0x121e1462 */
  goto L_121e1462;
L_121e1510:;
  /* 121e1510 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 121e1513 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1516 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e1519 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e151c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e151f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121e1522 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1525 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 121e152a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e152c je 0x121e1557 */
  if (C.zf) goto L_121e1557;
  /* 121e152e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1531 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e1534 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1537 jne 0x121e153f */
  if (!C.zf) goto L_121e153f;
  /* 121e1539 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e153d jne 0x121e1557 */
  if (!C.zf) goto L_121e1557;
L_121e153f:;
  /* 121e153f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1542 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1545 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e1548 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e154b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 121e154e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e1551 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1554 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_121e1557:;
  /* 121e1557 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e155e jne 0x121e1732 */
  if (!C.zf) goto L_121e1732;
  /* 121e1564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1567 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121e156a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e156c je 0x121e15bd */
  if (C.zf) goto L_121e15bd;
  /* 121e156e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1571 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 121e1577 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e1579 je 0x121e158b */
  if (C.zf) goto L_121e158b;
  /* 121e157b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 121e1582 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 121e1589 jmp 0x121e15bd */
  goto L_121e15bd;
L_121e158b:;
  /* 121e158b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e158e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1591 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1593 je 0x121e15a5 */
  if (C.zf) goto L_121e15a5;
  /* 121e1595 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 121e159c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 121e15a3 jmp 0x121e15bd */
  goto L_121e15bd;
L_121e15a5:;
  /* 121e15a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e15a8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 121e15ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e15ad je 0x121e15bd */
  if (C.zf) goto L_121e15bd;
  /* 121e15af mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 121e15b6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_121e15bd:;
  /* 121e15bd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 121e15c3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e15c6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e15c9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 121e15cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e15d2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 121e15d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e15d7 jne 0x121e15f5 */
  if (!C.zf) goto L_121e15f5;
  /* 121e15d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 121e15df push eax */
  push32((uint32_t)(EAX));
  /* 121e15e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e15e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e15e4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 121e15ea push edx */
  push32((uint32_t)(EDX));
  /* 121e15eb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 121e15ed call 0x121e18d0 */
  push32(0x121e15f2u); f_121e18d0();
  /* 121e15f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e15f5:;
  /* 121e15f5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 121e15fb push eax */
  push32((uint32_t)(EAX));
  /* 121e15fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e15ff push ecx */
  push32((uint32_t)(ECX));
  /* 121e1600 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e1603 push edx */
  push32((uint32_t)(EDX));
  /* 121e1604 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 121e160a push eax */
  push32((uint32_t)(EAX));
  /* 121e160b call 0x121e1910 */
  push32(0x121e1610u); f_121e1910();
  /* 121e1610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1613 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1616 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 121e1619 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e161b je 0x121e1643 */
  if (C.zf) goto L_121e1643;
  /* 121e161d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1620 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1623 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1625 jne 0x121e1643 */
  if (!C.zf) goto L_121e1643;
  /* 121e1627 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 121e162d push eax */
  push32((uint32_t)(EAX));
  /* 121e162e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1631 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1632 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 121e1638 push edx */
  push32((uint32_t)(EDX));
  /* 121e1639 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121e163b call 0x121e18d0 */
  push32(0x121e1640u); f_121e18d0();
  /* 121e1640 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e1643:;
  /* 121e1643 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1647 je 0x121e16f1 */
  if (C.zf) goto L_121e16f1;
  /* 121e164d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1651 jle 0x121e16f1 */
  if ((C.zf||C.sf!=C.of)) goto L_121e16f1;
  /* 121e1657 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e165a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 121e1660 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e1663 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_121e1669:;
  /* 121e1669 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 121e166f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 121e1675 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1678 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 121e167e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1680 je 0x121e16ef */
  if (C.zf) goto L_121e16ef;
  /* 121e1682 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 121e1688 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 121e168b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 121e1692 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 121e1699 push eax */
  push32((uint32_t)(EAX));
  /* 121e169a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 121e16a0 push ecx */
  push32((uint32_t)(ECX));
  /* 121e16a1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 121e16a7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e16aa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 121e16b0 call 0x121e2a80 */
  push32(0x121e16b5u); f_121e2a80();
  /* 121e16b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e16b8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 121e16be cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e16c5 jg 0x121e16c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e16c9;
  /* 121e16c7 jmp 0x121e16ef */
  goto L_121e16ef;
L_121e16c9:;
  /* 121e16c9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 121e16cf push eax */
  push32((uint32_t)(EAX));
  /* 121e16d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e16d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e16d4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 121e16da push edx */
  push32((uint32_t)(EDX));
  /* 121e16db lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 121e16e1 push eax */
  push32((uint32_t)(EAX));
  /* 121e16e2 call 0x121e1910 */
  push32(0x121e16e7u); f_121e1910();
  /* 121e16e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e16ea jmp 0x121e1669 */
  goto L_121e1669;
L_121e16ef:;
  /* 121e16ef jmp 0x121e170c */
  goto L_121e170c;
L_121e16f1:;
  /* 121e16f1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 121e16f7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e16f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e16fb push edx */
  push32((uint32_t)(EDX));
  /* 121e16fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e16ff push eax */
  push32((uint32_t)(EAX));
  /* 121e1700 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1703 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1704 call 0x121e1910 */
  push32(0x121e1709u); f_121e1910();
  /* 121e1709 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e170c:;
  /* 121e170c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e170f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1712 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e1714 je 0x121e1732 */
  if (C.zf) goto L_121e1732;
  /* 121e1716 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 121e171c push eax */
  push32((uint32_t)(EAX));
  /* 121e171d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1720 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1721 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 121e1727 push edx */
  push32((uint32_t)(EDX));
  /* 121e1728 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 121e172a call 0x121e18d0 */
  push32(0x121e172fu); f_121e18d0();
  /* 121e172f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e1732:;
  /* 121e1732 jmp 0x121e0b44 */
  goto L_121e0b44;
L_121e1737:;
  /* 121e1737 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 121e173d pop edi */
  EDI = (pop32());
  /* 121e173e pop esi */
  ESI = (pop32());
  /* 121e173f pop ebx */
  EBX = (pop32());
  /* 121e1740 mov esp, ebp */
  ESP = (EBP);
  /* 121e1742 pop ebp */
  EBP = (pop32());
  /* 121e1743 ret  */
  ESPCHK(0x121e0b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011850 @ 0x121e1850 (119 bytes, 44 insns) */
void f_121e1850(void) {
  FTRACE(0x121e1850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1850 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1851 mov ebp, esp */
  EBP = (ESP);
  /* 121e1853 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1854 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1857 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e185a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e185d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1860 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 121e1863 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1866 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e186a jl 0x121e1892 */
  if ((C.sf!=C.of)) goto L_121e1892;
  /* 121e186c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e186f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e1871 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 121e1874 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121e1876 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 121e187a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121e1880 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e1883 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1886 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e1888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e188b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e188e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e1890 jmp 0x121e18a5 */
  goto L_121e18a5;
L_121e1892:;
  /* 121e1892 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1895 push edx */
  push32((uint32_t)(EDX));
  /* 121e1896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1899 push eax */
  push32((uint32_t)(EAX));
  /* 121e189a call 0x121e08a0 */
  push32(0x121e189fu); f_121e08a0();
  /* 121e189f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e18a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e18a5:;
  /* 121e18a5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e18a9 jne 0x121e18b6 */
  if (!C.zf) goto L_121e18b6;
  /* 121e18ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e18ae mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121e18b4 jmp 0x121e18c3 */
  goto L_121e18c3;
L_121e18b6:;
  /* 121e18b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e18b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e18bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e18be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e18c1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_121e18c3:;
  /* 121e18c3 mov esp, ebp */
  ESP = (EBP);
  /* 121e18c5 pop ebp */
  EBP = (pop32());
  /* 121e18c6 ret  */
  ESPCHK(0x121e1850u, _esp0);
  ESP += 4; return;
}

/* FUN_100118d0 @ 0x121e18d0 (53 bytes, 23 insns) */
void f_121e18d0(void) {
  FTRACE(0x121e18d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e18d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e18d1 mov ebp, esp */
  EBP = (ESP);
L_121e18d3:;
  /* 121e18d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e18d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e18d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e18dc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 121e18df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e18e1 jle 0x121e1903 */
  if ((C.zf||C.sf!=C.of)) goto L_121e1903;
  /* 121e18e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e18e6 push edx */
  push32((uint32_t)(EDX));
  /* 121e18e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e18ea push eax */
  push32((uint32_t)(EAX));
  /* 121e18eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e18ee push ecx */
  push32((uint32_t)(ECX));
  /* 121e18ef call 0x121e1850 */
  push32(0x121e18f4u); f_121e1850();
  /* 121e18f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e18f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e18fa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e18fd jne 0x121e1901 */
  if (!C.zf) goto L_121e1901;
  /* 121e18ff jmp 0x121e1903 */
  goto L_121e1903;
L_121e1901:;
  /* 121e1901 jmp 0x121e18d3 */
  goto L_121e18d3;
L_121e1903:;
  /* 121e1903 pop ebp */
  EBP = (pop32());
  /* 121e1904 ret  */
  ESPCHK(0x121e18d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011910 @ 0x121e1910 (74 bytes, 31 insns) */
void f_121e1910(void) {
  FTRACE(0x121e1910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1910 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1911 mov ebp, esp */
  EBP = (ESP);
  /* 121e1913 push ecx */
  push32((uint32_t)(ECX));
L_121e1914:;
  /* 121e1914 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1917 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e191a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e191d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 121e1920 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1922 jle 0x121e1956 */
  if ((C.zf||C.sf!=C.of)) goto L_121e1956;
  /* 121e1924 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e1927 push edx */
  push32((uint32_t)(EDX));
  /* 121e1928 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e192b push eax */
  push32((uint32_t)(EAX));
  /* 121e192c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e192f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e1932 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e1935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e1938 push eax */
  push32((uint32_t)(EAX));
  /* 121e1939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e193c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e193f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e1942 call 0x121e1850 */
  push32(0x121e1947u); f_121e1850();
  /* 121e1947 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e194a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e194d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1950 jne 0x121e1954 */
  if (!C.zf) goto L_121e1954;
  /* 121e1952 jmp 0x121e1956 */
  goto L_121e1956;
L_121e1954:;
  /* 121e1954 jmp 0x121e1914 */
  goto L_121e1914;
L_121e1956:;
  /* 121e1956 mov esp, ebp */
  ESP = (EBP);
  /* 121e1958 pop ebp */
  EBP = (pop32());
  /* 121e1959 ret  */
  ESPCHK(0x121e1910u, _esp0);
  ESP += 4; return;
}

/* FUN_10011960 @ 0x121e1960 (26 bytes, 12 insns) */
void f_121e1960(void) {
  FTRACE(0x121e1960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1960 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1961 mov ebp, esp */
  EBP = (ESP);
  /* 121e1963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1966 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e1968 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e196b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e196e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e1970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1973 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e1975 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 121e1978 pop ebp */
  EBP = (pop32());
  /* 121e1979 ret  */
  ESPCHK(0x121e1960u, _esp0);
  ESP += 4; return;
}

/* FUN_10011980 @ 0x121e1980 (31 bytes, 14 insns) */
void f_121e1980(void) {
  FTRACE(0x121e1980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1980 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1981 mov ebp, esp */
  EBP = (ESP);
  /* 121e1983 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1986 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e1988 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e198b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e198e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e1990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1993 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e1995 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1998 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 121e199a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121e199d pop ebp */
  EBP = (pop32());
  /* 121e199e ret  */
  ESPCHK(0x121e1980u, _esp0);
  ESP += 4; return;
}

/* FUN_100119a0 @ 0x121e19a0 (27 bytes, 12 insns) */
void f_121e19a0(void) {
  FTRACE(0x121e19a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e19a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e19a1 mov ebp, esp */
  EBP = (ESP);
  /* 121e19a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e19a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e19a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e19ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e19ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 121e19b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e19b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e19b5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 121e19b9 pop ebp */
  EBP = (pop32());
  /* 121e19ba ret  */
  ESPCHK(0x121e19a0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x121e19c0 (145 bytes, 42 insns) */
void f_121e19c0(void) {
  FTRACE(0x121e19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e19c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e19c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e19c4 call 0x121e1a70 */
  push32(0x121e19c9u); f_121e1a70();
  /* 121e19c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e19cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121e19ce mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e19d5 jmp 0x121e19e0 */
  goto L_121e19e0;
L_121e19d7:;
  /* 121e19d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e19da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e19dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e19e0:;
  /* 121e19e0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e19e4 jae 0x121e1a0a */
  if (!C.cf) goto L_121e1a0a;
  /* 121e19e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e19e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e19ec cmp ecx, dword ptr [eax*8 + 0x12203fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12203fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e19f3 jne 0x121e1a08 */
  if (!C.zf) goto L_121e1a08;
  /* 121e19f5 call 0x121e1a60 */
  push32(0x121e19fau); f_121e1a60();
  /* 121e19fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e19fd mov ecx, dword ptr [edx*8 + 0x12203fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12203fbc)));
  /* 121e1a04 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121e1a06 jmp 0x121e1a4d */
  goto L_121e1a4d;
L_121e1a08:;
  /* 121e1a08 jmp 0x121e19d7 */
  goto L_121e19d7;
L_121e1a0a:;
  /* 121e1a0a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a0e jb 0x121e1a23 */
  if (C.cf) goto L_121e1a23;
  /* 121e1a10 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a14 ja 0x121e1a23 */
  if ((!C.cf&&!C.zf)) goto L_121e1a23;
  /* 121e1a16 call 0x121e1a60 */
  push32(0x121e1a1bu); f_121e1a60();
  /* 121e1a1b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 121e1a21 jmp 0x121e1a4d */
  goto L_121e1a4d;
L_121e1a23:;
  /* 121e1a23 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a2a jb 0x121e1a42 */
  if (C.cf) goto L_121e1a42;
  /* 121e1a2c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a33 ja 0x121e1a42 */
  if ((!C.cf&&!C.zf)) goto L_121e1a42;
  /* 121e1a35 call 0x121e1a60 */
  push32(0x121e1a3au); f_121e1a60();
  /* 121e1a3a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 121e1a40 jmp 0x121e1a4d */
  goto L_121e1a4d;
L_121e1a42:;
  /* 121e1a42 call 0x121e1a60 */
  push32(0x121e1a47u); f_121e1a60();
  /* 121e1a47 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_121e1a4d:;
  /* 121e1a4d mov esp, ebp */
  ESP = (EBP);
  /* 121e1a4f pop ebp */
  EBP = (pop32());
  /* 121e1a50 ret  */
  ESPCHK(0x121e19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a60 @ 0x121e1a60 (13 bytes, 6 insns) */
void f_121e1a60(void) {
  FTRACE(0x121e1a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1a60 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1a61 mov ebp, esp */
  EBP = (ESP);
  /* 121e1a63 call 0x121d95d0 */
  push32(0x121e1a68u); f_121d95d0();
  /* 121e1a68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1a6b pop ebp */
  EBP = (pop32());
  /* 121e1a6c ret  */
  ESPCHK(0x121e1a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x121e1a70 (13 bytes, 6 insns) */
void f_121e1a70(void) {
  FTRACE(0x121e1a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1a70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1a71 mov ebp, esp */
  EBP = (ESP);
  /* 121e1a73 call 0x121d95d0 */
  push32(0x121e1a78u); f_121d95d0();
  /* 121e1a78 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1a7b pop ebp */
  EBP = (pop32());
  /* 121e1a7c ret  */
  ESPCHK(0x121e1a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a80 @ 0x121e1a80 (664 bytes, 259 insns) [15 switch table(s)] */
void f_121e1a80(void) {
  FTRACE(0x121e1a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1a80 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1a81 mov ebp, esp */
  EBP = (ESP);
  /* 121e1a83 push edi */
  push32((uint32_t)(EDI));
  /* 121e1a84 push esi */
  push32((uint32_t)(ESI));
  /* 121e1a85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1a88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e1a8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1a8e mov eax, ecx */
  EAX = (ECX);
  /* 121e1a90 mov edx, ecx */
  EDX = (ECX);
  /* 121e1a92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1a94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a96 jbe 0x121e1aa0 */
  if ((C.cf||C.zf)) goto L_121e1aa0;
  /* 121e1a98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1a9a jb 0x121e1c18 */
  if (C.cf) goto L_121e1c18;
L_121e1aa0:;
  /* 121e1aa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 121e1aa6 jne 0x121e1abc */
  if (!C.zf) goto L_121e1abc;
  /* 121e1aa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1aab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1aae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1ab1 jb 0x121e1adc */
  if (C.cf) goto L_121e1adc;
  /* 121e1ab3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1ab5 jmp dword ptr [edx*4 + 0x121e1bc8] */
  switch (EDX) {
    case 0: goto L_121e1bd8;
    case 1: goto L_121e1be0;
    case 2: goto L_121e1bec;
    case 3: goto L_121e1c00;
    default: x86_unimpl("switch@0x121e1ab5 out of table"); return;
  }
L_121e1abc:;
  /* 121e1abc mov eax, edi */
  EAX = (EDI);
  /* 121e1abe mov edx, 3 */
  EDX = (0x3u);
  /* 121e1ac3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1ac6 jb 0x121e1ad4 */
  if (C.cf) goto L_121e1ad4;
  /* 121e1ac8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121e1acb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1acd jmp dword ptr [eax*4 + 0x121e1ae0] */
  switch (EAX) {
    case 1: goto L_121e1af0;
    case 2: goto L_121e1b1c;
    case 3: goto L_121e1b40;
    default: x86_unimpl("switch@0x121e1acd out of table"); return;
  }
L_121e1ad4:;
  /* 121e1ad4 jmp dword ptr [ecx*4 + 0x121e1bd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x121e1bd8)))); return;
  /* 121e1adb nop  */
  /* nop */
L_121e1adc:;
  /* 121e1adc jmp dword ptr [ecx*4 + 0x121e1b5c] */
  switch (ECX) {
    case 0: goto L_121e1bbf;
    case 1: goto L_121e1bac;
    case 2: goto L_121e1ba4;
    case 3: goto L_121e1b9c;
    case 4: goto L_121e1b94;
    case 5: goto L_121e1b8c;
    case 6: goto L_121e1b84;
    case 7: goto L_121e1b7c;
    default: x86_unimpl("switch@0x121e1adc out of table"); return;
  }
  /* 121e1ae3 nop  */
  /* nop */
L_121e1af0:;
  /* 121e1af0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1af2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1af4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1af6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1af9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1afc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1aff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1b02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1b05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1b08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1b0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1b0e jb 0x121e1adc */
  if (C.cf) goto L_121e1adc;
  /* 121e1b10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1b12 jmp dword ptr [edx*4 + 0x121e1bc8] */
  switch (EDX) {
    case 0: goto L_121e1bd8;
    case 1: goto L_121e1be0;
    case 2: goto L_121e1bec;
    case 3: goto L_121e1c00;
    default: x86_unimpl("switch@0x121e1b12 out of table"); return;
  }
  /* 121e1b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1b1c:;
  /* 121e1b1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1b1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1b20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1b22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1b25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1b28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1b2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1b2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1b31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1b34 jb 0x121e1adc */
  if (C.cf) goto L_121e1adc;
  /* 121e1b36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1b38 jmp dword ptr [edx*4 + 0x121e1bc8] */
  switch (EDX) {
    case 0: goto L_121e1bd8;
    case 1: goto L_121e1be0;
    case 2: goto L_121e1bec;
    case 3: goto L_121e1c00;
    default: x86_unimpl("switch@0x121e1b38 out of table"); return;
  }
  /* 121e1b3f nop  */
  /* nop */
L_121e1b40:;
  /* 121e1b40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1b42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1b44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1b46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e1b47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1b4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121e1b4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1b4e jb 0x121e1adc */
  if (C.cf) goto L_121e1adc;
  /* 121e1b50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1b52 jmp dword ptr [edx*4 + 0x121e1bc8] */
  switch (EDX) {
    case 0: goto L_121e1bd8;
    case 1: goto L_121e1be0;
    case 2: goto L_121e1bec;
    case 3: goto L_121e1c00;
    default: x86_unimpl("switch@0x121e1b52 out of table"); return;
  }
  /* 121e1b59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1b7c:;
  /* 121e1b7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 121e1b80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_121e1b84:;
  /* 121e1b84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 121e1b88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_121e1b8c:;
  /* 121e1b8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 121e1b90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_121e1b94:;
  /* 121e1b94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 121e1b98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_121e1b9c:;
  /* 121e1b9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 121e1ba0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_121e1ba4:;
  /* 121e1ba4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 121e1ba8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_121e1bac:;
  /* 121e1bac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 121e1bb0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 121e1bb4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 121e1bbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1bbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_121e1bbf:;
  /* 121e1bbf jmp dword ptr [edx*4 + 0x121e1bc8] */
  switch (EDX) {
    case 0: goto L_121e1bd8;
    case 1: goto L_121e1be0;
    case 2: goto L_121e1bec;
    case 3: goto L_121e1c00;
    default: x86_unimpl("switch@0x121e1bbf out of table"); return;
  }
  /* 121e1bc6 mov edi, edi */
  EDI = (EDI);
L_121e1bd8:;
  /* 121e1bd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1bdb pop esi */
  ESI = (pop32());
  /* 121e1bdc pop edi */
  EDI = (pop32());
  /* 121e1bdd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1bde ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1bdf nop  */
  /* nop */
L_121e1be0:;
  /* 121e1be0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1be2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1be7 pop esi */
  ESI = (pop32());
  /* 121e1be8 pop edi */
  EDI = (pop32());
  /* 121e1be9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1bea ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1beb nop  */
  /* nop */
L_121e1bec:;
  /* 121e1bec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1bee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1bf0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1bf3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1bf9 pop esi */
  ESI = (pop32());
  /* 121e1bfa pop edi */
  EDI = (pop32());
  /* 121e1bfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1bfc ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1bfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1c00:;
  /* 121e1c00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e1c02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121e1c04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1c07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1c0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1c0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1c13 pop esi */
  ESI = (pop32());
  /* 121e1c14 pop edi */
  EDI = (pop32());
  /* 121e1c15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1c16 ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1c17 nop  */
  /* nop */
L_121e1c18:;
  /* 121e1c18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 121e1c1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 121e1c20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 121e1c26 jne 0x121e1c4c */
  if (!C.zf) goto L_121e1c4c;
  /* 121e1c28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1c2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1c2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1c31 jb 0x121e1c40 */
  if (C.cf) goto L_121e1c40;
  /* 121e1c33 std  */
  C.df=1;
  /* 121e1c34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1c36 cld  */
  C.df=0;
  /* 121e1c37 jmp dword ptr [edx*4 + 0x121e1d60] */
  switch (EDX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1c37 out of table"); return;
  }
  /* 121e1c3e mov edi, edi */
  EDI = (EDI);
L_121e1c40:;
  /* 121e1c40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e1c42 jmp dword ptr [ecx*4 + 0x121e1d10] */
  switch (ECX) {
    case 0: goto L_121e1d57;
    default: x86_unimpl("switch@0x121e1c42 out of table"); return;
  }
  /* 121e1c49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1c4c:;
  /* 121e1c4c mov eax, edi */
  EAX = (EDI);
  /* 121e1c4e mov edx, 3 */
  EDX = (0x3u);
  /* 121e1c53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1c56 jb 0x121e1c64 */
  if (C.cf) goto L_121e1c64;
  /* 121e1c58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 121e1c5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1c5d jmp dword ptr [eax*4 + 0x121e1c68] */
  switch (EAX) {
    case 1: goto L_121e1c78;
    case 2: goto L_121e1c98;
    case 3: goto L_121e1cc0;
    default: x86_unimpl("switch@0x121e1c5d out of table"); return;
  }
L_121e1c64:;
  /* 121e1c64 jmp dword ptr [ecx*4 + 0x121e1d60] */
  switch (ECX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1c64 out of table"); return;
  }
  /* 121e1c6b nop  */
  /* nop */
L_121e1c78:;
  /* 121e1c78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1c7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1c7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1c80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 121e1c81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1c84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 121e1c85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1c88 jb 0x121e1c40 */
  if (C.cf) goto L_121e1c40;
  /* 121e1c8a std  */
  C.df=1;
  /* 121e1c8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1c8d cld  */
  C.df=0;
  /* 121e1c8e jmp dword ptr [edx*4 + 0x121e1d60] */
  switch (EDX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1c8e out of table"); return;
  }
  /* 121e1c95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1c98:;
  /* 121e1c98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1c9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1c9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1ca0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1ca3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1ca6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1ca9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1cac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1caf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1cb2 jb 0x121e1c40 */
  if (C.cf) goto L_121e1c40;
  /* 121e1cb4 std  */
  C.df=1;
  /* 121e1cb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1cb7 cld  */
  C.df=0;
  /* 121e1cb8 jmp dword ptr [edx*4 + 0x121e1d60] */
  switch (EDX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1cb8 out of table"); return;
  }
  /* 121e1cbf nop  */
  /* nop */
L_121e1cc0:;
  /* 121e1cc0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1cc3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 121e1cc5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1cc8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1ccb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1cce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1cd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121e1cd4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1cd7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1cda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1cdd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1ce0 jb 0x121e1c40 */
  if (C.cf) goto L_121e1c40;
  /* 121e1ce6 std  */
  C.df=1;
  /* 121e1ce7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 121e1ce9 cld  */
  C.df=0;
  /* 121e1cea jmp dword ptr [edx*4 + 0x121e1d60] */
  switch (EDX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1cea out of table"); return;
  }
  /* 121e1cf1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 121e1cf4 adc al, 0x1d */
  { uint32_t _a=(AL),_b=(0x1du),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e1cf6 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e1cf7 adc bl, byte ptr [ebx + 0x1d24121e] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBX*1 + 0x1d24121e))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e1cfe push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e1cff adc ch, byte ptr [ebx + 0x1d34121e] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX*1 + 0x1d34121e))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 121e1d06 push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e1d07 adc bh, byte ptr [ebx + 0x1d44121e] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX*1 + 0x1d44121e))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 121e1d0e push ds */
  push32((uint32_t)(C.seg_ds));
  /* 121e1d14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 121e1d18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 121e1d1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 121e1d20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 121e1d24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 121e1d28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 121e1d2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 121e1d30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 121e1d34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 121e1d38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 121e1d3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 121e1d40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 121e1d44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 121e1d48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 121e1d4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 121e1d53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1d55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_121e1d57:;
  /* 121e1d57 jmp dword ptr [edx*4 + 0x121e1d60] */
  switch (EDX) {
    case 0: goto L_121e1d70;
    case 1: goto L_121e1d78;
    case 2: goto L_121e1d88;
    case 3: goto L_121e1d9c;
    default: x86_unimpl("switch@0x121e1d57 out of table"); return;
  }
  /* 121e1d5e mov edi, edi */
  EDI = (EDI);
L_121e1d70:;
  /* 121e1d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1d73 pop esi */
  ESI = (pop32());
  /* 121e1d74 pop edi */
  EDI = (pop32());
  /* 121e1d75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1d76 ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1d77 nop  */
  /* nop */
L_121e1d78:;
  /* 121e1d78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1d7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1d7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1d81 pop esi */
  ESI = (pop32());
  /* 121e1d82 pop edi */
  EDI = (pop32());
  /* 121e1d83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1d84 ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1d85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e1d88:;
  /* 121e1d88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1d8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1d8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1d91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1d97 pop esi */
  ESI = (pop32());
  /* 121e1d98 pop edi */
  EDI = (pop32());
  /* 121e1d99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1d9a ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
  /* 121e1d9b nop  */
  /* nop */
L_121e1d9c:;
  /* 121e1d9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 121e1d9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 121e1da2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 121e1da5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 121e1da8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 121e1dab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 121e1dae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1db1 pop esi */
  ESI = (pop32());
  /* 121e1db2 pop edi */
  EDI = (pop32());
  /* 121e1db3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e1db4 ret  */
  ESPCHK(0x121e1a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dc0 @ 0x121e1dc0 (421 bytes, 148 insns) */
void f_121e1dc0(void) {
  FTRACE(0x121e1dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1dc1 mov ebp, esp */
  EBP = (ESP);
  /* 121e1dc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e1dc5 push 0x122015f8 */
  push32((uint32_t)(0x122015f8u));
  /* 121e1dca push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e1dcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e1dd5 push eax */
  push32((uint32_t)(EAX));
  /* 121e1dd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e1ddd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1de0 push ebx */
  push32((uint32_t)(EBX));
  /* 121e1de1 push esi */
  push32((uint32_t)(ESI));
  /* 121e1de2 push edi */
  push32((uint32_t)(EDI));
  /* 121e1de3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e1de6 cmp dword ptr [0x122059ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1ded jne 0x121e1e3e */
  if (!C.zf) goto L_121e1e3e;
  /* 121e1def lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 121e1df2 push eax */
  push32((uint32_t)(EAX));
  /* 121e1df3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1df5 push 0x122015f4 */
  push32((uint32_t)(0x122015f4u));
  /* 121e1dfa push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1dfc call dword ptr [0x1220831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220831c))), 0x121e1e02u);
  /* 121e1e02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1e04 je 0x121e1e12 */
  if (C.zf) goto L_121e1e12;
  /* 121e1e06 mov dword ptr [0x122059ac], 1 */
  w32((uint32_t)(0x122059ac), (0x1u));
  /* 121e1e10 jmp 0x121e1e3e */
  goto L_121e1e3e;
L_121e1e12:;
  /* 121e1e12 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 121e1e15 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1e16 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1e18 push 0x122015f0 */
  push32((uint32_t)(0x122015f0u));
  /* 121e1e1d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1e21 call dword ptr [0x12208320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208320))), 0x121e1e27u);
  /* 121e1e27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1e29 je 0x121e1e37 */
  if (C.zf) goto L_121e1e37;
  /* 121e1e2b mov dword ptr [0x122059ac], 2 */
  w32((uint32_t)(0x122059ac), (0x2u));
  /* 121e1e35 jmp 0x121e1e3e */
  goto L_121e1e3e;
L_121e1e37:;
  /* 121e1e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e1e39 jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1e3e:;
  /* 121e1e3e cmp dword ptr [0x122059ac], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122059ac))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1e45 jne 0x121e1e75 */
  if (!C.zf) goto L_121e1e75;
  /* 121e1e47 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1e4b jne 0x121e1e56 */
  if (!C.zf) goto L_121e1e56;
  /* 121e1e4d mov edx, dword ptr [0x122059b8] */
  EDX = (r32((uint32_t)(0x122059b8)));
  /* 121e1e53 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_121e1e56:;
  /* 121e1e56 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e1e59 push eax */
  push32((uint32_t)(EAX));
  /* 121e1e5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e1e5d push ecx */
  push32((uint32_t)(ECX));
  /* 121e1e5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1e61 push edx */
  push32((uint32_t)(EDX));
  /* 121e1e62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1e65 push eax */
  push32((uint32_t)(EAX));
  /* 121e1e66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e1e69 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1e6a call dword ptr [0x12208320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208320))), 0x121e1e70u);
  /* 121e1e70 jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1e75:;
  /* 121e1e75 cmp dword ptr [0x122059ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122059ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1e7c jne 0x121e1f66 */
  if (!C.zf) goto L_121e1f66;
  /* 121e1e82 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1e86 jne 0x121e1e91 */
  if (!C.zf) goto L_121e1e91;
  /* 121e1e88 mov edx, dword ptr [0x122059c8] */
  EDX = (r32((uint32_t)(0x122059c8)));
  /* 121e1e8e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_121e1e91:;
  /* 121e1e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1e95 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e1e98 push eax */
  push32((uint32_t)(EAX));
  /* 121e1e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1e9c push ecx */
  push32((uint32_t)(ECX));
  /* 121e1e9d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e1ea0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e1ea2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e1ea4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121e1ea7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1eaa push edx */
  push32((uint32_t)(EDX));
  /* 121e1eab mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e1eae push eax */
  push32((uint32_t)(EAX));
  /* 121e1eaf call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e1eb5u);
  /* 121e1eb5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e1eb8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1ebc jne 0x121e1ec5 */
  if (!C.zf) goto L_121e1ec5;
  /* 121e1ebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e1ec0 jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1ec5:;
  /* 121e1ec5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e1ecc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1ecf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e1ed1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1ed4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e1ed6 call 0x121dcd30 */
  push32(0x121e1edbu); f_121dcd30();
  /* 121e1edb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 121e1ede mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e1ee1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e1ee4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e1ee7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1eea shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 121e1eec push edx */
  push32((uint32_t)(EDX));
  /* 121e1eed push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1eef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e1ef2 push eax */
  push32((uint32_t)(EAX));
  /* 121e1ef3 call 0x121dd900 */
  push32(0x121e1ef8u); f_121dd900();
  /* 121e1ef8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1efb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e1f02 jmp 0x121e1f1b */
  goto L_121e1f1b;
  /* 121e1f04 mov eax, 1 */
  EAX = (0x1u);
  /* 121e1f09 ret  */
  ESPCHK(0x121e1dc0u, _esp0);
  ESP += 4; return;
  /* 121e1f0a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e1f0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121e1f14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e1f1b:;
  /* 121e1f1b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1f1f jne 0x121e1f25 */
  if (!C.zf) goto L_121e1f25;
  /* 121e1f21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e1f23 jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1f25:;
  /* 121e1f25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e1f28 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1f29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e1f2c push edx */
  push32((uint32_t)(EDX));
  /* 121e1f2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e1f30 push eax */
  push32((uint32_t)(EAX));
  /* 121e1f31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e1f34 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1f35 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1f37 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e1f3a push edx */
  push32((uint32_t)(EDX));
  /* 121e1f3b call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e1f41u);
  /* 121e1f41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e1f44 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1f48 jne 0x121e1f4e */
  if (!C.zf) goto L_121e1f4e;
  /* 121e1f4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e1f4c jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1f4e:;
  /* 121e1f4e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e1f51 push eax */
  push32((uint32_t)(EAX));
  /* 121e1f52 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e1f55 push ecx */
  push32((uint32_t)(ECX));
  /* 121e1f56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e1f59 push edx */
  push32((uint32_t)(EDX));
  /* 121e1f5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e1f5d push eax */
  push32((uint32_t)(EAX));
  /* 121e1f5e call dword ptr [0x1220831c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220831c))), 0x121e1f64u);
  /* 121e1f64 jmp 0x121e1f68 */
  goto L_121e1f68;
L_121e1f66:;
  /* 121e1f66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e1f68:;
  /* 121e1f68 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 121e1f6b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e1f6e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e1f75 pop edi */
  EDI = (pop32());
  /* 121e1f76 pop esi */
  ESI = (pop32());
  /* 121e1f77 pop ebx */
  EBX = (pop32());
  /* 121e1f78 mov esp, ebp */
  ESP = (EBP);
  /* 121e1f7a pop ebp */
  EBP = (pop32());
  /* 121e1f7b ret  */
  ESPCHK(0x121e1dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f80 @ 0x121e1f80 (727 bytes, 263 insns) */
void f_121e1f80(void) {
  FTRACE(0x121e1f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e1f80 push ebp */
  push32((uint32_t)(EBP));
  /* 121e1f81 mov ebp, esp */
  EBP = (ESP);
  /* 121e1f83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121e1f85 push 0x12201608 */
  push32((uint32_t)(0x12201608u));
  /* 121e1f8a push 0x121e2c98 */
  push32((uint32_t)(0x121e2c98u));
  /* 121e1f8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 121e1f95 push eax */
  push32((uint32_t)(EAX));
  /* 121e1f96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 121e1f9d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e1fa0 push ebx */
  push32((uint32_t)(EBX));
  /* 121e1fa1 push esi */
  push32((uint32_t)(ESI));
  /* 121e1fa2 push edi */
  push32((uint32_t)(EDI));
  /* 121e1fa3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e1fa6 cmp dword ptr [0x122059d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e1fad jne 0x121e2006 */
  if (!C.zf) goto L_121e2006;
  /* 121e1faf push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1fb5 push 0x122015f4 */
  push32((uint32_t)(0x122015f4u));
  /* 121e1fba push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e1fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fc1 call dword ptr [0x12208314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208314))), 0x121e1fc7u);
  /* 121e1fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1fc9 je 0x121e1fd7 */
  if (C.zf) goto L_121e1fd7;
  /* 121e1fcb mov dword ptr [0x122059d0], 1 */
  w32((uint32_t)(0x122059d0), (0x1u));
  /* 121e1fd5 jmp 0x121e2006 */
  goto L_121e2006;
L_121e1fd7:;
  /* 121e1fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fdb push 1 */
  push32((uint32_t)(0x1u));
  /* 121e1fdd push 0x122015f0 */
  push32((uint32_t)(0x122015f0u));
  /* 121e1fe2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e1fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e1fe9 call dword ptr [0x12208318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208318))), 0x121e1fefu);
  /* 121e1fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e1ff1 je 0x121e1fff */
  if (C.zf) goto L_121e1fff;
  /* 121e1ff3 mov dword ptr [0x122059d0], 2 */
  w32((uint32_t)(0x122059d0), (0x2u));
  /* 121e1ffd jmp 0x121e2006 */
  goto L_121e2006;
L_121e1fff:;
  /* 121e1fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2001 jmp 0x121e2271 */
  goto L_121e2271;
L_121e2006:;
  /* 121e2006 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e200a jle 0x121e201f */
  if ((C.zf||C.sf!=C.of)) goto L_121e201f;
  /* 121e200c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e200f push eax */
  push32((uint32_t)(EAX));
  /* 121e2010 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e2013 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2014 call 0x121e2290 */
  push32(0x121e2019u); f_121e2290();
  /* 121e2019 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e201c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_121e201f:;
  /* 121e201f cmp dword ptr [0x122059d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x122059d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2026 jne 0x121e204b */
  if (!C.zf) goto L_121e204b;
  /* 121e2028 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e202b push edx */
  push32((uint32_t)(EDX));
  /* 121e202c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e202f push eax */
  push32((uint32_t)(EAX));
  /* 121e2030 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e2033 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2034 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e2037 push edx */
  push32((uint32_t)(EDX));
  /* 121e2038 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e203b push eax */
  push32((uint32_t)(EAX));
  /* 121e203c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e203f push ecx */
  push32((uint32_t)(ECX));
  /* 121e2040 call dword ptr [0x12208318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208318))), 0x121e2046u);
  /* 121e2046 jmp 0x121e2271 */
  goto L_121e2271;
L_121e204b:;
  /* 121e204b cmp dword ptr [0x122059d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122059d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2052 jne 0x121e226f */
  if (!C.zf) goto L_121e226f;
  /* 121e2058 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e205c jne 0x121e2067 */
  if (!C.zf) goto L_121e2067;
  /* 121e205e mov edx, dword ptr [0x122059c8] */
  EDX = (r32((uint32_t)(0x122059c8)));
  /* 121e2064 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_121e2067:;
  /* 121e2067 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2069 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e206b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e206e push eax */
  push32((uint32_t)(EAX));
  /* 121e206f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e2072 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2073 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 121e2076 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e2078 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e207a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 121e207d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2080 push edx */
  push32((uint32_t)(EDX));
  /* 121e2081 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e2084 push eax */
  push32((uint32_t)(EAX));
  /* 121e2085 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e208bu);
  /* 121e208b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e208e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2092 jne 0x121e209b */
  if (!C.zf) goto L_121e209b;
  /* 121e2094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2096 jmp 0x121e2271 */
  goto L_121e2271;
L_121e209b:;
  /* 121e209b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e20a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e20a5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e20a7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e20aa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e20ac call 0x121dcd30 */
  push32(0x121e20b1u); f_121dcd30();
  /* 121e20b1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 121e20b4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e20b7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e20ba mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e20bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e20c4 jmp 0x121e20dd */
  goto L_121e20dd;
  /* 121e20c6 mov eax, 1 */
  EAX = (0x1u);
  /* 121e20cb ret  */
  ESPCHK(0x121e1f80u, _esp0);
  ESP += 4; return;
  /* 121e20cc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e20cf mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121e20d6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e20dd:;
  /* 121e20dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e20e1 jne 0x121e20ea */
  if (!C.zf) goto L_121e20ea;
  /* 121e20e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e20e5 jmp 0x121e2271 */
  goto L_121e2271;
L_121e20ea:;
  /* 121e20ea mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e20ed push edx */
  push32((uint32_t)(EDX));
  /* 121e20ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e20f1 push eax */
  push32((uint32_t)(EAX));
  /* 121e20f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e20f5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e20f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e20f9 push edx */
  push32((uint32_t)(EDX));
  /* 121e20fa push 1 */
  push32((uint32_t)(0x1u));
  /* 121e20fc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e20ff push eax */
  push32((uint32_t)(EAX));
  /* 121e2100 call dword ptr [0x12208324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208324))), 0x121e2106u);
  /* 121e2106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e2108 jne 0x121e2111 */
  if (!C.zf) goto L_121e2111;
  /* 121e210a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e210c jmp 0x121e2271 */
  goto L_121e2271;
L_121e2111:;
  /* 121e2111 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2113 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2115 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e2118 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2119 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e211c push edx */
  push32((uint32_t)(EDX));
  /* 121e211d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2120 push eax */
  push32((uint32_t)(EAX));
  /* 121e2121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2124 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2125 call dword ptr [0x12208314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208314))), 0x121e212bu);
  /* 121e212b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e212e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2132 jne 0x121e213b */
  if (!C.zf) goto L_121e213b;
  /* 121e2134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2136 jmp 0x121e2271 */
  goto L_121e2271;
L_121e213b:;
  /* 121e213b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e213e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 121e2144 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e2146 je 0x121e218b */
  if (C.zf) goto L_121e218b;
  /* 121e2148 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e214c je 0x121e2186 */
  if (C.zf) goto L_121e2186;
  /* 121e214e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e2151 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2154 jle 0x121e215d */
  if ((C.zf||C.sf!=C.of)) goto L_121e215d;
  /* 121e2156 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2158 jmp 0x121e2271 */
  goto L_121e2271;
L_121e215d:;
  /* 121e215d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e2160 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2161 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e2164 push edx */
  push32((uint32_t)(EDX));
  /* 121e2165 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e2168 push eax */
  push32((uint32_t)(EAX));
  /* 121e2169 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e216c push ecx */
  push32((uint32_t)(ECX));
  /* 121e216d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2170 push edx */
  push32((uint32_t)(EDX));
  /* 121e2171 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2174 push eax */
  push32((uint32_t)(EAX));
  /* 121e2175 call dword ptr [0x12208314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208314))), 0x121e217bu);
  /* 121e217b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e217d jne 0x121e2186 */
  if (!C.zf) goto L_121e2186;
  /* 121e217f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2181 jmp 0x121e2271 */
  goto L_121e2271;
L_121e2186:;
  /* 121e2186 jmp 0x121e226a */
  goto L_121e226a;
L_121e218b:;
  /* 121e218b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e218e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121e2191 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e2198 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e219b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e219d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e21a0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121e21a2 call 0x121dcd30 */
  push32(0x121e21a7u); f_121dcd30();
  /* 121e21a7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 121e21aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121e21ad mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121e21b0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121e21b3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e21ba jmp 0x121e21d3 */
  goto L_121e21d3;
  /* 121e21bc mov eax, 1 */
  EAX = (0x1u);
  /* 121e21c1 ret  */
  ESPCHK(0x121e1f80u, _esp0);
  ESP += 4; return;
  /* 121e21c2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121e21c5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121e21cc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e21d3:;
  /* 121e21d3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e21d7 jne 0x121e21e0 */
  if (!C.zf) goto L_121e21e0;
  /* 121e21d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e21db jmp 0x121e2271 */
  goto L_121e2271;
L_121e21e0:;
  /* 121e21e0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e21e3 push eax */
  push32((uint32_t)(EAX));
  /* 121e21e4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e21e7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e21e8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e21eb push edx */
  push32((uint32_t)(EDX));
  /* 121e21ec mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e21ef push eax */
  push32((uint32_t)(EAX));
  /* 121e21f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e21f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e21f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e21f7 push edx */
  push32((uint32_t)(EDX));
  /* 121e21f8 call dword ptr [0x12208314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208314))), 0x121e21feu);
  /* 121e21fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e2200 jne 0x121e2206 */
  if (!C.zf) goto L_121e2206;
  /* 121e2202 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2204 jmp 0x121e2271 */
  goto L_121e2271;
L_121e2206:;
  /* 121e2206 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e220a jne 0x121e223a */
  if (!C.zf) goto L_121e223a;
  /* 121e220c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e220e push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2210 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2212 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2214 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e2217 push eax */
  push32((uint32_t)(EAX));
  /* 121e2218 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e221b push ecx */
  push32((uint32_t)(ECX));
  /* 121e221c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e2221 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e2224 push edx */
  push32((uint32_t)(EDX));
  /* 121e2225 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e222bu);
  /* 121e222b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e222e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2232 jne 0x121e2238 */
  if (!C.zf) goto L_121e2238;
  /* 121e2234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2236 jmp 0x121e2271 */
  goto L_121e2271;
L_121e2238:;
  /* 121e2238 jmp 0x121e226a */
  goto L_121e226a;
L_121e223a:;
  /* 121e223a push 0 */
  push32((uint32_t)(0x0u));
  /* 121e223c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e223e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121e2241 push eax */
  push32((uint32_t)(EAX));
  /* 121e2242 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121e2245 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2246 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e2249 push edx */
  push32((uint32_t)(EDX));
  /* 121e224a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e224d push eax */
  push32((uint32_t)(EAX));
  /* 121e224e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e2253 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 121e2256 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2257 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e225du);
  /* 121e225d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e2260 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2264 jne 0x121e226a */
  if (!C.zf) goto L_121e226a;
  /* 121e2266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2268 jmp 0x121e2271 */
  goto L_121e2271;
L_121e226a:;
  /* 121e226a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e226d jmp 0x121e2271 */
  goto L_121e2271;
L_121e226f:;
  /* 121e226f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e2271:;
  /* 121e2271 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 121e2274 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e2277 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121e227e pop edi */
  EDI = (pop32());
  /* 121e227f pop esi */
  ESI = (pop32());
  /* 121e2280 pop ebx */
  EBX = (pop32());
  /* 121e2281 mov esp, ebp */
  ESP = (EBP);
  /* 121e2283 pop ebp */
  EBP = (pop32());
  /* 121e2284 ret  */
  ESPCHK(0x121e1f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012290 @ 0x121e2290 (80 bytes, 32 insns) */
void f_121e2290(void) {
  FTRACE(0x121e2290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2290 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2291 mov ebp, esp */
  EBP = (ESP);
  /* 121e2293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2296 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2299 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e229c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e229f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e22a2:;
  /* 121e22a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e22a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e22a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e22ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e22ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e22b0 je 0x121e22c7 */
  if (C.zf) goto L_121e22c7;
  /* 121e22b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e22b5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e22b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e22ba je 0x121e22c7 */
  if (C.zf) goto L_121e22c7;
  /* 121e22bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e22bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e22c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e22c5 jmp 0x121e22a2 */
  goto L_121e22a2;
L_121e22c7:;
  /* 121e22c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e22ca movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e22cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e22cf jne 0x121e22d9 */
  if (!C.zf) goto L_121e22d9;
  /* 121e22d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e22d4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e22d7 jmp 0x121e22dc */
  goto L_121e22dc;
L_121e22d9:;
  /* 121e22d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_121e22dc:;
  /* 121e22dc mov esp, ebp */
  ESP = (EBP);
  /* 121e22de pop ebp */
  EBP = (pop32());
  /* 121e22df ret  */
  ESPCHK(0x121e2290u, _esp0);
  ESP += 4; return;
}

/* FUN_100122e0 @ 0x121e22e0 (130 bytes, 43 insns) */
void f_121e22e0(void) {
  FTRACE(0x121e22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e22e1 mov ebp, esp */
  EBP = (ESP);
  /* 121e22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e22e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e22e7 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e22ed jae 0x121e2311 */
  if (!C.cf) goto L_121e2311;
  /* 121e22ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e22f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e22f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e22f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e22fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e22fe mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2305 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e230a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e230d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e230f jne 0x121e232c */
  if (!C.zf) goto L_121e232c;
L_121e2311:;
  /* 121e2311 call 0x121e1a60 */
  push32(0x121e2316u); f_121e1a60();
  /* 121e2316 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e231c call 0x121e1a70 */
  push32(0x121e2321u); f_121e1a70();
  /* 121e2321 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e2327 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e232a jmp 0x121e235e */
  goto L_121e235e;
L_121e232c:;
  /* 121e232c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e232f push edx */
  push32((uint32_t)(EDX));
  /* 121e2330 call 0x121e3280 */
  push32(0x121e2335u); f_121e3280();
  /* 121e2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e233b push eax */
  push32((uint32_t)(EAX));
  /* 121e233c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e233f push ecx */
  push32((uint32_t)(ECX));
  /* 121e2340 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2343 push edx */
  push32((uint32_t)(EDX));
  /* 121e2344 call 0x121e2370 */
  push32(0x121e2349u); f_121e2370();
  /* 121e2349 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e234c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e234f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2352 push eax */
  push32((uint32_t)(EAX));
  /* 121e2353 call 0x121e3310 */
  push32(0x121e2358u); f_121e3310();
  /* 121e2358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e235b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e235e:;
  /* 121e235e mov esp, ebp */
  ESP = (EBP);
  /* 121e2360 pop ebp */
  EBP = (pop32());
  /* 121e2361 ret  */
  ESPCHK(0x121e22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012370 @ 0x121e2370 (178 bytes, 56 insns) */
void f_121e2370(void) {
  FTRACE(0x121e2370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2370 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2371 mov ebp, esp */
  EBP = (ESP);
  /* 121e2373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2379 push eax */
  push32((uint32_t)(EAX));
  /* 121e237a call 0x121e3100 */
  push32(0x121e237fu); f_121e3100();
  /* 121e237f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e2385 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2389 jne 0x121e239e */
  if (!C.zf) goto L_121e239e;
  /* 121e238b call 0x121e1a60 */
  push32(0x121e2390u); f_121e1a60();
  /* 121e2390 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e2396 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2399 jmp 0x121e241e */
  goto L_121e241e;
L_121e239e:;
  /* 121e239e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e23a1 push ecx */
  push32((uint32_t)(ECX));
  /* 121e23a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e23a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e23a7 push edx */
  push32((uint32_t)(EDX));
  /* 121e23a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e23ab push eax */
  push32((uint32_t)(EAX));
  /* 121e23ac call dword ptr [0x12208310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208310))), 0x121e23b2u);
  /* 121e23b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e23b5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e23b9 jne 0x121e23c6 */
  if (!C.zf) goto L_121e23c6;
  /* 121e23bb call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e23c1u);
  /* 121e23c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e23c4 jmp 0x121e23cd */
  goto L_121e23cd;
L_121e23c6:;
  /* 121e23c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121e23cd:;
  /* 121e23cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e23d1 je 0x121e23e4 */
  if (C.zf) goto L_121e23e4;
  /* 121e23d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e23d6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e23d7 call 0x121e19c0 */
  push32(0x121e23dcu); f_121e19c0();
  /* 121e23dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e23df or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e23e2 jmp 0x121e241e */
  goto L_121e241e;
L_121e23e4:;
  /* 121e23e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e23e7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121e23ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e23ed and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121e23f0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e23f3 mov ecx, dword ptr [edx*4 + 0x122071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e23fa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 121e23fe and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 121e2401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2404 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e2407 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e240a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e240d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2410 mov eax, dword ptr [eax*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e2417 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 121e241b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e241e:;
  /* 121e241e mov esp, ebp */
  ESP = (EBP);
  /* 121e2420 pop ebp */
  EBP = (pop32());
  /* 121e2421 ret  */
  ESPCHK(0x121e2370u, _esp0);
  ESP += 4; return;
}

/* FUN_10012430 @ 0x121e2430 (130 bytes, 43 insns) */
void f_121e2430(void) {
  FTRACE(0x121e2430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2430 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2431 mov ebp, esp */
  EBP = (ESP);
  /* 121e2433 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2437 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e243d jae 0x121e2461 */
  if (!C.cf) goto L_121e2461;
  /* 121e243f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2442 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2448 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e244b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e244e mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2455 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e245a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e245d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e245f jne 0x121e247c */
  if (!C.zf) goto L_121e247c;
L_121e2461:;
  /* 121e2461 call 0x121e1a60 */
  push32(0x121e2466u); f_121e1a60();
  /* 121e2466 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e246c call 0x121e1a70 */
  push32(0x121e2471u); f_121e1a70();
  /* 121e2471 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e2477 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e247a jmp 0x121e24ae */
  goto L_121e24ae;
L_121e247c:;
  /* 121e247c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e247f push edx */
  push32((uint32_t)(EDX));
  /* 121e2480 call 0x121e3280 */
  push32(0x121e2485u); f_121e3280();
  /* 121e2485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2488 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e248b push eax */
  push32((uint32_t)(EAX));
  /* 121e248c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e248f push ecx */
  push32((uint32_t)(ECX));
  /* 121e2490 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2493 push edx */
  push32((uint32_t)(EDX));
  /* 121e2494 call 0x121e24c0 */
  push32(0x121e2499u); f_121e24c0();
  /* 121e2499 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e249c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e249f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e24a2 push eax */
  push32((uint32_t)(EAX));
  /* 121e24a3 call 0x121e3310 */
  push32(0x121e24a8u); f_121e3310();
  /* 121e24a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e24ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e24ae:;
  /* 121e24ae mov esp, ebp */
  ESP = (EBP);
  /* 121e24b0 pop ebp */
  EBP = (pop32());
  /* 121e24b1 ret  */
  ESPCHK(0x121e2430u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x121e24c0 (627 bytes, 182 insns) */
void f_121e24c0(void) {
  FTRACE(0x121e24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e24c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e24c3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e24c9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e24d0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e24d3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 121e24d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e24dd jne 0x121e24e6 */
  if (!C.zf) goto L_121e24e6;
  /* 121e24df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e24e1 jmp 0x121e272f */
  goto L_121e272f;
L_121e24e6:;
  /* 121e24e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e24e9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e24ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e24ef and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e24f2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e24f5 mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e24fc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e2501 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121e2504 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e2506 je 0x121e2518 */
  if (C.zf) goto L_121e2518;
  /* 121e2508 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e250a push 0 */
  push32((uint32_t)(0x0u));
  /* 121e250c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e250f push edx */
  push32((uint32_t)(EDX));
  /* 121e2510 call 0x121e2370 */
  push32(0x121e2515u); f_121e2370();
  /* 121e2515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e2518:;
  /* 121e2518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e251b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e251e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2521 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e2524 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2527 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e252e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121e2533 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 121e2538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e253a je 0x121e264c */
  if (C.zf) goto L_121e264c;
  /* 121e2540 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2543 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e2546 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_121e254d:;
  /* 121e254d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2550 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2553 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2556 jae 0x121e264a */
  if (!C.cf) goto L_121e264a;
  /* 121e255c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 121e2562 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e2565:;
  /* 121e2565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e2568 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 121e256e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2570 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2576 jge 0x121e25d7 */
  if ((C.sf==C.of)) goto L_121e25d7;
  /* 121e2578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e257b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e257e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2581 jae 0x121e25d7 */
  if (!C.cf) goto L_121e25d7;
  /* 121e2583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2586 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e2588 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 121e258e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2591 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2594 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e2597 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 121e259e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e25a1 jne 0x121e25c1 */
  if (!C.zf) goto L_121e25c1;
  /* 121e25a3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 121e25a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e25ac mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 121e25b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e25b5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 121e25b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e25bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e25be mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121e25c1:;
  /* 121e25c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e25c4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 121e25ca mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121e25cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e25cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e25d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e25d5 jmp 0x121e2565 */
  goto L_121e2565;
L_121e25d7:;
  /* 121e25d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e25d9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 121e25df push edx */
  push32((uint32_t)(EDX));
  /* 121e25e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e25e3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 121e25e9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e25eb push eax */
  push32((uint32_t)(EAX));
  /* 121e25ec lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 121e25f2 push edx */
  push32((uint32_t)(EDX));
  /* 121e25f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e25f6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e25f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e25fc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e25ff imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2602 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e2609 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 121e260c push eax */
  push32((uint32_t)(EAX));
  /* 121e260d call dword ptr [0x12208390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208390))), 0x121e2613u);
  /* 121e2613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e2615 je 0x121e263a */
  if (C.zf) goto L_121e263a;
  /* 121e2617 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e261a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2620 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121e2623 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e2626 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 121e262c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e262e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2634 jge 0x121e2638 */
  if ((C.sf==C.of)) goto L_121e2638;
  /* 121e2636 jmp 0x121e264a */
  goto L_121e264a;
L_121e2638:;
  /* 121e2638 jmp 0x121e2645 */
  goto L_121e2645;
L_121e263a:;
  /* 121e263a call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e2640u);
  /* 121e2640 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e2643 jmp 0x121e264a */
  goto L_121e264a;
L_121e2645:;
  /* 121e2645 jmp 0x121e254d */
  goto L_121e254d;
L_121e264a:;
  /* 121e264a jmp 0x121e269c */
  goto L_121e269c;
L_121e264c:;
  /* 121e264c push 0 */
  push32((uint32_t)(0x0u));
  /* 121e264e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 121e2654 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2655 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e2658 push edx */
  push32((uint32_t)(EDX));
  /* 121e2659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e265c push eax */
  push32((uint32_t)(EAX));
  /* 121e265d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2660 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2663 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2666 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e2669 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e266c mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2673 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 121e2676 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2677 call dword ptr [0x12208390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208390))), 0x121e267du);
  /* 121e267d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e267f je 0x121e2693 */
  if (C.zf) goto L_121e2693;
  /* 121e2681 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e2688 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 121e268e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121e2691 jmp 0x121e269c */
  goto L_121e269c;
L_121e2693:;
  /* 121e2693 call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e2699u);
  /* 121e2699 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e269c:;
  /* 121e269c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e26a0 jne 0x121e2726 */
  if (!C.zf) goto L_121e2726;
  /* 121e26a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e26aa je 0x121e26da */
  if (C.zf) goto L_121e26da;
  /* 121e26ac cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e26b0 jne 0x121e26c9 */
  if (!C.zf) goto L_121e26c9;
  /* 121e26b2 call 0x121e1a60 */
  push32(0x121e26b7u); f_121e1a60();
  /* 121e26b7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e26bd call 0x121e1a70 */
  push32(0x121e26c2u); f_121e1a70();
  /* 121e26c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e26c5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121e26c7 jmp 0x121e26d5 */
  goto L_121e26d5;
L_121e26c9:;
  /* 121e26c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e26cc push edx */
  push32((uint32_t)(EDX));
  /* 121e26cd call 0x121e19c0 */
  push32(0x121e26d2u); f_121e19c0();
  /* 121e26d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e26d5:;
  /* 121e26d5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e26d8 jmp 0x121e272f */
  goto L_121e272f;
L_121e26da:;
  /* 121e26da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e26dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e26e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e26e3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e26e6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e26e9 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e26f0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121e26f5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121e26f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e26fa je 0x121e270b */
  if (C.zf) goto L_121e270b;
  /* 121e26fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e26ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e2702 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2705 jne 0x121e270b */
  if (!C.zf) goto L_121e270b;
  /* 121e2707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2709 jmp 0x121e272f */
  goto L_121e272f;
L_121e270b:;
  /* 121e270b call 0x121e1a60 */
  push32(0x121e2710u); f_121e1a60();
  /* 121e2710 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 121e2716 call 0x121e1a70 */
  push32(0x121e271bu); f_121e1a70();
  /* 121e271b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e2721 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2724 jmp 0x121e272f */
  goto L_121e272f;
L_121e2726:;
  /* 121e2726 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e2729 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121e272f:;
  /* 121e272f mov esp, ebp */
  ESP = (EBP);
  /* 121e2731 pop ebp */
  EBP = (pop32());
  /* 121e2732 ret  */
  ESPCHK(0x121e24c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x121e2740 (199 bytes, 68 insns) */
void f_121e2740(void) {
  FTRACE(0x121e2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2740 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2741 mov ebp, esp */
  EBP = (ESP);
  /* 121e2743 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2744 push ebx */
  push32((uint32_t)(EBX));
  /* 121e2745 push esi */
  push32((uint32_t)(ESI));
  /* 121e2746 push edi */
  push32((uint32_t)(EDI));
L_121e2747:;
  /* 121e2747 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e274b jne 0x121e276b */
  if (!C.zf) goto L_121e276b;
  /* 121e274d push 0x12201554 */
  push32((uint32_t)(0x12201554u));
  /* 121e2752 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2754 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 121e2756 push 0x12201620 */
  push32((uint32_t)(0x12201620u));
  /* 121e275b push 2 */
  push32((uint32_t)(0x2u));
  /* 121e275d call 0x121d8c50 */
  push32(0x121e2762u); f_121d8c50();
  /* 121e2762 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2765 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2768 jne 0x121e276b */
  if (!C.zf) goto L_121e276b;
  /* 121e276a int3  */
  x86_unimpl("int3 @ 0x121e276a");
L_121e276b:;
  /* 121e276b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e276d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e276f jne 0x121e2747 */
  if (!C.zf) goto L_121e2747;
  /* 121e2771 mov ecx, dword ptr [0x122059d4] */
  ECX = (r32((uint32_t)(0x122059d4)));
  /* 121e2777 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e277a mov dword ptr [0x122059d4], ecx */
  w32((uint32_t)(0x122059d4), (ECX));
  /* 121e2780 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2783 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e2786 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 121e2788 push 0x12201620 */
  push32((uint32_t)(0x12201620u));
  /* 121e278d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e278f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 121e2794 call 0x121d9b90 */
  push32(0x121e2799u); f_121d9b90();
  /* 121e2799 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e279c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e279f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 121e27a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27a5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e27a9 je 0x121e27c6 */
  if (C.zf) goto L_121e27c6;
  /* 121e27ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27ae mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e27b1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 121e27b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27b7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 121e27ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27bd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 121e27c4 jmp 0x121e27eb */
  goto L_121e27eb;
L_121e27c6:;
  /* 121e27c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27c9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e27cc or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e27cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27d2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e27d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27d8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e27db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27de mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121e27e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27e4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_121e27eb:;
  /* 121e27eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e27f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e27f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e27f9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121e2800 pop edi */
  EDI = (pop32());
  /* 121e2801 pop esi */
  ESI = (pop32());
  /* 121e2802 pop ebx */
  EBX = (pop32());
  /* 121e2803 mov esp, ebp */
  ESP = (EBP);
  /* 121e2805 pop ebp */
  EBP = (pop32());
  /* 121e2806 ret  */
  ESPCHK(0x121e2740u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x121e2810 (50 bytes, 17 insns) */
void f_121e2810(void) {
  FTRACE(0x121e2810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2810 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2811 mov ebp, esp */
  EBP = (ESP);
  /* 121e2813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2816 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e281c jb 0x121e2822 */
  if (C.cf) goto L_121e2822;
  /* 121e281e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2820 jmp 0x121e2840 */
  goto L_121e2840;
L_121e2822:;
  /* 121e2822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2825 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2828 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e282b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e282e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2831 mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2838 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e283d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_121e2840:;
  /* 121e2840 pop ebp */
  EBP = (pop32());
  /* 121e2841 ret  */
  ESPCHK(0x121e2810u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x121e2850 (300 bytes, 80 insns) */
void f_121e2850(void) {
  FTRACE(0x121e2850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2850 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2851 mov ebp, esp */
  EBP = (ESP);
  /* 121e2853 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2854 cmp dword ptr [0x12206ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12206ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e285b jne 0x121e2869 */
  if (!C.zf) goto L_121e2869;
  /* 121e285d mov dword ptr [0x12206ea0], 0x200 */
  w32((uint32_t)(0x12206ea0), (0x200u));
  /* 121e2867 jmp 0x121e287c */
  goto L_121e287c;
L_121e2869:;
  /* 121e2869 cmp dword ptr [0x12206ea0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12206ea0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2870 jge 0x121e287c */
  if ((C.sf==C.of)) goto L_121e287c;
  /* 121e2872 mov dword ptr [0x12206ea0], 0x14 */
  w32((uint32_t)(0x12206ea0), (0x14u));
L_121e287c:;
  /* 121e287c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 121e2881 push 0x1220162c */
  push32((uint32_t)(0x1220162cu));
  /* 121e2886 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e2888 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e288a mov eax, dword ptr [0x12206ea0] */
  EAX = (r32((uint32_t)(0x12206ea0)));
  /* 121e288f push eax */
  push32((uint32_t)(EAX));
  /* 121e2890 call 0x121d9fa0 */
  push32(0x121e2895u); f_121d9fa0();
  /* 121e2895 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2898 mov dword ptr [0x12205b48], eax */
  w32((uint32_t)(0x12205b48), (EAX));
  /* 121e289d cmp dword ptr [0x12205b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e28a4 jne 0x121e28e5 */
  if (!C.zf) goto L_121e28e5;
  /* 121e28a6 mov dword ptr [0x12206ea0], 0x14 */
  w32((uint32_t)(0x12206ea0), (0x14u));
  /* 121e28b0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 121e28b5 push 0x1220162c */
  push32((uint32_t)(0x1220162cu));
  /* 121e28ba push 2 */
  push32((uint32_t)(0x2u));
  /* 121e28bc push 4 */
  push32((uint32_t)(0x4u));
  /* 121e28be mov ecx, dword ptr [0x12206ea0] */
  ECX = (r32((uint32_t)(0x12206ea0)));
  /* 121e28c4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e28c5 call 0x121d9fa0 */
  push32(0x121e28cau); f_121d9fa0();
  /* 121e28ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e28cd mov dword ptr [0x12205b48], eax */
  w32((uint32_t)(0x12205b48), (EAX));
  /* 121e28d2 cmp dword ptr [0x12205b48], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e28d9 jne 0x121e28e5 */
  if (!C.zf) goto L_121e28e5;
  /* 121e28db push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121e28dd call 0x121d8b00 */
  push32(0x121e28e2u); f_121d8b00();
  /* 121e28e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e28e5:;
  /* 121e28e5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e28ec jmp 0x121e28f7 */
  goto L_121e28f7;
L_121e28ee:;
  /* 121e28ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e28f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e28f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e28f7:;
  /* 121e28f7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e28fb jge 0x121e2916 */
  if ((C.sf==C.of)) goto L_121e2916;
  /* 121e28fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2900 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e2903 add eax, 0x12204120 */
  { uint32_t _a=(EAX),_b=(0x12204120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2908 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e290b mov edx, dword ptr [0x12205b48] */
  EDX = (r32((uint32_t)(0x12205b48)));
  /* 121e2911 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 121e2914 jmp 0x121e28ee */
  goto L_121e28ee;
L_121e2916:;
  /* 121e2916 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e291d jmp 0x121e2928 */
  goto L_121e2928;
L_121e291f:;
  /* 121e291f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2922 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2925 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e2928:;
  /* 121e2928 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e292c jge 0x121e2978 */
  if ((C.sf==C.of)) goto L_121e2978;
  /* 121e292e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2931 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2934 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2937 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e293a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e293d mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2944 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2948 je 0x121e2966 */
  if (C.zf) goto L_121e2966;
  /* 121e294a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e294d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2950 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2953 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e2956 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2959 mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2960 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2964 jne 0x121e2976 */
  if (!C.zf) goto L_121e2976;
L_121e2966:;
  /* 121e2966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2969 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e296c mov dword ptr [ecx + 0x12204130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12204130), (0xffffffffu));
L_121e2976:;
  /* 121e2976 jmp 0x121e291f */
  goto L_121e291f;
L_121e2978:;
  /* 121e2978 mov esp, ebp */
  ESP = (EBP);
  /* 121e297a pop ebp */
  EBP = (pop32());
  /* 121e297b ret  */
  ESPCHK(0x121e2850u, _esp0);
  ESP += 4; return;
}

/* FUN_10012980 @ 0x121e2980 (26 bytes, 9 insns) */
void f_121e2980(void) {
  FTRACE(0x121e2980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2980 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2981 mov ebp, esp */
  EBP = (ESP);
  /* 121e2983 call 0x121e3580 */
  push32(0x121e2988u); f_121e3580();
  /* 121e2988 movsx eax, byte ptr [0x122057ec] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x122057ec))));
  /* 121e298f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e2991 je 0x121e2998 */
  if (C.zf) goto L_121e2998;
  /* 121e2993 call 0x121e3340 */
  push32(0x121e2998u); f_121e3340();
L_121e2998:;
  /* 121e2998 pop ebp */
  EBP = (pop32());
  /* 121e2999 ret  */
  ESPCHK(0x121e2980u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x121e29a0 (61 bytes, 20 insns) */
void f_121e29a0(void) {
  FTRACE(0x121e29a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e29a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e29a1 mov ebp, esp */
  EBP = (ESP);
  /* 121e29a3 cmp dword ptr [ebp + 8], 0x12204120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12204120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e29aa jb 0x121e29ce */
  if (C.cf) goto L_121e29ce;
  /* 121e29ac cmp dword ptr [ebp + 8], 0x12204380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12204380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e29b3 ja 0x121e29ce */
  if ((!C.cf&&!C.zf)) goto L_121e29ce;
  /* 121e29b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e29b8 sub eax, 0x12204120 */
  { uint32_t _a=(EAX),_b=(0x12204120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e29bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e29c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e29c3 push eax */
  push32((uint32_t)(EAX));
  /* 121e29c4 call 0x121dd590 */
  push32(0x121e29c9u); f_121dd590();
  /* 121e29c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e29cc jmp 0x121e29db */
  goto L_121e29db;
L_121e29ce:;
  /* 121e29ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e29d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e29d4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e29d5 call dword ptr [0x1220834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220834c))), 0x121e29dbu);
L_121e29db:;
  /* 121e29db pop ebp */
  EBP = (pop32());
  /* 121e29dc ret  */
  ESPCHK(0x121e29a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100129e0 @ 0x121e29e0 (41 bytes, 16 insns) */
void f_121e29e0(void) {
  FTRACE(0x121e29e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e29e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e29e1 mov ebp, esp */
  EBP = (ESP);
  /* 121e29e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e29e7 jge 0x121e29fa */
  if ((C.sf==C.of)) goto L_121e29fa;
  /* 121e29e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e29ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e29ef push eax */
  push32((uint32_t)(EAX));
  /* 121e29f0 call 0x121dd590 */
  push32(0x121e29f5u); f_121dd590();
  /* 121e29f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e29f8 jmp 0x121e2a07 */
  goto L_121e2a07;
L_121e29fa:;
  /* 121e29fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e29fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a00 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2a01 call dword ptr [0x1220834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220834c))), 0x121e2a07u);
L_121e2a07:;
  /* 121e2a07 pop ebp */
  EBP = (pop32());
  /* 121e2a08 ret  */
  ESPCHK(0x121e29e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x121e2a10 (61 bytes, 20 insns) */
void f_121e2a10(void) {
  FTRACE(0x121e2a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2a10 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2a11 mov ebp, esp */
  EBP = (ESP);
  /* 121e2a13 cmp dword ptr [ebp + 8], 0x12204120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12204120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2a1a jb 0x121e2a3e */
  if (C.cf) goto L_121e2a3e;
  /* 121e2a1c cmp dword ptr [ebp + 8], 0x12204380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12204380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2a23 ja 0x121e2a3e */
  if ((!C.cf&&!C.zf)) goto L_121e2a3e;
  /* 121e2a25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2a28 sub eax, 0x12204120 */
  { uint32_t _a=(EAX),_b=(0x12204120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2a2d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e2a30 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a33 push eax */
  push32((uint32_t)(EAX));
  /* 121e2a34 call 0x121dd630 */
  push32(0x121e2a39u); f_121dd630();
  /* 121e2a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a3c jmp 0x121e2a4b */
  goto L_121e2a4b;
L_121e2a3e:;
  /* 121e2a3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2a41 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a44 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2a45 call dword ptr [0x12208348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208348))), 0x121e2a4bu);
L_121e2a4b:;
  /* 121e2a4b pop ebp */
  EBP = (pop32());
  /* 121e2a4c ret  */
  ESPCHK(0x121e2a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x121e2a50 (41 bytes, 16 insns) */
void f_121e2a50(void) {
  FTRACE(0x121e2a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2a50 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2a51 mov ebp, esp */
  EBP = (ESP);
  /* 121e2a53 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2a57 jge 0x121e2a6a */
  if ((C.sf==C.of)) goto L_121e2a6a;
  /* 121e2a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2a5c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a5f push eax */
  push32((uint32_t)(EAX));
  /* 121e2a60 call 0x121dd630 */
  push32(0x121e2a65u); f_121dd630();
  /* 121e2a65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a68 jmp 0x121e2a77 */
  goto L_121e2a77;
L_121e2a6a:;
  /* 121e2a6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2a6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2a70 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2a71 call dword ptr [0x12208348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208348))), 0x121e2a77u);
L_121e2a77:;
  /* 121e2a77 pop ebp */
  EBP = (pop32());
  /* 121e2a78 ret  */
  ESPCHK(0x121e2a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a80 @ 0x121e2a80 (119 bytes, 34 insns) */
void f_121e2a80(void) {
  FTRACE(0x121e2a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2a80 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2a81 mov ebp, esp */
  EBP = (ESP);
  /* 121e2a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2a86 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e2a8b call dword ptr [0x122083a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083a4))), 0x121e2a91u);
  /* 121e2a91 cmp dword ptr [0x12205b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2a98 je 0x121e2ab8 */
  if (C.zf) goto L_121e2ab8;
  /* 121e2a9a push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e2a9f call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e2aa5u);
  /* 121e2aa5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e2aa7 call 0x121dd590 */
  push32(0x121e2aacu); f_121dd590();
  /* 121e2aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2aaf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e2ab6 jmp 0x121e2abf */
  goto L_121e2abf;
L_121e2ab8:;
  /* 121e2ab8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121e2abf:;
  /* 121e2abf mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 121e2ac3 push eax */
  push32((uint32_t)(EAX));
  /* 121e2ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2ac8 call 0x121e2b00 */
  push32(0x121e2acdu); f_121e2b00();
  /* 121e2acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2ad0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e2ad3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2ad7 je 0x121e2ae5 */
  if (C.zf) goto L_121e2ae5;
  /* 121e2ad9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e2adb call 0x121dd630 */
  push32(0x121e2ae0u); f_121dd630();
  /* 121e2ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2ae3 jmp 0x121e2af0 */
  goto L_121e2af0;
L_121e2ae5:;
  /* 121e2ae5 push 0x12205b44 */
  push32((uint32_t)(0x12205b44u));
  /* 121e2aea call dword ptr [0x12208394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208394))), 0x121e2af0u);
L_121e2af0:;
  /* 121e2af0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e2af3 mov esp, ebp */
  ESP = (EBP);
  /* 121e2af5 pop ebp */
  EBP = (pop32());
  /* 121e2af6 ret  */
  ESPCHK(0x121e2a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b00 @ 0x121e2b00 (160 bytes, 50 insns) */
void f_121e2b00(void) {
  FTRACE(0x121e2b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2b00 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2b01 mov ebp, esp */
  EBP = (ESP);
  /* 121e2b03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2b06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2b0a jne 0x121e2b13 */
  if (!C.zf) goto L_121e2b13;
  /* 121e2b0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2b0e jmp 0x121e2b9c */
  goto L_121e2b9c;
L_121e2b13:;
  /* 121e2b13 cmp dword ptr [0x122059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2b1a jne 0x121e2b4a */
  if (!C.zf) goto L_121e2b4a;
  /* 121e2b1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2b1f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2b24 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2b29 jle 0x121e2b3b */
  if ((C.zf||C.sf!=C.of)) goto L_121e2b3b;
  /* 121e2b2b call 0x121e1a60 */
  push32(0x121e2b30u); f_121e1a60();
  /* 121e2b30 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 121e2b36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2b39 jmp 0x121e2b9c */
  goto L_121e2b9c;
L_121e2b3b:;
  /* 121e2b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2b3e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 121e2b41 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 121e2b43 mov eax, 1 */
  EAX = (0x1u);
  /* 121e2b48 jmp 0x121e2b9c */
  goto L_121e2b9c;
L_121e2b4a:;
  /* 121e2b4a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e2b51 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121e2b54 push eax */
  push32((uint32_t)(EAX));
  /* 121e2b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2b57 mov ecx, dword ptr [0x12203ea4] */
  ECX = (r32((uint32_t)(0x12203ea4)));
  /* 121e2b5d push ecx */
  push32((uint32_t)(ECX));
  /* 121e2b5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2b61 push edx */
  push32((uint32_t)(EDX));
  /* 121e2b62 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e2b64 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 121e2b67 push eax */
  push32((uint32_t)(EAX));
  /* 121e2b68 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121e2b6d mov ecx, dword ptr [0x122059c8] */
  ECX = (r32((uint32_t)(0x122059c8)));
  /* 121e2b73 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2b74 call dword ptr [0x12208370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208370))), 0x121e2b7au);
  /* 121e2b7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e2b7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2b81 je 0x121e2b89 */
  if (C.zf) goto L_121e2b89;
  /* 121e2b83 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2b87 je 0x121e2b99 */
  if (C.zf) goto L_121e2b99;
L_121e2b89:;
  /* 121e2b89 call 0x121e1a60 */
  push32(0x121e2b8eu); f_121e1a60();
  /* 121e2b8e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 121e2b94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2b97 jmp 0x121e2b9c */
  goto L_121e2b9c;
L_121e2b99:;
  /* 121e2b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e2b9c:;
  /* 121e2b9c mov esp, ebp */
  ESP = (EBP);
  /* 121e2b9e pop ebp */
  EBP = (pop32());
  /* 121e2b9f ret  */
  ESPCHK(0x121e2b00u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x121e2ba0 (32 bytes, 18 insns) */
void f_121e2ba0(void) {
  FTRACE(0x121e2ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2ba1 mov ebp, esp */
  EBP = (ESP);
  /* 121e2ba3 push ebx */
  push32((uint32_t)(EBX));
  /* 121e2ba4 push esi */
  push32((uint32_t)(ESI));
  /* 121e2ba5 push edi */
  push32((uint32_t)(EDI));
  /* 121e2ba6 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e2bab push 0x121e2bb8 */
  push32((uint32_t)(0x121e2bb8u));
  /* 121e2bb0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 121e2bb3 call 0x121ea2ec */
  push32(0x121e2bb8u); f_121ea2ec();
  /* 121e2bb8 pop ebp */
  EBP = (pop32());
  /* 121e2bb9 pop edi */
  EDI = (pop32());
  /* 121e2bba pop esi */
  ESI = (pop32());
  /* 121e2bbb pop ebx */
  EBX = (pop32());
  /* 121e2bbc mov esp, ebp */
  ESP = (EBP);
  /* 121e2bbe pop ebp */
  EBP = (pop32());
  /* 121e2bbf ret  */
  ESPCHK(0x121e2ba0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x121e2be2 (104 bytes, 33 insns) */
void f_121e2be2(void) {
  FTRACE(0x121e2be2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2be2 push ebx */
  push32((uint32_t)(EBX));
  /* 121e2be3 push esi */
  push32((uint32_t)(ESI));
  /* 121e2be4 push edi */
  push32((uint32_t)(EDI));
  /* 121e2be5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 121e2be9 push eax */
  push32((uint32_t)(EAX));
  /* 121e2bea push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 121e2bec push 0x121e2bc0 */
  push32((uint32_t)(0x121e2bc0u));
  /* 121e2bf1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 121e2bf8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_121e2bff:;
  /* 121e2bff mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 121e2c03 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e2c06 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 121e2c09 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2c0c je 0x121e2c3c */
  if (C.zf) goto L_121e2c3c;
  /* 121e2c0e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2c12 je 0x121e2c3c */
  if (C.zf) goto L_121e2c3c;
  /* 121e2c14 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 121e2c17 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 121e2c1a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 121e2c1e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 121e2c21 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2c26 jne 0x121e2c3a */
  if (!C.zf) goto L_121e2c3a;
  /* 121e2c28 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 121e2c2d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 121e2c31 call 0x121e2c76 */
  push32(0x121e2c36u); f_121e2c76();
  /* 121e2c36 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x121e2c3au);
L_121e2c3a:;
  /* 121e2c3a jmp 0x121e2bff */
  goto L_121e2bff;
L_121e2c3c:;
  /* 121e2c3c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 121e2c43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2c46 pop edi */
  EDI = (pop32());
  /* 121e2c47 pop esi */
  ESI = (pop32());
  /* 121e2c48 pop ebx */
  EBX = (pop32());
  /* 121e2c49 ret  */
  ESPCHK(0x121e2be2u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c76 @ 0x121e2c76 (24 bytes, 10 insns) */
void f_121e2c76(void) {
  FTRACE(0x121e2c76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2c76 push ebx */
  push32((uint32_t)(EBX));
  /* 121e2c77 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2c78 mov ebx, 0x122043b8 */
  EBX = (0x122043b8u);
  /* 121e2c7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2c80 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 121e2c83 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 121e2c86 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 121e2c89 pop ecx */
  ECX = (pop32());
  /* 121e2c8a pop ebx */
  EBX = (pop32());
  /* 121e2c8b ret 4 */
  ESPCHK(0x121e2c76u, _esp0);
  ESP += 8; return;
}

/* FUN_10012d55 @ 0x121e2d55 (27 bytes, 11 insns) */
void f_121e2d55(void) {
  FTRACE(0x121e2d55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2d55 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2d56 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e2d5a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 121e2d5c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121e2d5f push eax */
  push32((uint32_t)(EAX));
  /* 121e2d60 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 121e2d63 push eax */
  push32((uint32_t)(EAX));
  /* 121e2d64 call 0x121e2be2 */
  push32(0x121e2d69u); f_121e2be2();
  /* 121e2d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2d6c pop ebp */
  EBP = (pop32());
  /* 121e2d6d ret 4 */
  ESPCHK(0x121e2d55u, _esp0);
  ESP += 8; return;
}

/* FUN_10012d70 @ 0x121e2d70 (482 bytes, 138 insns) */
void f_121e2d70(void) {
  FTRACE(0x121e2d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2d70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2d71 mov ebp, esp */
  EBP = (ESP);
  /* 121e2d73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2d76 push esi */
  push32((uint32_t)(ESI));
  /* 121e2d77 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 121e2d7e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121e2d80 call 0x121dd590 */
  push32(0x121e2d85u); f_121dd590();
  /* 121e2d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2d88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e2d8f jmp 0x121e2d9a */
  goto L_121e2d9a;
L_121e2d91:;
  /* 121e2d91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2d94 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2d97 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e2d9a:;
  /* 121e2d9a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2d9e jge 0x121e2f40 */
  if ((C.sf==C.of)) goto L_121e2f40;
  /* 121e2da4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2da7 cmp dword ptr [ecx*4 + 0x122071a0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x122071a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2daf je 0x121e2ea6 */
  if (C.zf) goto L_121e2ea6;
  /* 121e2db5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2db8 mov eax, dword ptr [edx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e2dbf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e2dc2 jmp 0x121e2dcd */
  goto L_121e2dcd;
L_121e2dc4:;
  /* 121e2dc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2dc7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2dca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e2dcd:;
  /* 121e2dcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2dd0 mov eax, dword ptr [edx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e2dd7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2ddc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2ddf jae 0x121e2e96 */
  if (!C.cf) goto L_121e2e96;
  /* 121e2de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2de8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121e2dec and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121e2def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e2df1 jne 0x121e2e91 */
  if (!C.zf) goto L_121e2e91;
  /* 121e2df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2dfa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2dfe jne 0x121e2e39 */
  if (!C.zf) goto L_121e2e39;
  /* 121e2e00 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121e2e02 call 0x121dd590 */
  push32(0x121e2e07u); f_121dd590();
  /* 121e2e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e0d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2e11 jne 0x121e2e2f */
  if (!C.zf) goto L_121e2e2f;
  /* 121e2e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e16 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e19 push edx */
  push32((uint32_t)(EDX));
  /* 121e2e1a call dword ptr [0x12208350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208350))), 0x121e2e20u);
  /* 121e2e20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e2e26 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_121e2e2f:;
  /* 121e2e2f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121e2e31 call 0x121dd630 */
  push32(0x121e2e36u); f_121dd630();
  /* 121e2e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e2e39:;
  /* 121e2e39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e3f push eax */
  push32((uint32_t)(EAX));
  /* 121e2e40 call dword ptr [0x1220834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220834c))), 0x121e2e46u);
  /* 121e2e46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e49 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121e2e4d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121e2e50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e2e52 je 0x121e2e66 */
  if (C.zf) goto L_121e2e66;
  /* 121e2e54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e57 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e5a push eax */
  push32((uint32_t)(EAX));
  /* 121e2e5b call dword ptr [0x12208348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208348))), 0x121e2e61u);
  /* 121e2e61 jmp 0x121e2dc4 */
  goto L_121e2dc4;
L_121e2e66:;
  /* 121e2e66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e69 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121e2e6f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2e72 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2e75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2e7b sub eax, dword ptr [edx*4 + 0x122071a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x122071a0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e2e82 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e2e83 mov esi, 0x24 */
  ESI = (0x24u);
  /* 121e2e88 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121e2e8a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2e8c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e2e8f jmp 0x121e2e96 */
  goto L_121e2e96;
L_121e2e91:;
  /* 121e2e91 jmp 0x121e2dc4 */
  goto L_121e2dc4;
L_121e2e96:;
  /* 121e2e96 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2e9a je 0x121e2ea1 */
  if (C.zf) goto L_121e2ea1;
  /* 121e2e9c jmp 0x121e2f40 */
  goto L_121e2f40;
L_121e2ea1:;
  /* 121e2ea1 jmp 0x121e2f3b */
  goto L_121e2f3b;
L_121e2ea6:;
  /* 121e2ea6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 121e2ea8 push 0x12201634 */
  push32((uint32_t)(0x12201634u));
  /* 121e2ead push 2 */
  push32((uint32_t)(0x2u));
  /* 121e2eaf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 121e2eb4 call 0x121d9b90 */
  push32(0x121e2eb9u); f_121d9b90();
  /* 121e2eb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2ebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e2ebf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2ec3 je 0x121e2f39 */
  if (C.zf) goto L_121e2f39;
  /* 121e2ec5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2ec8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2ecb mov dword ptr [eax*4 + 0x122071a0], ecx */
  w32((uint32_t)(EAX*4 + 0x122071a0), (ECX));
  /* 121e2ed2 mov edx, dword ptr [0x122072dc] */
  EDX = (r32((uint32_t)(0x122072dc)));
  /* 121e2ed8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2edb mov dword ptr [0x122072dc], edx */
  w32((uint32_t)(0x122072dc), (EDX));
  /* 121e2ee1 jmp 0x121e2eec */
  goto L_121e2eec;
L_121e2ee3:;
  /* 121e2ee3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2ee6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2ee9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e2eec:;
  /* 121e2eec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2eef mov edx, dword ptr [ecx*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2ef6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2efc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2eff jae 0x121e2f24 */
  if (!C.cf) goto L_121e2f24;
  /* 121e2f01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2f04 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 121e2f08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2f0b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121e2f11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2f14 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 121e2f18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e2f1b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 121e2f22 jmp 0x121e2ee3 */
  goto L_121e2ee3;
L_121e2f24:;
  /* 121e2f24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e2f27 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2f2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e2f2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e2f30 push edx */
  push32((uint32_t)(EDX));
  /* 121e2f31 call 0x121e3280 */
  push32(0x121e2f36u); f_121e3280();
  /* 121e2f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e2f39:;
  /* 121e2f39 jmp 0x121e2f40 */
  goto L_121e2f40;
L_121e2f3b:;
  /* 121e2f3b jmp 0x121e2d91 */
  goto L_121e2d91;
L_121e2f40:;
  /* 121e2f40 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121e2f42 call 0x121dd630 */
  push32(0x121e2f47u); f_121dd630();
  /* 121e2f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e2f4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e2f4d pop esi */
  ESI = (pop32());
  /* 121e2f4e mov esp, ebp */
  ESP = (EBP);
  /* 121e2f50 pop ebp */
  EBP = (pop32());
  /* 121e2f51 ret  */
  ESPCHK(0x121e2d70u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x121e2f60 (183 bytes, 57 insns) */
void f_121e2f60(void) {
  FTRACE(0x121e2f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e2f60 push ebp */
  push32((uint32_t)(EBP));
  /* 121e2f61 mov ebp, esp */
  EBP = (ESP);
  /* 121e2f63 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2f64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2f67 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2f6d jae 0x121e2ffa */
  if (!C.cf) goto L_121e2ffa;
  /* 121e2f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2f76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e2f79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2f7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e2f7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2f82 mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e2f89 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2f8d jne 0x121e2ffa */
  if (!C.zf) goto L_121e2ffa;
  /* 121e2f8f cmp dword ptr [0x122057ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122057ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2f96 jne 0x121e2fda */
  if (!C.zf) goto L_121e2fda;
  /* 121e2f98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2f9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e2f9e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2fa2 je 0x121e2fb2 */
  if (C.zf) goto L_121e2fb2;
  /* 121e2fa4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2fa8 je 0x121e2fc0 */
  if (C.zf) goto L_121e2fc0;
  /* 121e2faa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e2fae je 0x121e2fce */
  if (C.zf) goto L_121e2fce;
  /* 121e2fb0 jmp 0x121e2fda */
  goto L_121e2fda;
L_121e2fb2:;
  /* 121e2fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2fb5 push edx */
  push32((uint32_t)(EDX));
  /* 121e2fb6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 121e2fb8 call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e2fbeu);
  /* 121e2fbe jmp 0x121e2fda */
  goto L_121e2fda;
L_121e2fc0:;
  /* 121e2fc0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2fc3 push eax */
  push32((uint32_t)(EAX));
  /* 121e2fc4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 121e2fc6 call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e2fccu);
  /* 121e2fcc jmp 0x121e2fda */
  goto L_121e2fda;
L_121e2fce:;
  /* 121e2fce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 121e2fd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 121e2fd4 call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e2fdau);
L_121e2fda:;
  /* 121e2fda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2fdd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121e2fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e2fe3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121e2fe6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e2fe9 mov ecx, dword ptr [edx*4 + 0x122071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e2ff0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e2ff3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 121e2ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e2ff8 jmp 0x121e3013 */
  goto L_121e3013;
L_121e2ffa:;
  /* 121e2ffa call 0x121e1a60 */
  push32(0x121e2fffu); f_121e1a60();
  /* 121e2fff mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e3005 call 0x121e1a70 */
  push32(0x121e300au); f_121e1a70();
  /* 121e300a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e3010 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121e3013:;
  /* 121e3013 mov esp, ebp */
  ESP = (EBP);
  /* 121e3015 pop ebp */
  EBP = (pop32());
  /* 121e3016 ret  */
  ESPCHK(0x121e2f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013020 @ 0x121e3020 (216 bytes, 63 insns) */
void f_121e3020(void) {
  FTRACE(0x121e3020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3020 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3021 mov ebp, esp */
  EBP = (ESP);
  /* 121e3023 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3027 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e302d jae 0x121e30db */
  if (!C.cf) goto L_121e30db;
  /* 121e3033 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3036 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e3039 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e303c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e303f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3042 mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e3049 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e304e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e3051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e3053 je 0x121e30db */
  if (C.zf) goto L_121e30db;
  /* 121e3059 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e305c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121e305f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3062 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121e3065 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3068 mov ecx, dword ptr [edx*4 + 0x122071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e306f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3073 je 0x121e30db */
  if (C.zf) goto L_121e30db;
  /* 121e3075 cmp dword ptr [0x122057ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x122057ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e307c jne 0x121e30ba */
  if (!C.zf) goto L_121e30ba;
  /* 121e307e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3081 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e3084 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3088 je 0x121e3098 */
  if (C.zf) goto L_121e3098;
  /* 121e308a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e308e je 0x121e30a4 */
  if (C.zf) goto L_121e30a4;
  /* 121e3090 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3094 je 0x121e30b0 */
  if (C.zf) goto L_121e30b0;
  /* 121e3096 jmp 0x121e30ba */
  goto L_121e30ba;
L_121e3098:;
  /* 121e3098 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e309a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 121e309c call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e30a2u);
  /* 121e30a2 jmp 0x121e30ba */
  goto L_121e30ba;
L_121e30a4:;
  /* 121e30a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e30a6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 121e30a8 call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e30aeu);
  /* 121e30ae jmp 0x121e30ba */
  goto L_121e30ba;
L_121e30b0:;
  /* 121e30b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e30b2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 121e30b4 call dword ptr [0x12208308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208308))), 0x121e30bau);
L_121e30ba:;
  /* 121e30ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e30bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e30c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e30c3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e30c6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e30c9 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e30d0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 121e30d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e30d9 jmp 0x121e30f4 */
  goto L_121e30f4;
L_121e30db:;
  /* 121e30db call 0x121e1a60 */
  push32(0x121e30e0u); f_121e1a60();
  /* 121e30e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e30e6 call 0x121e1a70 */
  push32(0x121e30ebu); f_121e1a70();
  /* 121e30eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e30f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121e30f4:;
  /* 121e30f4 mov esp, ebp */
  ESP = (EBP);
  /* 121e30f6 pop ebp */
  EBP = (pop32());
  /* 121e30f7 ret  */
  ESPCHK(0x121e3020u, _esp0);
  ESP += 4; return;
}

/* FUN_10013100 @ 0x121e3100 (102 bytes, 30 insns) */
void f_121e3100(void) {
  FTRACE(0x121e3100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3100 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3101 mov ebp, esp */
  EBP = (ESP);
  /* 121e3103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3106 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e310c jae 0x121e314b */
  if (!C.cf) goto L_121e314b;
  /* 121e310e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3111 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e3114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3117 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e311a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e311d mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e3124 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e3129 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e312c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e312e je 0x121e314b */
  if (C.zf) goto L_121e314b;
  /* 121e3130 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3133 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121e3136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3139 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121e313c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e313f mov ecx, dword ptr [edx*4 + 0x122071a0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x122071a0)));
  /* 121e3146 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 121e3149 jmp 0x121e3164 */
  goto L_121e3164;
L_121e314b:;
  /* 121e314b call 0x121e1a60 */
  push32(0x121e3150u); f_121e1a60();
  /* 121e3150 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e3156 call 0x121e1a70 */
  push32(0x121e315bu); f_121e1a70();
  /* 121e315b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e3161 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121e3164:;
  /* 121e3164 pop ebp */
  EBP = (pop32());
  /* 121e3165 ret  */
  ESPCHK(0x121e3100u, _esp0);
  ESP += 4; return;
}

/* FUN_10013170 @ 0x121e3170 (260 bytes, 83 insns) */
void f_121e3170(void) {
  FTRACE(0x121e3170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3170 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3171 mov ebp, esp */
  EBP = (ESP);
  /* 121e3173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3176 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e317a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e317d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 121e3180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3182 je 0x121e318d */
  if (C.zf) goto L_121e318d;
  /* 121e3184 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e3187 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121e318a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_121e318d:;
  /* 121e318d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3190 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e3196 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e3198 je 0x121e31a2 */
  if (C.zf) goto L_121e31a2;
  /* 121e319a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e319d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 121e319f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_121e31a2:;
  /* 121e31a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e31a5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 121e31ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e31ad je 0x121e31b8 */
  if (C.zf) goto L_121e31b8;
  /* 121e31af mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e31b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 121e31b5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_121e31b8:;
  /* 121e31b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e31bb push eax */
  push32((uint32_t)(EAX));
  /* 121e31bc call dword ptr [0x122083d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083d8))), 0x121e31c2u);
  /* 121e31c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e31c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e31c9 jne 0x121e31e2 */
  if (!C.zf) goto L_121e31e2;
  /* 121e31cb call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e31d1u);
  /* 121e31d1 push eax */
  push32((uint32_t)(EAX));
  /* 121e31d2 call 0x121e19c0 */
  push32(0x121e31d7u); f_121e19c0();
  /* 121e31d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e31da or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e31dd jmp 0x121e3270 */
  goto L_121e3270;
L_121e31e2:;
  /* 121e31e2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e31e6 jne 0x121e31f3 */
  if (!C.zf) goto L_121e31f3;
  /* 121e31e8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e31eb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 121e31ee mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 121e31f1 jmp 0x121e3202 */
  goto L_121e3202;
L_121e31f3:;
  /* 121e31f3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e31f7 jne 0x121e3202 */
  if (!C.zf) goto L_121e3202;
  /* 121e31f9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e31fc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 121e31ff mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_121e3202:;
  /* 121e3202 call 0x121e2d70 */
  push32(0x121e3207u); f_121e2d70();
  /* 121e3207 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e320a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e320e jne 0x121e322b */
  if (!C.zf) goto L_121e322b;
  /* 121e3210 call 0x121e1a60 */
  push32(0x121e3215u); f_121e1a60();
  /* 121e3215 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 121e321b call 0x121e1a70 */
  push32(0x121e3220u); f_121e1a70();
  /* 121e3220 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e3226 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e3229 jmp 0x121e3270 */
  goto L_121e3270;
L_121e322b:;
  /* 121e322b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e322e push eax */
  push32((uint32_t)(EAX));
  /* 121e322f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3232 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3233 call 0x121e2f60 */
  push32(0x121e3238u); f_121e2f60();
  /* 121e3238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e323b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e323e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 121e3241 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 121e3244 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3247 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e324a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e324d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e3250 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3253 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e325a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121e325d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 121e3261 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3264 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3265 call 0x121e3310 */
  push32(0x121e326au); f_121e3310();
  /* 121e326a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e326d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e3270:;
  /* 121e3270 mov esp, ebp */
  ESP = (EBP);
  /* 121e3272 pop ebp */
  EBP = (pop32());
  /* 121e3273 ret  */
  ESPCHK(0x121e3170u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x121e3280 (134 bytes, 44 insns) */
void f_121e3280(void) {
  FTRACE(0x121e3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3280 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3281 mov ebp, esp */
  EBP = (ESP);
  /* 121e3283 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3287 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e328a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e328d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e3290 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3293 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e329a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e329c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121e329f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e32a2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e32a6 jne 0x121e32e1 */
  if (!C.zf) goto L_121e32e1;
  /* 121e32a8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121e32aa call 0x121dd590 */
  push32(0x121e32afu); f_121dd590();
  /* 121e32af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e32b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e32b5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e32b9 jne 0x121e32d7 */
  if (!C.zf) goto L_121e32d7;
  /* 121e32bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e32be add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e32c1 push edx */
  push32((uint32_t)(EDX));
  /* 121e32c2 call dword ptr [0x12208350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208350))), 0x121e32c8u);
  /* 121e32c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e32cb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e32ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e32d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e32d4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_121e32d7:;
  /* 121e32d7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121e32d9 call 0x121dd630 */
  push32(0x121e32deu); f_121dd630();
  /* 121e32de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e32e1:;
  /* 121e32e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e32e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e32e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e32ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e32ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e32f0 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e32f7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 121e32fb push eax */
  push32((uint32_t)(EAX));
  /* 121e32fc call dword ptr [0x1220834c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1220834c))), 0x121e3302u);
  /* 121e3302 mov esp, ebp */
  ESP = (EBP);
  /* 121e3304 pop ebp */
  EBP = (pop32());
  /* 121e3305 ret  */
  ESPCHK(0x121e3280u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x121e3310 (38 bytes, 13 insns) */
void f_121e3310(void) {
  FTRACE(0x121e3310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3310 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3311 mov ebp, esp */
  EBP = (ESP);
  /* 121e3313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3316 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e3319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e331c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e331f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3322 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e3329 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 121e332d push eax */
  push32((uint32_t)(EAX));
  /* 121e332e call dword ptr [0x12208348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208348))), 0x121e3334u);
  /* 121e3334 pop ebp */
  EBP = (pop32());
  /* 121e3335 ret  */
  ESPCHK(0x121e3310u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x121e3340 (218 bytes, 63 insns) */
void f_121e3340(void) {
  FTRACE(0x121e3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3340 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3341 mov ebp, esp */
  EBP = (ESP);
  /* 121e3343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e334d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e334f call 0x121dd590 */
  push32(0x121e3354u); f_121dd590();
  /* 121e3354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3357 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 121e335e jmp 0x121e3369 */
  goto L_121e3369;
L_121e3360:;
  /* 121e3360 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3363 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3366 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e3369:;
  /* 121e3369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e336c cmp ecx, dword ptr [0x12206ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12206ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3372 jge 0x121e3409 */
  if ((C.sf==C.of)) goto L_121e3409;
  /* 121e3378 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e337b mov eax, dword ptr [0x12205b48] */
  EAX = (r32((uint32_t)(0x12205b48)));
  /* 121e3380 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3384 je 0x121e3404 */
  if (C.zf) goto L_121e3404;
  /* 121e3386 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3389 mov edx, dword ptr [0x12205b48] */
  EDX = (r32((uint32_t)(0x12205b48)));
  /* 121e338f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121e3392 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e3395 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 121e339b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e339d je 0x121e33c1 */
  if (C.zf) goto L_121e33c1;
  /* 121e339f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e33a2 mov eax, dword ptr [0x12205b48] */
  EAX = (r32((uint32_t)(0x12205b48)));
  /* 121e33a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e33aa push ecx */
  push32((uint32_t)(ECX));
  /* 121e33ab call 0x121e4130 */
  push32(0x121e33b0u); f_121e4130();
  /* 121e33b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e33b3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e33b6 je 0x121e33c1 */
  if (C.zf) goto L_121e33c1;
  /* 121e33b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e33bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e33be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121e33c1:;
  /* 121e33c1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e33c5 jl 0x121e3404 */
  if ((C.sf!=C.of)) goto L_121e3404;
  /* 121e33c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e33ca mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e33d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e33d3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e33d6 push edx */
  push32((uint32_t)(EDX));
  /* 121e33d7 call dword ptr [0x122083e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083e0))), 0x121e33ddu);
  /* 121e33dd push 2 */
  push32((uint32_t)(0x2u));
  /* 121e33df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e33e2 mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e33e8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e33eb push edx */
  push32((uint32_t)(EDX));
  /* 121e33ec call 0x121da620 */
  push32(0x121e33f1u); f_121da620();
  /* 121e33f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e33f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e33f7 mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e33fd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_121e3404:;
  /* 121e3404 jmp 0x121e3360 */
  goto L_121e3360;
L_121e3409:;
  /* 121e3409 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e340b call 0x121dd630 */
  push32(0x121e3410u); f_121dd630();
  /* 121e3410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3416 mov esp, ebp */
  ESP = (EBP);
  /* 121e3418 pop ebp */
  EBP = (pop32());
  /* 121e3419 ret  */
  ESPCHK(0x121e3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013420 @ 0x121e3420 (68 bytes, 26 insns) */
void f_121e3420(void) {
  FTRACE(0x121e3420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3420 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3421 mov ebp, esp */
  EBP = (ESP);
  /* 121e3423 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3428 jne 0x121e3436 */
  if (!C.zf) goto L_121e3436;
  /* 121e342a push 0 */
  push32((uint32_t)(0x0u));
  /* 121e342c call 0x121e3590 */
  push32(0x121e3431u); f_121e3590();
  /* 121e3431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3434 jmp 0x121e3460 */
  goto L_121e3460;
L_121e3436:;
  /* 121e3436 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3439 push eax */
  push32((uint32_t)(EAX));
  /* 121e343a call 0x121e29a0 */
  push32(0x121e343fu); f_121e29a0();
  /* 121e343f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3442 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3445 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3446 call 0x121e3470 */
  push32(0x121e344bu); f_121e3470();
  /* 121e344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e344e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e3451 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3454 push edx */
  push32((uint32_t)(EDX));
  /* 121e3455 call 0x121e2a10 */
  push32(0x121e345au); f_121e2a10();
  /* 121e345a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e345d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e3460:;
  /* 121e3460 mov esp, ebp */
  ESP = (EBP);
  /* 121e3462 pop ebp */
  EBP = (pop32());
  /* 121e3463 ret  */
  ESPCHK(0x121e3420u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x121e3470 (65 bytes, 26 insns) */
void f_121e3470(void) {
  FTRACE(0x121e3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3470 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3471 mov ebp, esp */
  EBP = (ESP);
  /* 121e3473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3476 push eax */
  push32((uint32_t)(EAX));
  /* 121e3477 call 0x121e34c0 */
  push32(0x121e347cu); f_121e34c0();
  /* 121e347c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e347f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3481 je 0x121e3488 */
  if (C.zf) goto L_121e3488;
  /* 121e3483 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e3486 jmp 0x121e34af */
  goto L_121e34af;
L_121e3488:;
  /* 121e3488 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e348b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e348e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 121e3494 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e3496 je 0x121e34ad */
  if (C.zf) goto L_121e34ad;
  /* 121e3498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e349b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e349e push ecx */
  push32((uint32_t)(ECX));
  /* 121e349f call 0x121e4280 */
  push32(0x121e34a4u); f_121e4280();
  /* 121e34a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e34a7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e34a9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e34ab jmp 0x121e34af */
  goto L_121e34af;
L_121e34ad:;
  /* 121e34ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e34af:;
  /* 121e34af pop ebp */
  EBP = (pop32());
  /* 121e34b0 ret  */
  ESPCHK(0x121e3470u, _esp0);
  ESP += 4; return;
}

/* FUN_100134c0 @ 0x121e34c0 (183 bytes, 62 insns) */
void f_121e34c0(void) {
  FTRACE(0x121e34c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e34c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e34c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e34c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e34c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e34cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e34d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e34d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e34d6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e34d9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121e34dc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e34df jne 0x121e355b */
  if (!C.zf) goto L_121e355b;
  /* 121e34e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e34e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e34e7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 121e34ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e34ef je 0x121e355b */
  if (C.zf) goto L_121e355b;
  /* 121e34f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e34f4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e34f7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121e34f9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e34fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e34ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3503 jle 0x121e355b */
  if ((C.zf||C.sf!=C.of)) goto L_121e355b;
  /* 121e3505 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3508 push edx */
  push32((uint32_t)(EDX));
  /* 121e3509 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e350c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e350f push ecx */
  push32((uint32_t)(ECX));
  /* 121e3510 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3513 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121e3516 push eax */
  push32((uint32_t)(EAX));
  /* 121e3517 call 0x121e2430 */
  push32(0x121e351cu); f_121e2430();
  /* 121e351c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e351f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3522 jne 0x121e3545 */
  if (!C.zf) goto L_121e3545;
  /* 121e3524 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3527 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e352a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 121e3530 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e3532 je 0x121e3543 */
  if (C.zf) goto L_121e3543;
  /* 121e3534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3537 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e353a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 121e353d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3540 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_121e3543:;
  /* 121e3543 jmp 0x121e355b */
  goto L_121e355b;
L_121e3545:;
  /* 121e3545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3548 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e354b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121e354e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3551 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 121e3554 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e355b:;
  /* 121e355b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e355e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3561 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121e3564 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e3566 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3569 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 121e3570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3573 mov esp, ebp */
  ESP = (EBP);
  /* 121e3575 pop ebp */
  EBP = (pop32());
  /* 121e3576 ret  */
  ESPCHK(0x121e34c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013580 @ 0x121e3580 (15 bytes, 7 insns) */
void f_121e3580(void) {
  FTRACE(0x121e3580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3580 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3581 mov ebp, esp */
  EBP = (ESP);
  /* 121e3583 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e3585 call 0x121e3590 */
  push32(0x121e358au); f_121e3590();
  /* 121e358a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e358d pop ebp */
  EBP = (pop32());
  /* 121e358e ret  */
  ESPCHK(0x121e3580u, _esp0);
  ESP += 4; return;
}

/* FUN_10013590 @ 0x121e3590 (319 bytes, 94 insns) */
void f_121e3590(void) {
  FTRACE(0x121e3590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3590 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3591 mov ebp, esp */
  EBP = (ESP);
  /* 121e3593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3596 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e359d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e35a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e35a6 call 0x121dd590 */
  push32(0x121e35abu); f_121dd590();
  /* 121e35ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e35ae mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e35b5 jmp 0x121e35c0 */
  goto L_121e35c0;
L_121e35b7:;
  /* 121e35b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e35ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e35bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e35c0:;
  /* 121e35c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e35c3 cmp ecx, dword ptr [0x12206ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12206ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e35c9 jge 0x121e36b3 */
  if ((C.sf==C.of)) goto L_121e36b3;
  /* 121e35cf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e35d2 mov eax, dword ptr [0x12205b48] */
  EAX = (r32((uint32_t)(0x12205b48)));
  /* 121e35d7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e35db je 0x121e36ae */
  if (C.zf) goto L_121e36ae;
  /* 121e35e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e35e4 mov edx, dword ptr [0x12205b48] */
  EDX = (r32((uint32_t)(0x12205b48)));
  /* 121e35ea mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121e35ed mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e35f0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 121e35f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e35f8 je 0x121e36ae */
  if (C.zf) goto L_121e36ae;
  /* 121e35fe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3601 mov eax, dword ptr [0x12205b48] */
  EAX = (r32((uint32_t)(0x12205b48)));
  /* 121e3606 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e3609 push ecx */
  push32((uint32_t)(ECX));
  /* 121e360a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e360d push edx */
  push32((uint32_t)(EDX));
  /* 121e360e call 0x121e29e0 */
  push32(0x121e3613u); f_121e29e0();
  /* 121e3613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3616 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3619 mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e361f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e3622 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121e3625 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 121e362a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e362c je 0x121e3695 */
  if (C.zf) goto L_121e3695;
  /* 121e362e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3632 jne 0x121e3659 */
  if (!C.zf) goto L_121e3659;
  /* 121e3634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3637 mov edx, dword ptr [0x12205b48] */
  EDX = (r32((uint32_t)(0x12205b48)));
  /* 121e363d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121e3640 push eax */
  push32((uint32_t)(EAX));
  /* 121e3641 call 0x121e3470 */
  push32(0x121e3646u); f_121e3470();
  /* 121e3646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3649 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e364c je 0x121e3657 */
  if (C.zf) goto L_121e3657;
  /* 121e364e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3654 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e3657:;
  /* 121e3657 jmp 0x121e3695 */
  goto L_121e3695;
L_121e3659:;
  /* 121e3659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e365d jne 0x121e3695 */
  if (!C.zf) goto L_121e3695;
  /* 121e365f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3662 mov eax, dword ptr [0x12205b48] */
  EAX = (r32((uint32_t)(0x12205b48)));
  /* 121e3667 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e366a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e366d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 121e3670 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e3672 je 0x121e3695 */
  if (C.zf) goto L_121e3695;
  /* 121e3674 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3677 mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e367d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e3680 push edx */
  push32((uint32_t)(EDX));
  /* 121e3681 call 0x121e3470 */
  push32(0x121e3686u); f_121e3470();
  /* 121e3686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3689 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e368c jne 0x121e3695 */
  if (!C.zf) goto L_121e3695;
  /* 121e368e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_121e3695:;
  /* 121e3695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3698 mov ecx, dword ptr [0x12205b48] */
  ECX = (r32((uint32_t)(0x12205b48)));
  /* 121e369e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121e36a1 push edx */
  push32((uint32_t)(EDX));
  /* 121e36a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e36a5 push eax */
  push32((uint32_t)(EAX));
  /* 121e36a6 call 0x121e2a50 */
  push32(0x121e36abu); f_121e2a50();
  /* 121e36ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e36ae:;
  /* 121e36ae jmp 0x121e35b7 */
  goto L_121e35b7;
L_121e36b3:;
  /* 121e36b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e36b5 call 0x121dd630 */
  push32(0x121e36bau); f_121dd630();
  /* 121e36ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e36bd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e36c1 jne 0x121e36c8 */
  if (!C.zf) goto L_121e36c8;
  /* 121e36c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e36c6 jmp 0x121e36cb */
  goto L_121e36cb;
L_121e36c8:;
  /* 121e36c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e36cb:;
  /* 121e36cb mov esp, ebp */
  ESP = (EBP);
  /* 121e36cd pop ebp */
  EBP = (pop32());
  /* 121e36ce ret  */
  ESPCHK(0x121e3590u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x121e36d0 (15 bytes, 7 insns) */
void f_121e36d0(void) {
  FTRACE(0x121e36d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e36d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e36d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e36d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e36d5 call 0x121d8b00 */
  push32(0x121e36dau); f_121d8b00();
  /* 121e36da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e36dd pop ebp */
  EBP = (pop32());
  /* 121e36de ret  */
  ESPCHK(0x121e36d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x121e36e0 (1007 bytes, 269 insns) */
void f_121e36e0(void) {
  FTRACE(0x121e36e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e36e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e36e1 mov ebp, esp */
  EBP = (ESP);
  /* 121e36e3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e36e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e36ed jl 0x121e36f5 */
  if ((C.sf!=C.of)) goto L_121e36f5;
  /* 121e36ef cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e36f3 jle 0x121e36fc */
  if ((C.zf||C.sf!=C.of)) goto L_121e36fc;
L_121e36f5:;
  /* 121e36f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e36f7 jmp 0x121e3acb */
  goto L_121e3acb;
L_121e36fc:;
  /* 121e36fc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e36fe call 0x121dd590 */
  push32(0x121e3703u); f_121dd590();
  /* 121e3703 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3706 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e370d mov eax, dword ptr [0x12205b34] */
  EAX = (r32((uint32_t)(0x12205b34)));
  /* 121e3712 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3715 mov dword ptr [0x12205b34], eax */
  w32((uint32_t)(0x12205b34), (EAX));
L_121e371a:;
  /* 121e371a cmp dword ptr [0x12205b44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205b44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3721 je 0x121e372d */
  if (C.zf) goto L_121e372d;
  /* 121e3723 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e3725 call dword ptr [0x12208304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208304))), 0x121e372bu);
  /* 121e372b jmp 0x121e371a */
  goto L_121e371a;
L_121e372d:;
  /* 121e372d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3731 je 0x121e3771 */
  if (C.zf) goto L_121e3771;
  /* 121e3733 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3737 je 0x121e3751 */
  if (C.zf) goto L_121e3751;
  /* 121e3739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e373c push ecx */
  push32((uint32_t)(ECX));
  /* 121e373d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3740 push edx */
  push32((uint32_t)(EDX));
  /* 121e3741 call 0x121e3ad0 */
  push32(0x121e3746u); f_121e3ad0();
  /* 121e3746 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3749 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 121e374f jmp 0x121e3763 */
  goto L_121e3763;
L_121e3751:;
  /* 121e3751 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3754 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3757 mov ecx, dword ptr [eax + 0x122044dc] */
  ECX = (r32((uint32_t)(EAX + 0x122044dc)));
  /* 121e375d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_121e3763:;
  /* 121e3763 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 121e3769 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e376c jmp 0x121e3aab */
  goto L_121e3aab;
L_121e3771:;
  /* 121e3771 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 121e3778 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e377f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3783 je 0x121e3aa3 */
  if (C.zf) goto L_121e3aa3;
  /* 121e3789 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e378c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e378f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3792 jne 0x121e39b4 */
  if (!C.zf) goto L_121e39b4;
  /* 121e3798 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e379b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121e379f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e37a2 jne 0x121e39b4 */
  if (!C.zf) goto L_121e39b4;
  /* 121e37a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e37ab movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 121e37af cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e37b2 jne 0x121e39b4 */
  if (!C.zf) goto L_121e39b4;
  /* 121e37b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e37bb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_121e37c1:;
  /* 121e37c1 push 0x12201684 */
  push32((uint32_t)(0x12201684u));
  /* 121e37c6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e37cc push ecx */
  push32((uint32_t)(ECX));
  /* 121e37cd call 0x121e5930 */
  push32(0x121e37d2u); f_121e5930();
  /* 121e37d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e37d5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 121e37db cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e37e2 je 0x121e380d */
  if (C.zf) goto L_121e380d;
  /* 121e37e4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e37ea sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e37f0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 121e37f6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e37fd je 0x121e380d */
  if (C.zf) goto L_121e380d;
  /* 121e37ff mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e3805 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e3808 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e380b jne 0x121e3833 */
  if (!C.zf) goto L_121e3833;
L_121e380d:;
  /* 121e380d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3811 je 0x121e382c */
  if (C.zf) goto L_121e382c;
  /* 121e3813 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e3815 call 0x121dd630 */
  push32(0x121e381au); f_121dd630();
  /* 121e381a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e381d mov edx, dword ptr [0x12205b34] */
  EDX = (r32((uint32_t)(0x12205b34)));
  /* 121e3823 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3826 mov dword ptr [0x12205b34], edx */
  w32((uint32_t)(0x12205b34), (EDX));
L_121e382c:;
  /* 121e382c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e382e jmp 0x121e3acb */
  goto L_121e3acb;
L_121e3833:;
  /* 121e3833 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 121e383a jmp 0x121e3845 */
  goto L_121e3845;
L_121e383c:;
  /* 121e383c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e383f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3842 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121e3845:;
  /* 121e3845 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3849 jg 0x121e3893 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e3893;
  /* 121e384b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121e3851 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3852 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e3858 push edx */
  push32((uint32_t)(EDX));
  /* 121e3859 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e385c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e385f mov ecx, dword ptr [eax + 0x122044d8] */
  ECX = (r32((uint32_t)(EAX + 0x122044d8)));
  /* 121e3865 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3866 call 0x121e58f0 */
  push32(0x121e386bu); f_121e58f0();
  /* 121e386b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e386e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3870 jne 0x121e3891 */
  if (!C.zf) goto L_121e3891;
  /* 121e3872 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e3875 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3878 mov eax, dword ptr [edx + 0x122044d8] */
  EAX = (r32((uint32_t)(EDX + 0x122044d8)));
  /* 121e387e push eax */
  push32((uint32_t)(EAX));
  /* 121e387f call 0x121dc9c0 */
  push32(0x121e3884u); f_121dc9c0();
  /* 121e3884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3887 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e388d jne 0x121e3891 */
  if (!C.zf) goto L_121e3891;
  /* 121e388f jmp 0x121e3893 */
  goto L_121e3893;
L_121e3891:;
  /* 121e3891 jmp 0x121e383c */
  goto L_121e383c;
L_121e3893:;
  /* 121e3893 push 0x12201680 */
  push32((uint32_t)(0x12201680u));
  /* 121e3898 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e389e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e38a1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 121e38a7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e38ad push edx */
  push32((uint32_t)(EDX));
  /* 121e38ae call 0x121e58b0 */
  push32(0x121e38b3u); f_121e58b0();
  /* 121e38b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e38b6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 121e38bc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e38c3 jne 0x121e38f9 */
  if (!C.zf) goto L_121e38f9;
  /* 121e38c5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e38cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e38ce cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e38d1 je 0x121e38f9 */
  if (C.zf) goto L_121e38f9;
  /* 121e38d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e38d7 je 0x121e38f2 */
  if (C.zf) goto L_121e38f2;
  /* 121e38d9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e38db call 0x121dd630 */
  push32(0x121e38e0u); f_121dd630();
  /* 121e38e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e38e3 mov edx, dword ptr [0x12205b34] */
  EDX = (r32((uint32_t)(0x12205b34)));
  /* 121e38e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e38ec mov dword ptr [0x12205b34], edx */
  w32((uint32_t)(0x12205b34), (EDX));
L_121e38f2:;
  /* 121e38f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e38f4 jmp 0x121e3acb */
  goto L_121e3acb;
L_121e38f9:;
  /* 121e38f9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e38fd jg 0x121e394a */
  if ((!C.zf&&C.sf==C.of)) goto L_121e394a;
  /* 121e38ff mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121e3905 push eax */
  push32((uint32_t)(EAX));
  /* 121e3906 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e390c push ecx */
  push32((uint32_t)(ECX));
  /* 121e390d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 121e3913 push edx */
  push32((uint32_t)(EDX));
  /* 121e3914 call 0x121dd3b0 */
  push32(0x121e3919u); f_121dd3b0();
  /* 121e3919 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e391c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121e3922 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 121e392a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 121e3930 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3931 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e3934 push edx */
  push32((uint32_t)(EDX));
  /* 121e3935 call 0x121e3ad0 */
  push32(0x121e393au); f_121e3ad0();
  /* 121e393a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e393d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e393f je 0x121e394a */
  if (C.zf) goto L_121e394a;
  /* 121e3941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3947 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e394a:;
  /* 121e394a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e3950 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3956 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 121e395c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e3962 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e3965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3967 je 0x121e3978 */
  if (C.zf) goto L_121e3978;
  /* 121e3969 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e396f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3972 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_121e3978:;
  /* 121e3978 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121e397e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e3981 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3983 jne 0x121e37c1 */
  if (!C.zf) goto L_121e37c1;
  /* 121e3989 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e398d je 0x121e399c */
  if (C.zf) goto L_121e399c;
  /* 121e398f call 0x121e3c70 */
  push32(0x121e3994u); f_121e3c70();
  /* 121e3994 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 121e399a jmp 0x121e39a6 */
  goto L_121e39a6;
L_121e399c:;
  /* 121e399c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_121e39a6:;
  /* 121e39a6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 121e39ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e39af jmp 0x121e3aa1 */
  goto L_121e3aa1;
L_121e39b4:;
  /* 121e39b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e39b7 push edx */
  push32((uint32_t)(EDX));
  /* 121e39b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e39ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121e39bc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 121e39c2 push eax */
  push32((uint32_t)(EAX));
  /* 121e39c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e39c6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e39c7 call 0x121e3d70 */
  push32(0x121e39ccu); f_121e3d70();
  /* 121e39cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e39cf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e39d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e39d6 je 0x121e3aa1 */
  if (C.zf) goto L_121e3aa1;
  /* 121e39dc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e39e3 jmp 0x121e39ee */
  goto L_121e39ee;
L_121e39e5:;
  /* 121e39e5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e39e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e39eb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e39ee:;
  /* 121e39ee cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e39f2 jg 0x121e3a50 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e3a50;
  /* 121e39f4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e39f8 je 0x121e3a4e */
  if (C.zf) goto L_121e3a4e;
  /* 121e39fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e39fd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3a00 mov ecx, dword ptr [eax + 0x122044dc] */
  ECX = (r32((uint32_t)(EAX + 0x122044dc)));
  /* 121e3a06 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3a07 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 121e3a0d push edx */
  push32((uint32_t)(EDX));
  /* 121e3a0e call 0x121e5820 */
  push32(0x121e3a13u); f_121e5820();
  /* 121e3a13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3a18 je 0x121e3a45 */
  if (C.zf) goto L_121e3a45;
  /* 121e3a1a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 121e3a20 push eax */
  push32((uint32_t)(EAX));
  /* 121e3a21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e3a24 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3a25 call 0x121e3ad0 */
  push32(0x121e3a2au); f_121e3ad0();
  /* 121e3a2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3a2f je 0x121e3a3c */
  if (C.zf) goto L_121e3a3c;
  /* 121e3a31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3a34 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3a37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121e3a3a jmp 0x121e3a43 */
  goto L_121e3a43;
L_121e3a3c:;
  /* 121e3a3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_121e3a43:;
  /* 121e3a43 jmp 0x121e3a4e */
  goto L_121e3a4e;
L_121e3a45:;
  /* 121e3a45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3a48 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3a4b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121e3a4e:;
  /* 121e3a4e jmp 0x121e39e5 */
  goto L_121e39e5;
L_121e3a50:;
  /* 121e3a50 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3a54 je 0x121e3a7b */
  if (C.zf) goto L_121e3a7b;
  /* 121e3a56 call 0x121e3c70 */
  push32(0x121e3a5bu); f_121e3c70();
  /* 121e3a5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e3a5e push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3a60 mov ecx, dword ptr [0x122044dc] */
  ECX = (r32((uint32_t)(0x122044dc)));
  /* 121e3a66 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3a67 call 0x121da620 */
  push32(0x121e3a6cu); f_121da620();
  /* 121e3a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3a6f mov dword ptr [0x122044dc], 0 */
  w32((uint32_t)(0x122044dc), (0x0u));
  /* 121e3a79 jmp 0x121e3aa1 */
  goto L_121e3aa1;
L_121e3a7b:;
  /* 121e3a7b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3a7f je 0x121e3a8e */
  if (C.zf) goto L_121e3a8e;
  /* 121e3a81 call 0x121e3c70 */
  push32(0x121e3a86u); f_121e3c70();
  /* 121e3a86 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 121e3a8c jmp 0x121e3a98 */
  goto L_121e3a98;
L_121e3a8e:;
  /* 121e3a8e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_121e3a98:;
  /* 121e3a98 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 121e3a9e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121e3aa1:;
  /* 121e3aa1 jmp 0x121e3aab */
  goto L_121e3aab;
L_121e3aa3:;
  /* 121e3aa3 call 0x121e3c70 */
  push32(0x121e3aa8u); f_121e3c70();
  /* 121e3aa8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e3aab:;
  /* 121e3aab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3aaf je 0x121e3ac8 */
  if (C.zf) goto L_121e3ac8;
  /* 121e3ab1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121e3ab3 call 0x121dd630 */
  push32(0x121e3ab8u); f_121dd630();
  /* 121e3ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3abb mov eax, dword ptr [0x12205b34] */
  EAX = (r32((uint32_t)(0x12205b34)));
  /* 121e3ac0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3ac3 mov dword ptr [0x12205b34], eax */
  w32((uint32_t)(0x12205b34), (EAX));
L_121e3ac8:;
  /* 121e3ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e3acb:;
  /* 121e3acb mov esp, ebp */
  ESP = (EBP);
  /* 121e3acd pop ebp */
  EBP = (pop32());
  /* 121e3ace ret  */
  ESPCHK(0x121e36e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ad0 @ 0x121e3ad0 (403 bytes, 117 insns) */
void f_121e3ad0(void) {
  FTRACE(0x121e3ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3ad1 mov ebp, esp */
  EBP = (ESP);
  /* 121e3ad3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3adc push eax */
  push32((uint32_t)(EAX));
  /* 121e3add lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 121e3ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3ae4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 121e3aea push edx */
  push32((uint32_t)(EDX));
  /* 121e3aeb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 121e3af1 push eax */
  push32((uint32_t)(EAX));
  /* 121e3af2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3af5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3af6 call 0x121e3d70 */
  push32(0x121e3afbu); f_121e3d70();
  /* 121e3afb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3b00 jne 0x121e3b09 */
  if (!C.zf) goto L_121e3b09;
  /* 121e3b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3b04 jmp 0x121e3c5f */
  goto L_121e3c5f;
L_121e3b09:;
  /* 121e3b09 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 121e3b0e push 0x12201688 */
  push32((uint32_t)(0x12201688u));
  /* 121e3b13 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3b15 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 121e3b1b push edx */
  push32((uint32_t)(EDX));
  /* 121e3b1c call 0x121dc9c0 */
  push32(0x121e3b21u); f_121dc9c0();
  /* 121e3b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b27 push eax */
  push32((uint32_t)(EAX));
  /* 121e3b28 call 0x121d9b90 */
  push32(0x121e3b2du); f_121d9b90();
  /* 121e3b2d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b30 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e3b33 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3b37 jne 0x121e3b40 */
  if (!C.zf) goto L_121e3b40;
  /* 121e3b39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3b3b jmp 0x121e3c5f */
  goto L_121e3c5f;
L_121e3b40:;
  /* 121e3b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3b43 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3b46 mov ecx, dword ptr [eax + 0x122044dc] */
  ECX = (r32((uint32_t)(EAX + 0x122044dc)));
  /* 121e3b4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e3b4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3b52 mov eax, dword ptr [edx*4 + 0x122059b0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x122059b0)));
  /* 121e3b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e3b5c push 6 */
  push32((uint32_t)(0x6u));
  /* 121e3b5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3b61 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3b64 add ecx, 0x12205a00 */
  { uint32_t _a=(ECX),_b=(0x12205a00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b6a push ecx */
  push32((uint32_t)(ECX));
  /* 121e3b6b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 121e3b6e push edx */
  push32((uint32_t)(EDX));
  /* 121e3b6f call 0x121e0470 */
  push32(0x121e3b74u); f_121e0470();
  /* 121e3b74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b77 mov eax, dword ptr [0x122059c8] */
  EAX = (r32((uint32_t)(0x122059c8)));
  /* 121e3b7c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121e3b7f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 121e3b85 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3b86 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3b89 push edx */
  push32((uint32_t)(EDX));
  /* 121e3b8a call 0x121dcb40 */
  push32(0x121e3b8fu); f_121dcb40();
  /* 121e3b8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3b92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3b95 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3b98 mov dword ptr [ecx + 0x122044dc], eax */
  w32((uint32_t)(ECX + 0x122044dc), (EAX));
  /* 121e3b9e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 121e3ba4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e3baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3bad mov dword ptr [eax*4 + 0x122059b0], edx */
  w32((uint32_t)(EAX*4 + 0x122059b0), (EDX));
  /* 121e3bb4 push 6 */
  push32((uint32_t)(0x6u));
  /* 121e3bb6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 121e3bbc push ecx */
  push32((uint32_t)(ECX));
  /* 121e3bbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3bc0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3bc3 add edx, 0x12205a00 */
  { uint32_t _a=(EDX),_b=(0x12205a00u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3bc9 push edx */
  push32((uint32_t)(EDX));
  /* 121e3bca call 0x121e0470 */
  push32(0x121e3bcfu); f_121e0470();
  /* 121e3bcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3bd2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3bd6 jne 0x121e3be3 */
  if (!C.zf) goto L_121e3be3;
  /* 121e3bd8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e3bde mov dword ptr [0x122059c8], eax */
  w32((uint32_t)(0x122059c8), (EAX));
L_121e3be3:;
  /* 121e3be3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3be7 jne 0x121e3bf5 */
  if (!C.zf) goto L_121e3bf5;
  /* 121e3be9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121e3bef mov dword ptr [0x122059cc], ecx */
  w32((uint32_t)(0x122059cc), (ECX));
L_121e3bf5:;
  /* 121e3bf5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3bf8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3bfb call dword ptr [edx + 0x122044e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x122044e0))), 0x121e3c01u);
  /* 121e3c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3c03 je 0x121e3c3c */
  if (C.zf) goto L_121e3c3c;
  /* 121e3c05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3c08 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3c0b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3c0e mov dword ptr [eax + 0x122044dc], ecx */
  w32((uint32_t)(EAX + 0x122044dc), (ECX));
  /* 121e3c14 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3c16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3c19 push edx */
  push32((uint32_t)(EDX));
  /* 121e3c1a call 0x121da620 */
  push32(0x121e3c1fu); f_121da620();
  /* 121e3c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3c22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3c25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3c28 mov dword ptr [eax*4 + 0x122059b0], ecx */
  w32((uint32_t)(EAX*4 + 0x122059b0), (ECX));
  /* 121e3c2f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e3c32 mov dword ptr [0x122059c8], edx */
  w32((uint32_t)(0x122059c8), (EDX));
  /* 121e3c38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3c3a jmp 0x121e3c5f */
  goto L_121e3c5f;
L_121e3c3c:;
  /* 121e3c3c cmp dword ptr [ebp - 0xc], 0x122043c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x122043c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3c43 je 0x121e3c53 */
  if (C.zf) goto L_121e3c53;
  /* 121e3c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3c47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e3c4a push eax */
  push32((uint32_t)(EAX));
  /* 121e3c4b call 0x121da620 */
  push32(0x121e3c50u); f_121da620();
  /* 121e3c50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e3c53:;
  /* 121e3c53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3c56 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3c59 mov eax, dword ptr [ecx + 0x122044dc] */
  EAX = (r32((uint32_t)(ECX + 0x122044dc)));
L_121e3c5f:;
  /* 121e3c5f mov esp, ebp */
  ESP = (EBP);
  /* 121e3c61 pop ebp */
  EBP = (pop32());
  /* 121e3c62 ret  */
  ESPCHK(0x121e3ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c70 @ 0x121e3c70 (256 bytes, 72 insns) */
void f_121e3c70(void) {
  FTRACE(0x121e3c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3c70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3c71 mov ebp, esp */
  EBP = (ESP);
  /* 121e3c73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3c76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121e3c7d cmp dword ptr [0x122044dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122044dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3c84 jne 0x121e3ca4 */
  if (!C.zf) goto L_121e3ca4;
  /* 121e3c86 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 121e3c8b push 0x12201688 */
  push32((uint32_t)(0x12201688u));
  /* 121e3c90 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3c92 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 121e3c97 call 0x121d9b90 */
  push32(0x121e3c9cu); f_121d9b90();
  /* 121e3c9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3c9f mov dword ptr [0x122044dc], eax */
  w32((uint32_t)(0x122044dc), (EAX));
L_121e3ca4:;
  /* 121e3ca4 mov eax, dword ptr [0x122044dc] */
  EAX = (r32((uint32_t)(0x122044dc)));
  /* 121e3ca9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121e3cac mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121e3cb3 jmp 0x121e3cbe */
  goto L_121e3cbe;
L_121e3cb5:;
  /* 121e3cb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3cb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3cbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121e3cbe:;
  /* 121e3cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3cc1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3cc4 mov eax, dword ptr [edx + 0x122044dc] */
  EAX = (r32((uint32_t)(EDX + 0x122044dc)));
  /* 121e3cca push eax */
  push32((uint32_t)(EAX));
  /* 121e3ccb push 0x12201694 */
  push32((uint32_t)(0x12201694u));
  /* 121e3cd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3cd3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3cd6 mov edx, dword ptr [ecx + 0x122044d8] */
  EDX = (r32((uint32_t)(ECX + 0x122044d8)));
  /* 121e3cdc push edx */
  push32((uint32_t)(EDX));
  /* 121e3cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 121e3cdf mov eax, dword ptr [0x122044dc] */
  EAX = (r32((uint32_t)(0x122044dc)));
  /* 121e3ce4 push eax */
  push32((uint32_t)(EAX));
  /* 121e3ce5 call 0x121e3f10 */
  push32(0x121e3ceau); f_121e3f10();
  /* 121e3cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3ced cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3cf1 jge 0x121e3d39 */
  if ((C.sf==C.of)) goto L_121e3d39;
  /* 121e3cf3 push 0x12201680 */
  push32((uint32_t)(0x12201680u));
  /* 121e3cf8 mov ecx, dword ptr [0x122044dc] */
  ECX = (r32((uint32_t)(0x122044dc)));
  /* 121e3cfe push ecx */
  push32((uint32_t)(ECX));
  /* 121e3cff call 0x121dcb50 */
  push32(0x121e3d04u); f_121dcb50();
  /* 121e3d04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3d07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3d0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3d0d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3d10 mov eax, dword ptr [edx + 0x122044dc] */
  EAX = (r32((uint32_t)(EDX + 0x122044dc)));
  /* 121e3d16 push eax */
  push32((uint32_t)(EAX));
  /* 121e3d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3d1a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e3d1d mov edx, dword ptr [ecx + 0x122044dc] */
  EDX = (r32((uint32_t)(ECX + 0x122044dc)));
  /* 121e3d23 push edx */
  push32((uint32_t)(EDX));
  /* 121e3d24 call 0x121e5820 */
  push32(0x121e3d29u); f_121e5820();
  /* 121e3d29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3d2e je 0x121e3d37 */
  if (C.zf) goto L_121e3d37;
  /* 121e3d30 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121e3d37:;
  /* 121e3d37 jmp 0x121e3d67 */
  goto L_121e3d67;
L_121e3d39:;
  /* 121e3d39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3d3d jne 0x121e3d46 */
  if (!C.zf) goto L_121e3d46;
  /* 121e3d3f mov eax, dword ptr [0x122044dc] */
  EAX = (r32((uint32_t)(0x122044dc)));
  /* 121e3d44 jmp 0x121e3d6c */
  goto L_121e3d6c;
L_121e3d46:;
  /* 121e3d46 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e3d48 mov eax, dword ptr [0x122044dc] */
  EAX = (r32((uint32_t)(0x122044dc)));
  /* 121e3d4d push eax */
  push32((uint32_t)(EAX));
  /* 121e3d4e call 0x121da620 */
  push32(0x121e3d53u); f_121da620();
  /* 121e3d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3d56 mov dword ptr [0x122044dc], 0 */
  w32((uint32_t)(0x122044dc), (0x0u));
  /* 121e3d60 mov eax, dword ptr [0x122044f4] */
  EAX = (r32((uint32_t)(0x122044f4)));
  /* 121e3d65 jmp 0x121e3d6c */
  goto L_121e3d6c;
L_121e3d67:;
  /* 121e3d67 jmp 0x121e3cb5 */
  goto L_121e3cb5;
L_121e3d6c:;
  /* 121e3d6c mov esp, ebp */
  ESP = (EBP);
  /* 121e3d6e pop ebp */
  EBP = (pop32());
  /* 121e3d6f ret  */
  ESPCHK(0x121e3c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013d70 @ 0x121e3d70 (388 bytes, 115 insns) */
void f_121e3d70(void) {
  FTRACE(0x121e3d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3d70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3d71 mov ebp, esp */
  EBP = (ESP);
  /* 121e3d73 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3d79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3d7d jne 0x121e3d86 */
  if (!C.zf) goto L_121e3d86;
  /* 121e3d7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3d81 jmp 0x121e3ef0 */
  goto L_121e3ef0;
L_121e3d86:;
  /* 121e3d86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3d89 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e3d8c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3d8f jne 0x121e3de0 */
  if (!C.zf) goto L_121e3de0;
  /* 121e3d91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3d94 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121e3d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3d9a jne 0x121e3de0 */
  if (!C.zf) goto L_121e3de0;
  /* 121e3d9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3d9f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 121e3da2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3da5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 121e3da9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3dad je 0x121e3dc9 */
  if (C.zf) goto L_121e3dc9;
  /* 121e3daf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e3db2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 121e3db7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e3dba mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 121e3dc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e3dc3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_121e3dc9:;
  /* 121e3dc9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3dcd je 0x121e3dd8 */
  if (C.zf) goto L_121e3dd8;
  /* 121e3dcf mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e3dd2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121e3dd8:;
  /* 121e3dd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3ddb jmp 0x121e3ef0 */
  goto L_121e3ef0;
L_121e3de0:;
  /* 121e3de0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3de3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3de4 push 0x12204450 */
  push32((uint32_t)(0x12204450u));
  /* 121e3de9 call 0x121e5820 */
  push32(0x121e3deeu); f_121e5820();
  /* 121e3dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3df3 je 0x121e3ea8 */
  if (C.zf) goto L_121e3ea8;
  /* 121e3df9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3dfc push edx */
  push32((uint32_t)(EDX));
  /* 121e3dfd push 0x122043cc */
  push32((uint32_t)(0x122043ccu));
  /* 121e3e02 call 0x121e5820 */
  push32(0x121e3e07u); f_121e5820();
  /* 121e3e07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3e0c je 0x121e3ea8 */
  if (C.zf) goto L_121e3ea8;
  /* 121e3e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3e15 push eax */
  push32((uint32_t)(EAX));
  /* 121e3e16 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 121e3e1c push ecx */
  push32((uint32_t)(ECX));
  /* 121e3e1d call 0x121e3f60 */
  push32(0x121e3e22u); f_121e3f60();
  /* 121e3e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3e25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3e27 je 0x121e3e30 */
  if (C.zf) goto L_121e3e30;
  /* 121e3e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3e2b jmp 0x121e3ef0 */
  goto L_121e3ef0;
L_121e3e30:;
  /* 121e3e30 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 121e3e36 push edx */
  push32((uint32_t)(EDX));
  /* 121e3e37 push 0x122059d8 */
  push32((uint32_t)(0x122059d8u));
  /* 121e3e3c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 121e3e42 push eax */
  push32((uint32_t)(EAX));
  /* 121e3e43 call 0x121e5970 */
  push32(0x121e3e48u); f_121e5970();
  /* 121e3e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3e4d jne 0x121e3e56 */
  if (!C.zf) goto L_121e3e56;
  /* 121e3e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3e51 jmp 0x121e3ef0 */
  goto L_121e3ef0;
L_121e3e56:;
  /* 121e3e56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e3e58 mov cx, word ptr [0x122059dc] */
  CX = (r16((uint32_t)(0x122059dc)));
  /* 121e3e5f mov dword ptr [0x122059e0], ecx */
  w32((uint32_t)(0x122059e0), (ECX));
  /* 121e3e65 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 121e3e6b push edx */
  push32((uint32_t)(EDX));
  /* 121e3e6c push 0x12204450 */
  push32((uint32_t)(0x12204450u));
  /* 121e3e71 call 0x121e40c0 */
  push32(0x121e3e76u); f_121e40c0();
  /* 121e3e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3e79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3e7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e3e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e3e81 je 0x121e3e96 */
  if (C.zf) goto L_121e3e96;
  /* 121e3e83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3e86 push edx */
  push32((uint32_t)(EDX));
  /* 121e3e87 push 0x122043cc */
  push32((uint32_t)(0x122043ccu));
  /* 121e3e8c call 0x121dcb40 */
  push32(0x121e3e91u); f_121dcb40();
  /* 121e3e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3e94 jmp 0x121e3ea8 */
  goto L_121e3ea8;
L_121e3e96:;
  /* 121e3e96 push 0x12204450 */
  push32((uint32_t)(0x12204450u));
  /* 121e3e9b push 0x122043cc */
  push32((uint32_t)(0x122043ccu));
  /* 121e3ea0 call 0x121dcb40 */
  push32(0x121e3ea5u); f_121dcb40();
  /* 121e3ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e3ea8:;
  /* 121e3ea8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3eac je 0x121e3ec1 */
  if (C.zf) goto L_121e3ec1;
  /* 121e3eae push 6 */
  push32((uint32_t)(0x6u));
  /* 121e3eb0 push 0x122059d8 */
  push32((uint32_t)(0x122059d8u));
  /* 121e3eb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e3eb8 push eax */
  push32((uint32_t)(EAX));
  /* 121e3eb9 call 0x121e0470 */
  push32(0x121e3ebeu); f_121e0470();
  /* 121e3ebe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e3ec1:;
  /* 121e3ec1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3ec5 je 0x121e3eda */
  if (C.zf) goto L_121e3eda;
  /* 121e3ec7 push 4 */
  push32((uint32_t)(0x4u));
  /* 121e3ec9 push 0x122059e0 */
  push32((uint32_t)(0x122059e0u));
  /* 121e3ece mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e3ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3ed2 call 0x121e0470 */
  push32(0x121e3ed7u); f_121e0470();
  /* 121e3ed7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e3eda:;
  /* 121e3eda push 0x12204450 */
  push32((uint32_t)(0x12204450u));
  /* 121e3edf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3ee2 push edx */
  push32((uint32_t)(EDX));
  /* 121e3ee3 call 0x121dcb40 */
  push32(0x121e3ee8u); f_121dcb40();
  /* 121e3ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3eeb mov eax, 0x12204450 */
  EAX = (0x12204450u);
L_121e3ef0:;
  /* 121e3ef0 mov esp, ebp */
  ESP = (EBP);
  /* 121e3ef2 pop ebp */
  EBP = (pop32());
  /* 121e3ef3 ret  */
  ESPCHK(0x121e3d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f00 @ 0x121e3f00 (7 bytes, 5 insns) */
void f_121e3f00(void) {
  FTRACE(0x121e3f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3f00 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3f01 mov ebp, esp */
  EBP = (ESP);
  /* 121e3f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3f05 pop ebp */
  EBP = (pop32());
  /* 121e3f06 ret  */
  ESPCHK(0x121e3f00u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x121e3f10 (79 bytes, 28 insns) */
void f_121e3f10(void) {
  FTRACE(0x121e3f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3f10 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3f11 mov ebp, esp */
  EBP = (ESP);
  /* 121e3f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3f16 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121e3f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e3f1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e3f23 jmp 0x121e3f2e */
  goto L_121e3f2e;
L_121e3f25:;
  /* 121e3f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3f28 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3f2b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121e3f2e:;
  /* 121e3f2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e3f31 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3f34 jge 0x121e3f54 */
  if ((C.sf==C.of)) goto L_121e3f54;
  /* 121e3f36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3f39 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3f3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e3f3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3f42 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 121e3f45 push edx */
  push32((uint32_t)(EDX));
  /* 121e3f46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3f49 push eax */
  push32((uint32_t)(EAX));
  /* 121e3f4a call 0x121dcb50 */
  push32(0x121e3f4fu); f_121dcb50();
  /* 121e3f4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3f52 jmp 0x121e3f25 */
  goto L_121e3f25;
L_121e3f54:;
  /* 121e3f54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e3f5b mov esp, ebp */
  ESP = (EBP);
  /* 121e3f5d pop ebp */
  EBP = (pop32());
  /* 121e3f5e ret  */
  ESPCHK(0x121e3f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f60 @ 0x121e3f60 (349 bytes, 122 insns) */
void f_121e3f60(void) {
  FTRACE(0x121e3f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e3f60 push ebp */
  push32((uint32_t)(EBP));
  /* 121e3f61 mov ebp, esp */
  EBP = (ESP);
  /* 121e3f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e3f66 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 121e3f6b push 0 */
  push32((uint32_t)(0x0u));
  /* 121e3f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3f70 push eax */
  push32((uint32_t)(EAX));
  /* 121e3f71 call 0x121dd900 */
  push32(0x121e3f76u); f_121dd900();
  /* 121e3f76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3f79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3f7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e3f7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e3f81 jne 0x121e3f8a */
  if (!C.zf) goto L_121e3f8a;
  /* 121e3f83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3f85 jmp 0x121e40b9 */
  goto L_121e40b9;
L_121e3f8a:;
  /* 121e3f8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3f8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e3f90 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3f93 jne 0x121e3fc0 */
  if (!C.zf) goto L_121e3fc0;
  /* 121e3f95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3f98 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121e3f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e3f9e je 0x121e3fc0 */
  if (C.zf) goto L_121e3fc0;
  /* 121e3fa0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3fa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3fa6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e3fa7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e3faa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3fb0 push edx */
  push32((uint32_t)(EDX));
  /* 121e3fb1 call 0x121dcb40 */
  push32(0x121e3fb6u); f_121dcb40();
  /* 121e3fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e3fbb jmp 0x121e40b9 */
  goto L_121e40b9;
L_121e3fc0:;
  /* 121e3fc0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e3fc7 jmp 0x121e3fd2 */
  goto L_121e3fd2;
L_121e3fc9:;
  /* 121e3fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e3fcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3fcf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e3fd2:;
  /* 121e3fd2 push 0x12201698 */
  push32((uint32_t)(0x12201698u));
  /* 121e3fd7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3fda push ecx */
  push32((uint32_t)(ECX));
  /* 121e3fdb call 0x121e58b0 */
  push32(0x121e3fe0u); f_121e58b0();
  /* 121e3fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3fe3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e3fe6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e3fea jne 0x121e3ff4 */
  if (!C.zf) goto L_121e3ff4;
  /* 121e3fec or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e3fef jmp 0x121e40b9 */
  goto L_121e40b9;
L_121e3ff4:;
  /* 121e3ff4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e3ff7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e3ffa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e3ffc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 121e3fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4003 jne 0x121e402a */
  if (!C.zf) goto L_121e402a;
  /* 121e4005 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4009 jge 0x121e402a */
  if ((C.sf==C.of)) goto L_121e402a;
  /* 121e400b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e400f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4012 je 0x121e402a */
  if (C.zf) goto L_121e402a;
  /* 121e4014 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4017 push edx */
  push32((uint32_t)(EDX));
  /* 121e4018 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e401b push eax */
  push32((uint32_t)(EAX));
  /* 121e401c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e401f push ecx */
  push32((uint32_t)(ECX));
  /* 121e4020 call 0x121dd3b0 */
  push32(0x121e4025u); f_121dd3b0();
  /* 121e4025 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4028 jmp 0x121e4090 */
  goto L_121e4090;
L_121e402a:;
  /* 121e402a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e402e jne 0x121e4058 */
  if (!C.zf) goto L_121e4058;
  /* 121e4030 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4034 jge 0x121e4058 */
  if ((C.sf==C.of)) goto L_121e4058;
  /* 121e4036 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e403a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e403d je 0x121e4058 */
  if (C.zf) goto L_121e4058;
  /* 121e403f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4042 push eax */
  push32((uint32_t)(EAX));
  /* 121e4043 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e4046 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e404a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e404d push edx */
  push32((uint32_t)(EDX));
  /* 121e404e call 0x121dd3b0 */
  push32(0x121e4053u); f_121dd3b0();
  /* 121e4053 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4056 jmp 0x121e4090 */
  goto L_121e4090;
L_121e4058:;
  /* 121e4058 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e405c jne 0x121e408b */
  if (!C.zf) goto L_121e408b;
  /* 121e405e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e4062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e4064 je 0x121e406f */
  if (C.zf) goto L_121e406f;
  /* 121e4066 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e406a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e406d jne 0x121e408b */
  if (!C.zf) goto L_121e408b;
L_121e406f:;
  /* 121e406f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4072 push edx */
  push32((uint32_t)(EDX));
  /* 121e4073 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e4076 push eax */
  push32((uint32_t)(EAX));
  /* 121e4077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e407a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4080 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4081 call 0x121dd3b0 */
  push32(0x121e4086u); f_121dd3b0();
  /* 121e4086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4089 jmp 0x121e4090 */
  goto L_121e4090;
L_121e408b:;
  /* 121e408b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e408e jmp 0x121e40b9 */
  goto L_121e40b9;
L_121e4090:;
  /* 121e4090 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e4094 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4097 jne 0x121e409b */
  if (!C.zf) goto L_121e409b;
  /* 121e4099 jmp 0x121e40b7 */
  goto L_121e40b7;
L_121e409b:;
  /* 121e409b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e409f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e40a1 jne 0x121e40a5 */
  if (!C.zf) goto L_121e40a5;
  /* 121e40a3 jmp 0x121e40b7 */
  goto L_121e40b7;
L_121e40a5:;
  /* 121e40a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e40a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e40ab lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 121e40af mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 121e40b2 jmp 0x121e3fc9 */
  goto L_121e3fc9;
L_121e40b7:;
  /* 121e40b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e40b9:;
  /* 121e40b9 mov esp, ebp */
  ESP = (EBP);
  /* 121e40bb pop ebp */
  EBP = (pop32());
  /* 121e40bc ret  */
  ESPCHK(0x121e3f60u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x121e40c0 (101 bytes, 36 insns) */
void f_121e40c0(void) {
  FTRACE(0x121e40c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e40c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e40c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e40c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e40c6 push eax */
  push32((uint32_t)(EAX));
  /* 121e40c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e40ca push ecx */
  push32((uint32_t)(ECX));
  /* 121e40cb call 0x121dcb40 */
  push32(0x121e40d0u); f_121dcb40();
  /* 121e40d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e40d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e40d6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 121e40da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e40dc je 0x121e40f8 */
  if (C.zf) goto L_121e40f8;
  /* 121e40de mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e40e1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e40e4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e40e5 push 0x122016a0 */
  push32((uint32_t)(0x122016a0u));
  /* 121e40ea push 2 */
  push32((uint32_t)(0x2u));
  /* 121e40ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e40ef push edx */
  push32((uint32_t)(EDX));
  /* 121e40f0 call 0x121e3f10 */
  push32(0x121e40f5u); f_121e3f10();
  /* 121e40f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e40f8:;
  /* 121e40f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e40fb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 121e4102 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e4104 je 0x121e4123 */
  if (C.zf) goto L_121e4123;
  /* 121e4106 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e4109 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e410f push edx */
  push32((uint32_t)(EDX));
  /* 121e4110 push 0x1220169c */
  push32((uint32_t)(0x1220169cu));
  /* 121e4115 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e411a push eax */
  push32((uint32_t)(EAX));
  /* 121e411b call 0x121e3f10 */
  push32(0x121e4120u); f_121e3f10();
  /* 121e4120 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e4123:;
  /* 121e4123 pop ebp */
  EBP = (pop32());
  /* 121e4124 ret  */
  ESPCHK(0x121e40c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014130 @ 0x121e4130 (130 bytes, 50 insns) */
void f_121e4130(void) {
  FTRACE(0x121e4130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4130 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4131 mov ebp, esp */
  EBP = (ESP);
  /* 121e4133 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4134 push ebx */
  push32((uint32_t)(EBX));
  /* 121e4135 push esi */
  push32((uint32_t)(ESI));
  /* 121e4136 push edi */
  push32((uint32_t)(EDI));
  /* 121e4137 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e413e:;
  /* 121e413e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4142 jne 0x121e4162 */
  if (!C.zf) goto L_121e4162;
  /* 121e4144 push 0x122016b0 */
  push32((uint32_t)(0x122016b0u));
  /* 121e4149 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e414b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 121e414d push 0x122016a4 */
  push32((uint32_t)(0x122016a4u));
  /* 121e4152 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4154 call 0x121d8c50 */
  push32(0x121e4159u); f_121d8c50();
  /* 121e4159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e415c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e415f jne 0x121e4162 */
  if (!C.zf) goto L_121e4162;
  /* 121e4161 int3  */
  x86_unimpl("int3 @ 0x121e4161");
L_121e4162:;
  /* 121e4162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e4164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e4166 jne 0x121e413e */
  if (!C.zf) goto L_121e413e;
  /* 121e4168 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e416b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e416e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 121e4171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e4173 je 0x121e4181 */
  if (C.zf) goto L_121e4181;
  /* 121e4175 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4178 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 121e417f jmp 0x121e41a8 */
  goto L_121e41a8;
L_121e4181:;
  /* 121e4181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4184 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4185 call 0x121e29a0 */
  push32(0x121e418au); f_121e29a0();
  /* 121e418a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e418d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4190 push edx */
  push32((uint32_t)(EDX));
  /* 121e4191 call 0x121e41c0 */
  push32(0x121e4196u); f_121e41c0();
  /* 121e4196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4199 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e419c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e419f push eax */
  push32((uint32_t)(EAX));
  /* 121e41a0 call 0x121e2a10 */
  push32(0x121e41a5u); f_121e2a10();
  /* 121e41a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e41a8:;
  /* 121e41a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e41ab pop edi */
  EDI = (pop32());
  /* 121e41ac pop esi */
  ESI = (pop32());
  /* 121e41ad pop ebx */
  EBX = (pop32());
  /* 121e41ae mov esp, ebp */
  ESP = (EBP);
  /* 121e41b0 pop ebp */
  EBP = (pop32());
  /* 121e41b1 ret  */
  ESPCHK(0x121e4130u, _esp0);
  ESP += 4; return;
}

/* FUN_100141c0 @ 0x121e41c0 (190 bytes, 67 insns) */
void f_121e41c0(void) {
  FTRACE(0x121e41c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e41c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e41c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e41c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e41c6 push ebx */
  push32((uint32_t)(EBX));
  /* 121e41c7 push esi */
  push32((uint32_t)(ESI));
  /* 121e41c8 push edi */
  push32((uint32_t)(EDI));
  /* 121e41c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e41d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e41d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e41d6:;
  /* 121e41d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e41da jne 0x121e41fa */
  if (!C.zf) goto L_121e41fa;
  /* 121e41dc push 0x12201554 */
  push32((uint32_t)(0x12201554u));
  /* 121e41e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e41e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 121e41e5 push 0x122016a4 */
  push32((uint32_t)(0x122016a4u));
  /* 121e41ea push 2 */
  push32((uint32_t)(0x2u));
  /* 121e41ec call 0x121d8c50 */
  push32(0x121e41f1u); f_121d8c50();
  /* 121e41f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e41f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e41f7 jne 0x121e41fa */
  if (!C.zf) goto L_121e41fa;
  /* 121e41f9 int3  */
  x86_unimpl("int3 @ 0x121e41f9");
L_121e41fa:;
  /* 121e41fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e41fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e41fe jne 0x121e41d6 */
  if (!C.zf) goto L_121e41d6;
  /* 121e4200 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4203 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121e4206 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 121e420b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e420d je 0x121e426a */
  if (C.zf) goto L_121e426a;
  /* 121e420f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4212 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4213 call 0x121e34c0 */
  push32(0x121e4218u); f_121e34c0();
  /* 121e4218 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e421b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e421e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4221 push edx */
  push32((uint32_t)(EDX));
  /* 121e4222 call 0x121e6840 */
  push32(0x121e4227u); f_121e6840();
  /* 121e4227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e422a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e422d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e4230 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4231 call 0x121e6710 */
  push32(0x121e4236u); f_121e6710();
  /* 121e4236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e423b jge 0x121e4246 */
  if ((C.sf==C.of)) goto L_121e4246;
  /* 121e423d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121e4244 jmp 0x121e426a */
  goto L_121e426a;
L_121e4246:;
  /* 121e4246 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4249 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e424d je 0x121e426a */
  if (C.zf) goto L_121e426a;
  /* 121e424f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4251 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4254 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e4257 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4258 call 0x121da620 */
  push32(0x121e425du); f_121da620();
  /* 121e425d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4260 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4263 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_121e426a:;
  /* 121e426a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e426d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 121e4274 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4277 pop edi */
  EDI = (pop32());
  /* 121e4278 pop esi */
  ESI = (pop32());
  /* 121e4279 pop ebx */
  EBX = (pop32());
  /* 121e427a mov esp, ebp */
  ESP = (EBP);
  /* 121e427c pop ebp */
  EBP = (pop32());
  /* 121e427d ret  */
  ESPCHK(0x121e41c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014280 @ 0x121e4280 (210 bytes, 63 insns) */
void f_121e4280(void) {
  FTRACE(0x121e4280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4280 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4281 mov ebp, esp */
  EBP = (ESP);
  /* 121e4283 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4287 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e428d jae 0x121e42b1 */
  if (!C.cf) goto L_121e42b1;
  /* 121e428f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4292 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e4295 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4298 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e429b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e429e mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e42a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e42aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e42ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e42af jne 0x121e42c4 */
  if (!C.zf) goto L_121e42c4;
L_121e42b1:;
  /* 121e42b1 call 0x121e1a60 */
  push32(0x121e42b6u); f_121e1a60();
  /* 121e42b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e42bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e42bf jmp 0x121e434e */
  goto L_121e434e;
L_121e42c4:;
  /* 121e42c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e42c7 push edx */
  push32((uint32_t)(EDX));
  /* 121e42c8 call 0x121e3280 */
  push32(0x121e42cdu); f_121e3280();
  /* 121e42cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e42d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e42d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e42d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e42d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e42dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e42df mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e42e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121e42eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 121e42ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e42f0 je 0x121e432d */
  if (C.zf) goto L_121e432d;
  /* 121e42f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e42f5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e42f6 call 0x121e3100 */
  push32(0x121e42fbu); f_121e3100();
  /* 121e42fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e42fe push eax */
  push32((uint32_t)(EAX));
  /* 121e42ff call dword ptr [0x12208300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208300))), 0x121e4305u);
  /* 121e4305 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e4307 jne 0x121e4314 */
  if (!C.zf) goto L_121e4314;
  /* 121e4309 call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e430fu);
  /* 121e430f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e4312 jmp 0x121e431b */
  goto L_121e431b;
L_121e4314:;
  /* 121e4314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121e431b:;
  /* 121e431b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e431f jne 0x121e4323 */
  if (!C.zf) goto L_121e4323;
  /* 121e4321 jmp 0x121e433f */
  goto L_121e433f;
L_121e4323:;
  /* 121e4323 call 0x121e1a70 */
  push32(0x121e4328u); f_121e1a70();
  /* 121e4328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e432b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121e432d:;
  /* 121e432d call 0x121e1a60 */
  push32(0x121e4332u); f_121e1a60();
  /* 121e4332 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e4338 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121e433f:;
  /* 121e433f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4342 push eax */
  push32((uint32_t)(EAX));
  /* 121e4343 call 0x121e3310 */
  push32(0x121e4348u); f_121e3310();
  /* 121e4348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e434e:;
  /* 121e434e mov esp, ebp */
  ESP = (EBP);
  /* 121e4350 pop ebp */
  EBP = (pop32());
  /* 121e4351 ret  */
  ESPCHK(0x121e4280u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x121e4360 (219 bytes, 64 insns) */
void f_121e4360(void) {
  FTRACE(0x121e4360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4360 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4361 mov ebp, esp */
  EBP = (ESP);
  /* 121e4363 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4364 cmp dword ptr [0x122059c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e436b je 0x121e4401 */
  if (C.zf) goto L_121e4401;
  /* 121e4371 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 121e4373 push 0x122016c0 */
  push32((uint32_t)(0x122016c0u));
  /* 121e4378 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e437a push 0xac */
  push32((uint32_t)(0xacu));
  /* 121e437f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4381 call 0x121d9fa0 */
  push32(0x121e4386u); f_121d9fa0();
  /* 121e4386 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4389 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e438c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4390 jne 0x121e439c */
  if (!C.zf) goto L_121e439c;
  /* 121e4392 mov eax, 1 */
  EAX = (0x1u);
  /* 121e4397 jmp 0x121e4437 */
  goto L_121e4437;
L_121e439c:;
  /* 121e439c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e439f push eax */
  push32((uint32_t)(EAX));
  /* 121e43a0 call 0x121e4440 */
  push32(0x121e43a5u); f_121e4440();
  /* 121e43a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e43a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e43aa je 0x121e43cd */
  if (C.zf) goto L_121e43cd;
  /* 121e43ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e43af push ecx */
  push32((uint32_t)(ECX));
  /* 121e43b0 call 0x121e49d0 */
  push32(0x121e43b5u); f_121e49d0();
  /* 121e43b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e43b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e43ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e43bd push edx */
  push32((uint32_t)(EDX));
  /* 121e43be call 0x121da620 */
  push32(0x121e43c3u); f_121da620();
  /* 121e43c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e43c6 mov eax, 1 */
  EAX = (0x1u);
  /* 121e43cb jmp 0x121e4437 */
  goto L_121e4437;
L_121e43cd:;
  /* 121e43cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e43d0 mov dword ptr [0x12204c98], eax */
  w32((uint32_t)(0x12204c98), (EAX));
  /* 121e43d5 mov ecx, dword ptr [0x122059e4] */
  ECX = (r32((uint32_t)(0x122059e4)));
  /* 121e43db push ecx */
  push32((uint32_t)(ECX));
  /* 121e43dc call 0x121e49d0 */
  push32(0x121e43e1u); f_121e49d0();
  /* 121e43e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e43e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e43e6 mov edx, dword ptr [0x122059e4] */
  EDX = (r32((uint32_t)(0x122059e4)));
  /* 121e43ec push edx */
  push32((uint32_t)(EDX));
  /* 121e43ed call 0x121da620 */
  push32(0x121e43f2u); f_121da620();
  /* 121e43f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e43f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e43f8 mov dword ptr [0x122059e4], eax */
  w32((uint32_t)(0x122059e4), (EAX));
  /* 121e43fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e43ff jmp 0x121e4437 */
  goto L_121e4437;
L_121e4401:;
  /* 121e4401 mov dword ptr [0x12204c98], 0x12204ca0 */
  w32((uint32_t)(0x12204c98), (0x12204ca0u));
  /* 121e440b mov ecx, dword ptr [0x122059e4] */
  ECX = (r32((uint32_t)(0x122059e4)));
  /* 121e4411 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4412 call 0x121e49d0 */
  push32(0x121e4417u); f_121e49d0();
  /* 121e4417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e441a push 2 */
  push32((uint32_t)(0x2u));
  /* 121e441c mov edx, dword ptr [0x122059e4] */
  EDX = (r32((uint32_t)(0x122059e4)));
  /* 121e4422 push edx */
  push32((uint32_t)(EDX));
  /* 121e4423 call 0x121da620 */
  push32(0x121e4428u); f_121da620();
  /* 121e4428 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e442b mov dword ptr [0x122059e4], 0 */
  w32((uint32_t)(0x122059e4), (0x0u));
  /* 121e4435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e4437:;
  /* 121e4437 mov esp, ebp */
  ESP = (EBP);
  /* 121e4439 pop ebp */
  EBP = (pop32());
  /* 121e443a ret  */
  ESPCHK(0x121e4360u, _esp0);
  ESP += 4; return;
}

/* FUN_10014440 @ 0x121e4440 (1423 bytes, 533 insns) */
void f_121e4440(void) {
  FTRACE(0x121e4440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4440 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4441 mov ebp, esp */
  EBP = (ESP);
  /* 121e4443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e4446 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121e444d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e444f mov ax, word ptr [0x12205a1e] */
  AX = (r16((uint32_t)(0x12205a1e)));
  /* 121e4455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e4458 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e445a mov cx, word ptr [0x12205a20] */
  CX = (r16((uint32_t)(0x12205a20)));
  /* 121e4461 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e4464 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4468 jne 0x121e4472 */
  if (!C.zf) goto L_121e4472;
  /* 121e446a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e446d jmp 0x121e49cb */
  goto L_121e49cb;
L_121e4472:;
  /* 121e4472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4475 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4478 push edx */
  push32((uint32_t)(EDX));
  /* 121e4479 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 121e447b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e447e push eax */
  push32((uint32_t)(EAX));
  /* 121e447f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4481 call 0x121e7d50 */
  push32(0x121e4486u); f_121e7d50();
  /* 121e4486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4489 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e448c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e448e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4494 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4497 push edx */
  push32((uint32_t)(EDX));
  /* 121e4498 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 121e449a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e449d push eax */
  push32((uint32_t)(EAX));
  /* 121e449e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e44a0 call 0x121e7d50 */
  push32(0x121e44a5u); f_121e7d50();
  /* 121e44a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e44ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e44ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e44b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e44b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44b6 push edx */
  push32((uint32_t)(EDX));
  /* 121e44b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 121e44b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e44bc push eax */
  push32((uint32_t)(EAX));
  /* 121e44bd push 1 */
  push32((uint32_t)(0x1u));
  /* 121e44bf call 0x121e7d50 */
  push32(0x121e44c4u); f_121e7d50();
  /* 121e44c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e44ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e44cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e44cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e44d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44d5 push edx */
  push32((uint32_t)(EDX));
  /* 121e44d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 121e44d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e44db push eax */
  push32((uint32_t)(EAX));
  /* 121e44dc push 1 */
  push32((uint32_t)(0x1u));
  /* 121e44de call 0x121e7d50 */
  push32(0x121e44e3u); f_121e7d50();
  /* 121e44e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e44e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e44eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e44ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e44f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e44f4 push edx */
  push32((uint32_t)(EDX));
  /* 121e44f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 121e44f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e44fa push eax */
  push32((uint32_t)(EAX));
  /* 121e44fb push 1 */
  push32((uint32_t)(0x1u));
  /* 121e44fd call 0x121e7d50 */
  push32(0x121e4502u); f_121e7d50();
  /* 121e4502 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4505 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4508 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e450a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e450d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4510 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4513 push edx */
  push32((uint32_t)(EDX));
  /* 121e4514 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 121e4516 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4519 push eax */
  push32((uint32_t)(EAX));
  /* 121e451a push 1 */
  push32((uint32_t)(0x1u));
  /* 121e451c call 0x121e7d50 */
  push32(0x121e4521u); f_121e7d50();
  /* 121e4521 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4524 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4527 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4529 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e452c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e452f push edx */
  push32((uint32_t)(EDX));
  /* 121e4530 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 121e4532 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4535 push eax */
  push32((uint32_t)(EAX));
  /* 121e4536 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4538 call 0x121e7d50 */
  push32(0x121e453du); f_121e7d50();
  /* 121e453d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4540 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4543 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4545 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e454b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e454e push edx */
  push32((uint32_t)(EDX));
  /* 121e454f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 121e4551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4554 push eax */
  push32((uint32_t)(EAX));
  /* 121e4555 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4557 call 0x121e7d50 */
  push32(0x121e455cu); f_121e7d50();
  /* 121e455c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e455f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4562 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4564 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4567 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e456a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e456d push edx */
  push32((uint32_t)(EDX));
  /* 121e456e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 121e4570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4573 push eax */
  push32((uint32_t)(EAX));
  /* 121e4574 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4576 call 0x121e7d50 */
  push32(0x121e457bu); f_121e7d50();
  /* 121e457b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e457e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4581 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4583 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4586 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4589 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e458c push edx */
  push32((uint32_t)(EDX));
  /* 121e458d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 121e458f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4592 push eax */
  push32((uint32_t)(EAX));
  /* 121e4593 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4595 call 0x121e7d50 */
  push32(0x121e459au); f_121e7d50();
  /* 121e459a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e459d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e45a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e45a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e45a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e45a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45ab push edx */
  push32((uint32_t)(EDX));
  /* 121e45ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 121e45ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e45b1 push eax */
  push32((uint32_t)(EAX));
  /* 121e45b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e45b4 call 0x121e7d50 */
  push32(0x121e45b9u); f_121e7d50();
  /* 121e45b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e45bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e45c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e45c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e45c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45ca push edx */
  push32((uint32_t)(EDX));
  /* 121e45cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 121e45cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e45d0 push eax */
  push32((uint32_t)(EAX));
  /* 121e45d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e45d3 call 0x121e7d50 */
  push32(0x121e45d8u); f_121e7d50();
  /* 121e45d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e45de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e45e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e45e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e45e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45e9 push edx */
  push32((uint32_t)(EDX));
  /* 121e45ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 121e45ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e45ef push eax */
  push32((uint32_t)(EAX));
  /* 121e45f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e45f2 call 0x121e7d50 */
  push32(0x121e45f7u); f_121e7d50();
  /* 121e45f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e45fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e45fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e45ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4605 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4608 push edx */
  push32((uint32_t)(EDX));
  /* 121e4609 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121e460b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e460e push eax */
  push32((uint32_t)(EAX));
  /* 121e460f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4611 call 0x121e7d50 */
  push32(0x121e4616u); f_121e7d50();
  /* 121e4616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4619 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e461c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e461e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4624 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4627 push edx */
  push32((uint32_t)(EDX));
  /* 121e4628 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 121e462a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e462d push eax */
  push32((uint32_t)(EAX));
  /* 121e462e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4630 call 0x121e7d50 */
  push32(0x121e4635u); f_121e7d50();
  /* 121e4635 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4638 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e463b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e463d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4640 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4643 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4646 push edx */
  push32((uint32_t)(EDX));
  /* 121e4647 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 121e4649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e464c push eax */
  push32((uint32_t)(EAX));
  /* 121e464d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e464f call 0x121e7d50 */
  push32(0x121e4654u); f_121e7d50();
  /* 121e4654 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4657 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e465a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e465c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e465f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4662 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4665 push edx */
  push32((uint32_t)(EDX));
  /* 121e4666 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 121e4668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e466b push eax */
  push32((uint32_t)(EAX));
  /* 121e466c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e466e call 0x121e7d50 */
  push32(0x121e4673u); f_121e7d50();
  /* 121e4673 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4676 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4679 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e467b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e467e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4681 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4684 push edx */
  push32((uint32_t)(EDX));
  /* 121e4685 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 121e4687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e468a push eax */
  push32((uint32_t)(EAX));
  /* 121e468b push 1 */
  push32((uint32_t)(0x1u));
  /* 121e468d call 0x121e7d50 */
  push32(0x121e4692u); f_121e7d50();
  /* 121e4692 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4695 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4698 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e469a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e469d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e46a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46a3 push edx */
  push32((uint32_t)(EDX));
  /* 121e46a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 121e46a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e46a9 push eax */
  push32((uint32_t)(EAX));
  /* 121e46aa push 1 */
  push32((uint32_t)(0x1u));
  /* 121e46ac call 0x121e7d50 */
  push32(0x121e46b1u); f_121e7d50();
  /* 121e46b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e46b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e46b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e46bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e46bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46c2 push edx */
  push32((uint32_t)(EDX));
  /* 121e46c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 121e46c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e46c8 push eax */
  push32((uint32_t)(EAX));
  /* 121e46c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e46cb call 0x121e7d50 */
  push32(0x121e46d0u); f_121e7d50();
  /* 121e46d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e46d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e46d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e46db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e46de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46e1 push edx */
  push32((uint32_t)(EDX));
  /* 121e46e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 121e46e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e46e7 push eax */
  push32((uint32_t)(EAX));
  /* 121e46e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e46ea call 0x121e7d50 */
  push32(0x121e46efu); f_121e7d50();
  /* 121e46ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e46f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e46f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e46f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e46fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e46fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4700 push edx */
  push32((uint32_t)(EDX));
  /* 121e4701 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 121e4703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4706 push eax */
  push32((uint32_t)(EAX));
  /* 121e4707 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4709 call 0x121e7d50 */
  push32(0x121e470eu); f_121e7d50();
  /* 121e470e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4711 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4714 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4716 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4719 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e471c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e471f push edx */
  push32((uint32_t)(EDX));
  /* 121e4720 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 121e4722 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4725 push eax */
  push32((uint32_t)(EAX));
  /* 121e4726 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4728 call 0x121e7d50 */
  push32(0x121e472du); f_121e7d50();
  /* 121e472d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4730 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4733 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4735 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e473b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e473e push edx */
  push32((uint32_t)(EDX));
  /* 121e473f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 121e4741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4744 push eax */
  push32((uint32_t)(EAX));
  /* 121e4745 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4747 call 0x121e7d50 */
  push32(0x121e474cu); f_121e7d50();
  /* 121e474c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e474f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4752 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4754 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4757 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e475a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e475d push edx */
  push32((uint32_t)(EDX));
  /* 121e475e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 121e4760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4763 push eax */
  push32((uint32_t)(EAX));
  /* 121e4764 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4766 call 0x121e7d50 */
  push32(0x121e476bu); f_121e7d50();
  /* 121e476b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e476e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4771 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4773 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4779 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e477c push edx */
  push32((uint32_t)(EDX));
  /* 121e477d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 121e477f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4782 push eax */
  push32((uint32_t)(EAX));
  /* 121e4783 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4785 call 0x121e7d50 */
  push32(0x121e478au); f_121e7d50();
  /* 121e478a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e478d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4790 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4798 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e479b push edx */
  push32((uint32_t)(EDX));
  /* 121e479c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 121e479e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e47a1 push eax */
  push32((uint32_t)(EAX));
  /* 121e47a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e47a4 call 0x121e7d50 */
  push32(0x121e47a9u); f_121e7d50();
  /* 121e47a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e47af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e47b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e47b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e47b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47ba push edx */
  push32((uint32_t)(EDX));
  /* 121e47bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 121e47bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e47c0 push eax */
  push32((uint32_t)(EAX));
  /* 121e47c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e47c3 call 0x121e7d50 */
  push32(0x121e47c8u); f_121e7d50();
  /* 121e47c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e47ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e47d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e47d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e47d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47d9 push edx */
  push32((uint32_t)(EDX));
  /* 121e47da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 121e47dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e47df push eax */
  push32((uint32_t)(EAX));
  /* 121e47e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e47e2 call 0x121e7d50 */
  push32(0x121e47e7u); f_121e7d50();
  /* 121e47e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e47ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e47ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e47f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e47f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e47f8 push edx */
  push32((uint32_t)(EDX));
  /* 121e47f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 121e47fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e47fe push eax */
  push32((uint32_t)(EAX));
  /* 121e47ff push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4801 call 0x121e7d50 */
  push32(0x121e4806u); f_121e7d50();
  /* 121e4806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4809 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e480c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e480e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4814 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4817 push edx */
  push32((uint32_t)(EDX));
  /* 121e4818 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 121e481a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e481d push eax */
  push32((uint32_t)(EAX));
  /* 121e481e push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4820 call 0x121e7d50 */
  push32(0x121e4825u); f_121e7d50();
  /* 121e4825 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4828 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e482b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e482d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4830 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4833 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4836 push edx */
  push32((uint32_t)(EDX));
  /* 121e4837 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121e4839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e483c push eax */
  push32((uint32_t)(EAX));
  /* 121e483d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e483f call 0x121e7d50 */
  push32(0x121e4844u); f_121e7d50();
  /* 121e4844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4847 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e484a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e484c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e484f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4852 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4858 push edx */
  push32((uint32_t)(EDX));
  /* 121e4859 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 121e485b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e485e push eax */
  push32((uint32_t)(EAX));
  /* 121e485f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4861 call 0x121e7d50 */
  push32(0x121e4866u); f_121e7d50();
  /* 121e4866 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4869 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e486c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e486e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4874 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e487a push edx */
  push32((uint32_t)(EDX));
  /* 121e487b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121e487d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4880 push eax */
  push32((uint32_t)(EAX));
  /* 121e4881 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4883 call 0x121e7d50 */
  push32(0x121e4888u); f_121e7d50();
  /* 121e4888 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e488b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e488e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4890 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4893 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4896 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e489c push edx */
  push32((uint32_t)(EDX));
  /* 121e489d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121e489f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e48a2 push eax */
  push32((uint32_t)(EAX));
  /* 121e48a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e48a5 call 0x121e7d50 */
  push32(0x121e48aau); f_121e7d50();
  /* 121e48aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e48ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e48b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e48b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e48b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e48b8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e48be push edx */
  push32((uint32_t)(EDX));
  /* 121e48bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 121e48c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e48c4 push eax */
  push32((uint32_t)(EAX));
  /* 121e48c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e48c7 call 0x121e7d50 */
  push32(0x121e48ccu); f_121e7d50();
  /* 121e48cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e48cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e48d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e48d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e48d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e48da add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e48e0 push edx */
  push32((uint32_t)(EDX));
  /* 121e48e1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 121e48e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e48e6 push eax */
  push32((uint32_t)(EAX));
  /* 121e48e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e48e9 call 0x121e7d50 */
  push32(0x121e48eeu); f_121e7d50();
  /* 121e48ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e48f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e48f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e48f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e48f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e48fc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4902 push edx */
  push32((uint32_t)(EDX));
  /* 121e4903 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 121e4905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4908 push eax */
  push32((uint32_t)(EAX));
  /* 121e4909 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e490b call 0x121e7d50 */
  push32(0x121e4910u); f_121e7d50();
  /* 121e4910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4913 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4916 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4918 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e491b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e491e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4924 push edx */
  push32((uint32_t)(EDX));
  /* 121e4925 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 121e4927 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e492a push eax */
  push32((uint32_t)(EAX));
  /* 121e492b push 1 */
  push32((uint32_t)(0x1u));
  /* 121e492d call 0x121e7d50 */
  push32(0x121e4932u); f_121e7d50();
  /* 121e4932 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4935 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e4938 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e493a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e493d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4940 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4946 push edx */
  push32((uint32_t)(EDX));
  /* 121e4947 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 121e4949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e494c push eax */
  push32((uint32_t)(EAX));
  /* 121e494d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e494f call 0x121e7d50 */
  push32(0x121e4954u); f_121e7d50();
  /* 121e4954 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e495a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e495c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e495f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4962 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4968 push edx */
  push32((uint32_t)(EDX));
  /* 121e4969 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 121e496b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e496e push eax */
  push32((uint32_t)(EAX));
  /* 121e496f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4971 call 0x121e7d50 */
  push32(0x121e4976u); f_121e7d50();
  /* 121e4976 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4979 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e497c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e497e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e4981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4984 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e498a push edx */
  push32((uint32_t)(EDX));
  /* 121e498b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 121e498d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4990 push eax */
  push32((uint32_t)(EAX));
  /* 121e4991 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4993 call 0x121e7d50 */
  push32(0x121e4998u); f_121e7d50();
  /* 121e4998 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e499b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e499e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e49a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e49a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e49a6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e49ac push edx */
  push32((uint32_t)(EDX));
  /* 121e49ad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 121e49b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e49b5 push eax */
  push32((uint32_t)(EAX));
  /* 121e49b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e49b8 call 0x121e7d50 */
  push32(0x121e49bdu); f_121e7d50();
  /* 121e49bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e49c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e49c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e49c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121e49c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_121e49cb:;
  /* 121e49cb mov esp, ebp */
  ESP = (EBP);
  /* 121e49cd pop ebp */
  EBP = (pop32());
  /* 121e49ce ret  */
  ESPCHK(0x121e4440u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x121e49d0 (779 bytes, 265 insns) */
void f_121e49d0(void) {
  FTRACE(0x121e49d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e49d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e49d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e49d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e49d7 jne 0x121e49de */
  if (!C.zf) goto L_121e49de;
  /* 121e49d9 jmp 0x121e4cd9 */
  goto L_121e4cd9;
L_121e49de:;
  /* 121e49de push 2 */
  push32((uint32_t)(0x2u));
  /* 121e49e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e49e3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e49e6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e49e7 call 0x121da620 */
  push32(0x121e49ecu); f_121da620();
  /* 121e49ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e49ef push 2 */
  push32((uint32_t)(0x2u));
  /* 121e49f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e49f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e49f7 push eax */
  push32((uint32_t)(EAX));
  /* 121e49f8 call 0x121da620 */
  push32(0x121e49fdu); f_121da620();
  /* 121e49fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e4a08 push edx */
  push32((uint32_t)(EDX));
  /* 121e4a09 call 0x121da620 */
  push32(0x121e4a0eu); f_121da620();
  /* 121e4a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a11 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e4a19 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4a1a call 0x121da620 */
  push32(0x121e4a1fu); f_121da620();
  /* 121e4a1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a22 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a27 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e4a2a push eax */
  push32((uint32_t)(EAX));
  /* 121e4a2b call 0x121da620 */
  push32(0x121e4a30u); f_121da620();
  /* 121e4a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a38 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121e4a3b push edx */
  push32((uint32_t)(EDX));
  /* 121e4a3c call 0x121da620 */
  push32(0x121e4a41u); f_121da620();
  /* 121e4a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a44 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e4a4b push ecx */
  push32((uint32_t)(ECX));
  /* 121e4a4c call 0x121da620 */
  push32(0x121e4a51u); f_121da620();
  /* 121e4a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a54 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a59 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 121e4a5c push eax */
  push32((uint32_t)(EAX));
  /* 121e4a5d call 0x121da620 */
  push32(0x121e4a62u); f_121da620();
  /* 121e4a62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a65 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a6a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 121e4a6d push edx */
  push32((uint32_t)(EDX));
  /* 121e4a6e call 0x121da620 */
  push32(0x121e4a73u); f_121da620();
  /* 121e4a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a76 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a7b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 121e4a7e push ecx */
  push32((uint32_t)(ECX));
  /* 121e4a7f call 0x121da620 */
  push32(0x121e4a84u); f_121da620();
  /* 121e4a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a8c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 121e4a8f push eax */
  push32((uint32_t)(EAX));
  /* 121e4a90 call 0x121da620 */
  push32(0x121e4a95u); f_121da620();
  /* 121e4a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4a98 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4a9d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 121e4aa0 push edx */
  push32((uint32_t)(EDX));
  /* 121e4aa1 call 0x121da620 */
  push32(0x121e4aa6u); f_121da620();
  /* 121e4aa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4aab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4aae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 121e4ab1 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4ab2 call 0x121da620 */
  push32(0x121e4ab7u); f_121da620();
  /* 121e4ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4aba push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4abf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e4ac2 push eax */
  push32((uint32_t)(EAX));
  /* 121e4ac3 call 0x121da620 */
  push32(0x121e4ac8u); f_121da620();
  /* 121e4ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4acb push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4ad0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 121e4ad3 push edx */
  push32((uint32_t)(EDX));
  /* 121e4ad4 call 0x121da620 */
  push32(0x121e4ad9u); f_121da620();
  /* 121e4ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4adc push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4ade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4ae1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 121e4ae4 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4ae5 call 0x121da620 */
  push32(0x121e4aeau); f_121da620();
  /* 121e4aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4aed push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4aef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4af2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 121e4af5 push eax */
  push32((uint32_t)(EAX));
  /* 121e4af6 call 0x121da620 */
  push32(0x121e4afbu); f_121da620();
  /* 121e4afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4afe push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 121e4b06 push edx */
  push32((uint32_t)(EDX));
  /* 121e4b07 call 0x121da620 */
  push32(0x121e4b0cu); f_121da620();
  /* 121e4b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b0f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 121e4b17 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4b18 call 0x121da620 */
  push32(0x121e4b1du); f_121da620();
  /* 121e4b1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 121e4b28 push eax */
  push32((uint32_t)(EAX));
  /* 121e4b29 call 0x121da620 */
  push32(0x121e4b2eu); f_121da620();
  /* 121e4b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b31 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 121e4b39 push edx */
  push32((uint32_t)(EDX));
  /* 121e4b3a call 0x121da620 */
  push32(0x121e4b3fu); f_121da620();
  /* 121e4b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b42 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 121e4b4a push ecx */
  push32((uint32_t)(ECX));
  /* 121e4b4b call 0x121da620 */
  push32(0x121e4b50u); f_121da620();
  /* 121e4b50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 121e4b5b push eax */
  push32((uint32_t)(EAX));
  /* 121e4b5c call 0x121da620 */
  push32(0x121e4b61u); f_121da620();
  /* 121e4b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b64 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 121e4b6c push edx */
  push32((uint32_t)(EDX));
  /* 121e4b6d call 0x121da620 */
  push32(0x121e4b72u); f_121da620();
  /* 121e4b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b75 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 121e4b7d push ecx */
  push32((uint32_t)(ECX));
  /* 121e4b7e call 0x121da620 */
  push32(0x121e4b83u); f_121da620();
  /* 121e4b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 121e4b8e push eax */
  push32((uint32_t)(EAX));
  /* 121e4b8f call 0x121da620 */
  push32(0x121e4b94u); f_121da620();
  /* 121e4b94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4b9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 121e4b9f push edx */
  push32((uint32_t)(EDX));
  /* 121e4ba0 call 0x121da620 */
  push32(0x121e4ba5u); f_121da620();
  /* 121e4ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4ba8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4baa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4bad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 121e4bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4bb1 call 0x121da620 */
  push32(0x121e4bb6u); f_121da620();
  /* 121e4bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4bb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4bbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4bbe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 121e4bc1 push eax */
  push32((uint32_t)(EAX));
  /* 121e4bc2 call 0x121da620 */
  push32(0x121e4bc7u); f_121da620();
  /* 121e4bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4bca push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4bcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4bcf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 121e4bd2 push edx */
  push32((uint32_t)(EDX));
  /* 121e4bd3 call 0x121da620 */
  push32(0x121e4bd8u); f_121da620();
  /* 121e4bd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4bdb push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4bdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4be0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 121e4be3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4be4 call 0x121da620 */
  push32(0x121e4be9u); f_121da620();
  /* 121e4be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4bec push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4bee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4bf1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 121e4bf4 push eax */
  push32((uint32_t)(EAX));
  /* 121e4bf5 call 0x121da620 */
  push32(0x121e4bfau); f_121da620();
  /* 121e4bfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4bfd push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 121e4c08 push edx */
  push32((uint32_t)(EDX));
  /* 121e4c09 call 0x121da620 */
  push32(0x121e4c0eu); f_121da620();
  /* 121e4c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c11 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 121e4c1c push ecx */
  push32((uint32_t)(ECX));
  /* 121e4c1d call 0x121da620 */
  push32(0x121e4c22u); f_121da620();
  /* 121e4c22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c25 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 121e4c30 push eax */
  push32((uint32_t)(EAX));
  /* 121e4c31 call 0x121da620 */
  push32(0x121e4c36u); f_121da620();
  /* 121e4c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c39 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 121e4c44 push edx */
  push32((uint32_t)(EDX));
  /* 121e4c45 call 0x121da620 */
  push32(0x121e4c4au); f_121da620();
  /* 121e4c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c4d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 121e4c58 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4c59 call 0x121da620 */
  push32(0x121e4c5eu); f_121da620();
  /* 121e4c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c61 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 121e4c6c push eax */
  push32((uint32_t)(EAX));
  /* 121e4c6d call 0x121da620 */
  push32(0x121e4c72u); f_121da620();
  /* 121e4c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c75 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 121e4c80 push edx */
  push32((uint32_t)(EDX));
  /* 121e4c81 call 0x121da620 */
  push32(0x121e4c86u); f_121da620();
  /* 121e4c86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c89 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4c8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 121e4c94 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4c95 call 0x121da620 */
  push32(0x121e4c9au); f_121da620();
  /* 121e4c9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4c9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4ca2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 121e4ca8 push eax */
  push32((uint32_t)(EAX));
  /* 121e4ca9 call 0x121da620 */
  push32(0x121e4caeu); f_121da620();
  /* 121e4cae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4cb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4cb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4cb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 121e4cbc push edx */
  push32((uint32_t)(EDX));
  /* 121e4cbd call 0x121da620 */
  push32(0x121e4cc2u); f_121da620();
  /* 121e4cc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4cc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4cca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 121e4cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4cd1 call 0x121da620 */
  push32(0x121e4cd6u); f_121da620();
  /* 121e4cd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e4cd9:;
  /* 121e4cd9 pop ebp */
  EBP = (pop32());
  /* 121e4cda ret  */
  ESPCHK(0x121e49d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ce0 @ 0x121e4ce0 (678 bytes, 180 insns) */
void f_121e4ce0(void) {
  FTRACE(0x121e4ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4ce1 mov ebp, esp */
  EBP = (ESP);
  /* 121e4ce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e4ce6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e4ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e4cef mov ax, word ptr [0x12205a1a] */
  AX = (r16((uint32_t)(0x12205a1a)));
  /* 121e4cf5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e4cf8 cmp dword ptr [0x122059c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4cff je 0x121e4e5a */
  if (C.zf) goto L_121e4e5a;
  /* 121e4d05 push 0x122059e8 */
  push32((uint32_t)(0x122059e8u));
  /* 121e4d0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 121e4d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4d0f push ecx */
  push32((uint32_t)(ECX));
  /* 121e4d10 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4d12 call 0x121e7d50 */
  push32(0x121e4d17u); f_121e7d50();
  /* 121e4d17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4d1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121e4d1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e4d22 push 0x122059ec */
  push32((uint32_t)(0x122059ecu));
  /* 121e4d27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 121e4d29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4d2c push eax */
  push32((uint32_t)(EAX));
  /* 121e4d2d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4d2f call 0x121e7d50 */
  push32(0x121e4d34u); f_121e7d50();
  /* 121e4d34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4d3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e4d3f push 0x122059f0 */
  push32((uint32_t)(0x122059f0u));
  /* 121e4d44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121e4d46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4d49 push edx */
  push32((uint32_t)(EDX));
  /* 121e4d4a push 1 */
  push32((uint32_t)(0x1u));
  /* 121e4d4c call 0x121e7d50 */
  push32(0x121e4d51u); f_121e7d50();
  /* 121e4d51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e4d57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e4d59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e4d5c mov edx, dword ptr [0x122059f0] */
  EDX = (r32((uint32_t)(0x122059f0)));
  /* 121e4d62 push edx */
  push32((uint32_t)(EDX));
  /* 121e4d63 call 0x121e4f90 */
  push32(0x121e4d68u); f_121e4f90();
  /* 121e4d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4d6f je 0x121e4dc9 */
  if (C.zf) goto L_121e4dc9;
  /* 121e4d71 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4d73 mov eax, dword ptr [0x122059e8] */
  EAX = (r32((uint32_t)(0x122059e8)));
  /* 121e4d78 push eax */
  push32((uint32_t)(EAX));
  /* 121e4d79 call 0x121da620 */
  push32(0x121e4d7eu); f_121da620();
  /* 121e4d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d81 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4d83 mov ecx, dword ptr [0x122059ec] */
  ECX = (r32((uint32_t)(0x122059ec)));
  /* 121e4d89 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4d8a call 0x121da620 */
  push32(0x121e4d8fu); f_121da620();
  /* 121e4d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4d92 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4d94 mov edx, dword ptr [0x122059f0] */
  EDX = (r32((uint32_t)(0x122059f0)));
  /* 121e4d9a push edx */
  push32((uint32_t)(EDX));
  /* 121e4d9b call 0x121da620 */
  push32(0x121e4da0u); f_121da620();
  /* 121e4da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4da3 mov dword ptr [0x122059e8], 0 */
  w32((uint32_t)(0x122059e8), (0x0u));
  /* 121e4dad mov dword ptr [0x122059ec], 0 */
  w32((uint32_t)(0x122059ec), (0x0u));
  /* 121e4db7 mov dword ptr [0x122059f0], 0 */
  w32((uint32_t)(0x122059f0), (0x0u));
  /* 121e4dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e4dc4 jmp 0x121e4f82 */
  goto L_121e4f82;
L_121e4dc9:;
  /* 121e4dc9 mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4dce cmp dword ptr [eax], 0x12204d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12204d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4dd4 je 0x121e4e10 */
  if (C.zf) goto L_121e4e10;
  /* 121e4dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4dd8 mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4dde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e4de0 push edx */
  push32((uint32_t)(EDX));
  /* 121e4de1 call 0x121da620 */
  push32(0x121e4de6u); f_121da620();
  /* 121e4de6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4de9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4deb mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4df0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e4df3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4df4 call 0x121da620 */
  push32(0x121e4df9u); f_121da620();
  /* 121e4df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4dfc push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4dfe mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4e04 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e4e07 push eax */
  push32((uint32_t)(EAX));
  /* 121e4e08 call 0x121da620 */
  push32(0x121e4e0du); f_121da620();
  /* 121e4e0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e4e10:;
  /* 121e4e10 mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4e16 mov edx, dword ptr [0x122059e8] */
  EDX = (r32((uint32_t)(0x122059e8)));
  /* 121e4e1c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121e4e1e mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4e23 mov ecx, dword ptr [0x122059ec] */
  ECX = (r32((uint32_t)(0x122059ec)));
  /* 121e4e29 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 121e4e2c mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4e32 mov eax, dword ptr [0x122059f0] */
  EAX = (r32((uint32_t)(0x122059f0)));
  /* 121e4e37 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121e4e3a mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4e40 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e4e42 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e4e44 mov byte ptr [0x12203ea8], al */
  w8((uint32_t)(0x12203ea8), (AL));
  /* 121e4e49 mov dword ptr [0x12203eac], 1 */
  w32((uint32_t)(0x12203eac), (0x1u));
  /* 121e4e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e4e55 jmp 0x121e4f82 */
  goto L_121e4f82;
L_121e4e5a:;
  /* 121e4e5a push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4e5c mov ecx, dword ptr [0x122059e8] */
  ECX = (r32((uint32_t)(0x122059e8)));
  /* 121e4e62 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4e63 call 0x121da620 */
  push32(0x121e4e68u); f_121da620();
  /* 121e4e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4e6d mov edx, dword ptr [0x122059ec] */
  EDX = (r32((uint32_t)(0x122059ec)));
  /* 121e4e73 push edx */
  push32((uint32_t)(EDX));
  /* 121e4e74 call 0x121da620 */
  push32(0x121e4e79u); f_121da620();
  /* 121e4e79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4e7e mov eax, dword ptr [0x122059f0] */
  EAX = (r32((uint32_t)(0x122059f0)));
  /* 121e4e83 push eax */
  push32((uint32_t)(EAX));
  /* 121e4e84 call 0x121da620 */
  push32(0x121e4e89u); f_121da620();
  /* 121e4e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4e8c mov dword ptr [0x122059e8], 0 */
  w32((uint32_t)(0x122059e8), (0x0u));
  /* 121e4e96 mov dword ptr [0x122059ec], 0 */
  w32((uint32_t)(0x122059ec), (0x0u));
  /* 121e4ea0 mov dword ptr [0x122059f0], 0 */
  w32((uint32_t)(0x122059f0), (0x0u));
  /* 121e4eaa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 121e4eaf push 0x122016cc */
  push32((uint32_t)(0x122016ccu));
  /* 121e4eb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4eb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4eb8 call 0x121d9b90 */
  push32(0x121e4ebdu); f_121d9b90();
  /* 121e4ebd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4ec0 mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4ec6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121e4ec8 mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4ece cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4ed1 jne 0x121e4edb */
  if (!C.zf) goto L_121e4edb;
  /* 121e4ed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e4ed6 jmp 0x121e4f82 */
  goto L_121e4f82;
L_121e4edb:;
  /* 121e4edb push 0x1220169c */
  push32((uint32_t)(0x1220169cu));
  /* 121e4ee0 mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4ee5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121e4ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e4ee8 call 0x121dcb40 */
  push32(0x121e4eedu); f_121dcb40();
  /* 121e4eed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4ef0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 121e4ef5 push 0x122016cc */
  push32((uint32_t)(0x122016ccu));
  /* 121e4efa push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4efc push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4efe call 0x121d9b90 */
  push32(0x121e4f03u); f_121d9b90();
  /* 121e4f03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4f06 mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f0c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121e4f0f mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f14 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4f18 jne 0x121e4f1f */
  if (!C.zf) goto L_121e4f1f;
  /* 121e4f1a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e4f1d jmp 0x121e4f82 */
  goto L_121e4f82;
L_121e4f1f:;
  /* 121e4f1f mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121e4f28 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121e4f2b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 121e4f30 push 0x122016cc */
  push32((uint32_t)(0x122016ccu));
  /* 121e4f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4f37 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e4f39 call 0x121d9b90 */
  push32(0x121e4f3eu); f_121d9b90();
  /* 121e4f3e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4f41 mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f47 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 121e4f4a mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f50 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4f54 jne 0x121e4f5b */
  if (!C.zf) goto L_121e4f5b;
  /* 121e4f56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e4f59 jmp 0x121e4f82 */
  goto L_121e4f82;
L_121e4f5b:;
  /* 121e4f5b mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f60 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121e4f63 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 121e4f66 mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e4f6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e4f6e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e4f70 mov byte ptr [0x12203ea8], cl */
  w8((uint32_t)(0x12203ea8), (CL));
  /* 121e4f76 mov dword ptr [0x12203eac], 1 */
  w32((uint32_t)(0x12203eac), (0x1u));
  /* 121e4f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e4f82:;
  /* 121e4f82 mov esp, ebp */
  ESP = (EBP);
  /* 121e4f84 pop ebp */
  EBP = (pop32());
  /* 121e4f85 ret  */
  ESPCHK(0x121e4ce0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x121e4f90 (125 bytes, 49 insns) */
void f_121e4f90(void) {
  FTRACE(0x121e4f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e4f90 push ebp */
  push32((uint32_t)(EBP));
  /* 121e4f91 mov ebp, esp */
  EBP = (ESP);
  /* 121e4f93 push ecx */
  push32((uint32_t)(ECX));
L_121e4f94:;
  /* 121e4f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4f97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e4f9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e4f9c je 0x121e5009 */
  if (C.zf) goto L_121e5009;
  /* 121e4f9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fa1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e4fa4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4fa7 jl 0x121e4fcd */
  if ((C.sf!=C.of)) goto L_121e4fcd;
  /* 121e4fa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e4faf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4fb2 jg 0x121e4fcd */
  if ((!C.zf&&C.sf==C.of)) goto L_121e4fcd;
  /* 121e4fb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e4fba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e4fbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fc0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121e4fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e4fcb jmp 0x121e5007 */
  goto L_121e5007;
L_121e4fcd:;
  /* 121e4fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e4fd3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e4fd6 jne 0x121e4ffe */
  if (!C.zf) goto L_121e4ffe;
  /* 121e4fd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e4fdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e4fde:;
  /* 121e4fde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4fe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4fe4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121e4fe7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e4fe9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4fec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e4fef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e4ff2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e4ff5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e4ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e4ffa jne 0x121e4fde */
  if (!C.zf) goto L_121e4fde;
  /* 121e4ffc jmp 0x121e5007 */
  goto L_121e5007;
L_121e4ffe:;
  /* 121e4ffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5004 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121e5007:;
  /* 121e5007 jmp 0x121e4f94 */
  goto L_121e4f94;
L_121e5009:;
  /* 121e5009 mov esp, ebp */
  ESP = (EBP);
  /* 121e500b pop ebp */
  EBP = (pop32());
  /* 121e500c ret  */
  ESPCHK(0x121e4f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10015010 @ 0x121e5010 (304 bytes, 85 insns) */
void f_121e5010(void) {
  FTRACE(0x121e5010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5010 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5011 mov ebp, esp */
  EBP = (ESP);
  /* 121e5013 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5014 cmp dword ptr [0x122059bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e501b je 0x121e50dc */
  if (C.zf) goto L_121e50dc;
  /* 121e5021 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 121e5023 push 0x122016d8 */
  push32((uint32_t)(0x122016d8u));
  /* 121e5028 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e502a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121e502c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e502e call 0x121d9fa0 */
  push32(0x121e5033u); f_121d9fa0();
  /* 121e5033 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5036 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e5039 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e503d jne 0x121e5049 */
  if (!C.zf) goto L_121e5049;
  /* 121e503f mov eax, 1 */
  EAX = (0x1u);
  /* 121e5044 jmp 0x121e513c */
  goto L_121e513c;
L_121e5049:;
  /* 121e5049 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e504c push eax */
  push32((uint32_t)(EAX));
  /* 121e504d call 0x121e5140 */
  push32(0x121e5052u); f_121e5140();
  /* 121e5052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5057 je 0x121e507d */
  if (C.zf) goto L_121e507d;
  /* 121e5059 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e505c push ecx */
  push32((uint32_t)(ECX));
  /* 121e505d call 0x121e53d0 */
  push32(0x121e5062u); f_121e53d0();
  /* 121e5062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5065 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e506a push edx */
  push32((uint32_t)(EDX));
  /* 121e506b call 0x121da620 */
  push32(0x121e5070u); f_121da620();
  /* 121e5070 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5073 mov eax, 1 */
  EAX = (0x1u);
  /* 121e5078 jmp 0x121e513c */
  goto L_121e513c;
L_121e507d:;
  /* 121e507d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5080 mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e5086 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e5088 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e508a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e508d mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e5093 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121e5096 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121e5099 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e509c mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e50a2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121e50a5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 121e50a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e50ab mov dword ptr [0x12204d88], eax */
  w32((uint32_t)(0x12204d88), (EAX));
  /* 121e50b0 mov ecx, dword ptr [0x122059f4] */
  ECX = (r32((uint32_t)(0x122059f4)));
  /* 121e50b6 push ecx */
  push32((uint32_t)(ECX));
  /* 121e50b7 call 0x121e53d0 */
  push32(0x121e50bcu); f_121e53d0();
  /* 121e50bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e50bf push 2 */
  push32((uint32_t)(0x2u));
  /* 121e50c1 mov edx, dword ptr [0x122059f4] */
  EDX = (r32((uint32_t)(0x122059f4)));
  /* 121e50c7 push edx */
  push32((uint32_t)(EDX));
  /* 121e50c8 call 0x121da620 */
  push32(0x121e50cdu); f_121da620();
  /* 121e50cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e50d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e50d3 mov dword ptr [0x122059f4], eax */
  w32((uint32_t)(0x122059f4), (EAX));
  /* 121e50d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e50da jmp 0x121e513c */
  goto L_121e513c;
L_121e50dc:;
  /* 121e50dc mov ecx, dword ptr [0x12204d88] */
  ECX = (r32((uint32_t)(0x12204d88)));
  /* 121e50e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e50e4 mov dword ptr [0x12204d58], edx */
  w32((uint32_t)(0x12204d58), (EDX));
  /* 121e50ea mov eax, dword ptr [0x12204d88] */
  EAX = (r32((uint32_t)(0x12204d88)));
  /* 121e50ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121e50f2 mov dword ptr [0x12204d5c], ecx */
  w32((uint32_t)(0x12204d5c), (ECX));
  /* 121e50f8 mov edx, dword ptr [0x12204d88] */
  EDX = (r32((uint32_t)(0x12204d88)));
  /* 121e50fe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e5101 mov dword ptr [0x12204d60], eax */
  w32((uint32_t)(0x12204d60), (EAX));
  /* 121e5106 mov dword ptr [0x12204d88], 0x12204d58 */
  w32((uint32_t)(0x12204d88), (0x12204d58u));
  /* 121e5110 mov ecx, dword ptr [0x122059f4] */
  ECX = (r32((uint32_t)(0x122059f4)));
  /* 121e5116 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5117 call 0x121e53d0 */
  push32(0x121e511cu); f_121e53d0();
  /* 121e511c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e511f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5121 mov edx, dword ptr [0x122059f4] */
  EDX = (r32((uint32_t)(0x122059f4)));
  /* 121e5127 push edx */
  push32((uint32_t)(EDX));
  /* 121e5128 call 0x121da620 */
  push32(0x121e512du); f_121da620();
  /* 121e512d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5130 mov dword ptr [0x122059f4], 0 */
  w32((uint32_t)(0x122059f4), (0x0u));
  /* 121e513a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e513c:;
  /* 121e513c mov esp, ebp */
  ESP = (EBP);
  /* 121e513e pop ebp */
  EBP = (pop32());
  /* 121e513f ret  */
  ESPCHK(0x121e5010u, _esp0);
  ESP += 4; return;
}

/* FUN_10015140 @ 0x121e5140 (525 bytes, 200 insns) */
void f_121e5140(void) {
  FTRACE(0x121e5140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5140 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5141 mov ebp, esp */
  EBP = (ESP);
  /* 121e5143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5146 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e514d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e514f mov ax, word ptr [0x12205a14] */
  AX = (r16((uint32_t)(0x12205a14)));
  /* 121e5155 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e5158 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e515c jne 0x121e5166 */
  if (!C.zf) goto L_121e5166;
  /* 121e515e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e5161 jmp 0x121e5349 */
  goto L_121e5349;
L_121e5166:;
  /* 121e5166 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5169 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e516c push ecx */
  push32((uint32_t)(ECX));
  /* 121e516d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 121e516f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5172 push edx */
  push32((uint32_t)(EDX));
  /* 121e5173 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5175 call 0x121e7d50 */
  push32(0x121e517au); f_121e7d50();
  /* 121e517a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e517d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5180 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5182 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e5185 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5188 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e518b push edx */
  push32((uint32_t)(EDX));
  /* 121e518c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 121e518e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5191 push eax */
  push32((uint32_t)(EAX));
  /* 121e5192 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5194 call 0x121e7d50 */
  push32(0x121e5199u); f_121e7d50();
  /* 121e5199 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e519c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e519f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e51a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e51a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e51a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51aa push edx */
  push32((uint32_t)(EDX));
  /* 121e51ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121e51ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e51b0 push eax */
  push32((uint32_t)(EAX));
  /* 121e51b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e51b3 call 0x121e7d50 */
  push32(0x121e51b8u); f_121e7d50();
  /* 121e51b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e51be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e51c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e51c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e51c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51c9 push edx */
  push32((uint32_t)(EDX));
  /* 121e51ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121e51cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e51cf push eax */
  push32((uint32_t)(EAX));
  /* 121e51d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e51d2 call 0x121e7d50 */
  push32(0x121e51d7u); f_121e7d50();
  /* 121e51d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e51dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e51df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e51e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e51e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51e8 push edx */
  push32((uint32_t)(EDX));
  /* 121e51e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121e51eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e51ee push eax */
  push32((uint32_t)(EAX));
  /* 121e51ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121e51f1 call 0x121e7d50 */
  push32(0x121e51f6u); f_121e7d50();
  /* 121e51f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e51f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e51fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e51fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e5201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5204 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121e5207 push eax */
  push32((uint32_t)(EAX));
  /* 121e5208 call 0x121e5350 */
  push32(0x121e520du); f_121e5350();
  /* 121e520d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5213 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5216 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5217 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 121e5219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e521c push edx */
  push32((uint32_t)(EDX));
  /* 121e521d push 1 */
  push32((uint32_t)(0x1u));
  /* 121e521f call 0x121e7d50 */
  push32(0x121e5224u); f_121e7d50();
  /* 121e5224 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5227 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e522a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e522c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e522f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5232 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5235 push edx */
  push32((uint32_t)(EDX));
  /* 121e5236 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 121e5238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e523b push eax */
  push32((uint32_t)(EAX));
  /* 121e523c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e523e call 0x121e7d50 */
  push32(0x121e5243u); f_121e7d50();
  /* 121e5243 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5246 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5249 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e524b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e524e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5251 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5254 push edx */
  push32((uint32_t)(EDX));
  /* 121e5255 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121e5257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e525a push eax */
  push32((uint32_t)(EAX));
  /* 121e525b push 0 */
  push32((uint32_t)(0x0u));
  /* 121e525d call 0x121e7d50 */
  push32(0x121e5262u); f_121e7d50();
  /* 121e5262 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5265 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5268 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e526a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e526d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5270 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5273 push edx */
  push32((uint32_t)(EDX));
  /* 121e5274 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121e5276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5279 push eax */
  push32((uint32_t)(EAX));
  /* 121e527a push 0 */
  push32((uint32_t)(0x0u));
  /* 121e527c call 0x121e7d50 */
  push32(0x121e5281u); f_121e7d50();
  /* 121e5281 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5284 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5287 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5289 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e528c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e528f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5292 push edx */
  push32((uint32_t)(EDX));
  /* 121e5293 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 121e5295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5298 push eax */
  push32((uint32_t)(EAX));
  /* 121e5299 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e529b call 0x121e7d50 */
  push32(0x121e52a0u); f_121e7d50();
  /* 121e52a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e52a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e52a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e52ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e52ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52b1 push edx */
  push32((uint32_t)(EDX));
  /* 121e52b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 121e52b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e52b7 push eax */
  push32((uint32_t)(EAX));
  /* 121e52b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e52ba call 0x121e7d50 */
  push32(0x121e52bfu); f_121e7d50();
  /* 121e52bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e52c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e52c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e52ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e52cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52d0 push edx */
  push32((uint32_t)(EDX));
  /* 121e52d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 121e52d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e52d6 push eax */
  push32((uint32_t)(EAX));
  /* 121e52d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e52d9 call 0x121e7d50 */
  push32(0x121e52deu); f_121e7d50();
  /* 121e52de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e52e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e52e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e52e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e52ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e52ef push edx */
  push32((uint32_t)(EDX));
  /* 121e52f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 121e52f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e52f5 push eax */
  push32((uint32_t)(EAX));
  /* 121e52f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e52f8 call 0x121e7d50 */
  push32(0x121e52fdu); f_121e7d50();
  /* 121e52fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5300 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5303 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5305 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e5308 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e530b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e530e push edx */
  push32((uint32_t)(EDX));
  /* 121e530f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 121e5311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5314 push eax */
  push32((uint32_t)(EAX));
  /* 121e5315 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e5317 call 0x121e7d50 */
  push32(0x121e531cu); f_121e7d50();
  /* 121e531c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e531f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5322 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5324 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e5327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e532a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e532d push edx */
  push32((uint32_t)(EDX));
  /* 121e532e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 121e5330 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5333 push eax */
  push32((uint32_t)(EAX));
  /* 121e5334 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e5336 call 0x121e7d50 */
  push32(0x121e533bu); f_121e7d50();
  /* 121e533b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e533e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e5341 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5343 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e5346 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121e5349:;
  /* 121e5349 mov esp, ebp */
  ESP = (EBP);
  /* 121e534b pop ebp */
  EBP = (pop32());
  /* 121e534c ret  */
  ESPCHK(0x121e5140u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x121e5350 (125 bytes, 49 insns) */
void f_121e5350(void) {
  FTRACE(0x121e5350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5350 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5351 mov ebp, esp */
  EBP = (ESP);
  /* 121e5353 push ecx */
  push32((uint32_t)(ECX));
L_121e5354:;
  /* 121e5354 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5357 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e535a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e535c je 0x121e53c9 */
  if (C.zf) goto L_121e53c9;
  /* 121e535e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5361 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e5364 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5367 jl 0x121e538d */
  if ((C.sf!=C.of)) goto L_121e538d;
  /* 121e5369 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e536c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e536f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5372 jg 0x121e538d */
  if ((!C.zf&&C.sf==C.of)) goto L_121e538d;
  /* 121e5374 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5377 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e537a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e537d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5380 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121e5382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5388 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e538b jmp 0x121e53c7 */
  goto L_121e53c7;
L_121e538d:;
  /* 121e538d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5390 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e5393 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5396 jne 0x121e53be */
  if (!C.zf) goto L_121e53be;
  /* 121e5398 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e539b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e539e:;
  /* 121e539e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e53a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e53a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121e53a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121e53a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e53ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e53af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e53b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e53b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e53b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e53ba jne 0x121e539e */
  if (!C.zf) goto L_121e539e;
  /* 121e53bc jmp 0x121e53c7 */
  goto L_121e53c7;
L_121e53be:;
  /* 121e53be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e53c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e53c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121e53c7:;
  /* 121e53c7 jmp 0x121e5354 */
  goto L_121e5354;
L_121e53c9:;
  /* 121e53c9 mov esp, ebp */
  ESP = (EBP);
  /* 121e53cb pop ebp */
  EBP = (pop32());
  /* 121e53cc ret  */
  ESPCHK(0x121e5350u, _esp0);
  ESP += 4; return;
}

/* FUN_100153d0 @ 0x121e53d0 (147 bytes, 52 insns) */
void f_121e53d0(void) {
  FTRACE(0x121e53d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e53d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e53d1 mov ebp, esp */
  EBP = (ESP);
  /* 121e53d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e53d7 jne 0x121e53de */
  if (!C.zf) goto L_121e53de;
  /* 121e53d9 jmp 0x121e5461 */
  goto L_121e5461;
L_121e53de:;
  /* 121e53de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e53e1 cmp dword ptr [eax + 0xc], 0x12205a50 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12205a50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e53e8 je 0x121e5461 */
  if (C.zf) goto L_121e5461;
  /* 121e53ea push 2 */
  push32((uint32_t)(0x2u));
  /* 121e53ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e53ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e53f2 push edx */
  push32((uint32_t)(EDX));
  /* 121e53f3 call 0x121da620 */
  push32(0x121e53f8u); f_121da620();
  /* 121e53f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e53fb push 2 */
  push32((uint32_t)(0x2u));
  /* 121e53fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5400 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121e5403 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5404 call 0x121da620 */
  push32(0x121e5409u); f_121da620();
  /* 121e5409 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e540c push 2 */
  push32((uint32_t)(0x2u));
  /* 121e540e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5411 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121e5414 push eax */
  push32((uint32_t)(EAX));
  /* 121e5415 call 0x121da620 */
  push32(0x121e541au); f_121da620();
  /* 121e541a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e541d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e541f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5422 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121e5425 push edx */
  push32((uint32_t)(EDX));
  /* 121e5426 call 0x121da620 */
  push32(0x121e542bu); f_121da620();
  /* 121e542b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e542e push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5433 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121e5436 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5437 call 0x121da620 */
  push32(0x121e543cu); f_121da620();
  /* 121e543c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e543f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5441 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5444 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 121e5447 push eax */
  push32((uint32_t)(EAX));
  /* 121e5448 call 0x121da620 */
  push32(0x121e544du); f_121da620();
  /* 121e544d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5450 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5455 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 121e5458 push edx */
  push32((uint32_t)(EDX));
  /* 121e5459 call 0x121da620 */
  push32(0x121e545eu); f_121da620();
  /* 121e545e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e5461:;
  /* 121e5461 pop ebp */
  EBP = (pop32());
  /* 121e5462 ret  */
  ESPCHK(0x121e53d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015470 @ 0x121e5470 (928 bytes, 284 insns) */
void f_121e5470(void) {
  FTRACE(0x121e5470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5470 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5471 mov ebp, esp */
  EBP = (ESP);
  /* 121e5473 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5476 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 121e547d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 121e5484 cmp dword ptr [0x122059b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e548b je 0x121e57c1 */
  if (C.zf) goto L_121e57c1;
  /* 121e5491 cmp dword ptr [0x122059c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5498 jne 0x121e54c0 */
  if (!C.zf) goto L_121e54c0;
  /* 121e549a push 0x122059c8 */
  push32((uint32_t)(0x122059c8u));
  /* 121e549f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121e54a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e54a6 mov ax, word ptr [0x12205a0c] */
  AX = (r16((uint32_t)(0x12205a0c)));
  /* 121e54ac push eax */
  push32((uint32_t)(EAX));
  /* 121e54ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121e54af call 0x121e7d50 */
  push32(0x121e54b4u); f_121e7d50();
  /* 121e54b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e54b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e54b9 je 0x121e54c0 */
  if (C.zf) goto L_121e54c0;
  /* 121e54bb jmp 0x121e5782 */
  goto L_121e5782;
L_121e54c0:;
  /* 121e54c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 121e54c2 push 0x122016e4 */
  push32((uint32_t)(0x122016e4u));
  /* 121e54c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e54c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121e54ce call 0x121d9b90 */
  push32(0x121e54d3u); f_121d9b90();
  /* 121e54d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e54d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121e54d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121e54db push 0x122016e4 */
  push32((uint32_t)(0x122016e4u));
  /* 121e54e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e54e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121e54e7 call 0x121d9b90 */
  push32(0x121e54ecu); f_121d9b90();
  /* 121e54ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e54ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121e54f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 121e54f4 push 0x122016e4 */
  push32((uint32_t)(0x122016e4u));
  /* 121e54f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e54fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 121e5500 call 0x121d9b90 */
  push32(0x121e5505u); f_121d9b90();
  /* 121e5505 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5508 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 121e550b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 121e550d push 0x122016e4 */
  push32((uint32_t)(0x122016e4u));
  /* 121e5512 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5514 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121e5519 call 0x121d9b90 */
  push32(0x121e551eu); f_121d9b90();
  /* 121e551e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5521 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121e5524 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5528 je 0x121e553c */
  if (C.zf) goto L_121e553c;
  /* 121e552a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e552e je 0x121e553c */
  if (C.zf) goto L_121e553c;
  /* 121e5530 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5534 je 0x121e553c */
  if (C.zf) goto L_121e553c;
  /* 121e5536 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e553a jne 0x121e5541 */
  if (!C.zf) goto L_121e5541;
L_121e553c:;
  /* 121e553c jmp 0x121e5782 */
  goto L_121e5782;
L_121e5541:;
  /* 121e5541 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e5544 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121e5547 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121e554e jmp 0x121e5559 */
  goto L_121e5559;
L_121e5550:;
  /* 121e5550 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e5553 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5556 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121e5559:;
  /* 121e5559 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5560 jge 0x121e5575 */
  if ((C.sf==C.of)) goto L_121e5575;
  /* 121e5562 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e5565 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 121e5568 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 121e556a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e556d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5570 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121e5573 jmp 0x121e5550 */
  goto L_121e5550;
L_121e5575:;
  /* 121e5575 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 121e5578 push eax */
  push32((uint32_t)(EAX));
  /* 121e5579 mov ecx, dword ptr [0x122059c8] */
  ECX = (r32((uint32_t)(0x122059c8)));
  /* 121e557f push ecx */
  push32((uint32_t)(ECX));
  /* 121e5580 call dword ptr [0x12208330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12208330))), 0x121e5586u);
  /* 121e5586 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5588 jne 0x121e558f */
  if (!C.zf) goto L_121e558f;
  /* 121e558a jmp 0x121e5782 */
  goto L_121e5782;
L_121e558f:;
  /* 121e558f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5593 jbe 0x121e559a */
  if ((C.cf||C.zf)) goto L_121e559a;
  /* 121e5595 jmp 0x121e5782 */
  goto L_121e5782;
L_121e559a:;
  /* 121e559a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e559d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e55a3 mov dword ptr [0x12203ea4], edx */
  w32((uint32_t)(0x12203ea4), (EDX));
  /* 121e55a9 cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e55b0 jle 0x121e5609 */
  if ((C.zf||C.sf!=C.of)) goto L_121e5609;
  /* 121e55b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 121e55b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121e55b8 jmp 0x121e55c3 */
  goto L_121e55c3;
L_121e55ba:;
  /* 121e55ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e55bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e55c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_121e55c3:;
  /* 121e55c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e55c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e55c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e55ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e55cc je 0x121e5609 */
  if (C.zf) goto L_121e5609;
  /* 121e55ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e55d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e55d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121e55d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e55d8 je 0x121e5609 */
  if (C.zf) goto L_121e5609;
  /* 121e55da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e55dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e55df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e55e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121e55e4 jmp 0x121e55ef */
  goto L_121e55ef;
L_121e55e6:;
  /* 121e55e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e55e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e55ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121e55ef:;
  /* 121e55ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e55f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e55f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121e55f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e55fa jg 0x121e5607 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e5607;
  /* 121e55fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e55ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5602 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121e5605 jmp 0x121e55e6 */
  goto L_121e55e6;
L_121e5607:;
  /* 121e5607 jmp 0x121e55ba */
  goto L_121e55ba;
L_121e5609:;
  /* 121e5609 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e560b push 0 */
  push32((uint32_t)(0x0u));
  /* 121e560d push 0 */
  push32((uint32_t)(0x0u));
  /* 121e560f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e5612 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5615 push eax */
  push32((uint32_t)(EAX));
  /* 121e5616 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e561b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e561e push ecx */
  push32((uint32_t)(ECX));
  /* 121e561f push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5621 call 0x121e1dc0 */
  push32(0x121e5626u); f_121e1dc0();
  /* 121e5626 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e562b jne 0x121e5632 */
  if (!C.zf) goto L_121e5632;
  /* 121e562d jmp 0x121e5782 */
  goto L_121e5782;
L_121e5632:;
  /* 121e5632 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e5635 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 121e563a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e563d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121e5640 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121e5647 jmp 0x121e5652 */
  goto L_121e5652;
L_121e5649:;
  /* 121e5649 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e564c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e564f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121e5652:;
  /* 121e5652 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5659 jge 0x121e5670 */
  if ((C.sf==C.of)) goto L_121e5670;
  /* 121e565b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e565e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 121e5662 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 121e5665 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121e5668 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e566b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121e566e jmp 0x121e5649 */
  goto L_121e5649;
L_121e5670:;
  /* 121e5670 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e5672 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e5674 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e5677 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e567a push edx */
  push32((uint32_t)(EDX));
  /* 121e567b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121e5680 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e5683 push eax */
  push32((uint32_t)(EAX));
  /* 121e5684 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5686 call 0x121e7ff0 */
  push32(0x121e568bu); f_121e7ff0();
  /* 121e568b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e568e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5690 jne 0x121e5697 */
  if (!C.zf) goto L_121e5697;
  /* 121e5692 jmp 0x121e5782 */
  goto L_121e5782;
L_121e5697:;
  /* 121e5697 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e569a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 121e569f cmp dword ptr [0x12203ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12203ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e56a6 jle 0x121e5703 */
  if ((C.zf||C.sf!=C.of)) goto L_121e5703;
  /* 121e56a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 121e56ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121e56ae jmp 0x121e56b9 */
  goto L_121e56b9;
L_121e56b0:;
  /* 121e56b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e56b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e56b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121e56b9:;
  /* 121e56b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e56bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121e56be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121e56c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e56c2 je 0x121e5703 */
  if (C.zf) goto L_121e5703;
  /* 121e56c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e56c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e56c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121e56cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e56ce je 0x121e5703 */
  if (C.zf) goto L_121e5703;
  /* 121e56d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e56d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e56d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e56d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121e56da jmp 0x121e56e5 */
  goto L_121e56e5;
L_121e56dc:;
  /* 121e56dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e56df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e56e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121e56e5:;
  /* 121e56e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121e56e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e56ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121e56ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e56f0 jg 0x121e5701 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e5701;
  /* 121e56f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121e56f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e56f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 121e56ff jmp 0x121e56dc */
  goto L_121e56dc;
L_121e5701:;
  /* 121e5701 jmp 0x121e56b0 */
  goto L_121e56b0;
L_121e5703:;
  /* 121e5703 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e5706 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5709 mov dword ptr [0x12203c98], eax */
  w32((uint32_t)(0x12203c98), (EAX));
  /* 121e570e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e5711 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5714 mov dword ptr [0x12203c9c], ecx */
  w32((uint32_t)(0x12203c9c), (ECX));
  /* 121e571a cmp dword ptr [0x122059f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5721 je 0x121e5734 */
  if (C.zf) goto L_121e5734;
  /* 121e5723 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5725 mov edx, dword ptr [0x122059f8] */
  EDX = (r32((uint32_t)(0x122059f8)));
  /* 121e572b push edx */
  push32((uint32_t)(EDX));
  /* 121e572c call 0x121da620 */
  push32(0x121e5731u); f_121da620();
  /* 121e5731 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e5734:;
  /* 121e5734 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e5737 mov dword ptr [0x122059f8], eax */
  w32((uint32_t)(0x122059f8), (EAX));
  /* 121e573c cmp dword ptr [0x122059fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x122059fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5743 je 0x121e5756 */
  if (C.zf) goto L_121e5756;
  /* 121e5745 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5747 mov ecx, dword ptr [0x122059fc] */
  ECX = (r32((uint32_t)(0x122059fc)));
  /* 121e574d push ecx */
  push32((uint32_t)(ECX));
  /* 121e574e call 0x121da620 */
  push32(0x121e5753u); f_121da620();
  /* 121e5753 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e5756:;
  /* 121e5756 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e5759 mov dword ptr [0x122059fc], edx */
  w32((uint32_t)(0x122059fc), (EDX));
  /* 121e575f push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5761 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e5764 push eax */
  push32((uint32_t)(EAX));
  /* 121e5765 call 0x121da620 */
  push32(0x121e576au); f_121da620();
  /* 121e576a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e576d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e576f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e5772 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5773 call 0x121da620 */
  push32(0x121e5778u); f_121da620();
  /* 121e5778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e577b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e577d jmp 0x121e580c */
  goto L_121e580c;
L_121e5782:;
  /* 121e5782 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5784 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121e5787 push edx */
  push32((uint32_t)(EDX));
  /* 121e5788 call 0x121da620 */
  push32(0x121e578du); f_121da620();
  /* 121e578d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5790 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e5792 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121e5795 push eax */
  push32((uint32_t)(EAX));
  /* 121e5796 call 0x121da620 */
  push32(0x121e579bu); f_121da620();
  /* 121e579b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e579e push 2 */
  push32((uint32_t)(0x2u));
  /* 121e57a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121e57a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e57a4 call 0x121da620 */
  push32(0x121e57a9u); f_121da620();
  /* 121e57a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e57ac push 2 */
  push32((uint32_t)(0x2u));
  /* 121e57ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121e57b1 push edx */
  push32((uint32_t)(EDX));
  /* 121e57b2 call 0x121da620 */
  push32(0x121e57b7u); f_121da620();
  /* 121e57b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e57ba mov eax, 1 */
  EAX = (0x1u);
  /* 121e57bf jmp 0x121e580c */
  goto L_121e580c;
L_121e57c1:;
  /* 121e57c1 mov dword ptr [0x12203c98], 0x12203ca2 */
  w32((uint32_t)(0x12203c98), (0x12203ca2u));
  /* 121e57cb mov dword ptr [0x12203c9c], 0x12203ca2 */
  w32((uint32_t)(0x12203c9c), (0x12203ca2u));
  /* 121e57d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e57d7 mov eax, dword ptr [0x122059f8] */
  EAX = (r32((uint32_t)(0x122059f8)));
  /* 121e57dc push eax */
  push32((uint32_t)(EAX));
  /* 121e57dd call 0x121da620 */
  push32(0x121e57e2u); f_121da620();
  /* 121e57e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e57e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121e57e7 mov ecx, dword ptr [0x122059fc] */
  ECX = (r32((uint32_t)(0x122059fc)));
  /* 121e57ed push ecx */
  push32((uint32_t)(ECX));
  /* 121e57ee call 0x121da620 */
  push32(0x121e57f3u); f_121da620();
  /* 121e57f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e57f6 mov dword ptr [0x122059f8], 0 */
  w32((uint32_t)(0x122059f8), (0x0u));
  /* 121e5800 mov dword ptr [0x122059fc], 0 */
  w32((uint32_t)(0x122059fc), (0x0u));
  /* 121e580a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e580c:;
  /* 121e580c mov esp, ebp */
  ESP = (EBP);
  /* 121e580e pop ebp */
  EBP = (pop32());
  /* 121e580f ret  */
  ESPCHK(0x121e5470u, _esp0);
  ESP += 4; return;
}

/* FUN_10015810 @ 0x121e5810 (7 bytes, 5 insns) */
void f_121e5810(void) {
  FTRACE(0x121e5810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5810 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5811 mov ebp, esp */
  EBP = (ESP);
  /* 121e5813 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5815 pop ebp */
  EBP = (pop32());
  /* 121e5816 ret  */
  ESPCHK(0x121e5810u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x121e5820 (129 bytes, 56 insns) */
void f_121e5820(void) {
  FTRACE(0x121e5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5820 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 121e5824 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 121e5828 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121e582e jne 0x121e586c */
  if (!C.zf) goto L_121e586c;
L_121e5830:;
  /* 121e5830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121e5832 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5834 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e5836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e5838 je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e583a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e583d jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e583f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121e5841 je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e5843 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121e5846 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5849 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e584b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e584d je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e584f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5852 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e5854 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5857 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e585a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121e585c jne 0x121e5830 */
  if (!C.zf) goto L_121e5830;
  /* 121e585e mov edi, edi */
  EDI = (EDI);
L_121e5860:;
  /* 121e5860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5862 ret  */
  ESPCHK(0x121e5820u, _esp0);
  ESP += 4; return;
  /* 121e5863 nop  */
  /* nop */
L_121e5864:;
  /* 121e5864 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5866 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e5868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 121e5869 ret  */
  ESPCHK(0x121e5820u, _esp0);
  ESP += 4; return;
  /* 121e586a mov edi, edi */
  EDI = (EDI);
L_121e586c:;
  /* 121e586c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 121e5872 je 0x121e5888 */
  if (C.zf) goto L_121e5888;
  /* 121e5874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e5876 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121e5877 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5879 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e587b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121e587c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e587e je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e5880 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 121e5886 je 0x121e5830 */
  if (C.zf) goto L_121e5830;
L_121e5888:;
  /* 121e5888 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 121e588b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e588e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5890 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e5892 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e5894 je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e5896 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5899 jne 0x121e5864 */
  if (!C.zf) goto L_121e5864;
  /* 121e589b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121e589d je 0x121e5860 */
  if (C.zf) goto L_121e5860;
  /* 121e589f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e58a2 jmp 0x121e5830 */
  goto L_121e5830;
}

/* FUN_100158b0 @ 0x121e58b0 (62 bytes, 35 insns) */
void f_121e58b0(void) {
  FTRACE(0x121e58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e58b1 mov ebp, esp */
  EBP = (ESP);
  /* 121e58b3 push esi */
  push32((uint32_t)(ESI));
  /* 121e58b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e58b6 push eax */
  push32((uint32_t)(EAX));
  /* 121e58b7 push eax */
  push32((uint32_t)(EAX));
  /* 121e58b8 push eax */
  push32((uint32_t)(EAX));
  /* 121e58b9 push eax */
  push32((uint32_t)(EAX));
  /* 121e58ba push eax */
  push32((uint32_t)(EAX));
  /* 121e58bb push eax */
  push32((uint32_t)(EAX));
  /* 121e58bc push eax */
  push32((uint32_t)(EAX));
  /* 121e58bd push eax */
  push32((uint32_t)(EAX));
  /* 121e58be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e58c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e58c4:;
  /* 121e58c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e58c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e58c8 je 0x121e58d1 */
  if (C.zf) goto L_121e58d1;
  /* 121e58ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121e58cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x121e58cb");
  /* 121e58cf jmp 0x121e58c4 */
  goto L_121e58c4;
L_121e58d1:;
  /* 121e58d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e58d4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121e58d7 nop  */
  /* nop */
L_121e58d8:;
  /* 121e58d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121e58d9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e58db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e58dd je 0x121e58e6 */
  if (C.zf) goto L_121e58e6;
  /* 121e58df inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e58e0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x121e58e0");
  /* 121e58e4 jae 0x121e58d8 */
  if (!C.cf) goto L_121e58d8;
L_121e58e6:;
  /* 121e58e6 mov eax, ecx */
  EAX = (ECX);
  /* 121e58e8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e58eb pop esi */
  ESI = (pop32());
  /* 121e58ec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e58ed ret  */
  ESPCHK(0x121e58b0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x121e58f0 (56 bytes, 31 insns) */
void f_121e58f0(void) {
  FTRACE(0x121e58f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e58f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e58f1 mov ebp, esp */
  EBP = (ESP);
  /* 121e58f3 push edi */
  push32((uint32_t)(EDI));
  /* 121e58f4 push esi */
  push32((uint32_t)(ESI));
  /* 121e58f5 push ebx */
  push32((uint32_t)(EBX));
  /* 121e58f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e58f9 jecxz 0x121e5921 */
  x86_unimpl("jecxz @ 0x121e58f9");
  /* 121e58fb mov ebx, ecx */
  EBX = (ECX);
  /* 121e58fd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5900 mov esi, edi */
  ESI = (EDI);
  /* 121e5902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5904 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 121e5906 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e5908 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e590a mov edi, esi */
  EDI = (ESI);
  /* 121e590c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121e590f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 121e5911 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 121e5914 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5916 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121e5919 ja 0x121e591f */
  if ((!C.cf&&!C.zf)) goto L_121e591f;
  /* 121e591b je 0x121e5921 */
  if (C.zf) goto L_121e5921;
  /* 121e591d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121e591e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_121e591f:;
  /* 121e591f not ecx */
  ECX = (~(ECX));
L_121e5921:;
  /* 121e5921 mov eax, ecx */
  EAX = (ECX);
  /* 121e5923 pop ebx */
  EBX = (pop32());
  /* 121e5924 pop esi */
  ESI = (pop32());
  /* 121e5925 pop edi */
  EDI = (pop32());
  /* 121e5926 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e5927 ret  */
  ESPCHK(0x121e58f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015930 @ 0x121e5930 (58 bytes, 32 insns) */
void f_121e5930(void) {
  FTRACE(0x121e5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5930 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5931 mov ebp, esp */
  EBP = (ESP);
  /* 121e5933 push esi */
  push32((uint32_t)(ESI));
  /* 121e5934 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5936 push eax */
  push32((uint32_t)(EAX));
  /* 121e5937 push eax */
  push32((uint32_t)(EAX));
  /* 121e5938 push eax */
  push32((uint32_t)(EAX));
  /* 121e5939 push eax */
  push32((uint32_t)(EAX));
  /* 121e593a push eax */
  push32((uint32_t)(EAX));
  /* 121e593b push eax */
  push32((uint32_t)(EAX));
  /* 121e593c push eax */
  push32((uint32_t)(EAX));
  /* 121e593d push eax */
  push32((uint32_t)(EAX));
  /* 121e593e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e5941 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121e5944:;
  /* 121e5944 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e5946 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e5948 je 0x121e5951 */
  if (C.zf) goto L_121e5951;
  /* 121e594a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121e594b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x121e594b");
  /* 121e594f jmp 0x121e5944 */
  goto L_121e5944;
L_121e5951:;
  /* 121e5951 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_121e5954:;
  /* 121e5954 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121e5956 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121e5958 je 0x121e5964 */
  if (C.zf) goto L_121e5964;
  /* 121e595a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121e595b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x121e595b");
  /* 121e595f jae 0x121e5954 */
  if (!C.cf) goto L_121e5954;
  /* 121e5961 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_121e5964:;
  /* 121e5964 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5967 pop esi */
  ESI = (pop32());
  /* 121e5968 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121e5969 ret  */
  ESPCHK(0x121e5930u, _esp0);
  ESP += 4; return;
}

/* FUN_10015970 @ 0x121e5970 (512 bytes, 147 insns) */
void f_121e5970(void) {
  FTRACE(0x121e5970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5970 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5971 mov ebp, esp */
  EBP = (ESP);
  /* 121e5973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5976 cmp dword ptr [0x12205a44], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e597d jne 0x121e59a2 */
  if (!C.zf) goto L_121e59a2;
  /* 121e597f call 0x121e6440 */
  push32(0x121e5984u); f_121e6440();
  /* 121e5984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5986 je 0x121e5992 */
  if (C.zf) goto L_121e5992;
  /* 121e5988 mov eax, dword ptr [0x122082f4] */
  EAX = (r32((uint32_t)(0x122082f4)));
  /* 121e598d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e5990 jmp 0x121e5999 */
  goto L_121e5999;
L_121e5992:;
  /* 121e5992 mov dword ptr [ebp - 8], 0x121e6490 */
  w32((uint32_t)(EBP + -0x8), (0x121e6490u));
L_121e5999:;
  /* 121e5999 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e599c mov dword ptr [0x12205a44], ecx */
  w32((uint32_t)(0x12205a44), (ECX));
L_121e59a2:;
  /* 121e59a2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e59a6 jne 0x121e59b2 */
  if (!C.zf) goto L_121e59b2;
  /* 121e59a8 call 0x121e6290 */
  push32(0x121e59adu); f_121e6290();
  /* 121e59ad jmp 0x121e5a7e */
  goto L_121e5a7e;
L_121e59b2:;
  /* 121e59b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e59b5 mov dword ptr [0x12205a34], edx */
  w32((uint32_t)(0x12205a34), (EDX));
  /* 121e59bb cmp dword ptr [0x12205a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e59c2 je 0x121e59e4 */
  if (C.zf) goto L_121e59e4;
  /* 121e59c4 mov eax, dword ptr [0x12205a34] */
  EAX = (r32((uint32_t)(0x12205a34)));
  /* 121e59c9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e59cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e59ce je 0x121e59e4 */
  if (C.zf) goto L_121e59e4;
  /* 121e59d0 push 0x12205a34 */
  push32((uint32_t)(0x12205a34u));
  /* 121e59d5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121e59d7 push 0x12204a90 */
  push32((uint32_t)(0x12204a90u));
  /* 121e59dc call 0x121e5b70 */
  push32(0x121e59e1u); f_121e5b70();
  /* 121e59e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e59e4:;
  /* 121e59e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e59e7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e59ea mov dword ptr [0x12205a38], edx */
  w32((uint32_t)(0x12205a38), (EDX));
  /* 121e59f0 cmp dword ptr [0x12205a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e59f7 je 0x121e5a19 */
  if (C.zf) goto L_121e5a19;
  /* 121e59f9 mov eax, dword ptr [0x12205a38] */
  EAX = (r32((uint32_t)(0x12205a38)));
  /* 121e59fe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e5a01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e5a03 je 0x121e5a19 */
  if (C.zf) goto L_121e5a19;
  /* 121e5a05 push 0x12205a38 */
  push32((uint32_t)(0x12205a38u));
  /* 121e5a0a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121e5a0c push 0x122049d8 */
  push32((uint32_t)(0x122049d8u));
  /* 121e5a11 call 0x121e5b70 */
  push32(0x121e5a16u); f_121e5b70();
  /* 121e5a16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e5a19:;
  /* 121e5a19 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e5a23 cmp dword ptr [0x12205a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5a2a je 0x121e5a5d */
  if (C.zf) goto L_121e5a5d;
  /* 121e5a2c mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e5a32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121e5a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5a37 je 0x121e5a5d */
  if (C.zf) goto L_121e5a5d;
  /* 121e5a39 cmp dword ptr [0x12205a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5a40 je 0x121e5a56 */
  if (C.zf) goto L_121e5a56;
  /* 121e5a42 mov ecx, dword ptr [0x12205a38] */
  ECX = (r32((uint32_t)(0x12205a38)));
  /* 121e5a48 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121e5a4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e5a4d je 0x121e5a56 */
  if (C.zf) goto L_121e5a56;
  /* 121e5a4f call 0x121e5c00 */
  push32(0x121e5a54u); f_121e5c00();
  /* 121e5a54 jmp 0x121e5a5b */
  goto L_121e5a5b;
L_121e5a56:;
  /* 121e5a56 call 0x121e5ff0 */
  push32(0x121e5a5bu); f_121e5ff0();
L_121e5a5b:;
  /* 121e5a5b jmp 0x121e5a7e */
  goto L_121e5a7e;
L_121e5a5d:;
  /* 121e5a5d cmp dword ptr [0x12205a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5a64 je 0x121e5a79 */
  if (C.zf) goto L_121e5a79;
  /* 121e5a66 mov eax, dword ptr [0x12205a38] */
  EAX = (r32((uint32_t)(0x12205a38)));
  /* 121e5a6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e5a6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e5a70 je 0x121e5a79 */
  if (C.zf) goto L_121e5a79;
  /* 121e5a72 call 0x121e6190 */
  push32(0x121e5a77u); f_121e6190();
  /* 121e5a77 jmp 0x121e5a7e */
  goto L_121e5a7e;
L_121e5a79:;
  /* 121e5a79 call 0x121e6290 */
  push32(0x121e5a7eu); f_121e6290();
L_121e5a7e:;
  /* 121e5a7e cmp dword ptr [0x12205a3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5a85 jne 0x121e5a8e */
  if (!C.zf) goto L_121e5a8e;
  /* 121e5a87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5a89 jmp 0x121e5b6c */
  goto L_121e5b6c;
L_121e5a8e:;
  /* 121e5a8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5a91 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5a97 push edx */
  push32((uint32_t)(EDX));
  /* 121e5a98 call 0x121e62c0 */
  push32(0x121e5a9du); f_121e62c0();
  /* 121e5a9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e5aa3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5aa7 je 0x121e5abc */
  if (C.zf) goto L_121e5abc;
  /* 121e5aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5aac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e5ab1 push eax */
  push32((uint32_t)(EAX));
  /* 121e5ab2 call dword ptr [0x122082f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f8))), 0x121e5ab8u);
  /* 121e5ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5aba jne 0x121e5ac3 */
  if (!C.zf) goto L_121e5ac3;
L_121e5abc:;
  /* 121e5abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5abe jmp 0x121e5b6c */
  goto L_121e5b6c;
L_121e5ac3:;
  /* 121e5ac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5ac5 mov ecx, dword ptr [0x12205a24] */
  ECX = (r32((uint32_t)(0x12205a24)));
  /* 121e5acb push ecx */
  push32((uint32_t)(ECX));
  /* 121e5acc call dword ptr [0x122082fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082fc))), 0x121e5ad2u);
  /* 121e5ad2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5ad4 jne 0x121e5add */
  if (!C.zf) goto L_121e5add;
  /* 121e5ad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5ad8 jmp 0x121e5b6c */
  goto L_121e5b6c;
L_121e5add:;
  /* 121e5add cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5ae1 je 0x121e5b08 */
  if (C.zf) goto L_121e5b08;
  /* 121e5ae3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e5ae6 mov ax, word ptr [0x12205a24] */
  AX = (r16((uint32_t)(0x12205a24)));
  /* 121e5aec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 121e5aef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e5af2 mov dx, word ptr [0x12205a40] */
  DX = (r16((uint32_t)(0x12205a40)));
  /* 121e5af9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 121e5afd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e5b00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 121e5b04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_121e5b08:;
  /* 121e5b08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5b0c je 0x121e5b67 */
  if (C.zf) goto L_121e5b67;
  /* 121e5b0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121e5b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e5b13 push edx */
  push32((uint32_t)(EDX));
  /* 121e5b14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 121e5b19 mov eax, dword ptr [0x12205a24] */
  EAX = (r32((uint32_t)(0x12205a24)));
  /* 121e5b1e push eax */
  push32((uint32_t)(EAX));
  /* 121e5b1f call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e5b25u);
  /* 121e5b25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5b27 jne 0x121e5b2d */
  if (!C.zf) goto L_121e5b2d;
  /* 121e5b29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5b2b jmp 0x121e5b6c */
  goto L_121e5b6c;
L_121e5b2d:;
  /* 121e5b2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121e5b2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e5b32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5b35 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5b36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 121e5b3b mov edx, dword ptr [0x12205a40] */
  EDX = (r32((uint32_t)(0x12205a40)));
  /* 121e5b41 push edx */
  push32((uint32_t)(EDX));
  /* 121e5b42 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e5b48u);
  /* 121e5b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5b4a jne 0x121e5b50 */
  if (!C.zf) goto L_121e5b50;
  /* 121e5b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e5b4e jmp 0x121e5b6c */
  goto L_121e5b6c;
L_121e5b50:;
  /* 121e5b50 push 0xa */
  push32((uint32_t)(0xau));
  /* 121e5b52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e5b55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5b5a push eax */
  push32((uint32_t)(EAX));
  /* 121e5b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5b5e push ecx */
  push32((uint32_t)(ECX));
  /* 121e5b5f call 0x121dc6d0 */
  push32(0x121e5b64u); f_121dc6d0();
  /* 121e5b64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e5b67:;
  /* 121e5b67 mov eax, 1 */
  EAX = (0x1u);
L_121e5b6c:;
  /* 121e5b6c mov esp, ebp */
  ESP = (EBP);
  /* 121e5b6e pop ebp */
  EBP = (pop32());
  /* 121e5b6f ret  */
  ESPCHK(0x121e5970u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b70 @ 0x121e5b70 (130 bytes, 47 insns) */
void f_121e5b70(void) {
  FTRACE(0x121e5b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5b70 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5b71 mov ebp, esp */
  EBP = (ESP);
  /* 121e5b73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5b76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121e5b7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_121e5b84:;
  /* 121e5b84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e5b87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5b8a jg 0x121e5bee */
  if ((!C.zf&&C.sf==C.of)) goto L_121e5bee;
  /* 121e5b8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5b90 je 0x121e5bee */
  if (C.zf) goto L_121e5bee;
  /* 121e5b92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e5b95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5b98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e5b99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5b9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e5b9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e5ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5ba6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 121e5ba9 push eax */
  push32((uint32_t)(EAX));
  /* 121e5baa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e5bad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121e5baf push edx */
  push32((uint32_t)(EDX));
  /* 121e5bb0 call 0x121e8260 */
  push32(0x121e5bb5u); f_121e8260();
  /* 121e5bb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5bb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e5bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5bbf jne 0x121e5bd2 */
  if (!C.zf) goto L_121e5bd2;
  /* 121e5bc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5bc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5bc7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 121e5bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e5bce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121e5bd0 jmp 0x121e5bec */
  goto L_121e5bec;
L_121e5bd2:;
  /* 121e5bd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5bd6 jge 0x121e5be3 */
  if ((C.sf==C.of)) goto L_121e5be3;
  /* 121e5bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5bdb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5bde mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 121e5be1 jmp 0x121e5bec */
  goto L_121e5bec;
L_121e5be3:;
  /* 121e5be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5be6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5be9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121e5bec:;
  /* 121e5bec jmp 0x121e5b84 */
  goto L_121e5b84;
L_121e5bee:;
  /* 121e5bee mov esp, ebp */
  ESP = (EBP);
  /* 121e5bf0 pop ebp */
  EBP = (pop32());
  /* 121e5bf1 ret  */
  ESPCHK(0x121e5b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10015c00 @ 0x121e5c00 (186 bytes, 50 insns) */
void f_121e5c00(void) {
  FTRACE(0x121e5c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5c00 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5c01 mov ebp, esp */
  EBP = (ESP);
  /* 121e5c03 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5c04 mov eax, dword ptr [0x12205a34] */
  EAX = (r32((uint32_t)(0x12205a34)));
  /* 121e5c09 push eax */
  push32((uint32_t)(EAX));
  /* 121e5c0a call 0x121dc9c0 */
  push32(0x121e5c0fu); f_121dc9c0();
  /* 121e5c0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5c12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5c14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5c17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121e5c1a mov dword ptr [0x12205a30], ecx */
  w32((uint32_t)(0x12205a30), (ECX));
  /* 121e5c20 mov edx, dword ptr [0x12205a38] */
  EDX = (r32((uint32_t)(0x12205a38)));
  /* 121e5c26 push edx */
  push32((uint32_t)(EDX));
  /* 121e5c27 call 0x121dc9c0 */
  push32(0x121e5c2cu); f_121dc9c0();
  /* 121e5c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5c2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e5c31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5c34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121e5c37 mov dword ptr [0x12205a28], ecx */
  w32((uint32_t)(0x12205a28), (ECX));
  /* 121e5c3d mov dword ptr [0x12205a24], 0 */
  w32((uint32_t)(0x12205a24), (0x0u));
  /* 121e5c47 cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5c4e je 0x121e5c59 */
  if (C.zf) goto L_121e5c59;
  /* 121e5c50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121e5c57 jmp 0x121e5c6b */
  goto L_121e5c6b;
L_121e5c59:;
  /* 121e5c59 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e5c5f push edx */
  push32((uint32_t)(EDX));
  /* 121e5c60 call 0x121e66a0 */
  push32(0x121e5c65u); f_121e66a0();
  /* 121e5c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5c68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e5c6b:;
  /* 121e5c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e5c6e mov dword ptr [0x12205a2c], eax */
  w32((uint32_t)(0x12205a2c), (EAX));
  /* 121e5c73 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5c75 push 0x121e5cc0 */
  push32((uint32_t)(0x121e5cc0u));
  /* 121e5c7a call dword ptr [0x122082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f0))), 0x121e5c80u);
  /* 121e5c80 mov ecx, dword ptr [0x12205a3c] */
  ECX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5c86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 121e5c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e5c8e je 0x121e5cac */
  if (C.zf) goto L_121e5cac;
  /* 121e5c90 mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5c96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 121e5c9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e5c9e je 0x121e5cac */
  if (C.zf) goto L_121e5cac;
  /* 121e5ca0 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5ca5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 121e5ca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5caa jne 0x121e5cb6 */
  if (!C.zf) goto L_121e5cb6;
L_121e5cac:;
  /* 121e5cac mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
L_121e5cb6:;
  /* 121e5cb6 mov esp, ebp */
  ESP = (EBP);
  /* 121e5cb8 pop ebp */
  EBP = (pop32());
  /* 121e5cb9 ret  */
  ESPCHK(0x121e5c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10015cc0 @ 0x121e5cc0 (804 bytes, 220 insns) */
void f_121e5cc0(void) {
  FTRACE(0x121e5cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5cc1 mov ebp, esp */
  EBP = (ESP);
  /* 121e5cc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e5cc9 push eax */
  push32((uint32_t)(EAX));
  /* 121e5cca call 0x121e6620 */
  push32(0x121e5ccfu); f_121e6620();
  /* 121e5ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5cd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121e5cd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e5cd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e5cda push ecx */
  push32((uint32_t)(ECX));
  /* 121e5cdb mov edx, dword ptr [0x12205a28] */
  EDX = (r32((uint32_t)(0x12205a28)));
  /* 121e5ce1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e5ce3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5ce5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 121e5ceb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5cf1 push edx */
  push32((uint32_t)(EDX));
  /* 121e5cf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5cf5 push eax */
  push32((uint32_t)(EAX));
  /* 121e5cf6 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e5cfcu);
  /* 121e5cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5cfe jne 0x121e5d14 */
  if (!C.zf) goto L_121e5d14;
  /* 121e5d00 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e5d0a mov eax, 1 */
  EAX = (0x1u);
  /* 121e5d0f jmp 0x121e5fde */
  goto L_121e5fde;
L_121e5d14:;
  /* 121e5d14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e5d17 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5d18 mov edx, dword ptr [0x12205a38] */
  EDX = (r32((uint32_t)(0x12205a38)));
  /* 121e5d1e push edx */
  push32((uint32_t)(EDX));
  /* 121e5d1f call 0x121e8260 */
  push32(0x121e5d24u); f_121e8260();
  /* 121e5d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5d27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5d29 jne 0x121e5e4f */
  if (!C.zf) goto L_121e5e4f;
  /* 121e5d2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e5d31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121e5d34 push eax */
  push32((uint32_t)(EAX));
  /* 121e5d35 mov ecx, dword ptr [0x12205a30] */
  ECX = (r32((uint32_t)(0x12205a30)));
  /* 121e5d3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e5d3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5d3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 121e5d45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5d4b push ecx */
  push32((uint32_t)(ECX));
  /* 121e5d4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5d4f push edx */
  push32((uint32_t)(EDX));
  /* 121e5d50 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e5d56u);
  /* 121e5d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5d58 jne 0x121e5d6e */
  if (!C.zf) goto L_121e5d6e;
  /* 121e5d5a mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e5d64 mov eax, 1 */
  EAX = (0x1u);
  /* 121e5d69 jmp 0x121e5fde */
  goto L_121e5fde;
L_121e5d6e:;
  /* 121e5d6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121e5d71 push eax */
  push32((uint32_t)(EAX));
  /* 121e5d72 mov ecx, dword ptr [0x12205a34] */
  ECX = (r32((uint32_t)(0x12205a34)));
  /* 121e5d78 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5d79 call 0x121e8260 */
  push32(0x121e5d7eu); f_121e8260();
  /* 121e5d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5d83 jne 0x121e5db0 */
  if (!C.zf) goto L_121e5db0;
  /* 121e5d85 mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5d8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 121e5d91 mov dword ptr [0x12205a3c], edx */
  w32((uint32_t)(0x12205a3c), (EDX));
  /* 121e5d97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5d9a mov dword ptr [0x12205a40], eax */
  w32((uint32_t)(0x12205a40), (EAX));
  /* 121e5d9f mov ecx, dword ptr [0x12205a40] */
  ECX = (r32((uint32_t)(0x12205a40)));
  /* 121e5da5 mov dword ptr [0x12205a24], ecx */
  w32((uint32_t)(0x12205a24), (ECX));
  /* 121e5dab jmp 0x121e5e4f */
  goto L_121e5e4f;
L_121e5db0:;
  /* 121e5db0 mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5db6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 121e5db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e5dbb jne 0x121e5e4f */
  if (!C.zf) goto L_121e5e4f;
  /* 121e5dc1 cmp dword ptr [0x12205a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5dc8 je 0x121e5e1d */
  if (C.zf) goto L_121e5e1d;
  /* 121e5dca mov eax, dword ptr [0x12205a2c] */
  EAX = (r32((uint32_t)(0x12205a2c)));
  /* 121e5dcf push eax */
  push32((uint32_t)(EAX));
  /* 121e5dd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e5dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5dd4 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e5dda push edx */
  push32((uint32_t)(EDX));
  /* 121e5ddb call 0x121e8330 */
  push32(0x121e5de0u); f_121e8330();
  /* 121e5de0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5de3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5de5 jne 0x121e5e1d */
  if (!C.zf) goto L_121e5e1d;
  /* 121e5de7 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5dec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 121e5dee mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e5df3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5df6 mov dword ptr [0x12205a40], ecx */
  w32((uint32_t)(0x12205a40), (ECX));
  /* 121e5dfc mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e5e02 push edx */
  push32((uint32_t)(EDX));
  /* 121e5e03 call 0x121dc9c0 */
  push32(0x121e5e08u); f_121dc9c0();
  /* 121e5e08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5e0b cmp eax, dword ptr [0x12205a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12205a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5e11 jne 0x121e5e1b */
  if (!C.zf) goto L_121e5e1b;
  /* 121e5e13 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5e16 mov dword ptr [0x12205a24], eax */
  w32((uint32_t)(0x12205a24), (EAX));
L_121e5e1b:;
  /* 121e5e1b jmp 0x121e5e4f */
  goto L_121e5e4f;
L_121e5e1d:;
  /* 121e5e1d mov ecx, dword ptr [0x12205a3c] */
  ECX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5e23 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e5e26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e5e28 jne 0x121e5e4f */
  if (!C.zf) goto L_121e5e4f;
  /* 121e5e2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5e2d push edx */
  push32((uint32_t)(EDX));
  /* 121e5e2e call 0x121e6360 */
  push32(0x121e5e33u); f_121e6360();
  /* 121e5e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5e36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5e38 je 0x121e5e4f */
  if (C.zf) goto L_121e5e4f;
  /* 121e5e3a mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5e3f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 121e5e41 mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e5e46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5e49 mov dword ptr [0x12205a40], ecx */
  w32((uint32_t)(0x12205a40), (ECX));
L_121e5e4f:;
  /* 121e5e4f mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5e55 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 121e5e5b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5e61 je 0x121e5fd1 */
  if (C.zf) goto L_121e5fd1;
  /* 121e5e67 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e5e69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121e5e6c push eax */
  push32((uint32_t)(EAX));
  /* 121e5e6d mov ecx, dword ptr [0x12205a30] */
  ECX = (r32((uint32_t)(0x12205a30)));
  /* 121e5e73 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e5e75 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5e77 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 121e5e7d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5e83 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5e84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5e87 push edx */
  push32((uint32_t)(EDX));
  /* 121e5e88 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e5e8eu);
  /* 121e5e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5e90 jne 0x121e5ea6 */
  if (!C.zf) goto L_121e5ea6;
  /* 121e5e92 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e5e9c mov eax, 1 */
  EAX = (0x1u);
  /* 121e5ea1 jmp 0x121e5fde */
  goto L_121e5fde;
L_121e5ea6:;
  /* 121e5ea6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121e5ea9 push eax */
  push32((uint32_t)(EAX));
  /* 121e5eaa mov ecx, dword ptr [0x12205a34] */
  ECX = (r32((uint32_t)(0x12205a34)));
  /* 121e5eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5eb1 call 0x121e8260 */
  push32(0x121e5eb6u); f_121e8260();
  /* 121e5eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5ebb jne 0x121e5f70 */
  if (!C.zf) goto L_121e5f70;
  /* 121e5ec1 mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5ec7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121e5eca mov dword ptr [0x12205a3c], edx */
  w32((uint32_t)(0x12205a3c), (EDX));
  /* 121e5ed0 cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5ed7 je 0x121e5efa */
  if (C.zf) goto L_121e5efa;
  /* 121e5ed9 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5ede or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121e5ee1 mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e5ee6 cmp dword ptr [0x12205a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5eed jne 0x121e5ef8 */
  if (!C.zf) goto L_121e5ef8;
  /* 121e5eef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5ef2 mov dword ptr [0x12205a24], ecx */
  w32((uint32_t)(0x12205a24), (ECX));
L_121e5ef8:;
  /* 121e5ef8 jmp 0x121e5f6e */
  goto L_121e5f6e;
L_121e5efa:;
  /* 121e5efa cmp dword ptr [0x12205a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f01 je 0x121e5f4f */
  if (C.zf) goto L_121e5f4f;
  /* 121e5f03 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e5f09 push edx */
  push32((uint32_t)(EDX));
  /* 121e5f0a call 0x121dc9c0 */
  push32(0x121e5f0fu); f_121dc9c0();
  /* 121e5f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5f12 cmp eax, dword ptr [0x12205a2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12205a2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f18 jne 0x121e5f4f */
  if (!C.zf) goto L_121e5f4f;
  /* 121e5f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 121e5f1c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5f1f push eax */
  push32((uint32_t)(EAX));
  /* 121e5f20 call 0x121e63b0 */
  push32(0x121e5f25u); f_121e63b0();
  /* 121e5f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5f2a je 0x121e5f4d */
  if (C.zf) goto L_121e5f4d;
  /* 121e5f2c mov ecx, dword ptr [0x12205a3c] */
  ECX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5f32 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 121e5f35 mov dword ptr [0x12205a3c], ecx */
  w32((uint32_t)(0x12205a3c), (ECX));
  /* 121e5f3b cmp dword ptr [0x12205a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f42 jne 0x121e5f4d */
  if (!C.zf) goto L_121e5f4d;
  /* 121e5f44 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5f47 mov dword ptr [0x12205a24], edx */
  w32((uint32_t)(0x12205a24), (EDX));
L_121e5f4d:;
  /* 121e5f4d jmp 0x121e5f6e */
  goto L_121e5f6e;
L_121e5f4f:;
  /* 121e5f4f mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5f54 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121e5f57 mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e5f5c cmp dword ptr [0x12205a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f63 jne 0x121e5f6e */
  if (!C.zf) goto L_121e5f6e;
  /* 121e5f65 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5f68 mov dword ptr [0x12205a24], ecx */
  w32((uint32_t)(0x12205a24), (ECX));
L_121e5f6e:;
  /* 121e5f6e jmp 0x121e5fd1 */
  goto L_121e5fd1;
L_121e5f70:;
  /* 121e5f70 cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f77 jne 0x121e5fd1 */
  if (!C.zf) goto L_121e5fd1;
  /* 121e5f79 cmp dword ptr [0x12205a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5f80 je 0x121e5fd1 */
  if (C.zf) goto L_121e5fd1;
  /* 121e5f82 mov edx, dword ptr [0x12205a2c] */
  EDX = (r32((uint32_t)(0x12205a2c)));
  /* 121e5f88 push edx */
  push32((uint32_t)(EDX));
  /* 121e5f89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121e5f8c push eax */
  push32((uint32_t)(EAX));
  /* 121e5f8d mov ecx, dword ptr [0x12205a34] */
  ECX = (r32((uint32_t)(0x12205a34)));
  /* 121e5f93 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5f94 call 0x121e8330 */
  push32(0x121e5f99u); f_121e8330();
  /* 121e5f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5f9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5f9e jne 0x121e5fd1 */
  if (!C.zf) goto L_121e5fd1;
  /* 121e5fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e5fa2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5fa5 push edx */
  push32((uint32_t)(EDX));
  /* 121e5fa6 call 0x121e63b0 */
  push32(0x121e5fabu); f_121e63b0();
  /* 121e5fab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e5fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e5fb0 je 0x121e5fd1 */
  if (C.zf) goto L_121e5fd1;
  /* 121e5fb2 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5fb7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121e5fba mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e5fbf cmp dword ptr [0x12205a24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e5fc6 jne 0x121e5fd1 */
  if (!C.zf) goto L_121e5fd1;
  /* 121e5fc8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e5fcb mov dword ptr [0x12205a24], ecx */
  w32((uint32_t)(0x12205a24), (ECX));
L_121e5fd1:;
  /* 121e5fd1 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e5fd6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121e5fd9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e5fdb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e5fdd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121e5fde:;
  /* 121e5fde mov esp, ebp */
  ESP = (EBP);
  /* 121e5fe0 pop ebp */
  EBP = (pop32());
  /* 121e5fe1 ret 4 */
  ESPCHK(0x121e5cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015ff0 @ 0x121e5ff0 (116 bytes, 33 insns) */
void f_121e5ff0(void) {
  FTRACE(0x121e5ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e5ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e5ff1 mov ebp, esp */
  EBP = (ESP);
  /* 121e5ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 121e5ff4 mov eax, dword ptr [0x12205a34] */
  EAX = (r32((uint32_t)(0x12205a34)));
  /* 121e5ff9 push eax */
  push32((uint32_t)(EAX));
  /* 121e5ffa call 0x121dc9c0 */
  push32(0x121e5fffu); f_121dc9c0();
  /* 121e5fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6002 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e6004 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6007 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121e600a mov dword ptr [0x12205a30], ecx */
  w32((uint32_t)(0x12205a30), (ECX));
  /* 121e6010 cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6017 je 0x121e6022 */
  if (C.zf) goto L_121e6022;
  /* 121e6019 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121e6020 jmp 0x121e6034 */
  goto L_121e6034;
L_121e6022:;
  /* 121e6022 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e6028 push edx */
  push32((uint32_t)(EDX));
  /* 121e6029 call 0x121e66a0 */
  push32(0x121e602eu); f_121e66a0();
  /* 121e602e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6031 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e6034:;
  /* 121e6034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6037 mov dword ptr [0x12205a2c], eax */
  w32((uint32_t)(0x12205a2c), (EAX));
  /* 121e603c push 1 */
  push32((uint32_t)(0x1u));
  /* 121e603e push 0x121e6070 */
  push32((uint32_t)(0x121e6070u));
  /* 121e6043 call dword ptr [0x122082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f0))), 0x121e6049u);
  /* 121e6049 mov ecx, dword ptr [0x12205a3c] */
  ECX = (r32((uint32_t)(0x12205a3c)));
  /* 121e604f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121e6052 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e6054 jne 0x121e6060 */
  if (!C.zf) goto L_121e6060;
  /* 121e6056 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
L_121e6060:;
  /* 121e6060 mov esp, ebp */
  ESP = (EBP);
  /* 121e6062 pop ebp */
  EBP = (pop32());
  /* 121e6063 ret  */
  ESPCHK(0x121e5ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016070 @ 0x121e6070 (287 bytes, 86 insns) */
void f_121e6070(void) {
  FTRACE(0x121e6070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6070 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6071 mov ebp, esp */
  EBP = (ESP);
  /* 121e6073 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6076 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6079 push eax */
  push32((uint32_t)(EAX));
  /* 121e607a call 0x121e6620 */
  push32(0x121e607fu); f_121e6620();
  /* 121e607f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6082 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121e6085 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e6087 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e608a push ecx */
  push32((uint32_t)(ECX));
  /* 121e608b mov edx, dword ptr [0x12205a30] */
  EDX = (r32((uint32_t)(0x12205a30)));
  /* 121e6091 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e6093 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6095 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 121e609b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e60a1 push edx */
  push32((uint32_t)(EDX));
  /* 121e60a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e60a5 push eax */
  push32((uint32_t)(EAX));
  /* 121e60a6 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e60acu);
  /* 121e60ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e60ae jne 0x121e60c4 */
  if (!C.zf) goto L_121e60c4;
  /* 121e60b0 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e60ba mov eax, 1 */
  EAX = (0x1u);
  /* 121e60bf jmp 0x121e6189 */
  goto L_121e6189;
L_121e60c4:;
  /* 121e60c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e60c7 push ecx */
  push32((uint32_t)(ECX));
  /* 121e60c8 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e60ce push edx */
  push32((uint32_t)(EDX));
  /* 121e60cf call 0x121e8260 */
  push32(0x121e60d4u); f_121e8260();
  /* 121e60d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e60d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e60d9 jne 0x121e6119 */
  if (!C.zf) goto L_121e6119;
  /* 121e60db cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e60e2 jne 0x121e60f6 */
  if (!C.zf) goto L_121e60f6;
  /* 121e60e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e60e6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e60e9 push eax */
  push32((uint32_t)(EAX));
  /* 121e60ea call 0x121e63b0 */
  push32(0x121e60efu); f_121e63b0();
  /* 121e60ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e60f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e60f4 je 0x121e6117 */
  if (C.zf) goto L_121e6117;
L_121e60f6:;
  /* 121e60f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e60f9 mov dword ptr [0x12205a40], ecx */
  w32((uint32_t)(0x12205a40), (ECX));
  /* 121e60ff mov edx, dword ptr [0x12205a40] */
  EDX = (r32((uint32_t)(0x12205a40)));
  /* 121e6105 mov dword ptr [0x12205a24], edx */
  w32((uint32_t)(0x12205a24), (EDX));
  /* 121e610b mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e6110 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121e6112 mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
L_121e6117:;
  /* 121e6117 jmp 0x121e617c */
  goto L_121e617c;
L_121e6119:;
  /* 121e6119 cmp dword ptr [0x12205a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6120 jne 0x121e617c */
  if (!C.zf) goto L_121e617c;
  /* 121e6122 cmp dword ptr [0x12205a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12205a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6129 je 0x121e617c */
  if (C.zf) goto L_121e617c;
  /* 121e612b mov ecx, dword ptr [0x12205a2c] */
  ECX = (r32((uint32_t)(0x12205a2c)));
  /* 121e6131 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6132 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 121e6135 push edx */
  push32((uint32_t)(EDX));
  /* 121e6136 mov eax, dword ptr [0x12205a34] */
  EAX = (r32((uint32_t)(0x12205a34)));
  /* 121e613b push eax */
  push32((uint32_t)(EAX));
  /* 121e613c call 0x121e8330 */
  push32(0x121e6141u); f_121e8330();
  /* 121e6141 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6146 jne 0x121e617c */
  if (!C.zf) goto L_121e617c;
  /* 121e6148 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e614a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e614d push ecx */
  push32((uint32_t)(ECX));
  /* 121e614e call 0x121e63b0 */
  push32(0x121e6153u); f_121e63b0();
  /* 121e6153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6158 je 0x121e617c */
  if (C.zf) goto L_121e617c;
  /* 121e615a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e615d mov dword ptr [0x12205a40], edx */
  w32((uint32_t)(0x12205a40), (EDX));
  /* 121e6163 mov eax, dword ptr [0x12205a40] */
  EAX = (r32((uint32_t)(0x12205a40)));
  /* 121e6168 mov dword ptr [0x12205a24], eax */
  w32((uint32_t)(0x12205a24), (EAX));
  /* 121e616d mov ecx, dword ptr [0x12205a3c] */
  ECX = (r32((uint32_t)(0x12205a3c)));
  /* 121e6173 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121e6176 mov dword ptr [0x12205a3c], ecx */
  w32((uint32_t)(0x12205a3c), (ECX));
L_121e617c:;
  /* 121e617c mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e6181 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121e6184 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e6186 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6188 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121e6189:;
  /* 121e6189 mov esp, ebp */
  ESP = (EBP);
  /* 121e618b pop ebp */
  EBP = (pop32());
  /* 121e618c ret 4 */
  ESPCHK(0x121e6070u, _esp0);
  ESP += 8; return;
}

/* FUN_10016190 @ 0x121e6190 (69 bytes, 20 insns) */
void f_121e6190(void) {
  FTRACE(0x121e6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6190 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6191 mov ebp, esp */
  EBP = (ESP);
  /* 121e6193 mov eax, dword ptr [0x12205a38] */
  EAX = (r32((uint32_t)(0x12205a38)));
  /* 121e6198 push eax */
  push32((uint32_t)(EAX));
  /* 121e6199 call 0x121dc9c0 */
  push32(0x121e619eu); f_121dc9c0();
  /* 121e619e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e61a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e61a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e61a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121e61a9 mov dword ptr [0x12205a28], ecx */
  w32((uint32_t)(0x12205a28), (ECX));
  /* 121e61af push 1 */
  push32((uint32_t)(0x1u));
  /* 121e61b1 push 0x121e61e0 */
  push32((uint32_t)(0x121e61e0u));
  /* 121e61b6 call dword ptr [0x122082f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f0))), 0x121e61bcu);
  /* 121e61bc mov edx, dword ptr [0x12205a3c] */
  EDX = (r32((uint32_t)(0x12205a3c)));
  /* 121e61c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121e61c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e61c7 jne 0x121e61d3 */
  if (!C.zf) goto L_121e61d3;
  /* 121e61c9 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
L_121e61d3:;
  /* 121e61d3 pop ebp */
  EBP = (pop32());
  /* 121e61d4 ret  */
  ESPCHK(0x121e6190u, _esp0);
  ESP += 4; return;
}

/* FUN_100161e0 @ 0x121e61e0 (172 bytes, 54 insns) */
void f_121e61e0(void) {
  FTRACE(0x121e61e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e61e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e61e1 mov ebp, esp */
  EBP = (ESP);
  /* 121e61e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e61e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e61e9 push eax */
  push32((uint32_t)(EAX));
  /* 121e61ea call 0x121e6620 */
  push32(0x121e61efu); f_121e6620();
  /* 121e61ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e61f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121e61f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e61f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e61fa push ecx */
  push32((uint32_t)(ECX));
  /* 121e61fb mov edx, dword ptr [0x12205a28] */
  EDX = (r32((uint32_t)(0x12205a28)));
  /* 121e6201 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e6203 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6205 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 121e620b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6211 push edx */
  push32((uint32_t)(EDX));
  /* 121e6212 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e6215 push eax */
  push32((uint32_t)(EAX));
  /* 121e6216 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e621cu);
  /* 121e621c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e621e jne 0x121e6231 */
  if (!C.zf) goto L_121e6231;
  /* 121e6220 mov dword ptr [0x12205a3c], 0 */
  w32((uint32_t)(0x12205a3c), (0x0u));
  /* 121e622a mov eax, 1 */
  EAX = (0x1u);
  /* 121e622f jmp 0x121e6286 */
  goto L_121e6286;
L_121e6231:;
  /* 121e6231 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121e6234 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6235 mov edx, dword ptr [0x12205a38] */
  EDX = (r32((uint32_t)(0x12205a38)));
  /* 121e623b push edx */
  push32((uint32_t)(EDX));
  /* 121e623c call 0x121e8260 */
  push32(0x121e6241u); f_121e8260();
  /* 121e6241 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6244 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6246 jne 0x121e6279 */
  if (!C.zf) goto L_121e6279;
  /* 121e6248 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e624b push eax */
  push32((uint32_t)(EAX));
  /* 121e624c call 0x121e6360 */
  push32(0x121e6251u); f_121e6360();
  /* 121e6251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6256 je 0x121e6279 */
  if (C.zf) goto L_121e6279;
  /* 121e6258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121e625b mov dword ptr [0x12205a40], ecx */
  w32((uint32_t)(0x12205a40), (ECX));
  /* 121e6261 mov edx, dword ptr [0x12205a40] */
  EDX = (r32((uint32_t)(0x12205a40)));
  /* 121e6267 mov dword ptr [0x12205a24], edx */
  w32((uint32_t)(0x12205a24), (EDX));
  /* 121e626d mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e6272 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121e6274 mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
L_121e6279:;
  /* 121e6279 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e627e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121e6281 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121e6283 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6285 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121e6286:;
  /* 121e6286 mov esp, ebp */
  ESP = (EBP);
  /* 121e6288 pop ebp */
  EBP = (pop32());
  /* 121e6289 ret 4 */
  ESPCHK(0x121e61e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10016290 @ 0x121e6290 (43 bytes, 11 insns) */
void f_121e6290(void) {
  FTRACE(0x121e6290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6290 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6291 mov ebp, esp */
  EBP = (ESP);
  /* 121e6293 mov eax, dword ptr [0x12205a3c] */
  EAX = (r32((uint32_t)(0x12205a3c)));
  /* 121e6298 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 121e629d mov dword ptr [0x12205a3c], eax */
  w32((uint32_t)(0x12205a3c), (EAX));
  /* 121e62a2 call dword ptr [0x122082ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082ec))), 0x121e62a8u);
  /* 121e62a8 mov dword ptr [0x12205a40], eax */
  w32((uint32_t)(0x12205a40), (EAX));
  /* 121e62ad mov ecx, dword ptr [0x12205a40] */
  ECX = (r32((uint32_t)(0x12205a40)));
  /* 121e62b3 mov dword ptr [0x12205a24], ecx */
  w32((uint32_t)(0x12205a24), (ECX));
  /* 121e62b9 pop ebp */
  EBP = (pop32());
  /* 121e62ba ret  */
  ESPCHK(0x121e6290u, _esp0);
  ESP += 4; return;
}

/* FUN_100162c0 @ 0x121e62c0 (155 bytes, 57 insns) */
void f_121e62c0(void) {
  FTRACE(0x121e62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e62c1 mov ebp, esp */
  EBP = (ESP);
  /* 121e62c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e62c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e62ca je 0x121e62eb */
  if (C.zf) goto L_121e62eb;
  /* 121e62cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e62cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121e62d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e62d4 je 0x121e62eb */
  if (C.zf) goto L_121e62eb;
  /* 121e62d6 push 0x12201d74 */
  push32((uint32_t)(0x12201d74u));
  /* 121e62db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e62de push edx */
  push32((uint32_t)(EDX));
  /* 121e62df call 0x121e5820 */
  push32(0x121e62e4u); f_121e5820();
  /* 121e62e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e62e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e62e9 jne 0x121e6313 */
  if (!C.zf) goto L_121e6313;
L_121e62eb:;
  /* 121e62eb push 8 */
  push32((uint32_t)(0x8u));
  /* 121e62ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121e62f0 push eax */
  push32((uint32_t)(EAX));
  /* 121e62f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121e62f6 mov ecx, dword ptr [0x12205a40] */
  ECX = (r32((uint32_t)(0x12205a40)));
  /* 121e62fc push ecx */
  push32((uint32_t)(ECX));
  /* 121e62fd call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e6303u);
  /* 121e6303 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6305 jne 0x121e630b */
  if (!C.zf) goto L_121e630b;
  /* 121e6307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e6309 jmp 0x121e6357 */
  goto L_121e6357;
L_121e630b:;
  /* 121e630b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 121e630e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121e6311 jmp 0x121e634b */
  goto L_121e634b;
L_121e6313:;
  /* 121e6313 push 0x12201d70 */
  push32((uint32_t)(0x12201d70u));
  /* 121e6318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e631b push eax */
  push32((uint32_t)(EAX));
  /* 121e631c call 0x121e5820 */
  push32(0x121e6321u); f_121e5820();
  /* 121e6321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6324 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6326 jne 0x121e634b */
  if (!C.zf) goto L_121e634b;
  /* 121e6328 push 8 */
  push32((uint32_t)(0x8u));
  /* 121e632a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121e632d push ecx */
  push32((uint32_t)(ECX));
  /* 121e632e push 0xb */
  push32((uint32_t)(0xbu));
  /* 121e6330 mov edx, dword ptr [0x12205a40] */
  EDX = (r32((uint32_t)(0x12205a40)));
  /* 121e6336 push edx */
  push32((uint32_t)(EDX));
  /* 121e6337 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e633du);
  /* 121e633d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e633f jne 0x121e6345 */
  if (!C.zf) goto L_121e6345;
  /* 121e6341 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e6343 jmp 0x121e6357 */
  goto L_121e6357;
L_121e6345:;
  /* 121e6345 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121e6348 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121e634b:;
  /* 121e634b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e634e push ecx */
  push32((uint32_t)(ECX));
  /* 121e634f call 0x121e8440 */
  push32(0x121e6354u); f_121e8440();
  /* 121e6354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121e6357:;
  /* 121e6357 mov esp, ebp */
  ESP = (EBP);
  /* 121e6359 pop ebp */
  EBP = (pop32());
  /* 121e635a ret  */
  ESPCHK(0x121e62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016360 @ 0x121e6360 (79 bytes, 26 insns) */
void f_121e6360(void) {
  FTRACE(0x121e6360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6360 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6361 mov ebp, esp */
  EBP = (ESP);
  /* 121e6363 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6366 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 121e636a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 121e636e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e6375 jmp 0x121e6380 */
  goto L_121e6380;
L_121e6377:;
  /* 121e6377 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e637a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e637d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121e6380:;
  /* 121e6380 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6384 jae 0x121e63a6 */
  if (!C.cf) goto L_121e63a6;
  /* 121e6386 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6389 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121e638f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6392 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121e6394 mov cx, word ptr [eax*2 + 0x122049c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x122049c4)));
  /* 121e639c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e639e jne 0x121e63a4 */
  if (!C.zf) goto L_121e63a4;
  /* 121e63a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e63a2 jmp 0x121e63ab */
  goto L_121e63ab;
L_121e63a4:;
  /* 121e63a4 jmp 0x121e6377 */
  goto L_121e6377;
L_121e63a6:;
  /* 121e63a6 mov eax, 1 */
  EAX = (0x1u);
L_121e63ab:;
  /* 121e63ab mov esp, ebp */
  ESP = (EBP);
  /* 121e63ad pop ebp */
  EBP = (pop32());
  /* 121e63ae ret  */
  ESPCHK(0x121e6360u, _esp0);
  ESP += 4; return;
}

/* FUN_100163b0 @ 0x121e63b0 (135 bytes, 48 insns) */
void f_121e63b0(void) {
  FTRACE(0x121e63b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e63b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e63b1 mov ebp, esp */
  EBP = (ESP);
  /* 121e63b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e63b6 push esi */
  push32((uint32_t)(ESI));
  /* 121e63b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e63ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e63bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e63c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e63c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 121e63cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e63d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e63d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121e63d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 121e63d9 push ecx */
  push32((uint32_t)(ECX));
  /* 121e63da push 1 */
  push32((uint32_t)(0x1u));
  /* 121e63dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e63df push edx */
  push32((uint32_t)(EDX));
  /* 121e63e0 call dword ptr [0x12205a44] */
  call_ind((uint32_t)(r32((uint32_t)(0x12205a44))), 0x121e63e6u);
  /* 121e63e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e63e8 jne 0x121e63ee */
  if (!C.zf) goto L_121e63ee;
  /* 121e63ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e63ec jmp 0x121e6432 */
  goto L_121e6432;
L_121e63ee:;
  /* 121e63ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 121e63f1 push eax */
  push32((uint32_t)(EAX));
  /* 121e63f2 call 0x121e6620 */
  push32(0x121e63f7u); f_121e6620();
  /* 121e63f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e63fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e63fd je 0x121e642d */
  if (C.zf) goto L_121e642d;
  /* 121e63ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6403 je 0x121e642d */
  if (C.zf) goto L_121e642d;
  /* 121e6405 mov ecx, dword ptr [0x12205a34] */
  ECX = (r32((uint32_t)(0x12205a34)));
  /* 121e640b push ecx */
  push32((uint32_t)(ECX));
  /* 121e640c call 0x121e66a0 */
  push32(0x121e6411u); f_121e66a0();
  /* 121e6411 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6414 mov esi, eax */
  ESI = (EAX);
  /* 121e6416 mov edx, dword ptr [0x12205a34] */
  EDX = (r32((uint32_t)(0x12205a34)));
  /* 121e641c push edx */
  push32((uint32_t)(EDX));
  /* 121e641d call 0x121dc9c0 */
  push32(0x121e6422u); f_121dc9c0();
  /* 121e6422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6425 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6427 jne 0x121e642d */
  if (!C.zf) goto L_121e642d;
  /* 121e6429 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e642b jmp 0x121e6432 */
  goto L_121e6432;
L_121e642d:;
  /* 121e642d mov eax, 1 */
  EAX = (0x1u);
L_121e6432:;
  /* 121e6432 pop esi */
  ESI = (pop32());
  /* 121e6433 mov esp, ebp */
  ESP = (EBP);
  /* 121e6435 pop ebp */
  EBP = (pop32());
  /* 121e6436 ret  */
  ESPCHK(0x121e63b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016440 @ 0x121e6440 (77 bytes, 18 insns) */
void f_121e6440(void) {
  FTRACE(0x121e6440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6440 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6441 mov ebp, esp */
  EBP = (ESP);
  /* 121e6443 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6449 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 121e6453 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 121e6459 push eax */
  push32((uint32_t)(EAX));
  /* 121e645a call dword ptr [0x122082e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082e8))), 0x121e6460u);
  /* 121e6460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e6462 je 0x121e6479 */
  if (C.zf) goto L_121e6479;
  /* 121e6464 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e646b jne 0x121e6479 */
  if (!C.zf) goto L_121e6479;
  /* 121e646d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 121e6477 jmp 0x121e6483 */
  goto L_121e6483;
L_121e6479:;
  /* 121e6479 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_121e6483:;
  /* 121e6483 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121e6489 mov esp, ebp */
  ESP = (EBP);
  /* 121e648b pop ebp */
  EBP = (pop32());
  /* 121e648c ret  */
  ESPCHK(0x121e6440u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x121e6490 (388 bytes, 118 insns) */
void f_121e6490(void) {
  FTRACE(0x121e6490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6490 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6491 mov ebp, esp */
  EBP = (ESP);
  /* 121e6493 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6496 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e649d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 121e64a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121e64ab:;
  /* 121e64ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e64ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64b1 jg 0x121e65f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e65f8;
  /* 121e64b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e64ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e64bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121e64be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e64c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121e64c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e64c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e64c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e64cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e64ce cmp edx, dword ptr [ecx + 0x12204520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12204520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64d4 jne 0x121e65ce */
  if (!C.zf) goto L_121e65ce;
  /* 121e64da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e64dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e64e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64e4 ja 0x121e6507 */
  if ((!C.cf&&!C.zf)) goto L_121e6507;
  /* 121e64e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64ea je 0x121e6579 */
  if (C.zf) goto L_121e6579;
  /* 121e64f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64f4 je 0x121e6524 */
  if (C.zf) goto L_121e6524;
  /* 121e64f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e64fa je 0x121e6546 */
  if (C.zf) goto L_121e6546;
  /* 121e64fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6500 je 0x121e6568 */
  if (C.zf) goto L_121e6568;
  /* 121e6502 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6507:;
  /* 121e6507 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e650e je 0x121e6535 */
  if (C.zf) goto L_121e6535;
  /* 121e6510 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6517 je 0x121e6557 */
  if (C.zf) goto L_121e6557;
  /* 121e6519 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6520 je 0x121e658a */
  if (C.zf) goto L_121e658a;
  /* 121e6522 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6524:;
  /* 121e6524 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6527 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e652a add ecx, 0x12204524 */
  { uint32_t _a=(ECX),_b=(0x12204524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6530 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e6533 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6535:;
  /* 121e6535 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6538 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e653b mov eax, dword ptr [edx + 0x1220452c] */
  EAX = (r32((uint32_t)(EDX + 0x1220452c)));
  /* 121e6541 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e6544 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6546:;
  /* 121e6546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6549 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e654c add ecx, 0x12204530 */
  { uint32_t _a=(ECX),_b=(0x12204530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e6555 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6557:;
  /* 121e6557 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e655a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e655d mov eax, dword ptr [edx + 0x12204534] */
  EAX = (r32((uint32_t)(EDX + 0x12204534)));
  /* 121e6563 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121e6566 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6568:;
  /* 121e6568 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e656b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e656e add ecx, 0x12204538 */
  { uint32_t _a=(ECX),_b=(0x12204538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6574 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e6577 jmp 0x121e6598 */
  goto L_121e6598;
L_121e6579:;
  /* 121e6579 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e657c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e657f add edx, 0x1220453c */
  { uint32_t _a=(EDX),_b=(0x1220453cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6585 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e6588 jmp 0x121e6598 */
  goto L_121e6598;
L_121e658a:;
  /* 121e658a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e658d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e6590 add eax, 0x12204544 */
  { uint32_t _a=(EAX),_b=(0x12204544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6595 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121e6598:;
  /* 121e6598 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e659c je 0x121e65a4 */
  if (C.zf) goto L_121e65a4;
  /* 121e659e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e65a2 jge 0x121e65a6 */
  if ((C.sf==C.of)) goto L_121e65a6;
L_121e65a4:;
  /* 121e65a4 jmp 0x121e65f8 */
  goto L_121e65f8;
L_121e65a6:;
  /* 121e65a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e65a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e65ac push ecx */
  push32((uint32_t)(ECX));
  /* 121e65ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e65b0 push edx */
  push32((uint32_t)(EDX));
  /* 121e65b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e65b4 push eax */
  push32((uint32_t)(EAX));
  /* 121e65b5 call 0x121dd3b0 */
  push32(0x121e65bau); f_121dd3b0();
  /* 121e65ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e65bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e65c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e65c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 121e65c7 mov eax, 1 */
  EAX = (0x1u);
  /* 121e65cc jmp 0x121e660e */
  goto L_121e660e;
L_121e65ce:;
  /* 121e65ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e65d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e65d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e65d7 cmp eax, dword ptr [edx + 0x12204520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12204520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e65dd jae 0x121e65ea */
  if (!C.cf) goto L_121e65ea;
  /* 121e65df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e65e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e65e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121e65e8 jmp 0x121e65f3 */
  goto L_121e65f3;
L_121e65ea:;
  /* 121e65ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e65ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e65f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e65f3:;
  /* 121e65f3 jmp 0x121e64ab */
  goto L_121e64ab;
L_121e65f8:;
  /* 121e65f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121e65fb push eax */
  push32((uint32_t)(EAX));
  /* 121e65fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121e65ff push ecx */
  push32((uint32_t)(ECX));
  /* 121e6600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121e6603 push edx */
  push32((uint32_t)(EDX));
  /* 121e6604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6607 push eax */
  push32((uint32_t)(EAX));
  /* 121e6608 call dword ptr [0x122082f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082f4))), 0x121e660eu);
L_121e660e:;
  /* 121e660e mov esp, ebp */
  ESP = (EBP);
  /* 121e6610 pop ebp */
  EBP = (pop32());
  /* 121e6611 ret 0x10 */
  ESPCHK(0x121e6490u, _esp0);
  ESP += 20; return;
}

/* FUN_10016620 @ 0x121e6620 (118 bytes, 42 insns) */
void f_121e6620(void) {
  FTRACE(0x121e6620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6620 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6621 mov ebp, esp */
  EBP = (ESP);
  /* 121e6623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6626 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121e662d:;
  /* 121e662d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6630 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e6632 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 121e6635 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e6639 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e663c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e663f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121e6642 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e6644 je 0x121e668f */
  if (C.zf) goto L_121e668f;
  /* 121e6646 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e664a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e664d jl 0x121e6662 */
  if ((C.sf!=C.of)) goto L_121e6662;
  /* 121e664f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e6653 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6656 jg 0x121e6662 */
  if ((!C.zf&&C.sf==C.of)) goto L_121e6662;
  /* 121e6658 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121e665b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e665d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 121e6660 jmp 0x121e667c */
  goto L_121e667c;
L_121e6662:;
  /* 121e6662 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e6666 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6669 jl 0x121e667c */
  if ((C.sf!=C.of)) goto L_121e667c;
  /* 121e666b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e666f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6672 jg 0x121e667c */
  if ((!C.zf&&C.sf==C.of)) goto L_121e667c;
  /* 121e6674 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121e6677 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121e6679 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_121e667c:;
  /* 121e667c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e667f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 121e6682 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121e6686 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 121e668a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e668d jmp 0x121e662d */
  goto L_121e662d;
L_121e668f:;
  /* 121e668f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6692 mov esp, ebp */
  ESP = (EBP);
  /* 121e6694 pop ebp */
  EBP = (pop32());
  /* 121e6695 ret  */
  ESPCHK(0x121e6620u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x121e66a0 (101 bytes, 36 insns) */
void f_121e66a0(void) {
  FTRACE(0x121e66a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e66a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e66a1 mov ebp, esp */
  EBP = (ESP);
  /* 121e66a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e66a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e66ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e66b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121e66b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 121e66b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e66b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e66bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121e66be:;
  /* 121e66be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121e66c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e66c5 jl 0x121e66d0 */
  if ((C.sf!=C.of)) goto L_121e66d0;
  /* 121e66c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121e66cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e66ce jle 0x121e66e2 */
  if ((C.zf||C.sf!=C.of)) goto L_121e66e2;
L_121e66d0:;
  /* 121e66d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121e66d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e66d7 jl 0x121e66fe */
  if ((C.sf!=C.of)) goto L_121e66fe;
  /* 121e66d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121e66dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e66e0 jg 0x121e66fe */
  if ((!C.zf&&C.sf==C.of)) goto L_121e66fe;
L_121e66e2:;
  /* 121e66e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e66e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e66e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121e66eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e66ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121e66f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 121e66f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e66f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e66f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121e66fc jmp 0x121e66be */
  goto L_121e66be;
L_121e66fe:;
  /* 121e66fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6701 mov esp, ebp */
  ESP = (EBP);
  /* 121e6703 pop ebp */
  EBP = (pop32());
  /* 121e6704 ret  */
  ESPCHK(0x121e66a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016710 @ 0x121e6710 (122 bytes, 39 insns) */
void f_121e6710(void) {
  FTRACE(0x121e6710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6710 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6711 mov ebp, esp */
  EBP = (ESP);
  /* 121e6713 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6717 cmp eax, dword ptr [0x122072dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x122072dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e671d jae 0x121e6741 */
  if (!C.cf) goto L_121e6741;
  /* 121e671f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6722 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121e6725 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6728 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121e672b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e672e mov eax, dword ptr [ecx*4 + 0x122071a0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x122071a0)));
  /* 121e6735 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121e673a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121e673d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e673f jne 0x121e675c */
  if (!C.zf) goto L_121e675c;
L_121e6741:;
  /* 121e6741 call 0x121e1a60 */
  push32(0x121e6746u); f_121e1a60();
  /* 121e6746 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121e674c call 0x121e1a70 */
  push32(0x121e6751u); f_121e1a70();
  /* 121e6751 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121e6757 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e675a jmp 0x121e6786 */
  goto L_121e6786;
L_121e675c:;
  /* 121e675c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e675f push edx */
  push32((uint32_t)(EDX));
  /* 121e6760 call 0x121e3280 */
  push32(0x121e6765u); f_121e3280();
  /* 121e6765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e676b push eax */
  push32((uint32_t)(EAX));
  /* 121e676c call 0x121e6790 */
  push32(0x121e6771u); f_121e6790();
  /* 121e6771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6774 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e6777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e677a push ecx */
  push32((uint32_t)(ECX));
  /* 121e677b call 0x121e3310 */
  push32(0x121e6780u); f_121e3310();
  /* 121e6780 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121e6786:;
  /* 121e6786 mov esp, ebp */
  ESP = (EBP);
  /* 121e6788 pop ebp */
  EBP = (pop32());
  /* 121e6789 ret  */
  ESPCHK(0x121e6710u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x121e6790 (170 bytes, 59 insns) */
void f_121e6790(void) {
  FTRACE(0x121e6790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6790 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6791 mov ebp, esp */
  EBP = (ESP);
  /* 121e6793 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6794 push esi */
  push32((uint32_t)(ESI));
  /* 121e6795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6798 push eax */
  push32((uint32_t)(EAX));
  /* 121e6799 call 0x121e3100 */
  push32(0x121e679eu); f_121e3100();
  /* 121e679e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e67a1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e67a4 je 0x121e67e3 */
  if (C.zf) goto L_121e67e3;
  /* 121e67a6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e67aa je 0x121e67b2 */
  if (C.zf) goto L_121e67b2;
  /* 121e67ac cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e67b0 jne 0x121e67cc */
  if (!C.zf) goto L_121e67cc;
L_121e67b2:;
  /* 121e67b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121e67b4 call 0x121e3100 */
  push32(0x121e67b9u); f_121e3100();
  /* 121e67b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e67bc mov esi, eax */
  ESI = (EAX);
  /* 121e67be push 2 */
  push32((uint32_t)(0x2u));
  /* 121e67c0 call 0x121e3100 */
  push32(0x121e67c5u); f_121e3100();
  /* 121e67c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e67c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e67ca je 0x121e67e3 */
  if (C.zf) goto L_121e67e3;
L_121e67cc:;
  /* 121e67cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e67cf push ecx */
  push32((uint32_t)(ECX));
  /* 121e67d0 call 0x121e3100 */
  push32(0x121e67d5u); f_121e3100();
  /* 121e67d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e67d8 push eax */
  push32((uint32_t)(EAX));
  /* 121e67d9 call dword ptr [0x122082e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122082e4))), 0x121e67dfu);
  /* 121e67df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e67e1 je 0x121e67ec */
  if (C.zf) goto L_121e67ec;
L_121e67e3:;
  /* 121e67e3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121e67ea jmp 0x121e67f5 */
  goto L_121e67f5;
L_121e67ec:;
  /* 121e67ec call dword ptr [0x122083b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x122083b4))), 0x121e67f2u);
  /* 121e67f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121e67f5:;
  /* 121e67f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e67f8 push edx */
  push32((uint32_t)(EDX));
  /* 121e67f9 call 0x121e3020 */
  push32(0x121e67feu); f_121e3020();
  /* 121e67fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6804 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121e6807 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e680a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121e680d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121e6810 mov edx, dword ptr [eax*4 + 0x122071a0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x122071a0)));
  /* 121e6817 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 121e681c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6820 je 0x121e6833 */
  if (C.zf) goto L_121e6833;
  /* 121e6822 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6825 push eax */
  push32((uint32_t)(EAX));
  /* 121e6826 call 0x121e19c0 */
  push32(0x121e682bu); f_121e19c0();
  /* 121e682b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e682e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121e6831 jmp 0x121e6835 */
  goto L_121e6835;
L_121e6833:;
  /* 121e6833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121e6835:;
  /* 121e6835 pop esi */
  ESI = (pop32());
  /* 121e6836 mov esp, ebp */
  ESP = (EBP);
  /* 121e6838 pop ebp */
  EBP = (pop32());
  /* 121e6839 ret  */
  ESPCHK(0x121e6790u, _esp0);
  ESP += 4; return;
}

/* FUN_10016840 @ 0x121e6840 (146 bytes, 52 insns) */
void f_121e6840(void) {
  FTRACE(0x121e6840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6840 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6841 mov ebp, esp */
  EBP = (ESP);
  /* 121e6843 push ebx */
  push32((uint32_t)(EBX));
  /* 121e6844 push esi */
  push32((uint32_t)(ESI));
  /* 121e6845 push edi */
  push32((uint32_t)(EDI));
L_121e6846:;
  /* 121e6846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e684a jne 0x121e686a */
  if (!C.zf) goto L_121e686a;
  /* 121e684c push 0x122016b0 */
  push32((uint32_t)(0x122016b0u));
  /* 121e6851 push 0 */
  push32((uint32_t)(0x0u));
  /* 121e6853 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121e6855 push 0x12201d78 */
  push32((uint32_t)(0x12201d78u));
  /* 121e685a push 2 */
  push32((uint32_t)(0x2u));
  /* 121e685c call 0x121d8c50 */
  push32(0x121e6861u); f_121d8c50();
  /* 121e6861 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6864 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6867 jne 0x121e686a */
  if (!C.zf) goto L_121e686a;
  /* 121e6869 int3  */
  x86_unimpl("int3 @ 0x121e6869");
L_121e686a:;
  /* 121e686a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121e686c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121e686e jne 0x121e6846 */
  if (!C.zf) goto L_121e6846;
  /* 121e6870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6873 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e6876 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 121e687c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121e687e je 0x121e68cd */
  if (C.zf) goto L_121e68cd;
  /* 121e6880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6883 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121e6886 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 121e6889 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121e688b je 0x121e68cd */
  if (C.zf) goto L_121e68cd;
  /* 121e688d push 2 */
  push32((uint32_t)(0x2u));
  /* 121e688f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e6892 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121e6895 push eax */
  push32((uint32_t)(EAX));
  /* 121e6896 call 0x121da620 */
  push32(0x121e689bu); f_121da620();
  /* 121e689b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e689e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e68a1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121e68a4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 121e68aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e68ad mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121e68b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e68b3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 121e68b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e68bc mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 121e68c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121e68c6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_121e68cd:;
  /* 121e68cd pop edi */
  EDI = (pop32());
  /* 121e68ce pop esi */
  ESI = (pop32());
  /* 121e68cf pop ebx */
  EBX = (pop32());
  /* 121e68d0 pop ebp */
  EBP = (pop32());
  /* 121e68d1 ret  */
  ESPCHK(0x121e6840u, _esp0);
  ESP += 4; return;
}

/* FUN_100168e0 @ 0x121e68e0 (289 bytes, 97 insns) */
void f_121e68e0(void) {
  FTRACE(0x121e68e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e68e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121e68e1 mov ebp, esp */
  EBP = (ESP);
  /* 121e68e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e68e6 push esi */
  push32((uint32_t)(ESI));
  /* 121e68e7 mov eax, dword ptr [0x12204c98] */
  EAX = (r32((uint32_t)(0x12204c98)));
  /* 121e68ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e68ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e68f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e68fd jmp 0x121e6908 */
  goto L_121e6908;
L_121e68ff:;
  /* 121e68ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6902 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6905 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121e6908:;
  /* 121e6908 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e690c jae 0x121e6941 */
  if (!C.cf) goto L_121e6941;
  /* 121e690e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6911 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6914 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e6917 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6918 call 0x121dc9c0 */
  push32(0x121e691du); f_121dc9c0();
  /* 121e691d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6920 mov esi, eax */
  ESI = (EAX);
  /* 121e6922 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6928 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 121e692c push ecx */
  push32((uint32_t)(ECX));
  /* 121e692d call 0x121dc9c0 */
  push32(0x121e6932u); f_121dc9c0();
  /* 121e6932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6935 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6938 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121e693c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e693f jmp 0x121e68ff */
  goto L_121e68ff;
L_121e6941:;
  /* 121e6941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6944 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6947 push eax */
  push32((uint32_t)(EAX));
  /* 121e6948 call 0x121d9b70 */
  push32(0x121e694du); f_121d9b70();
  /* 121e694d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e6953 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6957 je 0x121e69f9 */
  if (C.zf) goto L_121e69f9;
  /* 121e695d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6960 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e6963 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e696a jmp 0x121e6975 */
  goto L_121e6975;
L_121e696c:;
  /* 121e696c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e696f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6972 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e6975:;
  /* 121e6975 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6979 jae 0x121e69ea */
  if (!C.cf) goto L_121e69ea;
  /* 121e697b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e697e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 121e6981 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6984 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6987 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e698a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e698d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6990 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121e6993 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6994 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6997 push edx */
  push32((uint32_t)(EDX));
  /* 121e6998 call 0x121dcb40 */
  push32(0x121e699du); f_121dcb40();
  /* 121e699d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69a0 push eax */
  push32((uint32_t)(EAX));
  /* 121e69a1 call 0x121dc9c0 */
  push32(0x121e69a6u); f_121dc9c0();
  /* 121e69a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69a9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69ac add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69ae mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e69b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69b4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121e69b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e69c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e69c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e69c6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121e69ca push eax */
  push32((uint32_t)(EAX));
  /* 121e69cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69ce push ecx */
  push32((uint32_t)(ECX));
  /* 121e69cf call 0x121dcb40 */
  push32(0x121e69d4u); f_121dcb40();
  /* 121e69d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69d7 push eax */
  push32((uint32_t)(EAX));
  /* 121e69d8 call 0x121dc9c0 */
  push32(0x121e69ddu); f_121dc9c0();
  /* 121e69dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69e5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e69e8 jmp 0x121e696c */
  goto L_121e696c;
L_121e69ea:;
  /* 121e69ea mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69ed mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121e69f0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e69f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e69f6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121e69f9:;
  /* 121e69f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e69fc pop esi */
  ESI = (pop32());
  /* 121e69fd mov esp, ebp */
  ESP = (EBP);
  /* 121e69ff pop ebp */
  EBP = (pop32());
  /* 121e6a00 ret  */
  ESPCHK(0x121e68e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10016a10 @ 0x121e6a10 (291 bytes, 97 insns) */
void f_121e6a10(void) {
  FTRACE(0x121e6a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121e6a10 push ebp */
  push32((uint32_t)(EBP));
  /* 121e6a11 mov ebp, esp */
  EBP = (ESP);
  /* 121e6a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121e6a16 push esi */
  push32((uint32_t)(ESI));
  /* 121e6a17 mov eax, dword ptr [0x12204c98] */
  EAX = (r32((uint32_t)(0x12204c98)));
  /* 121e6a1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121e6a1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121e6a26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6a2d jmp 0x121e6a38 */
  goto L_121e6a38;
L_121e6a2f:;
  /* 121e6a2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6a32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121e6a38:;
  /* 121e6a38 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6a3c jae 0x121e6a72 */
  if (!C.cf) goto L_121e6a72;
  /* 121e6a3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6a41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6a44 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 121e6a48 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6a49 call 0x121dc9c0 */
  push32(0x121e6a4eu); f_121dc9c0();
  /* 121e6a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a51 mov esi, eax */
  ESI = (EAX);
  /* 121e6a53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6a56 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6a59 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 121e6a5d push ecx */
  push32((uint32_t)(ECX));
  /* 121e6a5e call 0x121dc9c0 */
  push32(0x121e6a63u); f_121dc9c0();
  /* 121e6a63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a66 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a69 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121e6a6d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121e6a70 jmp 0x121e6a2f */
  goto L_121e6a2f;
L_121e6a72:;
  /* 121e6a72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121e6a75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a78 push eax */
  push32((uint32_t)(EAX));
  /* 121e6a79 call 0x121d9b70 */
  push32(0x121e6a7eu); f_121d9b70();
  /* 121e6a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6a81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121e6a84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6a88 je 0x121e6b2b */
  if (C.zf) goto L_121e6b2b;
  /* 121e6a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6a91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e6a94 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121e6a9b jmp 0x121e6aa6 */
  goto L_121e6aa6;
L_121e6a9d:;
  /* 121e6a9d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6aa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6aa3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121e6aa6:;
  /* 121e6aa6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121e6aaa jae 0x121e6b1c */
  if (!C.cf) goto L_121e6b1c;
  /* 121e6aac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6aaf mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 121e6ab2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ab5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6ab8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e6abb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6ac1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 121e6ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6ac6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ac9 push edx */
  push32((uint32_t)(EDX));
  /* 121e6aca call 0x121dcb40 */
  push32(0x121e6acfu); f_121dcb40();
  /* 121e6acf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6ad2 push eax */
  push32((uint32_t)(EAX));
  /* 121e6ad3 call 0x121dc9c0 */
  push32(0x121e6ad8u); f_121dc9c0();
  /* 121e6ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6adb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ade add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6ae0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121e6ae3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6ae6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121e6ae9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6aec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6aef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121e6af2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121e6af5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121e6af8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121e6afc push eax */
  push32((uint32_t)(EAX));
  /* 121e6afd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6b00 push ecx */
  push32((uint32_t)(ECX));
  /* 121e6b01 call 0x121dcb40 */
  push32(0x121e6b06u); f_121dcb40();
  /* 121e6b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b09 push eax */
  push32((uint32_t)(EAX));
  /* 121e6b0a call 0x121dc9c0 */
  push32(0x121e6b0fu); f_121dc9c0();
  /* 121e6b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b12 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6b15 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b17 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121e6b1a jmp 0x121e6a9d */
  goto L_121e6a9d;
L_121e6b1c:;
  /* 121e6b1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6b1f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121e6b22 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121e6b25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121e6b28 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121e6b2b:;
  /* 121e6b2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121e6b2e pop esi */
  ESI = (pop32());
  /* 121e6b2f mov esp, ebp */
  ESP = (EBP);
  /* 121e6b31 pop ebp */
  EBP = (pop32());
  /* 121e6b32 ret  */
  ESPCHK(0x121e6a10u, _esp0);
  ESP += 4; return;
}

