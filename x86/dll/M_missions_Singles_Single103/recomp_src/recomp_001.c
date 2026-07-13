#include "recomp.h"

/* FUN_1000bcf0 @ 0x10f9bcf0 (116 bytes, 34 insns) */
void f_10f9bcf0(void) {
  FTRACE(0x10f9bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bcf4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10f9bcfb push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bcfd call 0x10f9b510 */
  push32(0x10f9bd02u); f_10f9b510();
  /* 10f9bd02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bd05 call 0x10f9d400 */
  push32(0x10f9bd0au); f_10f9d400();
  /* 10f9bd0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9bd0c jge 0x10f9bd15 */
  if ((C.sf==C.of)) goto L_10f9bd15;
  /* 10f9bd0e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10f9bd15:;
  /* 10f9bd15 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bd17 call 0x10f9b5b0 */
  push32(0x10f9bd1cu); f_10f9b5b0();
  /* 10f9bd1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bd21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bd23 mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9bd28 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bd29 call dword ptr [0x10fc637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc637c))), 0x10f9bd2fu);
  /* 10f9bd2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9bd31 jne 0x10f9bd5d */
  if (!C.zf) goto L_10f9bd5d;
  /* 10f9bd33 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10f9bd39u);
  /* 10f9bd39 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bd3c jne 0x10f9bd56 */
  if (!C.zf) goto L_10f9bd56;
  /* 10f9bd3e call 0x10f9f9f0 */
  push32(0x10f9bd43u); f_10f9f9f0();
  /* 10f9bd43 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10f9bd49 call 0x10f9f9e0 */
  push32(0x10f9bd4eu); f_10f9f9e0();
  /* 10f9bd4e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10f9bd54 jmp 0x10f9bd5d */
  goto L_10f9bd5d;
L_10f9bd56:;
  /* 10f9bd56 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10f9bd5d:;
  /* 10f9bd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bd60 mov esp, ebp */
  ESP = (EBP);
  /* 10f9bd62 pop ebp */
  EBP = (pop32());
  /* 10f9bd63 ret  */
  ESPCHK(0x10f9bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x10f9bd70 (10 bytes, 5 insns) */
void f_10f9bd70(void) {
  FTRACE(0x10f9bd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bd70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bd71 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bd73 call 0x10f9bcf0 */
  push32(0x10f9bd78u); f_10f9bcf0();
  /* 10f9bd78 pop ebp */
  EBP = (pop32());
  /* 10f9bd79 ret  */
  ESPCHK(0x10f9bd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x10f9bd80 (10 bytes, 5 insns) */
void f_10f9bd80(void) {
  FTRACE(0x10f9bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bd81 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bd83 mov eax, dword ptr [0x10fc1c94] */
  EAX = (r32((uint32_t)(0x10fc1c94)));
  /* 10f9bd88 pop ebp */
  EBP = (pop32());
  /* 10f9bd89 ret  */
  ESPCHK(0x10f9bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x10f9bd90 (31 bytes, 11 insns) */
void f_10f9bd90(void) {
  FTRACE(0x10f9bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bd91 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bd93 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bd9a jbe 0x10f9bda0 */
  if ((C.cf||C.zf)) goto L_10f9bda0;
  /* 10f9bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bd9e jmp 0x10f9bdad */
  goto L_10f9bdad;
L_10f9bda0:;
  /* 10f9bda0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bda3 mov dword ptr [0x10fc1c94], eax */
  w32((uint32_t)(0x10fc1c94), (EAX));
  /* 10f9bda8 mov eax, 1 */
  EAX = (0x1u);
L_10f9bdad:;
  /* 10f9bdad pop ebp */
  EBP = (pop32());
  /* 10f9bdae ret  */
  ESPCHK(0x10f9bd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x10f9bdb0 (89 bytes, 20 insns) */
void f_10f9bdb0(void) {
  FTRACE(0x10f9bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bdb3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10f9bdb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bdba mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9bdbf push eax */
  push32((uint32_t)(EAX));
  /* 10f9bdc0 call dword ptr [0x10fc62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f8))), 0x10f9bdc6u);
  /* 10f9bdc6 mov dword ptr [0x10fc50a8], eax */
  w32((uint32_t)(0x10fc50a8), (EAX));
  /* 10f9bdcb cmp dword ptr [0x10fc50a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bdd2 jne 0x10f9bdd8 */
  if (!C.zf) goto L_10f9bdd8;
  /* 10f9bdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bdd6 jmp 0x10f9be07 */
  goto L_10f9be07;
L_10f9bdd8:;
  /* 10f9bdd8 mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9bdde mov dword ptr [0x10fc509c], ecx */
  w32((uint32_t)(0x10fc509c), (ECX));
  /* 10f9bde4 mov dword ptr [0x10fc50a0], 0 */
  w32((uint32_t)(0x10fc50a0), (0x0u));
  /* 10f9bdee mov dword ptr [0x10fc50a4], 0 */
  w32((uint32_t)(0x10fc50a4), (0x0u));
  /* 10f9bdf8 mov dword ptr [0x10fc5088], 0x10 */
  w32((uint32_t)(0x10fc5088), (0x10u));
  /* 10f9be02 mov eax, 1 */
  EAX = (0x1u);
L_10f9be07:;
  /* 10f9be07 pop ebp */
  EBP = (pop32());
  /* 10f9be08 ret  */
  ESPCHK(0x10f9bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x10f9be10 (85 bytes, 29 insns) */
void f_10f9be10(void) {
  FTRACE(0x10f9be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9be10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9be11 mov ebp, esp */
  EBP = (ESP);
  /* 10f9be13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9be16 mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9be1b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9be1e mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9be24 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9be26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9be29 mov edx, dword ptr [0x10fc50a8] */
  EDX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9be2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f9be32:;
  /* 10f9be32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9be35 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9be38 jae 0x10f9be5f */
  if (!C.cf) goto L_10f9be5f;
  /* 10f9be3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9be3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9be40 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9be43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9be46 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9be4d jae 0x10f9be54 */
  if (!C.cf) goto L_10f9be54;
  /* 10f9be4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9be52 jmp 0x10f9be61 */
  goto L_10f9be61;
L_10f9be54:;
  /* 10f9be54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9be57 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9be5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9be5d jmp 0x10f9be32 */
  goto L_10f9be32;
L_10f9be5f:;
  /* 10f9be5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9be61:;
  /* 10f9be61 mov esp, ebp */
  ESP = (EBP);
  /* 10f9be63 pop ebp */
  EBP = (pop32());
  /* 10f9be64 ret  */
  ESPCHK(0x10f9be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x10f9be70 (95 bytes, 33 insns) */
void f_10f9be70(void) {
  FTRACE(0x10f9be70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9be70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9be71 mov ebp, esp */
  EBP = (ESP);
  /* 10f9be73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9be76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9be79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9be7c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9be7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9be82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9be85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f9be88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9be8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9be90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9be93 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9be95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9be98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9be9b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9be9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9be9f jne 0x10f9bec1 */
  if (!C.zf) goto L_10f9bec1;
  /* 10f9bea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9bea4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9bea9 jne 0x10f9bec1 */
  if (!C.zf) goto L_10f9bec1;
  /* 10f9beab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9beae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9beb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9beb6 je 0x10f9bec1 */
  if (C.zf) goto L_10f9bec1;
  /* 10f9beb8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10f9bebf jmp 0x10f9bec8 */
  goto L_10f9bec8;
L_10f9bec1:;
  /* 10f9bec1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10f9bec8:;
  /* 10f9bec8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9becb mov esp, ebp */
  ESP = (EBP);
  /* 10f9becd pop ebp */
  EBP = (pop32());
  /* 10f9bece ret  */
  ESPCHK(0x10f9be70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bed0 @ 0x10f9bed0 (1485 bytes, 453 insns) */
void f_10f9bed0(void) {
  FTRACE(0x10f9bed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bed1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bed3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bed9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9bedc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10f9bedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bee2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bee5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bee8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9beeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9beee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10f9bef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9bef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bef7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9befd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bf00 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10f9bf07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9bf0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bf0d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bf10 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9bf13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9bf16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9bf18 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bf1b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f9bf1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9bf21 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bf24 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10f9bf27 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9bf2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9bf2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f9bf2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9bf32 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10f9bf35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9bf38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9bf3b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9bf3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9bf40 jne 0x10f9c068 */
  if (!C.zf) goto L_10f9c068;
  /* 10f9bf46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9bf49 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9bf4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bf4f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9bf52 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bf56 jbe 0x10f9bf5f */
  if ((C.cf||C.zf)) goto L_10f9bf5f;
  /* 10f9bf58 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f9bf5f:;
  /* 10f9bf5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9bf62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9bf65 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9bf68 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bf6b jne 0x10f9c041 */
  if (!C.zf) goto L_10f9c041;
  /* 10f9bf71 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bf75 jae 0x10f9bfd6 */
  if (!C.cf) goto L_10f9bfd6;
  /* 10f9bf77 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9bf7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9bf7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9bf81 not eax */
  EAX = (~(EAX));
  /* 10f9bf83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bf86 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bf89 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f9bf8d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9bf8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bf92 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bf95 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f9bf99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bf9c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bf9f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f9bfa2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9bfa5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bfa8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bfab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f9bfae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bfb1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bfb4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9bfb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9bfba jne 0x10f9bfd4 */
  if (!C.zf) goto L_10f9bfd4;
  /* 10f9bfbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9bfc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9bfc4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9bfc6 not eax */
  EAX = (~(EAX));
  /* 10f9bfc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bfcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9bfcd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9bfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bfd2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f9bfd4:;
  /* 10f9bfd4 jmp 0x10f9c041 */
  goto L_10f9c041;
L_10f9bfd6:;
  /* 10f9bfd6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9bfd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bfdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9bfe1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9bfe3 not edx */
  EDX = (~(EDX));
  /* 10f9bfe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bfe8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bfeb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f9bff2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bff7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9bffa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10f9c001 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c004 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c007 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9c00a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c00d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c010 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c013 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f9c016 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c019 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c01c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9c020 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c022 jne 0x10f9c041 */
  if (!C.zf) goto L_10f9c041;
  /* 10f9c024 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c027 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c02a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c02f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c031 not edx */
  EDX = (~(EDX));
  /* 10f9c033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c036 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c039 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c03e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f9c041:;
  /* 10f9c041 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c044 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9c047 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c04a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9c04d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f9c050 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c053 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c056 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c059 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9c05c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9c05f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c062 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c065 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10f9c068:;
  /* 10f9c068 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c06b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f9c06e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c071 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9c074 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c078 jbe 0x10f9c081 */
  if ((C.cf||C.zf)) goto L_10f9c081;
  /* 10f9c07a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10f9c081:;
  /* 10f9c081 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c084 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c089 jne 0x10f9c1e5 */
  if (!C.zf) goto L_10f9c1e5;
  /* 10f9c08f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c092 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c095 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10f9c098 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c09b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f9c09e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c0a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f9c0a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c0a8 jbe 0x10f9c0b1 */
  if ((C.cf||C.zf)) goto L_10f9c0b1;
  /* 10f9c0aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10f9c0b1:;
  /* 10f9c0b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c0b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c0b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f9c0ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c0bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9c0c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c0c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f9c0c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c0ca jbe 0x10f9c0d3 */
  if ((C.cf||C.zf)) goto L_10f9c0d3;
  /* 10f9c0cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10f9c0d3:;
  /* 10f9c0d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c0d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c0d9 je 0x10f9c1df */
  if (C.zf) goto L_10f9c1df;
  /* 10f9c0df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c0e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c0e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c0e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c0eb jne 0x10f9c1c1 */
  if (!C.zf) goto L_10f9c1c1;
  /* 10f9c0f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c0f5 jae 0x10f9c156 */
  if (!C.cf) goto L_10f9c156;
  /* 10f9c0f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c0fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c0ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c101 not edx */
  EDX = (~(EDX));
  /* 10f9c103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c106 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c109 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f9c10d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c10f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c112 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c115 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f9c119 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c11c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c11f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9c122 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c125 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c128 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c12b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f9c12e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c131 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c134 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9c138 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c13a jne 0x10f9c154 */
  if (!C.zf) goto L_10f9c154;
  /* 10f9c13c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c141 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c144 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c146 not edx */
  EDX = (~(EDX));
  /* 10f9c148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c14b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9c14d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c14f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c152 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9c154:;
  /* 10f9c154 jmp 0x10f9c1c1 */
  goto L_10f9c1c1;
L_10f9c156:;
  /* 10f9c156 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c159 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c15c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c161 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c163 not eax */
  EAX = (~(EAX));
  /* 10f9c165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c168 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c16b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f9c172 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c177 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c17a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f9c181 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c184 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c187 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f9c18a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c18d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c190 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c193 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f9c196 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c199 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c19c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9c1a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9c1a2 jne 0x10f9c1c1 */
  if (!C.zf) goto L_10f9c1c1;
  /* 10f9c1a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c1a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c1aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c1af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c1b1 not eax */
  EAX = (~(EAX));
  /* 10f9c1b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c1b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c1b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c1bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c1be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9c1c1:;
  /* 10f9c1c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c1c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9c1c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c1ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c1cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9c1d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c1d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9c1d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c1d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9c1dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10f9c1df:;
  /* 10f9c1df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c1e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10f9c1e5:;
  /* 10f9c1e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c1e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c1eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c1ed jne 0x10f9c1fb */
  if (!C.zf) goto L_10f9c1fb;
  /* 10f9c1ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9c1f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c1f5 je 0x10f9c30b */
  if (C.zf) goto L_10f9c30b;
L_10f9c1fb:;
  /* 10f9c1fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c1fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c201 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10f9c204 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f9c207 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c20a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c20d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c210 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9c213 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c216 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c219 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f9c21c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c21f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c222 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f9c225 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c228 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c22b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c22e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9c231 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c234 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c237 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c23a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c23d jne 0x10f9c30b */
  if (!C.zf) goto L_10f9c30b;
  /* 10f9c243 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c247 jae 0x10f9c2a4 */
  if (!C.cf) goto L_10f9c2a4;
  /* 10f9c249 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c24c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c24f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9c253 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c256 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c259 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9c25c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9c25f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c262 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c265 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f9c268 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9c26a jne 0x10f9c282 */
  if (!C.zf) goto L_10f9c282;
  /* 10f9c26c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c271 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c274 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c279 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9c27b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c27d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c280 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9c282:;
  /* 10f9c282 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c287 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c28a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c28f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c292 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f9c296 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c29b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c29e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f9c2a2 jmp 0x10f9c30b */
  goto L_10f9c30b;
L_10f9c2a4:;
  /* 10f9c2a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c2a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c2aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9c2ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c2b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c2b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9c2b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9c2ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c2bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c2c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f9c2c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9c2c5 jne 0x10f9c2e2 */
  if (!C.zf) goto L_10f9c2e2;
  /* 10f9c2c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c2ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c2cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c2d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c2d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c2da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c2df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f9c2e2:;
  /* 10f9c2e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c2e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c2e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c2ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c2ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c2f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c2f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f9c2fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c2fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c301 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10f9c304 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10f9c30b:;
  /* 10f9c30b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c30e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c311 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f9c313 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c316 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c319 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c31c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10f9c31f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c322 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9c324 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c32a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9c32c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c32f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c332 jne 0x10f9c499 */
  if (!C.zf) goto L_10f9c499;
  /* 10f9c338 cmp dword ptr [0x10fc50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c33f je 0x10f9c488 */
  if (C.zf) goto L_10f9c488;
  /* 10f9c345 mov eax, dword ptr [0x10fc5098] */
  EAX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9c34a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10f9c34d mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c353 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9c356 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c358 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f9c35b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f9c360 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9c365 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c368 push eax */
  push32((uint32_t)(EAX));
  /* 10f9c369 call dword ptr [0x10fc639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc639c))), 0x10f9c36fu);
  /* 10f9c36f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c374 mov ecx, dword ptr [0x10fc5098] */
  ECX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9c37a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c37c mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c381 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9c384 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c386 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c38c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9c38f mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c394 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9c397 mov edx, dword ptr [0x10fc5098] */
  EDX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9c39d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10f9c3a8 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9c3b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10f9c3b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c3b6 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9c3be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10f9c3c1 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9c3ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10f9c3ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c3d0 jne 0x10f9c3e6 */
  if (!C.zf) goto L_10f9c3e6;
  /* 10f9c3d2 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9c3db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10f9c3dd mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10f9c3e6:;
  /* 10f9c3e6 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c3ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c3f0 jne 0x10f9c488 */
  if (!C.zf) goto L_10f9c488;
  /* 10f9c3f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9c3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9c3fd mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c402 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9c405 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9c406 call dword ptr [0x10fc639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc639c))), 0x10f9c40cu);
  /* 10f9c40c mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c412 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9c415 push eax */
  push32((uint32_t)(EAX));
  /* 10f9c416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9c418 mov ecx, dword ptr [0x10fc50ac] */
  ECX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9c41e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9c41f call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9c425u);
  /* 10f9c425 mov edx, dword ptr [0x10fc50a4] */
  EDX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9c42b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9c42e mov eax, dword ptr [0x10fc50a8] */
  EAX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9c433 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c435 mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c43b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c43e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c440 push eax */
  push32((uint32_t)(EAX));
  /* 10f9c441 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c447 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c44a push edx */
  push32((uint32_t)(EDX));
  /* 10f9c44b mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9c450 push eax */
  push32((uint32_t)(EAX));
  /* 10f9c451 call 0x10f9fa00 */
  push32(0x10f9c456u); f_10f9fa00();
  /* 10f9c456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c459 mov ecx, dword ptr [0x10fc50a4] */
  ECX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9c45f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c462 mov dword ptr [0x10fc50a4], ecx */
  w32((uint32_t)(0x10fc50a4), (ECX));
  /* 10f9c468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c46b cmp edx, dword ptr [0x10fc50a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc50a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c471 jbe 0x10f9c47c */
  if ((C.cf||C.zf)) goto L_10f9c47c;
  /* 10f9c473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c476 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c479 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f9c47c:;
  /* 10f9c47c mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9c482 mov dword ptr [0x10fc509c], ecx */
  w32((uint32_t)(0x10fc509c), (ECX));
L_10f9c488:;
  /* 10f9c488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c48b mov dword ptr [0x10fc50a0], edx */
  w32((uint32_t)(0x10fc50a0), (EDX));
  /* 10f9c491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c494 mov dword ptr [0x10fc5098], eax */
  w32((uint32_t)(0x10fc5098), (EAX));
L_10f9c499:;
  /* 10f9c499 mov esp, ebp */
  ESP = (EBP);
  /* 10f9c49b pop ebp */
  EBP = (pop32());
  /* 10f9c49c ret  */
  ESPCHK(0x10f9bed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a0 @ 0x10f9c4a0 (1334 bytes, 427 insns) */
void f_10f9c4a0(void) {
  FTRACE(0x10f9c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9c4a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c4a6 push esi */
  push32((uint32_t)(ESI));
  /* 10f9c4a7 mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9c4ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9c4af mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9c4b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c4b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f9c4ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9c4bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c4c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c4c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f9c4c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c4c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f9c4cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c4cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9c4d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c4d6 jge 0x10f9c4ec */
  if ((C.sf==C.of)) goto L_10f9c4ec;
  /* 10f9c4d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c4db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c4de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c4e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9c4e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10f9c4ea jmp 0x10f9c501 */
  goto L_10f9c501;
L_10f9c4ec:;
  /* 10f9c4ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f9c4f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c4f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c4f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c4fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c4fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10f9c501:;
  /* 10f9c501 mov ecx, dword ptr [0x10fc509c] */
  ECX = (r32((uint32_t)(0x10fc509c)));
  /* 10f9c507 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10f9c50a:;
  /* 10f9c50a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c50d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c510 jae 0x10f9c536 */
  if (!C.cf) goto L_10f9c536;
  /* 10f9c512 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c515 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c518 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c51a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c51d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c520 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c523 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c527 je 0x10f9c52b */
  if (C.zf) goto L_10f9c52b;
  /* 10f9c529 jmp 0x10f9c536 */
  goto L_10f9c536;
L_10f9c52b:;
  /* 10f9c52b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c52e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c531 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f9c534 jmp 0x10f9c50a */
  goto L_10f9c50a;
L_10f9c536:;
  /* 10f9c536 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c539 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c53c jne 0x10f9c61d */
  if (!C.zf) goto L_10f9c61d;
  /* 10f9c542 mov eax, dword ptr [0x10fc50a8] */
  EAX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9c547 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f9c54a:;
  /* 10f9c54a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c54d cmp ecx, dword ptr [0x10fc509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c553 jae 0x10f9c579 */
  if (!C.cf) goto L_10f9c579;
  /* 10f9c555 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c558 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c55b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c55d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c560 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c563 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c566 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9c56a je 0x10f9c56e */
  if (C.zf) goto L_10f9c56e;
  /* 10f9c56c jmp 0x10f9c579 */
  goto L_10f9c579;
L_10f9c56e:;
  /* 10f9c56e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c571 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c574 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9c577 jmp 0x10f9c54a */
  goto L_10f9c54a;
L_10f9c579:;
  /* 10f9c579 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c57c cmp ecx, dword ptr [0x10fc509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c582 jne 0x10f9c61d */
  if (!C.zf) goto L_10f9c61d;
L_10f9c588:;
  /* 10f9c588 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c58b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c58e jae 0x10f9c5a6 */
  if (!C.cf) goto L_10f9c5a6;
  /* 10f9c590 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c593 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c597 je 0x10f9c59b */
  if (C.zf) goto L_10f9c59b;
  /* 10f9c599 jmp 0x10f9c5a6 */
  goto L_10f9c5a6;
L_10f9c59b:;
  /* 10f9c59b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c59e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c5a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f9c5a4 jmp 0x10f9c588 */
  goto L_10f9c588;
L_10f9c5a6:;
  /* 10f9c5a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c5ac jne 0x10f9c5f7 */
  if (!C.zf) goto L_10f9c5f7;
  /* 10f9c5ae mov eax, dword ptr [0x10fc50a8] */
  EAX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9c5b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10f9c5b6:;
  /* 10f9c5b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5b9 cmp ecx, dword ptr [0x10fc509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c5bf jae 0x10f9c5d7 */
  if (!C.cf) goto L_10f9c5d7;
  /* 10f9c5c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c5c8 je 0x10f9c5cc */
  if (C.zf) goto L_10f9c5cc;
  /* 10f9c5ca jmp 0x10f9c5d7 */
  goto L_10f9c5d7;
L_10f9c5cc:;
  /* 10f9c5cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c5d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9c5d5 jmp 0x10f9c5b6 */
  goto L_10f9c5b6;
L_10f9c5d7:;
  /* 10f9c5d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5da cmp ecx, dword ptr [0x10fc509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c5e0 jne 0x10f9c5f7 */
  if (!C.zf) goto L_10f9c5f7;
  /* 10f9c5e2 call 0x10f9c9e0 */
  push32(0x10f9c5e7u); f_10f9c9e0();
  /* 10f9c5e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9c5ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c5ee jne 0x10f9c5f7 */
  if (!C.zf) goto L_10f9c5f7;
  /* 10f9c5f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c5f2 jmp 0x10f9c9d1 */
  goto L_10f9c9d1;
L_10f9c5f7:;
  /* 10f9c5f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c5fa push edx */
  push32((uint32_t)(EDX));
  /* 10f9c5fb call 0x10f9caf0 */
  push32(0x10f9c600u); f_10f9caf0();
  /* 10f9c600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c603 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c606 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f9c609 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f9c60b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c60e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9c611 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c614 jne 0x10f9c61d */
  if (!C.zf) goto L_10f9c61d;
  /* 10f9c616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c618 jmp 0x10f9c9d1 */
  goto L_10f9c9d1;
L_10f9c61d:;
  /* 10f9c61d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c620 mov dword ptr [0x10fc509c], edx */
  w32((uint32_t)(0x10fc509c), (EDX));
  /* 10f9c626 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c629 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9c62c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10f9c62f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9c634 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10f9c637 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c63b je 0x10f9c660 */
  if (C.zf) goto L_10f9c660;
  /* 10f9c63d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c640 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c643 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c646 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c64a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c64d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c650 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c653 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10f9c65a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c65c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9c65e jne 0x10f9c695 */
  if (!C.zf) goto L_10f9c695;
L_10f9c660:;
  /* 10f9c660 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10f9c667:;
  /* 10f9c667 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c66a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c66d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c670 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c674 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c677 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c67a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c67d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10f9c684 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9c688 jne 0x10f9c695 */
  if (!C.zf) goto L_10f9c695;
  /* 10f9c68a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c68d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c690 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f9c693 jmp 0x10f9c667 */
  goto L_10f9c667;
L_10f9c695:;
  /* 10f9c695 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c698 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9c69e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c6a1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f9c6a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9c6ab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f9c6b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c6b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c6b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9c6bb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c6bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9c6c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c6c6 jne 0x10f9c6e2 */
  if (!C.zf) goto L_10f9c6e2;
  /* 10f9c6c8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10f9c6cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c6d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c6d5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10f9c6d8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c6df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10f9c6e2:;
  /* 10f9c6e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c6e6 jl 0x10f9c6fb */
  if ((C.sf!=C.of)) goto L_10f9c6fb;
  /* 10f9c6e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9c6eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f9c6ed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f9c6f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c6f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c6f6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f9c6f9 jmp 0x10f9c6e2 */
  goto L_10f9c6e2;
L_10f9c6fb:;
  /* 10f9c6fb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c701 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10f9c705 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f9c708 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c70b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9c70d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c710 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9c713 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c716 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f9c719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c71c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f9c71f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c723 jle 0x10f9c72c */
  if ((C.zf||C.sf!=C.of)) goto L_10f9c72c;
  /* 10f9c725 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10f9c72c:;
  /* 10f9c72c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c72f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c732 je 0x10f9c950 */
  if (C.zf) goto L_10f9c950;
  /* 10f9c738 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c73b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c73e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c741 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c744 jne 0x10f9c81a */
  if (!C.zf) goto L_10f9c81a;
  /* 10f9c74a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c74e jge 0x10f9c7af */
  if ((C.sf==C.of)) goto L_10f9c7af;
  /* 10f9c750 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c755 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c758 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c75a not eax */
  EAX = (~(EAX));
  /* 10f9c75c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c75f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c762 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f9c766 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c768 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c76b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c76e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f9c772 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c775 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c778 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f9c77b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c77e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c781 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c784 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f9c787 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c78a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c78d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9c791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9c793 jne 0x10f9c7ad */
  if (!C.zf) goto L_10f9c7ad;
  /* 10f9c795 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c79a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c79d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c79f not eax */
  EAX = (~(EAX));
  /* 10f9c7a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c7a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9c7a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c7a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c7ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f9c7ad:;
  /* 10f9c7ad jmp 0x10f9c81a */
  goto L_10f9c81a;
L_10f9c7af:;
  /* 10f9c7af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c7b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c7b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c7ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c7bc not edx */
  EDX = (~(EDX));
  /* 10f9c7be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c7c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c7c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f9c7cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c7cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c7d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c7d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10f9c7da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c7dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c7e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9c7e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9c7e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c7e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c7ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f9c7ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c7f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c7f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9c7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c7fb jne 0x10f9c81a */
  if (!C.zf) goto L_10f9c81a;
  /* 10f9c7fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9c800 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c803 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c808 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c80a not edx */
  EDX = (~(EDX));
  /* 10f9c80c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c80f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c812 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9c814 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c817 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f9c81a:;
  /* 10f9c81a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c81d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9c820 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c823 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9c826 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f9c829 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c82c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c82f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c832 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9c835 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9c838 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c83c je 0x10f9c950 */
  if (C.zf) goto L_10f9c950;
  /* 10f9c842 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c848 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10f9c84b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9c84e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c851 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c854 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9c85a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c85d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c860 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9c863 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9c866 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c869 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f9c86c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c86f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c872 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c875 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f9c878 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c87b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c87e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9c881 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c884 jne 0x10f9c950 */
  if (!C.zf) goto L_10f9c950;
  /* 10f9c88a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c88e jge 0x10f9c8ea */
  if ((C.sf==C.of)) goto L_10f9c8ea;
  /* 10f9c890 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c893 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c896 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9c89a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c89d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c8a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f9c8a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9c8a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c8a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c8ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f9c8ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c8b0 jne 0x10f9c8c8 */
  if (!C.zf) goto L_10f9c8c8;
  /* 10f9c8b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c8b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c8ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c8bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c8bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9c8c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c8c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c8c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f9c8c8:;
  /* 10f9c8c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c8cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c8d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c8d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c8d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c8d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f9c8dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c8de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c8e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c8e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f9c8e8 jmp 0x10f9c950 */
  goto L_10f9c950;
L_10f9c8ea:;
  /* 10f9c8ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c8ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c8f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9c8f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c8f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c8fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f9c8fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9c8ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c902 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c905 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f9c908 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c90a jne 0x10f9c927 */
  if (!C.zf) goto L_10f9c927;
  /* 10f9c90c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c90f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c912 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9c917 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9c919 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c91c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9c91f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9c921 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c924 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9c927:;
  /* 10f9c927 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9c92a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9c92d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9c932 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9c934 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c937 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c93a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f9c941 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9c943 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c946 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c949 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10f9c950:;
  /* 10f9c950 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c954 je 0x10f9c96a */
  if (C.zf) goto L_10f9c96a;
  /* 10f9c956 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c95c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f9c95e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c961 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c964 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9c967 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10f9c96a:;
  /* 10f9c96a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c96d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c970 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f9c973 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c976 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c979 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c97c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f9c97e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9c981 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c984 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c987 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c98a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10f9c98d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c990 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9c992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c995 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9c997 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c99a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9c99d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f9c99f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9c9a1 jne 0x10f9c9c3 */
  if (!C.zf) goto L_10f9c9c3;
  /* 10f9c9a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9c9a6 cmp eax, dword ptr [0x10fc50a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc50a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c9ac jne 0x10f9c9c3 */
  if (!C.zf) goto L_10f9c9c3;
  /* 10f9c9ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c9b1 cmp ecx, dword ptr [0x10fc5098] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc5098))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c9b7 jne 0x10f9c9c3 */
  if (!C.zf) goto L_10f9c9c3;
  /* 10f9c9b9 mov dword ptr [0x10fc50a0], 0 */
  w32((uint32_t)(0x10fc50a0), (0x0u));
L_10f9c9c3:;
  /* 10f9c9c3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10f9c9c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9c9c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f9c9cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9c9ce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f9c9d1:;
  /* 10f9c9d1 pop esi */
  ESI = (pop32());
  /* 10f9c9d2 mov esp, ebp */
  ESP = (EBP);
  /* 10f9c9d4 pop ebp */
  EBP = (pop32());
  /* 10f9c9d5 ret  */
  ESPCHK(0x10f9c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x10f9c9e0 (271 bytes, 78 insns) */
void f_10f9c9e0(void) {
  FTRACE(0x10f9c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9c9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9c9e4 mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9c9e9 cmp eax, dword ptr [0x10fc5088] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc5088))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9c9ef jne 0x10f9ca3b */
  if (!C.zf) goto L_10f9ca3b;
  /* 10f9c9f1 mov ecx, dword ptr [0x10fc5088] */
  ECX = (r32((uint32_t)(0x10fc5088)));
  /* 10f9c9f7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9c9fa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9c9fd push ecx */
  push32((uint32_t)(ECX));
  /* 10f9c9fe mov edx, dword ptr [0x10fc50a8] */
  EDX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9ca04 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ca05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ca07 mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9ca0c push eax */
  push32((uint32_t)(EAX));
  /* 10f9ca0d call dword ptr [0x10fc6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6300))), 0x10f9ca13u);
  /* 10f9ca13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9ca16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ca1a jne 0x10f9ca23 */
  if (!C.zf) goto L_10f9ca23;
  /* 10f9ca1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ca1e jmp 0x10f9caeb */
  goto L_10f9caeb;
L_10f9ca23:;
  /* 10f9ca23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca26 mov dword ptr [0x10fc50a8], ecx */
  w32((uint32_t)(0x10fc50a8), (ECX));
  /* 10f9ca2c mov edx, dword ptr [0x10fc5088] */
  EDX = (r32((uint32_t)(0x10fc5088)));
  /* 10f9ca32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ca35 mov dword ptr [0x10fc5088], edx */
  w32((uint32_t)(0x10fc5088), (EDX));
L_10f9ca3b:;
  /* 10f9ca3b mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9ca40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9ca43 mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9ca49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ca4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9ca4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10f9ca53 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9ca55 mov edx, dword ptr [0x10fc50ac] */
  EDX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9ca5b push edx */
  push32((uint32_t)(EDX));
  /* 10f9ca5c call dword ptr [0x10fc62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f8))), 0x10f9ca62u);
  /* 10f9ca62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10f9ca68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ca6f jne 0x10f9ca75 */
  if (!C.zf) goto L_10f9ca75;
  /* 10f9ca71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ca73 jmp 0x10f9caeb */
  goto L_10f9caeb;
L_10f9ca75:;
  /* 10f9ca75 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f9ca77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10f9ca7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f9ca81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ca83 call dword ptr [0x10fc62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f0))), 0x10f9ca89u);
  /* 10f9ca89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10f9ca8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ca96 jne 0x10f9cab2 */
  if (!C.zf) goto L_10f9cab2;
  /* 10f9ca98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ca9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9ca9e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ca9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9caa1 mov edx, dword ptr [0x10fc50ac] */
  EDX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9caa7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9caa8 call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9caaeu);
  /* 10f9caae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9cab0 jmp 0x10f9caeb */
  goto L_10f9caeb;
L_10f9cab2:;
  /* 10f9cab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cab5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f9cabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cabe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f9cac5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cac8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10f9cacf mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9cad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cad7 mov dword ptr [0x10fc50a4], eax */
  w32((uint32_t)(0x10fc50a4), (EAX));
  /* 10f9cadc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cadf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f9cae2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10f9cae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f9caeb:;
  /* 10f9caeb mov esp, ebp */
  ESP = (EBP);
  /* 10f9caed pop ebp */
  EBP = (pop32());
  /* 10f9caee ret  */
  ESPCHK(0x10f9c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x10f9caf0 (494 bytes, 149 insns) */
void f_10f9caf0(void) {
  FTRACE(0x10f9caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9caf1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9caf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9caf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9caf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9cafc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f9caff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cb02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9cb05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9cb08 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10f9cb0f:;
  /* 10f9cb0f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cb13 jl 0x10f9cb28 */
  if ((C.sf!=C.of)) goto L_10f9cb28;
  /* 10f9cb15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9cb18 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f9cb1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9cb1d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cb20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cb23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f9cb26 jmp 0x10f9cb0f */
  goto L_10f9cb0f;
L_10f9cb28:;
  /* 10f9cb28 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cb2b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9cb31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cb34 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f9cb3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9cb3e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10f9cb45 jmp 0x10f9cb50 */
  goto L_10f9cb50;
L_10f9cb47:;
  /* 10f9cb47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cb4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cb4d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10f9cb50:;
  /* 10f9cb50 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cb54 jge 0x10f9cb76 */
  if ((C.sf==C.of)) goto L_10f9cb76;
  /* 10f9cb56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cb59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9cb5c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10f9cb5f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9cb62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cb65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cb68 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f9cb6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cb6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cb71 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f9cb74 jmp 0x10f9cb47 */
  goto L_10f9cb47;
L_10f9cb76:;
  /* 10f9cb76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cb79 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f9cb7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cb7f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9cb82 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cb84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f9cb87 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f9cb89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f9cb8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9cb93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cb96 push edx */
  push32((uint32_t)(EDX));
  /* 10f9cb97 call dword ptr [0x10fc62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f0))), 0x10f9cb9du);
  /* 10f9cb9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9cb9f jne 0x10f9cba9 */
  if (!C.zf) goto L_10f9cba9;
  /* 10f9cba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9cba4 jmp 0x10f9ccda */
  goto L_10f9ccda;
L_10f9cba9:;
  /* 10f9cba9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cbac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cbb1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f9cbb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cbb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9cbba jmp 0x10f9cbc8 */
  goto L_10f9cbc8;
L_10f9cbbc:;
  /* 10f9cbbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cbbf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cbc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9cbc8:;
  /* 10f9cbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cbcb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cbce ja 0x10f9cc2d */
  if ((!C.cf&&!C.zf)) goto L_10f9cc2d;
  /* 10f9cbd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cbd3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10f9cbda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cbdd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10f9cbe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cbea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cbed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9cbf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cbf3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10f9cbf9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cbfc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cc02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc05 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9cc08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc0b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cc11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9cc17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc1a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cc1f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9cc22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9cc25 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10f9cc2b jmp 0x10f9cbbc */
  goto L_10f9cbbc;
L_10f9cc2d:;
  /* 10f9cc2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9cc30 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cc36 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f9cc39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cc3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cc3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc42 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f9cc45 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9cc4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9cc4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc54 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f9cc57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9cc5a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cc5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc60 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10f9cc63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc66 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9cc69 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9cc6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cc6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cc72 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f9cc75 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cc78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cc7b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10f9cc83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cc86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cc89 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10f9cc94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cc97 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10f9cc9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cc9e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10f9cca1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9cca4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cca7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10f9ccaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9ccac jne 0x10f9ccbd */
  if (!C.zf) goto L_10f9ccbd;
  /* 10f9ccae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ccb1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9ccb4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ccb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ccba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9ccbd:;
  /* 10f9ccbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9ccc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9ccc5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9ccc7 not edx */
  EDX = (~(EDX));
  /* 10f9ccc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cccc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9cccf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ccd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ccd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9ccd7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10f9ccda:;
  /* 10f9ccda mov esp, ebp */
  ESP = (EBP);
  /* 10f9ccdc pop ebp */
  EBP = (pop32());
  /* 10f9ccdd ret  */
  ESPCHK(0x10f9caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x10f9cce0 (1515 bytes, 489 insns) */
void f_10f9cce0(void) {
  FTRACE(0x10f9cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9cce1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9cce3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cce6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9cce9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ccec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10f9ccee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10f9ccf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ccf4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f9ccf7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f9ccfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ccfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9cd00 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cd03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9cd06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9cd09 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10f9cd0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9cd0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cd12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9cd18 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cd1b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10f9cd22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f9cd25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9cd28 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cd2b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f9cd2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cd31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9cd33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cd36 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10f9cd39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cd3c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cd3f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10f9cd42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cd45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9cd47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f9cd4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9cd4d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cd50 jle 0x10f9d006 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d006;
  /* 10f9cd56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cd59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cd5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9cd5e jne 0x10f9cd6b */
  if (!C.zf) goto L_10f9cd6b;
  /* 10f9cd60 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9cd63 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cd66 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cd69 jle 0x10f9cd72 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9cd72;
L_10f9cd6b:;
  /* 10f9cd6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9cd6d jmp 0x10f9d2c7 */
  goto L_10f9d2c7;
L_10f9cd72:;
  /* 10f9cd72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cd75 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f9cd78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cd7b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9cd7e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cd82 jbe 0x10f9cd8b */
  if ((C.cf||C.zf)) goto L_10f9cd8b;
  /* 10f9cd84 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f9cd8b:;
  /* 10f9cd8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cd8e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cd91 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9cd94 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cd97 jne 0x10f9ce6d */
  if (!C.zf) goto L_10f9ce6d;
  /* 10f9cd9d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cda1 jae 0x10f9ce02 */
  if (!C.cf) goto L_10f9ce02;
  /* 10f9cda3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9cda8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cdab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9cdad not edx */
  EDX = (~(EDX));
  /* 10f9cdaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cdb2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cdb5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f9cdb9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9cdbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cdbe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cdc1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f9cdc5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cdc8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cdcb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9cdce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9cdd1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cdd4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cdd7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f9cdda mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cddd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cde0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9cde4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9cde6 jne 0x10f9ce00 */
  if (!C.zf) goto L_10f9ce00;
  /* 10f9cde8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9cded mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cdf0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9cdf2 not edx */
  EDX = (~(EDX));
  /* 10f9cdf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cdf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9cdf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cdfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cdfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9ce00:;
  /* 10f9ce00 jmp 0x10f9ce6d */
  goto L_10f9ce6d;
L_10f9ce02:;
  /* 10f9ce02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9ce05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ce08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9ce0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9ce0f not eax */
  EAX = (~(EAX));
  /* 10f9ce11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ce14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9ce17 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f9ce1e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ce20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ce23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9ce26 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f9ce2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9ce30 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ce33 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f9ce36 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9ce39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9ce3c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ce3f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f9ce42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9ce45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ce48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9ce4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9ce4e jne 0x10f9ce6d */
  if (!C.zf) goto L_10f9ce6d;
  /* 10f9ce50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9ce53 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ce56 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9ce5b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9ce5d not eax */
  EAX = (~(EAX));
  /* 10f9ce5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ce62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9ce65 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ce67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ce6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9ce6d:;
  /* 10f9ce6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ce70 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9ce73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ce76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9ce79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9ce7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ce7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9ce82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ce85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9ce88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f9ce8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9ce8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ce91 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ce94 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9ce97 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ce9b jle 0x10f9cfe7 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9cfe7;
  /* 10f9cea1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cea4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cea7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f9ceaa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cead sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9ceb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ceb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f9ceb6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ceba jbe 0x10f9cec3 */
  if ((C.cf||C.zf)) goto L_10f9cec3;
  /* 10f9cebc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f9cec3:;
  /* 10f9cec3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cec6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9cec9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10f9cecc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f9cecf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ced2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9ced5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9ced8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9cedb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cede mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cee1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f9cee4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9cee7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ceea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f9ceed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cef0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9cef3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cef6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9cef9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cefc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9ceff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9cf02 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cf05 jne 0x10f9cfd3 */
  if (!C.zf) goto L_10f9cfd3;
  /* 10f9cf0b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9cf0f jae 0x10f9cf6c */
  if (!C.cf) goto L_10f9cf6c;
  /* 10f9cf11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf14 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf17 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9cf1b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf1e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9cf24 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9cf27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf2a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf2d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f9cf30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9cf32 jne 0x10f9cf4a */
  if (!C.zf) goto L_10f9cf4a;
  /* 10f9cf34 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9cf39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cf3c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9cf3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cf41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9cf43 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cf45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cf48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9cf4a:;
  /* 10f9cf4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9cf4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cf52 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9cf54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cf57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf5a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10f9cf5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cf60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cf63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf66 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10f9cf6a jmp 0x10f9cfd3 */
  goto L_10f9cfd3;
L_10f9cf6c:;
  /* 10f9cf6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf6f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf72 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9cf76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf79 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf7c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9cf7f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9cf82 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cf85 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cf88 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10f9cf8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9cf8d jne 0x10f9cfaa */
  if (!C.zf) goto L_10f9cfaa;
  /* 10f9cf8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cf92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cf95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9cf9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9cf9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cf9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9cfa2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cfa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9cfa7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10f9cfaa:;
  /* 10f9cfaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9cfad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9cfb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9cfb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9cfb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cfba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cfbd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f9cfc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9cfc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9cfc9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9cfcc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10f9cfd3:;
  /* 10f9cfd3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cfd6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cfd9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f9cfdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9cfde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cfe1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9cfe4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10f9cfe7:;
  /* 10f9cfe7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9cfea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cfed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cff0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f9cff2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9cff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cff8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9cffb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9cffe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10f9d001 jmp 0x10f9d2c2 */
  goto L_10f9d2c2;
L_10f9d006:;
  /* 10f9d006 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9d009 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d00c jge 0x10f9d2c2 */
  if ((C.sf==C.of)) goto L_10f9d2c2;
  /* 10f9d012 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9d015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d018 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d01b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9d01d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10f9d020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d023 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d026 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d029 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10f9d02c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d02f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d032 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f9d035 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d038 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d03b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9d03e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d041 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f9d044 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d047 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f9d04a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d04e jbe 0x10f9d057 */
  if ((C.cf||C.zf)) goto L_10f9d057;
  /* 10f9d050 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f9d057:;
  /* 10f9d057 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d05a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9d05d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9d05f jne 0x10f9d1a0 */
  if (!C.zf) goto L_10f9d1a0;
  /* 10f9d065 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d068 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10f9d06b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d06e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9d071 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d075 jbe 0x10f9d07e */
  if ((C.cf||C.zf)) goto L_10f9d07e;
  /* 10f9d077 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10f9d07e:;
  /* 10f9d07e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d081 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d084 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9d087 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d08a jne 0x10f9d160 */
  if (!C.zf) goto L_10f9d160;
  /* 10f9d090 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d094 jae 0x10f9d0f5 */
  if (!C.cf) goto L_10f9d0f5;
  /* 10f9d096 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d09b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9d09e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d0a0 not edx */
  EDX = (~(EDX));
  /* 10f9d0a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d0a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d0a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f9d0ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d0ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d0b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d0b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f9d0b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d0bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d0be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f9d0c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9d0c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d0c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d0ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10f9d0cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d0d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d0d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9d0d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9d0d9 jne 0x10f9d0f3 */
  if (!C.zf) goto L_10f9d0f3;
  /* 10f9d0db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d0e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9d0e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d0e5 not edx */
  EDX = (~(EDX));
  /* 10f9d0e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d0ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9d0ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9d0ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d0f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9d0f3:;
  /* 10f9d0f3 jmp 0x10f9d160 */
  goto L_10f9d160;
L_10f9d0f5:;
  /* 10f9d0f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9d0f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d0fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9d100 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9d102 not eax */
  EAX = (~(EAX));
  /* 10f9d104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d107 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d10a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10f9d111 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9d113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d116 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d119 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10f9d120 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d123 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d126 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10f9d129 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9d12c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d12f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d132 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10f9d135 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d138 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d13b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10f9d13f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9d141 jne 0x10f9d160 */
  if (!C.zf) goto L_10f9d160;
  /* 10f9d143 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9d146 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d149 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9d14e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9d150 not eax */
  EAX = (~(EAX));
  /* 10f9d152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d155 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9d158 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9d15a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d15d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9d160:;
  /* 10f9d160 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d163 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9d166 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d169 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9d16c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9d16f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d172 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9d175 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9d178 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9d17b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10f9d17e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d181 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d184 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9d187 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d18a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10f9d18d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d190 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f9d193 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d197 jbe 0x10f9d1a0 */
  if ((C.cf||C.zf)) goto L_10f9d1a0;
  /* 10f9d199 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10f9d1a0:;
  /* 10f9d1a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9d1a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9d1a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10f9d1a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f9d1ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d1b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9d1b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9d1b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d1be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9d1c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d1c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f9d1ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9d1d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f9d1d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d1dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9d1df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d1e2 jne 0x10f9d2ae */
  if (!C.zf) goto L_10f9d2ae;
  /* 10f9d1e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d1ec jae 0x10f9d248 */
  if (!C.cf) goto L_10f9d248;
  /* 10f9d1ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d1f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d1f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9d1f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d1fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d1fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f9d201 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9d203 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d206 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d209 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f9d20c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9d20e jne 0x10f9d226 */
  if (!C.zf) goto L_10f9d226;
  /* 10f9d210 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9d215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9d218 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9d21a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d21d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9d21f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9d221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d224 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f9d226:;
  /* 10f9d226 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d22b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9d22e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d233 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d236 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10f9d23a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d23c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d23f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d242 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10f9d246 jmp 0x10f9d2ae */
  goto L_10f9d2ae;
L_10f9d248:;
  /* 10f9d248 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d24b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d24e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10f9d252 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d255 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d258 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f9d25b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9d25d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d260 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d263 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10f9d266 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9d268 jne 0x10f9d285 */
  if (!C.zf) goto L_10f9d285;
  /* 10f9d26a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9d26d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d270 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10f9d275 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10f9d277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d27a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9d27d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9d27f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9d282 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10f9d285:;
  /* 10f9d285 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9d288 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d28b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d290 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d295 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d298 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10f9d29f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d2a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d2a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10f9d2a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10f9d2ae:;
  /* 10f9d2ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d2b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d2b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f9d2b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d2b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d2bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9d2bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10f9d2c2:;
  /* 10f9d2c2 mov eax, 1 */
  EAX = (0x1u);
L_10f9d2c7:;
  /* 10f9d2c7 mov esp, ebp */
  ESP = (EBP);
  /* 10f9d2c9 pop ebp */
  EBP = (pop32());
  /* 10f9d2ca ret  */
  ESPCHK(0x10f9cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x10f9d2d0 (304 bytes, 79 insns) */
void f_10f9d2d0(void) {
  FTRACE(0x10f9d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9d2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d2d4 cmp dword ptr [0x10fc50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d2db je 0x10f9d3fc */
  if (C.zf) goto L_10f9d3fc;
  /* 10f9d2e1 mov eax, dword ptr [0x10fc5098] */
  EAX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9d2e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10f9d2e9 mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d2ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9d2f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d2f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9d2f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f9d2fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9d301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d304 push eax */
  push32((uint32_t)(EAX));
  /* 10f9d305 call dword ptr [0x10fc639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc639c))), 0x10f9d30bu);
  /* 10f9d30b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d310 mov ecx, dword ptr [0x10fc5098] */
  ECX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9d316 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d318 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d31d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9d320 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9d322 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d328 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10f9d32b mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d330 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9d333 mov edx, dword ptr [0x10fc5098] */
  EDX = (r32((uint32_t)(0x10fc5098)));
  /* 10f9d339 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10f9d344 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d349 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9d34c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10f9d34f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10f9d352 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d357 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9d35a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10f9d35d mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d363 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9d366 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10f9d36a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9d36c jne 0x10f9d382 */
  if (!C.zf) goto L_10f9d382;
  /* 10f9d36e mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d374 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9d377 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10f9d379 mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d37f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10f9d382:;
  /* 10f9d382 mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d388 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d38c jne 0x10f9d3f2 */
  if (!C.zf) goto L_10f9d3f2;
  /* 10f9d38e cmp dword ptr [0x10fc50a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d395 jle 0x10f9d3f2 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d3f2;
  /* 10f9d397 mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d39c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f9d39f push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d3a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9d3a2 mov edx, dword ptr [0x10fc50ac] */
  EDX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9d3a8 push edx */
  push32((uint32_t)(EDX));
  /* 10f9d3a9 call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9d3afu);
  /* 10f9d3af mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9d3b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9d3b7 mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9d3bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d3bf mov edx, dword ptr [0x10fc50a0] */
  EDX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d3c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d3c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d3ca push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d3cb mov eax, dword ptr [0x10fc50a0] */
  EAX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d3d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d3d3 push eax */
  push32((uint32_t)(EAX));
  /* 10f9d3d4 mov ecx, dword ptr [0x10fc50a0] */
  ECX = (r32((uint32_t)(0x10fc50a0)));
  /* 10f9d3da push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d3db call 0x10f9fa00 */
  push32(0x10f9d3e0u); f_10f9fa00();
  /* 10f9d3e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d3e3 mov edx, dword ptr [0x10fc50a4] */
  EDX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9d3e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d3ec mov dword ptr [0x10fc50a4], edx */
  w32((uint32_t)(0x10fc50a4), (EDX));
L_10f9d3f2:;
  /* 10f9d3f2 mov dword ptr [0x10fc50a0], 0 */
  w32((uint32_t)(0x10fc50a0), (0x0u));
L_10f9d3fc:;
  /* 10f9d3fc mov esp, ebp */
  ESP = (EBP);
  /* 10f9d3fe pop ebp */
  EBP = (pop32());
  /* 10f9d3ff ret  */
  ESPCHK(0x10f9d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x10f9d400 (1565 bytes, 343 insns) */
void f_10f9d400(void) {
  FTRACE(0x10f9d400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9d400 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9d401 mov ebp, esp */
  EBP = (ESP);
  /* 10f9d403 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d409 mov eax, dword ptr [0x10fc50a4] */
  EAX = (r32((uint32_t)(0x10fc50a4)));
  /* 10f9d40e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9d411 push eax */
  push32((uint32_t)(EAX));
  /* 10f9d412 mov ecx, dword ptr [0x10fc50a8] */
  ECX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9d418 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d419 call dword ptr [0x10fc6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6374))), 0x10f9d41fu);
  /* 10f9d41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9d421 je 0x10f9d42b */
  if (C.zf) goto L_10f9d42b;
  /* 10f9d423 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d426 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d42b:;
  /* 10f9d42b mov edx, dword ptr [0x10fc50a8] */
  EDX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9d431 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10f9d437 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10f9d441 jmp 0x10f9d452 */
  goto L_10f9d452;
L_10f9d443:;
  /* 10f9d443 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10f9d449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d44c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10f9d452:;
  /* 10f9d452 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10f9d458 cmp ecx, dword ptr [0x10fc50a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc50a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d45e jge 0x10f9da17 */
  if ((C.sf==C.of)) goto L_10f9da17;
  /* 10f9d464 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9d46a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9d46d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10f9d473 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10f9d478 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f9d47e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d47f call dword ptr [0x10fc6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6374))), 0x10f9d485u);
  /* 10f9d485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9d487 je 0x10f9d493 */
  if (C.zf) goto L_10f9d493;
  /* 10f9d489 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10f9d48e jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d493:;
  /* 10f9d493 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9d499 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9d49c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10f9d4a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f9d4a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d4ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f9d4b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9d4b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9d4ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9d4bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10f9d4c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10f9d4d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f9d4d8 jmp 0x10f9d4e3 */
  goto L_10f9d4e3;
L_10f9d4da:;
  /* 10f9d4da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9d4dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f9d4e3:;
  /* 10f9d4e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d4e7 jge 0x10f9d9db */
  if ((C.sf==C.of)) goto L_10f9d9db;
  /* 10f9d4ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10f9d4f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10f9d501 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10f9d50b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10f9d515 jmp 0x10f9d526 */
  goto L_10f9d526;
L_10f9d517:;
  /* 10f9d517 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f9d51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d520 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10f9d526:;
  /* 10f9d526 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d52d jge 0x10f9d542 */
  if ((C.sf==C.of)) goto L_10f9d542;
  /* 10f9d52f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f9d535 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10f9d540 jmp 0x10f9d517 */
  goto L_10f9d517;
L_10f9d542:;
  /* 10f9d542 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d546 jl 0x10f9d97d */
  if ((C.sf!=C.of)) goto L_10f9d97d;
  /* 10f9d54c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9d551 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f9d557 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9d558 call dword ptr [0x10fc6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6374))), 0x10f9d55eu);
  /* 10f9d55e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9d560 je 0x10f9d56c */
  if (C.zf) goto L_10f9d56c;
  /* 10f9d562 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10f9d567 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d56c:;
  /* 10f9d56c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f9d572 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f9d575 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10f9d57f jmp 0x10f9d590 */
  goto L_10f9d590;
L_10f9d581:;
  /* 10f9d581 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10f9d587 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d58a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10f9d590:;
  /* 10f9d590 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d597 jge 0x10f9d714 */
  if ((C.sf==C.of)) goto L_10f9d714;
  /* 10f9d59d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9d5a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d5a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10f9d5a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d5af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d5b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10f9d5bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d5c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d5c5 jne 0x10f9d5d2 */
  if (!C.zf) goto L_10f9d5d2;
  /* 10f9d5c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10f9d5cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d5d0 je 0x10f9d5dc */
  if (C.zf) goto L_10f9d5dc;
L_10f9d5d2:;
  /* 10f9d5d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10f9d5d7 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d5dc:;
  /* 10f9d5dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d5e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9d5e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10f9d5ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f9d5f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10f9d5f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10f9d5fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9d5ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9d601 je 0x10f9d639 */
  if (C.zf) goto L_10f9d639;
  /* 10f9d603 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f9d609 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d60c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10f9d612 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d61c jle 0x10f9d628 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d628;
  /* 10f9d61e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10f9d623 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d628:;
  /* 10f9d628 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10f9d62e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d631 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10f9d637 jmp 0x10f9d67b */
  goto L_10f9d67b;
L_10f9d639:;
  /* 10f9d639 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f9d63f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9d642 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d645 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10f9d64b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d652 jle 0x10f9d65e */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d65e;
  /* 10f9d654 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10f9d65e:;
  /* 10f9d65e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f9d664 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10f9d66b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d66e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f9d674 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10f9d67b:;
  /* 10f9d67b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d682 jl 0x10f9d69d */
  if ((C.sf!=C.of)) goto L_10f9d69d;
  /* 10f9d684 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10f9d68a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9d68f jne 0x10f9d69d */
  if (!C.zf) goto L_10f9d69d;
  /* 10f9d691 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d69b jle 0x10f9d6a7 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d6a7;
L_10f9d69d:;
  /* 10f9d69d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10f9d6a2 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d6a7:;
  /* 10f9d6a7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d6ad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d6b3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f9d6b6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d6bc je 0x10f9d6c8 */
  if (C.zf) goto L_10f9d6c8;
  /* 10f9d6be mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10f9d6c3 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d6c8:;
  /* 10f9d6c8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d6ce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d6d4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10f9d6da mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d6e0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d6e6 jb 0x10f9d5dc */
  if (C.cf) goto L_10f9d5dc;
  /* 10f9d6ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d6f2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d6f8 je 0x10f9d704 */
  if (C.zf) goto L_10f9d704;
  /* 10f9d6fa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10f9d6ff jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d704:;
  /* 10f9d704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9d707 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d70c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9d70f jmp 0x10f9d581 */
  goto L_10f9d581;
L_10f9d714:;
  /* 10f9d714 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d717 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9d719 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d71f je 0x10f9d72b */
  if (C.zf) goto L_10f9d72b;
  /* 10f9d721 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10f9d726 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d72b:;
  /* 10f9d72b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d72e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10f9d734 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f9d73b jmp 0x10f9d746 */
  goto L_10f9d746;
L_10f9d73d:;
  /* 10f9d73d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d743 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f9d746:;
  /* 10f9d746 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d74a jge 0x10f9d97d */
  if ((C.sf==C.of)) goto L_10f9d97d;
  /* 10f9d750 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10f9d75a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f9d760 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10f9d766:;
  /* 10f9d766 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d76c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9d76f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10f9d775 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d77b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d781 je 0x10f9d8aa */
  if (C.zf) goto L_10f9d8aa;
  /* 10f9d787 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d78a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f9d790 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d797 je 0x10f9d8aa */
  if (C.zf) goto L_10f9d8aa;
  /* 10f9d79d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d7a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d7a9 jb 0x10f9d7be */
  if (C.cf) goto L_10f9d7be;
  /* 10f9d7ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f9d7b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d7b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d7bc jb 0x10f9d7c8 */
  if (C.cf) goto L_10f9d7c8;
L_10f9d7be:;
  /* 10f9d7be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10f9d7c3 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d7c8:;
  /* 10f9d7c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d7ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9d7d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10f9d7da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10f9d7e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d7e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f9d7e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d7e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d7ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10f9d7f4:;
  /* 10f9d7f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d7f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d7fd je 0x10f9d81e */
  if (C.zf) goto L_10f9d81e;
  /* 10f9d7ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d802 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d808 jne 0x10f9d80c */
  if (!C.zf) goto L_10f9d80c;
  /* 10f9d80a jmp 0x10f9d81e */
  goto L_10f9d81e;
L_10f9d80c:;
  /* 10f9d80c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d80f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9d811 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9d814 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d817 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d819 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f9d81c jmp 0x10f9d7f4 */
  goto L_10f9d7f4;
L_10f9d81e:;
  /* 10f9d81e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9d821 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d827 jne 0x10f9d833 */
  if (!C.zf) goto L_10f9d833;
  /* 10f9d829 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10f9d82e jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d833:;
  /* 10f9d833 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d839 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9d83b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9d83e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d841 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10f9d847 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d84e jle 0x10f9d85a */
  if ((C.zf||C.sf!=C.of)) goto L_10f9d85a;
  /* 10f9d850 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10f9d85a:;
  /* 10f9d85a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10f9d860 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d863 je 0x10f9d86f */
  if (C.zf) goto L_10f9d86f;
  /* 10f9d865 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10f9d86a jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d86f:;
  /* 10f9d86f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d875 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9d878 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d87e je 0x10f9d88a */
  if (C.zf) goto L_10f9d88a;
  /* 10f9d880 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10f9d885 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d88a:;
  /* 10f9d88a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10f9d890 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10f9d896 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f9d89c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d89f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10f9d8a5 jmp 0x10f9d766 */
  goto L_10f9d766;
L_10f9d8aa:;
  /* 10f9d8aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d8b1 je 0x10f9d921 */
  if (C.zf) goto L_10f9d921;
  /* 10f9d8b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d8b7 jge 0x10f9d8eb */
  if ((C.sf==C.of)) goto L_10f9d8eb;
  /* 10f9d8b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d8be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d8c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d8c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10f9d8c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d8cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10f9d8d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d8d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d8d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d8db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10f9d8e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d8e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10f9d8e9 jmp 0x10f9d921 */
  goto L_10f9d921;
L_10f9d8eb:;
  /* 10f9d8eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d8ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d8f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d8f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d8f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10f9d8fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d900 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10f9d906 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d909 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9d90c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10f9d911 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10f9d913 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10f9d919 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9d91b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10f9d921:;
  /* 10f9d921 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10f9d927 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9d92a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d930 jne 0x10f9d944 */
  if (!C.zf) goto L_10f9d944;
  /* 10f9d932 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9d935 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10f9d93b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d942 je 0x10f9d94e */
  if (C.zf) goto L_10f9d94e;
L_10f9d944:;
  /* 10f9d944 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10f9d949 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d94e:;
  /* 10f9d94e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f9d954 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9d957 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d95d je 0x10f9d969 */
  if (C.zf) goto L_10f9d969;
  /* 10f9d95f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10f9d964 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d969:;
  /* 10f9d969 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10f9d96f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d972 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10f9d978 jmp 0x10f9d73d */
  goto L_10f9d73d;
L_10f9d97d:;
  /* 10f9d97d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9d980 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f9d986 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10f9d98c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d990 jne 0x10f9d9aa */
  if (!C.zf) goto L_10f9d9aa;
  /* 10f9d992 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9d995 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10f9d99b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10f9d9a1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d9a8 je 0x10f9d9b1 */
  if (C.zf) goto L_10f9d9b1;
L_10f9d9aa:;
  /* 10f9d9aa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10f9d9af jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9d9b1:;
  /* 10f9d9b1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10f9d9b7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d9bd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10f9d9c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9d9c6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9d9cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9d9ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9d9d1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f9d9d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9d9d6 jmp 0x10f9d4da */
  goto L_10f9d4da;
L_10f9d9db:;
  /* 10f9d9db mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9d9e1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10f9d9e7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d9e9 jne 0x10f9d9fc */
  if (!C.zf) goto L_10f9d9fc;
  /* 10f9d9eb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9d9f1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10f9d9f7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9d9fa je 0x10f9da03 */
  if (C.zf) goto L_10f9da03;
L_10f9d9fc:;
  /* 10f9d9fc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10f9da01 jmp 0x10f9da19 */
  goto L_10f9da19;
L_10f9da03:;
  /* 10f9da03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10f9da09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9da0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10f9da12 jmp 0x10f9d443 */
  goto L_10f9d443;
L_10f9da17:;
  /* 10f9da17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9da19:;
  /* 10f9da19 mov esp, ebp */
  ESP = (EBP);
  /* 10f9da1b pop ebp */
  EBP = (pop32());
  /* 10f9da1c ret  */
  ESPCHK(0x10f9d400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x10f9da20 (250 bytes, 92 insns) */
void f_10f9da20(void) {
  FTRACE(0x10f9da20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9da20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9da21 mov ebp, esp */
  EBP = (ESP);
  /* 10f9da23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9da26 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9da27 push esi */
  push32((uint32_t)(ESI));
  /* 10f9da28 push edi */
  push32((uint32_t)(EDI));
  /* 10f9da29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f9da2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9da2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f9da32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10f9da35:;
  /* 10f9da35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9da39 jne 0x10f9da59 */
  if (!C.zf) goto L_10f9da59;
  /* 10f9da3b push 0x10fbef40 */
  push32((uint32_t)(0x10fbef40u));
  /* 10f9da40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9da42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10f9da44 push 0x10fbef34 */
  push32((uint32_t)(0x10fbef34u));
  /* 10f9da49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9da4b call 0x10f96bd0 */
  push32(0x10f9da50u); f_10f96bd0();
  /* 10f9da50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9da53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9da56 jne 0x10f9da59 */
  if (!C.zf) goto L_10f9da59;
  /* 10f9da58 int3  */
  x86_unimpl("int3 @ 0x10f9da58");
L_10f9da59:;
  /* 10f9da59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9da5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9da5d jne 0x10f9da35 */
  if (!C.zf) goto L_10f9da35;
L_10f9da5f:;
  /* 10f9da5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9da63 jne 0x10f9da83 */
  if (!C.zf) goto L_10f9da83;
  /* 10f9da65 push 0x10fbef24 */
  push32((uint32_t)(0x10fbef24u));
  /* 10f9da6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9da6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10f9da6e push 0x10fbef34 */
  push32((uint32_t)(0x10fbef34u));
  /* 10f9da73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9da75 call 0x10f96bd0 */
  push32(0x10f9da7au); f_10f96bd0();
  /* 10f9da7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9da7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9da80 jne 0x10f9da83 */
  if (!C.zf) goto L_10f9da83;
  /* 10f9da82 int3  */
  x86_unimpl("int3 @ 0x10f9da82");
L_10f9da83:;
  /* 10f9da83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9da85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9da87 jne 0x10f9da5f */
  if (!C.zf) goto L_10f9da5f;
  /* 10f9da89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9da8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10f9da93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9da96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9da99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9da9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9da9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9daa2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f9daa4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9daa7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10f9daae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9dab1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9dab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9dab5 push edx */
  push32((uint32_t)(EDX));
  /* 10f9dab6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dab9 push eax */
  push32((uint32_t)(EAX));
  /* 10f9daba call 0x10f9eaa0 */
  push32(0x10f9dabfu); f_10f9eaa0();
  /* 10f9dabf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dac2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9dac5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dac8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9dacb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9dace mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dad1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9dad4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dad7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dadb jl 0x10f9daff */
  if ((C.sf!=C.of)) goto L_10f9daff;
  /* 10f9dadd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dae0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9dae2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f9dae5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9dae7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9daed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10f9daf0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9daf3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9daf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9daf8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dafb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9dafd jmp 0x10f9db10 */
  goto L_10f9db10;
L_10f9daff:;
  /* 10f9daff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9db02 push edx */
  push32((uint32_t)(EDX));
  /* 10f9db03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9db05 call 0x10f9e820 */
  push32(0x10f9db0au); f_10f9e820();
  /* 10f9db0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9db0d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10f9db10:;
  /* 10f9db10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9db13 pop edi */
  EDI = (pop32());
  /* 10f9db14 pop esi */
  ESI = (pop32());
  /* 10f9db15 pop ebx */
  EBX = (pop32());
  /* 10f9db16 mov esp, ebp */
  ESP = (EBP);
  /* 10f9db18 pop ebp */
  EBP = (pop32());
  /* 10f9db19 ret  */
  ESPCHK(0x10f9da20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db20 @ 0x10f9db20 (183 bytes, 58 insns) */
void f_10f9db20(void) {
  FTRACE(0x10f9db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9db20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9db21 mov ebp, esp */
  EBP = (ESP);
  /* 10f9db23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9db26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9db29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9db2c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9db31 ja 0x10f9db4a */
  if ((!C.cf&&!C.zf)) goto L_10f9db4a;
  /* 10f9db33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9db36 mov edx, dword ptr [0x10fc1c98] */
  EDX = (r32((uint32_t)(0x10fc1c98)));
  /* 10f9db3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9db3e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10f9db42 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10f9db45 jmp 0x10f9dbd3 */
  goto L_10f9dbd3;
L_10f9db4a:;
  /* 10f9db4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9db4d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f9db50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9db56 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9db5c mov edx, dword ptr [0x10fc1c98] */
  EDX = (r32((uint32_t)(0x10fc1c98)));
  /* 10f9db62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9db64 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10f9db68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9db6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9db6f je 0x10f9db93 */
  if (C.zf) goto L_10f9db93;
  /* 10f9db71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9db74 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10f9db77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9db7d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10f9db80 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f9db83 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10f9db86 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10f9db8a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10f9db91 jmp 0x10f9dba4 */
  goto L_10f9dba4;
L_10f9db93:;
  /* 10f9db93 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f9db96 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10f9db99 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10f9db9d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10f9dba4:;
  /* 10f9dba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9dba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9dba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9dbaa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f9dbad push ecx */
  push32((uint32_t)(ECX));
  /* 10f9dbae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dbb1 push edx */
  push32((uint32_t)(EDX));
  /* 10f9dbb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f9dbb5 push eax */
  push32((uint32_t)(EAX));
  /* 10f9dbb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9dbb8 call 0x10f9fd40 */
  push32(0x10f9dbbdu); f_10f9fd40();
  /* 10f9dbbd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dbc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9dbc2 jne 0x10f9dbc8 */
  if (!C.zf) goto L_10f9dbc8;
  /* 10f9dbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dbc6 jmp 0x10f9dbd3 */
  goto L_10f9dbd3;
L_10f9dbc8:;
  /* 10f9dbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dbcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dbd0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10f9dbd3:;
  /* 10f9dbd3 mov esp, ebp */
  ESP = (EBP);
  /* 10f9dbd5 pop ebp */
  EBP = (pop32());
  /* 10f9dbd6 ret  */
  ESPCHK(0x10f9db20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x10f9dbe0 (836 bytes, 238 insns) */
void f_10f9dbe0(void) {
  FTRACE(0x10f9dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9dbe3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9dbe6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9dbe8 call 0x10f9b510 */
  push32(0x10f9dbedu); f_10f9b510();
  /* 10f9dbed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9dbf3 push eax */
  push32((uint32_t)(EAX));
  /* 10f9dbf4 call 0x10f9df30 */
  push32(0x10f9dbf9u); f_10f9df30();
  /* 10f9dbf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dbfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f9dbff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9dc02 cmp ecx, dword ptr [0x10fc4de4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc4de4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dc08 jne 0x10f9dc1b */
  if (!C.zf) goto L_10f9dc1b;
  /* 10f9dc0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9dc0c call 0x10f9b5b0 */
  push32(0x10f9dc11u); f_10f9b5b0();
  /* 10f9dc11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dc14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dc16 jmp 0x10f9df20 */
  goto L_10f9df20;
L_10f9dc1b:;
  /* 10f9dc1b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dc1f jne 0x10f9dc3c */
  if (!C.zf) goto L_10f9dc3c;
  /* 10f9dc21 call 0x10f9e010 */
  push32(0x10f9dc26u); f_10f9e010();
  /* 10f9dc26 call 0x10f9e090 */
  push32(0x10f9dc2bu); f_10f9e090();
  /* 10f9dc2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9dc2d call 0x10f9b5b0 */
  push32(0x10f9dc32u); f_10f9b5b0();
  /* 10f9dc32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dc35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dc37 jmp 0x10f9df20 */
  goto L_10f9df20;
L_10f9dc3c:;
  /* 10f9dc3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9dc43 jmp 0x10f9dc4e */
  goto L_10f9dc4e;
L_10f9dc45:;
  /* 10f9dc45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dc48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dc4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9dc4e:;
  /* 10f9dc4e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dc52 jae 0x10f9dd9f */
  if (!C.cf) goto L_10f9dd9f;
  /* 10f9dc58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dc5b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9dc5e mov ecx, dword ptr [eax + 0x10fc1eb8] */
  ECX = (r32((uint32_t)(EAX + 0x10fc1eb8)));
  /* 10f9dc64 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dc67 jne 0x10f9dd9a */
  if (!C.zf) goto L_10f9dd9a;
  /* 10f9dc6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f9dc74 jmp 0x10f9dc7f */
  goto L_10f9dc7f;
L_10f9dc76:;
  /* 10f9dc76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dc79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dc7c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10f9dc7f:;
  /* 10f9dc7f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dc86 jae 0x10f9dc94 */
  if (!C.cf) goto L_10f9dc94;
  /* 10f9dc88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dc8b mov byte ptr [eax + 0x10fc4f80], 0 */
  w8((uint32_t)(EAX + 0x10fc4f80), (0x0u));
  /* 10f9dc92 jmp 0x10f9dc76 */
  goto L_10f9dc76;
L_10f9dc94:;
  /* 10f9dc94 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f9dc9b jmp 0x10f9dca6 */
  goto L_10f9dca6;
L_10f9dc9d:;
  /* 10f9dc9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dca0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dca3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f9dca6:;
  /* 10f9dca6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dcaa jae 0x10f9dd27 */
  if (!C.cf) goto L_10f9dd27;
  /* 10f9dcac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dcaf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9dcb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dcb5 lea ecx, [edx + eax*8 + 0x10fc1ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10fc1ec8));
  /* 10f9dcbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9dcbf jmp 0x10f9dcca */
  goto L_10f9dcca;
L_10f9dcc1:;
  /* 10f9dcc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dcc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dcc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f9dcca:;
  /* 10f9dcca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9dccf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f9dcd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9dcd3 je 0x10f9dd22 */
  if (C.zf) goto L_10f9dd22;
  /* 10f9dcd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dcd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dcda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f9dcdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9dcdf je 0x10f9dd22 */
  if (C.zf) goto L_10f9dd22;
  /* 10f9dce1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9dce6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9dce8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9dceb jmp 0x10f9dcf6 */
  goto L_10f9dcf6;
L_10f9dced:;
  /* 10f9dced mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dcf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dcf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f9dcf6:;
  /* 10f9dcf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9dcf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9dcfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f9dcfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dd01 ja 0x10f9dd20 */
  if ((!C.cf&&!C.zf)) goto L_10f9dd20;
  /* 10f9dd03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dd06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dd09 mov dl, byte ptr [eax + 0x10fc4f81] */
  DL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f9dd0f or dl, byte ptr [ecx + 0x10fc1eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10fc1eb0))); DL = (_r); fl_logic(_r,8); }
  /* 10f9dd15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9dd18 mov byte ptr [eax + 0x10fc4f81], dl */
  w8((uint32_t)(EAX + 0x10fc4f81), (DL));
  /* 10f9dd1e jmp 0x10f9dced */
  goto L_10f9dced;
L_10f9dd20:;
  /* 10f9dd20 jmp 0x10f9dcc1 */
  goto L_10f9dcc1;
L_10f9dd22:;
  /* 10f9dd22 jmp 0x10f9dc9d */
  goto L_10f9dc9d;
L_10f9dd27:;
  /* 10f9dd27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9dd2a mov dword ptr [0x10fc4de4], ecx */
  w32((uint32_t)(0x10fc4de4), (ECX));
  /* 10f9dd30 mov dword ptr [0x10fc4e6c], 1 */
  w32((uint32_t)(0x10fc4e6c), (0x1u));
  /* 10f9dd3a mov edx, dword ptr [0x10fc4de4] */
  EDX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9dd40 push edx */
  push32((uint32_t)(EDX));
  /* 10f9dd41 call 0x10f9df90 */
  push32(0x10f9dd46u); f_10f9df90();
  /* 10f9dd46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dd49 mov dword ptr [0x10fc5084], eax */
  w32((uint32_t)(0x10fc5084), (EAX));
  /* 10f9dd4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f9dd55 jmp 0x10f9dd60 */
  goto L_10f9dd60;
L_10f9dd57:;
  /* 10f9dd57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dd5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dd5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f9dd60:;
  /* 10f9dd60 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dd64 jae 0x10f9dd84 */
  if (!C.cf) goto L_10f9dd84;
  /* 10f9dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dd69 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9dd6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dd6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dd72 mov cx, word ptr [ecx + eax*2 + 0x10fc1ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10fc1ebc)));
  /* 10f9dd7a mov word ptr [edx*2 + 0x10fc4e60], cx */
  w16((uint32_t)(EDX*2 + 0x10fc4e60), (CX));
  /* 10f9dd82 jmp 0x10f9dd57 */
  goto L_10f9dd57;
L_10f9dd84:;
  /* 10f9dd84 call 0x10f9e090 */
  push32(0x10f9dd89u); f_10f9e090();
  /* 10f9dd89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9dd8b call 0x10f9b5b0 */
  push32(0x10f9dd90u); f_10f9b5b0();
  /* 10f9dd90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dd93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9dd95 jmp 0x10f9df20 */
  goto L_10f9df20;
L_10f9dd9a:;
  /* 10f9dd9a jmp 0x10f9dc45 */
  goto L_10f9dc45;
L_10f9dd9f:;
  /* 10f9dd9f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10f9dda2 push edx */
  push32((uint32_t)(EDX));
  /* 10f9dda3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9dda6 push eax */
  push32((uint32_t)(EAX));
  /* 10f9dda7 call dword ptr [0x10fc62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62ec))), 0x10f9ddadu);
  /* 10f9ddad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ddb0 jne 0x10f9def2 */
  if (!C.zf) goto L_10f9def2;
  /* 10f9ddb6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f9ddbd jmp 0x10f9ddc8 */
  goto L_10f9ddc8;
L_10f9ddbf:;
  /* 10f9ddbf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ddc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ddc5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10f9ddc8:;
  /* 10f9ddc8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ddcf jae 0x10f9dddd */
  if (!C.cf) goto L_10f9dddd;
  /* 10f9ddd1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ddd4 mov byte ptr [edx + 0x10fc4f80], 0 */
  w8((uint32_t)(EDX + 0x10fc4f80), (0x0u));
  /* 10f9dddb jmp 0x10f9ddbf */
  goto L_10f9ddbf;
L_10f9dddd:;
  /* 10f9dddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9dde0 mov dword ptr [0x10fc4de4], eax */
  w32((uint32_t)(0x10fc4de4), (EAX));
  /* 10f9dde5 mov dword ptr [0x10fc5084], 0 */
  w32((uint32_t)(0x10fc5084), (0x0u));
  /* 10f9ddef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ddf3 jbe 0x10f9deae */
  if ((C.cf||C.zf)) goto L_10f9deae;
  /* 10f9ddf9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10f9ddfc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10f9ddff jmp 0x10f9de0a */
  goto L_10f9de0a;
L_10f9de01:;
  /* 10f9de01 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9de04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9de07 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10f9de0a:;
  /* 10f9de0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9de0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9de0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f9de11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9de13 je 0x10f9de5c */
  if (C.zf) goto L_10f9de5c;
  /* 10f9de15 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9de18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9de1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10f9de1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9de1f je 0x10f9de5c */
  if (C.zf) goto L_10f9de5c;
  /* 10f9de21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9de24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9de26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9de28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9de2b jmp 0x10f9de36 */
  goto L_10f9de36;
L_10f9de2d:;
  /* 10f9de2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9de33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f9de36:;
  /* 10f9de36 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9de39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9de3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10f9de3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9de41 ja 0x10f9de5a */
  if ((!C.cf&&!C.zf)) goto L_10f9de5a;
  /* 10f9de43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de46 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f9de4c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10f9de4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de52 mov byte ptr [edx + 0x10fc4f81], cl */
  w8((uint32_t)(EDX + 0x10fc4f81), (CL));
  /* 10f9de58 jmp 0x10f9de2d */
  goto L_10f9de2d;
L_10f9de5a:;
  /* 10f9de5a jmp 0x10f9de01 */
  goto L_10f9de01;
L_10f9de5c:;
  /* 10f9de5c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10f9de63 jmp 0x10f9de6e */
  goto L_10f9de6e;
L_10f9de65:;
  /* 10f9de65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9de6b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f9de6e:;
  /* 10f9de6e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9de75 jae 0x10f9de8e */
  if (!C.cf) goto L_10f9de8e;
  /* 10f9de77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de7a mov dl, byte ptr [ecx + 0x10fc4f81] */
  DL = (r8((uint32_t)(ECX + 0x10fc4f81)));
  /* 10f9de80 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10f9de83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9de86 mov byte ptr [eax + 0x10fc4f81], dl */
  w8((uint32_t)(EAX + 0x10fc4f81), (DL));
  /* 10f9de8c jmp 0x10f9de65 */
  goto L_10f9de65;
L_10f9de8e:;
  /* 10f9de8e mov ecx, dword ptr [0x10fc4de4] */
  ECX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9de94 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9de95 call 0x10f9df90 */
  push32(0x10f9de9au); f_10f9df90();
  /* 10f9de9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9de9d mov dword ptr [0x10fc5084], eax */
  w32((uint32_t)(0x10fc5084), (EAX));
  /* 10f9dea2 mov dword ptr [0x10fc4e6c], 1 */
  w32((uint32_t)(0x10fc4e6c), (0x1u));
  /* 10f9deac jmp 0x10f9deb8 */
  goto L_10f9deb8;
L_10f9deae:;
  /* 10f9deae mov dword ptr [0x10fc4e6c], 0 */
  w32((uint32_t)(0x10fc4e6c), (0x0u));
L_10f9deb8:;
  /* 10f9deb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f9debf jmp 0x10f9deca */
  goto L_10f9deca;
L_10f9dec1:;
  /* 10f9dec1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9dec4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9dec7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f9deca:;
  /* 10f9deca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dece jae 0x10f9dedf */
  if (!C.cf) goto L_10f9dedf;
  /* 10f9ded0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9ded3 mov word ptr [eax*2 + 0x10fc4e60], 0 */
  w16((uint32_t)(EAX*2 + 0x10fc4e60), (0x0u));
  /* 10f9dedd jmp 0x10f9dec1 */
  goto L_10f9dec1;
L_10f9dedf:;
  /* 10f9dedf call 0x10f9e090 */
  push32(0x10f9dee4u); f_10f9e090();
  /* 10f9dee4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9dee6 call 0x10f9b5b0 */
  push32(0x10f9deebu); f_10f9b5b0();
  /* 10f9deeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9deee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9def0 jmp 0x10f9df20 */
  goto L_10f9df20;
L_10f9def2:;
  /* 10f9def2 cmp dword ptr [0x10fc38f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc38f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9def9 je 0x10f9df13 */
  if (C.zf) goto L_10f9df13;
  /* 10f9defb call 0x10f9e010 */
  push32(0x10f9df00u); f_10f9e010();
  /* 10f9df00 call 0x10f9e090 */
  push32(0x10f9df05u); f_10f9e090();
  /* 10f9df05 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9df07 call 0x10f9b5b0 */
  push32(0x10f9df0cu); f_10f9b5b0();
  /* 10f9df0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9df0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9df11 jmp 0x10f9df20 */
  goto L_10f9df20;
L_10f9df13:;
  /* 10f9df13 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f9df15 call 0x10f9b5b0 */
  push32(0x10f9df1au); f_10f9b5b0();
  /* 10f9df1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9df1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f9df20:;
  /* 10f9df20 mov esp, ebp */
  ESP = (EBP);
  /* 10f9df22 pop ebp */
  EBP = (pop32());
  /* 10f9df23 ret  */
  ESPCHK(0x10f9dbe0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10f9df30 (89 bytes, 21 insns) */
void f_10f9df30(void) {
  FTRACE(0x10f9df30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9df30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9df31 mov ebp, esp */
  EBP = (ESP);
  /* 10f9df33 mov dword ptr [0x10fc38f0], 0 */
  w32((uint32_t)(0x10fc38f0), (0x0u));
  /* 10f9df3d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9df41 jne 0x10f9df55 */
  if (!C.zf) goto L_10f9df55;
  /* 10f9df43 mov dword ptr [0x10fc38f0], 1 */
  w32((uint32_t)(0x10fc38f0), (0x1u));
  /* 10f9df4d call dword ptr [0x10fc62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e4))), 0x10f9df53u);
  /* 10f9df53 jmp 0x10f9df87 */
  goto L_10f9df87;
L_10f9df55:;
  /* 10f9df55 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9df59 jne 0x10f9df6d */
  if (!C.zf) goto L_10f9df6d;
  /* 10f9df5b mov dword ptr [0x10fc38f0], 1 */
  w32((uint32_t)(0x10fc38f0), (0x1u));
  /* 10f9df65 call dword ptr [0x10fc62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f4))), 0x10f9df6bu);
  /* 10f9df6b jmp 0x10f9df87 */
  goto L_10f9df87;
L_10f9df6d:;
  /* 10f9df6d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9df71 jne 0x10f9df84 */
  if (!C.zf) goto L_10f9df84;
  /* 10f9df73 mov dword ptr [0x10fc38f0], 1 */
  w32((uint32_t)(0x10fc38f0), (0x1u));
  /* 10f9df7d mov eax, dword ptr [0x10fc3910] */
  EAX = (r32((uint32_t)(0x10fc3910)));
  /* 10f9df82 jmp 0x10f9df87 */
  goto L_10f9df87;
L_10f9df84:;
  /* 10f9df84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10f9df87:;
  /* 10f9df87 pop ebp */
  EBP = (pop32());
  /* 10f9df88 ret  */
  ESPCHK(0x10f9df30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x10f9df90 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10f9df90(void) {
  FTRACE(0x10f9df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9df90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9df91 mov ebp, esp */
  EBP = (ESP);
  /* 10f9df93 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9df94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9df97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9df9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9df9d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9dfa3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9dfa6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9dfaa ja 0x10f9dfda */
  if ((!C.cf&&!C.zf)) goto L_10f9dfda;
  /* 10f9dfac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9dfaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9dfb1 mov dl, byte ptr [eax + 0x10f9dff4] */
  DL = (r8((uint32_t)(EAX + 0x10f9dff4)));
  /* 10f9dfb7 jmp dword ptr [edx*4 + 0x10f9dfe0] */
  switch (EDX) {
    case 0: goto L_10f9dfbe;
    case 1: goto L_10f9dfc5;
    case 2: goto L_10f9dfcc;
    case 3: goto L_10f9dfd3;
    case 4: goto L_10f9dfda;
    default: x86_unimpl("switch@0x10f9dfb7 out of table"); return;
  }
L_10f9dfbe:;
  /* 10f9dfbe mov eax, 0x411 */
  EAX = (0x411u);
  /* 10f9dfc3 jmp 0x10f9dfdc */
  goto L_10f9dfdc;
L_10f9dfc5:;
  /* 10f9dfc5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10f9dfca jmp 0x10f9dfdc */
  goto L_10f9dfdc;
L_10f9dfcc:;
  /* 10f9dfcc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10f9dfd1 jmp 0x10f9dfdc */
  goto L_10f9dfdc;
L_10f9dfd3:;
  /* 10f9dfd3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10f9dfd8 jmp 0x10f9dfdc */
  goto L_10f9dfdc;
L_10f9dfda:;
  /* 10f9dfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9dfdc:;
  /* 10f9dfdc mov esp, ebp */
  ESP = (EBP);
  /* 10f9dfde pop ebp */
  EBP = (pop32());
  /* 10f9dfdf ret  */
  ESPCHK(0x10f9df90u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10f9e010 (116 bytes, 29 insns) */
void f_10f9e010(void) {
  FTRACE(0x10f9e010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e010 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e011 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e013 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9e01b jmp 0x10f9e026 */
  goto L_10f9e026;
L_10f9e01d:;
  /* 10f9e01d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9e026:;
  /* 10f9e026 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e02d jge 0x10f9e03b */
  if ((C.sf==C.of)) goto L_10f9e03b;
  /* 10f9e02f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e032 mov byte ptr [ecx + 0x10fc4f80], 0 */
  w8((uint32_t)(ECX + 0x10fc4f80), (0x0u));
  /* 10f9e039 jmp 0x10f9e01d */
  goto L_10f9e01d;
L_10f9e03b:;
  /* 10f9e03b mov dword ptr [0x10fc4de4], 0 */
  w32((uint32_t)(0x10fc4de4), (0x0u));
  /* 10f9e045 mov dword ptr [0x10fc4e6c], 0 */
  w32((uint32_t)(0x10fc4e6c), (0x0u));
  /* 10f9e04f mov dword ptr [0x10fc5084], 0 */
  w32((uint32_t)(0x10fc5084), (0x0u));
  /* 10f9e059 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9e060 jmp 0x10f9e06b */
  goto L_10f9e06b;
L_10f9e062:;
  /* 10f9e062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e065 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e068 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9e06b:;
  /* 10f9e06b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e06f jge 0x10f9e080 */
  if ((C.sf==C.of)) goto L_10f9e080;
  /* 10f9e071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e074 mov word ptr [eax*2 + 0x10fc4e60], 0 */
  w16((uint32_t)(EAX*2 + 0x10fc4e60), (0x0u));
  /* 10f9e07e jmp 0x10f9e062 */
  goto L_10f9e062;
L_10f9e080:;
  /* 10f9e080 mov esp, ebp */
  ESP = (EBP);
  /* 10f9e082 pop ebp */
  EBP = (pop32());
  /* 10f9e083 ret  */
  ESPCHK(0x10f9e010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e090 @ 0x10f9e090 (770 bytes, 175 insns) */
void f_10f9e090(void) {
  FTRACE(0x10f9e090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e090 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e091 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e093 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e099 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10f9e09f push eax */
  push32((uint32_t)(EAX));
  /* 10f9e0a0 mov ecx, dword ptr [0x10fc4de4] */
  ECX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9e0a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e0a7 call dword ptr [0x10fc62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62ec))), 0x10f9e0adu);
  /* 10f9e0ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e0b0 jne 0x10f9e2c9 */
  if (!C.zf) goto L_10f9e2c9;
  /* 10f9e0b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f9e0c0 jmp 0x10f9e0d1 */
  goto L_10f9e0d1;
L_10f9e0c2:;
  /* 10f9e0c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e0c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e0cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10f9e0d1:;
  /* 10f9e0d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e0db jae 0x10f9e0f2 */
  if (!C.cf) goto L_10f9e0f2;
  /* 10f9e0dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e0e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10f9e0e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10f9e0f0 jmp 0x10f9e0c2 */
  goto L_10f9e0c2;
L_10f9e0f2:;
  /* 10f9e0f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10f9e0f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10f9e0ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9e102 jmp 0x10f9e10d */
  goto L_10f9e10d;
L_10f9e104:;
  /* 10f9e104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e107 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e10a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9e10d:;
  /* 10f9e10d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e110 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e112 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9e114 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9e116 je 0x10f9e158 */
  if (C.zf) goto L_10f9e158;
  /* 10f9e118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e11b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e11d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f9e11f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10f9e125 jmp 0x10f9e136 */
  goto L_10f9e136;
L_10f9e127:;
  /* 10f9e127 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e12d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e130 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10f9e136:;
  /* 10f9e136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e139 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e13b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10f9e13e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e144 ja 0x10f9e156 */
  if ((!C.cf&&!C.zf)) goto L_10f9e156;
  /* 10f9e146 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e14c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10f9e154 jmp 0x10f9e127 */
  goto L_10f9e127;
L_10f9e156:;
  /* 10f9e156 jmp 0x10f9e104 */
  goto L_10f9e104;
L_10f9e158:;
  /* 10f9e158 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9e15a mov eax, dword ptr [0x10fc5084] */
  EAX = (r32((uint32_t)(0x10fc5084)));
  /* 10f9e15f push eax */
  push32((uint32_t)(EAX));
  /* 10f9e160 mov ecx, dword ptr [0x10fc4de4] */
  ECX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9e166 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e167 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10f9e16d push edx */
  push32((uint32_t)(EDX));
  /* 10f9e16e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e173 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10f9e179 push eax */
  push32((uint32_t)(EAX));
  /* 10f9e17a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9e17c call 0x10f9fd40 */
  push32(0x10f9e181u); f_10f9fd40();
  /* 10f9e181 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9e186 mov ecx, dword ptr [0x10fc4de4] */
  ECX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9e18c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e18d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e192 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10f9e198 push edx */
  push32((uint32_t)(EDX));
  /* 10f9e199 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e19e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10f9e1a4 push eax */
  push32((uint32_t)(EAX));
  /* 10f9e1a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e1aa mov ecx, dword ptr [0x10fc5084] */
  ECX = (r32((uint32_t)(0x10fc5084)));
  /* 10f9e1b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e1b1 call 0x10f9ff00 */
  push32(0x10f9e1b6u); f_10f9ff00();
  /* 10f9e1b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e1b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9e1bb mov edx, dword ptr [0x10fc4de4] */
  EDX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9e1c1 push edx */
  push32((uint32_t)(EDX));
  /* 10f9e1c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e1c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10f9e1cd push eax */
  push32((uint32_t)(EAX));
  /* 10f9e1ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9e1d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10f9e1d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e1da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10f9e1df mov edx, dword ptr [0x10fc5084] */
  EDX = (r32((uint32_t)(0x10fc5084)));
  /* 10f9e1e5 push edx */
  push32((uint32_t)(EDX));
  /* 10f9e1e6 call 0x10f9ff00 */
  push32(0x10f9e1ebu); f_10f9ff00();
  /* 10f9e1eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e1ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f9e1f8 jmp 0x10f9e209 */
  goto L_10f9e209;
L_10f9e1fa:;
  /* 10f9e1fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e203 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10f9e209:;
  /* 10f9e209 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e213 jae 0x10f9e2c4 */
  if (!C.cf) goto L_10f9e2c4;
  /* 10f9e219 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e21f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e221 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10f9e229 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e22c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9e22e je 0x10f9e266 */
  if (C.zf) goto L_10f9e266;
  /* 10f9e230 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e236 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f9e23c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10f9e23f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e245 mov byte ptr [edx + 0x10fc4f81], cl */
  w8((uint32_t)(EDX + 0x10fc4f81), (CL));
  /* 10f9e24b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e251 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e257 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10f9e25e mov byte ptr [eax + 0x10fc4e80], dl */
  w8((uint32_t)(EAX + 0x10fc4e80), (DL));
  /* 10f9e264 jmp 0x10f9e2bf */
  goto L_10f9e2bf;
L_10f9e266:;
  /* 10f9e266 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e26c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e26e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10f9e276 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e279 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9e27b je 0x10f9e2b2 */
  if (C.zf) goto L_10f9e2b2;
  /* 10f9e27d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e283 mov al, byte ptr [edx + 0x10fc4f81] */
  AL = (r8((uint32_t)(EDX + 0x10fc4f81)));
  /* 10f9e289 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f9e28b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e291 mov byte ptr [ecx + 0x10fc4f81], al */
  w8((uint32_t)(ECX + 0x10fc4f81), (AL));
  /* 10f9e297 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e29d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e2a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10f9e2aa mov byte ptr [edx + 0x10fc4e80], cl */
  w8((uint32_t)(EDX + 0x10fc4e80), (CL));
  /* 10f9e2b0 jmp 0x10f9e2bf */
  goto L_10f9e2bf;
L_10f9e2b2:;
  /* 10f9e2b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e2b8 mov byte ptr [edx + 0x10fc4e80], 0 */
  w8((uint32_t)(EDX + 0x10fc4e80), (0x0u));
L_10f9e2bf:;
  /* 10f9e2bf jmp 0x10f9e1fa */
  goto L_10f9e1fa;
L_10f9e2c4:;
  /* 10f9e2c4 jmp 0x10f9e38e */
  goto L_10f9e38e;
L_10f9e2c9:;
  /* 10f9e2c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10f9e2d3 jmp 0x10f9e2e4 */
  goto L_10f9e2e4;
L_10f9e2d5:;
  /* 10f9e2d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e2db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e2de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10f9e2e4:;
  /* 10f9e2e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e2ee jae 0x10f9e38e */
  if (!C.cf) goto L_10f9e38e;
  /* 10f9e2f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e2fb jb 0x10f9e338 */
  if (C.cf) goto L_10f9e338;
  /* 10f9e2fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e304 ja 0x10f9e338 */
  if ((!C.cf&&!C.zf)) goto L_10f9e338;
  /* 10f9e306 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e30c mov dl, byte ptr [ecx + 0x10fc4f81] */
  DL = (r8((uint32_t)(ECX + 0x10fc4f81)));
  /* 10f9e312 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10f9e315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e31b mov byte ptr [eax + 0x10fc4f81], dl */
  w8((uint32_t)(EAX + 0x10fc4f81), (DL));
  /* 10f9e321 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e327 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e32a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e330 mov byte ptr [edx + 0x10fc4e80], cl */
  w8((uint32_t)(EDX + 0x10fc4e80), (CL));
  /* 10f9e336 jmp 0x10f9e389 */
  goto L_10f9e389;
L_10f9e338:;
  /* 10f9e338 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e33f jb 0x10f9e37c */
  if (C.cf) goto L_10f9e37c;
  /* 10f9e341 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e348 ja 0x10f9e37c */
  if ((!C.cf&&!C.zf)) goto L_10f9e37c;
  /* 10f9e34a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e350 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f9e356 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10f9e359 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e35f mov byte ptr [edx + 0x10fc4f81], cl */
  w8((uint32_t)(EDX + 0x10fc4f81), (CL));
  /* 10f9e365 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e36b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e36e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e374 mov byte ptr [ecx + 0x10fc4e80], al */
  w8((uint32_t)(ECX + 0x10fc4e80), (AL));
  /* 10f9e37a jmp 0x10f9e389 */
  goto L_10f9e389;
L_10f9e37c:;
  /* 10f9e37c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10f9e382 mov byte ptr [edx + 0x10fc4e80], 0 */
  w8((uint32_t)(EDX + 0x10fc4e80), (0x0u));
L_10f9e389:;
  /* 10f9e389 jmp 0x10f9e2d5 */
  goto L_10f9e2d5;
L_10f9e38e:;
  /* 10f9e38e mov esp, ebp */
  ESP = (EBP);
  /* 10f9e390 pop ebp */
  EBP = (pop32());
  /* 10f9e391 ret  */
  ESPCHK(0x10f9e090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x10f9e3a0 (23 bytes, 9 insns) */
void f_10f9e3a0(void) {
  FTRACE(0x10f9e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e3a3 cmp dword ptr [0x10fc4e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc4e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e3aa je 0x10f9e3b3 */
  if (C.zf) goto L_10f9e3b3;
  /* 10f9e3ac mov eax, dword ptr [0x10fc4de4] */
  EAX = (r32((uint32_t)(0x10fc4de4)));
  /* 10f9e3b1 jmp 0x10f9e3b5 */
  goto L_10f9e3b5;
L_10f9e3b3:;
  /* 10f9e3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9e3b5:;
  /* 10f9e3b5 pop ebp */
  EBP = (pop32());
  /* 10f9e3b6 ret  */
  ESPCHK(0x10f9e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x10f9e3c0 (34 bytes, 10 insns) */
void f_10f9e3c0(void) {
  FTRACE(0x10f9e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e3c3 cmp dword ptr [0x10fc5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e3ca jne 0x10f9e3e0 */
  if (!C.zf) goto L_10f9e3e0;
  /* 10f9e3cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10f9e3ce call 0x10f9dbe0 */
  push32(0x10f9e3d3u); f_10f9dbe0();
  /* 10f9e3d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e3d6 mov dword ptr [0x10fc5230], 1 */
  w32((uint32_t)(0x10fc5230), (0x1u));
L_10f9e3e0:;
  /* 10f9e3e0 pop ebp */
  EBP = (pop32());
  /* 10f9e3e1 ret  */
  ESPCHK(0x10f9e3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3f0 @ 0x10f9e3f0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10f9e3f0(void) {
  FTRACE(0x10f9e3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e3f3 push edi */
  push32((uint32_t)(EDI));
  /* 10f9e3f4 push esi */
  push32((uint32_t)(ESI));
  /* 10f9e3f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9e3f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9e3fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e3fe mov eax, ecx */
  EAX = (ECX);
  /* 10f9e400 mov edx, ecx */
  EDX = (ECX);
  /* 10f9e402 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e404 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e406 jbe 0x10f9e410 */
  if ((C.cf||C.zf)) goto L_10f9e410;
  /* 10f9e408 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e40a jb 0x10f9e588 */
  if (C.cf) goto L_10f9e588;
L_10f9e410:;
  /* 10f9e410 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9e416 jne 0x10f9e42c */
  if (!C.zf) goto L_10f9e42c;
  /* 10f9e418 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e41b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e41e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e421 jb 0x10f9e44c */
  if (C.cf) goto L_10f9e44c;
  /* 10f9e423 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e425 jmp dword ptr [edx*4 + 0x10f9e538] */
  switch (EDX) {
    case 0: goto L_10f9e548;
    case 1: goto L_10f9e550;
    case 2: goto L_10f9e55c;
    case 3: goto L_10f9e570;
    default: x86_unimpl("switch@0x10f9e425 out of table"); return;
  }
L_10f9e42c:;
  /* 10f9e42c mov eax, edi */
  EAX = (EDI);
  /* 10f9e42e mov edx, 3 */
  EDX = (0x3u);
  /* 10f9e433 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e436 jb 0x10f9e444 */
  if (C.cf) goto L_10f9e444;
  /* 10f9e438 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e43b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e43d jmp dword ptr [eax*4 + 0x10f9e450] */
  switch (EAX) {
    case 1: goto L_10f9e460;
    case 2: goto L_10f9e48c;
    case 3: goto L_10f9e4b0;
    default: x86_unimpl("switch@0x10f9e43d out of table"); return;
  }
L_10f9e444:;
  /* 10f9e444 jmp dword ptr [ecx*4 + 0x10f9e548] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f9e548)))); return;
  /* 10f9e44b nop  */
  /* nop */
L_10f9e44c:;
  /* 10f9e44c jmp dword ptr [ecx*4 + 0x10f9e4cc] */
  switch (ECX) {
    case 0: goto L_10f9e52f;
    case 1: goto L_10f9e51c;
    case 2: goto L_10f9e514;
    case 3: goto L_10f9e50c;
    case 4: goto L_10f9e504;
    case 5: goto L_10f9e4fc;
    case 6: goto L_10f9e4f4;
    case 7: goto L_10f9e4ec;
    default: x86_unimpl("switch@0x10f9e44c out of table"); return;
  }
  /* 10f9e453 nop  */
  /* nop */
L_10f9e460:;
  /* 10f9e460 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e462 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e464 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e466 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e469 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e46c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e46f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e472 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e475 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e478 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e47b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e47e jb 0x10f9e44c */
  if (C.cf) goto L_10f9e44c;
  /* 10f9e480 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e482 jmp dword ptr [edx*4 + 0x10f9e538] */
  switch (EDX) {
    case 0: goto L_10f9e548;
    case 1: goto L_10f9e550;
    case 2: goto L_10f9e55c;
    case 3: goto L_10f9e570;
    default: x86_unimpl("switch@0x10f9e482 out of table"); return;
  }
  /* 10f9e489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e48c:;
  /* 10f9e48c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e48e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e490 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e492 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e495 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e498 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e49b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e49e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e4a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e4a4 jb 0x10f9e44c */
  if (C.cf) goto L_10f9e44c;
  /* 10f9e4a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e4a8 jmp dword ptr [edx*4 + 0x10f9e538] */
  switch (EDX) {
    case 0: goto L_10f9e548;
    case 1: goto L_10f9e550;
    case 2: goto L_10f9e55c;
    case 3: goto L_10f9e570;
    default: x86_unimpl("switch@0x10f9e4a8 out of table"); return;
  }
  /* 10f9e4af nop  */
  /* nop */
L_10f9e4b0:;
  /* 10f9e4b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e4b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e4b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e4b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f9e4b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e4ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9e4bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e4be jb 0x10f9e44c */
  if (C.cf) goto L_10f9e44c;
  /* 10f9e4c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e4c2 jmp dword ptr [edx*4 + 0x10f9e538] */
  switch (EDX) {
    case 0: goto L_10f9e548;
    case 1: goto L_10f9e550;
    case 2: goto L_10f9e55c;
    case 3: goto L_10f9e570;
    default: x86_unimpl("switch@0x10f9e4c2 out of table"); return;
  }
  /* 10f9e4c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e4ec:;
  /* 10f9e4ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f9e4f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f9e4f4:;
  /* 10f9e4f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f9e4f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f9e4fc:;
  /* 10f9e4fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f9e500 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f9e504:;
  /* 10f9e504 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f9e508 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f9e50c:;
  /* 10f9e50c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f9e510 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f9e514:;
  /* 10f9e514 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f9e518 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f9e51c:;
  /* 10f9e51c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f9e520 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f9e524 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f9e52b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e52d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f9e52f:;
  /* 10f9e52f jmp dword ptr [edx*4 + 0x10f9e538] */
  switch (EDX) {
    case 0: goto L_10f9e548;
    case 1: goto L_10f9e550;
    case 2: goto L_10f9e55c;
    case 3: goto L_10f9e570;
    default: x86_unimpl("switch@0x10f9e52f out of table"); return;
  }
  /* 10f9e536 mov edi, edi */
  EDI = (EDI);
L_10f9e548:;
  /* 10f9e548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e54b pop esi */
  ESI = (pop32());
  /* 10f9e54c pop edi */
  EDI = (pop32());
  /* 10f9e54d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e54e ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e54f nop  */
  /* nop */
L_10f9e550:;
  /* 10f9e550 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e552 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e557 pop esi */
  ESI = (pop32());
  /* 10f9e558 pop edi */
  EDI = (pop32());
  /* 10f9e559 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e55a ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e55b nop  */
  /* nop */
L_10f9e55c:;
  /* 10f9e55c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e55e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e560 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e563 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e569 pop esi */
  ESI = (pop32());
  /* 10f9e56a pop edi */
  EDI = (pop32());
  /* 10f9e56b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e56c ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e56d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e570:;
  /* 10f9e570 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9e572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9e574 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e577 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e57a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e57d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e583 pop esi */
  ESI = (pop32());
  /* 10f9e584 pop edi */
  EDI = (pop32());
  /* 10f9e585 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e586 ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e587 nop  */
  /* nop */
L_10f9e588:;
  /* 10f9e588 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f9e58c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f9e590 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9e596 jne 0x10f9e5bc */
  if (!C.zf) goto L_10f9e5bc;
  /* 10f9e598 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e59b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e59e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e5a1 jb 0x10f9e5b0 */
  if (C.cf) goto L_10f9e5b0;
  /* 10f9e5a3 std  */
  C.df=1;
  /* 10f9e5a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e5a6 cld  */
  C.df=0;
  /* 10f9e5a7 jmp dword ptr [edx*4 + 0x10f9e6d0] */
  switch (EDX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e5a7 out of table"); return;
  }
  /* 10f9e5ae mov edi, edi */
  EDI = (EDI);
L_10f9e5b0:;
  /* 10f9e5b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9e5b2 jmp dword ptr [ecx*4 + 0x10f9e680] */
  switch (ECX) {
    case 0: goto L_10f9e6c7;
    default: x86_unimpl("switch@0x10f9e5b2 out of table"); return;
  }
  /* 10f9e5b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e5bc:;
  /* 10f9e5bc mov eax, edi */
  EAX = (EDI);
  /* 10f9e5be mov edx, 3 */
  EDX = (0x3u);
  /* 10f9e5c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e5c6 jb 0x10f9e5d4 */
  if (C.cf) goto L_10f9e5d4;
  /* 10f9e5c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e5cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e5cd jmp dword ptr [eax*4 + 0x10f9e5d8] */
  switch (EAX) {
    case 1: goto L_10f9e5e8;
    case 2: goto L_10f9e608;
    case 3: goto L_10f9e630;
    default: x86_unimpl("switch@0x10f9e5cd out of table"); return;
  }
L_10f9e5d4:;
  /* 10f9e5d4 jmp dword ptr [ecx*4 + 0x10f9e6d0] */
  switch (ECX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e5d4 out of table"); return;
  }
  /* 10f9e5db nop  */
  /* nop */
L_10f9e5e8:;
  /* 10f9e5e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e5eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e5ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e5f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f9e5f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e5f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f9e5f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e5f8 jb 0x10f9e5b0 */
  if (C.cf) goto L_10f9e5b0;
  /* 10f9e5fa std  */
  C.df=1;
  /* 10f9e5fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e5fd cld  */
  C.df=0;
  /* 10f9e5fe jmp dword ptr [edx*4 + 0x10f9e6d0] */
  switch (EDX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e5fe out of table"); return;
  }
  /* 10f9e605 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e608:;
  /* 10f9e608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e60b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e60d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e610 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e613 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e616 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e619 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e61c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e61f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e622 jb 0x10f9e5b0 */
  if (C.cf) goto L_10f9e5b0;
  /* 10f9e624 std  */
  C.df=1;
  /* 10f9e625 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e627 cld  */
  C.df=0;
  /* 10f9e628 jmp dword ptr [edx*4 + 0x10f9e6d0] */
  switch (EDX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e628 out of table"); return;
  }
  /* 10f9e62f nop  */
  /* nop */
L_10f9e630:;
  /* 10f9e630 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e633 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e635 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e638 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e63b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e63e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e641 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9e644 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e647 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e64a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e64d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e650 jb 0x10f9e5b0 */
  if (C.cf) goto L_10f9e5b0;
  /* 10f9e656 std  */
  C.df=1;
  /* 10f9e657 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9e659 cld  */
  C.df=0;
  /* 10f9e65a jmp dword ptr [edx*4 + 0x10f9e6d0] */
  switch (EDX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e65a out of table"); return;
  }
  /* 10f9e661 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f9e664 test dh, ah */
  { uint32_t _r=(C.d.b.h)&(AH); fl_logic(_r,8); }
  /* 10f9e666 stc  */
  x86_unimpl("stc @ 0x10f9e666");
  /* 10f9e667 adc byte ptr [esi - 0x196bef07], cl */
  { uint32_t _a=(r8((uint32_t)(ESI + -0x196bef07))),_b=(CL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + -0x196bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9e66e stc  */
  x86_unimpl("stc @ 0x10f9e66e");
  /* 10f9e66f adc byte ptr [esi - 0x195bef07], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + -0x195bef07))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESI + -0x195bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9e676 stc  */
  x86_unimpl("stc @ 0x10f9e676");
  /* 10f9e677 adc byte ptr [esi - 0x194bef07], ch */
  { uint32_t _a=(r8((uint32_t)(ESI + -0x194bef07))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESI + -0x194bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9e67e stc  */
  x86_unimpl("stc @ 0x10f9e67e");
  /* 10f9e684 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f9e688 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f9e68c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f9e690 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f9e694 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f9e698 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f9e69c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f9e6a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f9e6a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f9e6a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f9e6ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f9e6b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f9e6b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f9e6b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f9e6bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f9e6c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e6c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f9e6c7:;
  /* 10f9e6c7 jmp dword ptr [edx*4 + 0x10f9e6d0] */
  switch (EDX) {
    case 0: goto L_10f9e6e0;
    case 1: goto L_10f9e6e8;
    case 2: goto L_10f9e6f8;
    case 3: goto L_10f9e70c;
    default: x86_unimpl("switch@0x10f9e6c7 out of table"); return;
  }
  /* 10f9e6ce mov edi, edi */
  EDI = (EDI);
L_10f9e6e0:;
  /* 10f9e6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e6e3 pop esi */
  ESI = (pop32());
  /* 10f9e6e4 pop edi */
  EDI = (pop32());
  /* 10f9e6e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e6e6 ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e6e7 nop  */
  /* nop */
L_10f9e6e8:;
  /* 10f9e6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e6eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e6ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e6f1 pop esi */
  ESI = (pop32());
  /* 10f9e6f2 pop edi */
  EDI = (pop32());
  /* 10f9e6f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e6f4 ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e6f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9e6f8:;
  /* 10f9e6f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e6fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e6fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e701 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e707 pop esi */
  ESI = (pop32());
  /* 10f9e708 pop edi */
  EDI = (pop32());
  /* 10f9e709 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e70a ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
  /* 10f9e70b nop  */
  /* nop */
L_10f9e70c:;
  /* 10f9e70c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9e70f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9e712 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9e715 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9e718 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9e71b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9e71e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9e721 pop esi */
  ESI = (pop32());
  /* 10f9e722 pop edi */
  EDI = (pop32());
  /* 10f9e723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9e724 ret  */
  ESPCHK(0x10f9e3f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10f9e730 (104 bytes, 43 insns) */
void f_10f9e730(void) {
  FTRACE(0x10f9e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e730 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9e731 push esi */
  push32((uint32_t)(ESI));
  /* 10f9e732 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10f9e736 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e738 jne 0x10f9e752 */
  if (!C.zf) goto L_10f9e752;
  /* 10f9e73a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f9e73e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9e742 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e744 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e746 mov ebx, eax */
  EBX = (EAX);
  /* 10f9e748 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9e74c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e74e mov edx, ebx */
  EDX = (EBX);
  /* 10f9e750 jmp 0x10f9e793 */
  goto L_10f9e793;
L_10f9e752:;
  /* 10f9e752 mov ecx, eax */
  ECX = (EAX);
  /* 10f9e754 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f9e758 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9e75c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10f9e760:;
  /* 10f9e760 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f9e762 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10f9e764 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f9e766 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10f9e768 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e76a jne 0x10f9e760 */
  if (!C.zf) goto L_10f9e760;
  /* 10f9e76c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e76e mov esi, eax */
  ESI = (EAX);
  /* 10f9e770 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f9e774 mov ecx, eax */
  ECX = (EAX);
  /* 10f9e776 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f9e77a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f9e77c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e77e jb 0x10f9e78e */
  if (C.cf) goto L_10f9e78e;
  /* 10f9e780 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e784 ja 0x10f9e78e */
  if ((!C.cf&&!C.zf)) goto L_10f9e78e;
  /* 10f9e786 jb 0x10f9e78f */
  if (C.cf) goto L_10f9e78f;
  /* 10f9e788 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e78c jbe 0x10f9e78f */
  if ((C.cf||C.zf)) goto L_10f9e78f;
L_10f9e78e:;
  /* 10f9e78e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10f9e78f:;
  /* 10f9e78f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e791 mov eax, esi */
  EAX = (ESI);
L_10f9e793:;
  /* 10f9e793 pop esi */
  ESI = (pop32());
  /* 10f9e794 pop ebx */
  EBX = (pop32());
  /* 10f9e795 ret 0x10 */
  ESPCHK(0x10f9e730u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10f9e7a0 (117 bytes, 44 insns) */
void f_10f9e7a0(void) {
  FTRACE(0x10f9e7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e7a0 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9e7a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10f9e7a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e7a7 jne 0x10f9e7c1 */
  if (!C.zf) goto L_10f9e7c1;
  /* 10f9e7a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9e7ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9e7b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e7b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e7b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9e7b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e7bb mov eax, edx */
  EAX = (EDX);
  /* 10f9e7bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e7bf jmp 0x10f9e811 */
  goto L_10f9e811;
L_10f9e7c1:;
  /* 10f9e7c1 mov ecx, eax */
  ECX = (EAX);
  /* 10f9e7c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9e7c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9e7cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10f9e7cf:;
  /* 10f9e7cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f9e7d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10f9e7d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f9e7d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10f9e7d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e7d9 jne 0x10f9e7cf */
  if (!C.zf) goto L_10f9e7cf;
  /* 10f9e7db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9e7dd mov ecx, eax */
  ECX = (EAX);
  /* 10f9e7df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f9e7e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10f9e7e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10f9e7e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e7ea jb 0x10f9e7fa */
  if (C.cf) goto L_10f9e7fa;
  /* 10f9e7ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e7f0 ja 0x10f9e7fa */
  if ((!C.cf&&!C.zf)) goto L_10f9e7fa;
  /* 10f9e7f2 jb 0x10f9e802 */
  if (C.cf) goto L_10f9e802;
  /* 10f9e7f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e7f8 jbe 0x10f9e802 */
  if ((C.cf||C.zf)) goto L_10f9e802;
L_10f9e7fa:;
  /* 10f9e7fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e7fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f9e802:;
  /* 10f9e802 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e806 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e80a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9e80c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9e80e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f9e811:;
  /* 10f9e811 pop ebx */
  EBX = (pop32());
  /* 10f9e812 ret 0x10 */
  ESPCHK(0x10f9e7a0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e820 @ 0x10f9e820 (628 bytes, 214 insns) */
void f_10f9e820(void) {
  FTRACE(0x10f9e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9e820 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9e821 mov ebp, esp */
  EBP = (ESP);
  /* 10f9e823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e826 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9e827 push esi */
  push32((uint32_t)(ESI));
  /* 10f9e828 push edi */
  push32((uint32_t)(EDI));
L_10f9e829:;
  /* 10f9e829 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e82d jne 0x10f9e84d */
  if (!C.zf) goto L_10f9e84d;
  /* 10f9e82f push 0x10fbefec */
  push32((uint32_t)(0x10fbefecu));
  /* 10f9e834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9e836 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10f9e838 push 0x10fbefe0 */
  push32((uint32_t)(0x10fbefe0u));
  /* 10f9e83d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9e83f call 0x10f96bd0 */
  push32(0x10f9e844u); f_10f96bd0();
  /* 10f9e844 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e84a jne 0x10f9e84d */
  if (!C.zf) goto L_10f9e84d;
  /* 10f9e84c int3  */
  x86_unimpl("int3 @ 0x10f9e84c");
L_10f9e84d:;
  /* 10f9e84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9e851 jne 0x10f9e829 */
  if (!C.zf) goto L_10f9e829;
  /* 10f9e853 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9e856 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9e859 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e85c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9e85f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9e862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e865 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e868 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e86e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9e870 je 0x10f9e87f */
  if (C.zf) goto L_10f9e87f;
  /* 10f9e872 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e875 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9e878 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e87b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9e87d je 0x10f9e895 */
  if (C.zf) goto L_10f9e895;
L_10f9e87f:;
  /* 10f9e87f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e882 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9e885 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f9e887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e88a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10f9e88d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e890 jmp 0x10f9ea8d */
  goto L_10f9ea8d;
L_10f9e895:;
  /* 10f9e895 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e898 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9e89b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e89e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9e8a0 je 0x10f9e8ec */
  if (C.zf) goto L_10f9e8ec;
  /* 10f9e8a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8a5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f9e8ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8af mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9e8b2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9e8b7 je 0x10f9e8d5 */
  if (C.zf) goto L_10f9e8d5;
  /* 10f9e8b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8bf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9e8c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9e8c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e8ca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e8cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8d0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f9e8d3 jmp 0x10f9e8ec */
  goto L_10f9e8ec;
L_10f9e8d5:;
  /* 10f9e8d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8d8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e8db or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e8de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8e1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f9e8e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e8e7 jmp 0x10f9ea8d */
  goto L_10f9ea8d;
L_10f9e8ec:;
  /* 10f9e8ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e8f2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e8f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8f8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f9e8fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e8fe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e901 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e904 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e907 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10f9e90a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e90d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f9e914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9e91b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e91e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9e921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e924 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9e927 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9e92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9e92f jne 0x10f9e95f */
  if (!C.zf) goto L_10f9e95f;
  /* 10f9e931 cmp dword ptr [ebp - 8], 0x10fc2140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10fc2140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e938 je 0x10f9e943 */
  if (C.zf) goto L_10f9e943;
  /* 10f9e93a cmp dword ptr [ebp - 8], 0x10fc2160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10fc2160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e941 jne 0x10f9e953 */
  if (!C.zf) goto L_10f9e953;
L_10f9e943:;
  /* 10f9e943 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9e946 push edx */
  push32((uint32_t)(EDX));
  /* 10f9e947 call 0x10fa0790 */
  push32(0x10f9e94cu); f_10fa0790();
  /* 10f9e94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9e951 jne 0x10f9e95f */
  if (!C.zf) goto L_10f9e95f;
L_10f9e953:;
  /* 10f9e953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e956 push eax */
  push32((uint32_t)(EAX));
  /* 10f9e957 call 0x10fa06c0 */
  push32(0x10f9e95cu); f_10fa06c0();
  /* 10f9e95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9e95f:;
  /* 10f9e95f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e962 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f9e965 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9e96b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9e96d je 0x10f9ea4b */
  if (C.zf) goto L_10f9ea4b;
L_10f9e973:;
  /* 10f9e973 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e976 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e979 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10f9e97b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e97e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9e980 jge 0x10f9e9a3 */
  if ((C.sf==C.of)) goto L_10f9e9a3;
  /* 10f9e982 push 0x10fbefa0 */
  push32((uint32_t)(0x10fbefa0u));
  /* 10f9e987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9e989 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10f9e98e push 0x10fbefe0 */
  push32((uint32_t)(0x10fbefe0u));
  /* 10f9e993 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9e995 call 0x10f96bd0 */
  push32(0x10f9e99au); f_10f96bd0();
  /* 10f9e99a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e99d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e9a0 jne 0x10f9e9a3 */
  if (!C.zf) goto L_10f9e9a3;
  /* 10f9e9a2 int3  */
  x86_unimpl("int3 @ 0x10f9e9a2");
L_10f9e9a3:;
  /* 10f9e9a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9e9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9e9a7 jne 0x10f9e973 */
  if (!C.zf) goto L_10f9e973;
  /* 10f9e9a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9af mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f9e9b1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e9b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9e9b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9ba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9e9bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e9c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f9e9c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f9e9cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9e9ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9e9d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e9d8 jle 0x10f9e9f6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9e9f6;
  /* 10f9e9da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e9de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9e9e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9e9e4 push eax */
  push32((uint32_t)(EAX));
  /* 10f9e9e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9e9e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9e9e9 call 0x10fa03b0 */
  push32(0x10f9e9eeu); f_10fa03b0();
  /* 10f9e9ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9e9f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9e9f4 jmp 0x10f9ea3e */
  goto L_10f9ea3e;
L_10f9e9f6:;
  /* 10f9e9f6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9e9fa je 0x10f9ea19 */
  if (C.zf) goto L_10f9ea19;
  /* 10f9e9fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9e9ff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10f9ea02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9ea05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ea08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9ea0b mov ecx, dword ptr [edx*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10f9ea12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ea14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f9ea17 jmp 0x10f9ea20 */
  goto L_10f9ea20;
L_10f9ea19:;
  /* 10f9ea19 mov dword ptr [ebp - 0x14], 0x10fc1a60 */
  w32((uint32_t)(EBP + -0x14), (0x10fc1a60u));
L_10f9ea20:;
  /* 10f9ea20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9ea23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10f9ea27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ea2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ea2c je 0x10f9ea3e */
  if (C.zf) goto L_10f9ea3e;
  /* 10f9ea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9ea30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ea32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9ea35 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ea36 call 0x10fa0260 */
  push32(0x10f9ea3bu); f_10fa0260();
  /* 10f9ea3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9ea3e:;
  /* 10f9ea3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ea41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9ea44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f9ea47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f9ea49 jmp 0x10f9ea69 */
  goto L_10f9ea69;
L_10f9ea4b:;
  /* 10f9ea4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f9ea52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ea55 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ea56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10f9ea59 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ea5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9ea5d push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ea5e call 0x10fa03b0 */
  push32(0x10f9ea63u); f_10fa03b0();
  /* 10f9ea63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ea66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f9ea69:;
  /* 10f9ea69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9ea6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ea6f je 0x10f9ea85 */
  if (C.zf) goto L_10f9ea85;
  /* 10f9ea71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ea74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9ea77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ea7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ea7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10f9ea80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ea83 jmp 0x10f9ea8d */
  goto L_10f9ea8d;
L_10f9ea85:;
  /* 10f9ea85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ea88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10f9ea8d:;
  /* 10f9ea8d pop edi */
  EDI = (pop32());
  /* 10f9ea8e pop esi */
  ESI = (pop32());
  /* 10f9ea8f pop ebx */
  EBX = (pop32());
  /* 10f9ea90 mov esp, ebp */
  ESP = (EBP);
  /* 10f9ea92 pop ebp */
  EBP = (pop32());
  /* 10f9ea93 ret  */
  ESPCHK(0x10f9e820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x10f9eaa0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10f9eaa0(void) {
  FTRACE(0x10f9eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9eaa3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9eaa9 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9eaaa push esi */
  push32((uint32_t)(ESI));
  /* 10f9eaab push edi */
  push32((uint32_t)(EDI));
  /* 10f9eaac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f9eab3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10f9eabd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10f9eac4:;
  /* 10f9eac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9eac7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f9eac9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10f9eacc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ead0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ead3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ead6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f9ead9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9eadb je 0x10f9f6b7 */
  if (C.zf) goto L_10f9f6b7;
  /* 10f9eae1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eae8 jl 0x10f9f6b7 */
  if ((C.sf!=C.of)) goto L_10f9f6b7;
  /* 10f9eaee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9eaf2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eaf5 jl 0x10f9eb16 */
  if ((C.sf!=C.of)) goto L_10f9eb16;
  /* 10f9eaf7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9eafb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eafe jg 0x10f9eb16 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f9eb16;
  /* 10f9eb00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9eb04 movsx ecx, byte ptr [eax + 0x10fbefd8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10fbefd8))));
  /* 10f9eb0b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9eb0e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10f9eb14 jmp 0x10f9eb20 */
  goto L_10f9eb20;
L_10f9eb16:;
  /* 10f9eb16 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10f9eb20:;
  /* 10f9eb20 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10f9eb26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9eb29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9eb2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9eb2f movsx edx, byte ptr [ecx + eax*8 + 0x10fbeff8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10fbeff8))));
  /* 10f9eb37 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10f9eb3a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f9eb3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9eb40 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10f9eb46 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eb4d ja 0x10f9f6b2 */
  if ((!C.cf&&!C.zf)) goto L_10f9f6b2;
  /* 10f9eb53 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10f9eb59 jmp dword ptr [ecx*4 + 0x10f9f6c4] */
  switch (ECX) {
    case 0: goto L_10f9eb60;
    case 1: goto L_10f9ebfa;
    case 2: goto L_10f9ec3c;
    case 3: goto L_10f9ecab;
    case 4: goto L_10f9ed03;
    case 5: goto L_10f9ed12;
    case 6: goto L_10f9ed5e;
    case 7: goto L_10f9edf1;
    case 8: goto L_10f9ec88;
    case 9: goto L_10f9ec93;
    case 10: goto L_10f9ec7e;
    case 11: goto L_10f9ec73;
    case 12: goto L_10f9ec9e;
    case 13: goto L_10f9eca6;
    default: x86_unimpl("switch@0x10f9eb59 out of table"); return;
  }
L_10f9eb60:;
  /* 10f9eb60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f9eb67 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9eb6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9eb70 mov eax, dword ptr [0x10fc1c98] */
  EAX = (r32((uint32_t)(0x10fc1c98)));
  /* 10f9eb75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9eb77 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f9eb7b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9eb81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9eb83 je 0x10f9ebdd */
  if (C.zf) goto L_10f9ebdd;
  /* 10f9eb85 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10f9eb8b push edx */
  push32((uint32_t)(EDX));
  /* 10f9eb8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9eb8f push eax */
  push32((uint32_t)(EAX));
  /* 10f9eb90 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9eb94 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9eb95 call 0x10f9f7d0 */
  push32(0x10f9eb9au); f_10f9f7d0();
  /* 10f9eb9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9eb9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9eba0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f9eba2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10f9eba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9eba8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ebab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f9ebae:;
  /* 10f9ebae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ebb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9ebb4 jne 0x10f9ebd7 */
  if (!C.zf) goto L_10f9ebd7;
  /* 10f9ebb6 push 0x10fbf078 */
  push32((uint32_t)(0x10fbf078u));
  /* 10f9ebbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ebbd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10f9ebc2 push 0x10fbf06c */
  push32((uint32_t)(0x10fbf06cu));
  /* 10f9ebc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9ebc9 call 0x10f96bd0 */
  push32(0x10f9ebceu); f_10f96bd0();
  /* 10f9ebce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ebd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ebd4 jne 0x10f9ebd7 */
  if (!C.zf) goto L_10f9ebd7;
  /* 10f9ebd6 int3  */
  x86_unimpl("int3 @ 0x10f9ebd6");
L_10f9ebd7:;
  /* 10f9ebd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ebd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ebdb jne 0x10f9ebae */
  if (!C.zf) goto L_10f9ebae;
L_10f9ebdd:;
  /* 10f9ebdd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10f9ebe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ebe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ebe7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ebe8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ebec push eax */
  push32((uint32_t)(EAX));
  /* 10f9ebed call 0x10f9f7d0 */
  push32(0x10f9ebf2u); f_10f9f7d0();
  /* 10f9ebf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ebf5 jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ebfa:;
  /* 10f9ebfa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f9ec01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ec04 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10f9ec0a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10f9ec10 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10f9ec16 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f9ec1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9ec1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9ec26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10f9ec30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f9ec37 jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ec3c:;
  /* 10f9ec3c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ec40 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10f9ec46 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10f9ec4c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ec4f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10f9ec55 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ec5c ja 0x10f9eca6 */
  if ((!C.cf&&!C.zf)) goto L_10f9eca6;
  /* 10f9ec5e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10f9ec64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ec66 mov al, byte ptr [ecx + 0x10f9f6fc] */
  AL = (r8((uint32_t)(ECX + 0x10f9f6fc)));
  /* 10f9ec6c jmp dword ptr [eax*4 + 0x10f9f6e4] */
  switch (EAX) {
    case 0: goto L_10f9ec88;
    case 1: goto L_10f9ec93;
    case 2: goto L_10f9ec7e;
    case 3: goto L_10f9ec73;
    case 4: goto L_10f9ec9e;
    case 5: goto L_10f9eca6;
    default: x86_unimpl("switch@0x10f9ec6c out of table"); return;
  }
L_10f9ec73:;
  /* 10f9ec73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ec76 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ec79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9ec7c jmp 0x10f9eca6 */
  goto L_10f9eca6;
L_10f9ec7e:;
  /* 10f9ec7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ec81 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10f9ec83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9ec86 jmp 0x10f9eca6 */
  goto L_10f9eca6;
L_10f9ec88:;
  /* 10f9ec88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ec8b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ec8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9ec91 jmp 0x10f9eca6 */
  goto L_10f9eca6;
L_10f9ec93:;
  /* 10f9ec93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ec96 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10f9ec99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9ec9c jmp 0x10f9eca6 */
  goto L_10f9eca6;
L_10f9ec9e:;
  /* 10f9ec9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9eca1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10f9eca3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9eca6:;
  /* 10f9eca6 jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ecab:;
  /* 10f9ecab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ecaf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ecb2 jne 0x10f9ece7 */
  if (!C.zf) goto L_10f9ece7;
  /* 10f9ecb4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f9ecb7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ecb8 call 0x10f9f8e0 */
  push32(0x10f9ecbdu); f_10f9f8e0();
  /* 10f9ecbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ecc0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10f9ecc6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eccd jge 0x10f9ece5 */
  if ((C.sf==C.of)) goto L_10f9ece5;
  /* 10f9eccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ecd2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10f9ecd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9ecd7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f9ecdd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9ecdf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10f9ece5:;
  /* 10f9ece5 jmp 0x10f9ecfe */
  goto L_10f9ecfe;
L_10f9ece7:;
  /* 10f9ece7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f9eced imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9ecf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ecf4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10f9ecf8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10f9ecfe:;
  /* 10f9ecfe jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ed03:;
  /* 10f9ed03 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10f9ed0d jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ed12:;
  /* 10f9ed12 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ed16 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ed19 jne 0x10f9ed42 */
  if (!C.zf) goto L_10f9ed42;
  /* 10f9ed1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f9ed1e push eax */
  push32((uint32_t)(EAX));
  /* 10f9ed1f call 0x10f9f8e0 */
  push32(0x10f9ed24u); f_10f9f8e0();
  /* 10f9ed24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ed27 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10f9ed2d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ed34 jge 0x10f9ed40 */
  if ((C.sf==C.of)) goto L_10f9ed40;
  /* 10f9ed36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10f9ed40:;
  /* 10f9ed40 jmp 0x10f9ed59 */
  goto L_10f9ed59;
L_10f9ed42:;
  /* 10f9ed42 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f9ed48 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9ed4b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ed4f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10f9ed53 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10f9ed59:;
  /* 10f9ed59 jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9ed5e:;
  /* 10f9ed5e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9ed62 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10f9ed68 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10f9ed6e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ed71 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10f9ed77 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ed7e ja 0x10f9edec */
  if ((!C.cf&&!C.zf)) goto L_10f9edec;
  /* 10f9ed80 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10f9ed86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ed88 mov al, byte ptr [ecx + 0x10f9f721] */
  AL = (r8((uint32_t)(ECX + 0x10f9f721)));
  /* 10f9ed8e jmp dword ptr [eax*4 + 0x10f9f70d] */
  switch (EAX) {
    case 0: goto L_10f9eda0;
    case 1: goto L_10f9edd9;
    case 2: goto L_10f9ed95;
    case 3: goto L_10f9ede3;
    case 4: goto L_10f9edec;
    default: x86_unimpl("switch@0x10f9ed8e out of table"); return;
  }
L_10f9ed95:;
  /* 10f9ed95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ed98 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ed9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9ed9e jmp 0x10f9edec */
  goto L_10f9edec;
L_10f9eda0:;
  /* 10f9eda0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9eda3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f9eda6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eda9 jne 0x10f9edcb */
  if (!C.zf) goto L_10f9edcb;
  /* 10f9edab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9edae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f9edb2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9edb5 jne 0x10f9edcb */
  if (!C.zf) goto L_10f9edcb;
  /* 10f9edb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9edba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9edbd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f9edc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9edc3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f9edc6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9edc9 jmp 0x10f9edd7 */
  goto L_10f9edd7;
L_10f9edcb:;
  /* 10f9edcb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10f9edd2 jmp 0x10f9eb60 */
  goto L_10f9eb60;
L_10f9edd7:;
  /* 10f9edd7 jmp 0x10f9edec */
  goto L_10f9edec;
L_10f9edd9:;
  /* 10f9edd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9eddc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10f9edde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9ede1 jmp 0x10f9edec */
  goto L_10f9edec;
L_10f9ede3:;
  /* 10f9ede3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ede6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f9ede9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f9edec:;
  /* 10f9edec jmp 0x10f9f6b2 */
  goto L_10f9f6b2;
L_10f9edf1:;
  /* 10f9edf1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9edf5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10f9edfb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10f9ee01 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ee04 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10f9ee0a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ee11 ja 0x10f9f4d7 */
  if ((!C.cf&&!C.zf)) goto L_10f9f4d7;
  /* 10f9ee17 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10f9ee1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ee1f mov cl, byte ptr [edx + 0x10f9f78c] */
  CL = (r8((uint32_t)(EDX + 0x10f9f78c)));
  /* 10f9ee25 jmp dword ptr [ecx*4 + 0x10f9f750] */
  switch (ECX) {
    case 0: goto L_10f9ee2c;
    case 1: goto L_10f9f0c0;
    case 2: goto L_10f9ef50;
    case 3: goto L_10f9f1f9;
    case 4: goto L_10f9eebb;
    case 5: goto L_10f9ee41;
    case 6: goto L_10f9f1cb;
    case 7: goto L_10f9f0d0;
    case 8: goto L_10f9f075;
    case 9: goto L_10f9f245;
    case 10: goto L_10f9f1ef;
    case 11: goto L_10f9ef66;
    case 12: goto L_10f9f1e3;
    case 13: goto L_10f9f205;
    case 14: goto L_10f9f4d7;
    default: x86_unimpl("switch@0x10f9ee25 out of table"); return;
  }
L_10f9ee2c:;
  /* 10f9ee2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ee2f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ee34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ee36 jne 0x10f9ee41 */
  if (!C.zf) goto L_10f9ee41;
  /* 10f9ee38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ee3b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f9ee3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f9ee41:;
  /* 10f9ee41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ee44 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ee4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9ee4c je 0x10f9ee87 */
  if (C.zf) goto L_10f9ee87;
  /* 10f9ee4e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f9ee51 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ee52 call 0x10f9f920 */
  push32(0x10f9ee57u); f_10f9f920();
  /* 10f9ee57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ee5a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10f9ee5e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10f9ee62 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ee63 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10f9ee69 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ee6a call 0x10fa0a00 */
  push32(0x10f9ee6fu); f_10fa0a00();
  /* 10f9ee6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ee72 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9ee75 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ee79 jge 0x10f9ee85 */
  if ((C.sf==C.of)) goto L_10f9ee85;
  /* 10f9ee7b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10f9ee85:;
  /* 10f9ee85 jmp 0x10f9eead */
  goto L_10f9eead;
L_10f9ee87:;
  /* 10f9ee87 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f9ee8a push eax */
  push32((uint32_t)(EAX));
  /* 10f9ee8b call 0x10f9f8e0 */
  push32(0x10f9ee90u); f_10f9f8e0();
  /* 10f9ee90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ee93 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10f9ee9a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10f9eea0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10f9eea6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10f9eead:;
  /* 10f9eead lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10f9eeb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f9eeb6 jmp 0x10f9f4d7 */
  goto L_10f9f4d7;
L_10f9eebb:;
  /* 10f9eebb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10f9eebe push eax */
  push32((uint32_t)(EAX));
  /* 10f9eebf call 0x10f9f8e0 */
  push32(0x10f9eec4u); f_10f9f8e0();
  /* 10f9eec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9eec7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10f9eecd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eed4 je 0x10f9eee2 */
  if (C.zf) goto L_10f9eee2;
  /* 10f9eed6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f9eedc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9eee0 jne 0x10f9eefc */
  if (!C.zf) goto L_10f9eefc;
L_10f9eee2:;
  /* 10f9eee2 mov edx, dword ptr [0x10fc1fb0] */
  EDX = (r32((uint32_t)(0x10fc1fb0)));
  /* 10f9eee8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f9eeeb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9eeee push eax */
  push32((uint32_t)(EAX));
  /* 10f9eeef call 0x10f9a940 */
  push32(0x10f9eef4u); f_10f9a940();
  /* 10f9eef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9eef7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9eefa jmp 0x10f9ef4b */
  goto L_10f9ef4b;
L_10f9eefc:;
  /* 10f9eefc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9eeff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ef05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9ef07 je 0x10f9ef2c */
  if (C.zf) goto L_10f9ef2c;
  /* 10f9ef09 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f9ef0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9ef12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9ef15 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f9ef1b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10f9ef1e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f9ef20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9ef23 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10f9ef2a jmp 0x10f9ef4b */
  goto L_10f9ef4b;
L_10f9ef2c:;
  /* 10f9ef2c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10f9ef33 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f9ef39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9ef3c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f9ef3f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10f9ef45 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10f9ef48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f9ef4b:;
  /* 10f9ef4b jmp 0x10f9f4d7 */
  goto L_10f9f4d7;
L_10f9ef50:;
  /* 10f9ef50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ef53 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ef59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9ef5b jne 0x10f9ef66 */
  if (!C.zf) goto L_10f9ef66;
  /* 10f9ef5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ef60 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f9ef63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9ef66:;
  /* 10f9ef66 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ef6d jne 0x10f9ef7b */
  if (!C.zf) goto L_10f9ef7b;
  /* 10f9ef6f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10f9ef79 jmp 0x10f9ef87 */
  goto L_10f9ef87;
L_10f9ef7b:;
  /* 10f9ef7b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f9ef81 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10f9ef87:;
  /* 10f9ef87 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10f9ef8d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10f9ef93 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f9ef96 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ef97 call 0x10f9f8e0 */
  push32(0x10f9ef9cu); f_10f9f8e0();
  /* 10f9ef9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ef9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9efa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9efa5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9efaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9efac je 0x10f9f016 */
  if (C.zf) goto L_10f9f016;
  /* 10f9efae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9efb2 jne 0x10f9efbd */
  if (!C.zf) goto L_10f9efbd;
  /* 10f9efb4 mov ecx, dword ptr [0x10fc1fb4] */
  ECX = (r32((uint32_t)(0x10fc1fb4)));
  /* 10f9efba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f9efbd:;
  /* 10f9efbd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10f9efc4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9efc7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10f9efcd:;
  /* 10f9efcd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f9efd3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f9efd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9efdc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10f9efe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9efe4 je 0x10f9f006 */
  if (C.zf) goto L_10f9f006;
  /* 10f9efe6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f9efec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9efee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10f9eff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9eff3 je 0x10f9f006 */
  if (C.zf) goto L_10f9f006;
  /* 10f9eff5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f9effb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9effe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10f9f004 jmp 0x10f9efcd */
  goto L_10f9efcd;
L_10f9f006:;
  /* 10f9f006 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10f9f00c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f00f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f9f011 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10f9f014 jmp 0x10f9f070 */
  goto L_10f9f070;
L_10f9f016:;
  /* 10f9f016 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f01a jne 0x10f9f024 */
  if (!C.zf) goto L_10f9f024;
  /* 10f9f01c mov eax, dword ptr [0x10fc1fb0] */
  EAX = (r32((uint32_t)(0x10fc1fb0)));
  /* 10f9f021 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10f9f024:;
  /* 10f9f024 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f027 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10f9f02d:;
  /* 10f9f02d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f9f033 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10f9f039 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f03c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10f9f042 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f044 je 0x10f9f064 */
  if (C.zf) goto L_10f9f064;
  /* 10f9f046 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f9f04c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9f04f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f051 je 0x10f9f064 */
  if (C.zf) goto L_10f9f064;
  /* 10f9f053 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f9f059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f05c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10f9f062 jmp 0x10f9f02d */
  goto L_10f9f02d;
L_10f9f064:;
  /* 10f9f064 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10f9f06a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f06d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10f9f070:;
  /* 10f9f070 jmp 0x10f9f4d7 */
  goto L_10f9f4d7;
L_10f9f075:;
  /* 10f9f075 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f9f078 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f079 call 0x10f9f8e0 */
  push32(0x10f9f07eu); f_10f9f8e0();
  /* 10f9f07e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f081 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10f9f087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f08a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f08f je 0x10f9f0a3 */
  if (C.zf) goto L_10f9f0a3;
  /* 10f9f091 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10f9f097 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10f9f09e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10f9f0a1 jmp 0x10f9f0b1 */
  goto L_10f9f0b1;
L_10f9f0a3:;
  /* 10f9f0a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10f9f0a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10f9f0af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10f9f0b1:;
  /* 10f9f0b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10f9f0bb jmp 0x10f9f4d7 */
  goto L_10f9f4d7;
L_10f9f0c0:;
  /* 10f9f0c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f9f0c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10f9f0ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10f9f0cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10f9f0d0:;
  /* 10f9f0d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f0d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10f9f0d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9f0d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10f9f0de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f9f0e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f0e8 jge 0x10f9f0f6 */
  if ((C.sf==C.of)) goto L_10f9f0f6;
  /* 10f9f0ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10f9f0f4 jmp 0x10f9f112 */
  goto L_10f9f112;
L_10f9f0f6:;
  /* 10f9f0f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f0fd jne 0x10f9f112 */
  if (!C.zf) goto L_10f9f112;
  /* 10f9f0ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9f103 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f106 jne 0x10f9f112 */
  if (!C.zf) goto L_10f9f112;
  /* 10f9f108 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10f9f112:;
  /* 10f9f112 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f115 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f118 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10f9f11b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f11e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f121 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9f123 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9f126 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10f9f12c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10f9f132 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9f135 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f136 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f9f13c push edx */
  push32((uint32_t)(EDX));
  /* 10f9f13d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9f141 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f142 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f145 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f146 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10f9f14c push edx */
  push32((uint32_t)(EDX));
  /* 10f9f14d call dword ptr [0x10fc23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc23a0))), 0x10f9f153u);
  /* 10f9f153 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f159 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f15e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f160 je 0x10f9f178 */
  if (C.zf) goto L_10f9f178;
  /* 10f9f162 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f169 jne 0x10f9f178 */
  if (!C.zf) goto L_10f9f178;
  /* 10f9f16b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f16e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f16f call dword ptr [0x10fc23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc23ac))), 0x10f9f175u);
  /* 10f9f175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f178:;
  /* 10f9f178 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10f9f17c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f17f jne 0x10f9f19a */
  if (!C.zf) goto L_10f9f19a;
  /* 10f9f181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f184 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f18b jne 0x10f9f19a */
  if (!C.zf) goto L_10f9f19a;
  /* 10f9f18d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f190 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f191 call dword ptr [0x10fc23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc23a4))), 0x10f9f197u);
  /* 10f9f197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f19a:;
  /* 10f9f19a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f19d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f9f1a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f1a3 jne 0x10f9f1b7 */
  if (!C.zf) goto L_10f9f1b7;
  /* 10f9f1a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f1a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10f9f1ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9f1ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f1b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f1b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10f9f1b7:;
  /* 10f9f1b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f1ba push eax */
  push32((uint32_t)(EAX));
  /* 10f9f1bb call 0x10f9a940 */
  push32(0x10f9f1c0u); f_10f9a940();
  /* 10f9f1c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f1c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9f1c6 jmp 0x10f9f4d7 */
  goto L_10f9f4d7;
L_10f9f1cb:;
  /* 10f9f1cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f1ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f1d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9f1d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10f9f1de jmp 0x10f9f265 */
  goto L_10f9f265;
L_10f9f1e3:;
  /* 10f9f1e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10f9f1ed jmp 0x10f9f265 */
  goto L_10f9f265;
L_10f9f1ef:;
  /* 10f9f1ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10f9f1f9:;
  /* 10f9f1f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10f9f203 jmp 0x10f9f20f */
  goto L_10f9f20f;
L_10f9f205:;
  /* 10f9f205 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10f9f20f:;
  /* 10f9f20f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10f9f219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f21c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f224 je 0x10f9f243 */
  if (C.zf) goto L_10f9f243;
  /* 10f9f226 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10f9f22d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10f9f233 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f236 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10f9f23c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10f9f243:;
  /* 10f9f243 jmp 0x10f9f265 */
  goto L_10f9f265;
L_10f9f245:;
  /* 10f9f245 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10f9f24f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f252 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f258 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9f25a je 0x10f9f265 */
  if (C.zf) goto L_10f9f265;
  /* 10f9f25c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f25f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f9f262 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9f265:;
  /* 10f9f265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f268 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f26f je 0x10f9f28e */
  if (C.zf) goto L_10f9f28e;
  /* 10f9f271 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f9f274 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f275 call 0x10f9f900 */
  push32(0x10f9f27au); f_10f9f900();
  /* 10f9f27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f27d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f9f283 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f9f289 jmp 0x10f9f31f */
  goto L_10f9f31f;
L_10f9f28e:;
  /* 10f9f28e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f291 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f294 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f296 je 0x10f9f2e0 */
  if (C.zf) goto L_10f9f2e0;
  /* 10f9f298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f29b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f29e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f2a0 je 0x10f9f2c0 */
  if (C.zf) goto L_10f9f2c0;
  /* 10f9f2a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f9f2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f2a6 call 0x10f9f8e0 */
  push32(0x10f9f2abu); f_10f9f8e0();
  /* 10f9f2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f2ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10f9f2b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f9f2b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f9f2b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f9f2be jmp 0x10f9f2de */
  goto L_10f9f2de;
L_10f9f2c0:;
  /* 10f9f2c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f9f2c3 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f2c4 call 0x10f9f8e0 */
  push32(0x10f9f2c9u); f_10f9f8e0();
  /* 10f9f2c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f2cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f2d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f9f2d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f9f2d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10f9f2de:;
  /* 10f9f2de jmp 0x10f9f31f */
  goto L_10f9f31f;
L_10f9f2e0:;
  /* 10f9f2e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f2e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f2e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f2e8 je 0x10f9f305 */
  if (C.zf) goto L_10f9f305;
  /* 10f9f2ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10f9f2ed push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f2ee call 0x10f9f8e0 */
  push32(0x10f9f2f3u); f_10f9f8e0();
  /* 10f9f2f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f2f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f9f2f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f9f2fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10f9f303 jmp 0x10f9f31f */
  goto L_10f9f31f;
L_10f9f305:;
  /* 10f9f305 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10f9f308 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f309 call 0x10f9f8e0 */
  push32(0x10f9f30eu); f_10f9f8e0();
  /* 10f9f30e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f311 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f313 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10f9f319 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10f9f31f:;
  /* 10f9f31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f322 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f325 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f327 je 0x10f9f367 */
  if (C.zf) goto L_10f9f367;
  /* 10f9f329 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f330 jg 0x10f9f367 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f9f367;
  /* 10f9f332 jl 0x10f9f33d */
  if ((C.sf!=C.of)) goto L_10f9f33d;
  /* 10f9f334 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f33b jae 0x10f9f367 */
  if (!C.cf) goto L_10f9f367;
L_10f9f33d:;
  /* 10f9f33d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10f9f343 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9f345 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10f9f34b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f34e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9f350 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f9f356 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10f9f35c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f35f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10f9f362 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9f365 jmp 0x10f9f37f */
  goto L_10f9f37f;
L_10f9f367:;
  /* 10f9f367 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10f9f36d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f9f373 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10f9f379 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10f9f37f:;
  /* 10f9f37f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f382 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f38a jne 0x10f9f3a7 */
  if (!C.zf) goto L_10f9f3a7;
  /* 10f9f38c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f9f392 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f9f398 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f39b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f9f3a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10f9f3a7:;
  /* 10f9f3a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f3ae jge 0x10f9f3bc */
  if ((C.sf==C.of)) goto L_10f9f3bc;
  /* 10f9f3b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10f9f3ba jmp 0x10f9f3c5 */
  goto L_10f9f3c5;
L_10f9f3bc:;
  /* 10f9f3bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f3bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f3c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9f3c5:;
  /* 10f9f3c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f9f3cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f3d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f3d3 jne 0x10f9f3dc */
  if (!C.zf) goto L_10f9f3dc;
  /* 10f9f3d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f9f3dc:;
  /* 10f9f3dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10f9f3df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10f9f3e2:;
  /* 10f9f3e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f9f3e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10f9f3ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f3f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10f9f3f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f3f9 jg 0x10f9f40f */
  if ((!C.zf&&C.sf==C.of)) goto L_10f9f40f;
  /* 10f9f3fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f9f401 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f407 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9f409 je 0x10f9f490 */
  if (C.zf) goto L_10f9f490;
L_10f9f40f:;
  /* 10f9f40f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10f9f415 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f9f416 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f417 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f418 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f9f41e push edx */
  push32((uint32_t)(EDX));
  /* 10f9f41f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f9f425 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f426 call 0x10f9e7a0 */
  push32(0x10f9f42bu); f_10f9e7a0();
  /* 10f9f42b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f42e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10f9f434 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10f9f43a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10f9f43b push edx */
  push32((uint32_t)(EDX));
  /* 10f9f43c push eax */
  push32((uint32_t)(EAX));
  /* 10f9f43d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10f9f443 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f444 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10f9f44a push edx */
  push32((uint32_t)(EDX));
  /* 10f9f44b call 0x10f9e730 */
  push32(0x10f9f450u); f_10f9e730();
  /* 10f9f450 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10f9f456 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10f9f45c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f463 jle 0x10f9f477 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9f477;
  /* 10f9f465 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10f9f46b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f471 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10f9f477:;
  /* 10f9f477 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f47a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10f9f480 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10f9f482 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f485 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f488 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9f48b jmp 0x10f9f3e2 */
  goto L_10f9f3e2;
L_10f9f490:;
  /* 10f9f490 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10f9f493 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f496 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f9f499 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f49c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f49f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10f9f4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f4a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f4ac je 0x10f9f4d7 */
  if (C.zf) goto L_10f9f4d7;
  /* 10f9f4ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f4b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9f4b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f4b7 jne 0x10f9f4bf */
  if (!C.zf) goto L_10f9f4bf;
  /* 10f9f4b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f4bd jne 0x10f9f4d7 */
  if (!C.zf) goto L_10f9f4d7;
L_10f9f4bf:;
  /* 10f9f4bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f4c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f4c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9f4c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f4cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10f9f4ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9f4d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f4d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10f9f4d7:;
  /* 10f9f4d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f4de jne 0x10f9f6b2 */
  if (!C.zf) goto L_10f9f6b2;
  /* 10f9f4e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f4e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f4ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f4ec je 0x10f9f53d */
  if (C.zf) goto L_10f9f53d;
  /* 10f9f4ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f4f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f4f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9f4f9 je 0x10f9f50b */
  if (C.zf) goto L_10f9f50b;
  /* 10f9f4fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10f9f502 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f9f509 jmp 0x10f9f53d */
  goto L_10f9f53d;
L_10f9f50b:;
  /* 10f9f50b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f50e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f513 je 0x10f9f525 */
  if (C.zf) goto L_10f9f525;
  /* 10f9f515 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10f9f51c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f9f523 jmp 0x10f9f53d */
  goto L_10f9f53d;
L_10f9f525:;
  /* 10f9f525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f528 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9f52b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f52d je 0x10f9f53d */
  if (C.zf) goto L_10f9f53d;
  /* 10f9f52f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10f9f536 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10f9f53d:;
  /* 10f9f53d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10f9f543 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f546 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f549 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10f9f54f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f552 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f557 jne 0x10f9f575 */
  if (!C.zf) goto L_10f9f575;
  /* 10f9f559 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f55f push eax */
  push32((uint32_t)(EAX));
  /* 10f9f560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f563 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f564 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f9f56a push edx */
  push32((uint32_t)(EDX));
  /* 10f9f56b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f9f56d call 0x10f9f850 */
  push32(0x10f9f572u); f_10f9f850();
  /* 10f9f572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f575:;
  /* 10f9f575 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f57b push eax */
  push32((uint32_t)(EAX));
  /* 10f9f57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f57f push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f580 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9f583 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f584 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10f9f58a push eax */
  push32((uint32_t)(EAX));
  /* 10f9f58b call 0x10f9f890 */
  push32(0x10f9f590u); f_10f9f890();
  /* 10f9f590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f596 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9f59b je 0x10f9f5c3 */
  if (C.zf) goto L_10f9f5c3;
  /* 10f9f59d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f5a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f5a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f5a5 jne 0x10f9f5c3 */
  if (!C.zf) goto L_10f9f5c3;
  /* 10f9f5a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f5ad push eax */
  push32((uint32_t)(EAX));
  /* 10f9f5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f5b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f9f5b8 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f5b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f9f5bb call 0x10f9f850 */
  push32(0x10f9f5c0u); f_10f9f850();
  /* 10f9f5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f5c3:;
  /* 10f9f5c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f5c7 je 0x10f9f671 */
  if (C.zf) goto L_10f9f671;
  /* 10f9f5cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f5d1 jle 0x10f9f671 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9f671;
  /* 10f9f5d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f5da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10f9f5e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9f5e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10f9f5e9:;
  /* 10f9f5e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10f9f5ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10f9f5f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f5f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10f9f5fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f600 je 0x10f9f66f */
  if (C.zf) goto L_10f9f66f;
  /* 10f9f602 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10f9f608 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f9f60b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10f9f612 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10f9f619 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f61a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10f9f620 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f621 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10f9f627 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f62a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10f9f630 call 0x10fa0a00 */
  push32(0x10f9f635u); f_10fa0a00();
  /* 10f9f635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f638 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10f9f63e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f645 jg 0x10f9f649 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f9f649;
  /* 10f9f647 jmp 0x10f9f66f */
  goto L_10f9f66f;
L_10f9f649:;
  /* 10f9f649 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f64f push eax */
  push32((uint32_t)(EAX));
  /* 10f9f650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f653 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f654 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10f9f65a push edx */
  push32((uint32_t)(EDX));
  /* 10f9f65b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10f9f661 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f662 call 0x10f9f890 */
  push32(0x10f9f667u); f_10f9f890();
  /* 10f9f667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f66a jmp 0x10f9f5e9 */
  goto L_10f9f5e9;
L_10f9f66f:;
  /* 10f9f66f jmp 0x10f9f68c */
  goto L_10f9f68c;
L_10f9f671:;
  /* 10f9f671 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f677 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f67b push edx */
  push32((uint32_t)(EDX));
  /* 10f9f67c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9f67f push eax */
  push32((uint32_t)(EAX));
  /* 10f9f680 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9f683 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f684 call 0x10f9f890 */
  push32(0x10f9f689u); f_10f9f890();
  /* 10f9f689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f68c:;
  /* 10f9f68c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f68f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9f692 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9f694 je 0x10f9f6b2 */
  if (C.zf) goto L_10f9f6b2;
  /* 10f9f696 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10f9f69c push eax */
  push32((uint32_t)(EAX));
  /* 10f9f69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f6a1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10f9f6a7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f6a8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f9f6aa call 0x10f9f850 */
  push32(0x10f9f6afu); f_10f9f850();
  /* 10f9f6af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9f6b2:;
  /* 10f9f6b2 jmp 0x10f9eac4 */
  goto L_10f9eac4;
L_10f9f6b7:;
  /* 10f9f6b7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10f9f6bd pop edi */
  EDI = (pop32());
  /* 10f9f6be pop esi */
  ESI = (pop32());
  /* 10f9f6bf pop ebx */
  EBX = (pop32());
  /* 10f9f6c0 mov esp, ebp */
  ESP = (EBP);
  /* 10f9f6c2 pop ebp */
  EBP = (pop32());
  /* 10f9f6c3 ret  */
  ESPCHK(0x10f9eaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x10f9f7d0 (119 bytes, 44 insns) */
void f_10f9f7d0(void) {
  FTRACE(0x10f9f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f7d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f7d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9f7da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f7dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f7e0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10f9f7e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f7e6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f7ea jl 0x10f9f812 */
  if ((C.sf!=C.of)) goto L_10f9f812;
  /* 10f9f7ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f7ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9f7f1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10f9f7f4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10f9f7f6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10f9f7fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9f800 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9f803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f806 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9f808 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f80b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f80e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9f810 jmp 0x10f9f825 */
  goto L_10f9f825;
L_10f9f812:;
  /* 10f9f812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f815 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f819 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f81a call 0x10f9e820 */
  push32(0x10f9f81fu); f_10f9e820();
  /* 10f9f81f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f822 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9f825:;
  /* 10f9f825 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f829 jne 0x10f9f836 */
  if (!C.zf) goto L_10f9f836;
  /* 10f9f82b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f82e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f9f834 jmp 0x10f9f843 */
  goto L_10f9f843;
L_10f9f836:;
  /* 10f9f836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9f83b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f83e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f841 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f9f843:;
  /* 10f9f843 mov esp, ebp */
  ESP = (EBP);
  /* 10f9f845 pop ebp */
  EBP = (pop32());
  /* 10f9f846 ret  */
  ESPCHK(0x10f9f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x10f9f850 (53 bytes, 23 insns) */
void f_10f9f850(void) {
  FTRACE(0x10f9f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f850 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f851 mov ebp, esp */
  EBP = (ESP);
L_10f9f853:;
  /* 10f9f853 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f856 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f859 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f85c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f9f85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f861 jle 0x10f9f883 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9f883;
  /* 10f9f863 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9f866 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f867 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f86a push eax */
  push32((uint32_t)(EAX));
  /* 10f9f86b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f86e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f86f call 0x10f9f7d0 */
  push32(0x10f9f874u); f_10f9f7d0();
  /* 10f9f874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f877 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9f87a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f87d jne 0x10f9f881 */
  if (!C.zf) goto L_10f9f881;
  /* 10f9f87f jmp 0x10f9f883 */
  goto L_10f9f883;
L_10f9f881:;
  /* 10f9f881 jmp 0x10f9f853 */
  goto L_10f9f853;
L_10f9f883:;
  /* 10f9f883 pop ebp */
  EBP = (pop32());
  /* 10f9f884 ret  */
  ESPCHK(0x10f9f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x10f9f890 (74 bytes, 31 insns) */
void f_10f9f890(void) {
  FTRACE(0x10f9f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f890 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f891 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f893 push ecx */
  push32((uint32_t)(ECX));
L_10f9f894:;
  /* 10f9f894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f897 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9f89a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f89d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f9f8a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9f8a2 jle 0x10f9f8d6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f9f8d6;
  /* 10f9f8a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9f8a7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9f8a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9f8ab push eax */
  push32((uint32_t)(EAX));
  /* 10f9f8ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f8af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9f8b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9f8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f8b8 push eax */
  push32((uint32_t)(EAX));
  /* 10f9f8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f8bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f8bf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10f9f8c2 call 0x10f9f7d0 */
  push32(0x10f9f8c7u); f_10f9f7d0();
  /* 10f9f8c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f8ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9f8cd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f8d0 jne 0x10f9f8d4 */
  if (!C.zf) goto L_10f9f8d4;
  /* 10f9f8d2 jmp 0x10f9f8d6 */
  goto L_10f9f8d6;
L_10f9f8d4:;
  /* 10f9f8d4 jmp 0x10f9f894 */
  goto L_10f9f894;
L_10f9f8d6:;
  /* 10f9f8d6 mov esp, ebp */
  ESP = (EBP);
  /* 10f9f8d8 pop ebp */
  EBP = (pop32());
  /* 10f9f8d9 ret  */
  ESPCHK(0x10f9f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x10f9f8e0 (26 bytes, 12 insns) */
void f_10f9f8e0(void) {
  FTRACE(0x10f9f8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f8e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f8e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f8e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9f8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f8f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f8f5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f9f8f8 pop ebp */
  EBP = (pop32());
  /* 10f9f8f9 ret  */
  ESPCHK(0x10f9f8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x10f9f900 (31 bytes, 14 insns) */
void f_10f9f900(void) {
  FTRACE(0x10f9f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f900 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f901 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f906 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f908 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f90b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f90e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9f910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f913 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f915 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9f918 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f9f91a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9f91d pop ebp */
  EBP = (pop32());
  /* 10f9f91e ret  */
  ESPCHK(0x10f9f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f920 @ 0x10f9f920 (27 bytes, 12 insns) */
void f_10f9f920(void) {
  FTRACE(0x10f9f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f920 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f921 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f928 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f92e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9f930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f933 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9f935 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10f9f939 pop ebp */
  EBP = (pop32());
  /* 10f9f93a ret  */
  ESPCHK(0x10f9f920u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10f9f940 (145 bytes, 42 insns) */
void f_10f9f940(void) {
  FTRACE(0x10f9f940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f940 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f941 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f943 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9f944 call 0x10f9f9f0 */
  push32(0x10f9f949u); f_10f9f9f0();
  /* 10f9f949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f94c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f9f94e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9f955 jmp 0x10f9f960 */
  goto L_10f9f960;
L_10f9f957:;
  /* 10f9f957 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f95a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f95d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9f960:;
  /* 10f9f960 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f964 jae 0x10f9f98a */
  if (!C.cf) goto L_10f9f98a;
  /* 10f9f966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9f96c cmp ecx, dword ptr [eax*8 + 0x10fc1fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10fc1fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f973 jne 0x10f9f988 */
  if (!C.zf) goto L_10f9f988;
  /* 10f9f975 call 0x10f9f9e0 */
  push32(0x10f9f97au); f_10f9f9e0();
  /* 10f9f97a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9f97d mov ecx, dword ptr [edx*8 + 0x10fc1fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10fc1fbc)));
  /* 10f9f984 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f9f986 jmp 0x10f9f9cd */
  goto L_10f9f9cd;
L_10f9f988:;
  /* 10f9f988 jmp 0x10f9f957 */
  goto L_10f9f957;
L_10f9f98a:;
  /* 10f9f98a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f98e jb 0x10f9f9a3 */
  if (C.cf) goto L_10f9f9a3;
  /* 10f9f990 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f994 ja 0x10f9f9a3 */
  if ((!C.cf&&!C.zf)) goto L_10f9f9a3;
  /* 10f9f996 call 0x10f9f9e0 */
  push32(0x10f9f99bu); f_10f9f9e0();
  /* 10f9f99b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10f9f9a1 jmp 0x10f9f9cd */
  goto L_10f9f9cd;
L_10f9f9a3:;
  /* 10f9f9a3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f9aa jb 0x10f9f9c2 */
  if (C.cf) goto L_10f9f9c2;
  /* 10f9f9ac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9f9b3 ja 0x10f9f9c2 */
  if ((!C.cf&&!C.zf)) goto L_10f9f9c2;
  /* 10f9f9b5 call 0x10f9f9e0 */
  push32(0x10f9f9bau); f_10f9f9e0();
  /* 10f9f9ba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10f9f9c0 jmp 0x10f9f9cd */
  goto L_10f9f9cd;
L_10f9f9c2:;
  /* 10f9f9c2 call 0x10f9f9e0 */
  push32(0x10f9f9c7u); f_10f9f9e0();
  /* 10f9f9c7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10f9f9cd:;
  /* 10f9f9cd mov esp, ebp */
  ESP = (EBP);
  /* 10f9f9cf pop ebp */
  EBP = (pop32());
  /* 10f9f9d0 ret  */
  ESPCHK(0x10f9f940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x10f9f9e0 (13 bytes, 6 insns) */
void f_10f9f9e0(void) {
  FTRACE(0x10f9f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f9e3 call 0x10f97550 */
  push32(0x10f9f9e8u); f_10f97550();
  /* 10f9f9e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f9eb pop ebp */
  EBP = (pop32());
  /* 10f9f9ec ret  */
  ESPCHK(0x10f9f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x10f9f9f0 (13 bytes, 6 insns) */
void f_10f9f9f0(void) {
  FTRACE(0x10f9f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9f9f3 call 0x10f97550 */
  push32(0x10f9f9f8u); f_10f97550();
  /* 10f9f9f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9f9fb pop ebp */
  EBP = (pop32());
  /* 10f9f9fc ret  */
  ESPCHK(0x10f9f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa00 @ 0x10f9fa00 (664 bytes, 260 insns) [15 switch table(s)] */
void f_10f9fa00(void) {
  FTRACE(0x10f9fa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9fa00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9fa01 mov ebp, esp */
  EBP = (ESP);
  /* 10f9fa03 push edi */
  push32((uint32_t)(EDI));
  /* 10f9fa04 push esi */
  push32((uint32_t)(ESI));
  /* 10f9fa05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9fa08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9fa0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fa0e mov eax, ecx */
  EAX = (ECX);
  /* 10f9fa10 mov edx, ecx */
  EDX = (ECX);
  /* 10f9fa12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fa14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fa16 jbe 0x10f9fa20 */
  if ((C.cf||C.zf)) goto L_10f9fa20;
  /* 10f9fa18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fa1a jb 0x10f9fb98 */
  if (C.cf) goto L_10f9fb98;
L_10f9fa20:;
  /* 10f9fa20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9fa26 jne 0x10f9fa3c */
  if (!C.zf) goto L_10f9fa3c;
  /* 10f9fa28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fa2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fa2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fa31 jb 0x10f9fa5c */
  if (C.cf) goto L_10f9fa5c;
  /* 10f9fa33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fa35 jmp dword ptr [edx*4 + 0x10f9fb48] */
  switch (EDX) {
    case 0: goto L_10f9fb58;
    case 1: goto L_10f9fb60;
    case 2: goto L_10f9fb6c;
    case 3: goto L_10f9fb80;
    default: x86_unimpl("switch@0x10f9fa35 out of table"); return;
  }
L_10f9fa3c:;
  /* 10f9fa3c mov eax, edi */
  EAX = (EDI);
  /* 10f9fa3e mov edx, 3 */
  EDX = (0x3u);
  /* 10f9fa43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fa46 jb 0x10f9fa54 */
  if (C.cf) goto L_10f9fa54;
  /* 10f9fa48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fa4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fa4d jmp dword ptr [eax*4 + 0x10f9fa60] */
  switch (EAX) {
    case 1: goto L_10f9fa70;
    case 2: goto L_10f9fa9c;
    case 3: goto L_10f9fac0;
    default: x86_unimpl("switch@0x10f9fa4d out of table"); return;
  }
L_10f9fa54:;
  /* 10f9fa54 jmp dword ptr [ecx*4 + 0x10f9fb58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10f9fb58)))); return;
  /* 10f9fa5b nop  */
  /* nop */
L_10f9fa5c:;
  /* 10f9fa5c jmp dword ptr [ecx*4 + 0x10f9fadc] */
  switch (ECX) {
    case 0: goto L_10f9fb3f;
    case 1: goto L_10f9fb2c;
    case 2: goto L_10f9fb24;
    case 3: goto L_10f9fb1c;
    case 4: goto L_10f9fb14;
    case 5: goto L_10f9fb0c;
    case 6: goto L_10f9fb04;
    case 7: goto L_10f9fafc;
    default: x86_unimpl("switch@0x10f9fa5c out of table"); return;
  }
  /* 10f9fa63 nop  */
  /* nop */
L_10f9fa70:;
  /* 10f9fa70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fa72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9fa74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9fa76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9fa79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9fa7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fa7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fa82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fa85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fa88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fa8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fa8e jb 0x10f9fa5c */
  if (C.cf) goto L_10f9fa5c;
  /* 10f9fa90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fa92 jmp dword ptr [edx*4 + 0x10f9fb48] */
  switch (EDX) {
    case 0: goto L_10f9fb58;
    case 1: goto L_10f9fb60;
    case 2: goto L_10f9fb6c;
    case 3: goto L_10f9fb80;
    default: x86_unimpl("switch@0x10f9fa92 out of table"); return;
  }
  /* 10f9fa99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fa9c:;
  /* 10f9fa9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fa9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9faa0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9faa2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9faa5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9faa8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9faab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9faae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fab1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fab4 jb 0x10f9fa5c */
  if (C.cf) goto L_10f9fa5c;
  /* 10f9fab6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fab8 jmp dword ptr [edx*4 + 0x10f9fb48] */
  switch (EDX) {
    case 0: goto L_10f9fb58;
    case 1: goto L_10f9fb60;
    case 2: goto L_10f9fb6c;
    case 3: goto L_10f9fb80;
    default: x86_unimpl("switch@0x10f9fab8 out of table"); return;
  }
  /* 10f9fabf nop  */
  /* nop */
L_10f9fac0:;
  /* 10f9fac0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fac2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9fac4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9fac6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f9fac7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9faca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9facb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9face jb 0x10f9fa5c */
  if (C.cf) goto L_10f9fa5c;
  /* 10f9fad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fad2 jmp dword ptr [edx*4 + 0x10f9fb48] */
  switch (EDX) {
    case 0: goto L_10f9fb58;
    case 1: goto L_10f9fb60;
    case 2: goto L_10f9fb6c;
    case 3: goto L_10f9fb80;
    default: x86_unimpl("switch@0x10f9fad2 out of table"); return;
  }
  /* 10f9fad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fafc:;
  /* 10f9fafc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10f9fb00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10f9fb04:;
  /* 10f9fb04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10f9fb08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10f9fb0c:;
  /* 10f9fb0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10f9fb10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10f9fb14:;
  /* 10f9fb14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10f9fb18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10f9fb1c:;
  /* 10f9fb1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10f9fb20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10f9fb24:;
  /* 10f9fb24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10f9fb28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10f9fb2c:;
  /* 10f9fb2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10f9fb30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10f9fb34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f9fb3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fb3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f9fb3f:;
  /* 10f9fb3f jmp dword ptr [edx*4 + 0x10f9fb48] */
  switch (EDX) {
    case 0: goto L_10f9fb58;
    case 1: goto L_10f9fb60;
    case 2: goto L_10f9fb6c;
    case 3: goto L_10f9fb80;
    default: x86_unimpl("switch@0x10f9fb3f out of table"); return;
  }
  /* 10f9fb46 mov edi, edi */
  EDI = (EDI);
L_10f9fb58:;
  /* 10f9fb58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fb5b pop esi */
  ESI = (pop32());
  /* 10f9fb5c pop edi */
  EDI = (pop32());
  /* 10f9fb5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fb5e ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fb5f nop  */
  /* nop */
L_10f9fb60:;
  /* 10f9fb60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9fb62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9fb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fb67 pop esi */
  ESI = (pop32());
  /* 10f9fb68 pop edi */
  EDI = (pop32());
  /* 10f9fb69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fb6a ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fb6b nop  */
  /* nop */
L_10f9fb6c:;
  /* 10f9fb6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9fb6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9fb70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9fb73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9fb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fb79 pop esi */
  ESI = (pop32());
  /* 10f9fb7a pop edi */
  EDI = (pop32());
  /* 10f9fb7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fb7c ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fb7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fb80:;
  /* 10f9fb80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9fb82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9fb84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9fb87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9fb8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fb8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fb90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fb93 pop esi */
  ESI = (pop32());
  /* 10f9fb94 pop edi */
  EDI = (pop32());
  /* 10f9fb95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fb96 ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fb97 nop  */
  /* nop */
L_10f9fb98:;
  /* 10f9fb98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10f9fb9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10f9fba0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9fba6 jne 0x10f9fbcc */
  if (!C.zf) goto L_10f9fbcc;
  /* 10f9fba8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fbab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fbae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fbb1 jb 0x10f9fbc0 */
  if (C.cf) goto L_10f9fbc0;
  /* 10f9fbb3 std  */
  C.df=1;
  /* 10f9fbb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fbb6 cld  */
  C.df=0;
  /* 10f9fbb7 jmp dword ptr [edx*4 + 0x10f9fce0] */
  switch (EDX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fbb7 out of table"); return;
  }
  /* 10f9fbbe mov edi, edi */
  EDI = (EDI);
L_10f9fbc0:;
  /* 10f9fbc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9fbc2 jmp dword ptr [ecx*4 + 0x10f9fc90] */
  switch (ECX) {
    case 0: goto L_10f9fcd7;
    default: x86_unimpl("switch@0x10f9fbc2 out of table"); return;
  }
  /* 10f9fbc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fbcc:;
  /* 10f9fbcc mov eax, edi */
  EAX = (EDI);
  /* 10f9fbce mov edx, 3 */
  EDX = (0x3u);
  /* 10f9fbd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fbd6 jb 0x10f9fbe4 */
  if (C.cf) goto L_10f9fbe4;
  /* 10f9fbd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fbdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fbdd jmp dword ptr [eax*4 + 0x10f9fbe8] */
  switch (EAX) {
    case 1: goto L_10f9fbf8;
    case 2: goto L_10f9fc18;
    case 3: goto L_10f9fc40;
    default: x86_unimpl("switch@0x10f9fbdd out of table"); return;
  }
L_10f9fbe4:;
  /* 10f9fbe4 jmp dword ptr [ecx*4 + 0x10f9fce0] */
  switch (ECX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fbe4 out of table"); return;
  }
  /* 10f9fbeb nop  */
  /* nop */
L_10f9fbf8:;
  /* 10f9fbf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fbfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fbfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fc00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10f9fc01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fc04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10f9fc05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fc08 jb 0x10f9fbc0 */
  if (C.cf) goto L_10f9fbc0;
  /* 10f9fc0a std  */
  C.df=1;
  /* 10f9fc0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fc0d cld  */
  C.df=0;
  /* 10f9fc0e jmp dword ptr [edx*4 + 0x10f9fce0] */
  switch (EDX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fc0e out of table"); return;
  }
  /* 10f9fc15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fc18:;
  /* 10f9fc18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fc1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fc1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fc20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fc23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fc26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fc29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fc2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fc2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fc32 jb 0x10f9fbc0 */
  if (C.cf) goto L_10f9fbc0;
  /* 10f9fc34 std  */
  C.df=1;
  /* 10f9fc35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fc37 cld  */
  C.df=0;
  /* 10f9fc38 jmp dword ptr [edx*4 + 0x10f9fce0] */
  switch (EDX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fc38 out of table"); return;
  }
  /* 10f9fc3f nop  */
  /* nop */
L_10f9fc40:;
  /* 10f9fc40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fc43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fc45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fc48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fc4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fc4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9fc51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9fc54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9fc57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fc5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fc5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fc60 jb 0x10f9fbc0 */
  if (C.cf) goto L_10f9fbc0;
  /* 10f9fc66 std  */
  C.df=1;
  /* 10f9fc67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10f9fc69 cld  */
  C.df=0;
  /* 10f9fc6a jmp dword ptr [edx*4 + 0x10f9fce0] */
  switch (EDX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fc6a out of table"); return;
  }
  /* 10f9fc71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10f9fc74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10f9fc75 cld  */
  C.df=0;
  /* 10f9fc76 stc  */
  x86_unimpl("stc @ 0x10f9fc76");
  /* 10f9fc77 adc byte ptr [esp + edi*8 - 0x35bef07], bl */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*8 + -0x35bef07))),_b=(BL),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*8 + -0x35bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9fc7e stc  */
  x86_unimpl("stc @ 0x10f9fc7e");
  /* 10f9fc7f adc byte ptr [esp + edi*8 - 0x34bef07], ch */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*8 + -0x34bef07))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*8 + -0x34bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9fc86 stc  */
  x86_unimpl("stc @ 0x10f9fc86");
  /* 10f9fc87 adc byte ptr [esp + edi*8 - 0x33bef07], bh */
  { uint32_t _a=(r8((uint32_t)(ESP + EDI*8 + -0x33bef07))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(ESP + EDI*8 + -0x33bef07), (_r)); fl_add(_a,_b,_r,8); }
  /* 10f9fc8e stc  */
  x86_unimpl("stc @ 0x10f9fc8e");
  /* 10f9fc94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10f9fc98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10f9fc9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10f9fca0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10f9fca4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10f9fca8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10f9fcac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10f9fcb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10f9fcb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10f9fcb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10f9fcbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10f9fcc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10f9fcc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10f9fcc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10f9fccc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10f9fcd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fcd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f9fcd7:;
  /* 10f9fcd7 jmp dword ptr [edx*4 + 0x10f9fce0] */
  switch (EDX) {
    case 0: goto L_10f9fcf0;
    case 1: goto L_10f9fcf8;
    case 2: goto L_10f9fd08;
    case 3: goto L_10f9fd1c;
    default: x86_unimpl("switch@0x10f9fcd7 out of table"); return;
  }
  /* 10f9fcde mov edi, edi */
  EDI = (EDI);
L_10f9fcf0:;
  /* 10f9fcf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fcf3 pop esi */
  ESI = (pop32());
  /* 10f9fcf4 pop edi */
  EDI = (pop32());
  /* 10f9fcf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fcf6 ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fcf7 nop  */
  /* nop */
L_10f9fcf8:;
  /* 10f9fcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fcfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fcfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fd01 pop esi */
  ESI = (pop32());
  /* 10f9fd02 pop edi */
  EDI = (pop32());
  /* 10f9fd03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fd04 ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fd05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10f9fd08:;
  /* 10f9fd08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fd0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fd0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fd11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fd14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fd17 pop esi */
  ESI = (pop32());
  /* 10f9fd18 pop edi */
  EDI = (pop32());
  /* 10f9fd19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fd1a ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
  /* 10f9fd1b nop  */
  /* nop */
L_10f9fd1c:;
  /* 10f9fd1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10f9fd1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10f9fd22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10f9fd25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10f9fd28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10f9fd2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10f9fd2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fd31 pop esi */
  ESI = (pop32());
  /* 10f9fd32 pop edi */
  EDI = (pop32());
  /* 10f9fd33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10f9fd34 ret  */
  ESPCHK(0x10f9fa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x10f9fd40 (421 bytes, 148 insns) */
void f_10f9fd40(void) {
  FTRACE(0x10f9fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9fd41 mov ebp, esp */
  EBP = (ESP);
  /* 10f9fd43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f9fd45 push 0x10fbf090 */
  push32((uint32_t)(0x10fbf090u));
  /* 10f9fd4a push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10f9fd4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f9fd55 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fd56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f9fd5d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fd60 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9fd61 push esi */
  push32((uint32_t)(ESI));
  /* 10f9fd62 push edi */
  push32((uint32_t)(EDI));
  /* 10f9fd63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f9fd66 cmp dword ptr [0x10fc38f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc38f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fd6d jne 0x10f9fdbe */
  if (!C.zf) goto L_10f9fdbe;
  /* 10f9fd6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10f9fd72 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fd73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9fd75 push 0x10fbf08c */
  push32((uint32_t)(0x10fbf08cu));
  /* 10f9fd7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9fd7c call dword ptr [0x10fc62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d8))), 0x10f9fd82u);
  /* 10f9fd82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9fd84 je 0x10f9fd92 */
  if (C.zf) goto L_10f9fd92;
  /* 10f9fd86 mov dword ptr [0x10fc38f4], 1 */
  w32((uint32_t)(0x10fc38f4), (0x1u));
  /* 10f9fd90 jmp 0x10f9fdbe */
  goto L_10f9fdbe;
L_10f9fd92:;
  /* 10f9fd92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10f9fd95 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fd96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9fd98 push 0x10fbf088 */
  push32((uint32_t)(0x10fbf088u));
  /* 10f9fd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9fd9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9fda1 call dword ptr [0x10fc62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e8))), 0x10f9fda7u);
  /* 10f9fda7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9fda9 je 0x10f9fdb7 */
  if (C.zf) goto L_10f9fdb7;
  /* 10f9fdab mov dword ptr [0x10fc38f4], 2 */
  w32((uint32_t)(0x10fc38f4), (0x2u));
  /* 10f9fdb5 jmp 0x10f9fdbe */
  goto L_10f9fdbe;
L_10f9fdb7:;
  /* 10f9fdb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fdb9 jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fdbe:;
  /* 10f9fdbe cmp dword ptr [0x10fc38f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc38f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fdc5 jne 0x10f9fdf5 */
  if (!C.zf) goto L_10f9fdf5;
  /* 10f9fdc7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fdcb jne 0x10f9fdd6 */
  if (!C.zf) goto L_10f9fdd6;
  /* 10f9fdcd mov edx, dword ptr [0x10fc3900] */
  EDX = (r32((uint32_t)(0x10fc3900)));
  /* 10f9fdd3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10f9fdd6:;
  /* 10f9fdd6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9fdd9 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fdda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9fddd push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fdde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9fde1 push edx */
  push32((uint32_t)(EDX));
  /* 10f9fde2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fde5 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fde6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f9fde9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fdea call dword ptr [0x10fc62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e8))), 0x10f9fdf0u);
  /* 10f9fdf0 jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fdf5:;
  /* 10f9fdf5 cmp dword ptr [0x10fc38f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc38f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fdfc jne 0x10f9fee6 */
  if (!C.zf) goto L_10f9fee6;
  /* 10f9fe02 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fe06 jne 0x10f9fe11 */
  if (!C.zf) goto L_10f9fe11;
  /* 10f9fe08 mov edx, dword ptr [0x10fc3910] */
  EDX = (r32((uint32_t)(0x10fc3910)));
  /* 10f9fe0e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10f9fe11:;
  /* 10f9fe11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9fe13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9fe15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9fe18 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fe19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9fe1c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fe1d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10f9fe20 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9fe22 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fe24 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fe27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fe2a push edx */
  push32((uint32_t)(EDX));
  /* 10f9fe2b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9fe2e push eax */
  push32((uint32_t)(EAX));
  /* 10f9fe2f call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10f9fe35u);
  /* 10f9fe35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9fe38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fe3c jne 0x10f9fe45 */
  if (!C.zf) goto L_10f9fe45;
  /* 10f9fe3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fe40 jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fe45:;
  /* 10f9fe45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9fe4c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9fe4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f9fe51 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fe54 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10f9fe56 call 0x10f9acb0 */
  push32(0x10f9fe5bu); f_10f9acb0();
  /* 10f9fe5b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10f9fe5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f9fe61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9fe64 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10f9fe67 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9fe6a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10f9fe6c push edx */
  push32((uint32_t)(EDX));
  /* 10f9fe6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9fe6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9fe72 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fe73 call 0x10f9b880 */
  push32(0x10f9fe78u); f_10f9b880();
  /* 10f9fe78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9fe7b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10f9fe82 jmp 0x10f9fe9b */
  goto L_10f9fe9b;
  /* 10f9fe84 mov eax, 1 */
  EAX = (0x1u);
  /* 10f9fe89 ret  */
  ESPCHK(0x10f9fd40u, _esp0);
  ESP += 4; return;
  /* 10f9fe8a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9fe8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10f9fe94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10f9fe9b:;
  /* 10f9fe9b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fe9f jne 0x10f9fea5 */
  if (!C.zf) goto L_10f9fea5;
  /* 10f9fea1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fea3 jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fea5:;
  /* 10f9fea5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9fea8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fea9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9feac push edx */
  push32((uint32_t)(EDX));
  /* 10f9fead mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9feb0 push eax */
  push32((uint32_t)(EAX));
  /* 10f9feb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9feb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9feb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9feb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9feba push edx */
  push32((uint32_t)(EDX));
  /* 10f9febb call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10f9fec1u);
  /* 10f9fec1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9fec4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9fec8 jne 0x10f9fece */
  if (!C.zf) goto L_10f9fece;
  /* 10f9feca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9fecc jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fece:;
  /* 10f9fece mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9fed1 push eax */
  push32((uint32_t)(EAX));
  /* 10f9fed2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fed6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9fed9 push edx */
  push32((uint32_t)(EDX));
  /* 10f9feda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9fedd push eax */
  push32((uint32_t)(EAX));
  /* 10f9fede call dword ptr [0x10fc62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d8))), 0x10f9fee4u);
  /* 10f9fee4 jmp 0x10f9fee8 */
  goto L_10f9fee8;
L_10f9fee6:;
  /* 10f9fee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9fee8:;
  /* 10f9fee8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10f9feeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9feee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10f9fef5 pop edi */
  EDI = (pop32());
  /* 10f9fef6 pop esi */
  ESI = (pop32());
  /* 10f9fef7 pop ebx */
  EBX = (pop32());
  /* 10f9fef8 mov esp, ebp */
  ESP = (EBP);
  /* 10f9fefa pop ebp */
  EBP = (pop32());
  /* 10f9fefb ret  */
  ESPCHK(0x10f9fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x10f9ff00 (727 bytes, 263 insns) */
void f_10f9ff00(void) {
  FTRACE(0x10f9ff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9ff00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9ff01 mov ebp, esp */
  EBP = (ESP);
  /* 10f9ff03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f9ff05 push 0x10fbf0a0 */
  push32((uint32_t)(0x10fbf0a0u));
  /* 10f9ff0a push 0x10fa0c18 */
  push32((uint32_t)(0x10fa0c18u));
  /* 10f9ff0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10f9ff15 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ff16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10f9ff1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ff20 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9ff21 push esi */
  push32((uint32_t)(ESI));
  /* 10f9ff22 push edi */
  push32((uint32_t)(EDI));
  /* 10f9ff23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10f9ff26 cmp dword ptr [0x10fc3918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ff2d jne 0x10f9ff86 */
  if (!C.zf) goto L_10f9ff86;
  /* 10f9ff2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ff35 push 0x10fbf08c */
  push32((uint32_t)(0x10fbf08cu));
  /* 10f9ff3a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9ff3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff41 call dword ptr [0x10fc62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62dc))), 0x10f9ff47u);
  /* 10f9ff47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ff49 je 0x10f9ff57 */
  if (C.zf) goto L_10f9ff57;
  /* 10f9ff4b mov dword ptr [0x10fc3918], 1 */
  w32((uint32_t)(0x10fc3918), (0x1u));
  /* 10f9ff55 jmp 0x10f9ff86 */
  goto L_10f9ff86;
L_10f9ff57:;
  /* 10f9ff57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff5b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ff5d push 0x10fbf088 */
  push32((uint32_t)(0x10fbf088u));
  /* 10f9ff62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10f9ff67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ff69 call dword ptr [0x10fc62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d4))), 0x10f9ff6fu);
  /* 10f9ff6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ff71 je 0x10f9ff7f */
  if (C.zf) goto L_10f9ff7f;
  /* 10f9ff73 mov dword ptr [0x10fc3918], 2 */
  w32((uint32_t)(0x10fc3918), (0x2u));
  /* 10f9ff7d jmp 0x10f9ff86 */
  goto L_10f9ff86;
L_10f9ff7f:;
  /* 10f9ff7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ff81 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10f9ff86:;
  /* 10f9ff86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ff8a jle 0x10f9ff9f */
  if ((C.zf||C.sf!=C.of)) goto L_10f9ff9f;
  /* 10f9ff8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9ff8f push eax */
  push32((uint32_t)(EAX));
  /* 10f9ff90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9ff93 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ff94 call 0x10fa0210 */
  push32(0x10f9ff99u); f_10fa0210();
  /* 10f9ff99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ff9c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10f9ff9f:;
  /* 10f9ff9f cmp dword ptr [0x10fc3918], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3918))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ffa6 jne 0x10f9ffcb */
  if (!C.zf) goto L_10f9ffcb;
  /* 10f9ffa8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10f9ffab push edx */
  push32((uint32_t)(EDX));
  /* 10f9ffac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9ffaf push eax */
  push32((uint32_t)(EAX));
  /* 10f9ffb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9ffb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ffb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9ffb7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ffb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ffbb push eax */
  push32((uint32_t)(EAX));
  /* 10f9ffbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ffbf push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ffc0 call dword ptr [0x10fc62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d4))), 0x10f9ffc6u);
  /* 10f9ffc6 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10f9ffcb:;
  /* 10f9ffcb cmp dword ptr [0x10fc3918], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3918))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ffd2 jne 0x10fa01ef */
  if (!C.zf) goto L_10fa01ef;
  /* 10f9ffd8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ffdc jne 0x10f9ffe7 */
  if (!C.zf) goto L_10f9ffe7;
  /* 10f9ffde mov edx, dword ptr [0x10fc3910] */
  EDX = (r32((uint32_t)(0x10fc3910)));
  /* 10f9ffe4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10f9ffe7:;
  /* 10f9ffe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ffe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ffeb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9ffee push eax */
  push32((uint32_t)(EAX));
  /* 10f9ffef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9fff2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9fff3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10f9fff6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9fff8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9fffa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9fffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0000 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0001 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa0004 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0005 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa000bu);
  /* 10fa000b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa000e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0012 jne 0x10fa001b */
  if (!C.zf) goto L_10fa001b;
  /* 10fa0014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0016 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa001b:;
  /* 10fa001b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa0022 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa0025 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa0027 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa002a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa002c call 0x10f9acb0 */
  push32(0x10fa0031u); f_10f9acb0();
  /* 10fa0031 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10fa0034 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa0037 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa003a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fa003d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa0044 jmp 0x10fa005d */
  goto L_10fa005d;
  /* 10fa0046 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa004b ret  */
  ESPCHK(0x10f9ff00u, _esp0);
  ESP += 4; return;
  /* 10fa004c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa004f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10fa0056 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa005d:;
  /* 10fa005d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0061 jne 0x10fa006a */
  if (!C.zf) goto L_10fa006a;
  /* 10fa0063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0065 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa006a:;
  /* 10fa006a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa006d push edx */
  push32((uint32_t)(EDX));
  /* 10fa006e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa0071 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0072 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa0075 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0076 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa0079 push edx */
  push32((uint32_t)(EDX));
  /* 10fa007a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa007c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa007f push eax */
  push32((uint32_t)(EAX));
  /* 10fa0080 call dword ptr [0x10fc62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62e0))), 0x10fa0086u);
  /* 10fa0086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa0088 jne 0x10fa0091 */
  if (!C.zf) goto L_10fa0091;
  /* 10fa008a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa008c jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa0091:;
  /* 10fa0091 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0093 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0095 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa0098 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0099 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa009c push edx */
  push32((uint32_t)(EDX));
  /* 10fa009d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa00a0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa00a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa00a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa00a5 call dword ptr [0x10fc62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62dc))), 0x10fa00abu);
  /* 10fa00ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fa00ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa00b2 jne 0x10fa00bb */
  if (!C.zf) goto L_10fa00bb;
  /* 10fa00b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa00b6 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa00bb:;
  /* 10fa00bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa00be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa00c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa00c6 je 0x10fa010b */
  if (C.zf) goto L_10fa010b;
  /* 10fa00c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa00cc je 0x10fa0106 */
  if (C.zf) goto L_10fa0106;
  /* 10fa00ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa00d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa00d4 jle 0x10fa00dd */
  if ((C.zf||C.sf!=C.of)) goto L_10fa00dd;
  /* 10fa00d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa00d8 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa00dd:;
  /* 10fa00dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa00e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa00e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa00e4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa00e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa00e8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa00e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa00ec push ecx */
  push32((uint32_t)(ECX));
  /* 10fa00ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa00f0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa00f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa00f4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa00f5 call dword ptr [0x10fc62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62dc))), 0x10fa00fbu);
  /* 10fa00fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa00fd jne 0x10fa0106 */
  if (!C.zf) goto L_10fa0106;
  /* 10fa00ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0101 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa0106:;
  /* 10fa0106 jmp 0x10fa01ea */
  goto L_10fa01ea;
L_10fa010b:;
  /* 10fa010b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa010e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10fa0111 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa0118 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa011b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa011d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0120 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10fa0122 call 0x10f9acb0 */
  push32(0x10fa0127u); f_10f9acb0();
  /* 10fa0127 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10fa012a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10fa012d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10fa0130 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10fa0133 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa013a jmp 0x10fa0153 */
  goto L_10fa0153;
  /* 10fa013c mov eax, 1 */
  EAX = (0x1u);
  /* 10fa0141 ret  */
  ESPCHK(0x10f9ff00u, _esp0);
  ESP += 4; return;
  /* 10fa0142 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa0145 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fa014c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa0153:;
  /* 10fa0153 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0157 jne 0x10fa0160 */
  if (!C.zf) goto L_10fa0160;
  /* 10fa0159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa015b jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa0160:;
  /* 10fa0160 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa0163 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0164 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa0167 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0168 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa016b push edx */
  push32((uint32_t)(EDX));
  /* 10fa016c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa016f push eax */
  push32((uint32_t)(EAX));
  /* 10fa0170 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0173 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0177 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0178 call dword ptr [0x10fc62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62dc))), 0x10fa017eu);
  /* 10fa017e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa0180 jne 0x10fa0186 */
  if (!C.zf) goto L_10fa0186;
  /* 10fa0182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0184 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa0186:;
  /* 10fa0186 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa018a jne 0x10fa01ba */
  if (!C.zf) goto L_10fa01ba;
  /* 10fa018c push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa018e push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0190 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0192 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0194 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa0197 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0198 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa019b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa019c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa01a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa01a4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa01a5 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa01abu);
  /* 10fa01ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fa01ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa01b2 jne 0x10fa01b8 */
  if (!C.zf) goto L_10fa01b8;
  /* 10fa01b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa01b6 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa01b8:;
  /* 10fa01b8 jmp 0x10fa01ea */
  goto L_10fa01ea;
L_10fa01ba:;
  /* 10fa01ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa01bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa01be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10fa01c1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa01c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10fa01c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa01c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa01c9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa01ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa01cd push eax */
  push32((uint32_t)(EAX));
  /* 10fa01ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa01d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10fa01d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa01d7 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa01ddu);
  /* 10fa01dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fa01e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa01e4 jne 0x10fa01ea */
  if (!C.zf) goto L_10fa01ea;
  /* 10fa01e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa01e8 jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa01ea:;
  /* 10fa01ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa01ed jmp 0x10fa01f1 */
  goto L_10fa01f1;
L_10fa01ef:;
  /* 10fa01ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa01f1:;
  /* 10fa01f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10fa01f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa01f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10fa01fe pop edi */
  EDI = (pop32());
  /* 10fa01ff pop esi */
  ESI = (pop32());
  /* 10fa0200 pop ebx */
  EBX = (pop32());
  /* 10fa0201 mov esp, ebp */
  ESP = (EBP);
  /* 10fa0203 pop ebp */
  EBP = (pop32());
  /* 10fa0204 ret  */
  ESPCHK(0x10f9ff00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010210 @ 0x10fa0210 (80 bytes, 32 insns) */
void f_10fa0210(void) {
  FTRACE(0x10fa0210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0210 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0211 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0219 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa021c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa021f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa0222:;
  /* 10fa0222 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0228 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa022b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa022e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa0230 je 0x10fa0247 */
  if (C.zf) goto L_10fa0247;
  /* 10fa0232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0235 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa0238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa023a je 0x10fa0247 */
  if (C.zf) goto L_10fa0247;
  /* 10fa023c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa023f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0245 jmp 0x10fa0222 */
  goto L_10fa0222;
L_10fa0247:;
  /* 10fa0247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa024a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa024d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa024f jne 0x10fa0259 */
  if (!C.zf) goto L_10fa0259;
  /* 10fa0251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0254 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0257 jmp 0x10fa025c */
  goto L_10fa025c;
L_10fa0259:;
  /* 10fa0259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10fa025c:;
  /* 10fa025c mov esp, ebp */
  ESP = (EBP);
  /* 10fa025e pop ebp */
  EBP = (pop32());
  /* 10fa025f ret  */
  ESPCHK(0x10fa0210u, _esp0);
  ESP += 4; return;
}

/* FUN_10010260 @ 0x10fa0260 (130 bytes, 43 insns) */
void f_10fa0260(void) {
  FTRACE(0x10fa0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0260 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0261 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0263 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0267 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa026d jae 0x10fa0291 */
  if (!C.cf) goto L_10fa0291;
  /* 10fa026f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0272 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa0275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0278 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa027b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa027e mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa0285 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa028a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa028d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa028f jne 0x10fa02ac */
  if (!C.zf) goto L_10fa02ac;
L_10fa0291:;
  /* 10fa0291 call 0x10f9f9e0 */
  push32(0x10fa0296u); f_10f9f9e0();
  /* 10fa0296 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa029c call 0x10f9f9f0 */
  push32(0x10fa02a1u); f_10f9f9f0();
  /* 10fa02a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa02a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa02aa jmp 0x10fa02de */
  goto L_10fa02de;
L_10fa02ac:;
  /* 10fa02ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa02af push edx */
  push32((uint32_t)(EDX));
  /* 10fa02b0 call 0x10fa1200 */
  push32(0x10fa02b5u); f_10fa1200();
  /* 10fa02b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa02b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa02bb push eax */
  push32((uint32_t)(EAX));
  /* 10fa02bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa02bf push ecx */
  push32((uint32_t)(ECX));
  /* 10fa02c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa02c3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa02c4 call 0x10fa02f0 */
  push32(0x10fa02c9u); f_10fa02f0();
  /* 10fa02c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa02cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa02cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa02d2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa02d3 call 0x10fa1290 */
  push32(0x10fa02d8u); f_10fa1290();
  /* 10fa02d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa02db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa02de:;
  /* 10fa02de mov esp, ebp */
  ESP = (EBP);
  /* 10fa02e0 pop ebp */
  EBP = (pop32());
  /* 10fa02e1 ret  */
  ESPCHK(0x10fa0260u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x10fa02f0 (178 bytes, 56 insns) */
void f_10fa02f0(void) {
  FTRACE(0x10fa02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa02f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa02f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa02f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa02f9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa02fa call 0x10fa1080 */
  push32(0x10fa02ffu); f_10fa1080();
  /* 10fa02ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0302 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa0305 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0309 jne 0x10fa031e */
  if (!C.zf) goto L_10fa031e;
  /* 10fa030b call 0x10f9f9e0 */
  push32(0x10fa0310u); f_10f9f9e0();
  /* 10fa0310 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa0316 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0319 jmp 0x10fa039e */
  goto L_10fa039e;
L_10fa031e:;
  /* 10fa031e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa0321 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0322 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0327 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0328 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa032b push eax */
  push32((uint32_t)(EAX));
  /* 10fa032c call dword ptr [0x10fc62cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62cc))), 0x10fa0332u);
  /* 10fa0332 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa0335 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0339 jne 0x10fa0346 */
  if (!C.zf) goto L_10fa0346;
  /* 10fa033b call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa0341u);
  /* 10fa0341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0344 jmp 0x10fa034d */
  goto L_10fa034d;
L_10fa0346:;
  /* 10fa0346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fa034d:;
  /* 10fa034d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0351 je 0x10fa0364 */
  if (C.zf) goto L_10fa0364;
  /* 10fa0353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0356 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0357 call 0x10f9f940 */
  push32(0x10fa035cu); f_10f9f940();
  /* 10fa035c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa035f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0362 jmp 0x10fa039e */
  goto L_10fa039e;
L_10fa0364:;
  /* 10fa0364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0367 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fa036a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa036d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0370 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0373 mov ecx, dword ptr [edx*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa037a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10fa037e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10fa0381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0384 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa0387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa038a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa038d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0390 mov eax, dword ptr [eax*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa0397 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10fa039b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa039e:;
  /* 10fa039e mov esp, ebp */
  ESP = (EBP);
  /* 10fa03a0 pop ebp */
  EBP = (pop32());
  /* 10fa03a1 ret  */
  ESPCHK(0x10fa02f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x10fa03b0 (130 bytes, 43 insns) */
void f_10fa03b0(void) {
  FTRACE(0x10fa03b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa03b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa03b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa03b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa03b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa03b7 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa03bd jae 0x10fa03e1 */
  if (!C.cf) goto L_10fa03e1;
  /* 10fa03bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa03c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa03c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa03c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa03cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa03ce mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa03d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa03da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa03dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa03df jne 0x10fa03fc */
  if (!C.zf) goto L_10fa03fc;
L_10fa03e1:;
  /* 10fa03e1 call 0x10f9f9e0 */
  push32(0x10fa03e6u); f_10f9f9e0();
  /* 10fa03e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa03ec call 0x10f9f9f0 */
  push32(0x10fa03f1u); f_10f9f9f0();
  /* 10fa03f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa03f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa03fa jmp 0x10fa042e */
  goto L_10fa042e;
L_10fa03fc:;
  /* 10fa03fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa03ff push edx */
  push32((uint32_t)(EDX));
  /* 10fa0400 call 0x10fa1200 */
  push32(0x10fa0405u); f_10fa1200();
  /* 10fa0405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0408 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa040b push eax */
  push32((uint32_t)(EAX));
  /* 10fa040c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa040f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0413 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0414 call 0x10fa0440 */
  push32(0x10fa0419u); f_10fa0440();
  /* 10fa0419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa041c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa041f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0422 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0423 call 0x10fa1290 */
  push32(0x10fa0428u); f_10fa1290();
  /* 10fa0428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa042b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa042e:;
  /* 10fa042e mov esp, ebp */
  ESP = (EBP);
  /* 10fa0430 pop ebp */
  EBP = (pop32());
  /* 10fa0431 ret  */
  ESPCHK(0x10fa03b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x10fa0440 (627 bytes, 182 insns) */
void f_10fa0440(void) {
  FTRACE(0x10fa0440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0441 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0443 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0449 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa0450 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa0453 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10fa0459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa045d jne 0x10fa0466 */
  if (!C.zf) goto L_10fa0466;
  /* 10fa045f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0461 jmp 0x10fa06af */
  goto L_10fa06af;
L_10fa0466:;
  /* 10fa0466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0469 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa046c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa046f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa0472 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0475 mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa047c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa0481 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa0484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa0486 je 0x10fa0498 */
  if (C.zf) goto L_10fa0498;
  /* 10fa0488 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa048a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa048c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa048f push edx */
  push32((uint32_t)(EDX));
  /* 10fa0490 call 0x10fa02f0 */
  push32(0x10fa0495u); f_10fa02f0();
  /* 10fa0495 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa0498:;
  /* 10fa0498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa049b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa049e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa04a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa04a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa04a7 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa04ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fa04b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa04b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa04ba je 0x10fa05cc */
  if (C.zf) goto L_10fa05cc;
  /* 10fa04c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa04c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa04c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10fa04cd:;
  /* 10fa04cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa04d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa04d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa04d6 jae 0x10fa05ca */
  if (!C.cf) goto L_10fa05ca;
  /* 10fa04dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10fa04e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa04e5:;
  /* 10fa04e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa04e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10fa04ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa04f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa04f6 jge 0x10fa0557 */
  if ((C.sf==C.of)) goto L_10fa0557;
  /* 10fa04f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa04fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa04fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0501 jae 0x10fa0557 */
  if (!C.cf) goto L_10fa0557;
  /* 10fa0503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0506 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa0508 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10fa050e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0511 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0517 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10fa051e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0521 jne 0x10fa0541 */
  if (!C.zf) goto L_10fa0541;
  /* 10fa0523 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10fa0529 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa052c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10fa0532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0535 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10fa0538 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa053b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa053e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fa0541:;
  /* 10fa0541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0544 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10fa054a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10fa054c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa054f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa0555 jmp 0x10fa04e5 */
  goto L_10fa04e5;
L_10fa0557:;
  /* 10fa0557 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0559 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10fa055f push edx */
  push32((uint32_t)(EDX));
  /* 10fa0560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0563 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10fa0569 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa056b push eax */
  push32((uint32_t)(EAX));
  /* 10fa056c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10fa0572 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0576 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa0579 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa057c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa057f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0582 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa0589 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10fa058c push eax */
  push32((uint32_t)(EAX));
  /* 10fa058d call dword ptr [0x10fc631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc631c))), 0x10fa0593u);
  /* 10fa0593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa0595 je 0x10fa05ba */
  if (C.zf) goto L_10fa05ba;
  /* 10fa0597 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa059a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa05a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10fa05a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa05a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10fa05ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa05ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa05b4 jge 0x10fa05b8 */
  if ((C.sf==C.of)) goto L_10fa05b8;
  /* 10fa05b6 jmp 0x10fa05ca */
  goto L_10fa05ca;
L_10fa05b8:;
  /* 10fa05b8 jmp 0x10fa05c5 */
  goto L_10fa05c5;
L_10fa05ba:;
  /* 10fa05ba call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa05c0u);
  /* 10fa05c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa05c3 jmp 0x10fa05ca */
  goto L_10fa05ca;
L_10fa05c5:;
  /* 10fa05c5 jmp 0x10fa04cd */
  goto L_10fa04cd;
L_10fa05ca:;
  /* 10fa05ca jmp 0x10fa061c */
  goto L_10fa061c;
L_10fa05cc:;
  /* 10fa05cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa05ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10fa05d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa05d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa05d8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa05d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa05dc push eax */
  push32((uint32_t)(EAX));
  /* 10fa05dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa05e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa05e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa05e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa05e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa05ec mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa05f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10fa05f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa05f7 call dword ptr [0x10fc631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc631c))), 0x10fa05fdu);
  /* 10fa05fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa05ff je 0x10fa0613 */
  if (C.zf) goto L_10fa0613;
  /* 10fa0601 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa0608 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10fa060e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10fa0611 jmp 0x10fa061c */
  goto L_10fa061c;
L_10fa0613:;
  /* 10fa0613 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa0619u);
  /* 10fa0619 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fa061c:;
  /* 10fa061c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0620 jne 0x10fa06a6 */
  if (!C.zf) goto L_10fa06a6;
  /* 10fa0626 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa062a je 0x10fa065a */
  if (C.zf) goto L_10fa065a;
  /* 10fa062c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0630 jne 0x10fa0649 */
  if (!C.zf) goto L_10fa0649;
  /* 10fa0632 call 0x10f9f9e0 */
  push32(0x10fa0637u); f_10f9f9e0();
  /* 10fa0637 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa063d call 0x10f9f9f0 */
  push32(0x10fa0642u); f_10f9f9f0();
  /* 10fa0642 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0645 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10fa0647 jmp 0x10fa0655 */
  goto L_10fa0655;
L_10fa0649:;
  /* 10fa0649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa064c push edx */
  push32((uint32_t)(EDX));
  /* 10fa064d call 0x10f9f940 */
  push32(0x10fa0652u); f_10f9f940();
  /* 10fa0652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa0655:;
  /* 10fa0655 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0658 jmp 0x10fa06af */
  goto L_10fa06af;
L_10fa065a:;
  /* 10fa065a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa065d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa0660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0663 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa0666 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0669 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa0670 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fa0675 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa067a je 0x10fa068b */
  if (C.zf) goto L_10fa068b;
  /* 10fa067c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa067f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa0682 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0685 jne 0x10fa068b */
  if (!C.zf) goto L_10fa068b;
  /* 10fa0687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0689 jmp 0x10fa06af */
  goto L_10fa06af;
L_10fa068b:;
  /* 10fa068b call 0x10f9f9e0 */
  push32(0x10fa0690u); f_10f9f9e0();
  /* 10fa0690 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10fa0696 call 0x10f9f9f0 */
  push32(0x10fa069bu); f_10f9f9f0();
  /* 10fa069b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa06a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa06a4 jmp 0x10fa06af */
  goto L_10fa06af;
L_10fa06a6:;
  /* 10fa06a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa06a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10fa06af:;
  /* 10fa06af mov esp, ebp */
  ESP = (EBP);
  /* 10fa06b1 pop ebp */
  EBP = (pop32());
  /* 10fa06b2 ret  */
  ESPCHK(0x10fa0440u, _esp0);
  ESP += 4; return;
}

/* FUN_100106c0 @ 0x10fa06c0 (199 bytes, 68 insns) */
void f_10fa06c0(void) {
  FTRACE(0x10fa06c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa06c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa06c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa06c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa06c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa06c5 push esi */
  push32((uint32_t)(ESI));
  /* 10fa06c6 push edi */
  push32((uint32_t)(EDI));
L_10fa06c7:;
  /* 10fa06c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa06cb jne 0x10fa06eb */
  if (!C.zf) goto L_10fa06eb;
  /* 10fa06cd push 0x10fbefec */
  push32((uint32_t)(0x10fbefecu));
  /* 10fa06d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa06d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10fa06d6 push 0x10fbf0b8 */
  push32((uint32_t)(0x10fbf0b8u));
  /* 10fa06db push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa06dd call 0x10f96bd0 */
  push32(0x10fa06e2u); f_10f96bd0();
  /* 10fa06e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa06e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa06e8 jne 0x10fa06eb */
  if (!C.zf) goto L_10fa06eb;
  /* 10fa06ea int3  */
  x86_unimpl("int3 @ 0x10fa06ea");
L_10fa06eb:;
  /* 10fa06eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa06ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa06ef jne 0x10fa06c7 */
  if (!C.zf) goto L_10fa06c7;
  /* 10fa06f1 mov ecx, dword ptr [0x10fc391c] */
  ECX = (r32((uint32_t)(0x10fc391c)));
  /* 10fa06f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa06fa mov dword ptr [0x10fc391c], ecx */
  w32((uint32_t)(0x10fc391c), (ECX));
  /* 10fa0700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0703 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa0706 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10fa0708 push 0x10fbf0b8 */
  push32((uint32_t)(0x10fbf0b8u));
  /* 10fa070d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa070f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10fa0714 call 0x10f97b10 */
  push32(0x10fa0719u); f_10f97b10();
  /* 10fa0719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa071c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa071f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10fa0722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0725 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0729 je 0x10fa0746 */
  if (C.zf) goto L_10fa0746;
  /* 10fa072b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa072e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa0731 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa0734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0737 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10fa073a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa073d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10fa0744 jmp 0x10fa076b */
  goto L_10fa076b;
L_10fa0746:;
  /* 10fa0746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0749 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa074c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa074f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0752 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fa0755 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0758 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa075b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa075e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10fa0761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0764 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10fa076b:;
  /* 10fa076b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa076e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0771 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa0774 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa0776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0779 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10fa0780 pop edi */
  EDI = (pop32());
  /* 10fa0781 pop esi */
  ESI = (pop32());
  /* 10fa0782 pop ebx */
  EBX = (pop32());
  /* 10fa0783 mov esp, ebp */
  ESP = (EBP);
  /* 10fa0785 pop ebp */
  EBP = (pop32());
  /* 10fa0786 ret  */
  ESPCHK(0x10fa06c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10fa0790 (50 bytes, 17 insns) */
void f_10fa0790(void) {
  FTRACE(0x10fa0790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0790 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0791 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0796 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa079c jb 0x10fa07a2 */
  if (C.cf) goto L_10fa07a2;
  /* 10fa079e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa07a0 jmp 0x10fa07c0 */
  goto L_10fa07c0;
L_10fa07a2:;
  /* 10fa07a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa07a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa07a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa07ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa07ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa07b1 mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa07b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa07bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10fa07c0:;
  /* 10fa07c0 pop ebp */
  EBP = (pop32());
  /* 10fa07c1 ret  */
  ESPCHK(0x10fa0790u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x10fa07d0 (300 bytes, 80 insns) */
void f_10fa07d0(void) {
  FTRACE(0x10fa07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa07d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa07d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa07d4 cmp dword ptr [0x10fc4de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc4de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa07db jne 0x10fa07e9 */
  if (!C.zf) goto L_10fa07e9;
  /* 10fa07dd mov dword ptr [0x10fc4de0], 0x200 */
  w32((uint32_t)(0x10fc4de0), (0x200u));
  /* 10fa07e7 jmp 0x10fa07fc */
  goto L_10fa07fc;
L_10fa07e9:;
  /* 10fa07e9 cmp dword ptr [0x10fc4de0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10fc4de0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa07f0 jge 0x10fa07fc */
  if ((C.sf==C.of)) goto L_10fa07fc;
  /* 10fa07f2 mov dword ptr [0x10fc4de0], 0x14 */
  w32((uint32_t)(0x10fc4de0), (0x14u));
L_10fa07fc:;
  /* 10fa07fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10fa0801 push 0x10fbf0c4 */
  push32((uint32_t)(0x10fbf0c4u));
  /* 10fa0806 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa0808 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa080a mov eax, dword ptr [0x10fc4de0] */
  EAX = (r32((uint32_t)(0x10fc4de0)));
  /* 10fa080f push eax */
  push32((uint32_t)(EAX));
  /* 10fa0810 call 0x10f97f20 */
  push32(0x10fa0815u); f_10f97f20();
  /* 10fa0815 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0818 mov dword ptr [0x10fc3a90], eax */
  w32((uint32_t)(0x10fc3a90), (EAX));
  /* 10fa081d cmp dword ptr [0x10fc3a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0824 jne 0x10fa0865 */
  if (!C.zf) goto L_10fa0865;
  /* 10fa0826 mov dword ptr [0x10fc4de0], 0x14 */
  w32((uint32_t)(0x10fc4de0), (0x14u));
  /* 10fa0830 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10fa0835 push 0x10fbf0c4 */
  push32((uint32_t)(0x10fbf0c4u));
  /* 10fa083a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa083c push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa083e mov ecx, dword ptr [0x10fc4de0] */
  ECX = (r32((uint32_t)(0x10fc4de0)));
  /* 10fa0844 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0845 call 0x10f97f20 */
  push32(0x10fa084au); f_10f97f20();
  /* 10fa084a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa084d mov dword ptr [0x10fc3a90], eax */
  w32((uint32_t)(0x10fc3a90), (EAX));
  /* 10fa0852 cmp dword ptr [0x10fc3a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0859 jne 0x10fa0865 */
  if (!C.zf) goto L_10fa0865;
  /* 10fa085b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10fa085d call 0x10f96a80 */
  push32(0x10fa0862u); f_10f96a80();
  /* 10fa0862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa0865:;
  /* 10fa0865 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa086c jmp 0x10fa0877 */
  goto L_10fa0877;
L_10fa086e:;
  /* 10fa086e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0871 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0874 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fa0877:;
  /* 10fa0877 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa087b jge 0x10fa0896 */
  if ((C.sf==C.of)) goto L_10fa0896;
  /* 10fa087d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0880 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa0883 add eax, 0x10fc2120 */
  { uint32_t _a=(EAX),_b=(0x10fc2120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa088b mov edx, dword ptr [0x10fc3a90] */
  EDX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa0891 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10fa0894 jmp 0x10fa086e */
  goto L_10fa086e;
L_10fa0896:;
  /* 10fa0896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa089d jmp 0x10fa08a8 */
  goto L_10fa08a8;
L_10fa089f:;
  /* 10fa089f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa08a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa08a8:;
  /* 10fa08a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa08ac jge 0x10fa08f8 */
  if ((C.sf==C.of)) goto L_10fa08f8;
  /* 10fa08ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa08b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa08ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa08bd mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa08c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa08c8 je 0x10fa08e6 */
  if (C.zf) goto L_10fa08e6;
  /* 10fa08ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa08d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa08d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa08d9 mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa08e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa08e4 jne 0x10fa08f6 */
  if (!C.zf) goto L_10fa08f6;
L_10fa08e6:;
  /* 10fa08e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa08e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa08ec mov dword ptr [ecx + 0x10fc2130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10fc2130), (0xffffffffu));
L_10fa08f6:;
  /* 10fa08f6 jmp 0x10fa089f */
  goto L_10fa089f;
L_10fa08f8:;
  /* 10fa08f8 mov esp, ebp */
  ESP = (EBP);
  /* 10fa08fa pop ebp */
  EBP = (pop32());
  /* 10fa08fb ret  */
  ESPCHK(0x10fa07d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010900 @ 0x10fa0900 (26 bytes, 9 insns) */
void f_10fa0900(void) {
  FTRACE(0x10fa0900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0900 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0901 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0903 call 0x10fa1500 */
  push32(0x10fa0908u); f_10fa1500();
  /* 10fa0908 movsx eax, byte ptr [0x10fc3734] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10fc3734))));
  /* 10fa090f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa0911 je 0x10fa0918 */
  if (C.zf) goto L_10fa0918;
  /* 10fa0913 call 0x10fa12c0 */
  push32(0x10fa0918u); f_10fa12c0();
L_10fa0918:;
  /* 10fa0918 pop ebp */
  EBP = (pop32());
  /* 10fa0919 ret  */
  ESPCHK(0x10fa0900u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x10fa0920 (61 bytes, 20 insns) */
void f_10fa0920(void) {
  FTRACE(0x10fa0920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0920 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0921 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0923 cmp dword ptr [ebp + 8], 0x10fc2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10fc2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa092a jb 0x10fa094e */
  if (C.cf) goto L_10fa094e;
  /* 10fa092c cmp dword ptr [ebp + 8], 0x10fc2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10fc2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0933 ja 0x10fa094e */
  if ((!C.cf&&!C.zf)) goto L_10fa094e;
  /* 10fa0935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0938 sub eax, 0x10fc2120 */
  { uint32_t _a=(EAX),_b=(0x10fc2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa093d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa0940 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0943 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0944 call 0x10f9b510 */
  push32(0x10fa0949u); f_10f9b510();
  /* 10fa0949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa094c jmp 0x10fa095b */
  goto L_10fa095b;
L_10fa094e:;
  /* 10fa094e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0951 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0954 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0955 call dword ptr [0x10fc6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6308))), 0x10fa095bu);
L_10fa095b:;
  /* 10fa095b pop ebp */
  EBP = (pop32());
  /* 10fa095c ret  */
  ESPCHK(0x10fa0920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x10fa0960 (41 bytes, 16 insns) */
void f_10fa0960(void) {
  FTRACE(0x10fa0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0960 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0961 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0963 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0967 jge 0x10fa097a */
  if ((C.sf==C.of)) goto L_10fa097a;
  /* 10fa0969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa096c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa096f push eax */
  push32((uint32_t)(EAX));
  /* 10fa0970 call 0x10f9b510 */
  push32(0x10fa0975u); f_10f9b510();
  /* 10fa0975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0978 jmp 0x10fa0987 */
  goto L_10fa0987;
L_10fa097a:;
  /* 10fa097a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa097d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0980 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0981 call dword ptr [0x10fc6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6308))), 0x10fa0987u);
L_10fa0987:;
  /* 10fa0987 pop ebp */
  EBP = (pop32());
  /* 10fa0988 ret  */
  ESPCHK(0x10fa0960u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x10fa0990 (61 bytes, 20 insns) */
void f_10fa0990(void) {
  FTRACE(0x10fa0990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0990 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0991 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0993 cmp dword ptr [ebp + 8], 0x10fc2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10fc2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa099a jb 0x10fa09be */
  if (C.cf) goto L_10fa09be;
  /* 10fa099c cmp dword ptr [ebp + 8], 0x10fc2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10fc2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa09a3 ja 0x10fa09be */
  if ((!C.cf&&!C.zf)) goto L_10fa09be;
  /* 10fa09a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa09a8 sub eax, 0x10fc2120 */
  { uint32_t _a=(EAX),_b=(0x10fc2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa09ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa09b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09b3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa09b4 call 0x10f9b5b0 */
  push32(0x10fa09b9u); f_10f9b5b0();
  /* 10fa09b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09bc jmp 0x10fa09cb */
  goto L_10fa09cb;
L_10fa09be:;
  /* 10fa09be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa09c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa09c5 call dword ptr [0x10fc6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6304))), 0x10fa09cbu);
L_10fa09cb:;
  /* 10fa09cb pop ebp */
  EBP = (pop32());
  /* 10fa09cc ret  */
  ESPCHK(0x10fa0990u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x10fa09d0 (41 bytes, 16 insns) */
void f_10fa09d0(void) {
  FTRACE(0x10fa09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa09d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa09d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa09d7 jge 0x10fa09ea */
  if ((C.sf==C.of)) goto L_10fa09ea;
  /* 10fa09d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa09dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09df push eax */
  push32((uint32_t)(EAX));
  /* 10fa09e0 call 0x10f9b5b0 */
  push32(0x10fa09e5u); f_10f9b5b0();
  /* 10fa09e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09e8 jmp 0x10fa09f7 */
  goto L_10fa09f7;
L_10fa09ea:;
  /* 10fa09ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa09ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa09f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa09f1 call dword ptr [0x10fc6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6304))), 0x10fa09f7u);
L_10fa09f7:;
  /* 10fa09f7 pop ebp */
  EBP = (pop32());
  /* 10fa09f8 ret  */
  ESPCHK(0x10fa09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a00 @ 0x10fa0a00 (119 bytes, 34 insns) */
void f_10fa0a00(void) {
  FTRACE(0x10fa0a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0a01 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0a06 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa0a0b call dword ptr [0x10fc6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6330))), 0x10fa0a11u);
  /* 10fa0a11 cmp dword ptr [0x10fc3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0a18 je 0x10fa0a38 */
  if (C.zf) goto L_10fa0a38;
  /* 10fa0a1a push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa0a1f call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa0a25u);
  /* 10fa0a25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa0a27 call 0x10f9b510 */
  push32(0x10fa0a2cu); f_10f9b510();
  /* 10fa0a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0a2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa0a36 jmp 0x10fa0a3f */
  goto L_10fa0a3f;
L_10fa0a38:;
  /* 10fa0a38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fa0a3f:;
  /* 10fa0a3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10fa0a43 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0a48 call 0x10fa0a80 */
  push32(0x10fa0a4du); f_10fa0a80();
  /* 10fa0a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0a50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa0a53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0a57 je 0x10fa0a65 */
  if (C.zf) goto L_10fa0a65;
  /* 10fa0a59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa0a5b call 0x10f9b5b0 */
  push32(0x10fa0a60u); f_10f9b5b0();
  /* 10fa0a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0a63 jmp 0x10fa0a70 */
  goto L_10fa0a70;
L_10fa0a65:;
  /* 10fa0a65 push 0x10fc3a8c */
  push32((uint32_t)(0x10fc3a8cu));
  /* 10fa0a6a call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10fa0a70u);
L_10fa0a70:;
  /* 10fa0a70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0a73 mov esp, ebp */
  ESP = (EBP);
  /* 10fa0a75 pop ebp */
  EBP = (pop32());
  /* 10fa0a76 ret  */
  ESPCHK(0x10fa0a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x10fa0a80 (160 bytes, 50 insns) */
void f_10fa0a80(void) {
  FTRACE(0x10fa0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0a81 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0a86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0a8a jne 0x10fa0a93 */
  if (!C.zf) goto L_10fa0a93;
  /* 10fa0a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0a8e jmp 0x10fa0b1c */
  goto L_10fa0b1c;
L_10fa0a93:;
  /* 10fa0a93 cmp dword ptr [0x10fc3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0a9a jne 0x10fa0aca */
  if (!C.zf) goto L_10fa0aca;
  /* 10fa0a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0a9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0aa4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0aa9 jle 0x10fa0abb */
  if ((C.zf||C.sf!=C.of)) goto L_10fa0abb;
  /* 10fa0aab call 0x10f9f9e0 */
  push32(0x10fa0ab0u); f_10f9f9e0();
  /* 10fa0ab0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10fa0ab6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0ab9 jmp 0x10fa0b1c */
  goto L_10fa0b1c;
L_10fa0abb:;
  /* 10fa0abb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0abe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10fa0ac1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10fa0ac3 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa0ac8 jmp 0x10fa0b1c */
  goto L_10fa0b1c;
L_10fa0aca:;
  /* 10fa0aca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa0ad1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fa0ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0ad7 mov ecx, dword ptr [0x10fc1ea4] */
  ECX = (r32((uint32_t)(0x10fc1ea4)));
  /* 10fa0add push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0ae1 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa0ae4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10fa0ae7 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0ae8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10fa0aed mov ecx, dword ptr [0x10fc3910] */
  ECX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa0af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0af4 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10fa0afau);
  /* 10fa0afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0afd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0b01 je 0x10fa0b09 */
  if (C.zf) goto L_10fa0b09;
  /* 10fa0b03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0b07 je 0x10fa0b19 */
  if (C.zf) goto L_10fa0b19;
L_10fa0b09:;
  /* 10fa0b09 call 0x10f9f9e0 */
  push32(0x10fa0b0eu); f_10f9f9e0();
  /* 10fa0b0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10fa0b14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0b17 jmp 0x10fa0b1c */
  goto L_10fa0b1c;
L_10fa0b19:;
  /* 10fa0b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa0b1c:;
  /* 10fa0b1c mov esp, ebp */
  ESP = (EBP);
  /* 10fa0b1e pop ebp */
  EBP = (pop32());
  /* 10fa0b1f ret  */
  ESPCHK(0x10fa0a80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10fa0b20 (32 bytes, 18 insns) */
void f_10fa0b20(void) {
  FTRACE(0x10fa0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0b21 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0b23 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa0b24 push esi */
  push32((uint32_t)(ESI));
  /* 10fa0b25 push edi */
  push32((uint32_t)(EDI));
  /* 10fa0b26 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa0b2b push 0x10fa0b38 */
  push32((uint32_t)(0x10fa0b38u));
  /* 10fa0b30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10fa0b33 call 0x10fa826c */
  push32(0x10fa0b38u); f_10fa826c();
  /* 10fa0b38 pop ebp */
  EBP = (pop32());
  /* 10fa0b39 pop edi */
  EDI = (pop32());
  /* 10fa0b3a pop esi */
  ESI = (pop32());
  /* 10fa0b3b pop ebx */
  EBX = (pop32());
  /* 10fa0b3c mov esp, ebp */
  ESP = (EBP);
  /* 10fa0b3e pop ebp */
  EBP = (pop32());
  /* 10fa0b3f ret  */
  ESPCHK(0x10fa0b20u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10fa0b62 (104 bytes, 33 insns) */
void f_10fa0b62(void) {
  FTRACE(0x10fa0b62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0b62 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa0b63 push esi */
  push32((uint32_t)(ESI));
  /* 10fa0b64 push edi */
  push32((uint32_t)(EDI));
  /* 10fa0b65 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10fa0b69 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0b6a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10fa0b6c push 0x10fa0b40 */
  push32((uint32_t)(0x10fa0b40u));
  /* 10fa0b71 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10fa0b78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10fa0b7f:;
  /* 10fa0b7f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10fa0b83 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa0b86 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa0b89 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0b8c je 0x10fa0bbc */
  if (C.zf) goto L_10fa0bbc;
  /* 10fa0b8e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0b92 je 0x10fa0bbc */
  if (C.zf) goto L_10fa0bbc;
  /* 10fa0b94 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10fa0b97 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10fa0b9a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10fa0b9e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10fa0ba1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0ba6 jne 0x10fa0bba */
  if (!C.zf) goto L_10fa0bba;
  /* 10fa0ba8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10fa0bad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10fa0bb1 call 0x10fa0bf6 */
  push32(0x10fa0bb6u); f_10fa0bf6();
  /* 10fa0bb6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10fa0bbau);
L_10fa0bba:;
  /* 10fa0bba jmp 0x10fa0b7f */
  goto L_10fa0b7f;
L_10fa0bbc:;
  /* 10fa0bbc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10fa0bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0bc6 pop edi */
  EDI = (pop32());
  /* 10fa0bc7 pop esi */
  ESI = (pop32());
  /* 10fa0bc8 pop ebx */
  EBX = (pop32());
  /* 10fa0bc9 ret  */
  ESPCHK(0x10fa0b62u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf6 @ 0x10fa0bf6 (24 bytes, 10 insns) */
void f_10fa0bf6(void) {
  FTRACE(0x10fa0bf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa0bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0bf8 mov ebx, 0x10fc23b8 */
  EBX = (0x10fc23b8u);
  /* 10fa0bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0c00 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10fa0c03 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10fa0c06 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10fa0c09 pop ecx */
  ECX = (pop32());
  /* 10fa0c0a pop ebx */
  EBX = (pop32());
  /* 10fa0c0b ret 4 */
  ESPCHK(0x10fa0bf6u, _esp0);
  ESP += 8; return;
}

/* FUN_10010cd5 @ 0x10fa0cd5 (27 bytes, 11 insns) */
void f_10fa0cd5(void) {
  FTRACE(0x10fa0cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0cd6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa0cda mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10fa0cdc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10fa0cdf push eax */
  push32((uint32_t)(EAX));
  /* 10fa0ce0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fa0ce3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0ce4 call 0x10fa0b62 */
  push32(0x10fa0ce9u); f_10fa0b62();
  /* 10fa0ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0cec pop ebp */
  EBP = (pop32());
  /* 10fa0ced ret 4 */
  ESPCHK(0x10fa0cd5u, _esp0);
  ESP += 8; return;
}

/* FUN_10010cf0 @ 0x10fa0cf0 (482 bytes, 138 insns) */
void f_10fa0cf0(void) {
  FTRACE(0x10fa0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0cf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0cf6 push esi */
  push32((uint32_t)(ESI));
  /* 10fa0cf7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10fa0cfe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10fa0d00 call 0x10f9b510 */
  push32(0x10fa0d05u); f_10f9b510();
  /* 10fa0d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa0d0f jmp 0x10fa0d1a */
  goto L_10fa0d1a;
L_10fa0d11:;
  /* 10fa0d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fa0d1a:;
  /* 10fa0d1a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0d1e jge 0x10fa0ec0 */
  if ((C.sf==C.of)) goto L_10fa0ec0;
  /* 10fa0d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0d27 cmp dword ptr [ecx*4 + 0x10fc50e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10fc50e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0d2f je 0x10fa0e26 */
  if (C.zf) goto L_10fa0e26;
  /* 10fa0d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0d38 mov eax, dword ptr [edx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa0d3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0d42 jmp 0x10fa0d4d */
  goto L_10fa0d4d;
L_10fa0d44:;
  /* 10fa0d44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0d47 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa0d4d:;
  /* 10fa0d4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0d50 mov eax, dword ptr [edx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa0d57 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d5c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0d5f jae 0x10fa0e16 */
  if (!C.cf) goto L_10fa0e16;
  /* 10fa0d65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0d68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fa0d6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa0d6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa0d71 jne 0x10fa0e11 */
  if (!C.zf) goto L_10fa0e11;
  /* 10fa0d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0d7a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0d7e jne 0x10fa0db9 */
  if (!C.zf) goto L_10fa0db9;
  /* 10fa0d80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fa0d82 call 0x10f9b510 */
  push32(0x10fa0d87u); f_10f9b510();
  /* 10fa0d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0d8d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0d91 jne 0x10fa0daf */
  if (!C.zf) goto L_10fa0daf;
  /* 10fa0d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0d96 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0d99 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0d9a call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10fa0da0u);
  /* 10fa0da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0da3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa0da6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0da9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0dac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10fa0daf:;
  /* 10fa0daf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fa0db1 call 0x10f9b5b0 */
  push32(0x10fa0db6u); f_10f9b5b0();
  /* 10fa0db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa0db9:;
  /* 10fa0db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0dbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0dbf push eax */
  push32((uint32_t)(EAX));
  /* 10fa0dc0 call dword ptr [0x10fc6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6308))), 0x10fa0dc6u);
  /* 10fa0dc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0dc9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10fa0dcd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa0dd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa0dd2 je 0x10fa0de6 */
  if (C.zf) goto L_10fa0de6;
  /* 10fa0dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0dd7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0dda push eax */
  push32((uint32_t)(EAX));
  /* 10fa0ddb call dword ptr [0x10fc6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6304))), 0x10fa0de1u);
  /* 10fa0de1 jmp 0x10fa0d44 */
  goto L_10fa0d44;
L_10fa0de6:;
  /* 10fa0de6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0de9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10fa0def mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0df2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa0df5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0dfb sub eax, dword ptr [edx*4 + 0x10fc50e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10fc50e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa0e02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa0e03 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10fa0e08 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10fa0e0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0e0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa0e0f jmp 0x10fa0e16 */
  goto L_10fa0e16;
L_10fa0e11:;
  /* 10fa0e11 jmp 0x10fa0d44 */
  goto L_10fa0d44;
L_10fa0e16:;
  /* 10fa0e16 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0e1a je 0x10fa0e21 */
  if (C.zf) goto L_10fa0e21;
  /* 10fa0e1c jmp 0x10fa0ec0 */
  goto L_10fa0ec0;
L_10fa0e21:;
  /* 10fa0e21 jmp 0x10fa0ebb */
  goto L_10fa0ebb;
L_10fa0e26:;
  /* 10fa0e26 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10fa0e28 push 0x10fbf0cc */
  push32((uint32_t)(0x10fbf0ccu));
  /* 10fa0e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa0e2f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10fa0e34 call 0x10f97b10 */
  push32(0x10fa0e39u); f_10f97b10();
  /* 10fa0e39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0e3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa0e3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0e43 je 0x10fa0eb9 */
  if (C.zf) goto L_10fa0eb9;
  /* 10fa0e45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e4b mov dword ptr [eax*4 + 0x10fc50e0], ecx */
  w32((uint32_t)(EAX*4 + 0x10fc50e0), (ECX));
  /* 10fa0e52 mov edx, dword ptr [0x10fc521c] */
  EDX = (r32((uint32_t)(0x10fc521c)));
  /* 10fa0e58 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0e5b mov dword ptr [0x10fc521c], edx */
  w32((uint32_t)(0x10fc521c), (EDX));
  /* 10fa0e61 jmp 0x10fa0e6c */
  goto L_10fa0e6c;
L_10fa0e63:;
  /* 10fa0e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e66 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa0e6c:;
  /* 10fa0e6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0e6f mov edx, dword ptr [ecx*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa0e76 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0e7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0e7f jae 0x10fa0ea4 */
  if (!C.cf) goto L_10fa0ea4;
  /* 10fa0e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e84 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10fa0e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e8b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10fa0e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e94 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10fa0e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa0e9b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10fa0ea2 jmp 0x10fa0e63 */
  goto L_10fa0e63;
L_10fa0ea4:;
  /* 10fa0ea4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa0ea7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa0eaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa0ead mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0eb0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0eb1 call 0x10fa1200 */
  push32(0x10fa0eb6u); f_10fa1200();
  /* 10fa0eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa0eb9:;
  /* 10fa0eb9 jmp 0x10fa0ec0 */
  goto L_10fa0ec0;
L_10fa0ebb:;
  /* 10fa0ebb jmp 0x10fa0d11 */
  goto L_10fa0d11;
L_10fa0ec0:;
  /* 10fa0ec0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10fa0ec2 call 0x10f9b5b0 */
  push32(0x10fa0ec7u); f_10f9b5b0();
  /* 10fa0ec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa0eca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa0ecd pop esi */
  ESI = (pop32());
  /* 10fa0ece mov esp, ebp */
  ESP = (EBP);
  /* 10fa0ed0 pop ebp */
  EBP = (pop32());
  /* 10fa0ed1 ret  */
  ESPCHK(0x10fa0cf0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10fa0ee0 (183 bytes, 57 insns) */
void f_10fa0ee0(void) {
  FTRACE(0x10fa0ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0ee7 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0eed jae 0x10fa0f7a */
  if (!C.cf) goto L_10fa0f7a;
  /* 10fa0ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0ef6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa0ef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0efc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa0eff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0f02 mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa0f09 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0f0d jne 0x10fa0f7a */
  if (!C.zf) goto L_10fa0f7a;
  /* 10fa0f0f cmp dword ptr [0x10fc36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0f16 jne 0x10fa0f5a */
  if (!C.zf) goto L_10fa0f5a;
  /* 10fa0f18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0f1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa0f1e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0f22 je 0x10fa0f32 */
  if (C.zf) goto L_10fa0f32;
  /* 10fa0f24 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0f28 je 0x10fa0f40 */
  if (C.zf) goto L_10fa0f40;
  /* 10fa0f2a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0f2e je 0x10fa0f4e */
  if (C.zf) goto L_10fa0f4e;
  /* 10fa0f30 jmp 0x10fa0f5a */
  goto L_10fa0f5a;
L_10fa0f32:;
  /* 10fa0f32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0f35 push edx */
  push32((uint32_t)(EDX));
  /* 10fa0f36 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10fa0f38 call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa0f3eu);
  /* 10fa0f3e jmp 0x10fa0f5a */
  goto L_10fa0f5a;
L_10fa0f40:;
  /* 10fa0f40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0f43 push eax */
  push32((uint32_t)(EAX));
  /* 10fa0f44 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10fa0f46 call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa0f4cu);
  /* 10fa0f4c jmp 0x10fa0f5a */
  goto L_10fa0f5a;
L_10fa0f4e:;
  /* 10fa0f4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0f51 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0f52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10fa0f54 call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa0f5au);
L_10fa0f5a:;
  /* 10fa0f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0f5d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fa0f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0f63 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0f66 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0f69 mov ecx, dword ptr [edx*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa0f70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa0f73 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10fa0f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0f78 jmp 0x10fa0f93 */
  goto L_10fa0f93;
L_10fa0f7a:;
  /* 10fa0f7a call 0x10f9f9e0 */
  push32(0x10fa0f7fu); f_10f9f9e0();
  /* 10fa0f7f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa0f85 call 0x10f9f9f0 */
  push32(0x10fa0f8au); f_10f9f9f0();
  /* 10fa0f8a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa0f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fa0f93:;
  /* 10fa0f93 mov esp, ebp */
  ESP = (EBP);
  /* 10fa0f95 pop ebp */
  EBP = (pop32());
  /* 10fa0f96 ret  */
  ESPCHK(0x10fa0ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x10fa0fa0 (216 bytes, 63 insns) */
void f_10fa0fa0(void) {
  FTRACE(0x10fa0fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa0fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa0fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa0fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa0fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0fa7 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0fad jae 0x10fa105b */
  if (!C.cf) goto L_10fa105b;
  /* 10fa0fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0fb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa0fb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0fbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa0fbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0fc2 mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa0fc9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa0fce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa0fd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa0fd3 je 0x10fa105b */
  if (C.zf) goto L_10fa105b;
  /* 10fa0fd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0fdc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fa0fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa0fe2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa0fe5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa0fe8 mov ecx, dword ptr [edx*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa0fef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0ff3 je 0x10fa105b */
  if (C.zf) goto L_10fa105b;
  /* 10fa0ff5 cmp dword ptr [0x10fc36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa0ffc jne 0x10fa103a */
  if (!C.zf) goto L_10fa103a;
  /* 10fa0ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1001 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa1004 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1008 je 0x10fa1018 */
  if (C.zf) goto L_10fa1018;
  /* 10fa100a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa100e je 0x10fa1024 */
  if (C.zf) goto L_10fa1024;
  /* 10fa1010 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1014 je 0x10fa1030 */
  if (C.zf) goto L_10fa1030;
  /* 10fa1016 jmp 0x10fa103a */
  goto L_10fa103a;
L_10fa1018:;
  /* 10fa1018 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa101a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10fa101c call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa1022u);
  /* 10fa1022 jmp 0x10fa103a */
  goto L_10fa103a;
L_10fa1024:;
  /* 10fa1024 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa1026 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10fa1028 call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa102eu);
  /* 10fa102e jmp 0x10fa103a */
  goto L_10fa103a;
L_10fa1030:;
  /* 10fa1030 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa1032 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10fa1034 call dword ptr [0x10fc62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62d0))), 0x10fa103au);
L_10fa103a:;
  /* 10fa103a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa103d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa1040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1043 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa1046 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1049 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa1050 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10fa1057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1059 jmp 0x10fa1074 */
  goto L_10fa1074;
L_10fa105b:;
  /* 10fa105b call 0x10f9f9e0 */
  push32(0x10fa1060u); f_10f9f9e0();
  /* 10fa1060 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa1066 call 0x10f9f9f0 */
  push32(0x10fa106bu); f_10f9f9f0();
  /* 10fa106b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa1071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fa1074:;
  /* 10fa1074 mov esp, ebp */
  ESP = (EBP);
  /* 10fa1076 pop ebp */
  EBP = (pop32());
  /* 10fa1077 ret  */
  ESPCHK(0x10fa0fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x10fa1080 (102 bytes, 30 insns) */
void f_10fa1080(void) {
  FTRACE(0x10fa1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1080 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1081 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1086 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa108c jae 0x10fa10cb */
  if (!C.cf) goto L_10fa10cb;
  /* 10fa108e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1091 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa1094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1097 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa109a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa109d mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa10a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa10a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa10ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa10ae je 0x10fa10cb */
  if (C.zf) goto L_10fa10cb;
  /* 10fa10b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa10b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10fa10b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa10b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa10bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa10bf mov ecx, dword ptr [edx*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10fa10c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10fa10c9 jmp 0x10fa10e4 */
  goto L_10fa10e4;
L_10fa10cb:;
  /* 10fa10cb call 0x10f9f9e0 */
  push32(0x10fa10d0u); f_10f9f9e0();
  /* 10fa10d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa10d6 call 0x10f9f9f0 */
  push32(0x10fa10dbu); f_10f9f9f0();
  /* 10fa10db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa10e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10fa10e4:;
  /* 10fa10e4 pop ebp */
  EBP = (pop32());
  /* 10fa10e5 ret  */
  ESPCHK(0x10fa1080u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x10fa10f0 (260 bytes, 83 insns) */
void f_10fa10f0(void) {
  FTRACE(0x10fa10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa10f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa10f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa10f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa10fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa10fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1102 je 0x10fa110d */
  if (C.zf) goto L_10fa110d;
  /* 10fa1104 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa1107 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10fa110a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10fa110d:;
  /* 10fa110d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1110 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa1116 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa1118 je 0x10fa1122 */
  if (C.zf) goto L_10fa1122;
  /* 10fa111a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa111d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10fa111f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10fa1122:;
  /* 10fa1122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1125 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa112b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa112d je 0x10fa1138 */
  if (C.zf) goto L_10fa1138;
  /* 10fa112f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa1132 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10fa1135 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10fa1138:;
  /* 10fa1138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa113b push eax */
  push32((uint32_t)(EAX));
  /* 10fa113c call dword ptr [0x10fc6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6368))), 0x10fa1142u);
  /* 10fa1142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa1145 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1149 jne 0x10fa1162 */
  if (!C.zf) goto L_10fa1162;
  /* 10fa114b call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa1151u);
  /* 10fa1151 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1152 call 0x10f9f940 */
  push32(0x10fa1157u); f_10f9f940();
  /* 10fa1157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa115a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa115d jmp 0x10fa11f0 */
  goto L_10fa11f0;
L_10fa1162:;
  /* 10fa1162 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1166 jne 0x10fa1173 */
  if (!C.zf) goto L_10fa1173;
  /* 10fa1168 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa116b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10fa116e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10fa1171 jmp 0x10fa1182 */
  goto L_10fa1182;
L_10fa1173:;
  /* 10fa1173 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1177 jne 0x10fa1182 */
  if (!C.zf) goto L_10fa1182;
  /* 10fa1179 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa117c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10fa117f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10fa1182:;
  /* 10fa1182 call 0x10fa0cf0 */
  push32(0x10fa1187u); f_10fa0cf0();
  /* 10fa1187 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa118a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa118e jne 0x10fa11ab */
  if (!C.zf) goto L_10fa11ab;
  /* 10fa1190 call 0x10f9f9e0 */
  push32(0x10fa1195u); f_10f9f9e0();
  /* 10fa1195 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10fa119b call 0x10f9f9f0 */
  push32(0x10fa11a0u); f_10f9f9f0();
  /* 10fa11a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa11a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa11a9 jmp 0x10fa11f0 */
  goto L_10fa11f0;
L_10fa11ab:;
  /* 10fa11ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa11ae push eax */
  push32((uint32_t)(EAX));
  /* 10fa11af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa11b2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa11b3 call 0x10fa0ee0 */
  push32(0x10fa11b8u); f_10fa0ee0();
  /* 10fa11b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa11bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa11be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10fa11c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10fa11c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa11c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa11ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa11cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa11d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa11d3 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa11da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10fa11dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10fa11e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa11e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa11e5 call 0x10fa1290 */
  push32(0x10fa11eau); f_10fa1290();
  /* 10fa11ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa11ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa11f0:;
  /* 10fa11f0 mov esp, ebp */
  ESP = (EBP);
  /* 10fa11f2 pop ebp */
  EBP = (pop32());
  /* 10fa11f3 ret  */
  ESPCHK(0x10fa10f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x10fa1200 (134 bytes, 44 insns) */
void f_10fa1200(void) {
  FTRACE(0x10fa1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1200 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1201 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1203 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1207 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa120a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa120d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa1210 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1213 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa121a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa121c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10fa121f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1222 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1226 jne 0x10fa1261 */
  if (!C.zf) goto L_10fa1261;
  /* 10fa1228 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fa122a call 0x10f9b510 */
  push32(0x10fa122fu); f_10f9b510();
  /* 10fa122f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1235 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1239 jne 0x10fa1257 */
  if (!C.zf) goto L_10fa1257;
  /* 10fa123b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa123e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1241 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1242 call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10fa1248u);
  /* 10fa1248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa124b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa124e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1254 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10fa1257:;
  /* 10fa1257 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10fa1259 call 0x10f9b5b0 */
  push32(0x10fa125eu); f_10f9b5b0();
  /* 10fa125e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa1261:;
  /* 10fa1261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1264 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa1267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa126a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa126d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1270 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa1277 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10fa127b push eax */
  push32((uint32_t)(EAX));
  /* 10fa127c call dword ptr [0x10fc6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6308))), 0x10fa1282u);
  /* 10fa1282 mov esp, ebp */
  ESP = (EBP);
  /* 10fa1284 pop ebp */
  EBP = (pop32());
  /* 10fa1285 ret  */
  ESPCHK(0x10fa1200u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10fa1290 (38 bytes, 13 insns) */
void f_10fa1290(void) {
  FTRACE(0x10fa1290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1290 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1291 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1296 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa1299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa129c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa129f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa12a2 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa12a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10fa12ad push eax */
  push32((uint32_t)(EAX));
  /* 10fa12ae call dword ptr [0x10fc6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6304))), 0x10fa12b4u);
  /* 10fa12b4 pop ebp */
  EBP = (pop32());
  /* 10fa12b5 ret  */
  ESPCHK(0x10fa1290u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x10fa12c0 (218 bytes, 63 insns) */
void f_10fa12c0(void) {
  FTRACE(0x10fa12c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa12c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa12c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa12c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa12c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa12cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa12cf call 0x10f9b510 */
  push32(0x10fa12d4u); f_10f9b510();
  /* 10fa12d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa12d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10fa12de jmp 0x10fa12e9 */
  goto L_10fa12e9;
L_10fa12e0:;
  /* 10fa12e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa12e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa12e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa12e9:;
  /* 10fa12e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa12ec cmp ecx, dword ptr [0x10fc4de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc4de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa12f2 jge 0x10fa1389 */
  if ((C.sf==C.of)) goto L_10fa1389;
  /* 10fa12f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa12fb mov eax, dword ptr [0x10fc3a90] */
  EAX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1300 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1304 je 0x10fa1384 */
  if (C.zf) goto L_10fa1384;
  /* 10fa1306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1309 mov edx, dword ptr [0x10fc3a90] */
  EDX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa130f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fa1312 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa1315 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa131b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa131d je 0x10fa1341 */
  if (C.zf) goto L_10fa1341;
  /* 10fa131f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1322 mov eax, dword ptr [0x10fc3a90] */
  EAX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1327 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa132a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa132b call 0x10fa20b0 */
  push32(0x10fa1330u); f_10fa20b0();
  /* 10fa1330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1333 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1336 je 0x10fa1341 */
  if (C.zf) goto L_10fa1341;
  /* 10fa1338 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa133b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa133e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10fa1341:;
  /* 10fa1341 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1345 jl 0x10fa1384 */
  if ((C.sf!=C.of)) goto L_10fa1384;
  /* 10fa1347 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa134a mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1350 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa1353 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1356 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1357 call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10fa135du);
  /* 10fa135d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa135f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1362 mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1368 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa136b push edx */
  push32((uint32_t)(EDX));
  /* 10fa136c call 0x10f985a0 */
  push32(0x10fa1371u); f_10f985a0();
  /* 10fa1371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1377 mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa137d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10fa1384:;
  /* 10fa1384 jmp 0x10fa12e0 */
  goto L_10fa12e0;
L_10fa1389:;
  /* 10fa1389 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa138b call 0x10f9b5b0 */
  push32(0x10fa1390u); f_10f9b5b0();
  /* 10fa1390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1396 mov esp, ebp */
  ESP = (EBP);
  /* 10fa1398 pop ebp */
  EBP = (pop32());
  /* 10fa1399 ret  */
  ESPCHK(0x10fa12c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x10fa13a0 (68 bytes, 26 insns) */
void f_10fa13a0(void) {
  FTRACE(0x10fa13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa13a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa13a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa13a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa13a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa13a8 jne 0x10fa13b6 */
  if (!C.zf) goto L_10fa13b6;
  /* 10fa13aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa13ac call 0x10fa1510 */
  push32(0x10fa13b1u); f_10fa1510();
  /* 10fa13b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa13b4 jmp 0x10fa13e0 */
  goto L_10fa13e0;
L_10fa13b6:;
  /* 10fa13b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa13b9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa13ba call 0x10fa0920 */
  push32(0x10fa13bfu); f_10fa0920();
  /* 10fa13bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa13c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa13c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa13c6 call 0x10fa13f0 */
  push32(0x10fa13cbu); f_10fa13f0();
  /* 10fa13cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa13ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa13d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa13d4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa13d5 call 0x10fa0990 */
  push32(0x10fa13dau); f_10fa0990();
  /* 10fa13da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa13dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa13e0:;
  /* 10fa13e0 mov esp, ebp */
  ESP = (EBP);
  /* 10fa13e2 pop ebp */
  EBP = (pop32());
  /* 10fa13e3 ret  */
  ESPCHK(0x10fa13a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x10fa13f0 (65 bytes, 26 insns) */
void f_10fa13f0(void) {
  FTRACE(0x10fa13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa13f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa13f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa13f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa13f6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa13f7 call 0x10fa1440 */
  push32(0x10fa13fcu); f_10fa1440();
  /* 10fa13fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa13ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1401 je 0x10fa1408 */
  if (C.zf) goto L_10fa1408;
  /* 10fa1403 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1406 jmp 0x10fa142f */
  goto L_10fa142f;
L_10fa1408:;
  /* 10fa1408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa140b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa140e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa1414 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa1416 je 0x10fa142d */
  if (C.zf) goto L_10fa142d;
  /* 10fa1418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa141b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa141e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa141f call 0x10fa2200 */
  push32(0x10fa1424u); f_10fa2200();
  /* 10fa1424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1427 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa1429 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa142b jmp 0x10fa142f */
  goto L_10fa142f;
L_10fa142d:;
  /* 10fa142d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa142f:;
  /* 10fa142f pop ebp */
  EBP = (pop32());
  /* 10fa1430 ret  */
  ESPCHK(0x10fa13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011440 @ 0x10fa1440 (183 bytes, 62 insns) */
void f_10fa1440(void) {
  FTRACE(0x10fa1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1440 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1441 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa144d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1450 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa1453 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1456 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa1459 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa145c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa145f jne 0x10fa14db */
  if (!C.zf) goto L_10fa14db;
  /* 10fa1461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1464 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa1467 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa146d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa146f je 0x10fa14db */
  if (C.zf) goto L_10fa14db;
  /* 10fa1471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1477 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10fa1479 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa147c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa147f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1483 jle 0x10fa14db */
  if ((C.zf||C.sf!=C.of)) goto L_10fa14db;
  /* 10fa1485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1488 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1489 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa148c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa148f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1493 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10fa1496 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1497 call 0x10fa03b0 */
  push32(0x10fa149cu); f_10fa03b0();
  /* 10fa149c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa149f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa14a2 jne 0x10fa14c5 */
  if (!C.zf) goto L_10fa14c5;
  /* 10fa14a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa14aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa14b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa14b2 je 0x10fa14c3 */
  if (C.zf) goto L_10fa14c3;
  /* 10fa14b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa14ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa14bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10fa14c3:;
  /* 10fa14c3 jmp 0x10fa14db */
  goto L_10fa14db;
L_10fa14c5:;
  /* 10fa14c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa14cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa14ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10fa14d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa14db:;
  /* 10fa14db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fa14e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa14e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa14e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10fa14f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa14f3 mov esp, ebp */
  ESP = (EBP);
  /* 10fa14f5 pop ebp */
  EBP = (pop32());
  /* 10fa14f6 ret  */
  ESPCHK(0x10fa1440u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x10fa1500 (15 bytes, 7 insns) */
void f_10fa1500(void) {
  FTRACE(0x10fa1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1500 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1501 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1503 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa1505 call 0x10fa1510 */
  push32(0x10fa150au); f_10fa1510();
  /* 10fa150a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa150d pop ebp */
  EBP = (pop32());
  /* 10fa150e ret  */
  ESPCHK(0x10fa1500u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x10fa1510 (319 bytes, 94 insns) */
void f_10fa1510(void) {
  FTRACE(0x10fa1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1510 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1511 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1516 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa151d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa1524 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1526 call 0x10f9b510 */
  push32(0x10fa152bu); f_10f9b510();
  /* 10fa152b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa152e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa1535 jmp 0x10fa1540 */
  goto L_10fa1540;
L_10fa1537:;
  /* 10fa1537 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa153d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fa1540:;
  /* 10fa1540 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1543 cmp ecx, dword ptr [0x10fc4de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc4de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1549 jge 0x10fa1633 */
  if ((C.sf==C.of)) goto L_10fa1633;
  /* 10fa154f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1552 mov eax, dword ptr [0x10fc3a90] */
  EAX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1557 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa155b je 0x10fa162e */
  if (C.zf) goto L_10fa162e;
  /* 10fa1561 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1564 mov edx, dword ptr [0x10fc3a90] */
  EDX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa156a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fa156d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa1570 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa1576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa1578 je 0x10fa162e */
  if (C.zf) goto L_10fa162e;
  /* 10fa157e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1581 mov eax, dword ptr [0x10fc3a90] */
  EAX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa1586 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa1589 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa158a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa158d push edx */
  push32((uint32_t)(EDX));
  /* 10fa158e call 0x10fa0960 */
  push32(0x10fa1593u); f_10fa0960();
  /* 10fa1593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1596 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1599 mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa159f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa15a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fa15a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa15aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa15ac je 0x10fa1615 */
  if (C.zf) goto L_10fa1615;
  /* 10fa15ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa15b2 jne 0x10fa15d9 */
  if (!C.zf) goto L_10fa15d9;
  /* 10fa15b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa15b7 mov edx, dword ptr [0x10fc3a90] */
  EDX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa15bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10fa15c0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa15c1 call 0x10fa13f0 */
  push32(0x10fa15c6u); f_10fa13f0();
  /* 10fa15c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa15c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa15cc je 0x10fa15d7 */
  if (C.zf) goto L_10fa15d7;
  /* 10fa15ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa15d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa15d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa15d7:;
  /* 10fa15d7 jmp 0x10fa1615 */
  goto L_10fa1615;
L_10fa15d9:;
  /* 10fa15d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa15dd jne 0x10fa1615 */
  if (!C.zf) goto L_10fa1615;
  /* 10fa15df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa15e2 mov eax, dword ptr [0x10fc3a90] */
  EAX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa15e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa15ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa15ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa15f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa15f2 je 0x10fa1615 */
  if (C.zf) goto L_10fa1615;
  /* 10fa15f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa15f7 mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa15fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa1600 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1601 call 0x10fa13f0 */
  push32(0x10fa1606u); f_10fa13f0();
  /* 10fa1606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1609 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa160c jne 0x10fa1615 */
  if (!C.zf) goto L_10fa1615;
  /* 10fa160e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10fa1615:;
  /* 10fa1615 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1618 mov ecx, dword ptr [0x10fc3a90] */
  ECX = (r32((uint32_t)(0x10fc3a90)));
  /* 10fa161e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10fa1621 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1622 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1625 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1626 call 0x10fa09d0 */
  push32(0x10fa162bu); f_10fa09d0();
  /* 10fa162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa162e:;
  /* 10fa162e jmp 0x10fa1537 */
  goto L_10fa1537;
L_10fa1633:;
  /* 10fa1633 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1635 call 0x10f9b5b0 */
  push32(0x10fa163au); f_10f9b5b0();
  /* 10fa163a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa163d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1641 jne 0x10fa1648 */
  if (!C.zf) goto L_10fa1648;
  /* 10fa1643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1646 jmp 0x10fa164b */
  goto L_10fa164b;
L_10fa1648:;
  /* 10fa1648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa164b:;
  /* 10fa164b mov esp, ebp */
  ESP = (EBP);
  /* 10fa164d pop ebp */
  EBP = (pop32());
  /* 10fa164e ret  */
  ESPCHK(0x10fa1510u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10fa1650 (15 bytes, 7 insns) */
void f_10fa1650(void) {
  FTRACE(0x10fa1650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1650 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1651 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1653 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1655 call 0x10f96a80 */
  push32(0x10fa165au); f_10f96a80();
  /* 10fa165a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa165d pop ebp */
  EBP = (pop32());
  /* 10fa165e ret  */
  ESPCHK(0x10fa1650u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x10fa1660 (1007 bytes, 269 insns) */
void f_10fa1660(void) {
  FTRACE(0x10fa1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1660 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1661 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1663 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1669 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa166d jl 0x10fa1675 */
  if ((C.sf!=C.of)) goto L_10fa1675;
  /* 10fa166f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1673 jle 0x10fa167c */
  if ((C.zf||C.sf!=C.of)) goto L_10fa167c;
L_10fa1675:;
  /* 10fa1675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1677 jmp 0x10fa1a4b */
  goto L_10fa1a4b;
L_10fa167c:;
  /* 10fa167c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa167e call 0x10f9b510 */
  push32(0x10fa1683u); f_10f9b510();
  /* 10fa1683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1686 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa168d mov eax, dword ptr [0x10fc3a7c] */
  EAX = (r32((uint32_t)(0x10fc3a7c)));
  /* 10fa1692 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1695 mov dword ptr [0x10fc3a7c], eax */
  w32((uint32_t)(0x10fc3a7c), (EAX));
L_10fa169a:;
  /* 10fa169a cmp dword ptr [0x10fc3a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa16a1 je 0x10fa16ad */
  if (C.zf) goto L_10fa16ad;
  /* 10fa16a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa16a5 call dword ptr [0x10fc62c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62c0))), 0x10fa16abu);
  /* 10fa16ab jmp 0x10fa169a */
  goto L_10fa169a;
L_10fa16ad:;
  /* 10fa16ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa16b1 je 0x10fa16f1 */
  if (C.zf) goto L_10fa16f1;
  /* 10fa16b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa16b7 je 0x10fa16d1 */
  if (C.zf) goto L_10fa16d1;
  /* 10fa16b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa16bc push ecx */
  push32((uint32_t)(ECX));
  /* 10fa16bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa16c0 push edx */
  push32((uint32_t)(EDX));
  /* 10fa16c1 call 0x10fa1a50 */
  push32(0x10fa16c6u); f_10fa1a50();
  /* 10fa16c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa16c9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10fa16cf jmp 0x10fa16e3 */
  goto L_10fa16e3;
L_10fa16d1:;
  /* 10fa16d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa16d4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa16d7 mov ecx, dword ptr [eax + 0x10fc24dc] */
  ECX = (r32((uint32_t)(EAX + 0x10fc24dc)));
  /* 10fa16dd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10fa16e3:;
  /* 10fa16e3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10fa16e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa16ec jmp 0x10fa1a2b */
  goto L_10fa1a2b;
L_10fa16f1:;
  /* 10fa16f1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10fa16f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa16ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1703 je 0x10fa1a23 */
  if (C.zf) goto L_10fa1a23;
  /* 10fa1709 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa170c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa170f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1712 jne 0x10fa1934 */
  if (!C.zf) goto L_10fa1934;
  /* 10fa1718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa171b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fa171f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1722 jne 0x10fa1934 */
  if (!C.zf) goto L_10fa1934;
  /* 10fa1728 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa172b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10fa172f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1732 jne 0x10fa1934 */
  if (!C.zf) goto L_10fa1934;
  /* 10fa1738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa173b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10fa1741:;
  /* 10fa1741 push 0x10fbf11c */
  push32((uint32_t)(0x10fbf11cu));
  /* 10fa1746 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa174c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa174d call 0x10fa38b0 */
  push32(0x10fa1752u); f_10fa38b0();
  /* 10fa1752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1755 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10fa175b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1762 je 0x10fa178d */
  if (C.zf) goto L_10fa178d;
  /* 10fa1764 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa176a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1770 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10fa1776 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa177d je 0x10fa178d */
  if (C.zf) goto L_10fa178d;
  /* 10fa177f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa1785 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa1788 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa178b jne 0x10fa17b3 */
  if (!C.zf) goto L_10fa17b3;
L_10fa178d:;
  /* 10fa178d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1791 je 0x10fa17ac */
  if (C.zf) goto L_10fa17ac;
  /* 10fa1793 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa1795 call 0x10f9b5b0 */
  push32(0x10fa179au); f_10f9b5b0();
  /* 10fa179a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa179d mov edx, dword ptr [0x10fc3a7c] */
  EDX = (r32((uint32_t)(0x10fc3a7c)));
  /* 10fa17a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa17a6 mov dword ptr [0x10fc3a7c], edx */
  w32((uint32_t)(0x10fc3a7c), (EDX));
L_10fa17ac:;
  /* 10fa17ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa17ae jmp 0x10fa1a4b */
  goto L_10fa1a4b;
L_10fa17b3:;
  /* 10fa17b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10fa17ba jmp 0x10fa17c5 */
  goto L_10fa17c5;
L_10fa17bc:;
  /* 10fa17bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa17bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa17c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10fa17c5:;
  /* 10fa17c5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa17c9 jg 0x10fa1813 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa1813;
  /* 10fa17cb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fa17d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa17d2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa17d8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa17d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa17dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa17df mov ecx, dword ptr [eax + 0x10fc24d8] */
  ECX = (r32((uint32_t)(EAX + 0x10fc24d8)));
  /* 10fa17e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa17e6 call 0x10fa3870 */
  push32(0x10fa17ebu); f_10fa3870();
  /* 10fa17eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa17ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa17f0 jne 0x10fa1811 */
  if (!C.zf) goto L_10fa1811;
  /* 10fa17f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa17f5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa17f8 mov eax, dword ptr [edx + 0x10fc24d8] */
  EAX = (r32((uint32_t)(EDX + 0x10fc24d8)));
  /* 10fa17fe push eax */
  push32((uint32_t)(EAX));
  /* 10fa17ff call 0x10f9a940 */
  push32(0x10fa1804u); f_10f9a940();
  /* 10fa1804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1807 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa180d jne 0x10fa1811 */
  if (!C.zf) goto L_10fa1811;
  /* 10fa180f jmp 0x10fa1813 */
  goto L_10fa1813;
L_10fa1811:;
  /* 10fa1811 jmp 0x10fa17bc */
  goto L_10fa17bc;
L_10fa1813:;
  /* 10fa1813 push 0x10fbf118 */
  push32((uint32_t)(0x10fbf118u));
  /* 10fa1818 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa181e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1821 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10fa1827 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa182d push edx */
  push32((uint32_t)(EDX));
  /* 10fa182e call 0x10fa3830 */
  push32(0x10fa1833u); f_10fa3830();
  /* 10fa1833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1836 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10fa183c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1843 jne 0x10fa1879 */
  if (!C.zf) goto L_10fa1879;
  /* 10fa1845 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa184b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa184e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1851 je 0x10fa1879 */
  if (C.zf) goto L_10fa1879;
  /* 10fa1853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1857 je 0x10fa1872 */
  if (C.zf) goto L_10fa1872;
  /* 10fa1859 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa185b call 0x10f9b5b0 */
  push32(0x10fa1860u); f_10f9b5b0();
  /* 10fa1860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1863 mov edx, dword ptr [0x10fc3a7c] */
  EDX = (r32((uint32_t)(0x10fc3a7c)));
  /* 10fa1869 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa186c mov dword ptr [0x10fc3a7c], edx */
  w32((uint32_t)(0x10fc3a7c), (EDX));
L_10fa1872:;
  /* 10fa1872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1874 jmp 0x10fa1a4b */
  goto L_10fa1a4b;
L_10fa1879:;
  /* 10fa1879 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa187d jg 0x10fa18ca */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa18ca;
  /* 10fa187f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fa1885 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1886 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa188c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa188d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10fa1893 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1894 call 0x10f9b330 */
  push32(0x10fa1899u); f_10f9b330();
  /* 10fa1899 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa189c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10fa18a2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10fa18aa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10fa18b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa18b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa18b4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa18b5 call 0x10fa1a50 */
  push32(0x10fa18bau); f_10fa1a50();
  /* 10fa18ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa18bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa18bf je 0x10fa18ca */
  if (C.zf) goto L_10fa18ca;
  /* 10fa18c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa18c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa18c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fa18ca:;
  /* 10fa18ca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa18d0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa18d6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10fa18dc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa18e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa18e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa18e7 je 0x10fa18f8 */
  if (C.zf) goto L_10fa18f8;
  /* 10fa18e9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa18ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa18f2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10fa18f8:;
  /* 10fa18f8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10fa18fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa1901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1903 jne 0x10fa1741 */
  if (!C.zf) goto L_10fa1741;
  /* 10fa1909 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa190d je 0x10fa191c */
  if (C.zf) goto L_10fa191c;
  /* 10fa190f call 0x10fa1bf0 */
  push32(0x10fa1914u); f_10fa1bf0();
  /* 10fa1914 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10fa191a jmp 0x10fa1926 */
  goto L_10fa1926;
L_10fa191c:;
  /* 10fa191c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10fa1926:;
  /* 10fa1926 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10fa192c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa192f jmp 0x10fa1a21 */
  goto L_10fa1a21;
L_10fa1934:;
  /* 10fa1934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1937 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1938 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa193a push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa193c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10fa1942 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1943 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1946 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1947 call 0x10fa1cf0 */
  push32(0x10fa194cu); f_10fa1cf0();
  /* 10fa194c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa194f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa1952 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1956 je 0x10fa1a21 */
  if (C.zf) goto L_10fa1a21;
  /* 10fa195c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa1963 jmp 0x10fa196e */
  goto L_10fa196e;
L_10fa1965:;
  /* 10fa1965 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa1968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa196b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa196e:;
  /* 10fa196e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1972 jg 0x10fa19d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa19d0;
  /* 10fa1974 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1978 je 0x10fa19ce */
  if (C.zf) goto L_10fa19ce;
  /* 10fa197a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa197d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1980 mov ecx, dword ptr [eax + 0x10fc24dc] */
  ECX = (r32((uint32_t)(EAX + 0x10fc24dc)));
  /* 10fa1986 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1987 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10fa198d push edx */
  push32((uint32_t)(EDX));
  /* 10fa198e call 0x10fa37a0 */
  push32(0x10fa1993u); f_10fa37a0();
  /* 10fa1993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1998 je 0x10fa19c5 */
  if (C.zf) goto L_10fa19c5;
  /* 10fa199a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10fa19a0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa19a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa19a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa19a5 call 0x10fa1a50 */
  push32(0x10fa19aau); f_10fa1a50();
  /* 10fa19aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa19ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa19af je 0x10fa19bc */
  if (C.zf) goto L_10fa19bc;
  /* 10fa19b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa19b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa19b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10fa19ba jmp 0x10fa19c3 */
  goto L_10fa19c3;
L_10fa19bc:;
  /* 10fa19bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10fa19c3:;
  /* 10fa19c3 jmp 0x10fa19ce */
  goto L_10fa19ce;
L_10fa19c5:;
  /* 10fa19c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa19c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa19cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10fa19ce:;
  /* 10fa19ce jmp 0x10fa1965 */
  goto L_10fa1965;
L_10fa19d0:;
  /* 10fa19d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa19d4 je 0x10fa19fb */
  if (C.zf) goto L_10fa19fb;
  /* 10fa19d6 call 0x10fa1bf0 */
  push32(0x10fa19dbu); f_10fa1bf0();
  /* 10fa19db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa19de push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa19e0 mov ecx, dword ptr [0x10fc24dc] */
  ECX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa19e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa19e7 call 0x10f985a0 */
  push32(0x10fa19ecu); f_10f985a0();
  /* 10fa19ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa19ef mov dword ptr [0x10fc24dc], 0 */
  w32((uint32_t)(0x10fc24dc), (0x0u));
  /* 10fa19f9 jmp 0x10fa1a21 */
  goto L_10fa1a21;
L_10fa19fb:;
  /* 10fa19fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa19ff je 0x10fa1a0e */
  if (C.zf) goto L_10fa1a0e;
  /* 10fa1a01 call 0x10fa1bf0 */
  push32(0x10fa1a06u); f_10fa1bf0();
  /* 10fa1a06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10fa1a0c jmp 0x10fa1a18 */
  goto L_10fa1a18;
L_10fa1a0e:;
  /* 10fa1a0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10fa1a18:;
  /* 10fa1a18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10fa1a1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10fa1a21:;
  /* 10fa1a21 jmp 0x10fa1a2b */
  goto L_10fa1a2b;
L_10fa1a23:;
  /* 10fa1a23 call 0x10fa1bf0 */
  push32(0x10fa1a28u); f_10fa1bf0();
  /* 10fa1a28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa1a2b:;
  /* 10fa1a2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1a2f je 0x10fa1a48 */
  if (C.zf) goto L_10fa1a48;
  /* 10fa1a31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10fa1a33 call 0x10f9b5b0 */
  push32(0x10fa1a38u); f_10f9b5b0();
  /* 10fa1a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1a3b mov eax, dword ptr [0x10fc3a7c] */
  EAX = (r32((uint32_t)(0x10fc3a7c)));
  /* 10fa1a40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1a43 mov dword ptr [0x10fc3a7c], eax */
  w32((uint32_t)(0x10fc3a7c), (EAX));
L_10fa1a48:;
  /* 10fa1a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa1a4b:;
  /* 10fa1a4b mov esp, ebp */
  ESP = (EBP);
  /* 10fa1a4d pop ebp */
  EBP = (pop32());
  /* 10fa1a4e ret  */
  ESPCHK(0x10fa1660u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x10fa1a50 (403 bytes, 117 insns) */
void f_10fa1a50(void) {
  FTRACE(0x10fa1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1a51 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1a53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1a5c push eax */
  push32((uint32_t)(EAX));
  /* 10fa1a5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10fa1a63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1a64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10fa1a6a push edx */
  push32((uint32_t)(EDX));
  /* 10fa1a6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10fa1a71 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1a76 call 0x10fa1cf0 */
  push32(0x10fa1a7bu); f_10fa1cf0();
  /* 10fa1a7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1a80 jne 0x10fa1a89 */
  if (!C.zf) goto L_10fa1a89;
  /* 10fa1a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1a84 jmp 0x10fa1bdf */
  goto L_10fa1bdf;
L_10fa1a89:;
  /* 10fa1a89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10fa1a8e push 0x10fbf120 */
  push32((uint32_t)(0x10fbf120u));
  /* 10fa1a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1a95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10fa1a9b push edx */
  push32((uint32_t)(EDX));
  /* 10fa1a9c call 0x10f9a940 */
  push32(0x10fa1aa1u); f_10f9a940();
  /* 10fa1aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1aa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1aa7 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1aa8 call 0x10f97b10 */
  push32(0x10fa1aadu); f_10f97b10();
  /* 10fa1aad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1ab0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa1ab3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1ab7 jne 0x10fa1ac0 */
  if (!C.zf) goto L_10fa1ac0;
  /* 10fa1ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1abb jmp 0x10fa1bdf */
  goto L_10fa1bdf;
L_10fa1ac0:;
  /* 10fa1ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ac3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1ac6 mov ecx, dword ptr [eax + 0x10fc24dc] */
  ECX = (r32((uint32_t)(EAX + 0x10fc24dc)));
  /* 10fa1acc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa1acf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ad2 mov eax, dword ptr [edx*4 + 0x10fc38f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc38f8)));
  /* 10fa1ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa1adc push 6 */
  push32((uint32_t)(0x6u));
  /* 10fa1ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ae1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1ae4 add ecx, 0x10fc3948 */
  { uint32_t _a=(ECX),_b=(0x10fc3948u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1aea push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1aeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10fa1aee push edx */
  push32((uint32_t)(EDX));
  /* 10fa1aef call 0x10f9e3f0 */
  push32(0x10fa1af4u); f_10f9e3f0();
  /* 10fa1af4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1af7 mov eax, dword ptr [0x10fc3910] */
  EAX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa1afc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fa1aff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10fa1b05 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1b06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1b09 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1b0a call 0x10f9aac0 */
  push32(0x10fa1b0fu); f_10f9aac0();
  /* 10fa1b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1b15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1b18 mov dword ptr [ecx + 0x10fc24dc], eax */
  w32((uint32_t)(ECX + 0x10fc24dc), (EAX));
  /* 10fa1b1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10fa1b24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa1b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1b2d mov dword ptr [eax*4 + 0x10fc38f8], edx */
  w32((uint32_t)(EAX*4 + 0x10fc38f8), (EDX));
  /* 10fa1b34 push 6 */
  push32((uint32_t)(0x6u));
  /* 10fa1b36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10fa1b3c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1b40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1b43 add edx, 0x10fc3948 */
  { uint32_t _a=(EDX),_b=(0x10fc3948u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1b49 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1b4a call 0x10f9e3f0 */
  push32(0x10fa1b4fu); f_10f9e3f0();
  /* 10fa1b4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1b52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1b56 jne 0x10fa1b63 */
  if (!C.zf) goto L_10fa1b63;
  /* 10fa1b58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa1b5e mov dword ptr [0x10fc3910], eax */
  w32((uint32_t)(0x10fc3910), (EAX));
L_10fa1b63:;
  /* 10fa1b63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1b67 jne 0x10fa1b75 */
  if (!C.zf) goto L_10fa1b75;
  /* 10fa1b69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10fa1b6f mov dword ptr [0x10fc3914], ecx */
  w32((uint32_t)(0x10fc3914), (ECX));
L_10fa1b75:;
  /* 10fa1b75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1b78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1b7b call dword ptr [edx + 0x10fc24e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10fc24e0))), 0x10fa1b81u);
  /* 10fa1b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1b83 je 0x10fa1bbc */
  if (C.zf) goto L_10fa1bbc;
  /* 10fa1b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1b88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1b8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1b8e mov dword ptr [eax + 0x10fc24dc], ecx */
  w32((uint32_t)(EAX + 0x10fc24dc), (ECX));
  /* 10fa1b94 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1b96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1b99 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1b9a call 0x10f985a0 */
  push32(0x10fa1b9fu); f_10f985a0();
  /* 10fa1b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1ba8 mov dword ptr [eax*4 + 0x10fc38f8], ecx */
  w32((uint32_t)(EAX*4 + 0x10fc38f8), (ECX));
  /* 10fa1baf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa1bb2 mov dword ptr [0x10fc3910], edx */
  w32((uint32_t)(0x10fc3910), (EDX));
  /* 10fa1bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1bba jmp 0x10fa1bdf */
  goto L_10fa1bdf;
L_10fa1bbc:;
  /* 10fa1bbc cmp dword ptr [ebp - 0xc], 0x10fc23c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10fc23c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1bc3 je 0x10fa1bd3 */
  if (C.zf) goto L_10fa1bd3;
  /* 10fa1bc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1bca push eax */
  push32((uint32_t)(EAX));
  /* 10fa1bcb call 0x10f985a0 */
  push32(0x10fa1bd0u); f_10f985a0();
  /* 10fa1bd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa1bd3:;
  /* 10fa1bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1bd6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1bd9 mov eax, dword ptr [ecx + 0x10fc24dc] */
  EAX = (r32((uint32_t)(ECX + 0x10fc24dc)));
L_10fa1bdf:;
  /* 10fa1bdf mov esp, ebp */
  ESP = (EBP);
  /* 10fa1be1 pop ebp */
  EBP = (pop32());
  /* 10fa1be2 ret  */
  ESPCHK(0x10fa1a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bf0 @ 0x10fa1bf0 (256 bytes, 72 insns) */
void f_10fa1bf0(void) {
  FTRACE(0x10fa1bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1bf6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fa1bfd cmp dword ptr [0x10fc24dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc24dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1c04 jne 0x10fa1c24 */
  if (!C.zf) goto L_10fa1c24;
  /* 10fa1c06 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10fa1c0b push 0x10fbf120 */
  push32((uint32_t)(0x10fbf120u));
  /* 10fa1c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1c12 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10fa1c17 call 0x10f97b10 */
  push32(0x10fa1c1cu); f_10f97b10();
  /* 10fa1c1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1c1f mov dword ptr [0x10fc24dc], eax */
  w32((uint32_t)(0x10fc24dc), (EAX));
L_10fa1c24:;
  /* 10fa1c24 mov eax, dword ptr [0x10fc24dc] */
  EAX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa1c29 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fa1c2c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10fa1c33 jmp 0x10fa1c3e */
  goto L_10fa1c3e;
L_10fa1c35:;
  /* 10fa1c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1c38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1c3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10fa1c3e:;
  /* 10fa1c3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1c41 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1c44 mov eax, dword ptr [edx + 0x10fc24dc] */
  EAX = (r32((uint32_t)(EDX + 0x10fc24dc)));
  /* 10fa1c4a push eax */
  push32((uint32_t)(EAX));
  /* 10fa1c4b push 0x10fbf12c */
  push32((uint32_t)(0x10fbf12cu));
  /* 10fa1c50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1c53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1c56 mov edx, dword ptr [ecx + 0x10fc24d8] */
  EDX = (r32((uint32_t)(ECX + 0x10fc24d8)));
  /* 10fa1c5c push edx */
  push32((uint32_t)(EDX));
  /* 10fa1c5d push 3 */
  push32((uint32_t)(0x3u));
  /* 10fa1c5f mov eax, dword ptr [0x10fc24dc] */
  EAX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa1c64 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1c65 call 0x10fa1e90 */
  push32(0x10fa1c6au); f_10fa1e90();
  /* 10fa1c6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1c6d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1c71 jge 0x10fa1cb9 */
  if ((C.sf==C.of)) goto L_10fa1cb9;
  /* 10fa1c73 push 0x10fbf118 */
  push32((uint32_t)(0x10fbf118u));
  /* 10fa1c78 mov ecx, dword ptr [0x10fc24dc] */
  ECX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa1c7e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1c7f call 0x10f9aad0 */
  push32(0x10fa1c84u); f_10f9aad0();
  /* 10fa1c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1c8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1c8d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1c90 mov eax, dword ptr [edx + 0x10fc24dc] */
  EAX = (r32((uint32_t)(EDX + 0x10fc24dc)));
  /* 10fa1c96 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1c97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1c9a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa1c9d mov edx, dword ptr [ecx + 0x10fc24dc] */
  EDX = (r32((uint32_t)(ECX + 0x10fc24dc)));
  /* 10fa1ca3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1ca4 call 0x10fa37a0 */
  push32(0x10fa1ca9u); f_10fa37a0();
  /* 10fa1ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1cae je 0x10fa1cb7 */
  if (C.zf) goto L_10fa1cb7;
  /* 10fa1cb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fa1cb7:;
  /* 10fa1cb7 jmp 0x10fa1ce7 */
  goto L_10fa1ce7;
L_10fa1cb9:;
  /* 10fa1cb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1cbd jne 0x10fa1cc6 */
  if (!C.zf) goto L_10fa1cc6;
  /* 10fa1cbf mov eax, dword ptr [0x10fc24dc] */
  EAX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa1cc4 jmp 0x10fa1cec */
  goto L_10fa1cec;
L_10fa1cc6:;
  /* 10fa1cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa1cc8 mov eax, dword ptr [0x10fc24dc] */
  EAX = (r32((uint32_t)(0x10fc24dc)));
  /* 10fa1ccd push eax */
  push32((uint32_t)(EAX));
  /* 10fa1cce call 0x10f985a0 */
  push32(0x10fa1cd3u); f_10f985a0();
  /* 10fa1cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1cd6 mov dword ptr [0x10fc24dc], 0 */
  w32((uint32_t)(0x10fc24dc), (0x0u));
  /* 10fa1ce0 mov eax, dword ptr [0x10fc24f4] */
  EAX = (r32((uint32_t)(0x10fc24f4)));
  /* 10fa1ce5 jmp 0x10fa1cec */
  goto L_10fa1cec;
L_10fa1ce7:;
  /* 10fa1ce7 jmp 0x10fa1c35 */
  goto L_10fa1c35;
L_10fa1cec:;
  /* 10fa1cec mov esp, ebp */
  ESP = (EBP);
  /* 10fa1cee pop ebp */
  EBP = (pop32());
  /* 10fa1cef ret  */
  ESPCHK(0x10fa1bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x10fa1cf0 (388 bytes, 115 insns) */
void f_10fa1cf0(void) {
  FTRACE(0x10fa1cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1cf3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1cfd jne 0x10fa1d06 */
  if (!C.zf) goto L_10fa1d06;
  /* 10fa1cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1d01 jmp 0x10fa1e70 */
  goto L_10fa1e70;
L_10fa1d06:;
  /* 10fa1d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1d09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa1d0c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1d0f jne 0x10fa1d60 */
  if (!C.zf) goto L_10fa1d60;
  /* 10fa1d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1d14 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fa1d18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1d1a jne 0x10fa1d60 */
  if (!C.zf) goto L_10fa1d60;
  /* 10fa1d1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1d1f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10fa1d22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1d25 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10fa1d29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1d2d je 0x10fa1d49 */
  if (C.zf) goto L_10fa1d49;
  /* 10fa1d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa1d32 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10fa1d37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa1d3a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10fa1d40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa1d43 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10fa1d49:;
  /* 10fa1d49 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1d4d je 0x10fa1d58 */
  if (C.zf) goto L_10fa1d58;
  /* 10fa1d4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa1d52 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10fa1d58:;
  /* 10fa1d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1d5b jmp 0x10fa1e70 */
  goto L_10fa1e70;
L_10fa1d60:;
  /* 10fa1d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1d64 push 0x10fc2450 */
  push32((uint32_t)(0x10fc2450u));
  /* 10fa1d69 call 0x10fa37a0 */
  push32(0x10fa1d6eu); f_10fa37a0();
  /* 10fa1d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1d73 je 0x10fa1e28 */
  if (C.zf) goto L_10fa1e28;
  /* 10fa1d79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1d7c push edx */
  push32((uint32_t)(EDX));
  /* 10fa1d7d push 0x10fc23cc */
  push32((uint32_t)(0x10fc23ccu));
  /* 10fa1d82 call 0x10fa37a0 */
  push32(0x10fa1d87u); f_10fa37a0();
  /* 10fa1d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1d8c je 0x10fa1e28 */
  if (C.zf) goto L_10fa1e28;
  /* 10fa1d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1d95 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1d96 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10fa1d9c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1d9d call 0x10fa1ee0 */
  push32(0x10fa1da2u); f_10fa1ee0();
  /* 10fa1da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1da7 je 0x10fa1db0 */
  if (C.zf) goto L_10fa1db0;
  /* 10fa1da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1dab jmp 0x10fa1e70 */
  goto L_10fa1e70;
L_10fa1db0:;
  /* 10fa1db0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10fa1db6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1db7 push 0x10fc3920 */
  push32((uint32_t)(0x10fc3920u));
  /* 10fa1dbc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10fa1dc2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1dc3 call 0x10fa38f0 */
  push32(0x10fa1dc8u); f_10fa38f0();
  /* 10fa1dc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1dcd jne 0x10fa1dd6 */
  if (!C.zf) goto L_10fa1dd6;
  /* 10fa1dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1dd1 jmp 0x10fa1e70 */
  goto L_10fa1e70;
L_10fa1dd6:;
  /* 10fa1dd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa1dd8 mov cx, word ptr [0x10fc3924] */
  CX = (r16((uint32_t)(0x10fc3924)));
  /* 10fa1ddf mov dword ptr [0x10fc3928], ecx */
  w32((uint32_t)(0x10fc3928), (ECX));
  /* 10fa1de5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10fa1deb push edx */
  push32((uint32_t)(EDX));
  /* 10fa1dec push 0x10fc2450 */
  push32((uint32_t)(0x10fc2450u));
  /* 10fa1df1 call 0x10fa2040 */
  push32(0x10fa1df6u); f_10fa2040();
  /* 10fa1df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1dfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa1dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa1e01 je 0x10fa1e16 */
  if (C.zf) goto L_10fa1e16;
  /* 10fa1e03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1e06 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1e07 push 0x10fc23cc */
  push32((uint32_t)(0x10fc23ccu));
  /* 10fa1e0c call 0x10f9aac0 */
  push32(0x10fa1e11u); f_10f9aac0();
  /* 10fa1e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1e14 jmp 0x10fa1e28 */
  goto L_10fa1e28;
L_10fa1e16:;
  /* 10fa1e16 push 0x10fc2450 */
  push32((uint32_t)(0x10fc2450u));
  /* 10fa1e1b push 0x10fc23cc */
  push32((uint32_t)(0x10fc23ccu));
  /* 10fa1e20 call 0x10f9aac0 */
  push32(0x10fa1e25u); f_10f9aac0();
  /* 10fa1e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa1e28:;
  /* 10fa1e28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1e2c je 0x10fa1e41 */
  if (C.zf) goto L_10fa1e41;
  /* 10fa1e2e push 6 */
  push32((uint32_t)(0x6u));
  /* 10fa1e30 push 0x10fc3920 */
  push32((uint32_t)(0x10fc3920u));
  /* 10fa1e35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa1e38 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1e39 call 0x10f9e3f0 */
  push32(0x10fa1e3eu); f_10f9e3f0();
  /* 10fa1e3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa1e41:;
  /* 10fa1e41 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1e45 je 0x10fa1e5a */
  if (C.zf) goto L_10fa1e5a;
  /* 10fa1e47 push 4 */
  push32((uint32_t)(0x4u));
  /* 10fa1e49 push 0x10fc3928 */
  push32((uint32_t)(0x10fc3928u));
  /* 10fa1e4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa1e51 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1e52 call 0x10f9e3f0 */
  push32(0x10fa1e57u); f_10f9e3f0();
  /* 10fa1e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa1e5a:;
  /* 10fa1e5a push 0x10fc2450 */
  push32((uint32_t)(0x10fc2450u));
  /* 10fa1e5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1e62 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1e63 call 0x10f9aac0 */
  push32(0x10fa1e68u); f_10f9aac0();
  /* 10fa1e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1e6b mov eax, 0x10fc2450 */
  EAX = (0x10fc2450u);
L_10fa1e70:;
  /* 10fa1e70 mov esp, ebp */
  ESP = (EBP);
  /* 10fa1e72 pop ebp */
  EBP = (pop32());
  /* 10fa1e73 ret  */
  ESPCHK(0x10fa1cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x10fa1e80 (7 bytes, 5 insns) */
void f_10fa1e80(void) {
  FTRACE(0x10fa1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1e81 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1e85 pop ebp */
  EBP = (pop32());
  /* 10fa1e86 ret  */
  ESPCHK(0x10fa1e80u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10fa1e90 (79 bytes, 28 insns) */
void f_10fa1e90(void) {
  FTRACE(0x10fa1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1e91 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1e96 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10fa1e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa1e9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa1ea3 jmp 0x10fa1eae */
  goto L_10fa1eae;
L_10fa1ea5:;
  /* 10fa1ea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1ea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1eab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fa1eae:;
  /* 10fa1eae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa1eb1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1eb4 jge 0x10fa1ed4 */
  if ((C.sf==C.of)) goto L_10fa1ed4;
  /* 10fa1eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1eb9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1ebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa1ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1ec2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10fa1ec5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1eca call 0x10f9aad0 */
  push32(0x10fa1ecfu); f_10f9aad0();
  /* 10fa1ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1ed2 jmp 0x10fa1ea5 */
  goto L_10fa1ea5;
L_10fa1ed4:;
  /* 10fa1ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa1edb mov esp, ebp */
  ESP = (EBP);
  /* 10fa1edd pop ebp */
  EBP = (pop32());
  /* 10fa1ede ret  */
  ESPCHK(0x10fa1e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ee0 @ 0x10fa1ee0 (349 bytes, 122 insns) */
void f_10fa1ee0(void) {
  FTRACE(0x10fa1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa1ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa1ee6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10fa1eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa1eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ef0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1ef1 call 0x10f9b880 */
  push32(0x10fa1ef6u); f_10f9b880();
  /* 10fa1ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1ef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1efc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa1eff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa1f01 jne 0x10fa1f0a */
  if (!C.zf) goto L_10fa1f0a;
  /* 10fa1f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1f05 jmp 0x10fa2039 */
  goto L_10fa2039;
L_10fa1f0a:;
  /* 10fa1f0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa1f10 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1f13 jne 0x10fa1f40 */
  if (!C.zf) goto L_10fa1f40;
  /* 10fa1f15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f18 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10fa1f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1f1e je 0x10fa1f40 */
  if (C.zf) goto L_10fa1f40;
  /* 10fa1f20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f26 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1f27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1f2a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f30 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1f31 call 0x10f9aac0 */
  push32(0x10fa1f36u); f_10f9aac0();
  /* 10fa1f36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1f3b jmp 0x10fa2039 */
  goto L_10fa2039;
L_10fa1f40:;
  /* 10fa1f40 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa1f47 jmp 0x10fa1f52 */
  goto L_10fa1f52;
L_10fa1f49:;
  /* 10fa1f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa1f4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa1f52:;
  /* 10fa1f52 push 0x10fbf130 */
  push32((uint32_t)(0x10fbf130u));
  /* 10fa1f57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1f5b call 0x10fa3830 */
  push32(0x10fa1f60u); f_10fa3830();
  /* 10fa1f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f63 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa1f66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1f6a jne 0x10fa1f74 */
  if (!C.zf) goto L_10fa1f74;
  /* 10fa1f6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa1f6f jmp 0x10fa2039 */
  goto L_10fa2039;
L_10fa1f74:;
  /* 10fa1f74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f77 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1f7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa1f7c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10fa1f7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1f83 jne 0x10fa1faa */
  if (!C.zf) goto L_10fa1faa;
  /* 10fa1f85 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1f89 jge 0x10fa1faa */
  if ((C.sf==C.of)) goto L_10fa1faa;
  /* 10fa1f8b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa1f8f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1f92 je 0x10fa1faa */
  if (C.zf) goto L_10fa1faa;
  /* 10fa1f94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1f97 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1f98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1f9b push eax */
  push32((uint32_t)(EAX));
  /* 10fa1f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1f9f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1fa0 call 0x10f9b330 */
  push32(0x10fa1fa5u); f_10f9b330();
  /* 10fa1fa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1fa8 jmp 0x10fa2010 */
  goto L_10fa2010;
L_10fa1faa:;
  /* 10fa1faa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1fae jne 0x10fa1fd8 */
  if (!C.zf) goto L_10fa1fd8;
  /* 10fa1fb0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1fb4 jge 0x10fa1fd8 */
  if ((C.sf==C.of)) goto L_10fa1fd8;
  /* 10fa1fb6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa1fba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1fbd je 0x10fa1fd8 */
  if (C.zf) goto L_10fa1fd8;
  /* 10fa1fbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1fc2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa1fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1fca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1fcd push edx */
  push32((uint32_t)(EDX));
  /* 10fa1fce call 0x10f9b330 */
  push32(0x10fa1fd3u); f_10f9b330();
  /* 10fa1fd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa1fd6 jmp 0x10fa2010 */
  goto L_10fa2010;
L_10fa1fd8:;
  /* 10fa1fd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1fdc jne 0x10fa200b */
  if (!C.zf) goto L_10fa200b;
  /* 10fa1fde movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa1fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa1fe4 je 0x10fa1fef */
  if (C.zf) goto L_10fa1fef;
  /* 10fa1fe6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa1fea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa1fed jne 0x10fa200b */
  if (!C.zf) goto L_10fa200b;
L_10fa1fef:;
  /* 10fa1fef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa1ff2 push edx */
  push32((uint32_t)(EDX));
  /* 10fa1ff3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa1ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa1ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa1ffa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2000 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2001 call 0x10f9b330 */
  push32(0x10fa2006u); f_10f9b330();
  /* 10fa2006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2009 jmp 0x10fa2010 */
  goto L_10fa2010;
L_10fa200b:;
  /* 10fa200b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa200e jmp 0x10fa2039 */
  goto L_10fa2039;
L_10fa2010:;
  /* 10fa2010 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa2014 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2017 jne 0x10fa201b */
  if (!C.zf) goto L_10fa201b;
  /* 10fa2019 jmp 0x10fa2037 */
  goto L_10fa2037;
L_10fa201b:;
  /* 10fa201b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa2021 jne 0x10fa2025 */
  if (!C.zf) goto L_10fa2025;
  /* 10fa2023 jmp 0x10fa2037 */
  goto L_10fa2037;
L_10fa2025:;
  /* 10fa2025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2028 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa202b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10fa202f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10fa2032 jmp 0x10fa1f49 */
  goto L_10fa1f49;
L_10fa2037:;
  /* 10fa2037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa2039:;
  /* 10fa2039 mov esp, ebp */
  ESP = (EBP);
  /* 10fa203b pop ebp */
  EBP = (pop32());
  /* 10fa203c ret  */
  ESPCHK(0x10fa1ee0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10fa2040 (101 bytes, 36 insns) */
void f_10fa2040(void) {
  FTRACE(0x10fa2040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2040 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2041 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa2046 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa204a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa204b call 0x10f9aac0 */
  push32(0x10fa2050u); f_10f9aac0();
  /* 10fa2050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa2056 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10fa205a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa205c je 0x10fa2078 */
  if (C.zf) goto L_10fa2078;
  /* 10fa205e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa2061 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2064 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2065 push 0x10fbf138 */
  push32((uint32_t)(0x10fbf138u));
  /* 10fa206a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa206c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa206f push edx */
  push32((uint32_t)(EDX));
  /* 10fa2070 call 0x10fa1e90 */
  push32(0x10fa2075u); f_10fa1e90();
  /* 10fa2075 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa2078:;
  /* 10fa2078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa207b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10fa2082 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa2084 je 0x10fa20a3 */
  if (C.zf) goto L_10fa20a3;
  /* 10fa2086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa2089 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa208f push edx */
  push32((uint32_t)(EDX));
  /* 10fa2090 push 0x10fbf134 */
  push32((uint32_t)(0x10fbf134u));
  /* 10fa2095 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa209a push eax */
  push32((uint32_t)(EAX));
  /* 10fa209b call 0x10fa1e90 */
  push32(0x10fa20a0u); f_10fa1e90();
  /* 10fa20a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa20a3:;
  /* 10fa20a3 pop ebp */
  EBP = (pop32());
  /* 10fa20a4 ret  */
  ESPCHK(0x10fa2040u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x10fa20b0 (130 bytes, 50 insns) */
void f_10fa20b0(void) {
  FTRACE(0x10fa20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa20b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa20b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa20b5 push esi */
  push32((uint32_t)(ESI));
  /* 10fa20b6 push edi */
  push32((uint32_t)(EDI));
  /* 10fa20b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa20be:;
  /* 10fa20be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa20c2 jne 0x10fa20e2 */
  if (!C.zf) goto L_10fa20e2;
  /* 10fa20c4 push 0x10fbf148 */
  push32((uint32_t)(0x10fbf148u));
  /* 10fa20c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa20cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10fa20cd push 0x10fbf13c */
  push32((uint32_t)(0x10fbf13cu));
  /* 10fa20d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa20d4 call 0x10f96bd0 */
  push32(0x10fa20d9u); f_10f96bd0();
  /* 10fa20d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa20dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa20df jne 0x10fa20e2 */
  if (!C.zf) goto L_10fa20e2;
  /* 10fa20e1 int3  */
  x86_unimpl("int3 @ 0x10fa20e1");
L_10fa20e2:;
  /* 10fa20e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa20e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa20e6 jne 0x10fa20be */
  if (!C.zf) goto L_10fa20be;
  /* 10fa20e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa20eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa20ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa20f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa20f3 je 0x10fa2101 */
  if (C.zf) goto L_10fa2101;
  /* 10fa20f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa20f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10fa20ff jmp 0x10fa2128 */
  goto L_10fa2128;
L_10fa2101:;
  /* 10fa2101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2104 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2105 call 0x10fa0920 */
  push32(0x10fa210au); f_10fa0920();
  /* 10fa210a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa210d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2110 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2111 call 0x10fa2140 */
  push32(0x10fa2116u); f_10fa2140();
  /* 10fa2116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa211c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa211f push eax */
  push32((uint32_t)(EAX));
  /* 10fa2120 call 0x10fa0990 */
  push32(0x10fa2125u); f_10fa0990();
  /* 10fa2125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa2128:;
  /* 10fa2128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa212b pop edi */
  EDI = (pop32());
  /* 10fa212c pop esi */
  ESI = (pop32());
  /* 10fa212d pop ebx */
  EBX = (pop32());
  /* 10fa212e mov esp, ebp */
  ESP = (EBP);
  /* 10fa2130 pop ebp */
  EBP = (pop32());
  /* 10fa2131 ret  */
  ESPCHK(0x10fa20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x10fa2140 (190 bytes, 67 insns) */
void f_10fa2140(void) {
  FTRACE(0x10fa2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2140 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2141 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa2146 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa2147 push esi */
  push32((uint32_t)(ESI));
  /* 10fa2148 push edi */
  push32((uint32_t)(EDI));
  /* 10fa2149 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa2150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2153 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa2156:;
  /* 10fa2156 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa215a jne 0x10fa217a */
  if (!C.zf) goto L_10fa217a;
  /* 10fa215c push 0x10fbefec */
  push32((uint32_t)(0x10fbefecu));
  /* 10fa2161 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa2163 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10fa2165 push 0x10fbf13c */
  push32((uint32_t)(0x10fbf13cu));
  /* 10fa216a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa216c call 0x10f96bd0 */
  push32(0x10fa2171u); f_10f96bd0();
  /* 10fa2171 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2174 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2177 jne 0x10fa217a */
  if (!C.zf) goto L_10fa217a;
  /* 10fa2179 int3  */
  x86_unimpl("int3 @ 0x10fa2179");
L_10fa217a:;
  /* 10fa217a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa217c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa217e jne 0x10fa2156 */
  if (!C.zf) goto L_10fa2156;
  /* 10fa2180 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2183 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10fa2186 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa218d je 0x10fa21ea */
  if (C.zf) goto L_10fa21ea;
  /* 10fa218f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2192 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2193 call 0x10fa1440 */
  push32(0x10fa2198u); f_10fa1440();
  /* 10fa2198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa219b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa219e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21a1 push edx */
  push32((uint32_t)(EDX));
  /* 10fa21a2 call 0x10fa47c0 */
  push32(0x10fa21a7u); f_10fa47c0();
  /* 10fa21a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa21aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa21b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa21b1 call 0x10fa4690 */
  push32(0x10fa21b6u); f_10fa4690();
  /* 10fa21b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa21b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa21bb jge 0x10fa21c6 */
  if ((C.sf==C.of)) goto L_10fa21c6;
  /* 10fa21bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10fa21c4 jmp 0x10fa21ea */
  goto L_10fa21ea;
L_10fa21c6:;
  /* 10fa21c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa21cd je 0x10fa21ea */
  if (C.zf) goto L_10fa21ea;
  /* 10fa21cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa21d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa21d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa21d8 call 0x10f985a0 */
  push32(0x10fa21ddu); f_10f985a0();
  /* 10fa21dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa21e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10fa21ea:;
  /* 10fa21ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa21ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10fa21f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa21f7 pop edi */
  EDI = (pop32());
  /* 10fa21f8 pop esi */
  ESI = (pop32());
  /* 10fa21f9 pop ebx */
  EBX = (pop32());
  /* 10fa21fa mov esp, ebp */
  ESP = (EBP);
  /* 10fa21fc pop ebp */
  EBP = (pop32());
  /* 10fa21fd ret  */
  ESPCHK(0x10fa2140u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x10fa2200 (210 bytes, 63 insns) */
void f_10fa2200(void) {
  FTRACE(0x10fa2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2200 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2201 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2203 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2207 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa220d jae 0x10fa2231 */
  if (!C.cf) goto L_10fa2231;
  /* 10fa220f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2212 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa2215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2218 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa221b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa221e mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa2225 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa222a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa222d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa222f jne 0x10fa2244 */
  if (!C.zf) goto L_10fa2244;
L_10fa2231:;
  /* 10fa2231 call 0x10f9f9e0 */
  push32(0x10fa2236u); f_10f9f9e0();
  /* 10fa2236 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa223c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa223f jmp 0x10fa22ce */
  goto L_10fa22ce;
L_10fa2244:;
  /* 10fa2244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2247 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2248 call 0x10fa1200 */
  push32(0x10fa224du); f_10fa1200();
  /* 10fa224d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2253 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa2256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2259 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa225c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa225f mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa2266 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10fa226b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa226e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa2270 je 0x10fa22ad */
  if (C.zf) goto L_10fa22ad;
  /* 10fa2272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2275 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2276 call 0x10fa1080 */
  push32(0x10fa227bu); f_10fa1080();
  /* 10fa227b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa227e push eax */
  push32((uint32_t)(EAX));
  /* 10fa227f call dword ptr [0x10fc62bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62bc))), 0x10fa2285u);
  /* 10fa2285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa2287 jne 0x10fa2294 */
  if (!C.zf) goto L_10fa2294;
  /* 10fa2289 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa228fu);
  /* 10fa228f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa2292 jmp 0x10fa229b */
  goto L_10fa229b;
L_10fa2294:;
  /* 10fa2294 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fa229b:;
  /* 10fa229b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa229f jne 0x10fa22a3 */
  if (!C.zf) goto L_10fa22a3;
  /* 10fa22a1 jmp 0x10fa22bf */
  goto L_10fa22bf;
L_10fa22a3:;
  /* 10fa22a3 call 0x10f9f9f0 */
  push32(0x10fa22a8u); f_10f9f9f0();
  /* 10fa22a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa22ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10fa22ad:;
  /* 10fa22ad call 0x10f9f9e0 */
  push32(0x10fa22b2u); f_10f9f9e0();
  /* 10fa22b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa22b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10fa22bf:;
  /* 10fa22bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa22c2 push eax */
  push32((uint32_t)(EAX));
  /* 10fa22c3 call 0x10fa1290 */
  push32(0x10fa22c8u); f_10fa1290();
  /* 10fa22c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa22cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa22ce:;
  /* 10fa22ce mov esp, ebp */
  ESP = (EBP);
  /* 10fa22d0 pop ebp */
  EBP = (pop32());
  /* 10fa22d1 ret  */
  ESPCHK(0x10fa2200u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10fa22e0 (219 bytes, 64 insns) */
void f_10fa22e0(void) {
  FTRACE(0x10fa22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa22e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa22e4 cmp dword ptr [0x10fc390c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc390c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa22eb je 0x10fa2381 */
  if (C.zf) goto L_10fa2381;
  /* 10fa22f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10fa22f3 push 0x10fbf158 */
  push32((uint32_t)(0x10fbf158u));
  /* 10fa22f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa22fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 10fa22ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2301 call 0x10f97f20 */
  push32(0x10fa2306u); f_10f97f20();
  /* 10fa2306 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa230c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2310 jne 0x10fa231c */
  if (!C.zf) goto L_10fa231c;
  /* 10fa2312 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa2317 jmp 0x10fa23b7 */
  goto L_10fa23b7;
L_10fa231c:;
  /* 10fa231c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa231f push eax */
  push32((uint32_t)(EAX));
  /* 10fa2320 call 0x10fa23c0 */
  push32(0x10fa2325u); f_10fa23c0();
  /* 10fa2325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa232a je 0x10fa234d */
  if (C.zf) goto L_10fa234d;
  /* 10fa232c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa232f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2330 call 0x10fa2950 */
  push32(0x10fa2335u); f_10fa2950();
  /* 10fa2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2338 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa233a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa233d push edx */
  push32((uint32_t)(EDX));
  /* 10fa233e call 0x10f985a0 */
  push32(0x10fa2343u); f_10f985a0();
  /* 10fa2343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2346 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa234b jmp 0x10fa23b7 */
  goto L_10fa23b7;
L_10fa234d:;
  /* 10fa234d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2350 mov dword ptr [0x10fc2c98], eax */
  w32((uint32_t)(0x10fc2c98), (EAX));
  /* 10fa2355 mov ecx, dword ptr [0x10fc392c] */
  ECX = (r32((uint32_t)(0x10fc392c)));
  /* 10fa235b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa235c call 0x10fa2950 */
  push32(0x10fa2361u); f_10fa2950();
  /* 10fa2361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2364 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2366 mov edx, dword ptr [0x10fc392c] */
  EDX = (r32((uint32_t)(0x10fc392c)));
  /* 10fa236c push edx */
  push32((uint32_t)(EDX));
  /* 10fa236d call 0x10f985a0 */
  push32(0x10fa2372u); f_10f985a0();
  /* 10fa2372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2378 mov dword ptr [0x10fc392c], eax */
  w32((uint32_t)(0x10fc392c), (EAX));
  /* 10fa237d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa237f jmp 0x10fa23b7 */
  goto L_10fa23b7;
L_10fa2381:;
  /* 10fa2381 mov dword ptr [0x10fc2c98], 0x10fc2ca0 */
  w32((uint32_t)(0x10fc2c98), (0x10fc2ca0u));
  /* 10fa238b mov ecx, dword ptr [0x10fc392c] */
  ECX = (r32((uint32_t)(0x10fc392c)));
  /* 10fa2391 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2392 call 0x10fa2950 */
  push32(0x10fa2397u); f_10fa2950();
  /* 10fa2397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa239a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa239c mov edx, dword ptr [0x10fc392c] */
  EDX = (r32((uint32_t)(0x10fc392c)));
  /* 10fa23a2 push edx */
  push32((uint32_t)(EDX));
  /* 10fa23a3 call 0x10f985a0 */
  push32(0x10fa23a8u); f_10f985a0();
  /* 10fa23a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa23ab mov dword ptr [0x10fc392c], 0 */
  w32((uint32_t)(0x10fc392c), (0x0u));
  /* 10fa23b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa23b7:;
  /* 10fa23b7 mov esp, ebp */
  ESP = (EBP);
  /* 10fa23b9 pop ebp */
  EBP = (pop32());
  /* 10fa23ba ret  */
  ESPCHK(0x10fa22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x10fa23c0 (1423 bytes, 533 insns) */
void f_10fa23c0(void) {
  FTRACE(0x10fa23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa23c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa23c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa23c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa23c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10fa23cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa23cf mov ax, word ptr [0x10fc3966] */
  AX = (r16((uint32_t)(0x10fc3966)));
  /* 10fa23d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa23d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa23da mov cx, word ptr [0x10fc3968] */
  CX = (r16((uint32_t)(0x10fc3968)));
  /* 10fa23e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa23e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa23e8 jne 0x10fa23f2 */
  if (!C.zf) goto L_10fa23f2;
  /* 10fa23ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa23ed jmp 0x10fa294b */
  goto L_10fa294b;
L_10fa23f2:;
  /* 10fa23f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa23f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa23f8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa23f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10fa23fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa23fe push eax */
  push32((uint32_t)(EAX));
  /* 10fa23ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2401 call 0x10fa5cd0 */
  push32(0x10fa2406u); f_10fa5cd0();
  /* 10fa2406 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2409 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa240c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa240e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2414 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2417 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2418 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10fa241a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa241d push eax */
  push32((uint32_t)(EAX));
  /* 10fa241e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2420 call 0x10fa5cd0 */
  push32(0x10fa2425u); f_10fa5cd0();
  /* 10fa2425 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2428 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa242b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa242d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2430 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2433 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2436 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2437 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10fa2439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa243c push eax */
  push32((uint32_t)(EAX));
  /* 10fa243d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa243f call 0x10fa5cd0 */
  push32(0x10fa2444u); f_10fa5cd0();
  /* 10fa2444 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa244a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa244c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa244f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2452 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2455 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2456 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10fa2458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa245b push eax */
  push32((uint32_t)(EAX));
  /* 10fa245c push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa245e call 0x10fa5cd0 */
  push32(0x10fa2463u); f_10fa5cd0();
  /* 10fa2463 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2469 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa246b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa246e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2471 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2474 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2475 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10fa2477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa247a push eax */
  push32((uint32_t)(EAX));
  /* 10fa247b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa247d call 0x10fa5cd0 */
  push32(0x10fa2482u); f_10fa5cd0();
  /* 10fa2482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa248a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa248d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2490 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2493 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2494 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10fa2496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2499 push eax */
  push32((uint32_t)(EAX));
  /* 10fa249a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa249c call 0x10fa5cd0 */
  push32(0x10fa24a1u); f_10fa5cd0();
  /* 10fa24a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa24a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa24a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa24ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa24af push edx */
  push32((uint32_t)(EDX));
  /* 10fa24b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10fa24b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa24b5 push eax */
  push32((uint32_t)(EAX));
  /* 10fa24b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa24b8 call 0x10fa5cd0 */
  push32(0x10fa24bdu); f_10fa5cd0();
  /* 10fa24bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa24c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa24c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa24c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa24cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24ce push edx */
  push32((uint32_t)(EDX));
  /* 10fa24cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10fa24d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa24d4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa24d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa24d7 call 0x10fa5cd0 */
  push32(0x10fa24dcu); f_10fa5cd0();
  /* 10fa24dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa24e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa24e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa24e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa24ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24ed push edx */
  push32((uint32_t)(EDX));
  /* 10fa24ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10fa24f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa24f3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa24f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa24f6 call 0x10fa5cd0 */
  push32(0x10fa24fbu); f_10fa5cd0();
  /* 10fa24fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa24fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2501 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2503 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2506 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2509 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa250c push edx */
  push32((uint32_t)(EDX));
  /* 10fa250d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10fa250f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2512 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2513 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2515 call 0x10fa5cd0 */
  push32(0x10fa251au); f_10fa5cd0();
  /* 10fa251a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa251d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2520 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2522 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2528 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa252b push edx */
  push32((uint32_t)(EDX));
  /* 10fa252c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10fa252e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2531 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2532 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2534 call 0x10fa5cd0 */
  push32(0x10fa2539u); f_10fa5cd0();
  /* 10fa2539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa253c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa253f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2541 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2547 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa254a push edx */
  push32((uint32_t)(EDX));
  /* 10fa254b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10fa254d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2550 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2551 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2553 call 0x10fa5cd0 */
  push32(0x10fa2558u); f_10fa5cd0();
  /* 10fa2558 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa255b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa255e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2566 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2569 push edx */
  push32((uint32_t)(EDX));
  /* 10fa256a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10fa256c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa256f push eax */
  push32((uint32_t)(EAX));
  /* 10fa2570 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2572 call 0x10fa5cd0 */
  push32(0x10fa2577u); f_10fa5cd0();
  /* 10fa2577 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa257a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa257d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa257f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2585 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2588 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2589 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fa258b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa258e push eax */
  push32((uint32_t)(EAX));
  /* 10fa258f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2591 call 0x10fa5cd0 */
  push32(0x10fa2596u); f_10fa5cd0();
  /* 10fa2596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2599 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa259c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa259e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa25a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa25a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25a7 push edx */
  push32((uint32_t)(EDX));
  /* 10fa25a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10fa25aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa25ad push eax */
  push32((uint32_t)(EAX));
  /* 10fa25ae push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa25b0 call 0x10fa5cd0 */
  push32(0x10fa25b5u); f_10fa5cd0();
  /* 10fa25b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa25bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa25bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa25c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa25c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25c6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa25c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10fa25c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa25cc push eax */
  push32((uint32_t)(EAX));
  /* 10fa25cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa25cf call 0x10fa5cd0 */
  push32(0x10fa25d4u); f_10fa5cd0();
  /* 10fa25d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa25da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa25dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa25df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa25e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25e5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa25e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10fa25e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa25eb push eax */
  push32((uint32_t)(EAX));
  /* 10fa25ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa25ee call 0x10fa5cd0 */
  push32(0x10fa25f3u); f_10fa5cd0();
  /* 10fa25f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa25f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa25f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa25fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa25fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2601 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2604 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2605 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10fa2607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa260a push eax */
  push32((uint32_t)(EAX));
  /* 10fa260b push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa260d call 0x10fa5cd0 */
  push32(0x10fa2612u); f_10fa5cd0();
  /* 10fa2612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2618 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa261a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa261d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2620 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2623 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2624 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10fa2626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2629 push eax */
  push32((uint32_t)(EAX));
  /* 10fa262a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa262c call 0x10fa5cd0 */
  push32(0x10fa2631u); f_10fa5cd0();
  /* 10fa2631 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2637 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2639 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa263c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa263f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2642 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2643 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10fa2645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2648 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2649 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa264b call 0x10fa5cd0 */
  push32(0x10fa2650u); f_10fa5cd0();
  /* 10fa2650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2653 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2658 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa265b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa265e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2661 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2662 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10fa2664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2667 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2668 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa266a call 0x10fa5cd0 */
  push32(0x10fa266fu); f_10fa5cd0();
  /* 10fa266f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2672 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2675 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2677 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa267a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa267d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2680 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2681 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10fa2683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2686 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2687 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2689 call 0x10fa5cd0 */
  push32(0x10fa268eu); f_10fa5cd0();
  /* 10fa268e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2691 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2694 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2696 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa269c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa269f push edx */
  push32((uint32_t)(EDX));
  /* 10fa26a0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10fa26a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa26a5 push eax */
  push32((uint32_t)(EAX));
  /* 10fa26a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa26a8 call 0x10fa5cd0 */
  push32(0x10fa26adu); f_10fa5cd0();
  /* 10fa26ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa26b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa26b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa26b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa26bb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26be push edx */
  push32((uint32_t)(EDX));
  /* 10fa26bf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10fa26c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa26c4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa26c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa26c7 call 0x10fa5cd0 */
  push32(0x10fa26ccu); f_10fa5cd0();
  /* 10fa26cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa26d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa26d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa26d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa26da add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26dd push edx */
  push32((uint32_t)(EDX));
  /* 10fa26de push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10fa26e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa26e3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa26e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa26e6 call 0x10fa5cd0 */
  push32(0x10fa26ebu); f_10fa5cd0();
  /* 10fa26eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa26f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa26f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa26f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa26f9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa26fc push edx */
  push32((uint32_t)(EDX));
  /* 10fa26fd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10fa26ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2702 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2703 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2705 call 0x10fa5cd0 */
  push32(0x10fa270au); f_10fa5cd0();
  /* 10fa270a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa270d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2710 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2712 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2718 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa271b push edx */
  push32((uint32_t)(EDX));
  /* 10fa271c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10fa271e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2721 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2722 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2724 call 0x10fa5cd0 */
  push32(0x10fa2729u); f_10fa5cd0();
  /* 10fa2729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa272c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa272f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2731 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2737 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa273a push edx */
  push32((uint32_t)(EDX));
  /* 10fa273b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10fa273d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2740 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2741 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2743 call 0x10fa5cd0 */
  push32(0x10fa2748u); f_10fa5cd0();
  /* 10fa2748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa274b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa274e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2756 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2759 push edx */
  push32((uint32_t)(EDX));
  /* 10fa275a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10fa275c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa275f push eax */
  push32((uint32_t)(EAX));
  /* 10fa2760 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2762 call 0x10fa5cd0 */
  push32(0x10fa2767u); f_10fa5cd0();
  /* 10fa2767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa276a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa276d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa276f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2775 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2778 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2779 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10fa277b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa277e push eax */
  push32((uint32_t)(EAX));
  /* 10fa277f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2781 call 0x10fa5cd0 */
  push32(0x10fa2786u); f_10fa5cd0();
  /* 10fa2786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2789 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa278c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa278e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2794 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2797 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2798 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10fa279a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa279d push eax */
  push32((uint32_t)(EAX));
  /* 10fa279e push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa27a0 call 0x10fa5cd0 */
  push32(0x10fa27a5u); f_10fa5cd0();
  /* 10fa27a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa27ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa27ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa27b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa27b3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27b6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa27b7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10fa27b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa27bc push eax */
  push32((uint32_t)(EAX));
  /* 10fa27bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa27bf call 0x10fa5cd0 */
  push32(0x10fa27c4u); f_10fa5cd0();
  /* 10fa27c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa27ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa27cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa27cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa27d2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27d8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa27d9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10fa27db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa27de push eax */
  push32((uint32_t)(EAX));
  /* 10fa27df push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa27e1 call 0x10fa5cd0 */
  push32(0x10fa27e6u); f_10fa5cd0();
  /* 10fa27e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa27ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa27ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa27f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa27f4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa27fa push edx */
  push32((uint32_t)(EDX));
  /* 10fa27fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10fa27fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2800 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2801 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2803 call 0x10fa5cd0 */
  push32(0x10fa2808u); f_10fa5cd0();
  /* 10fa2808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa280b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa280e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2810 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2816 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa281c push edx */
  push32((uint32_t)(EDX));
  /* 10fa281d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fa281f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2822 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2823 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2825 call 0x10fa5cd0 */
  push32(0x10fa282au); f_10fa5cd0();
  /* 10fa282a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa282d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2838 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa283e push edx */
  push32((uint32_t)(EDX));
  /* 10fa283f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10fa2841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2844 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2845 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2847 call 0x10fa5cd0 */
  push32(0x10fa284cu); f_10fa5cd0();
  /* 10fa284c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa284f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2852 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2854 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa285a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2860 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2861 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10fa2863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2866 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2867 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2869 call 0x10fa5cd0 */
  push32(0x10fa286eu); f_10fa5cd0();
  /* 10fa286e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2874 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa287c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2882 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2883 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10fa2885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2888 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2889 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa288b call 0x10fa5cd0 */
  push32(0x10fa2890u); f_10fa5cd0();
  /* 10fa2890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2896 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2898 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa289b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa289e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28a4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa28a5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10fa28a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa28aa push eax */
  push32((uint32_t)(EAX));
  /* 10fa28ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa28ad call 0x10fa5cd0 */
  push32(0x10fa28b2u); f_10fa5cd0();
  /* 10fa28b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa28b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa28ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa28bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa28c0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28c6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa28c7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10fa28c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa28cc push eax */
  push32((uint32_t)(EAX));
  /* 10fa28cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa28cf call 0x10fa5cd0 */
  push32(0x10fa28d4u); f_10fa5cd0();
  /* 10fa28d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa28da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa28dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa28df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa28e2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28e8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa28e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10fa28eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa28ee push eax */
  push32((uint32_t)(EAX));
  /* 10fa28ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa28f1 call 0x10fa5cd0 */
  push32(0x10fa28f6u); f_10fa5cd0();
  /* 10fa28f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa28f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa28fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa28fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2904 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa290a push edx */
  push32((uint32_t)(EDX));
  /* 10fa290b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10fa290d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2910 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2911 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2913 call 0x10fa5cd0 */
  push32(0x10fa2918u); f_10fa5cd0();
  /* 10fa2918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa291b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa291e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2920 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2923 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2926 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa292c push edx */
  push32((uint32_t)(EDX));
  /* 10fa292d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10fa2932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2935 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2938 call 0x10fa5cd0 */
  push32(0x10fa293du); f_10fa5cd0();
  /* 10fa293d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa2943 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2945 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10fa2948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10fa294b:;
  /* 10fa294b mov esp, ebp */
  ESP = (EBP);
  /* 10fa294d pop ebp */
  EBP = (pop32());
  /* 10fa294e ret  */
  ESPCHK(0x10fa23c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10fa2950 (779 bytes, 265 insns) */
void f_10fa2950(void) {
  FTRACE(0x10fa2950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2950 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2951 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2953 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2957 jne 0x10fa295e */
  if (!C.zf) goto L_10fa295e;
  /* 10fa2959 jmp 0x10fa2c59 */
  goto L_10fa2c59;
L_10fa295e:;
  /* 10fa295e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2963 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fa2966 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2967 call 0x10f985a0 */
  push32(0x10fa296cu); f_10f985a0();
  /* 10fa296c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa296f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2974 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa2977 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2978 call 0x10f985a0 */
  push32(0x10fa297du); f_10f985a0();
  /* 10fa297d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2980 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2985 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa2988 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2989 call 0x10f985a0 */
  push32(0x10fa298eu); f_10f985a0();
  /* 10fa298e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2991 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2996 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa2999 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa299a call 0x10f985a0 */
  push32(0x10fa299fu); f_10f985a0();
  /* 10fa299f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29a7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa29aa push eax */
  push32((uint32_t)(EAX));
  /* 10fa29ab call 0x10f985a0 */
  push32(0x10fa29b0u); f_10f985a0();
  /* 10fa29b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fa29bb push edx */
  push32((uint32_t)(EDX));
  /* 10fa29bc call 0x10f985a0 */
  push32(0x10fa29c1u); f_10f985a0();
  /* 10fa29c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa29cb push ecx */
  push32((uint32_t)(ECX));
  /* 10fa29cc call 0x10f985a0 */
  push32(0x10fa29d1u); f_10f985a0();
  /* 10fa29d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29d9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10fa29dc push eax */
  push32((uint32_t)(EAX));
  /* 10fa29dd call 0x10f985a0 */
  push32(0x10fa29e2u); f_10f985a0();
  /* 10fa29e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29ea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10fa29ed push edx */
  push32((uint32_t)(EDX));
  /* 10fa29ee call 0x10f985a0 */
  push32(0x10fa29f3u); f_10f985a0();
  /* 10fa29f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa29f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa29f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa29fb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10fa29fe push ecx */
  push32((uint32_t)(ECX));
  /* 10fa29ff call 0x10f985a0 */
  push32(0x10fa2a04u); f_10f985a0();
  /* 10fa2a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a07 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10fa2a0f push eax */
  push32((uint32_t)(EAX));
  /* 10fa2a10 call 0x10f985a0 */
  push32(0x10fa2a15u); f_10f985a0();
  /* 10fa2a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10fa2a20 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2a21 call 0x10f985a0 */
  push32(0x10fa2a26u); f_10f985a0();
  /* 10fa2a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10fa2a31 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2a32 call 0x10f985a0 */
  push32(0x10fa2a37u); f_10f985a0();
  /* 10fa2a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa2a42 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2a43 call 0x10f985a0 */
  push32(0x10fa2a48u); f_10f985a0();
  /* 10fa2a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10fa2a53 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2a54 call 0x10f985a0 */
  push32(0x10fa2a59u); f_10f985a0();
  /* 10fa2a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10fa2a64 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2a65 call 0x10f985a0 */
  push32(0x10fa2a6au); f_10f985a0();
  /* 10fa2a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10fa2a75 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2a76 call 0x10f985a0 */
  push32(0x10fa2a7bu); f_10f985a0();
  /* 10fa2a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a7e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10fa2a86 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2a87 call 0x10f985a0 */
  push32(0x10fa2a8cu); f_10f985a0();
  /* 10fa2a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2a94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10fa2a97 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2a98 call 0x10f985a0 */
  push32(0x10fa2a9du); f_10f985a0();
  /* 10fa2a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2aa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2aa5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10fa2aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2aa9 call 0x10f985a0 */
  push32(0x10fa2aaeu); f_10f985a0();
  /* 10fa2aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2ab6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10fa2ab9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2aba call 0x10f985a0 */
  push32(0x10fa2abfu); f_10f985a0();
  /* 10fa2abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2ac7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10fa2aca push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2acb call 0x10f985a0 */
  push32(0x10fa2ad0u); f_10f985a0();
  /* 10fa2ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2ad8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10fa2adb push eax */
  push32((uint32_t)(EAX));
  /* 10fa2adc call 0x10f985a0 */
  push32(0x10fa2ae1u); f_10f985a0();
  /* 10fa2ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ae6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2ae9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10fa2aec push edx */
  push32((uint32_t)(EDX));
  /* 10fa2aed call 0x10f985a0 */
  push32(0x10fa2af2u); f_10f985a0();
  /* 10fa2af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2afa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10fa2afd push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2afe call 0x10f985a0 */
  push32(0x10fa2b03u); f_10f985a0();
  /* 10fa2b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10fa2b0e push eax */
  push32((uint32_t)(EAX));
  /* 10fa2b0f call 0x10f985a0 */
  push32(0x10fa2b14u); f_10f985a0();
  /* 10fa2b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10fa2b1f push edx */
  push32((uint32_t)(EDX));
  /* 10fa2b20 call 0x10f985a0 */
  push32(0x10fa2b25u); f_10f985a0();
  /* 10fa2b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10fa2b30 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2b31 call 0x10f985a0 */
  push32(0x10fa2b36u); f_10f985a0();
  /* 10fa2b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10fa2b41 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2b42 call 0x10f985a0 */
  push32(0x10fa2b47u); f_10f985a0();
  /* 10fa2b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10fa2b52 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2b53 call 0x10f985a0 */
  push32(0x10fa2b58u); f_10f985a0();
  /* 10fa2b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10fa2b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2b64 call 0x10f985a0 */
  push32(0x10fa2b69u); f_10f985a0();
  /* 10fa2b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10fa2b74 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2b75 call 0x10f985a0 */
  push32(0x10fa2b7au); f_10f985a0();
  /* 10fa2b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10fa2b88 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2b89 call 0x10f985a0 */
  push32(0x10fa2b8eu); f_10f985a0();
  /* 10fa2b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2b91 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2b96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10fa2b9c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2b9d call 0x10f985a0 */
  push32(0x10fa2ba2u); f_10f985a0();
  /* 10fa2ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ba5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2baa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10fa2bb0 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2bb1 call 0x10f985a0 */
  push32(0x10fa2bb6u); f_10f985a0();
  /* 10fa2bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2bb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2bbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10fa2bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2bc5 call 0x10f985a0 */
  push32(0x10fa2bcau); f_10f985a0();
  /* 10fa2bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2bcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2bd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10fa2bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2bd9 call 0x10f985a0 */
  push32(0x10fa2bdeu); f_10f985a0();
  /* 10fa2bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2be1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2be3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2be6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10fa2bec push eax */
  push32((uint32_t)(EAX));
  /* 10fa2bed call 0x10f985a0 */
  push32(0x10fa2bf2u); f_10f985a0();
  /* 10fa2bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2bf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2bfa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10fa2c00 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2c01 call 0x10f985a0 */
  push32(0x10fa2c06u); f_10f985a0();
  /* 10fa2c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2c0e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10fa2c14 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2c15 call 0x10f985a0 */
  push32(0x10fa2c1au); f_10f985a0();
  /* 10fa2c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2c22 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10fa2c28 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2c29 call 0x10f985a0 */
  push32(0x10fa2c2eu); f_10f985a0();
  /* 10fa2c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2c33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2c36 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10fa2c3c push edx */
  push32((uint32_t)(EDX));
  /* 10fa2c3d call 0x10f985a0 */
  push32(0x10fa2c42u); f_10f985a0();
  /* 10fa2c42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2c4a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10fa2c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2c51 call 0x10f985a0 */
  push32(0x10fa2c56u); f_10f985a0();
  /* 10fa2c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa2c59:;
  /* 10fa2c59 pop ebp */
  EBP = (pop32());
  /* 10fa2c5a ret  */
  ESPCHK(0x10fa2950u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x10fa2c60 (678 bytes, 180 insns) */
void f_10fa2c60(void) {
  FTRACE(0x10fa2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2c61 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa2c66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa2c6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2c6f mov ax, word ptr [0x10fc3962] */
  AX = (r16((uint32_t)(0x10fc3962)));
  /* 10fa2c75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa2c78 cmp dword ptr [0x10fc3908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2c7f je 0x10fa2dda */
  if (C.zf) goto L_10fa2dda;
  /* 10fa2c85 push 0x10fc3930 */
  push32((uint32_t)(0x10fc3930u));
  /* 10fa2c8a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10fa2c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2c8f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2c92 call 0x10fa5cd0 */
  push32(0x10fa2c97u); f_10fa5cd0();
  /* 10fa2c97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2c9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2c9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa2c9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa2ca2 push 0x10fc3934 */
  push32((uint32_t)(0x10fc3934u));
  /* 10fa2ca7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10fa2ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2cac push eax */
  push32((uint32_t)(EAX));
  /* 10fa2cad push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2caf call 0x10fa5cd0 */
  push32(0x10fa2cb4u); f_10fa5cd0();
  /* 10fa2cb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2cb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2cba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2cbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa2cbf push 0x10fc3938 */
  push32((uint32_t)(0x10fc3938u));
  /* 10fa2cc4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10fa2cc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2cc9 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2ccc call 0x10fa5cd0 */
  push32(0x10fa2cd1u); f_10fa5cd0();
  /* 10fa2cd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2cd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa2cd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa2cd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa2cdc mov edx, dword ptr [0x10fc3938] */
  EDX = (r32((uint32_t)(0x10fc3938)));
  /* 10fa2ce2 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2ce3 call 0x10fa2f10 */
  push32(0x10fa2ce8u); f_10fa2f10();
  /* 10fa2ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ceb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2cef je 0x10fa2d49 */
  if (C.zf) goto L_10fa2d49;
  /* 10fa2cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2cf3 mov eax, dword ptr [0x10fc3930] */
  EAX = (r32((uint32_t)(0x10fc3930)));
  /* 10fa2cf8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2cf9 call 0x10f985a0 */
  push32(0x10fa2cfeu); f_10f985a0();
  /* 10fa2cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2d03 mov ecx, dword ptr [0x10fc3934] */
  ECX = (r32((uint32_t)(0x10fc3934)));
  /* 10fa2d09 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2d0a call 0x10f985a0 */
  push32(0x10fa2d0fu); f_10f985a0();
  /* 10fa2d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2d14 mov edx, dword ptr [0x10fc3938] */
  EDX = (r32((uint32_t)(0x10fc3938)));
  /* 10fa2d1a push edx */
  push32((uint32_t)(EDX));
  /* 10fa2d1b call 0x10f985a0 */
  push32(0x10fa2d20u); f_10f985a0();
  /* 10fa2d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2d23 mov dword ptr [0x10fc3930], 0 */
  w32((uint32_t)(0x10fc3930), (0x0u));
  /* 10fa2d2d mov dword ptr [0x10fc3934], 0 */
  w32((uint32_t)(0x10fc3934), (0x0u));
  /* 10fa2d37 mov dword ptr [0x10fc3938], 0 */
  w32((uint32_t)(0x10fc3938), (0x0u));
  /* 10fa2d41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2d44 jmp 0x10fa2f02 */
  goto L_10fa2f02;
L_10fa2d49:;
  /* 10fa2d49 mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2d4e cmp dword ptr [eax], 0x10fc2d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10fc2d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2d54 je 0x10fa2d90 */
  if (C.zf) goto L_10fa2d90;
  /* 10fa2d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2d58 mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2d5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa2d60 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2d61 call 0x10f985a0 */
  push32(0x10fa2d66u); f_10f985a0();
  /* 10fa2d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2d69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2d6b mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2d70 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fa2d73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2d74 call 0x10f985a0 */
  push32(0x10fa2d79u); f_10f985a0();
  /* 10fa2d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2d7e mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2d84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa2d87 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2d88 call 0x10f985a0 */
  push32(0x10fa2d8du); f_10f985a0();
  /* 10fa2d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa2d90:;
  /* 10fa2d90 mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2d96 mov edx, dword ptr [0x10fc3930] */
  EDX = (r32((uint32_t)(0x10fc3930)));
  /* 10fa2d9c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10fa2d9e mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2da3 mov ecx, dword ptr [0x10fc3934] */
  ECX = (r32((uint32_t)(0x10fc3934)));
  /* 10fa2da9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10fa2dac mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2db2 mov eax, dword ptr [0x10fc3938] */
  EAX = (r32((uint32_t)(0x10fc3938)));
  /* 10fa2db7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10fa2dba mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2dc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa2dc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa2dc4 mov byte ptr [0x10fc1ea8], al */
  w8((uint32_t)(0x10fc1ea8), (AL));
  /* 10fa2dc9 mov dword ptr [0x10fc1eac], 1 */
  w32((uint32_t)(0x10fc1eac), (0x1u));
  /* 10fa2dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2dd5 jmp 0x10fa2f02 */
  goto L_10fa2f02;
L_10fa2dda:;
  /* 10fa2dda push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ddc mov ecx, dword ptr [0x10fc3930] */
  ECX = (r32((uint32_t)(0x10fc3930)));
  /* 10fa2de2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2de3 call 0x10f985a0 */
  push32(0x10fa2de8u); f_10f985a0();
  /* 10fa2de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2deb push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2ded mov edx, dword ptr [0x10fc3934] */
  EDX = (r32((uint32_t)(0x10fc3934)));
  /* 10fa2df3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa2df4 call 0x10f985a0 */
  push32(0x10fa2df9u); f_10f985a0();
  /* 10fa2df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2dfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2dfe mov eax, dword ptr [0x10fc3938] */
  EAX = (r32((uint32_t)(0x10fc3938)));
  /* 10fa2e03 push eax */
  push32((uint32_t)(EAX));
  /* 10fa2e04 call 0x10f985a0 */
  push32(0x10fa2e09u); f_10f985a0();
  /* 10fa2e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2e0c mov dword ptr [0x10fc3930], 0 */
  w32((uint32_t)(0x10fc3930), (0x0u));
  /* 10fa2e16 mov dword ptr [0x10fc3934], 0 */
  w32((uint32_t)(0x10fc3934), (0x0u));
  /* 10fa2e20 mov dword ptr [0x10fc3938], 0 */
  w32((uint32_t)(0x10fc3938), (0x0u));
  /* 10fa2e2a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10fa2e2f push 0x10fbf164 */
  push32((uint32_t)(0x10fbf164u));
  /* 10fa2e34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2e38 call 0x10f97b10 */
  push32(0x10fa2e3du); f_10f97b10();
  /* 10fa2e3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2e40 mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2e46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10fa2e48 mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2e4e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2e51 jne 0x10fa2e5b */
  if (!C.zf) goto L_10fa2e5b;
  /* 10fa2e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2e56 jmp 0x10fa2f02 */
  goto L_10fa2f02;
L_10fa2e5b:;
  /* 10fa2e5b push 0x10fbf134 */
  push32((uint32_t)(0x10fbf134u));
  /* 10fa2e60 mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2e65 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10fa2e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2e68 call 0x10f9aac0 */
  push32(0x10fa2e6du); f_10f9aac0();
  /* 10fa2e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2e70 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10fa2e75 push 0x10fbf164 */
  push32((uint32_t)(0x10fbf164u));
  /* 10fa2e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2e7e call 0x10f97b10 */
  push32(0x10fa2e83u); f_10f97b10();
  /* 10fa2e83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2e86 mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2e8c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10fa2e8f mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2e94 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2e98 jne 0x10fa2e9f */
  if (!C.zf) goto L_10fa2e9f;
  /* 10fa2e9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2e9d jmp 0x10fa2f02 */
  goto L_10fa2f02;
L_10fa2e9f:;
  /* 10fa2e9f mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2ea5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fa2ea8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fa2eab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10fa2eb0 push 0x10fbf164 */
  push32((uint32_t)(0x10fbf164u));
  /* 10fa2eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2eb9 call 0x10f97b10 */
  push32(0x10fa2ebeu); f_10f97b10();
  /* 10fa2ebe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ec1 mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2ec7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10fa2eca mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2ed0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2ed4 jne 0x10fa2edb */
  if (!C.zf) goto L_10fa2edb;
  /* 10fa2ed6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa2ed9 jmp 0x10fa2f02 */
  goto L_10fa2f02;
L_10fa2edb:;
  /* 10fa2edb mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2ee0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10fa2ee3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10fa2ee6 mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa2eec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa2eee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa2ef0 mov byte ptr [0x10fc1ea8], cl */
  w8((uint32_t)(0x10fc1ea8), (CL));
  /* 10fa2ef6 mov dword ptr [0x10fc1eac], 1 */
  w32((uint32_t)(0x10fc1eac), (0x1u));
  /* 10fa2f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa2f02:;
  /* 10fa2f02 mov esp, ebp */
  ESP = (EBP);
  /* 10fa2f04 pop ebp */
  EBP = (pop32());
  /* 10fa2f05 ret  */
  ESPCHK(0x10fa2c60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10fa2f10 (125 bytes, 49 insns) */
void f_10fa2f10(void) {
  FTRACE(0x10fa2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2f11 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2f13 push ecx */
  push32((uint32_t)(ECX));
L_10fa2f14:;
  /* 10fa2f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa2f1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa2f1c je 0x10fa2f89 */
  if (C.zf) goto L_10fa2f89;
  /* 10fa2f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa2f24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2f27 jl 0x10fa2f4d */
  if ((C.sf!=C.of)) goto L_10fa2f4d;
  /* 10fa2f29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa2f2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2f32 jg 0x10fa2f4d */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa2f4d;
  /* 10fa2f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa2f3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa2f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fa2f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2f48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa2f4b jmp 0x10fa2f87 */
  goto L_10fa2f87;
L_10fa2f4d:;
  /* 10fa2f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa2f53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2f56 jne 0x10fa2f7e */
  if (!C.zf) goto L_10fa2f7e;
  /* 10fa2f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa2f5e:;
  /* 10fa2f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2f64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fa2f67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa2f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2f6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2f6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa2f72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2f75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa2f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa2f7a jne 0x10fa2f5e */
  if (!C.zf) goto L_10fa2f5e;
  /* 10fa2f7c jmp 0x10fa2f87 */
  goto L_10fa2f87;
L_10fa2f7e:;
  /* 10fa2f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa2f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2f84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fa2f87:;
  /* 10fa2f87 jmp 0x10fa2f14 */
  goto L_10fa2f14;
L_10fa2f89:;
  /* 10fa2f89 mov esp, ebp */
  ESP = (EBP);
  /* 10fa2f8b pop ebp */
  EBP = (pop32());
  /* 10fa2f8c ret  */
  ESPCHK(0x10fa2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x10fa2f90 (304 bytes, 85 insns) */
void f_10fa2f90(void) {
  FTRACE(0x10fa2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa2f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa2f91 mov ebp, esp */
  EBP = (ESP);
  /* 10fa2f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2f94 cmp dword ptr [0x10fc3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2f9b je 0x10fa305c */
  if (C.zf) goto L_10fa305c;
  /* 10fa2fa1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10fa2fa3 push 0x10fbf170 */
  push32((uint32_t)(0x10fbf170u));
  /* 10fa2fa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2faa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fa2fac push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa2fae call 0x10f97f20 */
  push32(0x10fa2fb3u); f_10f97f20();
  /* 10fa2fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2fb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa2fb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa2fbd jne 0x10fa2fc9 */
  if (!C.zf) goto L_10fa2fc9;
  /* 10fa2fbf mov eax, 1 */
  EAX = (0x1u);
  /* 10fa2fc4 jmp 0x10fa30bc */
  goto L_10fa30bc;
L_10fa2fc9:;
  /* 10fa2fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2fcc push eax */
  push32((uint32_t)(EAX));
  /* 10fa2fcd call 0x10fa30c0 */
  push32(0x10fa2fd2u); f_10fa30c0();
  /* 10fa2fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa2fd7 je 0x10fa2ffd */
  if (C.zf) goto L_10fa2ffd;
  /* 10fa2fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2fdc push ecx */
  push32((uint32_t)(ECX));
  /* 10fa2fdd call 0x10fa3350 */
  push32(0x10fa2fe2u); f_10fa3350();
  /* 10fa2fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa2fe7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa2fea push edx */
  push32((uint32_t)(EDX));
  /* 10fa2feb call 0x10f985a0 */
  push32(0x10fa2ff0u); f_10f985a0();
  /* 10fa2ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa2ff3 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa2ff8 jmp 0x10fa30bc */
  goto L_10fa30bc;
L_10fa2ffd:;
  /* 10fa2ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3000 mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa3006 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa3008 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa300a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa300d mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa3013 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10fa3016 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10fa3019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa301c mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa3022 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10fa3025 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10fa3028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa302b mov dword ptr [0x10fc2d88], eax */
  w32((uint32_t)(0x10fc2d88), (EAX));
  /* 10fa3030 mov ecx, dword ptr [0x10fc393c] */
  ECX = (r32((uint32_t)(0x10fc393c)));
  /* 10fa3036 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3037 call 0x10fa3350 */
  push32(0x10fa303cu); f_10fa3350();
  /* 10fa303c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa303f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3041 mov edx, dword ptr [0x10fc393c] */
  EDX = (r32((uint32_t)(0x10fc393c)));
  /* 10fa3047 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3048 call 0x10f985a0 */
  push32(0x10fa304du); f_10f985a0();
  /* 10fa304d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3053 mov dword ptr [0x10fc393c], eax */
  w32((uint32_t)(0x10fc393c), (EAX));
  /* 10fa3058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa305a jmp 0x10fa30bc */
  goto L_10fa30bc;
L_10fa305c:;
  /* 10fa305c mov ecx, dword ptr [0x10fc2d88] */
  ECX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa3062 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa3064 mov dword ptr [0x10fc2d58], edx */
  w32((uint32_t)(0x10fc2d58), (EDX));
  /* 10fa306a mov eax, dword ptr [0x10fc2d88] */
  EAX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa306f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10fa3072 mov dword ptr [0x10fc2d5c], ecx */
  w32((uint32_t)(0x10fc2d5c), (ECX));
  /* 10fa3078 mov edx, dword ptr [0x10fc2d88] */
  EDX = (r32((uint32_t)(0x10fc2d88)));
  /* 10fa307e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa3081 mov dword ptr [0x10fc2d60], eax */
  w32((uint32_t)(0x10fc2d60), (EAX));
  /* 10fa3086 mov dword ptr [0x10fc2d88], 0x10fc2d58 */
  w32((uint32_t)(0x10fc2d88), (0x10fc2d58u));
  /* 10fa3090 mov ecx, dword ptr [0x10fc393c] */
  ECX = (r32((uint32_t)(0x10fc393c)));
  /* 10fa3096 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3097 call 0x10fa3350 */
  push32(0x10fa309cu); f_10fa3350();
  /* 10fa309c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa309f push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa30a1 mov edx, dword ptr [0x10fc393c] */
  EDX = (r32((uint32_t)(0x10fc393c)));
  /* 10fa30a7 push edx */
  push32((uint32_t)(EDX));
  /* 10fa30a8 call 0x10f985a0 */
  push32(0x10fa30adu); f_10f985a0();
  /* 10fa30ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa30b0 mov dword ptr [0x10fc393c], 0 */
  w32((uint32_t)(0x10fc393c), (0x0u));
  /* 10fa30ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa30bc:;
  /* 10fa30bc mov esp, ebp */
  ESP = (EBP);
  /* 10fa30be pop ebp */
  EBP = (pop32());
  /* 10fa30bf ret  */
  ESPCHK(0x10fa2f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x10fa30c0 (525 bytes, 200 insns) */
void f_10fa30c0(void) {
  FTRACE(0x10fa30c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa30c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa30c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa30c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa30c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa30cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa30cf mov ax, word ptr [0x10fc395c] */
  AX = (r16((uint32_t)(0x10fc395c)));
  /* 10fa30d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa30d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa30dc jne 0x10fa30e6 */
  if (!C.zf) goto L_10fa30e6;
  /* 10fa30de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa30e1 jmp 0x10fa32c9 */
  goto L_10fa32c9;
L_10fa30e6:;
  /* 10fa30e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa30e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa30ec push ecx */
  push32((uint32_t)(ECX));
  /* 10fa30ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10fa30ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa30f2 push edx */
  push32((uint32_t)(EDX));
  /* 10fa30f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa30f5 call 0x10fa5cd0 */
  push32(0x10fa30fau); f_10fa5cd0();
  /* 10fa30fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa30fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3100 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3102 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3108 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa310b push edx */
  push32((uint32_t)(EDX));
  /* 10fa310c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10fa310e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3111 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3112 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3114 call 0x10fa5cd0 */
  push32(0x10fa3119u); f_10fa5cd0();
  /* 10fa3119 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa311c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa311f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3121 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3127 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa312a push edx */
  push32((uint32_t)(EDX));
  /* 10fa312b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10fa312d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3130 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3131 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3133 call 0x10fa5cd0 */
  push32(0x10fa3138u); f_10fa5cd0();
  /* 10fa3138 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa313b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa313e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3140 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3146 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3149 push edx */
  push32((uint32_t)(EDX));
  /* 10fa314a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10fa314c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa314f push eax */
  push32((uint32_t)(EAX));
  /* 10fa3150 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3152 call 0x10fa5cd0 */
  push32(0x10fa3157u); f_10fa5cd0();
  /* 10fa3157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa315a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa315d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa315f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3162 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3165 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3168 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3169 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10fa316b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa316e push eax */
  push32((uint32_t)(EAX));
  /* 10fa316f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3171 call 0x10fa5cd0 */
  push32(0x10fa3176u); f_10fa5cd0();
  /* 10fa3176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa317c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa317e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3184 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10fa3187 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3188 call 0x10fa32d0 */
  push32(0x10fa318du); f_10fa32d0();
  /* 10fa318d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3193 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3196 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3197 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10fa3199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa319c push edx */
  push32((uint32_t)(EDX));
  /* 10fa319d push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa319f call 0x10fa5cd0 */
  push32(0x10fa31a4u); f_10fa5cd0();
  /* 10fa31a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa31aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa31ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa31af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa31b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31b5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa31b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10fa31b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa31bb push eax */
  push32((uint32_t)(EAX));
  /* 10fa31bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa31be call 0x10fa5cd0 */
  push32(0x10fa31c3u); f_10fa5cd0();
  /* 10fa31c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa31c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa31cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa31ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa31d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31d4 push edx */
  push32((uint32_t)(EDX));
  /* 10fa31d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10fa31d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa31da push eax */
  push32((uint32_t)(EAX));
  /* 10fa31db push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa31dd call 0x10fa5cd0 */
  push32(0x10fa31e2u); f_10fa5cd0();
  /* 10fa31e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa31e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa31ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa31ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa31f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa31f3 push edx */
  push32((uint32_t)(EDX));
  /* 10fa31f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10fa31f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa31f9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa31fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa31fc call 0x10fa5cd0 */
  push32(0x10fa3201u); f_10fa5cd0();
  /* 10fa3201 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3207 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3209 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa320f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3212 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3213 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10fa3215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3218 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3219 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa321b call 0x10fa5cd0 */
  push32(0x10fa3220u); f_10fa5cd0();
  /* 10fa3220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3228 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa322b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa322e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3231 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3232 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10fa3234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3237 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3238 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa323a call 0x10fa5cd0 */
  push32(0x10fa323fu); f_10fa5cd0();
  /* 10fa323f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3242 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3245 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3247 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa324a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa324d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3250 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3251 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10fa3253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3256 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3257 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa3259 call 0x10fa5cd0 */
  push32(0x10fa325eu); f_10fa5cd0();
  /* 10fa325e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3261 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3264 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3266 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa326c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa326f push edx */
  push32((uint32_t)(EDX));
  /* 10fa3270 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10fa3272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3275 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa3278 call 0x10fa5cd0 */
  push32(0x10fa327du); f_10fa5cd0();
  /* 10fa327d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3280 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa3283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3285 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa3288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa328b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa328e push edx */
  push32((uint32_t)(EDX));
  /* 10fa328f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10fa3291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3294 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa3297 call 0x10fa5cd0 */
  push32(0x10fa329cu); f_10fa5cd0();
  /* 10fa329c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa329f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa32a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa32a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa32a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa32aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa32ad push edx */
  push32((uint32_t)(EDX));
  /* 10fa32ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10fa32b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa32b3 push eax */
  push32((uint32_t)(EAX));
  /* 10fa32b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa32b6 call 0x10fa5cd0 */
  push32(0x10fa32bbu); f_10fa5cd0();
  /* 10fa32bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa32be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa32c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa32c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa32c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10fa32c9:;
  /* 10fa32c9 mov esp, ebp */
  ESP = (EBP);
  /* 10fa32cb pop ebp */
  EBP = (pop32());
  /* 10fa32cc ret  */
  ESPCHK(0x10fa30c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10fa32d0 (125 bytes, 49 insns) */
void f_10fa32d0(void) {
  FTRACE(0x10fa32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa32d1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa32d3 push ecx */
  push32((uint32_t)(ECX));
L_10fa32d4:;
  /* 10fa32d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa32d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa32da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa32dc je 0x10fa3349 */
  if (C.zf) goto L_10fa3349;
  /* 10fa32de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa32e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa32e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa32e7 jl 0x10fa330d */
  if ((C.sf!=C.of)) goto L_10fa330d;
  /* 10fa32e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa32ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa32ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa32f2 jg 0x10fa330d */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa330d;
  /* 10fa32f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa32f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa32fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa32fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3300 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10fa3302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa330b jmp 0x10fa3347 */
  goto L_10fa3347;
L_10fa330d:;
  /* 10fa330d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3310 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa3313 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3316 jne 0x10fa333e */
  if (!C.zf) goto L_10fa333e;
  /* 10fa3318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa331b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa331e:;
  /* 10fa331e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3324 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fa3327 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10fa3329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa332c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa332f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa3332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3335 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa3338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa333a jne 0x10fa331e */
  if (!C.zf) goto L_10fa331e;
  /* 10fa333c jmp 0x10fa3347 */
  goto L_10fa3347;
L_10fa333e:;
  /* 10fa333e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3344 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10fa3347:;
  /* 10fa3347 jmp 0x10fa32d4 */
  goto L_10fa32d4;
L_10fa3349:;
  /* 10fa3349 mov esp, ebp */
  ESP = (EBP);
  /* 10fa334b pop ebp */
  EBP = (pop32());
  /* 10fa334c ret  */
  ESPCHK(0x10fa32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x10fa3350 (147 bytes, 52 insns) */
void f_10fa3350(void) {
  FTRACE(0x10fa3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3350 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3351 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3353 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3357 jne 0x10fa335e */
  if (!C.zf) goto L_10fa335e;
  /* 10fa3359 jmp 0x10fa33e1 */
  goto L_10fa33e1;
L_10fa335e:;
  /* 10fa335e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3361 cmp dword ptr [eax + 0xc], 0x10fc3998 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10fc3998u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3368 je 0x10fa33e1 */
  if (C.zf) goto L_10fa33e1;
  /* 10fa336a push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa336c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa336f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa3372 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3373 call 0x10f985a0 */
  push32(0x10fa3378u); f_10f985a0();
  /* 10fa3378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa337b push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa337d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3380 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10fa3383 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3384 call 0x10f985a0 */
  push32(0x10fa3389u); f_10f985a0();
  /* 10fa3389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa338c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa338e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3391 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10fa3394 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3395 call 0x10f985a0 */
  push32(0x10fa339au); f_10f985a0();
  /* 10fa339a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa339d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa339f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa33a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10fa33a5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa33a6 call 0x10f985a0 */
  push32(0x10fa33abu); f_10f985a0();
  /* 10fa33ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa33ae push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa33b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa33b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10fa33b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa33b7 call 0x10f985a0 */
  push32(0x10fa33bcu); f_10f985a0();
  /* 10fa33bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa33bf push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa33c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa33c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10fa33c7 push eax */
  push32((uint32_t)(EAX));
  /* 10fa33c8 call 0x10f985a0 */
  push32(0x10fa33cdu); f_10f985a0();
  /* 10fa33cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa33d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa33d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa33d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10fa33d8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa33d9 call 0x10f985a0 */
  push32(0x10fa33deu); f_10f985a0();
  /* 10fa33de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa33e1:;
  /* 10fa33e1 pop ebp */
  EBP = (pop32());
  /* 10fa33e2 ret  */
  ESPCHK(0x10fa3350u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x10fa33f0 (928 bytes, 284 insns) */
void f_10fa33f0(void) {
  FTRACE(0x10fa33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa33f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa33f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa33f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10fa33fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10fa3404 cmp dword ptr [0x10fc3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa340b je 0x10fa3741 */
  if (C.zf) goto L_10fa3741;
  /* 10fa3411 cmp dword ptr [0x10fc3910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3418 jne 0x10fa3440 */
  if (!C.zf) goto L_10fa3440;
  /* 10fa341a push 0x10fc3910 */
  push32((uint32_t)(0x10fc3910u));
  /* 10fa341f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10fa3424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3426 mov ax, word ptr [0x10fc3954] */
  AX = (r16((uint32_t)(0x10fc3954)));
  /* 10fa342c push eax */
  push32((uint32_t)(EAX));
  /* 10fa342d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa342f call 0x10fa5cd0 */
  push32(0x10fa3434u); f_10fa5cd0();
  /* 10fa3434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3439 je 0x10fa3440 */
  if (C.zf) goto L_10fa3440;
  /* 10fa343b jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa3440:;
  /* 10fa3440 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10fa3442 push 0x10fbf17c */
  push32((uint32_t)(0x10fbf17cu));
  /* 10fa3447 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3449 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fa344e call 0x10f97b10 */
  push32(0x10fa3453u); f_10f97b10();
  /* 10fa3453 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3456 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10fa3459 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10fa345b push 0x10fbf17c */
  push32((uint32_t)(0x10fbf17cu));
  /* 10fa3460 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3462 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fa3467 call 0x10f97b10 */
  push32(0x10fa346cu); f_10f97b10();
  /* 10fa346c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa346f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10fa3472 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10fa3474 push 0x10fbf17c */
  push32((uint32_t)(0x10fbf17cu));
  /* 10fa3479 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa347b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10fa3480 call 0x10f97b10 */
  push32(0x10fa3485u); f_10f97b10();
  /* 10fa3485 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3488 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10fa348b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10fa348d push 0x10fbf17c */
  push32((uint32_t)(0x10fbf17cu));
  /* 10fa3492 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3494 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10fa3499 call 0x10f97b10 */
  push32(0x10fa349eu); f_10f97b10();
  /* 10fa349e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa34a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10fa34a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa34a8 je 0x10fa34bc */
  if (C.zf) goto L_10fa34bc;
  /* 10fa34aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa34ae je 0x10fa34bc */
  if (C.zf) goto L_10fa34bc;
  /* 10fa34b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa34b4 je 0x10fa34bc */
  if (C.zf) goto L_10fa34bc;
  /* 10fa34b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa34ba jne 0x10fa34c1 */
  if (!C.zf) goto L_10fa34c1;
L_10fa34bc:;
  /* 10fa34bc jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa34c1:;
  /* 10fa34c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa34c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10fa34c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fa34ce jmp 0x10fa34d9 */
  goto L_10fa34d9;
L_10fa34d0:;
  /* 10fa34d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa34d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa34d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10fa34d9:;
  /* 10fa34d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa34e0 jge 0x10fa34f5 */
  if ((C.sf==C.of)) goto L_10fa34f5;
  /* 10fa34e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa34e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10fa34e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10fa34ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa34ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa34f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fa34f3 jmp 0x10fa34d0 */
  goto L_10fa34d0;
L_10fa34f5:;
  /* 10fa34f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10fa34f8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa34f9 mov ecx, dword ptr [0x10fc3910] */
  ECX = (r32((uint32_t)(0x10fc3910)));
  /* 10fa34ff push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3500 call dword ptr [0x10fc62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62ec))), 0x10fa3506u);
  /* 10fa3506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3508 jne 0x10fa350f */
  if (!C.zf) goto L_10fa350f;
  /* 10fa350a jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa350f:;
  /* 10fa350f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3513 jbe 0x10fa351a */
  if ((C.cf||C.zf)) goto L_10fa351a;
  /* 10fa3515 jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa351a:;
  /* 10fa351a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa351d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3523 mov dword ptr [0x10fc1ea4], edx */
  w32((uint32_t)(0x10fc1ea4), (EDX));
  /* 10fa3529 cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3530 jle 0x10fa3589 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa3589;
  /* 10fa3532 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10fa3535 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10fa3538 jmp 0x10fa3543 */
  goto L_10fa3543;
L_10fa353a:;
  /* 10fa353a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa353d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3540 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10fa3543:;
  /* 10fa3543 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3548 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa354a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa354c je 0x10fa3589 */
  if (C.zf) goto L_10fa3589;
  /* 10fa354e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3551 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3553 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10fa3556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa3558 je 0x10fa3589 */
  if (C.zf) goto L_10fa3589;
  /* 10fa355a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa355d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa355f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa3561 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10fa3564 jmp 0x10fa356f */
  goto L_10fa356f;
L_10fa3566:;
  /* 10fa3566 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa3569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa356c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10fa356f:;
  /* 10fa356f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3572 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3574 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fa3577 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa357a jg 0x10fa3587 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa3587;
  /* 10fa357c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa357f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3582 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10fa3585 jmp 0x10fa3566 */
  goto L_10fa3566;
L_10fa3587:;
  /* 10fa3587 jmp 0x10fa353a */
  goto L_10fa353a;
L_10fa3589:;
  /* 10fa3589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa358b push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa358d push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa358f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa3592 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3595 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3596 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fa359b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa359e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa359f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa35a1 call 0x10f9fd40 */
  push32(0x10fa35a6u); f_10f9fd40();
  /* 10fa35a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa35a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa35ab jne 0x10fa35b2 */
  if (!C.zf) goto L_10fa35b2;
  /* 10fa35ad jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa35b2:;
  /* 10fa35b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa35b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10fa35ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa35bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10fa35c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10fa35c7 jmp 0x10fa35d2 */
  goto L_10fa35d2;
L_10fa35c9:;
  /* 10fa35c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa35cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa35cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fa35d2:;
  /* 10fa35d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa35d9 jge 0x10fa35f0 */
  if ((C.sf==C.of)) goto L_10fa35f0;
  /* 10fa35db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa35de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10fa35e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10fa35e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10fa35e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa35eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10fa35ee jmp 0x10fa35c9 */
  goto L_10fa35c9;
L_10fa35f0:;
  /* 10fa35f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa35f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa35f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa35f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa35fa push edx */
  push32((uint32_t)(EDX));
  /* 10fa35fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10fa3600 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa3603 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3604 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3606 call 0x10fa5f70 */
  push32(0x10fa360bu); f_10fa5f70();
  /* 10fa360b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa360e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3610 jne 0x10fa3617 */
  if (!C.zf) goto L_10fa3617;
  /* 10fa3612 jmp 0x10fa3702 */
  goto L_10fa3702;
L_10fa3617:;
  /* 10fa3617 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa361a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10fa361f cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3626 jle 0x10fa3683 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa3683;
  /* 10fa3628 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10fa362b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10fa362e jmp 0x10fa3639 */
  goto L_10fa3639;
L_10fa3630:;
  /* 10fa3630 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3633 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3636 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10fa3639:;
  /* 10fa3639 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa363c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10fa363e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10fa3640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa3642 je 0x10fa3683 */
  if (C.zf) goto L_10fa3683;
  /* 10fa3644 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3647 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3649 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10fa364c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa364e je 0x10fa3683 */
  if (C.zf) goto L_10fa3683;
  /* 10fa3650 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3655 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa3657 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10fa365a jmp 0x10fa3665 */
  goto L_10fa3665;
L_10fa365c:;
  /* 10fa365c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa365f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3662 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10fa3665:;
  /* 10fa3665 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10fa3668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa366a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10fa366d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3670 jg 0x10fa3681 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa3681;
  /* 10fa3672 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10fa3675 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa3678 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10fa367f jmp 0x10fa365c */
  goto L_10fa365c;
L_10fa3681:;
  /* 10fa3681 jmp 0x10fa3630 */
  goto L_10fa3630;
L_10fa3683:;
  /* 10fa3683 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa3686 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3689 mov dword ptr [0x10fc1c98], eax */
  w32((uint32_t)(0x10fc1c98), (EAX));
  /* 10fa368e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa3691 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3694 mov dword ptr [0x10fc1c9c], ecx */
  w32((uint32_t)(0x10fc1c9c), (ECX));
  /* 10fa369a cmp dword ptr [0x10fc3940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa36a1 je 0x10fa36b4 */
  if (C.zf) goto L_10fa36b4;
  /* 10fa36a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa36a5 mov edx, dword ptr [0x10fc3940] */
  EDX = (r32((uint32_t)(0x10fc3940)));
  /* 10fa36ab push edx */
  push32((uint32_t)(EDX));
  /* 10fa36ac call 0x10f985a0 */
  push32(0x10fa36b1u); f_10f985a0();
  /* 10fa36b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa36b4:;
  /* 10fa36b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa36b7 mov dword ptr [0x10fc3940], eax */
  w32((uint32_t)(0x10fc3940), (EAX));
  /* 10fa36bc cmp dword ptr [0x10fc3944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa36c3 je 0x10fa36d6 */
  if (C.zf) goto L_10fa36d6;
  /* 10fa36c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa36c7 mov ecx, dword ptr [0x10fc3944] */
  ECX = (r32((uint32_t)(0x10fc3944)));
  /* 10fa36cd push ecx */
  push32((uint32_t)(ECX));
  /* 10fa36ce call 0x10f985a0 */
  push32(0x10fa36d3u); f_10f985a0();
  /* 10fa36d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa36d6:;
  /* 10fa36d6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa36d9 mov dword ptr [0x10fc3944], edx */
  w32((uint32_t)(0x10fc3944), (EDX));
  /* 10fa36df push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa36e1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa36e4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa36e5 call 0x10f985a0 */
  push32(0x10fa36eau); f_10f985a0();
  /* 10fa36ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa36ed push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa36ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa36f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa36f3 call 0x10f985a0 */
  push32(0x10fa36f8u); f_10f985a0();
  /* 10fa36f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa36fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa36fd jmp 0x10fa378c */
  goto L_10fa378c;
L_10fa3702:;
  /* 10fa3702 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3704 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10fa3707 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3708 call 0x10f985a0 */
  push32(0x10fa370du); f_10f985a0();
  /* 10fa370d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3710 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3712 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10fa3715 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3716 call 0x10f985a0 */
  push32(0x10fa371bu); f_10f985a0();
  /* 10fa371b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa371e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3720 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10fa3723 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3724 call 0x10f985a0 */
  push32(0x10fa3729u); f_10f985a0();
  /* 10fa3729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa372c push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa372e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10fa3731 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3732 call 0x10f985a0 */
  push32(0x10fa3737u); f_10f985a0();
  /* 10fa3737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa373a mov eax, 1 */
  EAX = (0x1u);
  /* 10fa373f jmp 0x10fa378c */
  goto L_10fa378c;
L_10fa3741:;
  /* 10fa3741 mov dword ptr [0x10fc1c98], 0x10fc1ca2 */
  w32((uint32_t)(0x10fc1c98), (0x10fc1ca2u));
  /* 10fa374b mov dword ptr [0x10fc1c9c], 0x10fc1ca2 */
  w32((uint32_t)(0x10fc1c9c), (0x10fc1ca2u));
  /* 10fa3755 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3757 mov eax, dword ptr [0x10fc3940] */
  EAX = (r32((uint32_t)(0x10fc3940)));
  /* 10fa375c push eax */
  push32((uint32_t)(EAX));
  /* 10fa375d call 0x10f985a0 */
  push32(0x10fa3762u); f_10f985a0();
  /* 10fa3762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3765 push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa3767 mov ecx, dword ptr [0x10fc3944] */
  ECX = (r32((uint32_t)(0x10fc3944)));
  /* 10fa376d push ecx */
  push32((uint32_t)(ECX));
  /* 10fa376e call 0x10f985a0 */
  push32(0x10fa3773u); f_10f985a0();
  /* 10fa3773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3776 mov dword ptr [0x10fc3940], 0 */
  w32((uint32_t)(0x10fc3940), (0x0u));
  /* 10fa3780 mov dword ptr [0x10fc3944], 0 */
  w32((uint32_t)(0x10fc3944), (0x0u));
  /* 10fa378a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa378c:;
  /* 10fa378c mov esp, ebp */
  ESP = (EBP);
  /* 10fa378e pop ebp */
  EBP = (pop32());
  /* 10fa378f ret  */
  ESPCHK(0x10fa33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013790 @ 0x10fa3790 (7 bytes, 5 insns) */
void f_10fa3790(void) {
  FTRACE(0x10fa3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3790 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3791 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3795 pop ebp */
  EBP = (pop32());
  /* 10fa3796 ret  */
  ESPCHK(0x10fa3790u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10fa37a0 (129 bytes, 56 insns) */
void f_10fa37a0(void) {
  FTRACE(0x10fa37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa37a0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10fa37a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10fa37a8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10fa37ae jne 0x10fa37ec */
  if (!C.zf) goto L_10fa37ec;
L_10fa37b0:;
  /* 10fa37b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10fa37b2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa37b4 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa37b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa37b8 je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa37ba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa37bd jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa37bf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fa37c1 je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa37c3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10fa37c6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa37c9 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa37cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa37cd je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa37cf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa37d2 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa37d4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa37d7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa37da or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fa37dc jne 0x10fa37b0 */
  if (!C.zf) goto L_10fa37b0;
  /* 10fa37de mov edi, edi */
  EDI = (EDI);
L_10fa37e0:;
  /* 10fa37e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa37e2 ret  */
  ESPCHK(0x10fa37a0u, _esp0);
  ESP += 4; return;
  /* 10fa37e3 nop  */
  /* nop */
L_10fa37e4:;
  /* 10fa37e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa37e6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa37e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10fa37e9 ret  */
  ESPCHK(0x10fa37a0u, _esp0);
  ESP += 4; return;
  /* 10fa37ea mov edi, edi */
  EDI = (EDI);
L_10fa37ec:;
  /* 10fa37ec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10fa37f2 je 0x10fa3808 */
  if (C.zf) goto L_10fa3808;
  /* 10fa37f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa37f6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fa37f7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa37f9 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa37fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10fa37fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa37fe je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa3800 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10fa3806 je 0x10fa37b0 */
  if (C.zf) goto L_10fa37b0;
L_10fa3808:;
  /* 10fa3808 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10fa380b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa380e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa3810 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa3812 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa3814 je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa3816 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa3819 jne 0x10fa37e4 */
  if (!C.zf) goto L_10fa37e4;
  /* 10fa381b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10fa381d je 0x10fa37e0 */
  if (C.zf) goto L_10fa37e0;
  /* 10fa381f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3822 jmp 0x10fa37b0 */
  goto L_10fa37b0;
}

/* FUN_10013830 @ 0x10fa3830 (62 bytes, 35 insns) */
void f_10fa3830(void) {
  FTRACE(0x10fa3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3830 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3831 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3833 push esi */
  push32((uint32_t)(ESI));
  /* 10fa3834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3836 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3837 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3838 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3839 push eax */
  push32((uint32_t)(EAX));
  /* 10fa383a push eax */
  push32((uint32_t)(EAX));
  /* 10fa383b push eax */
  push32((uint32_t)(EAX));
  /* 10fa383c push eax */
  push32((uint32_t)(EAX));
  /* 10fa383d push eax */
  push32((uint32_t)(EAX));
  /* 10fa383e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa3841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fa3844:;
  /* 10fa3844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa3846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa3848 je 0x10fa3851 */
  if (C.zf) goto L_10fa3851;
  /* 10fa384a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fa384b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10fa384b");
  /* 10fa384f jmp 0x10fa3844 */
  goto L_10fa3844;
L_10fa3851:;
  /* 10fa3851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3854 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3857 nop  */
  /* nop */
L_10fa3858:;
  /* 10fa3858 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10fa3859 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fa385b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa385d je 0x10fa3866 */
  if (C.zf) goto L_10fa3866;
  /* 10fa385f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa3860 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10fa3860");
  /* 10fa3864 jae 0x10fa3858 */
  if (!C.cf) goto L_10fa3858;
L_10fa3866:;
  /* 10fa3866 mov eax, ecx */
  EAX = (ECX);
  /* 10fa3868 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa386b pop esi */
  ESI = (pop32());
  /* 10fa386c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fa386d ret  */
  ESPCHK(0x10fa3830u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10fa3870 (56 bytes, 31 insns) */
void f_10fa3870(void) {
  FTRACE(0x10fa3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3870 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3871 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3873 push edi */
  push32((uint32_t)(EDI));
  /* 10fa3874 push esi */
  push32((uint32_t)(ESI));
  /* 10fa3875 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa3876 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3879 jecxz 0x10fa38a1 */
  x86_unimpl("jecxz @ 0x10fa3879");
  /* 10fa387b mov ebx, ecx */
  EBX = (ECX);
  /* 10fa387d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3880 mov esi, edi */
  ESI = (EDI);
  /* 10fa3882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3884 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10fa3886 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa3888 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa388a mov edi, esi */
  EDI = (ESI);
  /* 10fa388c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa388f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10fa3891 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10fa3894 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3896 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10fa3899 ja 0x10fa389f */
  if ((!C.cf&&!C.zf)) goto L_10fa389f;
  /* 10fa389b je 0x10fa38a1 */
  if (C.zf) goto L_10fa38a1;
  /* 10fa389d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10fa389e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10fa389f:;
  /* 10fa389f not ecx */
  ECX = (~(ECX));
L_10fa38a1:;
  /* 10fa38a1 mov eax, ecx */
  EAX = (ECX);
  /* 10fa38a3 pop ebx */
  EBX = (pop32());
  /* 10fa38a4 pop esi */
  ESI = (pop32());
  /* 10fa38a5 pop edi */
  EDI = (pop32());
  /* 10fa38a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fa38a7 ret  */
  ESPCHK(0x10fa3870u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x10fa38b0 (58 bytes, 32 insns) */
void f_10fa38b0(void) {
  FTRACE(0x10fa38b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa38b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa38b1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa38b3 push esi */
  push32((uint32_t)(ESI));
  /* 10fa38b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa38b6 push eax */
  push32((uint32_t)(EAX));
  /* 10fa38b7 push eax */
  push32((uint32_t)(EAX));
  /* 10fa38b8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa38b9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa38ba push eax */
  push32((uint32_t)(EAX));
  /* 10fa38bb push eax */
  push32((uint32_t)(EAX));
  /* 10fa38bc push eax */
  push32((uint32_t)(EAX));
  /* 10fa38bd push eax */
  push32((uint32_t)(EAX));
  /* 10fa38be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa38c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10fa38c4:;
  /* 10fa38c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa38c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa38c8 je 0x10fa38d1 */
  if (C.zf) goto L_10fa38d1;
  /* 10fa38ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10fa38cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10fa38cb");
  /* 10fa38cf jmp 0x10fa38c4 */
  goto L_10fa38c4;
L_10fa38d1:;
  /* 10fa38d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10fa38d4:;
  /* 10fa38d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10fa38d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10fa38d8 je 0x10fa38e4 */
  if (C.zf) goto L_10fa38e4;
  /* 10fa38da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10fa38db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10fa38db");
  /* 10fa38df jae 0x10fa38d4 */
  if (!C.cf) goto L_10fa38d4;
  /* 10fa38e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10fa38e4:;
  /* 10fa38e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa38e7 pop esi */
  ESI = (pop32());
  /* 10fa38e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10fa38e9 ret  */
  ESPCHK(0x10fa38b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138f0 @ 0x10fa38f0 (512 bytes, 147 insns) */
void f_10fa38f0(void) {
  FTRACE(0x10fa38f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa38f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa38f1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa38f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa38f6 cmp dword ptr [0x10fc398c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc398c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa38fd jne 0x10fa3922 */
  if (!C.zf) goto L_10fa3922;
  /* 10fa38ff call 0x10fa43c0 */
  push32(0x10fa3904u); f_10fa43c0();
  /* 10fa3904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3906 je 0x10fa3912 */
  if (C.zf) goto L_10fa3912;
  /* 10fa3908 mov eax, dword ptr [0x10fc62b0] */
  EAX = (r32((uint32_t)(0x10fc62b0)));
  /* 10fa390d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa3910 jmp 0x10fa3919 */
  goto L_10fa3919;
L_10fa3912:;
  /* 10fa3912 mov dword ptr [ebp - 8], 0x10fa4410 */
  w32((uint32_t)(EBP + -0x8), (0x10fa4410u));
L_10fa3919:;
  /* 10fa3919 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa391c mov dword ptr [0x10fc398c], ecx */
  w32((uint32_t)(0x10fc398c), (ECX));
L_10fa3922:;
  /* 10fa3922 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3926 jne 0x10fa3932 */
  if (!C.zf) goto L_10fa3932;
  /* 10fa3928 call 0x10fa4210 */
  push32(0x10fa392du); f_10fa4210();
  /* 10fa392d jmp 0x10fa39fe */
  goto L_10fa39fe;
L_10fa3932:;
  /* 10fa3932 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3935 mov dword ptr [0x10fc397c], edx */
  w32((uint32_t)(0x10fc397c), (EDX));
  /* 10fa393b cmp dword ptr [0x10fc397c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc397c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3942 je 0x10fa3964 */
  if (C.zf) goto L_10fa3964;
  /* 10fa3944 mov eax, dword ptr [0x10fc397c] */
  EAX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3949 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa394c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa394e je 0x10fa3964 */
  if (C.zf) goto L_10fa3964;
  /* 10fa3950 push 0x10fc397c */
  push32((uint32_t)(0x10fc397cu));
  /* 10fa3955 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fa3957 push 0x10fc2a90 */
  push32((uint32_t)(0x10fc2a90u));
  /* 10fa395c call 0x10fa3af0 */
  push32(0x10fa3961u); f_10fa3af0();
  /* 10fa3961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa3964:;
  /* 10fa3964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3967 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa396a mov dword ptr [0x10fc3980], edx */
  w32((uint32_t)(0x10fc3980), (EDX));
  /* 10fa3970 cmp dword ptr [0x10fc3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3977 je 0x10fa3999 */
  if (C.zf) goto L_10fa3999;
  /* 10fa3979 mov eax, dword ptr [0x10fc3980] */
  EAX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa397e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa3981 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa3983 je 0x10fa3999 */
  if (C.zf) goto L_10fa3999;
  /* 10fa3985 push 0x10fc3980 */
  push32((uint32_t)(0x10fc3980u));
  /* 10fa398a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10fa398c push 0x10fc29d8 */
  push32((uint32_t)(0x10fc29d8u));
  /* 10fa3991 call 0x10fa3af0 */
  push32(0x10fa3996u); f_10fa3af0();
  /* 10fa3996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa3999:;
  /* 10fa3999 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa39a3 cmp dword ptr [0x10fc397c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc397c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa39aa je 0x10fa39dd */
  if (C.zf) goto L_10fa39dd;
  /* 10fa39ac mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa39b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10fa39b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa39b7 je 0x10fa39dd */
  if (C.zf) goto L_10fa39dd;
  /* 10fa39b9 cmp dword ptr [0x10fc3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa39c0 je 0x10fa39d6 */
  if (C.zf) goto L_10fa39d6;
  /* 10fa39c2 mov ecx, dword ptr [0x10fc3980] */
  ECX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa39c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10fa39cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa39cd je 0x10fa39d6 */
  if (C.zf) goto L_10fa39d6;
  /* 10fa39cf call 0x10fa3b80 */
  push32(0x10fa39d4u); f_10fa3b80();
  /* 10fa39d4 jmp 0x10fa39db */
  goto L_10fa39db;
L_10fa39d6:;
  /* 10fa39d6 call 0x10fa3f70 */
  push32(0x10fa39dbu); f_10fa3f70();
L_10fa39db:;
  /* 10fa39db jmp 0x10fa39fe */
  goto L_10fa39fe;
L_10fa39dd:;
  /* 10fa39dd cmp dword ptr [0x10fc3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa39e4 je 0x10fa39f9 */
  if (C.zf) goto L_10fa39f9;
  /* 10fa39e6 mov eax, dword ptr [0x10fc3980] */
  EAX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa39eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa39ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa39f0 je 0x10fa39f9 */
  if (C.zf) goto L_10fa39f9;
  /* 10fa39f2 call 0x10fa4110 */
  push32(0x10fa39f7u); f_10fa4110();
  /* 10fa39f7 jmp 0x10fa39fe */
  goto L_10fa39fe;
L_10fa39f9:;
  /* 10fa39f9 call 0x10fa4210 */
  push32(0x10fa39feu); f_10fa4210();
L_10fa39fe:;
  /* 10fa39fe cmp dword ptr [0x10fc3984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3a05 jne 0x10fa3a0e */
  if (!C.zf) goto L_10fa3a0e;
  /* 10fa3a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3a09 jmp 0x10fa3aec */
  goto L_10fa3aec;
L_10fa3a0e:;
  /* 10fa3a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3a11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3a17 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3a18 call 0x10fa4240 */
  push32(0x10fa3a1du); f_10fa4240();
  /* 10fa3a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa3a23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3a27 je 0x10fa3a3c */
  if (C.zf) goto L_10fa3a3c;
  /* 10fa3a29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3a2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3a31 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3a32 call dword ptr [0x10fc62b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b4))), 0x10fa3a38u);
  /* 10fa3a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3a3a jne 0x10fa3a43 */
  if (!C.zf) goto L_10fa3a43;
L_10fa3a3c:;
  /* 10fa3a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3a3e jmp 0x10fa3aec */
  goto L_10fa3aec;
L_10fa3a43:;
  /* 10fa3a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3a45 mov ecx, dword ptr [0x10fc396c] */
  ECX = (r32((uint32_t)(0x10fc396c)));
  /* 10fa3a4b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3a4c call dword ptr [0x10fc62c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62c4))), 0x10fa3a52u);
  /* 10fa3a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3a54 jne 0x10fa3a5d */
  if (!C.zf) goto L_10fa3a5d;
  /* 10fa3a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3a58 jmp 0x10fa3aec */
  goto L_10fa3aec;
L_10fa3a5d:;
  /* 10fa3a5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3a61 je 0x10fa3a88 */
  if (C.zf) goto L_10fa3a88;
  /* 10fa3a63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa3a66 mov ax, word ptr [0x10fc396c] */
  AX = (r16((uint32_t)(0x10fc396c)));
  /* 10fa3a6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10fa3a6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa3a72 mov dx, word ptr [0x10fc3988] */
  DX = (r16((uint32_t)(0x10fc3988)));
  /* 10fa3a79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10fa3a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa3a80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10fa3a84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10fa3a88:;
  /* 10fa3a88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3a8c je 0x10fa3ae7 */
  if (C.zf) goto L_10fa3ae7;
  /* 10fa3a8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fa3a90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3a93 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3a94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10fa3a99 mov eax, dword ptr [0x10fc396c] */
  EAX = (r32((uint32_t)(0x10fc396c)));
  /* 10fa3a9e push eax */
  push32((uint32_t)(EAX));
  /* 10fa3a9f call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa3aa5u);
  /* 10fa3aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3aa7 jne 0x10fa3aad */
  if (!C.zf) goto L_10fa3aad;
  /* 10fa3aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3aab jmp 0x10fa3aec */
  goto L_10fa3aec;
L_10fa3aad:;
  /* 10fa3aad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10fa3aaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3ab2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3ab6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10fa3abb mov edx, dword ptr [0x10fc3988] */
  EDX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa3ac1 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3ac2 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa3ac8u);
  /* 10fa3ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3aca jne 0x10fa3ad0 */
  if (!C.zf) goto L_10fa3ad0;
  /* 10fa3acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3ace jmp 0x10fa3aec */
  goto L_10fa3aec;
L_10fa3ad0:;
  /* 10fa3ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10fa3ad2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3ad5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3ada push eax */
  push32((uint32_t)(EAX));
  /* 10fa3adb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3ade push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3adf call 0x10f9a650 */
  push32(0x10fa3ae4u); f_10f9a650();
  /* 10fa3ae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa3ae7:;
  /* 10fa3ae7 mov eax, 1 */
  EAX = (0x1u);
L_10fa3aec:;
  /* 10fa3aec mov esp, ebp */
  ESP = (EBP);
  /* 10fa3aee pop ebp */
  EBP = (pop32());
  /* 10fa3aef ret  */
  ESPCHK(0x10fa38f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013af0 @ 0x10fa3af0 (130 bytes, 47 insns) */
void f_10fa3af0(void) {
  FTRACE(0x10fa3af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3af1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3af6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10fa3afd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10fa3b04:;
  /* 10fa3b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa3b07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3b0a jg 0x10fa3b6e */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa3b6e;
  /* 10fa3b0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3b10 je 0x10fa3b6e */
  if (C.zf) goto L_10fa3b6e;
  /* 10fa3b12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa3b15 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3b18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa3b19 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3b1b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa3b1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa3b20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3b23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3b26 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10fa3b29 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3b2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3b2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10fa3b2f push edx */
  push32((uint32_t)(EDX));
  /* 10fa3b30 call 0x10fa61e0 */
  push32(0x10fa3b35u); f_10fa61e0();
  /* 10fa3b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3b38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa3b3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3b3f jne 0x10fa3b52 */
  if (!C.zf) goto L_10fa3b52;
  /* 10fa3b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3b44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3b47 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10fa3b4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa3b4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10fa3b50 jmp 0x10fa3b6c */
  goto L_10fa3b6c;
L_10fa3b52:;
  /* 10fa3b52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3b56 jge 0x10fa3b63 */
  if ((C.sf==C.of)) goto L_10fa3b63;
  /* 10fa3b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3b5b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3b5e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10fa3b61 jmp 0x10fa3b6c */
  goto L_10fa3b6c;
L_10fa3b63:;
  /* 10fa3b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3b66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3b69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10fa3b6c:;
  /* 10fa3b6c jmp 0x10fa3b04 */
  goto L_10fa3b04;
L_10fa3b6e:;
  /* 10fa3b6e mov esp, ebp */
  ESP = (EBP);
  /* 10fa3b70 pop ebp */
  EBP = (pop32());
  /* 10fa3b71 ret  */
  ESPCHK(0x10fa3af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x10fa3b80 (186 bytes, 50 insns) */
void f_10fa3b80(void) {
  FTRACE(0x10fa3b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3b81 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3b84 mov eax, dword ptr [0x10fc397c] */
  EAX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3b89 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3b8a call 0x10f9a940 */
  push32(0x10fa3b8fu); f_10f9a940();
  /* 10fa3b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3b94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3b97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fa3b9a mov dword ptr [0x10fc3978], ecx */
  w32((uint32_t)(0x10fc3978), (ECX));
  /* 10fa3ba0 mov edx, dword ptr [0x10fc3980] */
  EDX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa3ba6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3ba7 call 0x10f9a940 */
  push32(0x10fa3bacu); f_10f9a940();
  /* 10fa3bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3baf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3bb1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3bb4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fa3bb7 mov dword ptr [0x10fc3970], ecx */
  w32((uint32_t)(0x10fc3970), (ECX));
  /* 10fa3bbd mov dword ptr [0x10fc396c], 0 */
  w32((uint32_t)(0x10fc396c), (0x0u));
  /* 10fa3bc7 cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3bce je 0x10fa3bd9 */
  if (C.zf) goto L_10fa3bd9;
  /* 10fa3bd0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fa3bd7 jmp 0x10fa3beb */
  goto L_10fa3beb;
L_10fa3bd9:;
  /* 10fa3bd9 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3bdf push edx */
  push32((uint32_t)(EDX));
  /* 10fa3be0 call 0x10fa4620 */
  push32(0x10fa3be5u); f_10fa4620();
  /* 10fa3be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa3beb:;
  /* 10fa3beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3bee mov dword ptr [0x10fc3974], eax */
  w32((uint32_t)(0x10fc3974), (EAX));
  /* 10fa3bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3bf5 push 0x10fa3c40 */
  push32((uint32_t)(0x10fa3c40u));
  /* 10fa3bfa call dword ptr [0x10fc62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b8))), 0x10fa3c00u);
  /* 10fa3c00 mov ecx, dword ptr [0x10fc3984] */
  ECX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3c06 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa3c0e je 0x10fa3c2c */
  if (C.zf) goto L_10fa3c2c;
  /* 10fa3c10 mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3c16 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3c1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa3c1e je 0x10fa3c2c */
  if (C.zf) goto L_10fa3c2c;
  /* 10fa3c20 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3c25 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3c2a jne 0x10fa3c36 */
  if (!C.zf) goto L_10fa3c36;
L_10fa3c2c:;
  /* 10fa3c2c mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
L_10fa3c36:;
  /* 10fa3c36 mov esp, ebp */
  ESP = (EBP);
  /* 10fa3c38 pop ebp */
  EBP = (pop32());
  /* 10fa3c39 ret  */
  ESPCHK(0x10fa3b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x10fa3c40 (804 bytes, 220 insns) */
void f_10fa3c40(void) {
  FTRACE(0x10fa3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3c41 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3c43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3c49 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3c4a call 0x10fa45a0 */
  push32(0x10fa3c4fu); f_10fa45a0();
  /* 10fa3c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3c52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fa3c55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa3c57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa3c5a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3c5b mov edx, dword ptr [0x10fc3970] */
  EDX = (r32((uint32_t)(0x10fc3970)));
  /* 10fa3c61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa3c63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3c65 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3c6b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3c71 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3c72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3c75 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3c76 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa3c7cu);
  /* 10fa3c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3c7e jne 0x10fa3c94 */
  if (!C.zf) goto L_10fa3c94;
  /* 10fa3c80 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa3c8a mov eax, 1 */
  EAX = (0x1u);
  /* 10fa3c8f jmp 0x10fa3f5e */
  goto L_10fa3f5e;
L_10fa3c94:;
  /* 10fa3c94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa3c97 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3c98 mov edx, dword ptr [0x10fc3980] */
  EDX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa3c9e push edx */
  push32((uint32_t)(EDX));
  /* 10fa3c9f call 0x10fa61e0 */
  push32(0x10fa3ca4u); f_10fa61e0();
  /* 10fa3ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3ca9 jne 0x10fa3dcf */
  if (!C.zf) goto L_10fa3dcf;
  /* 10fa3caf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa3cb1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fa3cb4 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3cb5 mov ecx, dword ptr [0x10fc3978] */
  ECX = (r32((uint32_t)(0x10fc3978)));
  /* 10fa3cbb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa3cbd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3cbf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3cc5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3ccb push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3ccc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3ccf push edx */
  push32((uint32_t)(EDX));
  /* 10fa3cd0 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa3cd6u);
  /* 10fa3cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3cd8 jne 0x10fa3cee */
  if (!C.zf) goto L_10fa3cee;
  /* 10fa3cda mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa3ce4 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa3ce9 jmp 0x10fa3f5e */
  goto L_10fa3f5e;
L_10fa3cee:;
  /* 10fa3cee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fa3cf1 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3cf2 mov ecx, dword ptr [0x10fc397c] */
  ECX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3cf9 call 0x10fa61e0 */
  push32(0x10fa3cfeu); f_10fa61e0();
  /* 10fa3cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3d03 jne 0x10fa3d30 */
  if (!C.zf) goto L_10fa3d30;
  /* 10fa3d05 mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3d0b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3d11 mov dword ptr [0x10fc3984], edx */
  w32((uint32_t)(0x10fc3984), (EDX));
  /* 10fa3d17 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3d1a mov dword ptr [0x10fc3988], eax */
  w32((uint32_t)(0x10fc3988), (EAX));
  /* 10fa3d1f mov ecx, dword ptr [0x10fc3988] */
  ECX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa3d25 mov dword ptr [0x10fc396c], ecx */
  w32((uint32_t)(0x10fc396c), (ECX));
  /* 10fa3d2b jmp 0x10fa3dcf */
  goto L_10fa3dcf;
L_10fa3d30:;
  /* 10fa3d30 mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3d36 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3d39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa3d3b jne 0x10fa3dcf */
  if (!C.zf) goto L_10fa3dcf;
  /* 10fa3d41 cmp dword ptr [0x10fc3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3d48 je 0x10fa3d9d */
  if (C.zf) goto L_10fa3d9d;
  /* 10fa3d4a mov eax, dword ptr [0x10fc3974] */
  EAX = (r32((uint32_t)(0x10fc3974)));
  /* 10fa3d4f push eax */
  push32((uint32_t)(EAX));
  /* 10fa3d50 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa3d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3d54 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3d5a push edx */
  push32((uint32_t)(EDX));
  /* 10fa3d5b call 0x10fa62b0 */
  push32(0x10fa3d60u); f_10fa62b0();
  /* 10fa3d60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3d65 jne 0x10fa3d9d */
  if (!C.zf) goto L_10fa3d9d;
  /* 10fa3d67 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3d6c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10fa3d6e mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa3d73 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3d76 mov dword ptr [0x10fc3988], ecx */
  w32((uint32_t)(0x10fc3988), (ECX));
  /* 10fa3d7c mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3d82 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3d83 call 0x10f9a940 */
  push32(0x10fa3d88u); f_10f9a940();
  /* 10fa3d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3d8b cmp eax, dword ptr [0x10fc3974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc3974))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3d91 jne 0x10fa3d9b */
  if (!C.zf) goto L_10fa3d9b;
  /* 10fa3d93 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3d96 mov dword ptr [0x10fc396c], eax */
  w32((uint32_t)(0x10fc396c), (EAX));
L_10fa3d9b:;
  /* 10fa3d9b jmp 0x10fa3dcf */
  goto L_10fa3dcf;
L_10fa3d9d:;
  /* 10fa3d9d mov ecx, dword ptr [0x10fc3984] */
  ECX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3da3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3da6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa3da8 jne 0x10fa3dcf */
  if (!C.zf) goto L_10fa3dcf;
  /* 10fa3daa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3dad push edx */
  push32((uint32_t)(EDX));
  /* 10fa3dae call 0x10fa42e0 */
  push32(0x10fa3db3u); f_10fa42e0();
  /* 10fa3db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3db8 je 0x10fa3dcf */
  if (C.zf) goto L_10fa3dcf;
  /* 10fa3dba mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3dbf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10fa3dc1 mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa3dc6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3dc9 mov dword ptr [0x10fc3988], ecx */
  w32((uint32_t)(0x10fc3988), (ECX));
L_10fa3dcf:;
  /* 10fa3dcf mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3dd5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa3ddb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3de1 je 0x10fa3f51 */
  if (C.zf) goto L_10fa3f51;
  /* 10fa3de7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa3de9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fa3dec push eax */
  push32((uint32_t)(EAX));
  /* 10fa3ded mov ecx, dword ptr [0x10fc3978] */
  ECX = (r32((uint32_t)(0x10fc3978)));
  /* 10fa3df3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa3df5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3df7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3dfd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3e04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3e07 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3e08 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa3e0eu);
  /* 10fa3e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3e10 jne 0x10fa3e26 */
  if (!C.zf) goto L_10fa3e26;
  /* 10fa3e12 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa3e1c mov eax, 1 */
  EAX = (0x1u);
  /* 10fa3e21 jmp 0x10fa3f5e */
  goto L_10fa3f5e;
L_10fa3e26:;
  /* 10fa3e26 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fa3e29 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3e2a mov ecx, dword ptr [0x10fc397c] */
  ECX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3e30 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3e31 call 0x10fa61e0 */
  push32(0x10fa3e36u); f_10fa61e0();
  /* 10fa3e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3e3b jne 0x10fa3ef0 */
  if (!C.zf) goto L_10fa3ef0;
  /* 10fa3e41 mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3e47 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10fa3e4a mov dword ptr [0x10fc3984], edx */
  w32((uint32_t)(0x10fc3984), (EDX));
  /* 10fa3e50 cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3e57 je 0x10fa3e7a */
  if (C.zf) goto L_10fa3e7a;
  /* 10fa3e59 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3e5e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fa3e61 mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa3e66 cmp dword ptr [0x10fc396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3e6d jne 0x10fa3e78 */
  if (!C.zf) goto L_10fa3e78;
  /* 10fa3e6f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3e72 mov dword ptr [0x10fc396c], ecx */
  w32((uint32_t)(0x10fc396c), (ECX));
L_10fa3e78:;
  /* 10fa3e78 jmp 0x10fa3eee */
  goto L_10fa3eee;
L_10fa3e7a:;
  /* 10fa3e7a cmp dword ptr [0x10fc3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3e81 je 0x10fa3ecf */
  if (C.zf) goto L_10fa3ecf;
  /* 10fa3e83 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3e89 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3e8a call 0x10f9a940 */
  push32(0x10fa3e8fu); f_10f9a940();
  /* 10fa3e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3e92 cmp eax, dword ptr [0x10fc3974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc3974))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3e98 jne 0x10fa3ecf */
  if (!C.zf) goto L_10fa3ecf;
  /* 10fa3e9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3e9c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3e9f push eax */
  push32((uint32_t)(EAX));
  /* 10fa3ea0 call 0x10fa4330 */
  push32(0x10fa3ea5u); f_10fa4330();
  /* 10fa3ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3eaa je 0x10fa3ecd */
  if (C.zf) goto L_10fa3ecd;
  /* 10fa3eac mov ecx, dword ptr [0x10fc3984] */
  ECX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3eb2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10fa3eb5 mov dword ptr [0x10fc3984], ecx */
  w32((uint32_t)(0x10fc3984), (ECX));
  /* 10fa3ebb cmp dword ptr [0x10fc396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3ec2 jne 0x10fa3ecd */
  if (!C.zf) goto L_10fa3ecd;
  /* 10fa3ec4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3ec7 mov dword ptr [0x10fc396c], edx */
  w32((uint32_t)(0x10fc396c), (EDX));
L_10fa3ecd:;
  /* 10fa3ecd jmp 0x10fa3eee */
  goto L_10fa3eee;
L_10fa3ecf:;
  /* 10fa3ecf mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3ed4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fa3ed7 mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa3edc cmp dword ptr [0x10fc396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3ee3 jne 0x10fa3eee */
  if (!C.zf) goto L_10fa3eee;
  /* 10fa3ee5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3ee8 mov dword ptr [0x10fc396c], ecx */
  w32((uint32_t)(0x10fc396c), (ECX));
L_10fa3eee:;
  /* 10fa3eee jmp 0x10fa3f51 */
  goto L_10fa3f51;
L_10fa3ef0:;
  /* 10fa3ef0 cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3ef7 jne 0x10fa3f51 */
  if (!C.zf) goto L_10fa3f51;
  /* 10fa3ef9 cmp dword ptr [0x10fc3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3f00 je 0x10fa3f51 */
  if (C.zf) goto L_10fa3f51;
  /* 10fa3f02 mov edx, dword ptr [0x10fc3974] */
  EDX = (r32((uint32_t)(0x10fc3974)));
  /* 10fa3f08 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3f09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10fa3f0c push eax */
  push32((uint32_t)(EAX));
  /* 10fa3f0d mov ecx, dword ptr [0x10fc397c] */
  ECX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3f14 call 0x10fa62b0 */
  push32(0x10fa3f19u); f_10fa62b0();
  /* 10fa3f19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3f1e jne 0x10fa3f51 */
  if (!C.zf) goto L_10fa3f51;
  /* 10fa3f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa3f22 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3f25 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3f26 call 0x10fa4330 */
  push32(0x10fa3f2bu); f_10fa4330();
  /* 10fa3f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa3f30 je 0x10fa3f51 */
  if (C.zf) goto L_10fa3f51;
  /* 10fa3f32 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3f37 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10fa3f3a mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa3f3f cmp dword ptr [0x10fc396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3f46 jne 0x10fa3f51 */
  if (!C.zf) goto L_10fa3f51;
  /* 10fa3f48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa3f4b mov dword ptr [0x10fc396c], ecx */
  w32((uint32_t)(0x10fc396c), (ECX));
L_10fa3f51:;
  /* 10fa3f51 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3f56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa3f59 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa3f5b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3f5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fa3f5e:;
  /* 10fa3f5e mov esp, ebp */
  ESP = (EBP);
  /* 10fa3f60 pop ebp */
  EBP = (pop32());
  /* 10fa3f61 ret 4 */
  ESPCHK(0x10fa3c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10013f70 @ 0x10fa3f70 (116 bytes, 33 insns) */
void f_10fa3f70(void) {
  FTRACE(0x10fa3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3f71 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa3f74 mov eax, dword ptr [0x10fc397c] */
  EAX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3f79 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3f7a call 0x10f9a940 */
  push32(0x10fa3f7fu); f_10f9a940();
  /* 10fa3f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3f82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3f84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3f87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fa3f8a mov dword ptr [0x10fc3978], ecx */
  w32((uint32_t)(0x10fc3978), (ECX));
  /* 10fa3f90 cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa3f97 je 0x10fa3fa2 */
  if (C.zf) goto L_10fa3fa2;
  /* 10fa3f99 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10fa3fa0 jmp 0x10fa3fb4 */
  goto L_10fa3fb4;
L_10fa3fa2:;
  /* 10fa3fa2 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa3fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10fa3fa9 call 0x10fa4620 */
  push32(0x10fa3faeu); f_10fa4620();
  /* 10fa3fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa3fb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa3fb4:;
  /* 10fa3fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa3fb7 mov dword ptr [0x10fc3974], eax */
  w32((uint32_t)(0x10fc3974), (EAX));
  /* 10fa3fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa3fbe push 0x10fa3ff0 */
  push32((uint32_t)(0x10fa3ff0u));
  /* 10fa3fc3 call dword ptr [0x10fc62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b8))), 0x10fa3fc9u);
  /* 10fa3fc9 mov ecx, dword ptr [0x10fc3984] */
  ECX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa3fcf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa3fd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa3fd4 jne 0x10fa3fe0 */
  if (!C.zf) goto L_10fa3fe0;
  /* 10fa3fd6 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
L_10fa3fe0:;
  /* 10fa3fe0 mov esp, ebp */
  ESP = (EBP);
  /* 10fa3fe2 pop ebp */
  EBP = (pop32());
  /* 10fa3fe3 ret  */
  ESPCHK(0x10fa3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x10fa3ff0 (287 bytes, 86 insns) */
void f_10fa3ff0(void) {
  FTRACE(0x10fa3ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa3ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa3ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa3ff3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa3ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa3ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa3ffa call 0x10fa45a0 */
  push32(0x10fa3fffu); f_10fa45a0();
  /* 10fa3fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4002 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fa4005 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa4007 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa400a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa400b mov edx, dword ptr [0x10fc3978] */
  EDX = (r32((uint32_t)(0x10fc3978)));
  /* 10fa4011 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa4013 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4015 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa401b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4021 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4022 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa4025 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4026 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa402cu);
  /* 10fa402c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa402e jne 0x10fa4044 */
  if (!C.zf) goto L_10fa4044;
  /* 10fa4030 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa403a mov eax, 1 */
  EAX = (0x1u);
  /* 10fa403f jmp 0x10fa4109 */
  goto L_10fa4109;
L_10fa4044:;
  /* 10fa4044 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa4047 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4048 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa404e push edx */
  push32((uint32_t)(EDX));
  /* 10fa404f call 0x10fa61e0 */
  push32(0x10fa4054u); f_10fa61e0();
  /* 10fa4054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4059 jne 0x10fa4099 */
  if (!C.zf) goto L_10fa4099;
  /* 10fa405b cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4062 jne 0x10fa4076 */
  if (!C.zf) goto L_10fa4076;
  /* 10fa4064 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa4066 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa4069 push eax */
  push32((uint32_t)(EAX));
  /* 10fa406a call 0x10fa4330 */
  push32(0x10fa406fu); f_10fa4330();
  /* 10fa406f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4074 je 0x10fa4097 */
  if (C.zf) goto L_10fa4097;
L_10fa4076:;
  /* 10fa4076 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa4079 mov dword ptr [0x10fc3988], ecx */
  w32((uint32_t)(0x10fc3988), (ECX));
  /* 10fa407f mov edx, dword ptr [0x10fc3988] */
  EDX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa4085 mov dword ptr [0x10fc396c], edx */
  w32((uint32_t)(0x10fc396c), (EDX));
  /* 10fa408b mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa4090 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10fa4092 mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
L_10fa4097:;
  /* 10fa4097 jmp 0x10fa40fc */
  goto L_10fa40fc;
L_10fa4099:;
  /* 10fa4099 cmp dword ptr [0x10fc3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa40a0 jne 0x10fa40fc */
  if (!C.zf) goto L_10fa40fc;
  /* 10fa40a2 cmp dword ptr [0x10fc3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa40a9 je 0x10fa40fc */
  if (C.zf) goto L_10fa40fc;
  /* 10fa40ab mov ecx, dword ptr [0x10fc3974] */
  ECX = (r32((uint32_t)(0x10fc3974)));
  /* 10fa40b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa40b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10fa40b5 push edx */
  push32((uint32_t)(EDX));
  /* 10fa40b6 mov eax, dword ptr [0x10fc397c] */
  EAX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa40bb push eax */
  push32((uint32_t)(EAX));
  /* 10fa40bc call 0x10fa62b0 */
  push32(0x10fa40c1u); f_10fa62b0();
  /* 10fa40c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa40c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa40c6 jne 0x10fa40fc */
  if (!C.zf) goto L_10fa40fc;
  /* 10fa40c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa40ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa40cd push ecx */
  push32((uint32_t)(ECX));
  /* 10fa40ce call 0x10fa4330 */
  push32(0x10fa40d3u); f_10fa4330();
  /* 10fa40d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa40d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa40d8 je 0x10fa40fc */
  if (C.zf) goto L_10fa40fc;
  /* 10fa40da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa40dd mov dword ptr [0x10fc3988], edx */
  w32((uint32_t)(0x10fc3988), (EDX));
  /* 10fa40e3 mov eax, dword ptr [0x10fc3988] */
  EAX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa40e8 mov dword ptr [0x10fc396c], eax */
  w32((uint32_t)(0x10fc396c), (EAX));
  /* 10fa40ed mov ecx, dword ptr [0x10fc3984] */
  ECX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa40f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa40f6 mov dword ptr [0x10fc3984], ecx */
  w32((uint32_t)(0x10fc3984), (ECX));
L_10fa40fc:;
  /* 10fa40fc mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa4101 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4104 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa4106 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fa4109:;
  /* 10fa4109 mov esp, ebp */
  ESP = (EBP);
  /* 10fa410b pop ebp */
  EBP = (pop32());
  /* 10fa410c ret 4 */
  ESPCHK(0x10fa3ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014110 @ 0x10fa4110 (69 bytes, 20 insns) */
void f_10fa4110(void) {
  FTRACE(0x10fa4110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4110 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4111 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4113 mov eax, dword ptr [0x10fc3980] */
  EAX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa4118 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4119 call 0x10f9a940 */
  push32(0x10fa411eu); f_10f9a940();
  /* 10fa411e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4121 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa4123 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4126 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10fa4129 mov dword ptr [0x10fc3970], ecx */
  w32((uint32_t)(0x10fc3970), (ECX));
  /* 10fa412f push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa4131 push 0x10fa4160 */
  push32((uint32_t)(0x10fa4160u));
  /* 10fa4136 call dword ptr [0x10fc62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b8))), 0x10fa413cu);
  /* 10fa413c mov edx, dword ptr [0x10fc3984] */
  EDX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa4142 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa4145 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa4147 jne 0x10fa4153 */
  if (!C.zf) goto L_10fa4153;
  /* 10fa4149 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
L_10fa4153:;
  /* 10fa4153 pop ebp */
  EBP = (pop32());
  /* 10fa4154 ret  */
  ESPCHK(0x10fa4110u, _esp0);
  ESP += 4; return;
}

/* FUN_10014160 @ 0x10fa4160 (172 bytes, 54 insns) */
void f_10fa4160(void) {
  FTRACE(0x10fa4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4160 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4161 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4169 push eax */
  push32((uint32_t)(EAX));
  /* 10fa416a call 0x10fa45a0 */
  push32(0x10fa416fu); f_10fa45a0();
  /* 10fa416f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4172 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10fa4175 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa4177 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa417a push ecx */
  push32((uint32_t)(ECX));
  /* 10fa417b mov edx, dword ptr [0x10fc3970] */
  EDX = (r32((uint32_t)(0x10fc3970)));
  /* 10fa4181 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa4183 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4185 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa418b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4191 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4192 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa4195 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4196 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa419cu);
  /* 10fa419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa419e jne 0x10fa41b1 */
  if (!C.zf) goto L_10fa41b1;
  /* 10fa41a0 mov dword ptr [0x10fc3984], 0 */
  w32((uint32_t)(0x10fc3984), (0x0u));
  /* 10fa41aa mov eax, 1 */
  EAX = (0x1u);
  /* 10fa41af jmp 0x10fa4206 */
  goto L_10fa4206;
L_10fa41b1:;
  /* 10fa41b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10fa41b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa41b5 mov edx, dword ptr [0x10fc3980] */
  EDX = (r32((uint32_t)(0x10fc3980)));
  /* 10fa41bb push edx */
  push32((uint32_t)(EDX));
  /* 10fa41bc call 0x10fa61e0 */
  push32(0x10fa41c1u); f_10fa61e0();
  /* 10fa41c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa41c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa41c6 jne 0x10fa41f9 */
  if (!C.zf) goto L_10fa41f9;
  /* 10fa41c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa41cb push eax */
  push32((uint32_t)(EAX));
  /* 10fa41cc call 0x10fa42e0 */
  push32(0x10fa41d1u); f_10fa42e0();
  /* 10fa41d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa41d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa41d6 je 0x10fa41f9 */
  if (C.zf) goto L_10fa41f9;
  /* 10fa41d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10fa41db mov dword ptr [0x10fc3988], ecx */
  w32((uint32_t)(0x10fc3988), (ECX));
  /* 10fa41e1 mov edx, dword ptr [0x10fc3988] */
  EDX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa41e7 mov dword ptr [0x10fc396c], edx */
  w32((uint32_t)(0x10fc396c), (EDX));
  /* 10fa41ed mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa41f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10fa41f4 mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
L_10fa41f9:;
  /* 10fa41f9 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa41fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4201 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10fa4203 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4205 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10fa4206:;
  /* 10fa4206 mov esp, ebp */
  ESP = (EBP);
  /* 10fa4208 pop ebp */
  EBP = (pop32());
  /* 10fa4209 ret 4 */
  ESPCHK(0x10fa4160u, _esp0);
  ESP += 8; return;
}

/* FUN_10014210 @ 0x10fa4210 (43 bytes, 11 insns) */
void f_10fa4210(void) {
  FTRACE(0x10fa4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4210 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4211 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4213 mov eax, dword ptr [0x10fc3984] */
  EAX = (r32((uint32_t)(0x10fc3984)));
  /* 10fa4218 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10fa421d mov dword ptr [0x10fc3984], eax */
  w32((uint32_t)(0x10fc3984), (EAX));
  /* 10fa4222 call dword ptr [0x10fc62a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62a8))), 0x10fa4228u);
  /* 10fa4228 mov dword ptr [0x10fc3988], eax */
  w32((uint32_t)(0x10fc3988), (EAX));
  /* 10fa422d mov ecx, dword ptr [0x10fc3988] */
  ECX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa4233 mov dword ptr [0x10fc396c], ecx */
  w32((uint32_t)(0x10fc396c), (ECX));
  /* 10fa4239 pop ebp */
  EBP = (pop32());
  /* 10fa423a ret  */
  ESPCHK(0x10fa4210u, _esp0);
  ESP += 4; return;
}

/* FUN_10014240 @ 0x10fa4240 (155 bytes, 57 insns) */
void f_10fa4240(void) {
  FTRACE(0x10fa4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4240 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4241 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4246 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa424a je 0x10fa426b */
  if (C.zf) goto L_10fa426b;
  /* 10fa424c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa424f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10fa4252 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa4254 je 0x10fa426b */
  if (C.zf) goto L_10fa426b;
  /* 10fa4256 push 0x10fbf80c */
  push32((uint32_t)(0x10fbf80cu));
  /* 10fa425b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa425e push edx */
  push32((uint32_t)(EDX));
  /* 10fa425f call 0x10fa37a0 */
  push32(0x10fa4264u); f_10fa37a0();
  /* 10fa4264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4269 jne 0x10fa4293 */
  if (!C.zf) goto L_10fa4293;
L_10fa426b:;
  /* 10fa426b push 8 */
  push32((uint32_t)(0x8u));
  /* 10fa426d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fa4270 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4271 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10fa4276 mov ecx, dword ptr [0x10fc3988] */
  ECX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa427c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa427d call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa4283u);
  /* 10fa4283 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4285 jne 0x10fa428b */
  if (!C.zf) goto L_10fa428b;
  /* 10fa4287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4289 jmp 0x10fa42d7 */
  goto L_10fa42d7;
L_10fa428b:;
  /* 10fa428b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10fa428e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10fa4291 jmp 0x10fa42cb */
  goto L_10fa42cb;
L_10fa4293:;
  /* 10fa4293 push 0x10fbf808 */
  push32((uint32_t)(0x10fbf808u));
  /* 10fa4298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa429b push eax */
  push32((uint32_t)(EAX));
  /* 10fa429c call 0x10fa37a0 */
  push32(0x10fa42a1u); f_10fa37a0();
  /* 10fa42a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa42a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa42a6 jne 0x10fa42cb */
  if (!C.zf) goto L_10fa42cb;
  /* 10fa42a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10fa42aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10fa42ad push ecx */
  push32((uint32_t)(ECX));
  /* 10fa42ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 10fa42b0 mov edx, dword ptr [0x10fc3988] */
  EDX = (r32((uint32_t)(0x10fc3988)));
  /* 10fa42b6 push edx */
  push32((uint32_t)(EDX));
  /* 10fa42b7 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa42bdu);
  /* 10fa42bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa42bf jne 0x10fa42c5 */
  if (!C.zf) goto L_10fa42c5;
  /* 10fa42c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa42c3 jmp 0x10fa42d7 */
  goto L_10fa42d7;
L_10fa42c5:;
  /* 10fa42c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10fa42c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10fa42cb:;
  /* 10fa42cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa42ce push ecx */
  push32((uint32_t)(ECX));
  /* 10fa42cf call 0x10fa63c0 */
  push32(0x10fa42d4u); f_10fa63c0();
  /* 10fa42d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10fa42d7:;
  /* 10fa42d7 mov esp, ebp */
  ESP = (EBP);
  /* 10fa42d9 pop ebp */
  EBP = (pop32());
  /* 10fa42da ret  */
  ESPCHK(0x10fa4240u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x10fa42e0 (79 bytes, 26 insns) */
void f_10fa42e0(void) {
  FTRACE(0x10fa42e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa42e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa42e1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa42e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa42e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10fa42ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10fa42ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa42f5 jmp 0x10fa4300 */
  goto L_10fa4300;
L_10fa42f7:;
  /* 10fa42f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa42fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa42fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10fa4300:;
  /* 10fa4300 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4304 jae 0x10fa4326 */
  if (!C.cf) goto L_10fa4326;
  /* 10fa4306 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4309 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa430f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4312 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10fa4314 mov cx, word ptr [eax*2 + 0x10fc29c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10fc29c4)));
  /* 10fa431c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa431e jne 0x10fa4324 */
  if (!C.zf) goto L_10fa4324;
  /* 10fa4320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4322 jmp 0x10fa432b */
  goto L_10fa432b;
L_10fa4324:;
  /* 10fa4324 jmp 0x10fa42f7 */
  goto L_10fa42f7;
L_10fa4326:;
  /* 10fa4326 mov eax, 1 */
  EAX = (0x1u);
L_10fa432b:;
  /* 10fa432b mov esp, ebp */
  ESP = (EBP);
  /* 10fa432d pop ebp */
  EBP = (pop32());
  /* 10fa432e ret  */
  ESPCHK(0x10fa42e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x10fa4330 (135 bytes, 48 insns) */
void f_10fa4330(void) {
  FTRACE(0x10fa4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4330 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4331 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4333 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4336 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4337 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa433a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa433f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4344 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4349 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10fa434c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa4351 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa4354 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10fa4356 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10fa4359 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa435a push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa435c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa435f push edx */
  push32((uint32_t)(EDX));
  /* 10fa4360 call dword ptr [0x10fc398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc398c))), 0x10fa4366u);
  /* 10fa4366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4368 jne 0x10fa436e */
  if (!C.zf) goto L_10fa436e;
  /* 10fa436a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa436c jmp 0x10fa43b2 */
  goto L_10fa43b2;
L_10fa436e:;
  /* 10fa436e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10fa4371 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4372 call 0x10fa45a0 */
  push32(0x10fa4377u); f_10fa45a0();
  /* 10fa4377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa437a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa437d je 0x10fa43ad */
  if (C.zf) goto L_10fa43ad;
  /* 10fa437f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4383 je 0x10fa43ad */
  if (C.zf) goto L_10fa43ad;
  /* 10fa4385 mov ecx, dword ptr [0x10fc397c] */
  ECX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa438b push ecx */
  push32((uint32_t)(ECX));
  /* 10fa438c call 0x10fa4620 */
  push32(0x10fa4391u); f_10fa4620();
  /* 10fa4391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4394 mov esi, eax */
  ESI = (EAX);
  /* 10fa4396 mov edx, dword ptr [0x10fc397c] */
  EDX = (r32((uint32_t)(0x10fc397c)));
  /* 10fa439c push edx */
  push32((uint32_t)(EDX));
  /* 10fa439d call 0x10f9a940 */
  push32(0x10fa43a2u); f_10f9a940();
  /* 10fa43a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa43a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa43a7 jne 0x10fa43ad */
  if (!C.zf) goto L_10fa43ad;
  /* 10fa43a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa43ab jmp 0x10fa43b2 */
  goto L_10fa43b2;
L_10fa43ad:;
  /* 10fa43ad mov eax, 1 */
  EAX = (0x1u);
L_10fa43b2:;
  /* 10fa43b2 pop esi */
  ESI = (pop32());
  /* 10fa43b3 mov esp, ebp */
  ESP = (EBP);
  /* 10fa43b5 pop ebp */
  EBP = (pop32());
  /* 10fa43b6 ret  */
  ESPCHK(0x10fa4330u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x10fa43c0 (77 bytes, 18 insns) */
void f_10fa43c0(void) {
  FTRACE(0x10fa43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa43c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa43c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa43c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10fa43d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10fa43d9 push eax */
  push32((uint32_t)(EAX));
  /* 10fa43da call dword ptr [0x10fc62a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62a4))), 0x10fa43e0u);
  /* 10fa43e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa43e2 je 0x10fa43f9 */
  if (C.zf) goto L_10fa43f9;
  /* 10fa43e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa43eb jne 0x10fa43f9 */
  if (!C.zf) goto L_10fa43f9;
  /* 10fa43ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10fa43f7 jmp 0x10fa4403 */
  goto L_10fa4403;
L_10fa43f9:;
  /* 10fa43f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10fa4403:;
  /* 10fa4403 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10fa4409 mov esp, ebp */
  ESP = (EBP);
  /* 10fa440b pop ebp */
  EBP = (pop32());
  /* 10fa440c ret  */
  ESPCHK(0x10fa43c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10fa4410 (388 bytes, 118 insns) */
void f_10fa4410(void) {
  FTRACE(0x10fa4410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4410 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4411 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4416 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa441d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10fa4424 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10fa442b:;
  /* 10fa442b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa442e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4431 jg 0x10fa4578 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa4578;
  /* 10fa4437 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa443a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa443d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10fa443e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4440 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10fa4442 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa4445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4448 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa444b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa444e cmp edx, dword ptr [ecx + 0x10fc2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10fc2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4454 jne 0x10fa454e */
  if (!C.zf) goto L_10fa454e;
  /* 10fa445a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa445d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4460 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4464 ja 0x10fa4487 */
  if ((!C.cf&&!C.zf)) goto L_10fa4487;
  /* 10fa4466 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa446a je 0x10fa44f9 */
  if (C.zf) goto L_10fa44f9;
  /* 10fa4470 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4474 je 0x10fa44a4 */
  if (C.zf) goto L_10fa44a4;
  /* 10fa4476 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa447a je 0x10fa44c6 */
  if (C.zf) goto L_10fa44c6;
  /* 10fa447c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4480 je 0x10fa44e8 */
  if (C.zf) goto L_10fa44e8;
  /* 10fa4482 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa4487:;
  /* 10fa4487 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa448e je 0x10fa44b5 */
  if (C.zf) goto L_10fa44b5;
  /* 10fa4490 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4497 je 0x10fa44d7 */
  if (C.zf) goto L_10fa44d7;
  /* 10fa4499 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa44a0 je 0x10fa450a */
  if (C.zf) goto L_10fa450a;
  /* 10fa44a2 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44a4:;
  /* 10fa44a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44aa add ecx, 0x10fc2524 */
  { uint32_t _a=(ECX),_b=(0x10fc2524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa44b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa44b3 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44b5:;
  /* 10fa44b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44bb mov eax, dword ptr [edx + 0x10fc252c] */
  EAX = (r32((uint32_t)(EDX + 0x10fc252c)));
  /* 10fa44c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa44c4 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44c6:;
  /* 10fa44c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44cc add ecx, 0x10fc2530 */
  { uint32_t _a=(ECX),_b=(0x10fc2530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa44d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa44d5 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44d7:;
  /* 10fa44d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44dd mov eax, dword ptr [edx + 0x10fc2534] */
  EAX = (r32((uint32_t)(EDX + 0x10fc2534)));
  /* 10fa44e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10fa44e6 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44e8:;
  /* 10fa44e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44ee add ecx, 0x10fc2538 */
  { uint32_t _a=(ECX),_b=(0x10fc2538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa44f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa44f7 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa44f9:;
  /* 10fa44f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa44fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa44ff add edx, 0x10fc253c */
  { uint32_t _a=(EDX),_b=(0x10fc253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4505 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa4508 jmp 0x10fa4518 */
  goto L_10fa4518;
L_10fa450a:;
  /* 10fa450a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa450d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa4510 add eax, 0x10fc2544 */
  { uint32_t _a=(EAX),_b=(0x10fc2544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4515 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10fa4518:;
  /* 10fa4518 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa451c je 0x10fa4524 */
  if (C.zf) goto L_10fa4524;
  /* 10fa451e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4522 jge 0x10fa4526 */
  if ((C.sf==C.of)) goto L_10fa4526;
L_10fa4524:;
  /* 10fa4524 jmp 0x10fa4578 */
  goto L_10fa4578;
L_10fa4526:;
  /* 10fa4526 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa4529 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa452c push ecx */
  push32((uint32_t)(ECX));
  /* 10fa452d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4530 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4534 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4535 call 0x10f9b330 */
  push32(0x10fa453au); f_10f9b330();
  /* 10fa453a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa453d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa4540 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4543 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10fa4547 mov eax, 1 */
  EAX = (0x1u);
  /* 10fa454c jmp 0x10fa458e */
  goto L_10fa458e;
L_10fa454e:;
  /* 10fa454e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4551 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa4554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4557 cmp eax, dword ptr [edx + 0x10fc2520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10fc2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa455d jae 0x10fa456a */
  if (!C.cf) goto L_10fa456a;
  /* 10fa455f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4562 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4565 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10fa4568 jmp 0x10fa4573 */
  goto L_10fa4573;
L_10fa456a:;
  /* 10fa456a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa456d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4570 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa4573:;
  /* 10fa4573 jmp 0x10fa442b */
  goto L_10fa442b;
L_10fa4578:;
  /* 10fa4578 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10fa457b push eax */
  push32((uint32_t)(EAX));
  /* 10fa457c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10fa457f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4580 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10fa4583 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4587 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4588 call dword ptr [0x10fc62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62b0))), 0x10fa458eu);
L_10fa458e:;
  /* 10fa458e mov esp, ebp */
  ESP = (EBP);
  /* 10fa4590 pop ebp */
  EBP = (pop32());
  /* 10fa4591 ret 0x10 */
  ESPCHK(0x10fa4410u, _esp0);
  ESP += 20; return;
}

/* FUN_100145a0 @ 0x10fa45a0 (118 bytes, 42 insns) */
void f_10fa45a0(void) {
  FTRACE(0x10fa45a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa45a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa45a1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa45a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa45a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10fa45ad:;
  /* 10fa45ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa45b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa45b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10fa45b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa45b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa45bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa45bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10fa45c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa45c4 je 0x10fa460f */
  if (C.zf) goto L_10fa460f;
  /* 10fa45c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa45ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa45cd jl 0x10fa45e2 */
  if ((C.sf!=C.of)) goto L_10fa45e2;
  /* 10fa45cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa45d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa45d6 jg 0x10fa45e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa45e2;
  /* 10fa45d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fa45db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa45dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10fa45e0 jmp 0x10fa45fc */
  goto L_10fa45fc;
L_10fa45e2:;
  /* 10fa45e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa45e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa45e9 jl 0x10fa45fc */
  if ((C.sf!=C.of)) goto L_10fa45fc;
  /* 10fa45eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa45ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa45f2 jg 0x10fa45fc */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa45fc;
  /* 10fa45f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10fa45f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10fa45f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10fa45fc:;
  /* 10fa45fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa45ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10fa4602 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10fa4606 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10fa460a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa460d jmp 0x10fa45ad */
  goto L_10fa45ad;
L_10fa460f:;
  /* 10fa460f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4612 mov esp, ebp */
  ESP = (EBP);
  /* 10fa4614 pop ebp */
  EBP = (pop32());
  /* 10fa4615 ret  */
  ESPCHK(0x10fa45a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10fa4620 (101 bytes, 36 insns) */
void f_10fa4620(void) {
  FTRACE(0x10fa4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4620 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4621 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa462d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4630 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10fa4632 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10fa4635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa463b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10fa463e:;
  /* 10fa463e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fa4642 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4645 jl 0x10fa4650 */
  if ((C.sf!=C.of)) goto L_10fa4650;
  /* 10fa4647 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fa464b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa464e jle 0x10fa4662 */
  if ((C.zf||C.sf!=C.of)) goto L_10fa4662;
L_10fa4650:;
  /* 10fa4650 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fa4654 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4657 jl 0x10fa467e */
  if ((C.sf!=C.of)) goto L_10fa467e;
  /* 10fa4659 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10fa465d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4660 jg 0x10fa467e */
  if ((!C.zf&&C.sf==C.of)) goto L_10fa467e;
L_10fa4662:;
  /* 10fa4662 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4668 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10fa466b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa466e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10fa4670 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10fa4673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4676 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4679 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10fa467c jmp 0x10fa463e */
  goto L_10fa463e;
L_10fa467e:;
  /* 10fa467e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa4681 mov esp, ebp */
  ESP = (EBP);
  /* 10fa4683 pop ebp */
  EBP = (pop32());
  /* 10fa4684 ret  */
  ESPCHK(0x10fa4620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014690 @ 0x10fa4690 (122 bytes, 39 insns) */
void f_10fa4690(void) {
  FTRACE(0x10fa4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4690 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4691 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4693 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4697 cmp eax, dword ptr [0x10fc521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa469d jae 0x10fa46c1 */
  if (!C.cf) goto L_10fa46c1;
  /* 10fa469f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa46a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10fa46a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa46a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10fa46ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa46ae mov eax, dword ptr [ecx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10fa46b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10fa46ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa46bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa46bf jne 0x10fa46dc */
  if (!C.zf) goto L_10fa46dc;
L_10fa46c1:;
  /* 10fa46c1 call 0x10f9f9e0 */
  push32(0x10fa46c6u); f_10f9f9e0();
  /* 10fa46c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10fa46cc call 0x10f9f9f0 */
  push32(0x10fa46d1u); f_10f9f9f0();
  /* 10fa46d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10fa46d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa46da jmp 0x10fa4706 */
  goto L_10fa4706;
L_10fa46dc:;
  /* 10fa46dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa46df push edx */
  push32((uint32_t)(EDX));
  /* 10fa46e0 call 0x10fa1200 */
  push32(0x10fa46e5u); f_10fa1200();
  /* 10fa46e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa46e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa46eb push eax */
  push32((uint32_t)(EAX));
  /* 10fa46ec call 0x10fa4710 */
  push32(0x10fa46f1u); f_10fa4710();
  /* 10fa46f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa46f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa46f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa46fa push ecx */
  push32((uint32_t)(ECX));
  /* 10fa46fb call 0x10fa1290 */
  push32(0x10fa4700u); f_10fa1290();
  /* 10fa4700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10fa4706:;
  /* 10fa4706 mov esp, ebp */
  ESP = (EBP);
  /* 10fa4708 pop ebp */
  EBP = (pop32());
  /* 10fa4709 ret  */
  ESPCHK(0x10fa4690u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10fa4710 (170 bytes, 59 insns) */
void f_10fa4710(void) {
  FTRACE(0x10fa4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4710 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4711 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4713 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4714 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4718 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4719 call 0x10fa1080 */
  push32(0x10fa471eu); f_10fa1080();
  /* 10fa471e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4721 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4724 je 0x10fa4763 */
  if (C.zf) goto L_10fa4763;
  /* 10fa4726 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa472a je 0x10fa4732 */
  if (C.zf) goto L_10fa4732;
  /* 10fa472c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4730 jne 0x10fa474c */
  if (!C.zf) goto L_10fa474c;
L_10fa4732:;
  /* 10fa4732 push 1 */
  push32((uint32_t)(0x1u));
  /* 10fa4734 call 0x10fa1080 */
  push32(0x10fa4739u); f_10fa1080();
  /* 10fa4739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa473c mov esi, eax */
  ESI = (EAX);
  /* 10fa473e push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa4740 call 0x10fa1080 */
  push32(0x10fa4745u); f_10fa1080();
  /* 10fa4745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4748 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa474a je 0x10fa4763 */
  if (C.zf) goto L_10fa4763;
L_10fa474c:;
  /* 10fa474c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa474f push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4750 call 0x10fa1080 */
  push32(0x10fa4755u); f_10fa1080();
  /* 10fa4755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4758 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4759 call dword ptr [0x10fc62ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62ac))), 0x10fa475fu);
  /* 10fa475f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa4761 je 0x10fa476c */
  if (C.zf) goto L_10fa476c;
L_10fa4763:;
  /* 10fa4763 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10fa476a jmp 0x10fa4775 */
  goto L_10fa4775;
L_10fa476c:;
  /* 10fa476c call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10fa4772u);
  /* 10fa4772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10fa4775:;
  /* 10fa4775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4778 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4779 call 0x10fa0fa0 */
  push32(0x10fa477eu); f_10fa0fa0();
  /* 10fa477e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10fa4787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa478a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10fa478d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10fa4790 mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10fa4797 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10fa479c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa47a0 je 0x10fa47b3 */
  if (C.zf) goto L_10fa47b3;
  /* 10fa47a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa47a5 push eax */
  push32((uint32_t)(EAX));
  /* 10fa47a6 call 0x10f9f940 */
  push32(0x10fa47abu); f_10f9f940();
  /* 10fa47ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa47ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10fa47b1 jmp 0x10fa47b5 */
  goto L_10fa47b5;
L_10fa47b3:;
  /* 10fa47b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10fa47b5:;
  /* 10fa47b5 pop esi */
  ESI = (pop32());
  /* 10fa47b6 mov esp, ebp */
  ESP = (EBP);
  /* 10fa47b8 pop ebp */
  EBP = (pop32());
  /* 10fa47b9 ret  */
  ESPCHK(0x10fa4710u, _esp0);
  ESP += 4; return;
}

/* FUN_100147c0 @ 0x10fa47c0 (146 bytes, 52 insns) */
void f_10fa47c0(void) {
  FTRACE(0x10fa47c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa47c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa47c1 mov ebp, esp */
  EBP = (ESP);
  /* 10fa47c3 push ebx */
  push32((uint32_t)(EBX));
  /* 10fa47c4 push esi */
  push32((uint32_t)(ESI));
  /* 10fa47c5 push edi */
  push32((uint32_t)(EDI));
L_10fa47c6:;
  /* 10fa47c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa47ca jne 0x10fa47ea */
  if (!C.zf) goto L_10fa47ea;
  /* 10fa47cc push 0x10fbf148 */
  push32((uint32_t)(0x10fbf148u));
  /* 10fa47d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10fa47d3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10fa47d5 push 0x10fbf810 */
  push32((uint32_t)(0x10fbf810u));
  /* 10fa47da push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa47dc call 0x10f96bd0 */
  push32(0x10fa47e1u); f_10f96bd0();
  /* 10fa47e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa47e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa47e7 jne 0x10fa47ea */
  if (!C.zf) goto L_10fa47ea;
  /* 10fa47e9 int3  */
  x86_unimpl("int3 @ 0x10fa47e9");
L_10fa47ea:;
  /* 10fa47ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10fa47ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10fa47ee jne 0x10fa47c6 */
  if (!C.zf) goto L_10fa47c6;
  /* 10fa47f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa47f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa47f6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa47fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10fa47fe je 0x10fa484d */
  if (C.zf) goto L_10fa484d;
  /* 10fa4800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4803 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10fa4806 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10fa4809 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10fa480b je 0x10fa484d */
  if (C.zf) goto L_10fa484d;
  /* 10fa480d push 2 */
  push32((uint32_t)(0x2u));
  /* 10fa480f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4812 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10fa4815 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4816 call 0x10f985a0 */
  push32(0x10fa481bu); f_10f985a0();
  /* 10fa481b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa481e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4821 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10fa4824 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10fa482a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa482d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10fa4830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4833 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10fa4839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa483c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10fa4843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10fa4846 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10fa484d:;
  /* 10fa484d pop edi */
  EDI = (pop32());
  /* 10fa484e pop esi */
  ESI = (pop32());
  /* 10fa484f pop ebx */
  EBX = (pop32());
  /* 10fa4850 pop ebp */
  EBP = (pop32());
  /* 10fa4851 ret  */
  ESPCHK(0x10fa47c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014860 @ 0x10fa4860 (289 bytes, 97 insns) */
void f_10fa4860(void) {
  FTRACE(0x10fa4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4860 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4861 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4866 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4867 mov eax, dword ptr [0x10fc2c98] */
  EAX = (r32((uint32_t)(0x10fc2c98)));
  /* 10fa486c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa486f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa4876 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa487d jmp 0x10fa4888 */
  goto L_10fa4888;
L_10fa487f:;
  /* 10fa487f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4885 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fa4888:;
  /* 10fa4888 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa488c jae 0x10fa48c1 */
  if (!C.cf) goto L_10fa48c1;
  /* 10fa488e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4894 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa4897 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4898 call 0x10f9a940 */
  push32(0x10fa489du); f_10f9a940();
  /* 10fa489d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48a0 mov esi, eax */
  ESI = (EAX);
  /* 10fa48a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa48a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa48a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10fa48ac push ecx */
  push32((uint32_t)(ECX));
  /* 10fa48ad call 0x10f9a940 */
  push32(0x10fa48b2u); f_10f9a940();
  /* 10fa48b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fa48bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa48bf jmp 0x10fa487f */
  goto L_10fa487f;
L_10fa48c1:;
  /* 10fa48c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa48c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48c7 push eax */
  push32((uint32_t)(EAX));
  /* 10fa48c8 call 0x10f97af0 */
  push32(0x10fa48cdu); f_10f97af0();
  /* 10fa48cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa48d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa48d7 je 0x10fa4979 */
  if (C.zf) goto L_10fa4979;
  /* 10fa48dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa48e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa48e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa48ea jmp 0x10fa48f5 */
  goto L_10fa48f5;
L_10fa48ec:;
  /* 10fa48ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa48ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa48f2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa48f5:;
  /* 10fa48f5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa48f9 jae 0x10fa496a */
  if (!C.cf) goto L_10fa496a;
  /* 10fa48fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa48fe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10fa4901 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4904 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4907 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa490a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa490d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4910 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10fa4913 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4914 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4917 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4918 call 0x10f9aac0 */
  push32(0x10fa491du); f_10f9aac0();
  /* 10fa491d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4920 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4921 call 0x10f9a940 */
  push32(0x10fa4926u); f_10f9a940();
  /* 10fa4926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4929 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa492c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa492e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa4931 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4934 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10fa4937 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa493a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa493d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4940 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4943 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4946 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10fa494a push eax */
  push32((uint32_t)(EAX));
  /* 10fa494b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa494e push ecx */
  push32((uint32_t)(ECX));
  /* 10fa494f call 0x10f9aac0 */
  push32(0x10fa4954u); f_10f9aac0();
  /* 10fa4954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4957 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4958 call 0x10f9a940 */
  push32(0x10fa495du); f_10f9a940();
  /* 10fa495d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4960 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4963 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4965 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4968 jmp 0x10fa48ec */
  goto L_10fa48ec;
L_10fa496a:;
  /* 10fa496a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa496d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fa4970 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4973 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4976 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10fa4979:;
  /* 10fa4979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa497c pop esi */
  ESI = (pop32());
  /* 10fa497d mov esp, ebp */
  ESP = (EBP);
  /* 10fa497f pop ebp */
  EBP = (pop32());
  /* 10fa4980 ret  */
  ESPCHK(0x10fa4860u, _esp0);
  ESP += 4; return;
}

/* FUN_10014990 @ 0x10fa4990 (291 bytes, 97 insns) */
void f_10fa4990(void) {
  FTRACE(0x10fa4990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10fa4990 push ebp */
  push32((uint32_t)(EBP));
  /* 10fa4991 mov ebp, esp */
  EBP = (ESP);
  /* 10fa4993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10fa4996 push esi */
  push32((uint32_t)(ESI));
  /* 10fa4997 mov eax, dword ptr [0x10fc2c98] */
  EAX = (r32((uint32_t)(0x10fc2c98)));
  /* 10fa499c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10fa499f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10fa49a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa49ad jmp 0x10fa49b8 */
  goto L_10fa49b8;
L_10fa49af:;
  /* 10fa49af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa49b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa49b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10fa49b8:;
  /* 10fa49b8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa49bc jae 0x10fa49f2 */
  if (!C.cf) goto L_10fa49f2;
  /* 10fa49be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa49c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa49c4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10fa49c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa49c9 call 0x10f9a940 */
  push32(0x10fa49ceu); f_10f9a940();
  /* 10fa49ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa49d1 mov esi, eax */
  ESI = (EAX);
  /* 10fa49d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa49d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa49d9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10fa49dd push ecx */
  push32((uint32_t)(ECX));
  /* 10fa49de call 0x10f9a940 */
  push32(0x10fa49e3u); f_10f9a940();
  /* 10fa49e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa49e6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa49e9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10fa49ed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10fa49f0 jmp 0x10fa49af */
  goto L_10fa49af;
L_10fa49f2:;
  /* 10fa49f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10fa49f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa49f8 push eax */
  push32((uint32_t)(EAX));
  /* 10fa49f9 call 0x10f97af0 */
  push32(0x10fa49feu); f_10f97af0();
  /* 10fa49fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10fa4a04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4a08 je 0x10fa4aab */
  if (C.zf) goto L_10fa4aab;
  /* 10fa4a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4a11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa4a14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10fa4a1b jmp 0x10fa4a26 */
  goto L_10fa4a26;
L_10fa4a1d:;
  /* 10fa4a1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4a20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10fa4a26:;
  /* 10fa4a26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10fa4a2a jae 0x10fa4a9c */
  if (!C.cf) goto L_10fa4a9c;
  /* 10fa4a2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10fa4a32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa4a3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4a41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10fa4a45 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4a46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a49 push edx */
  push32((uint32_t)(EDX));
  /* 10fa4a4a call 0x10f9aac0 */
  push32(0x10fa4a4fu); f_10f9aac0();
  /* 10fa4a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a52 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4a53 call 0x10f9a940 */
  push32(0x10fa4a58u); f_10f9a940();
  /* 10fa4a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10fa4a63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10fa4a69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10fa4a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10fa4a75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10fa4a78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10fa4a7c push eax */
  push32((uint32_t)(EAX));
  /* 10fa4a7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a80 push ecx */
  push32((uint32_t)(ECX));
  /* 10fa4a81 call 0x10f9aac0 */
  push32(0x10fa4a86u); f_10f9aac0();
  /* 10fa4a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a89 push eax */
  push32((uint32_t)(EAX));
  /* 10fa4a8a call 0x10f9a940 */
  push32(0x10fa4a8fu); f_10f9a940();
  /* 10fa4a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4a97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10fa4a9a jmp 0x10fa4a1d */
  goto L_10fa4a1d;
L_10fa4a9c:;
  /* 10fa4a9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4a9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10fa4aa2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10fa4aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10fa4aa8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10fa4aab:;
  /* 10fa4aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10fa4aae pop esi */
  ESI = (pop32());
  /* 10fa4aaf mov esp, ebp */
  ESP = (EBP);
  /* 10fa4ab1 pop ebp */
  EBP = (pop32());
  /* 10fa4ab2 ret  */
  ESPCHK(0x10fa4990u, _esp0);
  ESP += 4; return;
}

