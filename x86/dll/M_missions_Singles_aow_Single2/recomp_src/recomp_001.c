#include "recomp.h"

/* FUN_1000bcf0 @ 0x1219bcf0 (116 bytes, 34 insns) */
void f_1219bcf0(void) {
  FTRACE(0x1219bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1219bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219bcf4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1219bcfb push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bcfd call 0x1219b510 */
  push32(0x1219bd02u); f_1219b510();
  /* 1219bd02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bd05 call 0x1219d400 */
  push32(0x1219bd0au); f_1219d400();
  /* 1219bd0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219bd0c jge 0x1219bd15 */
  if ((C.sf==C.of)) goto L_1219bd15;
  /* 1219bd0e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1219bd15:;
  /* 1219bd15 push 9 */
  push32((uint32_t)(0x9u));
  /* 1219bd17 call 0x1219b5b0 */
  push32(0x1219bd1cu); f_1219b5b0();
  /* 1219bd1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bd1f push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bd21 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bd23 mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219bd28 push eax */
  push32((uint32_t)(EAX));
  /* 1219bd29 call dword ptr [0x121c637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c637c))), 0x1219bd2fu);
  /* 1219bd2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219bd31 jne 0x1219bd5d */
  if (!C.zf) goto L_1219bd5d;
  /* 1219bd33 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x1219bd39u);
  /* 1219bd39 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bd3c jne 0x1219bd56 */
  if (!C.zf) goto L_1219bd56;
  /* 1219bd3e call 0x1219f9f0 */
  push32(0x1219bd43u); f_1219f9f0();
  /* 1219bd43 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1219bd49 call 0x1219f9e0 */
  push32(0x1219bd4eu); f_1219f9e0();
  /* 1219bd4e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1219bd54 jmp 0x1219bd5d */
  goto L_1219bd5d;
L_1219bd56:;
  /* 1219bd56 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1219bd5d:;
  /* 1219bd5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bd60 mov esp, ebp */
  ESP = (EBP);
  /* 1219bd62 pop ebp */
  EBP = (pop32());
  /* 1219bd63 ret  */
  ESPCHK(0x1219bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd70 @ 0x1219bd70 (10 bytes, 5 insns) */
void f_1219bd70(void) {
  FTRACE(0x1219bd70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bd70 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bd71 mov ebp, esp */
  EBP = (ESP);
  /* 1219bd73 call 0x1219bcf0 */
  push32(0x1219bd78u); f_1219bcf0();
  /* 1219bd78 pop ebp */
  EBP = (pop32());
  /* 1219bd79 ret  */
  ESPCHK(0x1219bd70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd80 @ 0x1219bd80 (10 bytes, 5 insns) */
void f_1219bd80(void) {
  FTRACE(0x1219bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bd81 mov ebp, esp */
  EBP = (ESP);
  /* 1219bd83 mov eax, dword ptr [0x121c1c94] */
  EAX = (r32((uint32_t)(0x121c1c94)));
  /* 1219bd88 pop ebp */
  EBP = (pop32());
  /* 1219bd89 ret  */
  ESPCHK(0x1219bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x1219bd90 (31 bytes, 11 insns) */
void f_1219bd90(void) {
  FTRACE(0x1219bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bd91 mov ebp, esp */
  EBP = (ESP);
  /* 1219bd93 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bd9a jbe 0x1219bda0 */
  if ((C.cf||C.zf)) goto L_1219bda0;
  /* 1219bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219bd9e jmp 0x1219bdad */
  goto L_1219bdad;
L_1219bda0:;
  /* 1219bda0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bda3 mov dword ptr [0x121c1c94], eax */
  w32((uint32_t)(0x121c1c94), (EAX));
  /* 1219bda8 mov eax, 1 */
  EAX = (0x1u);
L_1219bdad:;
  /* 1219bdad pop ebp */
  EBP = (pop32());
  /* 1219bdae ret  */
  ESPCHK(0x1219bd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x1219bdb0 (89 bytes, 20 insns) */
void f_1219bdb0(void) {
  FTRACE(0x1219bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 1219bdb3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1219bdb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219bdba mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219bdbf push eax */
  push32((uint32_t)(EAX));
  /* 1219bdc0 call dword ptr [0x121c62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f8))), 0x1219bdc6u);
  /* 1219bdc6 mov dword ptr [0x121c50a8], eax */
  w32((uint32_t)(0x121c50a8), (EAX));
  /* 1219bdcb cmp dword ptr [0x121c50a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c50a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bdd2 jne 0x1219bdd8 */
  if (!C.zf) goto L_1219bdd8;
  /* 1219bdd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219bdd6 jmp 0x1219be07 */
  goto L_1219be07;
L_1219bdd8:;
  /* 1219bdd8 mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219bdde mov dword ptr [0x121c509c], ecx */
  w32((uint32_t)(0x121c509c), (ECX));
  /* 1219bde4 mov dword ptr [0x121c50a0], 0 */
  w32((uint32_t)(0x121c50a0), (0x0u));
  /* 1219bdee mov dword ptr [0x121c50a4], 0 */
  w32((uint32_t)(0x121c50a4), (0x0u));
  /* 1219bdf8 mov dword ptr [0x121c5088], 0x10 */
  w32((uint32_t)(0x121c5088), (0x10u));
  /* 1219be02 mov eax, 1 */
  EAX = (0x1u);
L_1219be07:;
  /* 1219be07 pop ebp */
  EBP = (pop32());
  /* 1219be08 ret  */
  ESPCHK(0x1219bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be10 @ 0x1219be10 (85 bytes, 29 insns) */
void f_1219be10(void) {
  FTRACE(0x1219be10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219be10 push ebp */
  push32((uint32_t)(EBP));
  /* 1219be11 mov ebp, esp */
  EBP = (ESP);
  /* 1219be13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219be16 mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219be1b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219be1e mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219be24 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219be26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219be29 mov edx, dword ptr [0x121c50a8] */
  EDX = (r32((uint32_t)(0x121c50a8)));
  /* 1219be2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1219be32:;
  /* 1219be32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219be35 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219be38 jae 0x1219be5f */
  if (!C.cf) goto L_1219be5f;
  /* 1219be3a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219be3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219be40 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219be43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219be46 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219be4d jae 0x1219be54 */
  if (!C.cf) goto L_1219be54;
  /* 1219be4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219be52 jmp 0x1219be61 */
  goto L_1219be61;
L_1219be54:;
  /* 1219be54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219be57 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219be5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219be5d jmp 0x1219be32 */
  goto L_1219be32;
L_1219be5f:;
  /* 1219be5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219be61:;
  /* 1219be61 mov esp, ebp */
  ESP = (EBP);
  /* 1219be63 pop ebp */
  EBP = (pop32());
  /* 1219be64 ret  */
  ESPCHK(0x1219be10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be70 @ 0x1219be70 (95 bytes, 33 insns) */
void f_1219be70(void) {
  FTRACE(0x1219be70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219be70 push ebp */
  push32((uint32_t)(EBP));
  /* 1219be71 mov ebp, esp */
  EBP = (ESP);
  /* 1219be73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219be76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219be79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219be7c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219be7f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219be82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219be85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1219be88 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219be8b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219be90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219be93 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219be95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219be98 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219be9b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219be9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219be9f jne 0x1219bec1 */
  if (!C.zf) goto L_1219bec1;
  /* 1219bea1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219bea4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1219bea7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219bea9 jne 0x1219bec1 */
  if (!C.zf) goto L_1219bec1;
  /* 1219beab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219beae and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219beb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219beb6 je 0x1219bec1 */
  if (C.zf) goto L_1219bec1;
  /* 1219beb8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1219bebf jmp 0x1219bec8 */
  goto L_1219bec8;
L_1219bec1:;
  /* 1219bec1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1219bec8:;
  /* 1219bec8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219becb mov esp, ebp */
  ESP = (EBP);
  /* 1219becd pop ebp */
  EBP = (pop32());
  /* 1219bece ret  */
  ESPCHK(0x1219be70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bed0 @ 0x1219bed0 (1485 bytes, 453 insns) */
void f_1219bed0(void) {
  FTRACE(0x1219bed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219bed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219bed1 mov ebp, esp */
  EBP = (ESP);
  /* 1219bed3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bed9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219bedc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1219bedf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bee2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bee5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bee8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219beeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219beee shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1219bef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219bef4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bef7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219befd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bf00 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1219bf07 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219bf0a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219bf0d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bf10 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219bf13 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219bf16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219bf18 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bf1b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1219bf1e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219bf21 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bf24 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1219bf27 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219bf2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219bf2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1219bf2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219bf32 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1219bf35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219bf38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219bf3b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1219bf3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219bf40 jne 0x1219c068 */
  if (!C.zf) goto L_1219c068;
  /* 1219bf46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219bf49 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219bf4c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bf4f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219bf52 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bf56 jbe 0x1219bf5f */
  if ((C.cf||C.zf)) goto L_1219bf5f;
  /* 1219bf58 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1219bf5f:;
  /* 1219bf5f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219bf62 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219bf65 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219bf68 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bf6b jne 0x1219c041 */
  if (!C.zf) goto L_1219c041;
  /* 1219bf71 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219bf75 jae 0x1219bfd6 */
  if (!C.cf) goto L_1219bfd6;
  /* 1219bf77 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219bf7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219bf7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219bf81 not eax */
  EAX = (~(EAX));
  /* 1219bf83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bf86 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bf89 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1219bf8d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219bf8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bf92 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bf95 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1219bf99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bf9c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bf9f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1219bfa2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219bfa5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bfa8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bfab mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1219bfae mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bfb1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219bfb4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219bfb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219bfba jne 0x1219bfd4 */
  if (!C.zf) goto L_1219bfd4;
  /* 1219bfbc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219bfc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219bfc4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219bfc6 not eax */
  EAX = (~(EAX));
  /* 1219bfc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bfcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219bfcd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219bfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219bfd2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1219bfd4:;
  /* 1219bfd4 jmp 0x1219c041 */
  goto L_1219c041;
L_1219bfd6:;
  /* 1219bfd6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219bfd9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219bfdc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219bfe1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219bfe3 not edx */
  EDX = (~(EDX));
  /* 1219bfe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bfe8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bfeb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1219bff2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219bff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219bff7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219bffa mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1219c001 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c004 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c007 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219c00a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c00d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c010 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c013 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1219c016 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c019 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c01c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219c020 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c022 jne 0x1219c041 */
  if (!C.zf) goto L_1219c041;
  /* 1219c024 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c027 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c02a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c02f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c031 not edx */
  EDX = (~(EDX));
  /* 1219c033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c036 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c039 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c03e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1219c041:;
  /* 1219c041 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c044 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219c047 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c04a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219c04d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1219c050 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c053 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c056 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c059 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219c05c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219c05f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c062 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c065 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1219c068:;
  /* 1219c068 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c06b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1219c06e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c071 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219c074 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c078 jbe 0x1219c081 */
  if ((C.cf||C.zf)) goto L_1219c081;
  /* 1219c07a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1219c081:;
  /* 1219c081 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c084 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1219c087 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c089 jne 0x1219c1e5 */
  if (!C.zf) goto L_1219c1e5;
  /* 1219c08f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c092 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c095 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1219c098 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c09b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1219c09e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c0a1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1219c0a4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c0a8 jbe 0x1219c0b1 */
  if ((C.cf||C.zf)) goto L_1219c0b1;
  /* 1219c0aa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1219c0b1:;
  /* 1219c0b1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c0b4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c0b7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1219c0ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c0bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219c0c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c0c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1219c0c6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c0ca jbe 0x1219c0d3 */
  if ((C.cf||C.zf)) goto L_1219c0d3;
  /* 1219c0cc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1219c0d3:;
  /* 1219c0d3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c0d6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c0d9 je 0x1219c1df */
  if (C.zf) goto L_1219c1df;
  /* 1219c0df mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c0e2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c0e5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c0e8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c0eb jne 0x1219c1c1 */
  if (!C.zf) goto L_1219c1c1;
  /* 1219c0f1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c0f5 jae 0x1219c156 */
  if (!C.cf) goto L_1219c156;
  /* 1219c0f7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c0fc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c0ff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c101 not edx */
  EDX = (~(EDX));
  /* 1219c103 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c106 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c109 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1219c10d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c10f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c112 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c115 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1219c119 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c11c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c11f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219c122 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c125 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c128 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c12b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1219c12e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c131 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c134 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219c138 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c13a jne 0x1219c154 */
  if (!C.zf) goto L_1219c154;
  /* 1219c13c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c141 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c144 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c146 not edx */
  EDX = (~(EDX));
  /* 1219c148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c14b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219c14d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c14f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c152 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219c154:;
  /* 1219c154 jmp 0x1219c1c1 */
  goto L_1219c1c1;
L_1219c156:;
  /* 1219c156 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c159 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c15c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c161 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c163 not eax */
  EAX = (~(EAX));
  /* 1219c165 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c168 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c16b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1219c172 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c177 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c17a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1219c181 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c184 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c187 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1219c18a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c18d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c190 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c193 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1219c196 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c199 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c19c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219c1a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219c1a2 jne 0x1219c1c1 */
  if (!C.zf) goto L_1219c1c1;
  /* 1219c1a4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c1a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c1aa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c1af shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c1b1 not eax */
  EAX = (~(EAX));
  /* 1219c1b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c1b6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c1b9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219c1bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c1be mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219c1c1:;
  /* 1219c1c1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c1c4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219c1c7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c1ca mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c1cd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219c1d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c1d3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219c1d6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c1d9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219c1dc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1219c1df:;
  /* 1219c1df mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c1e2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1219c1e5:;
  /* 1219c1e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c1e8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1219c1eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c1ed jne 0x1219c1fb */
  if (!C.zf) goto L_1219c1fb;
  /* 1219c1ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219c1f2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c1f5 je 0x1219c30b */
  if (C.zf) goto L_1219c30b;
L_1219c1fb:;
  /* 1219c1fb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c1fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c201 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1219c204 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1219c207 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c20a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c20d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c210 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219c213 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c216 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c219 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1219c21c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c21f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c222 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1219c225 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c228 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c22b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c22e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219c231 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c234 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c237 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c23a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c23d jne 0x1219c30b */
  if (!C.zf) goto L_1219c30b;
  /* 1219c243 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c247 jae 0x1219c2a4 */
  if (!C.cf) goto L_1219c2a4;
  /* 1219c249 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c24c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c24f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219c253 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c256 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c259 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219c25c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219c25f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c262 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c265 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1219c268 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219c26a jne 0x1219c282 */
  if (!C.zf) goto L_1219c282;
  /* 1219c26c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c271 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c274 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c279 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219c27b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c27d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c280 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219c282:;
  /* 1219c282 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c287 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c28a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c28f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c292 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1219c296 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c298 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c29b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c29e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1219c2a2 jmp 0x1219c30b */
  goto L_1219c30b;
L_1219c2a4:;
  /* 1219c2a4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c2a7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c2aa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219c2ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c2b1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c2b4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219c2b7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219c2ba mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c2bd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c2c0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1219c2c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219c2c5 jne 0x1219c2e2 */
  if (!C.zf) goto L_1219c2e2;
  /* 1219c2c7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c2ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c2cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c2d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c2d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c2da or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c2df mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1219c2e2:;
  /* 1219c2e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c2e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c2e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c2ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c2ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c2f2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c2f5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1219c2fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c2fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c301 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1219c304 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1219c30b:;
  /* 1219c30b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c30e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c311 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1219c313 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c316 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c319 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c31c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1219c31f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c322 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219c324 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c327 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c32a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219c32c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c32f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c332 jne 0x1219c499 */
  if (!C.zf) goto L_1219c499;
  /* 1219c338 cmp dword ptr [0x121c50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c33f je 0x1219c488 */
  if (C.zf) goto L_1219c488;
  /* 1219c345 mov eax, dword ptr [0x121c5098] */
  EAX = (r32((uint32_t)(0x121c5098)));
  /* 1219c34a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1219c34d mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c353 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219c356 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c358 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1219c35b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1219c360 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219c365 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c368 push eax */
  push32((uint32_t)(EAX));
  /* 1219c369 call dword ptr [0x121c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c639c))), 0x1219c36fu);
  /* 1219c36f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c374 mov ecx, dword ptr [0x121c5098] */
  ECX = (r32((uint32_t)(0x121c5098)));
  /* 1219c37a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c37c mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c381 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219c384 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c386 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c38c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219c38f mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c394 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219c397 mov edx, dword ptr [0x121c5098] */
  EDX = (r32((uint32_t)(0x121c5098)));
  /* 1219c39d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1219c3a8 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219c3b0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1219c3b3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c3b6 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219c3be mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1219c3c1 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219c3ca movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1219c3ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c3d0 jne 0x1219c3e6 */
  if (!C.zf) goto L_1219c3e6;
  /* 1219c3d2 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3d8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219c3db and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1219c3dd mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3e3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1219c3e6:;
  /* 1219c3e6 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c3ec cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c3f0 jne 0x1219c488 */
  if (!C.zf) goto L_1219c488;
  /* 1219c3f6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219c3fb push 0 */
  push32((uint32_t)(0x0u));
  /* 1219c3fd mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c402 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219c405 push ecx */
  push32((uint32_t)(ECX));
  /* 1219c406 call dword ptr [0x121c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c639c))), 0x1219c40cu);
  /* 1219c40c mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c412 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219c415 push eax */
  push32((uint32_t)(EAX));
  /* 1219c416 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219c418 mov ecx, dword ptr [0x121c50ac] */
  ECX = (r32((uint32_t)(0x121c50ac)));
  /* 1219c41e push ecx */
  push32((uint32_t)(ECX));
  /* 1219c41f call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219c425u);
  /* 1219c425 mov edx, dword ptr [0x121c50a4] */
  EDX = (r32((uint32_t)(0x121c50a4)));
  /* 1219c42b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219c42e mov eax, dword ptr [0x121c50a8] */
  EAX = (r32((uint32_t)(0x121c50a8)));
  /* 1219c433 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c435 mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c43b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c43e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c440 push eax */
  push32((uint32_t)(EAX));
  /* 1219c441 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c447 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c44a push edx */
  push32((uint32_t)(EDX));
  /* 1219c44b mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219c450 push eax */
  push32((uint32_t)(EAX));
  /* 1219c451 call 0x1219fa00 */
  push32(0x1219c456u); f_1219fa00();
  /* 1219c456 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c459 mov ecx, dword ptr [0x121c50a4] */
  ECX = (r32((uint32_t)(0x121c50a4)));
  /* 1219c45f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c462 mov dword ptr [0x121c50a4], ecx */
  w32((uint32_t)(0x121c50a4), (ECX));
  /* 1219c468 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c46b cmp edx, dword ptr [0x121c50a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121c50a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c471 jbe 0x1219c47c */
  if ((C.cf||C.zf)) goto L_1219c47c;
  /* 1219c473 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c476 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c479 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1219c47c:;
  /* 1219c47c mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219c482 mov dword ptr [0x121c509c], ecx */
  w32((uint32_t)(0x121c509c), (ECX));
L_1219c488:;
  /* 1219c488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c48b mov dword ptr [0x121c50a0], edx */
  w32((uint32_t)(0x121c50a0), (EDX));
  /* 1219c491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c494 mov dword ptr [0x121c5098], eax */
  w32((uint32_t)(0x121c5098), (EAX));
L_1219c499:;
  /* 1219c499 mov esp, ebp */
  ESP = (EBP);
  /* 1219c49b pop ebp */
  EBP = (pop32());
  /* 1219c49c ret  */
  ESPCHK(0x1219bed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a0 @ 0x1219c4a0 (1334 bytes, 427 insns) */
void f_1219c4a0(void) {
  FTRACE(0x1219c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1219c4a3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c4a6 push esi */
  push32((uint32_t)(ESI));
  /* 1219c4a7 mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219c4ac imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219c4af mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219c4b5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c4b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1219c4ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219c4bd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c4c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1219c4c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1219c4c6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c4c9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1219c4cc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c4cf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219c4d2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c4d6 jge 0x1219c4ec */
  if ((C.sf==C.of)) goto L_1219c4ec;
  /* 1219c4d8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219c4db mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c4de shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c4e0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219c4e3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1219c4ea jmp 0x1219c501 */
  goto L_1219c501;
L_1219c4ec:;
  /* 1219c4ec mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1219c4f3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c4f6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c4f9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219c4fc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c4fe mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1219c501:;
  /* 1219c501 mov ecx, dword ptr [0x121c509c] */
  ECX = (r32((uint32_t)(0x121c509c)));
  /* 1219c507 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1219c50a:;
  /* 1219c50a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c50d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c510 jae 0x1219c536 */
  if (!C.cf) goto L_1219c536;
  /* 1219c512 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c515 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c518 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1219c51a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c51d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c520 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1219c523 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c527 je 0x1219c52b */
  if (C.zf) goto L_1219c52b;
  /* 1219c529 jmp 0x1219c536 */
  goto L_1219c536;
L_1219c52b:;
  /* 1219c52b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c52e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c531 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1219c534 jmp 0x1219c50a */
  goto L_1219c50a;
L_1219c536:;
  /* 1219c536 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c539 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c53c jne 0x1219c61d */
  if (!C.zf) goto L_1219c61d;
  /* 1219c542 mov eax, dword ptr [0x121c50a8] */
  EAX = (r32((uint32_t)(0x121c50a8)));
  /* 1219c547 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1219c54a:;
  /* 1219c54a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c54d cmp ecx, dword ptr [0x121c509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c553 jae 0x1219c579 */
  if (!C.cf) goto L_1219c579;
  /* 1219c555 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c558 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c55b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1219c55d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c560 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c563 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1219c566 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219c56a je 0x1219c56e */
  if (C.zf) goto L_1219c56e;
  /* 1219c56c jmp 0x1219c579 */
  goto L_1219c579;
L_1219c56e:;
  /* 1219c56e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c571 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c574 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219c577 jmp 0x1219c54a */
  goto L_1219c54a;
L_1219c579:;
  /* 1219c579 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c57c cmp ecx, dword ptr [0x121c509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c582 jne 0x1219c61d */
  if (!C.zf) goto L_1219c61d;
L_1219c588:;
  /* 1219c588 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c58b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c58e jae 0x1219c5a6 */
  if (!C.cf) goto L_1219c5a6;
  /* 1219c590 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c593 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c597 je 0x1219c59b */
  if (C.zf) goto L_1219c59b;
  /* 1219c599 jmp 0x1219c5a6 */
  goto L_1219c5a6;
L_1219c59b:;
  /* 1219c59b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c59e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c5a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1219c5a4 jmp 0x1219c588 */
  goto L_1219c588;
L_1219c5a6:;
  /* 1219c5a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c5ac jne 0x1219c5f7 */
  if (!C.zf) goto L_1219c5f7;
  /* 1219c5ae mov eax, dword ptr [0x121c50a8] */
  EAX = (r32((uint32_t)(0x121c50a8)));
  /* 1219c5b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1219c5b6:;
  /* 1219c5b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5b9 cmp ecx, dword ptr [0x121c509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c5bf jae 0x1219c5d7 */
  if (!C.cf) goto L_1219c5d7;
  /* 1219c5c1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5c4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c5c8 je 0x1219c5cc */
  if (C.zf) goto L_1219c5cc;
  /* 1219c5ca jmp 0x1219c5d7 */
  goto L_1219c5d7;
L_1219c5cc:;
  /* 1219c5cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5cf add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c5d2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219c5d5 jmp 0x1219c5b6 */
  goto L_1219c5b6;
L_1219c5d7:;
  /* 1219c5d7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5da cmp ecx, dword ptr [0x121c509c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c509c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c5e0 jne 0x1219c5f7 */
  if (!C.zf) goto L_1219c5f7;
  /* 1219c5e2 call 0x1219c9e0 */
  push32(0x1219c5e7u); f_1219c9e0();
  /* 1219c5e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219c5ea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c5ee jne 0x1219c5f7 */
  if (!C.zf) goto L_1219c5f7;
  /* 1219c5f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c5f2 jmp 0x1219c9d1 */
  goto L_1219c9d1;
L_1219c5f7:;
  /* 1219c5f7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c5fa push edx */
  push32((uint32_t)(EDX));
  /* 1219c5fb call 0x1219caf0 */
  push32(0x1219c600u); f_1219caf0();
  /* 1219c600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c603 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c606 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1219c609 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1219c60b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c60e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219c611 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c614 jne 0x1219c61d */
  if (!C.zf) goto L_1219c61d;
  /* 1219c616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c618 jmp 0x1219c9d1 */
  goto L_1219c9d1;
L_1219c61d:;
  /* 1219c61d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c620 mov dword ptr [0x121c509c], edx */
  w32((uint32_t)(0x121c509c), (EDX));
  /* 1219c626 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c629 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219c62c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1219c62f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219c634 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1219c637 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c63b je 0x1219c660 */
  if (C.zf) goto L_1219c660;
  /* 1219c63d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c640 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c643 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c646 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1219c64a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c64d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c650 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c653 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1219c65a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1219c65c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219c65e jne 0x1219c695 */
  if (!C.zf) goto L_1219c695;
L_1219c660:;
  /* 1219c660 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1219c667:;
  /* 1219c667 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c66a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c66d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c670 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1219c674 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c677 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c67a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c67d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1219c684 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1219c686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219c688 jne 0x1219c695 */
  if (!C.zf) goto L_1219c695;
  /* 1219c68a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c68d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c690 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1219c693 jmp 0x1219c667 */
  goto L_1219c667;
L_1219c695:;
  /* 1219c695 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c698 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219c69e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c6a1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1219c6a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219c6ab mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1219c6b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c6b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c6b8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219c6bb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1219c6bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1219c6c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c6c6 jne 0x1219c6e2 */
  if (!C.zf) goto L_1219c6e2;
  /* 1219c6c8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1219c6cf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c6d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c6d5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1219c6d8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1219c6df mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1219c6e2:;
  /* 1219c6e2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c6e6 jl 0x1219c6fb */
  if ((C.sf!=C.of)) goto L_1219c6fb;
  /* 1219c6e8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219c6eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1219c6ed mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1219c6f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c6f3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c6f6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1219c6f9 jmp 0x1219c6e2 */
  goto L_1219c6e2;
L_1219c6fb:;
  /* 1219c6fb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c6fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c701 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1219c705 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1219c708 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c70b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219c70d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c710 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219c713 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c716 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1219c719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c71c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1219c71f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c723 jle 0x1219c72c */
  if ((C.zf||C.sf!=C.of)) goto L_1219c72c;
  /* 1219c725 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1219c72c:;
  /* 1219c72c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c72f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c732 je 0x1219c950 */
  if (C.zf) goto L_1219c950;
  /* 1219c738 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c73b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c73e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c741 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c744 jne 0x1219c81a */
  if (!C.zf) goto L_1219c81a;
  /* 1219c74a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c74e jge 0x1219c7af */
  if ((C.sf==C.of)) goto L_1219c7af;
  /* 1219c750 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c755 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c758 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c75a not eax */
  EAX = (~(EAX));
  /* 1219c75c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c75f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c762 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1219c766 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c768 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c76b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c76e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1219c772 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c775 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c778 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1219c77b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c77e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c781 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c784 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1219c787 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c78a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c78d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219c791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219c793 jne 0x1219c7ad */
  if (!C.zf) goto L_1219c7ad;
  /* 1219c795 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c79a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c79d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c79f not eax */
  EAX = (~(EAX));
  /* 1219c7a1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c7a4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219c7a6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219c7a8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c7ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1219c7ad:;
  /* 1219c7ad jmp 0x1219c81a */
  goto L_1219c81a;
L_1219c7af:;
  /* 1219c7af mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c7b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c7b5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c7ba shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c7bc not edx */
  EDX = (~(EDX));
  /* 1219c7be mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c7c1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c7c4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1219c7cb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c7cd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c7d0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c7d3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1219c7da mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c7dd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c7e0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219c7e3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219c7e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c7e9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c7ec mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1219c7ef mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c7f2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c7f5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219c7f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c7fb jne 0x1219c81a */
  if (!C.zf) goto L_1219c81a;
  /* 1219c7fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219c800 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c803 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c808 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c80a not edx */
  EDX = (~(EDX));
  /* 1219c80c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c80f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c812 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219c814 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c817 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1219c81a:;
  /* 1219c81a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c81d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219c820 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c823 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219c826 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1219c829 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c82c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c82f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c832 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219c835 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219c838 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c83c je 0x1219c950 */
  if (C.zf) goto L_1219c950;
  /* 1219c842 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c845 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c848 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1219c84b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219c84e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c851 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c854 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c857 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219c85a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c85d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c860 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219c863 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219c866 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c869 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1219c86c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c86f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c872 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c875 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1219c878 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c87b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c87e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219c881 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c884 jne 0x1219c950 */
  if (!C.zf) goto L_1219c950;
  /* 1219c88a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c88e jge 0x1219c8ea */
  if ((C.sf==C.of)) goto L_1219c8ea;
  /* 1219c890 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c893 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c896 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219c89a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c89d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c8a0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1219c8a3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219c8a5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c8a8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c8ab mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1219c8ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c8b0 jne 0x1219c8c8 */
  if (!C.zf) goto L_1219c8c8;
  /* 1219c8b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c8b7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c8ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c8bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c8bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219c8c1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219c8c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c8c6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1219c8c8:;
  /* 1219c8c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c8cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c8d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c8d2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c8d5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c8d8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1219c8dc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c8de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c8e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c8e4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1219c8e8 jmp 0x1219c950 */
  goto L_1219c950;
L_1219c8ea:;
  /* 1219c8ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c8ed add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c8f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219c8f4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c8f7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c8fa mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1219c8fd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219c8ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c902 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c905 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1219c908 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c90a jne 0x1219c927 */
  if (!C.zf) goto L_1219c927;
  /* 1219c90c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c90f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c912 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219c917 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219c919 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c91c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219c91f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219c921 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c924 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219c927:;
  /* 1219c927 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219c92a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219c92d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219c932 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219c934 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c937 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c93a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1219c941 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219c943 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c946 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c949 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1219c950:;
  /* 1219c950 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c954 je 0x1219c96a */
  if (C.zf) goto L_1219c96a;
  /* 1219c956 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c95c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1219c95e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c961 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c964 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219c967 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1219c96a:;
  /* 1219c96a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c96d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c970 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1219c973 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c976 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c979 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c97c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1219c97e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219c981 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c984 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c987 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c98a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1219c98d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c990 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219c992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c995 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219c997 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c99a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219c99d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1219c99f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219c9a1 jne 0x1219c9c3 */
  if (!C.zf) goto L_1219c9c3;
  /* 1219c9a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219c9a6 cmp eax, dword ptr [0x121c50a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c50a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c9ac jne 0x1219c9c3 */
  if (!C.zf) goto L_1219c9c3;
  /* 1219c9ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c9b1 cmp ecx, dword ptr [0x121c5098] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c5098))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c9b7 jne 0x1219c9c3 */
  if (!C.zf) goto L_1219c9c3;
  /* 1219c9b9 mov dword ptr [0x121c50a0], 0 */
  w32((uint32_t)(0x121c50a0), (0x0u));
L_1219c9c3:;
  /* 1219c9c3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1219c9c6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219c9c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1219c9cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219c9ce add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1219c9d1:;
  /* 1219c9d1 pop esi */
  ESI = (pop32());
  /* 1219c9d2 mov esp, ebp */
  ESP = (EBP);
  /* 1219c9d4 pop ebp */
  EBP = (pop32());
  /* 1219c9d5 ret  */
  ESPCHK(0x1219c4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x1219c9e0 (271 bytes, 78 insns) */
void f_1219c9e0(void) {
  FTRACE(0x1219c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219c9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219c9e4 mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219c9e9 cmp eax, dword ptr [0x121c5088] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c5088))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219c9ef jne 0x1219ca3b */
  if (!C.zf) goto L_1219ca3b;
  /* 1219c9f1 mov ecx, dword ptr [0x121c5088] */
  ECX = (r32((uint32_t)(0x121c5088)));
  /* 1219c9f7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219c9fa imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219c9fd push ecx */
  push32((uint32_t)(ECX));
  /* 1219c9fe mov edx, dword ptr [0x121c50a8] */
  EDX = (r32((uint32_t)(0x121c50a8)));
  /* 1219ca04 push edx */
  push32((uint32_t)(EDX));
  /* 1219ca05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ca07 mov eax, dword ptr [0x121c50ac] */
  EAX = (r32((uint32_t)(0x121c50ac)));
  /* 1219ca0c push eax */
  push32((uint32_t)(EAX));
  /* 1219ca0d call dword ptr [0x121c6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6300))), 0x1219ca13u);
  /* 1219ca13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219ca16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ca1a jne 0x1219ca23 */
  if (!C.zf) goto L_1219ca23;
  /* 1219ca1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ca1e jmp 0x1219caeb */
  goto L_1219caeb;
L_1219ca23:;
  /* 1219ca23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca26 mov dword ptr [0x121c50a8], ecx */
  w32((uint32_t)(0x121c50a8), (ECX));
  /* 1219ca2c mov edx, dword ptr [0x121c5088] */
  EDX = (r32((uint32_t)(0x121c5088)));
  /* 1219ca32 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ca35 mov dword ptr [0x121c5088], edx */
  w32((uint32_t)(0x121c5088), (EDX));
L_1219ca3b:;
  /* 1219ca3b mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219ca40 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219ca43 mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219ca49 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ca4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219ca4e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1219ca53 push 8 */
  push32((uint32_t)(0x8u));
  /* 1219ca55 mov edx, dword ptr [0x121c50ac] */
  EDX = (r32((uint32_t)(0x121c50ac)));
  /* 1219ca5b push edx */
  push32((uint32_t)(EDX));
  /* 1219ca5c call dword ptr [0x121c62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f8))), 0x1219ca62u);
  /* 1219ca62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca65 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1219ca68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca6b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ca6f jne 0x1219ca75 */
  if (!C.zf) goto L_1219ca75;
  /* 1219ca71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ca73 jmp 0x1219caeb */
  goto L_1219caeb;
L_1219ca75:;
  /* 1219ca75 push 4 */
  push32((uint32_t)(0x4u));
  /* 1219ca77 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1219ca7c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1219ca81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ca83 call dword ptr [0x121c62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f0))), 0x1219ca89u);
  /* 1219ca89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca8c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1219ca8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca92 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ca96 jne 0x1219cab2 */
  if (!C.zf) goto L_1219cab2;
  /* 1219ca98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ca9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219ca9e push ecx */
  push32((uint32_t)(ECX));
  /* 1219ca9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1219caa1 mov edx, dword ptr [0x121c50ac] */
  EDX = (r32((uint32_t)(0x121c50ac)));
  /* 1219caa7 push edx */
  push32((uint32_t)(EDX));
  /* 1219caa8 call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219caaeu);
  /* 1219caae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219cab0 jmp 0x1219caeb */
  goto L_1219caeb;
L_1219cab2:;
  /* 1219cab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cab5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1219cabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cabe mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1219cac5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cac8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1219cacf mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219cad4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cad7 mov dword ptr [0x121c50a4], eax */
  w32((uint32_t)(0x121c50a4), (EAX));
  /* 1219cadc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cadf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1219cae2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1219cae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1219caeb:;
  /* 1219caeb mov esp, ebp */
  ESP = (EBP);
  /* 1219caed pop ebp */
  EBP = (pop32());
  /* 1219caee ret  */
  ESPCHK(0x1219c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caf0 @ 0x1219caf0 (494 bytes, 149 insns) */
void f_1219caf0(void) {
  FTRACE(0x1219caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219caf1 mov ebp, esp */
  EBP = (ESP);
  /* 1219caf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219caf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219caf9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219cafc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1219caff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cb02 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219cb05 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219cb08 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1219cb0f:;
  /* 1219cb0f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cb13 jl 0x1219cb28 */
  if ((C.sf!=C.of)) goto L_1219cb28;
  /* 1219cb15 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219cb18 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1219cb1a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219cb1d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cb20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cb23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1219cb26 jmp 0x1219cb0f */
  goto L_1219cb0f;
L_1219cb28:;
  /* 1219cb28 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cb2b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219cb31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cb34 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1219cb3b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219cb3e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1219cb45 jmp 0x1219cb50 */
  goto L_1219cb50;
L_1219cb47:;
  /* 1219cb47 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cb4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cb4d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1219cb50:;
  /* 1219cb50 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cb54 jge 0x1219cb76 */
  if ((C.sf==C.of)) goto L_1219cb76;
  /* 1219cb56 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cb59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219cb5c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1219cb5f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219cb62 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cb65 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cb68 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1219cb6b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cb6e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cb71 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1219cb74 jmp 0x1219cb47 */
  goto L_1219cb47;
L_1219cb76:;
  /* 1219cb76 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cb79 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1219cb7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cb7f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219cb82 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cb84 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1219cb87 push 4 */
  push32((uint32_t)(0x4u));
  /* 1219cb89 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1219cb8e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219cb93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cb96 push edx */
  push32((uint32_t)(EDX));
  /* 1219cb97 call dword ptr [0x121c62f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f0))), 0x1219cb9du);
  /* 1219cb9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219cb9f jne 0x1219cba9 */
  if (!C.zf) goto L_1219cba9;
  /* 1219cba1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219cba4 jmp 0x1219ccda */
  goto L_1219ccda;
L_1219cba9:;
  /* 1219cba9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cbac add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cbb1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1219cbb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cbb7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219cbba jmp 0x1219cbc8 */
  goto L_1219cbc8;
L_1219cbbc:;
  /* 1219cbbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cbbf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cbc5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219cbc8:;
  /* 1219cbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cbcb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cbce ja 0x1219cc2d */
  if ((!C.cf&&!C.zf)) goto L_1219cc2d;
  /* 1219cbd0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cbd3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1219cbda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cbdd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1219cbe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cbea add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cbed mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219cbf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cbf3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1219cbf9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cbfc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cc02 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc05 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219cc08 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc0b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cc11 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc14 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219cc17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc1a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cc1f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219cc22 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219cc25 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1219cc2b jmp 0x1219cbbc */
  goto L_1219cbbc;
L_1219cc2d:;
  /* 1219cc2d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219cc30 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cc36 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1219cc39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cc3c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cc3f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc42 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1219cc45 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219cc4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219cc4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc51 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc54 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1219cc57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219cc5a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cc5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc60 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1219cc63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc66 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219cc69 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219cc6c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cc6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cc72 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1219cc75 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cc78 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cc7b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1219cc83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cc86 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cc89 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1219cc94 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cc97 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1219cc9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cc9e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1219cca1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219cca4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cca7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1219ccaa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219ccac jne 0x1219ccbd */
  if (!C.zf) goto L_1219ccbd;
  /* 1219ccae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ccb1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219ccb4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1219ccb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ccba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219ccbd:;
  /* 1219ccbd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219ccc2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219ccc5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219ccc7 not edx */
  EDX = (~(EDX));
  /* 1219ccc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cccc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219cccf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219ccd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ccd4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219ccd7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1219ccda:;
  /* 1219ccda mov esp, ebp */
  ESP = (EBP);
  /* 1219ccdc pop ebp */
  EBP = (pop32());
  /* 1219ccdd ret  */
  ESPCHK(0x1219caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x1219cce0 (1515 bytes, 489 insns) */
void f_1219cce0(void) {
  FTRACE(0x1219cce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219cce0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219cce1 mov ebp, esp */
  EBP = (ESP);
  /* 1219cce3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cce6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219cce9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ccec and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1219ccee mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1219ccf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ccf4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1219ccf7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1219ccfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ccfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219cd00 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cd03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1219cd06 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219cd09 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1219cd0c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219cd0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cd12 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219cd18 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cd1b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1219cd22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1219cd25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219cd28 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cd2b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1219cd2e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cd31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219cd33 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cd36 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1219cd39 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cd3c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cd3f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1219cd42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cd45 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219cd47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1219cd4a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219cd4d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cd50 jle 0x1219d006 */
  if ((C.zf||C.sf!=C.of)) goto L_1219d006;
  /* 1219cd56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cd59 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1219cd5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219cd5e jne 0x1219cd6b */
  if (!C.zf) goto L_1219cd6b;
  /* 1219cd60 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219cd63 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cd66 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cd69 jle 0x1219cd72 */
  if ((C.zf||C.sf!=C.of)) goto L_1219cd72;
L_1219cd6b:;
  /* 1219cd6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219cd6d jmp 0x1219d2c7 */
  goto L_1219d2c7;
L_1219cd72:;
  /* 1219cd72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cd75 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1219cd78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cd7b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219cd7e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cd82 jbe 0x1219cd8b */
  if ((C.cf||C.zf)) goto L_1219cd8b;
  /* 1219cd84 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1219cd8b:;
  /* 1219cd8b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cd8e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cd91 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219cd94 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cd97 jne 0x1219ce6d */
  if (!C.zf) goto L_1219ce6d;
  /* 1219cd9d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cda1 jae 0x1219ce02 */
  if (!C.cf) goto L_1219ce02;
  /* 1219cda3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219cda8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cdab shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219cdad not edx */
  EDX = (~(EDX));
  /* 1219cdaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cdb2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cdb5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1219cdb9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219cdbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cdbe mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cdc1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1219cdc5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cdc8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cdcb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219cdce sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219cdd1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cdd4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cdd7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1219cdda mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cddd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cde0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219cde4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219cde6 jne 0x1219ce00 */
  if (!C.zf) goto L_1219ce00;
  /* 1219cde8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219cded mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cdf0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219cdf2 not edx */
  EDX = (~(EDX));
  /* 1219cdf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cdf7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219cdf9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219cdfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cdfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219ce00:;
  /* 1219ce00 jmp 0x1219ce6d */
  goto L_1219ce6d;
L_1219ce02:;
  /* 1219ce02 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219ce05 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ce08 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219ce0d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219ce0f not eax */
  EAX = (~(EAX));
  /* 1219ce11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ce14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219ce17 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1219ce1e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219ce20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ce23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219ce26 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1219ce2d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219ce30 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ce33 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1219ce36 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219ce39 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219ce3c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ce3f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1219ce42 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219ce45 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ce48 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219ce4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219ce4e jne 0x1219ce6d */
  if (!C.zf) goto L_1219ce6d;
  /* 1219ce50 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219ce53 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ce56 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219ce5b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219ce5d not eax */
  EAX = (~(EAX));
  /* 1219ce5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ce62 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219ce65 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219ce67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ce6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219ce6d:;
  /* 1219ce6d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ce70 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219ce73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ce76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219ce79 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219ce7c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ce7f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219ce82 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ce85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219ce88 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1219ce8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219ce8e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ce91 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ce94 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219ce97 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ce9b jle 0x1219cfe7 */
  if ((C.zf||C.sf!=C.of)) goto L_1219cfe7;
  /* 1219cea1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cea4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cea7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1219ceaa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cead sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219ceb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ceb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1219ceb6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ceba jbe 0x1219cec3 */
  if ((C.cf||C.zf)) goto L_1219cec3;
  /* 1219cebc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1219cec3:;
  /* 1219cec3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cec6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219cec9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1219cecc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1219cecf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ced2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219ced5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219ced8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219cedb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cede mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cee1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1219cee4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219cee7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ceea mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1219ceed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cef0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219cef3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cef6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219cef9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cefc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219ceff mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219cf02 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cf05 jne 0x1219cfd3 */
  if (!C.zf) goto L_1219cfd3;
  /* 1219cf0b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219cf0f jae 0x1219cf6c */
  if (!C.cf) goto L_1219cf6c;
  /* 1219cf11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf14 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf17 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219cf1b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf1e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf21 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219cf24 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219cf27 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf2a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf2d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1219cf30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219cf32 jne 0x1219cf4a */
  if (!C.zf) goto L_1219cf4a;
  /* 1219cf34 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219cf39 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cf3c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219cf3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cf41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219cf43 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219cf45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cf48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219cf4a:;
  /* 1219cf4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219cf4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cf52 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219cf54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cf57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf5a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1219cf5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219cf60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cf63 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf66 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1219cf6a jmp 0x1219cfd3 */
  goto L_1219cfd3;
L_1219cf6c:;
  /* 1219cf6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf6f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf72 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219cf76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf79 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf7c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219cf7f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219cf82 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cf85 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cf88 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1219cf8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219cf8d jne 0x1219cfaa */
  if (!C.zf) goto L_1219cfaa;
  /* 1219cf8f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cf92 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cf95 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219cf9a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219cf9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cf9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219cfa2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219cfa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219cfa7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1219cfaa:;
  /* 1219cfaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219cfad sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219cfb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219cfb5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219cfb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cfba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cfbd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1219cfc4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219cfc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219cfc9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219cfcc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1219cfd3:;
  /* 1219cfd3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cfd6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cfd9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1219cfdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219cfde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cfe1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219cfe4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1219cfe7:;
  /* 1219cfe7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219cfea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cfed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cff0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1219cff2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219cff5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cff8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219cffb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219cffe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1219d001 jmp 0x1219d2c2 */
  goto L_1219d2c2;
L_1219d006:;
  /* 1219d006 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219d009 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d00c jge 0x1219d2c2 */
  if ((C.sf==C.of)) goto L_1219d2c2;
  /* 1219d012 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219d015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d018 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d01b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219d01d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1219d020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d023 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d026 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d029 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1219d02c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d02f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d032 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1219d035 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d038 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d03b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219d03e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d041 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1219d044 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d047 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1219d04a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d04e jbe 0x1219d057 */
  if ((C.cf||C.zf)) goto L_1219d057;
  /* 1219d050 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1219d057:;
  /* 1219d057 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d05a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1219d05d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219d05f jne 0x1219d1a0 */
  if (!C.zf) goto L_1219d1a0;
  /* 1219d065 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d068 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1219d06b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d06e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219d071 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d075 jbe 0x1219d07e */
  if ((C.cf||C.zf)) goto L_1219d07e;
  /* 1219d077 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1219d07e:;
  /* 1219d07e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d081 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d084 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219d087 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d08a jne 0x1219d160 */
  if (!C.zf) goto L_1219d160;
  /* 1219d090 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d094 jae 0x1219d0f5 */
  if (!C.cf) goto L_1219d0f5;
  /* 1219d096 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d09b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219d09e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d0a0 not edx */
  EDX = (~(EDX));
  /* 1219d0a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d0a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d0a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1219d0ac and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d0ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d0b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d0b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1219d0b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d0bb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d0be mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1219d0c1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219d0c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d0c7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d0ca mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1219d0cd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d0d0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d0d3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219d0d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219d0d9 jne 0x1219d0f3 */
  if (!C.zf) goto L_1219d0f3;
  /* 1219d0db mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d0e0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219d0e3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d0e5 not edx */
  EDX = (~(EDX));
  /* 1219d0e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d0ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219d0ec and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219d0ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d0f1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1219d0f3:;
  /* 1219d0f3 jmp 0x1219d160 */
  goto L_1219d160;
L_1219d0f5:;
  /* 1219d0f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219d0f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d0fb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219d100 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219d102 not eax */
  EAX = (~(EAX));
  /* 1219d104 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d107 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d10a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1219d111 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1219d113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d116 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d119 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1219d120 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d123 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d126 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1219d129 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219d12c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d12f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d132 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1219d135 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d138 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d13b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1219d13f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219d141 jne 0x1219d160 */
  if (!C.zf) goto L_1219d160;
  /* 1219d143 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219d146 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d149 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219d14e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219d150 not eax */
  EAX = (~(EAX));
  /* 1219d152 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d155 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219d158 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219d15a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d15d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219d160:;
  /* 1219d160 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d163 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219d166 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d169 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219d16c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219d16f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d172 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219d175 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219d178 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219d17b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1219d17e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d181 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d184 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219d187 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d18a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1219d18d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d190 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1219d193 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d197 jbe 0x1219d1a0 */
  if ((C.cf||C.zf)) goto L_1219d1a0;
  /* 1219d199 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1219d1a0:;
  /* 1219d1a0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219d1a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219d1a6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1219d1a9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1219d1ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1af mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d1b2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219d1b5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219d1b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d1be mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219d1c1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d1c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1c7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1219d1ca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1cd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219d1d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1219d1d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1d9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d1dc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219d1df cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d1e2 jne 0x1219d2ae */
  if (!C.zf) goto L_1219d2ae;
  /* 1219d1e8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d1ec jae 0x1219d248 */
  if (!C.cf) goto L_1219d248;
  /* 1219d1ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d1f1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d1f4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219d1f8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d1fb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d1fe mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1219d201 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219d203 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d206 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d209 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1219d20c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219d20e jne 0x1219d226 */
  if (!C.zf) goto L_1219d226;
  /* 1219d210 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219d215 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219d218 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219d21a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d21d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219d21f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219d221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d224 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1219d226:;
  /* 1219d226 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d22b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219d22e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d230 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d233 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d236 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1219d23a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d23c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d23f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d242 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1219d246 jmp 0x1219d2ae */
  goto L_1219d2ae;
L_1219d248:;
  /* 1219d248 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d24b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d24e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1219d252 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d255 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d258 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1219d25b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219d25d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d260 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d263 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1219d266 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219d268 jne 0x1219d285 */
  if (!C.zf) goto L_1219d285;
  /* 1219d26a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219d26d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d270 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1219d275 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1219d277 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d27a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219d27d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1219d27f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219d282 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1219d285:;
  /* 1219d285 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219d288 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d28b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d290 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d295 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d298 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1219d29f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d2a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d2a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1219d2a7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1219d2ae:;
  /* 1219d2ae mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d2b1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d2b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1219d2b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d2b9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d2bc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219d2bf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1219d2c2:;
  /* 1219d2c2 mov eax, 1 */
  EAX = (0x1u);
L_1219d2c7:;
  /* 1219d2c7 mov esp, ebp */
  ESP = (EBP);
  /* 1219d2c9 pop ebp */
  EBP = (pop32());
  /* 1219d2ca ret  */
  ESPCHK(0x1219cce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2d0 @ 0x1219d2d0 (304 bytes, 79 insns) */
void f_1219d2d0(void) {
  FTRACE(0x1219d2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219d2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219d2d1 mov ebp, esp */
  EBP = (ESP);
  /* 1219d2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219d2d4 cmp dword ptr [0x121c50a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c50a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d2db je 0x1219d3fc */
  if (C.zf) goto L_1219d3fc;
  /* 1219d2e1 mov eax, dword ptr [0x121c5098] */
  EAX = (r32((uint32_t)(0x121c5098)));
  /* 1219d2e6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1219d2e9 mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d2ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219d2f2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d2f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219d2f7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1219d2fc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219d301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d304 push eax */
  push32((uint32_t)(EAX));
  /* 1219d305 call dword ptr [0x121c639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c639c))), 0x1219d30bu);
  /* 1219d30b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d310 mov ecx, dword ptr [0x121c5098] */
  ECX = (r32((uint32_t)(0x121c5098)));
  /* 1219d316 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d318 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d31d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1219d320 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1219d322 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d328 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1219d32b mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d330 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219d333 mov edx, dword ptr [0x121c5098] */
  EDX = (r32((uint32_t)(0x121c5098)));
  /* 1219d339 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1219d344 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d349 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219d34c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1219d34f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1219d352 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d357 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219d35a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1219d35d mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d363 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219d366 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1219d36a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219d36c jne 0x1219d382 */
  if (!C.zf) goto L_1219d382;
  /* 1219d36e mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d374 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219d377 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1219d379 mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d37f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1219d382:;
  /* 1219d382 mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d388 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d38c jne 0x1219d3f2 */
  if (!C.zf) goto L_1219d3f2;
  /* 1219d38e cmp dword ptr [0x121c50a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c50a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d395 jle 0x1219d3f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1219d3f2;
  /* 1219d397 mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d39c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1219d39f push ecx */
  push32((uint32_t)(ECX));
  /* 1219d3a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219d3a2 mov edx, dword ptr [0x121c50ac] */
  EDX = (r32((uint32_t)(0x121c50ac)));
  /* 1219d3a8 push edx */
  push32((uint32_t)(EDX));
  /* 1219d3a9 call dword ptr [0x121c6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6398))), 0x1219d3afu);
  /* 1219d3af mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219d3b4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219d3b7 mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219d3bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d3bf mov edx, dword ptr [0x121c50a0] */
  EDX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d3c5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d3c8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d3ca push ecx */
  push32((uint32_t)(ECX));
  /* 1219d3cb mov eax, dword ptr [0x121c50a0] */
  EAX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d3d0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1219d3d4 mov ecx, dword ptr [0x121c50a0] */
  ECX = (r32((uint32_t)(0x121c50a0)));
  /* 1219d3da push ecx */
  push32((uint32_t)(ECX));
  /* 1219d3db call 0x1219fa00 */
  push32(0x1219d3e0u); f_1219fa00();
  /* 1219d3e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d3e3 mov edx, dword ptr [0x121c50a4] */
  EDX = (r32((uint32_t)(0x121c50a4)));
  /* 1219d3e9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d3ec mov dword ptr [0x121c50a4], edx */
  w32((uint32_t)(0x121c50a4), (EDX));
L_1219d3f2:;
  /* 1219d3f2 mov dword ptr [0x121c50a0], 0 */
  w32((uint32_t)(0x121c50a0), (0x0u));
L_1219d3fc:;
  /* 1219d3fc mov esp, ebp */
  ESP = (EBP);
  /* 1219d3fe pop ebp */
  EBP = (pop32());
  /* 1219d3ff ret  */
  ESPCHK(0x1219d2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d400 @ 0x1219d400 (1565 bytes, 343 insns) */
void f_1219d400(void) {
  FTRACE(0x1219d400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219d400 push ebp */
  push32((uint32_t)(EBP));
  /* 1219d401 mov ebp, esp */
  EBP = (ESP);
  /* 1219d403 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d409 mov eax, dword ptr [0x121c50a4] */
  EAX = (r32((uint32_t)(0x121c50a4)));
  /* 1219d40e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219d411 push eax */
  push32((uint32_t)(EAX));
  /* 1219d412 mov ecx, dword ptr [0x121c50a8] */
  ECX = (r32((uint32_t)(0x121c50a8)));
  /* 1219d418 push ecx */
  push32((uint32_t)(ECX));
  /* 1219d419 call dword ptr [0x121c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6374))), 0x1219d41fu);
  /* 1219d41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219d421 je 0x1219d42b */
  if (C.zf) goto L_1219d42b;
  /* 1219d423 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219d426 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d42b:;
  /* 1219d42b mov edx, dword ptr [0x121c50a8] */
  EDX = (r32((uint32_t)(0x121c50a8)));
  /* 1219d431 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1219d437 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1219d441 jmp 0x1219d452 */
  goto L_1219d452;
L_1219d443:;
  /* 1219d443 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1219d449 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d44c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1219d452:;
  /* 1219d452 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1219d458 cmp ecx, dword ptr [0x121c50a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c50a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d45e jge 0x1219da17 */
  if ((C.sf==C.of)) goto L_1219da17;
  /* 1219d464 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219d46a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219d46d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1219d473 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1219d478 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1219d47e push ecx */
  push32((uint32_t)(ECX));
  /* 1219d47f call dword ptr [0x121c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6374))), 0x1219d485u);
  /* 1219d485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219d487 je 0x1219d493 */
  if (C.zf) goto L_1219d493;
  /* 1219d489 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1219d48e jmp 0x1219da19 */
  goto L_1219da19;
L_1219d493:;
  /* 1219d493 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219d499 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219d49c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1219d4a2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1219d4a8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d4ae mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1219d4b1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219d4b7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219d4ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219d4bd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1219d4c7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1219d4d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1219d4d8 jmp 0x1219d4e3 */
  goto L_1219d4e3;
L_1219d4da:;
  /* 1219d4da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219d4dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d4e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1219d4e3:;
  /* 1219d4e3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d4e7 jge 0x1219d9db */
  if ((C.sf==C.of)) goto L_1219d9db;
  /* 1219d4ed mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1219d4f7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1219d501 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1219d50b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1219d515 jmp 0x1219d526 */
  goto L_1219d526;
L_1219d517:;
  /* 1219d517 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1219d51d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d520 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1219d526:;
  /* 1219d526 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d52d jge 0x1219d542 */
  if ((C.sf==C.of)) goto L_1219d542;
  /* 1219d52f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1219d535 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1219d540 jmp 0x1219d517 */
  goto L_1219d517;
L_1219d542:;
  /* 1219d542 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d546 jl 0x1219d97d */
  if ((C.sf!=C.of)) goto L_1219d97d;
  /* 1219d54c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1219d551 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1219d557 push ecx */
  push32((uint32_t)(ECX));
  /* 1219d558 call dword ptr [0x121c6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6374))), 0x1219d55eu);
  /* 1219d55e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219d560 je 0x1219d56c */
  if (C.zf) goto L_1219d56c;
  /* 1219d562 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1219d567 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d56c:;
  /* 1219d56c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1219d572 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1219d575 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1219d57f jmp 0x1219d590 */
  goto L_1219d590;
L_1219d581:;
  /* 1219d581 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1219d587 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d58a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1219d590:;
  /* 1219d590 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d597 jge 0x1219d714 */
  if ((C.sf==C.of)) goto L_1219d714;
  /* 1219d59d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219d5a0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d5a3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1219d5a9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d5af add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d5b5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1219d5bb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d5c1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d5c5 jne 0x1219d5d2 */
  if (!C.zf) goto L_1219d5d2;
  /* 1219d5c7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1219d5cd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d5d0 je 0x1219d5dc */
  if (C.zf) goto L_1219d5dc;
L_1219d5d2:;
  /* 1219d5d2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1219d5d7 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d5dc:;
  /* 1219d5dc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d5e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219d5e4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1219d5ea mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1219d5f0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1219d5f6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1219d5fc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1219d5ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219d601 je 0x1219d639 */
  if (C.zf) goto L_1219d639;
  /* 1219d603 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1219d609 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d60c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1219d612 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d61c jle 0x1219d628 */
  if ((C.zf||C.sf!=C.of)) goto L_1219d628;
  /* 1219d61e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1219d623 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d628:;
  /* 1219d628 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1219d62e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d631 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1219d637 jmp 0x1219d67b */
  goto L_1219d67b;
L_1219d639:;
  /* 1219d639 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1219d63f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219d642 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d645 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1219d64b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d652 jle 0x1219d65e */
  if ((C.zf||C.sf!=C.of)) goto L_1219d65e;
  /* 1219d654 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1219d65e:;
  /* 1219d65e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1219d664 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1219d66b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d66e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1219d674 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1219d67b:;
  /* 1219d67b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d682 jl 0x1219d69d */
  if ((C.sf!=C.of)) goto L_1219d69d;
  /* 1219d684 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1219d68a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1219d68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219d68f jne 0x1219d69d */
  if (!C.zf) goto L_1219d69d;
  /* 1219d691 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d69b jle 0x1219d6a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1219d6a7;
L_1219d69d:;
  /* 1219d69d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1219d6a2 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d6a7:;
  /* 1219d6a7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d6ad add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d6b3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1219d6b6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d6bc je 0x1219d6c8 */
  if (C.zf) goto L_1219d6c8;
  /* 1219d6be mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1219d6c3 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d6c8:;
  /* 1219d6c8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d6ce add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d6d4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1219d6da mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d6e0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d6e6 jb 0x1219d5dc */
  if (C.cf) goto L_1219d5dc;
  /* 1219d6ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d6f2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d6f8 je 0x1219d704 */
  if (C.zf) goto L_1219d704;
  /* 1219d6fa mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1219d6ff jmp 0x1219da19 */
  goto L_1219da19;
L_1219d704:;
  /* 1219d704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219d707 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d70c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1219d70f jmp 0x1219d581 */
  goto L_1219d581;
L_1219d714:;
  /* 1219d714 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d717 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219d719 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d71f je 0x1219d72b */
  if (C.zf) goto L_1219d72b;
  /* 1219d721 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1219d726 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d72b:;
  /* 1219d72b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d72e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1219d734 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1219d73b jmp 0x1219d746 */
  goto L_1219d746;
L_1219d73d:;
  /* 1219d73d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d740 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d743 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1219d746:;
  /* 1219d746 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d74a jge 0x1219d97d */
  if ((C.sf==C.of)) goto L_1219d97d;
  /* 1219d750 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1219d75a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1219d760 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1219d766:;
  /* 1219d766 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d76c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219d76f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1219d775 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d77b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d781 je 0x1219d8aa */
  if (C.zf) goto L_1219d8aa;
  /* 1219d787 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d78a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1219d790 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d797 je 0x1219d8aa */
  if (C.zf) goto L_1219d8aa;
  /* 1219d79d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d7a3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d7a9 jb 0x1219d7be */
  if (C.cf) goto L_1219d7be;
  /* 1219d7ab mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1219d7b1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d7b6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d7bc jb 0x1219d7c8 */
  if (C.cf) goto L_1219d7c8;
L_1219d7be:;
  /* 1219d7be mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1219d7c3 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d7c8:;
  /* 1219d7c8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d7ce and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1219d7d4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1219d7da mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1219d7e0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d7e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1219d7e6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d7e9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d7ee mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1219d7f4:;
  /* 1219d7f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d7f7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d7fd je 0x1219d81e */
  if (C.zf) goto L_1219d81e;
  /* 1219d7ff mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d802 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d808 jne 0x1219d80c */
  if (!C.zf) goto L_1219d80c;
  /* 1219d80a jmp 0x1219d81e */
  goto L_1219d81e;
L_1219d80c:;
  /* 1219d80c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d80f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219d811 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1219d814 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d817 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d819 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1219d81c jmp 0x1219d7f4 */
  goto L_1219d7f4;
L_1219d81e:;
  /* 1219d81e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219d821 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d827 jne 0x1219d833 */
  if (!C.zf) goto L_1219d833;
  /* 1219d829 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1219d82e jmp 0x1219da19 */
  goto L_1219da19;
L_1219d833:;
  /* 1219d833 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d839 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219d83b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219d83e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d841 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1219d847 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d84e jle 0x1219d85a */
  if ((C.zf||C.sf!=C.of)) goto L_1219d85a;
  /* 1219d850 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1219d85a:;
  /* 1219d85a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1219d860 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d863 je 0x1219d86f */
  if (C.zf) goto L_1219d86f;
  /* 1219d865 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1219d86a jmp 0x1219da19 */
  goto L_1219da19;
L_1219d86f:;
  /* 1219d86f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d875 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219d878 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d87e je 0x1219d88a */
  if (C.zf) goto L_1219d88a;
  /* 1219d880 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1219d885 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d88a:;
  /* 1219d88a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1219d890 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1219d896 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1219d89c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d89f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1219d8a5 jmp 0x1219d766 */
  goto L_1219d766;
L_1219d8aa:;
  /* 1219d8aa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d8b1 je 0x1219d921 */
  if (C.zf) goto L_1219d921;
  /* 1219d8b3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d8b7 jge 0x1219d8eb */
  if ((C.sf==C.of)) goto L_1219d8eb;
  /* 1219d8b9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d8be mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d8c1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d8c3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1219d8c9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d8cb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1219d8d1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d8d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d8d9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d8db mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1219d8e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d8e3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1219d8e9 jmp 0x1219d921 */
  goto L_1219d921;
L_1219d8eb:;
  /* 1219d8eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d8ee sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d8f1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d8f6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d8f8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1219d8fe or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d900 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1219d906 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d909 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219d90c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1219d911 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1219d913 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1219d919 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1219d91b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1219d921:;
  /* 1219d921 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1219d927 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219d92a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d930 jne 0x1219d944 */
  if (!C.zf) goto L_1219d944;
  /* 1219d932 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219d935 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1219d93b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d942 je 0x1219d94e */
  if (C.zf) goto L_1219d94e;
L_1219d944:;
  /* 1219d944 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1219d949 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d94e:;
  /* 1219d94e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1219d954 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219d957 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d95d je 0x1219d969 */
  if (C.zf) goto L_1219d969;
  /* 1219d95f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1219d964 jmp 0x1219da19 */
  goto L_1219da19;
L_1219d969:;
  /* 1219d969 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1219d96f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d972 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1219d978 jmp 0x1219d73d */
  goto L_1219d73d;
L_1219d97d:;
  /* 1219d97d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219d980 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1219d986 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1219d98c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d990 jne 0x1219d9aa */
  if (!C.zf) goto L_1219d9aa;
  /* 1219d992 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219d995 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1219d99b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1219d9a1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d9a8 je 0x1219d9b1 */
  if (C.zf) goto L_1219d9b1;
L_1219d9aa:;
  /* 1219d9aa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1219d9af jmp 0x1219da19 */
  goto L_1219da19;
L_1219d9b1:;
  /* 1219d9b1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1219d9b7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d9bd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1219d9c3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219d9c6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219d9cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1219d9ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219d9d1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1219d9d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219d9d6 jmp 0x1219d4da */
  goto L_1219d4da;
L_1219d9db:;
  /* 1219d9db mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219d9e1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1219d9e7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d9e9 jne 0x1219d9fc */
  if (!C.zf) goto L_1219d9fc;
  /* 1219d9eb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219d9f1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1219d9f7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219d9fa je 0x1219da03 */
  if (C.zf) goto L_1219da03;
L_1219d9fc:;
  /* 1219d9fc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1219da01 jmp 0x1219da19 */
  goto L_1219da19;
L_1219da03:;
  /* 1219da03 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1219da09 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219da0c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1219da12 jmp 0x1219d443 */
  goto L_1219d443;
L_1219da17:;
  /* 1219da17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219da19:;
  /* 1219da19 mov esp, ebp */
  ESP = (EBP);
  /* 1219da1b pop ebp */
  EBP = (pop32());
  /* 1219da1c ret  */
  ESPCHK(0x1219d400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x1219da20 (250 bytes, 92 insns) */
void f_1219da20(void) {
  FTRACE(0x1219da20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219da20 push ebp */
  push32((uint32_t)(EBP));
  /* 1219da21 mov ebp, esp */
  EBP = (ESP);
  /* 1219da23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219da26 push ebx */
  push32((uint32_t)(EBX));
  /* 1219da27 push esi */
  push32((uint32_t)(ESI));
  /* 1219da28 push edi */
  push32((uint32_t)(EDI));
  /* 1219da29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1219da2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219da2f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1219da32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1219da35:;
  /* 1219da35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219da39 jne 0x1219da59 */
  if (!C.zf) goto L_1219da59;
  /* 1219da3b push 0x121bef40 */
  push32((uint32_t)(0x121bef40u));
  /* 1219da40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219da42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1219da44 push 0x121bef34 */
  push32((uint32_t)(0x121bef34u));
  /* 1219da49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219da4b call 0x12196bd0 */
  push32(0x1219da50u); f_12196bd0();
  /* 1219da50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219da53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219da56 jne 0x1219da59 */
  if (!C.zf) goto L_1219da59;
  /* 1219da58 int3  */
  x86_unimpl("int3 @ 0x1219da58");
L_1219da59:;
  /* 1219da59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219da5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219da5d jne 0x1219da35 */
  if (!C.zf) goto L_1219da35;
L_1219da5f:;
  /* 1219da5f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219da63 jne 0x1219da83 */
  if (!C.zf) goto L_1219da83;
  /* 1219da65 push 0x121bef24 */
  push32((uint32_t)(0x121bef24u));
  /* 1219da6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1219da6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1219da6e push 0x121bef34 */
  push32((uint32_t)(0x121bef34u));
  /* 1219da73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219da75 call 0x12196bd0 */
  push32(0x1219da7au); f_12196bd0();
  /* 1219da7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219da7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219da80 jne 0x1219da83 */
  if (!C.zf) goto L_1219da83;
  /* 1219da82 int3  */
  x86_unimpl("int3 @ 0x1219da82");
L_1219da83:;
  /* 1219da83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219da85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219da87 jne 0x1219da5f */
  if (!C.zf) goto L_1219da5f;
  /* 1219da89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219da8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1219da93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219da96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219da99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1219da9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219da9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219daa2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1219daa4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219daa7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1219daae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219dab1 push ecx */
  push32((uint32_t)(ECX));
  /* 1219dab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219dab5 push edx */
  push32((uint32_t)(EDX));
  /* 1219dab6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dab9 push eax */
  push32((uint32_t)(EAX));
  /* 1219daba call 0x1219eaa0 */
  push32(0x1219dabfu); f_1219eaa0();
  /* 1219dabf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dac2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219dac5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dac8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219dacb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219dace mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dad1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219dad4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dad7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dadb jl 0x1219daff */
  if ((C.sf!=C.of)) goto L_1219daff;
  /* 1219dadd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dae0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219dae2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1219dae5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219dae7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219daed mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1219daf0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219daf3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219daf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219daf8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dafb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219dafd jmp 0x1219db10 */
  goto L_1219db10;
L_1219daff:;
  /* 1219daff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219db02 push edx */
  push32((uint32_t)(EDX));
  /* 1219db03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219db05 call 0x1219e820 */
  push32(0x1219db0au); f_1219e820();
  /* 1219db0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219db0d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1219db10:;
  /* 1219db10 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219db13 pop edi */
  EDI = (pop32());
  /* 1219db14 pop esi */
  ESI = (pop32());
  /* 1219db15 pop ebx */
  EBX = (pop32());
  /* 1219db16 mov esp, ebp */
  ESP = (EBP);
  /* 1219db18 pop ebp */
  EBP = (pop32());
  /* 1219db19 ret  */
  ESPCHK(0x1219da20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db20 @ 0x1219db20 (183 bytes, 58 insns) */
void f_1219db20(void) {
  FTRACE(0x1219db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219db20 push ebp */
  push32((uint32_t)(EBP));
  /* 1219db21 mov ebp, esp */
  EBP = (ESP);
  /* 1219db23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219db26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219db29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219db2c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219db31 ja 0x1219db4a */
  if ((!C.cf&&!C.zf)) goto L_1219db4a;
  /* 1219db33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219db36 mov edx, dword ptr [0x121c1c98] */
  EDX = (r32((uint32_t)(0x121c1c98)));
  /* 1219db3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219db3e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1219db42 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1219db45 jmp 0x1219dbd3 */
  goto L_1219dbd3;
L_1219db4a:;
  /* 1219db4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219db4d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1219db50 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219db56 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219db5c mov edx, dword ptr [0x121c1c98] */
  EDX = (r32((uint32_t)(0x121c1c98)));
  /* 1219db62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219db64 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1219db68 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1219db6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219db6f je 0x1219db93 */
  if (C.zf) goto L_1219db93;
  /* 1219db71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219db74 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1219db77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219db7d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1219db80 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1219db83 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1219db86 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1219db8a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1219db91 jmp 0x1219dba4 */
  goto L_1219dba4;
L_1219db93:;
  /* 1219db93 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1219db96 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1219db99 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1219db9d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1219dba4:;
  /* 1219dba4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219dba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219dba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219dbaa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1219dbad push ecx */
  push32((uint32_t)(ECX));
  /* 1219dbae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dbb1 push edx */
  push32((uint32_t)(EDX));
  /* 1219dbb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1219dbb5 push eax */
  push32((uint32_t)(EAX));
  /* 1219dbb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219dbb8 call 0x1219fd40 */
  push32(0x1219dbbdu); f_1219fd40();
  /* 1219dbbd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dbc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219dbc2 jne 0x1219dbc8 */
  if (!C.zf) goto L_1219dbc8;
  /* 1219dbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219dbc6 jmp 0x1219dbd3 */
  goto L_1219dbd3;
L_1219dbc8:;
  /* 1219dbc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dbcb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219dbd0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1219dbd3:;
  /* 1219dbd3 mov esp, ebp */
  ESP = (EBP);
  /* 1219dbd5 pop ebp */
  EBP = (pop32());
  /* 1219dbd6 ret  */
  ESPCHK(0x1219db20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbe0 @ 0x1219dbe0 (836 bytes, 238 insns) */
void f_1219dbe0(void) {
  FTRACE(0x1219dbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219dbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219dbe1 mov ebp, esp */
  EBP = (ESP);
  /* 1219dbe3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219dbe6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219dbe8 call 0x1219b510 */
  push32(0x1219dbedu); f_1219b510();
  /* 1219dbed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219dbf3 push eax */
  push32((uint32_t)(EAX));
  /* 1219dbf4 call 0x1219df30 */
  push32(0x1219dbf9u); f_1219df30();
  /* 1219dbf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dbfc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1219dbff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219dc02 cmp ecx, dword ptr [0x121c4de4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c4de4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dc08 jne 0x1219dc1b */
  if (!C.zf) goto L_1219dc1b;
  /* 1219dc0a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219dc0c call 0x1219b5b0 */
  push32(0x1219dc11u); f_1219b5b0();
  /* 1219dc11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dc14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219dc16 jmp 0x1219df20 */
  goto L_1219df20;
L_1219dc1b:;
  /* 1219dc1b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dc1f jne 0x1219dc3c */
  if (!C.zf) goto L_1219dc3c;
  /* 1219dc21 call 0x1219e010 */
  push32(0x1219dc26u); f_1219e010();
  /* 1219dc26 call 0x1219e090 */
  push32(0x1219dc2bu); f_1219e090();
  /* 1219dc2b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219dc2d call 0x1219b5b0 */
  push32(0x1219dc32u); f_1219b5b0();
  /* 1219dc32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dc35 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219dc37 jmp 0x1219df20 */
  goto L_1219df20;
L_1219dc3c:;
  /* 1219dc3c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219dc43 jmp 0x1219dc4e */
  goto L_1219dc4e;
L_1219dc45:;
  /* 1219dc45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dc48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dc4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219dc4e:;
  /* 1219dc4e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dc52 jae 0x1219dd9f */
  if (!C.cf) goto L_1219dd9f;
  /* 1219dc58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dc5b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219dc5e mov ecx, dword ptr [eax + 0x121c1eb8] */
  ECX = (r32((uint32_t)(EAX + 0x121c1eb8)));
  /* 1219dc64 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dc67 jne 0x1219dd9a */
  if (!C.zf) goto L_1219dd9a;
  /* 1219dc6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1219dc74 jmp 0x1219dc7f */
  goto L_1219dc7f;
L_1219dc76:;
  /* 1219dc76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dc79 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dc7c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1219dc7f:;
  /* 1219dc7f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dc86 jae 0x1219dc94 */
  if (!C.cf) goto L_1219dc94;
  /* 1219dc88 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dc8b mov byte ptr [eax + 0x121c4f80], 0 */
  w8((uint32_t)(EAX + 0x121c4f80), (0x0u));
  /* 1219dc92 jmp 0x1219dc76 */
  goto L_1219dc76;
L_1219dc94:;
  /* 1219dc94 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1219dc9b jmp 0x1219dca6 */
  goto L_1219dca6;
L_1219dc9d:;
  /* 1219dc9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dca0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dca3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1219dca6:;
  /* 1219dca6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dcaa jae 0x1219dd27 */
  if (!C.cf) goto L_1219dd27;
  /* 1219dcac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dcaf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219dcb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dcb5 lea ecx, [edx + eax*8 + 0x121c1ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x121c1ec8));
  /* 1219dcbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219dcbf jmp 0x1219dcca */
  goto L_1219dcca;
L_1219dcc1:;
  /* 1219dcc1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dcc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dcc7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1219dcca:;
  /* 1219dcca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219dccf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1219dcd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219dcd3 je 0x1219dd22 */
  if (C.zf) goto L_1219dd22;
  /* 1219dcd5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dcd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219dcda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1219dcdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219dcdf je 0x1219dd22 */
  if (C.zf) goto L_1219dd22;
  /* 1219dce1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219dce6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219dce8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219dceb jmp 0x1219dcf6 */
  goto L_1219dcf6;
L_1219dced:;
  /* 1219dced mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dcf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dcf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1219dcf6:;
  /* 1219dcf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219dcf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219dcfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1219dcfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dd01 ja 0x1219dd20 */
  if ((!C.cf&&!C.zf)) goto L_1219dd20;
  /* 1219dd03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dd06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dd09 mov dl, byte ptr [eax + 0x121c4f81] */
  DL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 1219dd0f or dl, byte ptr [ecx + 0x121c1eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x121c1eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1219dd15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219dd18 mov byte ptr [eax + 0x121c4f81], dl */
  w8((uint32_t)(EAX + 0x121c4f81), (DL));
  /* 1219dd1e jmp 0x1219dced */
  goto L_1219dced;
L_1219dd20:;
  /* 1219dd20 jmp 0x1219dcc1 */
  goto L_1219dcc1;
L_1219dd22:;
  /* 1219dd22 jmp 0x1219dc9d */
  goto L_1219dc9d;
L_1219dd27:;
  /* 1219dd27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219dd2a mov dword ptr [0x121c4de4], ecx */
  w32((uint32_t)(0x121c4de4), (ECX));
  /* 1219dd30 mov dword ptr [0x121c4e6c], 1 */
  w32((uint32_t)(0x121c4e6c), (0x1u));
  /* 1219dd3a mov edx, dword ptr [0x121c4de4] */
  EDX = (r32((uint32_t)(0x121c4de4)));
  /* 1219dd40 push edx */
  push32((uint32_t)(EDX));
  /* 1219dd41 call 0x1219df90 */
  push32(0x1219dd46u); f_1219df90();
  /* 1219dd46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dd49 mov dword ptr [0x121c5084], eax */
  w32((uint32_t)(0x121c5084), (EAX));
  /* 1219dd4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1219dd55 jmp 0x1219dd60 */
  goto L_1219dd60;
L_1219dd57:;
  /* 1219dd57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dd5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dd5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1219dd60:;
  /* 1219dd60 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dd64 jae 0x1219dd84 */
  if (!C.cf) goto L_1219dd84;
  /* 1219dd66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dd69 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219dd6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dd6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dd72 mov cx, word ptr [ecx + eax*2 + 0x121c1ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x121c1ebc)));
  /* 1219dd7a mov word ptr [edx*2 + 0x121c4e60], cx */
  w16((uint32_t)(EDX*2 + 0x121c4e60), (CX));
  /* 1219dd82 jmp 0x1219dd57 */
  goto L_1219dd57;
L_1219dd84:;
  /* 1219dd84 call 0x1219e090 */
  push32(0x1219dd89u); f_1219e090();
  /* 1219dd89 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219dd8b call 0x1219b5b0 */
  push32(0x1219dd90u); f_1219b5b0();
  /* 1219dd90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dd93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219dd95 jmp 0x1219df20 */
  goto L_1219df20;
L_1219dd9a:;
  /* 1219dd9a jmp 0x1219dc45 */
  goto L_1219dc45;
L_1219dd9f:;
  /* 1219dd9f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1219dda2 push edx */
  push32((uint32_t)(EDX));
  /* 1219dda3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219dda6 push eax */
  push32((uint32_t)(EAX));
  /* 1219dda7 call dword ptr [0x121c62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62ec))), 0x1219ddadu);
  /* 1219ddad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ddb0 jne 0x1219def2 */
  if (!C.zf) goto L_1219def2;
  /* 1219ddb6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1219ddbd jmp 0x1219ddc8 */
  goto L_1219ddc8;
L_1219ddbf:;
  /* 1219ddbf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ddc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ddc5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1219ddc8:;
  /* 1219ddc8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ddcf jae 0x1219dddd */
  if (!C.cf) goto L_1219dddd;
  /* 1219ddd1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219ddd4 mov byte ptr [edx + 0x121c4f80], 0 */
  w8((uint32_t)(EDX + 0x121c4f80), (0x0u));
  /* 1219dddb jmp 0x1219ddbf */
  goto L_1219ddbf;
L_1219dddd:;
  /* 1219dddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219dde0 mov dword ptr [0x121c4de4], eax */
  w32((uint32_t)(0x121c4de4), (EAX));
  /* 1219dde5 mov dword ptr [0x121c5084], 0 */
  w32((uint32_t)(0x121c5084), (0x0u));
  /* 1219ddef cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ddf3 jbe 0x1219deae */
  if ((C.cf||C.zf)) goto L_1219deae;
  /* 1219ddf9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1219ddfc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1219ddff jmp 0x1219de0a */
  goto L_1219de0a;
L_1219de01:;
  /* 1219de01 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219de04 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219de07 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1219de0a:;
  /* 1219de0a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219de0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219de0f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1219de11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219de13 je 0x1219de5c */
  if (C.zf) goto L_1219de5c;
  /* 1219de15 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219de18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219de1a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1219de1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219de1f je 0x1219de5c */
  if (C.zf) goto L_1219de5c;
  /* 1219de21 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219de24 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219de26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219de28 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219de2b jmp 0x1219de36 */
  goto L_1219de36;
L_1219de2d:;
  /* 1219de2d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219de33 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1219de36:;
  /* 1219de36 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219de39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219de3b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1219de3e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219de41 ja 0x1219de5a */
  if ((!C.cf&&!C.zf)) goto L_1219de5a;
  /* 1219de43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de46 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 1219de4c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1219de4f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de52 mov byte ptr [edx + 0x121c4f81], cl */
  w8((uint32_t)(EDX + 0x121c4f81), (CL));
  /* 1219de58 jmp 0x1219de2d */
  goto L_1219de2d;
L_1219de5a:;
  /* 1219de5a jmp 0x1219de01 */
  goto L_1219de01;
L_1219de5c:;
  /* 1219de5c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1219de63 jmp 0x1219de6e */
  goto L_1219de6e;
L_1219de65:;
  /* 1219de65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de68 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219de6b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1219de6e:;
  /* 1219de6e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219de75 jae 0x1219de8e */
  if (!C.cf) goto L_1219de8e;
  /* 1219de77 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de7a mov dl, byte ptr [ecx + 0x121c4f81] */
  DL = (r8((uint32_t)(ECX + 0x121c4f81)));
  /* 1219de80 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1219de83 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219de86 mov byte ptr [eax + 0x121c4f81], dl */
  w8((uint32_t)(EAX + 0x121c4f81), (DL));
  /* 1219de8c jmp 0x1219de65 */
  goto L_1219de65;
L_1219de8e:;
  /* 1219de8e mov ecx, dword ptr [0x121c4de4] */
  ECX = (r32((uint32_t)(0x121c4de4)));
  /* 1219de94 push ecx */
  push32((uint32_t)(ECX));
  /* 1219de95 call 0x1219df90 */
  push32(0x1219de9au); f_1219df90();
  /* 1219de9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219de9d mov dword ptr [0x121c5084], eax */
  w32((uint32_t)(0x121c5084), (EAX));
  /* 1219dea2 mov dword ptr [0x121c4e6c], 1 */
  w32((uint32_t)(0x121c4e6c), (0x1u));
  /* 1219deac jmp 0x1219deb8 */
  goto L_1219deb8;
L_1219deae:;
  /* 1219deae mov dword ptr [0x121c4e6c], 0 */
  w32((uint32_t)(0x121c4e6c), (0x0u));
L_1219deb8:;
  /* 1219deb8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1219debf jmp 0x1219deca */
  goto L_1219deca;
L_1219dec1:;
  /* 1219dec1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219dec4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219dec7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1219deca:;
  /* 1219deca cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dece jae 0x1219dedf */
  if (!C.cf) goto L_1219dedf;
  /* 1219ded0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219ded3 mov word ptr [eax*2 + 0x121c4e60], 0 */
  w16((uint32_t)(EAX*2 + 0x121c4e60), (0x0u));
  /* 1219dedd jmp 0x1219dec1 */
  goto L_1219dec1;
L_1219dedf:;
  /* 1219dedf call 0x1219e090 */
  push32(0x1219dee4u); f_1219e090();
  /* 1219dee4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219dee6 call 0x1219b5b0 */
  push32(0x1219deebu); f_1219b5b0();
  /* 1219deeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219deee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219def0 jmp 0x1219df20 */
  goto L_1219df20;
L_1219def2:;
  /* 1219def2 cmp dword ptr [0x121c38f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c38f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219def9 je 0x1219df13 */
  if (C.zf) goto L_1219df13;
  /* 1219defb call 0x1219e010 */
  push32(0x1219df00u); f_1219e010();
  /* 1219df00 call 0x1219e090 */
  push32(0x1219df05u); f_1219e090();
  /* 1219df05 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219df07 call 0x1219b5b0 */
  push32(0x1219df0cu); f_1219b5b0();
  /* 1219df0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219df0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219df11 jmp 0x1219df20 */
  goto L_1219df20;
L_1219df13:;
  /* 1219df13 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1219df15 call 0x1219b5b0 */
  push32(0x1219df1au); f_1219b5b0();
  /* 1219df1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219df1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1219df20:;
  /* 1219df20 mov esp, ebp */
  ESP = (EBP);
  /* 1219df22 pop ebp */
  EBP = (pop32());
  /* 1219df23 ret  */
  ESPCHK(0x1219dbe0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1219df30 (89 bytes, 21 insns) */
void f_1219df30(void) {
  FTRACE(0x1219df30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219df30 push ebp */
  push32((uint32_t)(EBP));
  /* 1219df31 mov ebp, esp */
  EBP = (ESP);
  /* 1219df33 mov dword ptr [0x121c38f0], 0 */
  w32((uint32_t)(0x121c38f0), (0x0u));
  /* 1219df3d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219df41 jne 0x1219df55 */
  if (!C.zf) goto L_1219df55;
  /* 1219df43 mov dword ptr [0x121c38f0], 1 */
  w32((uint32_t)(0x121c38f0), (0x1u));
  /* 1219df4d call dword ptr [0x121c62e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e4))), 0x1219df53u);
  /* 1219df53 jmp 0x1219df87 */
  goto L_1219df87;
L_1219df55:;
  /* 1219df55 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219df59 jne 0x1219df6d */
  if (!C.zf) goto L_1219df6d;
  /* 1219df5b mov dword ptr [0x121c38f0], 1 */
  w32((uint32_t)(0x121c38f0), (0x1u));
  /* 1219df65 call dword ptr [0x121c62f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62f4))), 0x1219df6bu);
  /* 1219df6b jmp 0x1219df87 */
  goto L_1219df87;
L_1219df6d:;
  /* 1219df6d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219df71 jne 0x1219df84 */
  if (!C.zf) goto L_1219df84;
  /* 1219df73 mov dword ptr [0x121c38f0], 1 */
  w32((uint32_t)(0x121c38f0), (0x1u));
  /* 1219df7d mov eax, dword ptr [0x121c3910] */
  EAX = (r32((uint32_t)(0x121c3910)));
  /* 1219df82 jmp 0x1219df87 */
  goto L_1219df87;
L_1219df84:;
  /* 1219df84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1219df87:;
  /* 1219df87 pop ebp */
  EBP = (pop32());
  /* 1219df88 ret  */
  ESPCHK(0x1219df30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df90 @ 0x1219df90 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1219df90(void) {
  FTRACE(0x1219df90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219df90 push ebp */
  push32((uint32_t)(EBP));
  /* 1219df91 mov ebp, esp */
  EBP = (ESP);
  /* 1219df93 push ecx */
  push32((uint32_t)(ECX));
  /* 1219df94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219df97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219df9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219df9d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219dfa3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219dfa6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219dfaa ja 0x1219dfda */
  if ((!C.cf&&!C.zf)) goto L_1219dfda;
  /* 1219dfac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219dfaf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219dfb1 mov dl, byte ptr [eax + 0x1219dff4] */
  DL = (r8((uint32_t)(EAX + 0x1219dff4)));
  /* 1219dfb7 jmp dword ptr [edx*4 + 0x1219dfe0] */
  switch (EDX) {
    case 0: goto L_1219dfbe;
    case 1: goto L_1219dfc5;
    case 2: goto L_1219dfcc;
    case 3: goto L_1219dfd3;
    case 4: goto L_1219dfda;
    default: x86_unimpl("switch@0x1219dfb7 out of table"); return;
  }
L_1219dfbe:;
  /* 1219dfbe mov eax, 0x411 */
  EAX = (0x411u);
  /* 1219dfc3 jmp 0x1219dfdc */
  goto L_1219dfdc;
L_1219dfc5:;
  /* 1219dfc5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1219dfca jmp 0x1219dfdc */
  goto L_1219dfdc;
L_1219dfcc:;
  /* 1219dfcc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1219dfd1 jmp 0x1219dfdc */
  goto L_1219dfdc;
L_1219dfd3:;
  /* 1219dfd3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1219dfd8 jmp 0x1219dfdc */
  goto L_1219dfdc;
L_1219dfda:;
  /* 1219dfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219dfdc:;
  /* 1219dfdc mov esp, ebp */
  ESP = (EBP);
  /* 1219dfde pop ebp */
  EBP = (pop32());
  /* 1219dfdf ret  */
  ESPCHK(0x1219df90u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1219e010 (116 bytes, 29 insns) */
void f_1219e010(void) {
  FTRACE(0x1219e010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e010 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e011 mov ebp, esp */
  EBP = (ESP);
  /* 1219e013 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e014 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219e01b jmp 0x1219e026 */
  goto L_1219e026;
L_1219e01d:;
  /* 1219e01d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219e026:;
  /* 1219e026 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e02d jge 0x1219e03b */
  if ((C.sf==C.of)) goto L_1219e03b;
  /* 1219e02f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e032 mov byte ptr [ecx + 0x121c4f80], 0 */
  w8((uint32_t)(ECX + 0x121c4f80), (0x0u));
  /* 1219e039 jmp 0x1219e01d */
  goto L_1219e01d;
L_1219e03b:;
  /* 1219e03b mov dword ptr [0x121c4de4], 0 */
  w32((uint32_t)(0x121c4de4), (0x0u));
  /* 1219e045 mov dword ptr [0x121c4e6c], 0 */
  w32((uint32_t)(0x121c4e6c), (0x0u));
  /* 1219e04f mov dword ptr [0x121c5084], 0 */
  w32((uint32_t)(0x121c5084), (0x0u));
  /* 1219e059 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219e060 jmp 0x1219e06b */
  goto L_1219e06b;
L_1219e062:;
  /* 1219e062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e065 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e068 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219e06b:;
  /* 1219e06b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e06f jge 0x1219e080 */
  if ((C.sf==C.of)) goto L_1219e080;
  /* 1219e071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e074 mov word ptr [eax*2 + 0x121c4e60], 0 */
  w16((uint32_t)(EAX*2 + 0x121c4e60), (0x0u));
  /* 1219e07e jmp 0x1219e062 */
  goto L_1219e062;
L_1219e080:;
  /* 1219e080 mov esp, ebp */
  ESP = (EBP);
  /* 1219e082 pop ebp */
  EBP = (pop32());
  /* 1219e083 ret  */
  ESPCHK(0x1219e010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e090 @ 0x1219e090 (770 bytes, 175 insns) */
void f_1219e090(void) {
  FTRACE(0x1219e090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e090 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e091 mov ebp, esp */
  EBP = (ESP);
  /* 1219e093 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e099 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1219e09f push eax */
  push32((uint32_t)(EAX));
  /* 1219e0a0 mov ecx, dword ptr [0x121c4de4] */
  ECX = (r32((uint32_t)(0x121c4de4)));
  /* 1219e0a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e0a7 call dword ptr [0x121c62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62ec))), 0x1219e0adu);
  /* 1219e0ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e0b0 jne 0x1219e2c9 */
  if (!C.zf) goto L_1219e2c9;
  /* 1219e0b6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1219e0c0 jmp 0x1219e0d1 */
  goto L_1219e0d1;
L_1219e0c2:;
  /* 1219e0c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e0c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e0cb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1219e0d1:;
  /* 1219e0d1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e0db jae 0x1219e0f2 */
  if (!C.cf) goto L_1219e0f2;
  /* 1219e0dd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e0e3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1219e0e9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1219e0f0 jmp 0x1219e0c2 */
  goto L_1219e0c2;
L_1219e0f2:;
  /* 1219e0f2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1219e0f9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1219e0ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219e102 jmp 0x1219e10d */
  goto L_1219e10d;
L_1219e104:;
  /* 1219e104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e107 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e10a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219e10d:;
  /* 1219e10d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e110 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e112 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1219e114 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219e116 je 0x1219e158 */
  if (C.zf) goto L_1219e158;
  /* 1219e118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e11b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219e11d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1219e11f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1219e125 jmp 0x1219e136 */
  goto L_1219e136;
L_1219e127:;
  /* 1219e127 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e12d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e130 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1219e136:;
  /* 1219e136 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e139 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219e13b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1219e13e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e144 ja 0x1219e156 */
  if ((!C.cf&&!C.zf)) goto L_1219e156;
  /* 1219e146 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e14c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1219e154 jmp 0x1219e127 */
  goto L_1219e127;
L_1219e156:;
  /* 1219e156 jmp 0x1219e104 */
  goto L_1219e104;
L_1219e158:;
  /* 1219e158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219e15a mov eax, dword ptr [0x121c5084] */
  EAX = (r32((uint32_t)(0x121c5084)));
  /* 1219e15f push eax */
  push32((uint32_t)(EAX));
  /* 1219e160 mov ecx, dword ptr [0x121c4de4] */
  ECX = (r32((uint32_t)(0x121c4de4)));
  /* 1219e166 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e167 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1219e16d push edx */
  push32((uint32_t)(EDX));
  /* 1219e16e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e173 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1219e179 push eax */
  push32((uint32_t)(EAX));
  /* 1219e17a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219e17c call 0x1219fd40 */
  push32(0x1219e181u); f_1219fd40();
  /* 1219e181 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e184 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219e186 mov ecx, dword ptr [0x121c4de4] */
  ECX = (r32((uint32_t)(0x121c4de4)));
  /* 1219e18c push ecx */
  push32((uint32_t)(ECX));
  /* 1219e18d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e192 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1219e198 push edx */
  push32((uint32_t)(EDX));
  /* 1219e199 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e19e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1219e1a4 push eax */
  push32((uint32_t)(EAX));
  /* 1219e1a5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e1aa mov ecx, dword ptr [0x121c5084] */
  ECX = (r32((uint32_t)(0x121c5084)));
  /* 1219e1b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e1b1 call 0x1219ff00 */
  push32(0x1219e1b6u); f_1219ff00();
  /* 1219e1b6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e1b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219e1bb mov edx, dword ptr [0x121c4de4] */
  EDX = (r32((uint32_t)(0x121c4de4)));
  /* 1219e1c1 push edx */
  push32((uint32_t)(EDX));
  /* 1219e1c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e1c7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1219e1cd push eax */
  push32((uint32_t)(EAX));
  /* 1219e1ce push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219e1d3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1219e1d9 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e1da push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1219e1df mov edx, dword ptr [0x121c5084] */
  EDX = (r32((uint32_t)(0x121c5084)));
  /* 1219e1e5 push edx */
  push32((uint32_t)(EDX));
  /* 1219e1e6 call 0x1219ff00 */
  push32(0x1219e1ebu); f_1219ff00();
  /* 1219e1eb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e1ee mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1219e1f8 jmp 0x1219e209 */
  goto L_1219e209;
L_1219e1fa:;
  /* 1219e1fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e200 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e203 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1219e209:;
  /* 1219e209 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e213 jae 0x1219e2c4 */
  if (!C.cf) goto L_1219e2c4;
  /* 1219e219 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e21f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e221 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1219e229 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e22c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219e22e je 0x1219e266 */
  if (C.zf) goto L_1219e266;
  /* 1219e230 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e236 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 1219e23c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1219e23f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e245 mov byte ptr [edx + 0x121c4f81], cl */
  w8((uint32_t)(EDX + 0x121c4f81), (CL));
  /* 1219e24b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e251 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e257 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1219e25e mov byte ptr [eax + 0x121c4e80], dl */
  w8((uint32_t)(EAX + 0x121c4e80), (DL));
  /* 1219e264 jmp 0x1219e2bf */
  goto L_1219e2bf;
L_1219e266:;
  /* 1219e266 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e26c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219e26e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1219e276 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1219e279 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219e27b je 0x1219e2b2 */
  if (C.zf) goto L_1219e2b2;
  /* 1219e27d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e283 mov al, byte ptr [edx + 0x121c4f81] */
  AL = (r8((uint32_t)(EDX + 0x121c4f81)));
  /* 1219e289 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1219e28b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e291 mov byte ptr [ecx + 0x121c4f81], al */
  w8((uint32_t)(ECX + 0x121c4f81), (AL));
  /* 1219e297 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e29d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e2a3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1219e2aa mov byte ptr [edx + 0x121c4e80], cl */
  w8((uint32_t)(EDX + 0x121c4e80), (CL));
  /* 1219e2b0 jmp 0x1219e2bf */
  goto L_1219e2bf;
L_1219e2b2:;
  /* 1219e2b2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e2b8 mov byte ptr [edx + 0x121c4e80], 0 */
  w8((uint32_t)(EDX + 0x121c4e80), (0x0u));
L_1219e2bf:;
  /* 1219e2bf jmp 0x1219e1fa */
  goto L_1219e1fa;
L_1219e2c4:;
  /* 1219e2c4 jmp 0x1219e38e */
  goto L_1219e38e;
L_1219e2c9:;
  /* 1219e2c9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1219e2d3 jmp 0x1219e2e4 */
  goto L_1219e2e4;
L_1219e2d5:;
  /* 1219e2d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e2db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e2de mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1219e2e4:;
  /* 1219e2e4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e2ee jae 0x1219e38e */
  if (!C.cf) goto L_1219e38e;
  /* 1219e2f4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e2fb jb 0x1219e338 */
  if (C.cf) goto L_1219e338;
  /* 1219e2fd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e304 ja 0x1219e338 */
  if ((!C.cf&&!C.zf)) goto L_1219e338;
  /* 1219e306 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e30c mov dl, byte ptr [ecx + 0x121c4f81] */
  DL = (r8((uint32_t)(ECX + 0x121c4f81)));
  /* 1219e312 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1219e315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e31b mov byte ptr [eax + 0x121c4f81], dl */
  w8((uint32_t)(EAX + 0x121c4f81), (DL));
  /* 1219e321 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e327 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e32a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e330 mov byte ptr [edx + 0x121c4e80], cl */
  w8((uint32_t)(EDX + 0x121c4e80), (CL));
  /* 1219e336 jmp 0x1219e389 */
  goto L_1219e389;
L_1219e338:;
  /* 1219e338 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e33f jb 0x1219e37c */
  if (C.cf) goto L_1219e37c;
  /* 1219e341 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e348 ja 0x1219e37c */
  if ((!C.cf&&!C.zf)) goto L_1219e37c;
  /* 1219e34a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e350 mov cl, byte ptr [eax + 0x121c4f81] */
  CL = (r8((uint32_t)(EAX + 0x121c4f81)));
  /* 1219e356 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1219e359 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e35f mov byte ptr [edx + 0x121c4f81], cl */
  w8((uint32_t)(EDX + 0x121c4f81), (CL));
  /* 1219e365 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e36b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e36e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e374 mov byte ptr [ecx + 0x121c4e80], al */
  w8((uint32_t)(ECX + 0x121c4e80), (AL));
  /* 1219e37a jmp 0x1219e389 */
  goto L_1219e389;
L_1219e37c:;
  /* 1219e37c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1219e382 mov byte ptr [edx + 0x121c4e80], 0 */
  w8((uint32_t)(EDX + 0x121c4e80), (0x0u));
L_1219e389:;
  /* 1219e389 jmp 0x1219e2d5 */
  goto L_1219e2d5;
L_1219e38e:;
  /* 1219e38e mov esp, ebp */
  ESP = (EBP);
  /* 1219e390 pop ebp */
  EBP = (pop32());
  /* 1219e391 ret  */
  ESPCHK(0x1219e090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3a0 @ 0x1219e3a0 (23 bytes, 9 insns) */
void f_1219e3a0(void) {
  FTRACE(0x1219e3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1219e3a3 cmp dword ptr [0x121c4e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c4e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e3aa je 0x1219e3b3 */
  if (C.zf) goto L_1219e3b3;
  /* 1219e3ac mov eax, dword ptr [0x121c4de4] */
  EAX = (r32((uint32_t)(0x121c4de4)));
  /* 1219e3b1 jmp 0x1219e3b5 */
  goto L_1219e3b5;
L_1219e3b3:;
  /* 1219e3b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219e3b5:;
  /* 1219e3b5 pop ebp */
  EBP = (pop32());
  /* 1219e3b6 ret  */
  ESPCHK(0x1219e3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3c0 @ 0x1219e3c0 (34 bytes, 10 insns) */
void f_1219e3c0(void) {
  FTRACE(0x1219e3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1219e3c3 cmp dword ptr [0x121c5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e3ca jne 0x1219e3e0 */
  if (!C.zf) goto L_1219e3e0;
  /* 1219e3cc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1219e3ce call 0x1219dbe0 */
  push32(0x1219e3d3u); f_1219dbe0();
  /* 1219e3d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e3d6 mov dword ptr [0x121c5230], 1 */
  w32((uint32_t)(0x121c5230), (0x1u));
L_1219e3e0:;
  /* 1219e3e0 pop ebp */
  EBP = (pop32());
  /* 1219e3e1 ret  */
  ESPCHK(0x1219e3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3f0 @ 0x1219e3f0 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1219e3f0(void) {
  FTRACE(0x1219e3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1219e3f3 push edi */
  push32((uint32_t)(EDI));
  /* 1219e3f4 push esi */
  push32((uint32_t)(ESI));
  /* 1219e3f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1219e3f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219e3fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e3fe mov eax, ecx */
  EAX = (ECX);
  /* 1219e400 mov edx, ecx */
  EDX = (ECX);
  /* 1219e402 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e404 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e406 jbe 0x1219e410 */
  if ((C.cf||C.zf)) goto L_1219e410;
  /* 1219e408 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e40a jb 0x1219e588 */
  if (C.cf) goto L_1219e588;
L_1219e410:;
  /* 1219e410 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219e416 jne 0x1219e42c */
  if (!C.zf) goto L_1219e42c;
  /* 1219e418 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e41b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e41e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e421 jb 0x1219e44c */
  if (C.cf) goto L_1219e44c;
  /* 1219e423 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e425 jmp dword ptr [edx*4 + 0x1219e538] */
  switch (EDX) {
    case 0: goto L_1219e548;
    case 1: goto L_1219e550;
    case 2: goto L_1219e55c;
    case 3: goto L_1219e570;
    default: x86_unimpl("switch@0x1219e425 out of table"); return;
  }
L_1219e42c:;
  /* 1219e42c mov eax, edi */
  EAX = (EDI);
  /* 1219e42e mov edx, 3 */
  EDX = (0x3u);
  /* 1219e433 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e436 jb 0x1219e444 */
  if (C.cf) goto L_1219e444;
  /* 1219e438 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1219e43b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e43d jmp dword ptr [eax*4 + 0x1219e450] */
  switch (EAX) {
    case 1: goto L_1219e460;
    case 2: goto L_1219e48c;
    case 3: goto L_1219e4b0;
    default: x86_unimpl("switch@0x1219e43d out of table"); return;
  }
L_1219e444:;
  /* 1219e444 jmp dword ptr [ecx*4 + 0x1219e548] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1219e548)))); return;
  /* 1219e44b nop  */
  /* nop */
L_1219e44c:;
  /* 1219e44c jmp dword ptr [ecx*4 + 0x1219e4cc] */
  switch (ECX) {
    case 0: goto L_1219e52f;
    case 1: goto L_1219e51c;
    case 2: goto L_1219e514;
    case 3: goto L_1219e50c;
    case 4: goto L_1219e504;
    case 5: goto L_1219e4fc;
    case 6: goto L_1219e4f4;
    case 7: goto L_1219e4ec;
    default: x86_unimpl("switch@0x1219e44c out of table"); return;
  }
  /* 1219e453 nop  */
  /* nop */
L_1219e460:;
  /* 1219e460 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e462 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e464 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e466 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e469 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e46c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e46f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e472 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e475 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e478 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e47b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e47e jb 0x1219e44c */
  if (C.cf) goto L_1219e44c;
  /* 1219e480 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e482 jmp dword ptr [edx*4 + 0x1219e538] */
  switch (EDX) {
    case 0: goto L_1219e548;
    case 1: goto L_1219e550;
    case 2: goto L_1219e55c;
    case 3: goto L_1219e570;
    default: x86_unimpl("switch@0x1219e482 out of table"); return;
  }
  /* 1219e489 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e48c:;
  /* 1219e48c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e48e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e490 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e492 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e495 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e498 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e49b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e49e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e4a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e4a4 jb 0x1219e44c */
  if (C.cf) goto L_1219e44c;
  /* 1219e4a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e4a8 jmp dword ptr [edx*4 + 0x1219e538] */
  switch (EDX) {
    case 0: goto L_1219e548;
    case 1: goto L_1219e550;
    case 2: goto L_1219e55c;
    case 3: goto L_1219e570;
    default: x86_unimpl("switch@0x1219e4a8 out of table"); return;
  }
  /* 1219e4af nop  */
  /* nop */
L_1219e4b0:;
  /* 1219e4b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e4b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e4b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e4b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1219e4b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e4ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219e4bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e4be jb 0x1219e44c */
  if (C.cf) goto L_1219e44c;
  /* 1219e4c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e4c2 jmp dword ptr [edx*4 + 0x1219e538] */
  switch (EDX) {
    case 0: goto L_1219e548;
    case 1: goto L_1219e550;
    case 2: goto L_1219e55c;
    case 3: goto L_1219e570;
    default: x86_unimpl("switch@0x1219e4c2 out of table"); return;
  }
  /* 1219e4c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e4ec:;
  /* 1219e4ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1219e4f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1219e4f4:;
  /* 1219e4f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1219e4f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1219e4fc:;
  /* 1219e4fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1219e500 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1219e504:;
  /* 1219e504 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1219e508 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1219e50c:;
  /* 1219e50c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1219e510 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1219e514:;
  /* 1219e514 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1219e518 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1219e51c:;
  /* 1219e51c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1219e520 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1219e524 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1219e52b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e52d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1219e52f:;
  /* 1219e52f jmp dword ptr [edx*4 + 0x1219e538] */
  switch (EDX) {
    case 0: goto L_1219e548;
    case 1: goto L_1219e550;
    case 2: goto L_1219e55c;
    case 3: goto L_1219e570;
    default: x86_unimpl("switch@0x1219e52f out of table"); return;
  }
  /* 1219e536 mov edi, edi */
  EDI = (EDI);
L_1219e548:;
  /* 1219e548 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e54b pop esi */
  ESI = (pop32());
  /* 1219e54c pop edi */
  EDI = (pop32());
  /* 1219e54d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e54e ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e54f nop  */
  /* nop */
L_1219e550:;
  /* 1219e550 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e552 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e557 pop esi */
  ESI = (pop32());
  /* 1219e558 pop edi */
  EDI = (pop32());
  /* 1219e559 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e55a ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e55b nop  */
  /* nop */
L_1219e55c:;
  /* 1219e55c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e55e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e560 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e563 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e569 pop esi */
  ESI = (pop32());
  /* 1219e56a pop edi */
  EDI = (pop32());
  /* 1219e56b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e56c ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e56d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e570:;
  /* 1219e570 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219e572 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219e574 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e577 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e57a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e57d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e580 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e583 pop esi */
  ESI = (pop32());
  /* 1219e584 pop edi */
  EDI = (pop32());
  /* 1219e585 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e586 ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e587 nop  */
  /* nop */
L_1219e588:;
  /* 1219e588 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1219e58c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1219e590 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219e596 jne 0x1219e5bc */
  if (!C.zf) goto L_1219e5bc;
  /* 1219e598 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e59b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e59e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e5a1 jb 0x1219e5b0 */
  if (C.cf) goto L_1219e5b0;
  /* 1219e5a3 std  */
  C.df=1;
  /* 1219e5a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e5a6 cld  */
  C.df=0;
  /* 1219e5a7 jmp dword ptr [edx*4 + 0x1219e6d0] */
  switch (EDX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e5a7 out of table"); return;
  }
  /* 1219e5ae mov edi, edi */
  EDI = (EDI);
L_1219e5b0:;
  /* 1219e5b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219e5b2 jmp dword ptr [ecx*4 + 0x1219e680] */
  switch (ECX) {
    case 0: goto L_1219e6c7;
    default: x86_unimpl("switch@0x1219e5b2 out of table"); return;
  }
  /* 1219e5b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e5bc:;
  /* 1219e5bc mov eax, edi */
  EAX = (EDI);
  /* 1219e5be mov edx, 3 */
  EDX = (0x3u);
  /* 1219e5c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e5c6 jb 0x1219e5d4 */
  if (C.cf) goto L_1219e5d4;
  /* 1219e5c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1219e5cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e5cd jmp dword ptr [eax*4 + 0x1219e5d8] */
  switch (EAX) {
    case 1: goto L_1219e5e8;
    case 2: goto L_1219e608;
    case 3: goto L_1219e630;
    default: x86_unimpl("switch@0x1219e5cd out of table"); return;
  }
L_1219e5d4:;
  /* 1219e5d4 jmp dword ptr [ecx*4 + 0x1219e6d0] */
  switch (ECX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e5d4 out of table"); return;
  }
  /* 1219e5db nop  */
  /* nop */
L_1219e5e8:;
  /* 1219e5e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e5eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e5ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e5f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1219e5f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e5f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1219e5f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e5f8 jb 0x1219e5b0 */
  if (C.cf) goto L_1219e5b0;
  /* 1219e5fa std  */
  C.df=1;
  /* 1219e5fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e5fd cld  */
  C.df=0;
  /* 1219e5fe jmp dword ptr [edx*4 + 0x1219e6d0] */
  switch (EDX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e5fe out of table"); return;
  }
  /* 1219e605 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e608:;
  /* 1219e608 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e60b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e60d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e610 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e613 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e616 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e619 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e61c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e61f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e622 jb 0x1219e5b0 */
  if (C.cf) goto L_1219e5b0;
  /* 1219e624 std  */
  C.df=1;
  /* 1219e625 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e627 cld  */
  C.df=0;
  /* 1219e628 jmp dword ptr [edx*4 + 0x1219e6d0] */
  switch (EDX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e628 out of table"); return;
  }
  /* 1219e62f nop  */
  /* nop */
L_1219e630:;
  /* 1219e630 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e633 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e635 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e638 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e63b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e63e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e641 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219e644 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e647 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e64a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e64d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e650 jb 0x1219e5b0 */
  if (C.cf) goto L_1219e5b0;
  /* 1219e656 std  */
  C.df=1;
  /* 1219e657 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219e659 cld  */
  C.df=0;
  /* 1219e65a jmp dword ptr [edx*4 + 0x1219e6d0] */
  switch (EDX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e65a out of table"); return;
  }
  /* 1219e661 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1219e664 test dh, ah */
  { uint32_t _r=(C.d.b.h)&(AH); fl_logic(_r,8); }
  /* 1219e666 sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219e668 mov esi, fs */
  ESI = (C.seg_fs);
  /* 1219e66a sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219e66c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1219e66d out 0x19, al */
  x86_unimpl("out @ 0x1219e66d");
  /* 1219e66f adc bl, byte ptr [esi - 0x195bede7] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(ESI + -0x195bede7))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219e676 sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219e678 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1219e679 out 0x19, al */
  x86_unimpl("out @ 0x1219e679");
  /* 1219e67c mov ah, 0xe6 */
  AH = (0xe6u);
  /* 1219e67e sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219e684 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1219e688 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1219e68c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1219e690 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1219e694 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1219e698 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1219e69c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1219e6a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1219e6a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1219e6a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1219e6ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1219e6b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1219e6b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1219e6b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1219e6bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1219e6c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e6c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1219e6c7:;
  /* 1219e6c7 jmp dword ptr [edx*4 + 0x1219e6d0] */
  switch (EDX) {
    case 0: goto L_1219e6e0;
    case 1: goto L_1219e6e8;
    case 2: goto L_1219e6f8;
    case 3: goto L_1219e70c;
    default: x86_unimpl("switch@0x1219e6c7 out of table"); return;
  }
  /* 1219e6ce mov edi, edi */
  EDI = (EDI);
L_1219e6e0:;
  /* 1219e6e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e6e3 pop esi */
  ESI = (pop32());
  /* 1219e6e4 pop edi */
  EDI = (pop32());
  /* 1219e6e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e6e6 ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e6e7 nop  */
  /* nop */
L_1219e6e8:;
  /* 1219e6e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e6eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e6ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e6f1 pop esi */
  ESI = (pop32());
  /* 1219e6f2 pop edi */
  EDI = (pop32());
  /* 1219e6f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e6f4 ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e6f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219e6f8:;
  /* 1219e6f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e6fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e6fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e701 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e707 pop esi */
  ESI = (pop32());
  /* 1219e708 pop edi */
  EDI = (pop32());
  /* 1219e709 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e70a ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
  /* 1219e70b nop  */
  /* nop */
L_1219e70c:;
  /* 1219e70c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219e70f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219e712 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219e715 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219e718 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219e71b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219e71e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219e721 pop esi */
  ESI = (pop32());
  /* 1219e722 pop edi */
  EDI = (pop32());
  /* 1219e723 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219e724 ret  */
  ESPCHK(0x1219e3f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1219e730 (104 bytes, 43 insns) */
void f_1219e730(void) {
  FTRACE(0x1219e730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e730 push ebx */
  push32((uint32_t)(EBX));
  /* 1219e731 push esi */
  push32((uint32_t)(ESI));
  /* 1219e732 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1219e736 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219e738 jne 0x1219e752 */
  if (!C.zf) goto L_1219e752;
  /* 1219e73a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1219e73e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219e742 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e744 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e746 mov ebx, eax */
  EBX = (EAX);
  /* 1219e748 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219e74c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e74e mov edx, ebx */
  EDX = (EBX);
  /* 1219e750 jmp 0x1219e793 */
  goto L_1219e793;
L_1219e752:;
  /* 1219e752 mov ecx, eax */
  ECX = (EAX);
  /* 1219e754 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1219e758 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219e75c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1219e760:;
  /* 1219e760 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1219e762 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1219e764 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1219e766 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1219e768 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219e76a jne 0x1219e760 */
  if (!C.zf) goto L_1219e760;
  /* 1219e76c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e76e mov esi, eax */
  ESI = (EAX);
  /* 1219e770 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1219e774 mov ecx, eax */
  ECX = (EAX);
  /* 1219e776 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1219e77a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1219e77c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e77e jb 0x1219e78e */
  if (C.cf) goto L_1219e78e;
  /* 1219e780 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e784 ja 0x1219e78e */
  if ((!C.cf&&!C.zf)) goto L_1219e78e;
  /* 1219e786 jb 0x1219e78f */
  if (C.cf) goto L_1219e78f;
  /* 1219e788 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e78c jbe 0x1219e78f */
  if ((C.cf||C.zf)) goto L_1219e78f;
L_1219e78e:;
  /* 1219e78e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1219e78f:;
  /* 1219e78f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e791 mov eax, esi */
  EAX = (ESI);
L_1219e793:;
  /* 1219e793 pop esi */
  ESI = (pop32());
  /* 1219e794 pop ebx */
  EBX = (pop32());
  /* 1219e795 ret 0x10 */
  ESPCHK(0x1219e730u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1219e7a0 (117 bytes, 44 insns) */
void f_1219e7a0(void) {
  FTRACE(0x1219e7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e7a0 push ebx */
  push32((uint32_t)(EBX));
  /* 1219e7a1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1219e7a5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219e7a7 jne 0x1219e7c1 */
  if (!C.zf) goto L_1219e7c1;
  /* 1219e7a9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219e7ad mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219e7b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e7b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e7b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1219e7b9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e7bb mov eax, edx */
  EAX = (EDX);
  /* 1219e7bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1219e7bf jmp 0x1219e811 */
  goto L_1219e811;
L_1219e7c1:;
  /* 1219e7c1 mov ecx, eax */
  ECX = (EAX);
  /* 1219e7c3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1219e7c7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1219e7cb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1219e7cf:;
  /* 1219e7cf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1219e7d1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1219e7d3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1219e7d5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1219e7d7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219e7d9 jne 0x1219e7cf */
  if (!C.zf) goto L_1219e7cf;
  /* 1219e7db div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1219e7dd mov ecx, eax */
  ECX = (EAX);
  /* 1219e7df mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1219e7e3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1219e7e4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1219e7e8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e7ea jb 0x1219e7fa */
  if (C.cf) goto L_1219e7fa;
  /* 1219e7ec cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e7f0 ja 0x1219e7fa */
  if ((!C.cf&&!C.zf)) goto L_1219e7fa;
  /* 1219e7f2 jb 0x1219e802 */
  if (C.cf) goto L_1219e802;
  /* 1219e7f4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e7f8 jbe 0x1219e802 */
  if ((C.cf||C.zf)) goto L_1219e802;
L_1219e7fa:;
  /* 1219e7fa sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e7fe sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1219e802:;
  /* 1219e802 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e806 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e80a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219e80c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219e80e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1219e811:;
  /* 1219e811 pop ebx */
  EBX = (pop32());
  /* 1219e812 ret 0x10 */
  ESPCHK(0x1219e7a0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000e820 @ 0x1219e820 (628 bytes, 214 insns) */
void f_1219e820(void) {
  FTRACE(0x1219e820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219e820 push ebp */
  push32((uint32_t)(EBP));
  /* 1219e821 mov ebp, esp */
  EBP = (ESP);
  /* 1219e823 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e826 push ebx */
  push32((uint32_t)(EBX));
  /* 1219e827 push esi */
  push32((uint32_t)(ESI));
  /* 1219e828 push edi */
  push32((uint32_t)(EDI));
L_1219e829:;
  /* 1219e829 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e82d jne 0x1219e84d */
  if (!C.zf) goto L_1219e84d;
  /* 1219e82f push 0x121befec */
  push32((uint32_t)(0x121befecu));
  /* 1219e834 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219e836 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1219e838 push 0x121befe0 */
  push32((uint32_t)(0x121befe0u));
  /* 1219e83d push 2 */
  push32((uint32_t)(0x2u));
  /* 1219e83f call 0x12196bd0 */
  push32(0x1219e844u); f_12196bd0();
  /* 1219e844 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e84a jne 0x1219e84d */
  if (!C.zf) goto L_1219e84d;
  /* 1219e84c int3  */
  x86_unimpl("int3 @ 0x1219e84c");
L_1219e84d:;
  /* 1219e84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219e84f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219e851 jne 0x1219e829 */
  if (!C.zf) goto L_1219e829;
  /* 1219e853 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219e856 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1219e859 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e85c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1219e85f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219e862 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e865 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e868 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e86e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219e870 je 0x1219e87f */
  if (C.zf) goto L_1219e87f;
  /* 1219e872 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e875 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219e878 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1219e87b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219e87d je 0x1219e895 */
  if (C.zf) goto L_1219e895;
L_1219e87f:;
  /* 1219e87f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e882 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219e885 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1219e887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e88a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1219e88d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219e890 jmp 0x1219ea8d */
  goto L_1219ea8d;
L_1219e895:;
  /* 1219e895 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e898 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219e89b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1219e89e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219e8a0 je 0x1219e8ec */
  if (C.zf) goto L_1219e8ec;
  /* 1219e8a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8a5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1219e8ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8af mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1219e8b2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1219e8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219e8b7 je 0x1219e8d5 */
  if (C.zf) goto L_1219e8d5;
  /* 1219e8b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8bf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219e8c2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219e8c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8c7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e8ca and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1219e8cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8d0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1219e8d3 jmp 0x1219e8ec */
  goto L_1219e8ec;
L_1219e8d5:;
  /* 1219e8d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8d8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e8db or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e8de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8e1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1219e8e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219e8e7 jmp 0x1219ea8d */
  goto L_1219ea8d;
L_1219e8ec:;
  /* 1219e8ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e8f2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e8f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8f8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1219e8fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e8fe mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e901 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1219e904 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e907 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1219e90a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e90d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1219e914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219e91b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e91e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219e921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e924 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219e927 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1219e92d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219e92f jne 0x1219e95f */
  if (!C.zf) goto L_1219e95f;
  /* 1219e931 cmp dword ptr [ebp - 8], 0x121c2140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x121c2140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e938 je 0x1219e943 */
  if (C.zf) goto L_1219e943;
  /* 1219e93a cmp dword ptr [ebp - 8], 0x121c2160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x121c2160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e941 jne 0x1219e953 */
  if (!C.zf) goto L_1219e953;
L_1219e943:;
  /* 1219e943 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219e946 push edx */
  push32((uint32_t)(EDX));
  /* 1219e947 call 0x121a0790 */
  push32(0x1219e94cu); f_121a0790();
  /* 1219e94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e94f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219e951 jne 0x1219e95f */
  if (!C.zf) goto L_1219e95f;
L_1219e953:;
  /* 1219e953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e956 push eax */
  push32((uint32_t)(EAX));
  /* 1219e957 call 0x121a06c0 */
  push32(0x1219e95cu); f_121a06c0();
  /* 1219e95c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219e95f:;
  /* 1219e95f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e962 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1219e965 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1219e96b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219e96d je 0x1219ea4b */
  if (C.zf) goto L_1219ea4b;
L_1219e973:;
  /* 1219e973 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e976 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e979 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1219e97b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e97e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219e980 jge 0x1219e9a3 */
  if ((C.sf==C.of)) goto L_1219e9a3;
  /* 1219e982 push 0x121befa0 */
  push32((uint32_t)(0x121befa0u));
  /* 1219e987 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219e989 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1219e98e push 0x121befe0 */
  push32((uint32_t)(0x121befe0u));
  /* 1219e993 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219e995 call 0x12196bd0 */
  push32(0x1219e99au); f_12196bd0();
  /* 1219e99a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e99d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e9a0 jne 0x1219e9a3 */
  if (!C.zf) goto L_1219e9a3;
  /* 1219e9a2 int3  */
  x86_unimpl("int3 @ 0x1219e9a2");
L_1219e9a3:;
  /* 1219e9a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219e9a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219e9a7 jne 0x1219e973 */
  if (!C.zf) goto L_1219e973;
  /* 1219e9a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9af mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1219e9b1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e9b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219e9b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9ba mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1219e9bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e9c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1219e9c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1219e9cb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219e9ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9d1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1219e9d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e9d8 jle 0x1219e9f6 */
  if ((C.zf||C.sf!=C.of)) goto L_1219e9f6;
  /* 1219e9da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 1219e9de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219e9e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219e9e4 push eax */
  push32((uint32_t)(EAX));
  /* 1219e9e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219e9e8 push ecx */
  push32((uint32_t)(ECX));
  /* 1219e9e9 call 0x121a03b0 */
  push32(0x1219e9eeu); f_121a03b0();
  /* 1219e9ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219e9f1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1219e9f4 jmp 0x1219ea3e */
  goto L_1219ea3e;
L_1219e9f6:;
  /* 1219e9f6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219e9fa je 0x1219ea19 */
  if (C.zf) goto L_1219ea19;
  /* 1219e9fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219e9ff sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1219ea02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219ea05 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1219ea08 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219ea0b mov ecx, dword ptr [edx*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 1219ea12 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ea14 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1219ea17 jmp 0x1219ea20 */
  goto L_1219ea20;
L_1219ea19:;
  /* 1219ea19 mov dword ptr [ebp - 0x14], 0x121c1a60 */
  w32((uint32_t)(EBP + -0x14), (0x121c1a60u));
L_1219ea20:;
  /* 1219ea20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1219ea23 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1219ea27 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1219ea2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ea2c je 0x1219ea3e */
  if (C.zf) goto L_1219ea3e;
  /* 1219ea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 1219ea30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ea32 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219ea35 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ea36 call 0x121a0260 */
  push32(0x1219ea3bu); f_121a0260();
  /* 1219ea3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219ea3e:;
  /* 1219ea3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ea41 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1219ea44 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1219ea47 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1219ea49 jmp 0x1219ea69 */
  goto L_1219ea69;
L_1219ea4b:;
  /* 1219ea4b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1219ea52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ea55 push edx */
  push32((uint32_t)(EDX));
  /* 1219ea56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1219ea59 push eax */
  push32((uint32_t)(EAX));
  /* 1219ea5a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219ea5d push ecx */
  push32((uint32_t)(ECX));
  /* 1219ea5e call 0x121a03b0 */
  push32(0x1219ea63u); f_121a03b0();
  /* 1219ea63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ea66 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1219ea69:;
  /* 1219ea69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219ea6c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ea6f je 0x1219ea85 */
  if (C.zf) goto L_1219ea85;
  /* 1219ea71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ea74 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1219ea77 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1219ea7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ea7d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1219ea80 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219ea83 jmp 0x1219ea8d */
  goto L_1219ea8d;
L_1219ea85:;
  /* 1219ea85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ea88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1219ea8d:;
  /* 1219ea8d pop edi */
  EDI = (pop32());
  /* 1219ea8e pop esi */
  ESI = (pop32());
  /* 1219ea8f pop ebx */
  EBX = (pop32());
  /* 1219ea90 mov esp, ebp */
  ESP = (EBP);
  /* 1219ea92 pop ebp */
  EBP = (pop32());
  /* 1219ea93 ret  */
  ESPCHK(0x1219e820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x1219eaa0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1219eaa0(void) {
  FTRACE(0x1219eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 1219eaa3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219eaa9 push ebx */
  push32((uint32_t)(EBX));
  /* 1219eaaa push esi */
  push32((uint32_t)(ESI));
  /* 1219eaab push edi */
  push32((uint32_t)(EDI));
  /* 1219eaac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1219eab3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1219eabd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1219eac4:;
  /* 1219eac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219eac7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1219eac9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1219eacc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ead0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ead3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ead6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1219ead9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219eadb je 0x1219f6b7 */
  if (C.zf) goto L_1219f6b7;
  /* 1219eae1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eae8 jl 0x1219f6b7 */
  if ((C.sf!=C.of)) goto L_1219f6b7;
  /* 1219eaee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219eaf2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eaf5 jl 0x1219eb16 */
  if ((C.sf!=C.of)) goto L_1219eb16;
  /* 1219eaf7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219eafb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eafe jg 0x1219eb16 */
  if ((!C.zf&&C.sf==C.of)) goto L_1219eb16;
  /* 1219eb00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219eb04 movsx ecx, byte ptr [eax + 0x121befd8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x121befd8))));
  /* 1219eb0b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1219eb0e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1219eb14 jmp 0x1219eb20 */
  goto L_1219eb20;
L_1219eb16:;
  /* 1219eb16 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1219eb20:;
  /* 1219eb20 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1219eb26 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1219eb29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1219eb2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219eb2f movsx edx, byte ptr [ecx + eax*8 + 0x121beff8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x121beff8))));
  /* 1219eb37 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1219eb3a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1219eb3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1219eb40 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1219eb46 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eb4d ja 0x1219f6b2 */
  if ((!C.cf&&!C.zf)) goto L_1219f6b2;
  /* 1219eb53 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1219eb59 jmp dword ptr [ecx*4 + 0x1219f6c4] */
  switch (ECX) {
    case 0: goto L_1219eb60;
    case 1: goto L_1219ebfa;
    case 2: goto L_1219ec3c;
    case 3: goto L_1219ecab;
    case 4: goto L_1219ed03;
    case 5: goto L_1219ed12;
    case 6: goto L_1219ed5e;
    case 7: goto L_1219edf1;
    case 8: goto L_1219ec88;
    case 9: goto L_1219ec93;
    case 10: goto L_1219ec7e;
    case 11: goto L_1219ec73;
    case 12: goto L_1219ec9e;
    case 13: goto L_1219eca6;
    default: x86_unimpl("switch@0x1219eb59 out of table"); return;
  }
L_1219eb60:;
  /* 1219eb60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1219eb67 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219eb6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1219eb70 mov eax, dword ptr [0x121c1c98] */
  EAX = (r32((uint32_t)(0x121c1c98)));
  /* 1219eb75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219eb77 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1219eb7b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1219eb81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219eb83 je 0x1219ebdd */
  if (C.zf) goto L_1219ebdd;
  /* 1219eb85 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1219eb8b push edx */
  push32((uint32_t)(EDX));
  /* 1219eb8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219eb8f push eax */
  push32((uint32_t)(EAX));
  /* 1219eb90 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219eb94 push ecx */
  push32((uint32_t)(ECX));
  /* 1219eb95 call 0x1219f7d0 */
  push32(0x1219eb9au); f_1219f7d0();
  /* 1219eb9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219eb9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219eba0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1219eba2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1219eba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219eba8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ebab mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1219ebae:;
  /* 1219ebae movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ebb2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219ebb4 jne 0x1219ebd7 */
  if (!C.zf) goto L_1219ebd7;
  /* 1219ebb6 push 0x121bf078 */
  push32((uint32_t)(0x121bf078u));
  /* 1219ebbb push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ebbd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1219ebc2 push 0x121bf06c */
  push32((uint32_t)(0x121bf06cu));
  /* 1219ebc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1219ebc9 call 0x12196bd0 */
  push32(0x1219ebceu); f_12196bd0();
  /* 1219ebce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ebd1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ebd4 jne 0x1219ebd7 */
  if (!C.zf) goto L_1219ebd7;
  /* 1219ebd6 int3  */
  x86_unimpl("int3 @ 0x1219ebd6");
L_1219ebd7:;
  /* 1219ebd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ebd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ebdb jne 0x1219ebae */
  if (!C.zf) goto L_1219ebae;
L_1219ebdd:;
  /* 1219ebdd lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1219ebe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ebe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ebe7 push edx */
  push32((uint32_t)(EDX));
  /* 1219ebe8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ebec push eax */
  push32((uint32_t)(EAX));
  /* 1219ebed call 0x1219f7d0 */
  push32(0x1219ebf2u); f_1219f7d0();
  /* 1219ebf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ebf5 jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ebfa:;
  /* 1219ebfa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1219ec01 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219ec04 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1219ec0a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1219ec10 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1219ec16 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1219ec1c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1219ec1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219ec26 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1219ec30 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1219ec37 jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ec3c:;
  /* 1219ec3c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ec40 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1219ec46 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1219ec4c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ec4f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1219ec55 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ec5c ja 0x1219eca6 */
  if ((!C.cf&&!C.zf)) goto L_1219eca6;
  /* 1219ec5e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1219ec64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ec66 mov al, byte ptr [ecx + 0x1219f6fc] */
  AL = (r8((uint32_t)(ECX + 0x1219f6fc)));
  /* 1219ec6c jmp dword ptr [eax*4 + 0x1219f6e4] */
  switch (EAX) {
    case 0: goto L_1219ec88;
    case 1: goto L_1219ec93;
    case 2: goto L_1219ec7e;
    case 3: goto L_1219ec73;
    case 4: goto L_1219ec9e;
    case 5: goto L_1219eca6;
    default: x86_unimpl("switch@0x1219ec6c out of table"); return;
  }
L_1219ec73:;
  /* 1219ec73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ec76 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1219ec79 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219ec7c jmp 0x1219eca6 */
  goto L_1219eca6;
L_1219ec7e:;
  /* 1219ec7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ec81 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1219ec83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219ec86 jmp 0x1219eca6 */
  goto L_1219eca6;
L_1219ec88:;
  /* 1219ec88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ec8b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1219ec8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219ec91 jmp 0x1219eca6 */
  goto L_1219eca6;
L_1219ec93:;
  /* 1219ec93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ec96 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1219ec99 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219ec9c jmp 0x1219eca6 */
  goto L_1219eca6;
L_1219ec9e:;
  /* 1219ec9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219eca1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1219eca3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219eca6:;
  /* 1219eca6 jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ecab:;
  /* 1219ecab movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ecaf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ecb2 jne 0x1219ece7 */
  if (!C.zf) goto L_1219ece7;
  /* 1219ecb4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1219ecb7 push edx */
  push32((uint32_t)(EDX));
  /* 1219ecb8 call 0x1219f8e0 */
  push32(0x1219ecbdu); f_1219f8e0();
  /* 1219ecbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ecc0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1219ecc6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eccd jge 0x1219ece5 */
  if ((C.sf==C.of)) goto L_1219ece5;
  /* 1219eccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ecd2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1219ecd4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219ecd7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1219ecdd neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219ecdf mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1219ece5:;
  /* 1219ece5 jmp 0x1219ecfe */
  goto L_1219ecfe;
L_1219ece7:;
  /* 1219ece7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1219eced imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219ecf0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ecf4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1219ecf8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1219ecfe:;
  /* 1219ecfe jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ed03:;
  /* 1219ed03 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1219ed0d jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ed12:;
  /* 1219ed12 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ed16 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ed19 jne 0x1219ed42 */
  if (!C.zf) goto L_1219ed42;
  /* 1219ed1b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1219ed1e push eax */
  push32((uint32_t)(EAX));
  /* 1219ed1f call 0x1219f8e0 */
  push32(0x1219ed24u); f_1219f8e0();
  /* 1219ed24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ed27 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1219ed2d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ed34 jge 0x1219ed40 */
  if ((C.sf==C.of)) goto L_1219ed40;
  /* 1219ed36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1219ed40:;
  /* 1219ed40 jmp 0x1219ed59 */
  goto L_1219ed59;
L_1219ed42:;
  /* 1219ed42 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1219ed48 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1219ed4b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ed4f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1219ed53 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1219ed59:;
  /* 1219ed59 jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219ed5e:;
  /* 1219ed5e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219ed62 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1219ed68 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1219ed6e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ed71 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1219ed77 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ed7e ja 0x1219edec */
  if ((!C.cf&&!C.zf)) goto L_1219edec;
  /* 1219ed80 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1219ed86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ed88 mov al, byte ptr [ecx + 0x1219f721] */
  AL = (r8((uint32_t)(ECX + 0x1219f721)));
  /* 1219ed8e jmp dword ptr [eax*4 + 0x1219f70d] */
  switch (EAX) {
    case 0: goto L_1219eda0;
    case 1: goto L_1219edd9;
    case 2: goto L_1219ed95;
    case 3: goto L_1219ede3;
    case 4: goto L_1219edec;
    default: x86_unimpl("switch@0x1219ed8e out of table"); return;
  }
L_1219ed95:;
  /* 1219ed95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ed98 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1219ed9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219ed9e jmp 0x1219edec */
  goto L_1219edec;
L_1219eda0:;
  /* 1219eda0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219eda3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1219eda6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eda9 jne 0x1219edcb */
  if (!C.zf) goto L_1219edcb;
  /* 1219edab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219edae movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1219edb2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219edb5 jne 0x1219edcb */
  if (!C.zf) goto L_1219edcb;
  /* 1219edb7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219edba add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219edbd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1219edc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219edc3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1219edc6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219edc9 jmp 0x1219edd7 */
  goto L_1219edd7;
L_1219edcb:;
  /* 1219edcb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1219edd2 jmp 0x1219eb60 */
  goto L_1219eb60;
L_1219edd7:;
  /* 1219edd7 jmp 0x1219edec */
  goto L_1219edec;
L_1219edd9:;
  /* 1219edd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219eddc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1219edde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219ede1 jmp 0x1219edec */
  goto L_1219edec;
L_1219ede3:;
  /* 1219ede3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ede6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1219ede9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1219edec:;
  /* 1219edec jmp 0x1219f6b2 */
  goto L_1219f6b2;
L_1219edf1:;
  /* 1219edf1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219edf5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1219edfb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1219ee01 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219ee04 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1219ee0a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ee11 ja 0x1219f4d7 */
  if ((!C.cf&&!C.zf)) goto L_1219f4d7;
  /* 1219ee17 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1219ee1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219ee1f mov cl, byte ptr [edx + 0x1219f78c] */
  CL = (r8((uint32_t)(EDX + 0x1219f78c)));
  /* 1219ee25 jmp dword ptr [ecx*4 + 0x1219f750] */
  switch (ECX) {
    case 0: goto L_1219ee2c;
    case 1: goto L_1219f0c0;
    case 2: goto L_1219ef50;
    case 3: goto L_1219f1f9;
    case 4: goto L_1219eebb;
    case 5: goto L_1219ee41;
    case 6: goto L_1219f1cb;
    case 7: goto L_1219f0d0;
    case 8: goto L_1219f075;
    case 9: goto L_1219f245;
    case 10: goto L_1219f1ef;
    case 11: goto L_1219ef66;
    case 12: goto L_1219f1e3;
    case 13: goto L_1219f205;
    case 14: goto L_1219f4d7;
    default: x86_unimpl("switch@0x1219ee25 out of table"); return;
  }
L_1219ee2c:;
  /* 1219ee2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ee2f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1219ee34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ee36 jne 0x1219ee41 */
  if (!C.zf) goto L_1219ee41;
  /* 1219ee38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ee3b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1219ee3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1219ee41:;
  /* 1219ee41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ee44 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1219ee4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219ee4c je 0x1219ee87 */
  if (C.zf) goto L_1219ee87;
  /* 1219ee4e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1219ee51 push eax */
  push32((uint32_t)(EAX));
  /* 1219ee52 call 0x1219f920 */
  push32(0x1219ee57u); f_1219f920();
  /* 1219ee57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ee5a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1219ee5e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1219ee62 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ee63 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1219ee69 push edx */
  push32((uint32_t)(EDX));
  /* 1219ee6a call 0x121a0a00 */
  push32(0x1219ee6fu); f_121a0a00();
  /* 1219ee6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ee72 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219ee75 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ee79 jge 0x1219ee85 */
  if ((C.sf==C.of)) goto L_1219ee85;
  /* 1219ee7b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1219ee85:;
  /* 1219ee85 jmp 0x1219eead */
  goto L_1219eead;
L_1219ee87:;
  /* 1219ee87 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1219ee8a push eax */
  push32((uint32_t)(EAX));
  /* 1219ee8b call 0x1219f8e0 */
  push32(0x1219ee90u); f_1219f8e0();
  /* 1219ee90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ee93 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1219ee9a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1219eea0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1219eea6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1219eead:;
  /* 1219eead lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1219eeb3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1219eeb6 jmp 0x1219f4d7 */
  goto L_1219f4d7;
L_1219eebb:;
  /* 1219eebb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1219eebe push eax */
  push32((uint32_t)(EAX));
  /* 1219eebf call 0x1219f8e0 */
  push32(0x1219eec4u); f_1219f8e0();
  /* 1219eec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219eec7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1219eecd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eed4 je 0x1219eee2 */
  if (C.zf) goto L_1219eee2;
  /* 1219eed6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1219eedc cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219eee0 jne 0x1219eefc */
  if (!C.zf) goto L_1219eefc;
L_1219eee2:;
  /* 1219eee2 mov edx, dword ptr [0x121c1fb0] */
  EDX = (r32((uint32_t)(0x121c1fb0)));
  /* 1219eee8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1219eeeb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219eeee push eax */
  push32((uint32_t)(EAX));
  /* 1219eeef call 0x1219a940 */
  push32(0x1219eef4u); f_1219a940();
  /* 1219eef4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219eef7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219eefa jmp 0x1219ef4b */
  goto L_1219ef4b;
L_1219eefc:;
  /* 1219eefc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219eeff and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1219ef05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219ef07 je 0x1219ef2c */
  if (C.zf) goto L_1219ef2c;
  /* 1219ef09 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1219ef0f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1219ef12 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219ef15 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1219ef1b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1219ef1e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1219ef20 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219ef23 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1219ef2a jmp 0x1219ef4b */
  goto L_1219ef4b;
L_1219ef2c:;
  /* 1219ef2c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1219ef33 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1219ef39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219ef3c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1219ef3f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1219ef45 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1219ef48 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1219ef4b:;
  /* 1219ef4b jmp 0x1219f4d7 */
  goto L_1219f4d7;
L_1219ef50:;
  /* 1219ef50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ef53 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1219ef59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219ef5b jne 0x1219ef66 */
  if (!C.zf) goto L_1219ef66;
  /* 1219ef5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219ef60 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1219ef63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219ef66:;
  /* 1219ef66 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ef6d jne 0x1219ef7b */
  if (!C.zf) goto L_1219ef7b;
  /* 1219ef6f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1219ef79 jmp 0x1219ef87 */
  goto L_1219ef87;
L_1219ef7b:;
  /* 1219ef7b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1219ef81 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1219ef87:;
  /* 1219ef87 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1219ef8d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1219ef93 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1219ef96 push edx */
  push32((uint32_t)(EDX));
  /* 1219ef97 call 0x1219f8e0 */
  push32(0x1219ef9cu); f_1219f8e0();
  /* 1219ef9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ef9f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219efa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219efa5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1219efaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219efac je 0x1219f016 */
  if (C.zf) goto L_1219f016;
  /* 1219efae cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219efb2 jne 0x1219efbd */
  if (!C.zf) goto L_1219efbd;
  /* 1219efb4 mov ecx, dword ptr [0x121c1fb4] */
  ECX = (r32((uint32_t)(0x121c1fb4)));
  /* 1219efba mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1219efbd:;
  /* 1219efbd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1219efc4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219efc7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1219efcd:;
  /* 1219efcd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1219efd3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1219efd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219efdc mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1219efe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219efe4 je 0x1219f006 */
  if (C.zf) goto L_1219f006;
  /* 1219efe6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1219efec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219efee mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1219eff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219eff3 je 0x1219f006 */
  if (C.zf) goto L_1219f006;
  /* 1219eff5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1219effb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219effe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1219f004 jmp 0x1219efcd */
  goto L_1219efcd;
L_1219f006:;
  /* 1219f006 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1219f00c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f00f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1219f011 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1219f014 jmp 0x1219f070 */
  goto L_1219f070;
L_1219f016:;
  /* 1219f016 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f01a jne 0x1219f024 */
  if (!C.zf) goto L_1219f024;
  /* 1219f01c mov eax, dword ptr [0x121c1fb0] */
  EAX = (r32((uint32_t)(0x121c1fb0)));
  /* 1219f021 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1219f024:;
  /* 1219f024 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f027 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1219f02d:;
  /* 1219f02d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1219f033 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1219f039 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f03c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1219f042 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f044 je 0x1219f064 */
  if (C.zf) goto L_1219f064;
  /* 1219f046 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1219f04c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219f04f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f051 je 0x1219f064 */
  if (C.zf) goto L_1219f064;
  /* 1219f053 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1219f059 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f05c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1219f062 jmp 0x1219f02d */
  goto L_1219f02d;
L_1219f064:;
  /* 1219f064 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1219f06a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f06d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1219f070:;
  /* 1219f070 jmp 0x1219f4d7 */
  goto L_1219f4d7;
L_1219f075:;
  /* 1219f075 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1219f078 push edx */
  push32((uint32_t)(EDX));
  /* 1219f079 call 0x1219f8e0 */
  push32(0x1219f07eu); f_1219f8e0();
  /* 1219f07e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f081 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1219f087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f08a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f08d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f08f je 0x1219f0a3 */
  if (C.zf) goto L_1219f0a3;
  /* 1219f091 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1219f097 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1219f09e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1219f0a1 jmp 0x1219f0b1 */
  goto L_1219f0b1;
L_1219f0a3:;
  /* 1219f0a3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1219f0a9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1219f0af mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1219f0b1:;
  /* 1219f0b1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1219f0bb jmp 0x1219f4d7 */
  goto L_1219f4d7;
L_1219f0c0:;
  /* 1219f0c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1219f0c7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1219f0ca add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1219f0cd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1219f0d0:;
  /* 1219f0d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f0d3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1219f0d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1219f0d8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1219f0de mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1219f0e1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f0e8 jge 0x1219f0f6 */
  if ((C.sf==C.of)) goto L_1219f0f6;
  /* 1219f0ea mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1219f0f4 jmp 0x1219f112 */
  goto L_1219f112;
L_1219f0f6:;
  /* 1219f0f6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f0fd jne 0x1219f112 */
  if (!C.zf) goto L_1219f112;
  /* 1219f0ff movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219f103 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f106 jne 0x1219f112 */
  if (!C.zf) goto L_1219f112;
  /* 1219f108 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1219f112:;
  /* 1219f112 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f115 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f118 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1219f11b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f11e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f121 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219f123 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219f126 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1219f12c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1219f132 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1219f135 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f136 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1219f13c push edx */
  push32((uint32_t)(EDX));
  /* 1219f13d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219f141 push eax */
  push32((uint32_t)(EAX));
  /* 1219f142 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f145 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f146 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1219f14c push edx */
  push32((uint32_t)(EDX));
  /* 1219f14d call dword ptr [0x121c23a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c23a0))), 0x1219f153u);
  /* 1219f153 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f159 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f15e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f160 je 0x1219f178 */
  if (C.zf) goto L_1219f178;
  /* 1219f162 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f169 jne 0x1219f178 */
  if (!C.zf) goto L_1219f178;
  /* 1219f16b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f16e push ecx */
  push32((uint32_t)(ECX));
  /* 1219f16f call dword ptr [0x121c23ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c23ac))), 0x1219f175u);
  /* 1219f175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f178:;
  /* 1219f178 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1219f17c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f17f jne 0x1219f19a */
  if (!C.zf) goto L_1219f19a;
  /* 1219f181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f184 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f18b jne 0x1219f19a */
  if (!C.zf) goto L_1219f19a;
  /* 1219f18d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f190 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f191 call dword ptr [0x121c23a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c23a4))), 0x1219f197u);
  /* 1219f197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f19a:;
  /* 1219f19a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f19d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1219f1a0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f1a3 jne 0x1219f1b7 */
  if (!C.zf) goto L_1219f1b7;
  /* 1219f1a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f1a8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1219f1ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219f1ae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f1b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f1b4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1219f1b7:;
  /* 1219f1b7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f1ba push eax */
  push32((uint32_t)(EAX));
  /* 1219f1bb call 0x1219a940 */
  push32(0x1219f1c0u); f_1219a940();
  /* 1219f1c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f1c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1219f1c6 jmp 0x1219f4d7 */
  goto L_1219f4d7;
L_1219f1cb:;
  /* 1219f1cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f1ce or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1219f1d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219f1d4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1219f1de jmp 0x1219f265 */
  goto L_1219f265;
L_1219f1e3:;
  /* 1219f1e3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1219f1ed jmp 0x1219f265 */
  goto L_1219f265;
L_1219f1ef:;
  /* 1219f1ef mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1219f1f9:;
  /* 1219f1f9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1219f203 jmp 0x1219f20f */
  goto L_1219f20f;
L_1219f205:;
  /* 1219f205 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1219f20f:;
  /* 1219f20f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1219f219 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f21c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f222 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f224 je 0x1219f243 */
  if (C.zf) goto L_1219f243;
  /* 1219f226 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1219f22d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1219f233 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f236 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1219f23c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1219f243:;
  /* 1219f243 jmp 0x1219f265 */
  goto L_1219f265;
L_1219f245:;
  /* 1219f245 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1219f24f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f252 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1219f258 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219f25a je 0x1219f265 */
  if (C.zf) goto L_1219f265;
  /* 1219f25c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f25f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1219f262 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219f265:;
  /* 1219f265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f268 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f26d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f26f je 0x1219f28e */
  if (C.zf) goto L_1219f28e;
  /* 1219f271 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1219f274 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f275 call 0x1219f900 */
  push32(0x1219f27au); f_1219f900();
  /* 1219f27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f27d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1219f283 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1219f289 jmp 0x1219f31f */
  goto L_1219f31f;
L_1219f28e:;
  /* 1219f28e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f291 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f294 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f296 je 0x1219f2e0 */
  if (C.zf) goto L_1219f2e0;
  /* 1219f298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f29b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f29e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f2a0 je 0x1219f2c0 */
  if (C.zf) goto L_1219f2c0;
  /* 1219f2a2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1219f2a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f2a6 call 0x1219f8e0 */
  push32(0x1219f2abu); f_1219f8e0();
  /* 1219f2ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f2ae movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1219f2b1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1219f2b2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1219f2b8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1219f2be jmp 0x1219f2de */
  goto L_1219f2de;
L_1219f2c0:;
  /* 1219f2c0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1219f2c3 push edx */
  push32((uint32_t)(EDX));
  /* 1219f2c4 call 0x1219f8e0 */
  push32(0x1219f2c9u); f_1219f8e0();
  /* 1219f2c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f2cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1219f2d1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1219f2d2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1219f2d8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1219f2de:;
  /* 1219f2de jmp 0x1219f31f */
  goto L_1219f31f;
L_1219f2e0:;
  /* 1219f2e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f2e3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f2e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f2e8 je 0x1219f305 */
  if (C.zf) goto L_1219f305;
  /* 1219f2ea lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1219f2ed push ecx */
  push32((uint32_t)(ECX));
  /* 1219f2ee call 0x1219f8e0 */
  push32(0x1219f2f3u); f_1219f8e0();
  /* 1219f2f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f2f6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1219f2f7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1219f2fd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1219f303 jmp 0x1219f31f */
  goto L_1219f31f;
L_1219f305:;
  /* 1219f305 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1219f308 push edx */
  push32((uint32_t)(EDX));
  /* 1219f309 call 0x1219f8e0 */
  push32(0x1219f30eu); f_1219f8e0();
  /* 1219f30e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f311 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1219f313 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1219f319 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1219f31f:;
  /* 1219f31f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f322 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f325 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f327 je 0x1219f367 */
  if (C.zf) goto L_1219f367;
  /* 1219f329 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f330 jg 0x1219f367 */
  if ((!C.zf&&C.sf==C.of)) goto L_1219f367;
  /* 1219f332 jl 0x1219f33d */
  if ((C.sf!=C.of)) goto L_1219f33d;
  /* 1219f334 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f33b jae 0x1219f367 */
  if (!C.cf) goto L_1219f367;
L_1219f33d:;
  /* 1219f33d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1219f343 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219f345 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1219f34b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f34e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219f350 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1219f356 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1219f35c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f35f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1219f362 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219f365 jmp 0x1219f37f */
  goto L_1219f37f;
L_1219f367:;
  /* 1219f367 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1219f36d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1219f373 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1219f379 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1219f37f:;
  /* 1219f37f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f382 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f388 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f38a jne 0x1219f3a7 */
  if (!C.zf) goto L_1219f3a7;
  /* 1219f38c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1219f392 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1219f398 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1219f39b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1219f3a1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1219f3a7:;
  /* 1219f3a7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f3ae jge 0x1219f3bc */
  if ((C.sf==C.of)) goto L_1219f3bc;
  /* 1219f3b0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1219f3ba jmp 0x1219f3c5 */
  goto L_1219f3c5;
L_1219f3bc:;
  /* 1219f3bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f3bf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f3c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219f3c5:;
  /* 1219f3c5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1219f3cb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1219f3d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f3d3 jne 0x1219f3dc */
  if (!C.zf) goto L_1219f3dc;
  /* 1219f3d5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1219f3dc:;
  /* 1219f3dc lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1219f3df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1219f3e2:;
  /* 1219f3e2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1219f3e8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1219f3ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f3f1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1219f3f7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f3f9 jg 0x1219f40f */
  if ((!C.zf&&C.sf==C.of)) goto L_1219f40f;
  /* 1219f3fb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1219f401 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1219f407 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219f409 je 0x1219f490 */
  if (C.zf) goto L_1219f490;
L_1219f40f:;
  /* 1219f40f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1219f415 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1219f416 push edx */
  push32((uint32_t)(EDX));
  /* 1219f417 push eax */
  push32((uint32_t)(EAX));
  /* 1219f418 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1219f41e push edx */
  push32((uint32_t)(EDX));
  /* 1219f41f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1219f425 push eax */
  push32((uint32_t)(EAX));
  /* 1219f426 call 0x1219e7a0 */
  push32(0x1219f42bu); f_1219e7a0();
  /* 1219f42b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f42e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1219f434 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1219f43a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1219f43b push edx */
  push32((uint32_t)(EDX));
  /* 1219f43c push eax */
  push32((uint32_t)(EAX));
  /* 1219f43d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1219f443 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f444 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1219f44a push edx */
  push32((uint32_t)(EDX));
  /* 1219f44b call 0x1219e730 */
  push32(0x1219f450u); f_1219e730();
  /* 1219f450 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1219f456 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1219f45c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f463 jle 0x1219f477 */
  if ((C.zf||C.sf!=C.of)) goto L_1219f477;
  /* 1219f465 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1219f46b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f471 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1219f477:;
  /* 1219f477 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f47a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1219f480 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1219f482 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f485 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f488 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219f48b jmp 0x1219f3e2 */
  goto L_1219f3e2;
L_1219f490:;
  /* 1219f490 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1219f493 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f496 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1219f499 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f49c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f49f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1219f4a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f4a5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f4ac je 0x1219f4d7 */
  if (C.zf) goto L_1219f4d7;
  /* 1219f4ae mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f4b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219f4b4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f4b7 jne 0x1219f4bf */
  if (!C.zf) goto L_1219f4bf;
  /* 1219f4b9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f4bd jne 0x1219f4d7 */
  if (!C.zf) goto L_1219f4d7;
L_1219f4bf:;
  /* 1219f4bf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f4c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f4c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219f4c8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f4cb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1219f4ce mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219f4d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f4d4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1219f4d7:;
  /* 1219f4d7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f4de jne 0x1219f6b2 */
  if (!C.zf) goto L_1219f6b2;
  /* 1219f4e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f4e7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f4ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f4ec je 0x1219f53d */
  if (C.zf) goto L_1219f53d;
  /* 1219f4ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f4f1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1219f4f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219f4f9 je 0x1219f50b */
  if (C.zf) goto L_1219f50b;
  /* 1219f4fb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1219f502 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1219f509 jmp 0x1219f53d */
  goto L_1219f53d;
L_1219f50b:;
  /* 1219f50b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f50e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f513 je 0x1219f525 */
  if (C.zf) goto L_1219f525;
  /* 1219f515 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1219f51c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1219f523 jmp 0x1219f53d */
  goto L_1219f53d;
L_1219f525:;
  /* 1219f525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f528 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1219f52b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f52d je 0x1219f53d */
  if (C.zf) goto L_1219f53d;
  /* 1219f52f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1219f536 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1219f53d:;
  /* 1219f53d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1219f543 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f546 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f549 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1219f54f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f552 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1219f555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f557 jne 0x1219f575 */
  if (!C.zf) goto L_1219f575;
  /* 1219f559 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1219f55f push eax */
  push32((uint32_t)(EAX));
  /* 1219f560 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f563 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f564 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1219f56a push edx */
  push32((uint32_t)(EDX));
  /* 1219f56b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1219f56d call 0x1219f850 */
  push32(0x1219f572u); f_1219f850();
  /* 1219f572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f575:;
  /* 1219f575 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1219f57b push eax */
  push32((uint32_t)(EAX));
  /* 1219f57c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f57f push ecx */
  push32((uint32_t)(ECX));
  /* 1219f580 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219f583 push edx */
  push32((uint32_t)(EDX));
  /* 1219f584 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1219f58a push eax */
  push32((uint32_t)(EAX));
  /* 1219f58b call 0x1219f890 */
  push32(0x1219f590u); f_1219f890();
  /* 1219f590 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f593 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f596 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1219f599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1219f59b je 0x1219f5c3 */
  if (C.zf) goto L_1219f5c3;
  /* 1219f59d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f5a0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f5a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f5a5 jne 0x1219f5c3 */
  if (!C.zf) goto L_1219f5c3;
  /* 1219f5a7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1219f5ad push eax */
  push32((uint32_t)(EAX));
  /* 1219f5ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f5b1 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f5b2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1219f5b8 push edx */
  push32((uint32_t)(EDX));
  /* 1219f5b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1219f5bb call 0x1219f850 */
  push32(0x1219f5c0u); f_1219f850();
  /* 1219f5c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f5c3:;
  /* 1219f5c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f5c7 je 0x1219f671 */
  if (C.zf) goto L_1219f671;
  /* 1219f5cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f5d1 jle 0x1219f671 */
  if ((C.zf||C.sf!=C.of)) goto L_1219f671;
  /* 1219f5d7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f5da mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1219f5e0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219f5e3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1219f5e9:;
  /* 1219f5e9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1219f5ef mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1219f5f5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f5f8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1219f5fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f600 je 0x1219f66f */
  if (C.zf) goto L_1219f66f;
  /* 1219f602 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1219f608 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1219f60b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1219f612 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1219f619 push eax */
  push32((uint32_t)(EAX));
  /* 1219f61a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1219f620 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f621 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1219f627 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f62a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1219f630 call 0x121a0a00 */
  push32(0x1219f635u); f_121a0a00();
  /* 1219f635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f638 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1219f63e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f645 jg 0x1219f649 */
  if ((!C.zf&&C.sf==C.of)) goto L_1219f649;
  /* 1219f647 jmp 0x1219f66f */
  goto L_1219f66f;
L_1219f649:;
  /* 1219f649 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1219f64f push eax */
  push32((uint32_t)(EAX));
  /* 1219f650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f653 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f654 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1219f65a push edx */
  push32((uint32_t)(EDX));
  /* 1219f65b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1219f661 push eax */
  push32((uint32_t)(EAX));
  /* 1219f662 call 0x1219f890 */
  push32(0x1219f667u); f_1219f890();
  /* 1219f667 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f66a jmp 0x1219f5e9 */
  goto L_1219f5e9;
L_1219f66f:;
  /* 1219f66f jmp 0x1219f68c */
  goto L_1219f68c;
L_1219f671:;
  /* 1219f671 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1219f677 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f67b push edx */
  push32((uint32_t)(EDX));
  /* 1219f67c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219f67f push eax */
  push32((uint32_t)(EAX));
  /* 1219f680 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219f683 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f684 call 0x1219f890 */
  push32(0x1219f689u); f_1219f890();
  /* 1219f689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f68c:;
  /* 1219f68c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f68f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1219f692 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1219f694 je 0x1219f6b2 */
  if (C.zf) goto L_1219f6b2;
  /* 1219f696 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1219f69c push eax */
  push32((uint32_t)(EAX));
  /* 1219f69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f6a1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1219f6a7 push edx */
  push32((uint32_t)(EDX));
  /* 1219f6a8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1219f6aa call 0x1219f850 */
  push32(0x1219f6afu); f_1219f850();
  /* 1219f6af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1219f6b2:;
  /* 1219f6b2 jmp 0x1219eac4 */
  goto L_1219eac4;
L_1219f6b7:;
  /* 1219f6b7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1219f6bd pop edi */
  EDI = (pop32());
  /* 1219f6be pop esi */
  ESI = (pop32());
  /* 1219f6bf pop ebx */
  EBX = (pop32());
  /* 1219f6c0 mov esp, ebp */
  ESP = (EBP);
  /* 1219f6c2 pop ebp */
  EBP = (pop32());
  /* 1219f6c3 ret  */
  ESPCHK(0x1219eaa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x1219f7d0 (119 bytes, 44 insns) */
void f_1219f7d0(void) {
  FTRACE(0x1219f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1219f7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f7d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f7d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1219f7da sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f7dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f7e0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1219f7e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f7e6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f7ea jl 0x1219f812 */
  if ((C.sf!=C.of)) goto L_1219f812;
  /* 1219f7ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f7ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1219f7f1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1219f7f4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1219f7f6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1219f7fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1219f800 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1219f803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f806 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219f808 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f80b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f80e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1219f810 jmp 0x1219f825 */
  goto L_1219f825;
L_1219f812:;
  /* 1219f812 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f815 push edx */
  push32((uint32_t)(EDX));
  /* 1219f816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f819 push eax */
  push32((uint32_t)(EAX));
  /* 1219f81a call 0x1219e820 */
  push32(0x1219f81fu); f_1219e820();
  /* 1219f81f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f822 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1219f825:;
  /* 1219f825 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f829 jne 0x1219f836 */
  if (!C.zf) goto L_1219f836;
  /* 1219f82b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f82e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1219f834 jmp 0x1219f843 */
  goto L_1219f843;
L_1219f836:;
  /* 1219f836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f839 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1219f83b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f83e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f841 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1219f843:;
  /* 1219f843 mov esp, ebp */
  ESP = (EBP);
  /* 1219f845 pop ebp */
  EBP = (pop32());
  /* 1219f846 ret  */
  ESPCHK(0x1219f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x1219f850 (53 bytes, 23 insns) */
void f_1219f850(void) {
  FTRACE(0x1219f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f850 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f851 mov ebp, esp */
  EBP = (ESP);
L_1219f853:;
  /* 1219f853 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f856 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f859 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f85c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1219f85f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f861 jle 0x1219f883 */
  if ((C.zf||C.sf!=C.of)) goto L_1219f883;
  /* 1219f863 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219f866 push edx */
  push32((uint32_t)(EDX));
  /* 1219f867 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f86a push eax */
  push32((uint32_t)(EAX));
  /* 1219f86b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f86e push ecx */
  push32((uint32_t)(ECX));
  /* 1219f86f call 0x1219f7d0 */
  push32(0x1219f874u); f_1219f7d0();
  /* 1219f874 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f877 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219f87a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f87d jne 0x1219f881 */
  if (!C.zf) goto L_1219f881;
  /* 1219f87f jmp 0x1219f883 */
  goto L_1219f883;
L_1219f881:;
  /* 1219f881 jmp 0x1219f853 */
  goto L_1219f853;
L_1219f883:;
  /* 1219f883 pop ebp */
  EBP = (pop32());
  /* 1219f884 ret  */
  ESPCHK(0x1219f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x1219f890 (74 bytes, 31 insns) */
void f_1219f890(void) {
  FTRACE(0x1219f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f890 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f891 mov ebp, esp */
  EBP = (ESP);
  /* 1219f893 push ecx */
  push32((uint32_t)(ECX));
L_1219f894:;
  /* 1219f894 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f897 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219f89a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f89d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1219f8a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219f8a2 jle 0x1219f8d6 */
  if ((C.zf||C.sf!=C.of)) goto L_1219f8d6;
  /* 1219f8a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219f8a7 push edx */
  push32((uint32_t)(EDX));
  /* 1219f8a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219f8ab push eax */
  push32((uint32_t)(EAX));
  /* 1219f8ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f8af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1219f8b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1219f8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f8b8 push eax */
  push32((uint32_t)(EAX));
  /* 1219f8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f8bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f8bf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1219f8c2 call 0x1219f7d0 */
  push32(0x1219f8c7u); f_1219f7d0();
  /* 1219f8c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f8ca mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219f8cd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f8d0 jne 0x1219f8d4 */
  if (!C.zf) goto L_1219f8d4;
  /* 1219f8d2 jmp 0x1219f8d6 */
  goto L_1219f8d6;
L_1219f8d4:;
  /* 1219f8d4 jmp 0x1219f894 */
  goto L_1219f894;
L_1219f8d6:;
  /* 1219f8d6 mov esp, ebp */
  ESP = (EBP);
  /* 1219f8d8 pop ebp */
  EBP = (pop32());
  /* 1219f8d9 ret  */
  ESPCHK(0x1219f890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8e0 @ 0x1219f8e0 (26 bytes, 12 insns) */
void f_1219f8e0(void) {
  FTRACE(0x1219f8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f8e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219f8e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f8e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f8e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f8ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219f8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f8f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f8f5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1219f8f8 pop ebp */
  EBP = (pop32());
  /* 1219f8f9 ret  */
  ESPCHK(0x1219f8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x1219f900 (31 bytes, 14 insns) */
void f_1219f900(void) {
  FTRACE(0x1219f900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f900 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f901 mov ebp, esp */
  EBP = (ESP);
  /* 1219f903 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f906 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f908 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f90b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f90e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219f910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f913 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f915 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219f918 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1219f91a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1219f91d pop ebp */
  EBP = (pop32());
  /* 1219f91e ret  */
  ESPCHK(0x1219f900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f920 @ 0x1219f920 (27 bytes, 12 insns) */
void f_1219f920(void) {
  FTRACE(0x1219f920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f920 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f921 mov ebp, esp */
  EBP = (ESP);
  /* 1219f923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f926 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f928 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f92b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f92e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1219f930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f933 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1219f935 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1219f939 pop ebp */
  EBP = (pop32());
  /* 1219f93a ret  */
  ESPCHK(0x1219f920u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1219f940 (145 bytes, 42 insns) */
void f_1219f940(void) {
  FTRACE(0x1219f940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f940 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f941 mov ebp, esp */
  EBP = (ESP);
  /* 1219f943 push ecx */
  push32((uint32_t)(ECX));
  /* 1219f944 call 0x1219f9f0 */
  push32(0x1219f949u); f_1219f9f0();
  /* 1219f949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f94c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1219f94e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219f955 jmp 0x1219f960 */
  goto L_1219f960;
L_1219f957:;
  /* 1219f957 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f95a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f95d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1219f960:;
  /* 1219f960 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f964 jae 0x1219f98a */
  if (!C.cf) goto L_1219f98a;
  /* 1219f966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f969 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219f96c cmp ecx, dword ptr [eax*8 + 0x121c1fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x121c1fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f973 jne 0x1219f988 */
  if (!C.zf) goto L_1219f988;
  /* 1219f975 call 0x1219f9e0 */
  push32(0x1219f97au); f_1219f9e0();
  /* 1219f97a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1219f97d mov ecx, dword ptr [edx*8 + 0x121c1fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x121c1fbc)));
  /* 1219f984 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1219f986 jmp 0x1219f9cd */
  goto L_1219f9cd;
L_1219f988:;
  /* 1219f988 jmp 0x1219f957 */
  goto L_1219f957;
L_1219f98a:;
  /* 1219f98a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f98e jb 0x1219f9a3 */
  if (C.cf) goto L_1219f9a3;
  /* 1219f990 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f994 ja 0x1219f9a3 */
  if ((!C.cf&&!C.zf)) goto L_1219f9a3;
  /* 1219f996 call 0x1219f9e0 */
  push32(0x1219f99bu); f_1219f9e0();
  /* 1219f99b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1219f9a1 jmp 0x1219f9cd */
  goto L_1219f9cd;
L_1219f9a3:;
  /* 1219f9a3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f9aa jb 0x1219f9c2 */
  if (C.cf) goto L_1219f9c2;
  /* 1219f9ac cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219f9b3 ja 0x1219f9c2 */
  if ((!C.cf&&!C.zf)) goto L_1219f9c2;
  /* 1219f9b5 call 0x1219f9e0 */
  push32(0x1219f9bau); f_1219f9e0();
  /* 1219f9ba mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1219f9c0 jmp 0x1219f9cd */
  goto L_1219f9cd;
L_1219f9c2:;
  /* 1219f9c2 call 0x1219f9e0 */
  push32(0x1219f9c7u); f_1219f9e0();
  /* 1219f9c7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1219f9cd:;
  /* 1219f9cd mov esp, ebp */
  ESP = (EBP);
  /* 1219f9cf pop ebp */
  EBP = (pop32());
  /* 1219f9d0 ret  */
  ESPCHK(0x1219f940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x1219f9e0 (13 bytes, 6 insns) */
void f_1219f9e0(void) {
  FTRACE(0x1219f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1219f9e3 call 0x12197550 */
  push32(0x1219f9e8u); f_12197550();
  /* 1219f9e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f9eb pop ebp */
  EBP = (pop32());
  /* 1219f9ec ret  */
  ESPCHK(0x1219f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x1219f9f0 (13 bytes, 6 insns) */
void f_1219f9f0(void) {
  FTRACE(0x1219f9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219f9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1219f9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1219f9f3 call 0x12197550 */
  push32(0x1219f9f8u); f_12197550();
  /* 1219f9f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219f9fb pop ebp */
  EBP = (pop32());
  /* 1219f9fc ret  */
  ESPCHK(0x1219f9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa00 @ 0x1219fa00 (664 bytes, 268 insns) [15 switch table(s)] */
void f_1219fa00(void) {
  FTRACE(0x1219fa00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219fa00 push ebp */
  push32((uint32_t)(EBP));
  /* 1219fa01 mov ebp, esp */
  EBP = (ESP);
  /* 1219fa03 push edi */
  push32((uint32_t)(EDI));
  /* 1219fa04 push esi */
  push32((uint32_t)(ESI));
  /* 1219fa05 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1219fa08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219fa0b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fa0e mov eax, ecx */
  EAX = (ECX);
  /* 1219fa10 mov edx, ecx */
  EDX = (ECX);
  /* 1219fa12 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fa14 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fa16 jbe 0x1219fa20 */
  if ((C.cf||C.zf)) goto L_1219fa20;
  /* 1219fa18 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fa1a jb 0x1219fb98 */
  if (C.cf) goto L_1219fb98;
L_1219fa20:;
  /* 1219fa20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219fa26 jne 0x1219fa3c */
  if (!C.zf) goto L_1219fa3c;
  /* 1219fa28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fa2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1219fa2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fa31 jb 0x1219fa5c */
  if (C.cf) goto L_1219fa5c;
  /* 1219fa33 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fa35 jmp dword ptr [edx*4 + 0x1219fb48] */
  switch (EDX) {
    case 0: goto L_1219fb58;
    case 1: goto L_1219fb60;
    case 2: goto L_1219fb6c;
    case 3: goto L_1219fb80;
    default: x86_unimpl("switch@0x1219fa35 out of table"); return;
  }
L_1219fa3c:;
  /* 1219fa3c mov eax, edi */
  EAX = (EDI);
  /* 1219fa3e mov edx, 3 */
  EDX = (0x3u);
  /* 1219fa43 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fa46 jb 0x1219fa54 */
  if (C.cf) goto L_1219fa54;
  /* 1219fa48 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1219fa4b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fa4d jmp dword ptr [eax*4 + 0x1219fa60] */
  switch (EAX) {
    case 1: goto L_1219fa70;
    case 2: goto L_1219fa9c;
    case 3: goto L_1219fac0;
    default: x86_unimpl("switch@0x1219fa4d out of table"); return;
  }
L_1219fa54:;
  /* 1219fa54 jmp dword ptr [ecx*4 + 0x1219fb58] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1219fb58)))); return;
  /* 1219fa5b nop  */
  /* nop */
L_1219fa5c:;
  /* 1219fa5c jmp dword ptr [ecx*4 + 0x1219fadc] */
  switch (ECX) {
    case 0: goto L_1219fb3f;
    case 1: goto L_1219fb2c;
    case 2: goto L_1219fb24;
    case 3: goto L_1219fb1c;
    case 4: goto L_1219fb14;
    case 5: goto L_1219fb0c;
    case 6: goto L_1219fb04;
    case 7: goto L_1219fafc;
    default: x86_unimpl("switch@0x1219fa5c out of table"); return;
  }
  /* 1219fa63 nop  */
  /* nop */
L_1219fa70:;
  /* 1219fa70 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fa72 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219fa74 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219fa76 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219fa79 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219fa7c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fa7f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fa82 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fa85 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fa88 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fa8b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fa8e jb 0x1219fa5c */
  if (C.cf) goto L_1219fa5c;
  /* 1219fa90 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fa92 jmp dword ptr [edx*4 + 0x1219fb48] */
  switch (EDX) {
    case 0: goto L_1219fb58;
    case 1: goto L_1219fb60;
    case 2: goto L_1219fb6c;
    case 3: goto L_1219fb80;
    default: x86_unimpl("switch@0x1219fa92 out of table"); return;
  }
  /* 1219fa99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fa9c:;
  /* 1219fa9c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fa9e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219faa0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219faa2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219faa5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219faa8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219faab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219faae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fab1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fab4 jb 0x1219fa5c */
  if (C.cf) goto L_1219fa5c;
  /* 1219fab6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fab8 jmp dword ptr [edx*4 + 0x1219fb48] */
  switch (EDX) {
    case 0: goto L_1219fb58;
    case 1: goto L_1219fb60;
    case 2: goto L_1219fb6c;
    case 3: goto L_1219fb80;
    default: x86_unimpl("switch@0x1219fab8 out of table"); return;
  }
  /* 1219fabf nop  */
  /* nop */
L_1219fac0:;
  /* 1219fac0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fac2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219fac4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219fac6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1219fac7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219faca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1219facb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219face jb 0x1219fa5c */
  if (C.cf) goto L_1219fa5c;
  /* 1219fad0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fad2 jmp dword ptr [edx*4 + 0x1219fb48] */
  switch (EDX) {
    case 0: goto L_1219fb58;
    case 1: goto L_1219fb60;
    case 2: goto L_1219fb6c;
    case 3: goto L_1219fb80;
    default: x86_unimpl("switch@0x1219fad2 out of table"); return;
  }
  /* 1219fad9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fafc:;
  /* 1219fafc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1219fb00 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1219fb04:;
  /* 1219fb04 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1219fb08 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1219fb0c:;
  /* 1219fb0c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1219fb10 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1219fb14:;
  /* 1219fb14 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1219fb18 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1219fb1c:;
  /* 1219fb1c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1219fb20 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1219fb24:;
  /* 1219fb24 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1219fb28 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1219fb2c:;
  /* 1219fb2c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1219fb30 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1219fb34 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1219fb3b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fb3d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1219fb3f:;
  /* 1219fb3f jmp dword ptr [edx*4 + 0x1219fb48] */
  switch (EDX) {
    case 0: goto L_1219fb58;
    case 1: goto L_1219fb60;
    case 2: goto L_1219fb6c;
    case 3: goto L_1219fb80;
    default: x86_unimpl("switch@0x1219fb3f out of table"); return;
  }
  /* 1219fb46 mov edi, edi */
  EDI = (EDI);
L_1219fb58:;
  /* 1219fb58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fb5b pop esi */
  ESI = (pop32());
  /* 1219fb5c pop edi */
  EDI = (pop32());
  /* 1219fb5d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fb5e ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fb5f nop  */
  /* nop */
L_1219fb60:;
  /* 1219fb60 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219fb62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219fb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fb67 pop esi */
  ESI = (pop32());
  /* 1219fb68 pop edi */
  EDI = (pop32());
  /* 1219fb69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fb6a ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fb6b nop  */
  /* nop */
L_1219fb6c:;
  /* 1219fb6c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219fb6e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219fb70 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219fb73 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219fb76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fb79 pop esi */
  ESI = (pop32());
  /* 1219fb7a pop edi */
  EDI = (pop32());
  /* 1219fb7b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fb7c ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fb7d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fb80:;
  /* 1219fb80 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1219fb82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1219fb84 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219fb87 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219fb8a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fb8d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fb90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fb93 pop esi */
  ESI = (pop32());
  /* 1219fb94 pop edi */
  EDI = (pop32());
  /* 1219fb95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fb96 ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fb97 nop  */
  /* nop */
L_1219fb98:;
  /* 1219fb98 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1219fb9c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1219fba0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1219fba6 jne 0x1219fbcc */
  if (!C.zf) goto L_1219fbcc;
  /* 1219fba8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fbab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1219fbae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fbb1 jb 0x1219fbc0 */
  if (C.cf) goto L_1219fbc0;
  /* 1219fbb3 std  */
  C.df=1;
  /* 1219fbb4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fbb6 cld  */
  C.df=0;
  /* 1219fbb7 jmp dword ptr [edx*4 + 0x1219fce0] */
  switch (EDX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fbb7 out of table"); return;
  }
  /* 1219fbbe mov edi, edi */
  EDI = (EDI);
L_1219fbc0:;
  /* 1219fbc0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219fbc2 jmp dword ptr [ecx*4 + 0x1219fc90] */
  switch (ECX) {
    case 0: goto L_1219fcd7;
    default: x86_unimpl("switch@0x1219fbc2 out of table"); return;
  }
  /* 1219fbc9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fbcc:;
  /* 1219fbcc mov eax, edi */
  EAX = (EDI);
  /* 1219fbce mov edx, 3 */
  EDX = (0x3u);
  /* 1219fbd3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fbd6 jb 0x1219fbe4 */
  if (C.cf) goto L_1219fbe4;
  /* 1219fbd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1219fbdb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fbdd jmp dword ptr [eax*4 + 0x1219fbe8] */
  switch (EAX) {
    case 1: goto L_1219fbf8;
    case 2: goto L_1219fc18;
    case 3: goto L_1219fc40;
    default: x86_unimpl("switch@0x1219fbdd out of table"); return;
  }
L_1219fbe4:;
  /* 1219fbe4 jmp dword ptr [ecx*4 + 0x1219fce0] */
  switch (ECX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fbe4 out of table"); return;
  }
  /* 1219fbeb nop  */
  /* nop */
L_1219fbf8:;
  /* 1219fbf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fbfb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fbfd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fc00 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1219fc01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fc04 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1219fc05 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fc08 jb 0x1219fbc0 */
  if (C.cf) goto L_1219fbc0;
  /* 1219fc0a std  */
  C.df=1;
  /* 1219fc0b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fc0d cld  */
  C.df=0;
  /* 1219fc0e jmp dword ptr [edx*4 + 0x1219fce0] */
  switch (EDX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fc0e out of table"); return;
  }
  /* 1219fc15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fc18:;
  /* 1219fc18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fc1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fc1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fc20 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fc23 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fc26 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fc29 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fc2c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fc2f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fc32 jb 0x1219fbc0 */
  if (C.cf) goto L_1219fbc0;
  /* 1219fc34 std  */
  C.df=1;
  /* 1219fc35 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fc37 cld  */
  C.df=0;
  /* 1219fc38 jmp dword ptr [edx*4 + 0x1219fce0] */
  switch (EDX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fc38 out of table"); return;
  }
  /* 1219fc3f nop  */
  /* nop */
L_1219fc40:;
  /* 1219fc40 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fc43 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1219fc45 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fc48 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fc4b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fc4e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219fc51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1219fc54 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219fc57 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fc5a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fc5d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fc60 jb 0x1219fbc0 */
  if (C.cf) goto L_1219fbc0;
  /* 1219fc66 std  */
  C.df=1;
  /* 1219fc67 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1219fc69 cld  */
  C.df=0;
  /* 1219fc6a jmp dword ptr [edx*4 + 0x1219fce0] */
  switch (EDX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fc6a out of table"); return;
  }
  /* 1219fc71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1219fc74 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1219fc75 cld  */
  C.df=0;
  /* 1219fc76 sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc78 pushfd  */
  x86_unimpl("pushfd @ 0x1219fc78");
  /* 1219fc79 cld  */
  C.df=0;
  /* 1219fc7a sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc7c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 1219fc7d cld  */
  C.df=0;
  /* 1219fc7e sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc80 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1219fc81 cld  */
  C.df=0;
  /* 1219fc82 sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc84 mov ah, 0xfc */
  AH = (0xfcu);
  /* 1219fc86 sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc88 mov esp, 0xc41219fc */
  ESP = (0xc41219fcu);
  /* 1219fc8d cld  */
  C.df=0;
  /* 1219fc8e sbb dword ptr [edx], edx */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(EDX),_r=_a-_b-C.cf; w32((uint32_t)(EDX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1219fc94 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1219fc98 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1219fc9c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1219fca0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1219fca4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1219fca8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1219fcac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1219fcb0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1219fcb4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1219fcb8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1219fcbc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1219fcc0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1219fcc4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1219fcc8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1219fccc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1219fcd3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fcd5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1219fcd7:;
  /* 1219fcd7 jmp dword ptr [edx*4 + 0x1219fce0] */
  switch (EDX) {
    case 0: goto L_1219fcf0;
    case 1: goto L_1219fcf8;
    case 2: goto L_1219fd08;
    case 3: goto L_1219fd1c;
    default: x86_unimpl("switch@0x1219fcd7 out of table"); return;
  }
  /* 1219fcde mov edi, edi */
  EDI = (EDI);
L_1219fcf0:;
  /* 1219fcf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fcf3 pop esi */
  ESI = (pop32());
  /* 1219fcf4 pop edi */
  EDI = (pop32());
  /* 1219fcf5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fcf6 ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fcf7 nop  */
  /* nop */
L_1219fcf8:;
  /* 1219fcf8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fcfb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fcfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fd01 pop esi */
  ESI = (pop32());
  /* 1219fd02 pop edi */
  EDI = (pop32());
  /* 1219fd03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fd04 ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fd05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1219fd08:;
  /* 1219fd08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fd0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fd0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fd11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fd14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fd17 pop esi */
  ESI = (pop32());
  /* 1219fd18 pop edi */
  EDI = (pop32());
  /* 1219fd19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fd1a ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
  /* 1219fd1b nop  */
  /* nop */
L_1219fd1c:;
  /* 1219fd1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1219fd1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1219fd22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1219fd25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1219fd28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1219fd2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1219fd2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fd31 pop esi */
  ESI = (pop32());
  /* 1219fd32 pop edi */
  EDI = (pop32());
  /* 1219fd33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1219fd34 ret  */
  ESPCHK(0x1219fa00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd40 @ 0x1219fd40 (421 bytes, 148 insns) */
void f_1219fd40(void) {
  FTRACE(0x1219fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1219fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1219fd43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1219fd45 push 0x121bf090 */
  push32((uint32_t)(0x121bf090u));
  /* 1219fd4a push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 1219fd4f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1219fd55 push eax */
  push32((uint32_t)(EAX));
  /* 1219fd56 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1219fd5d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fd60 push ebx */
  push32((uint32_t)(EBX));
  /* 1219fd61 push esi */
  push32((uint32_t)(ESI));
  /* 1219fd62 push edi */
  push32((uint32_t)(EDI));
  /* 1219fd63 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1219fd66 cmp dword ptr [0x121c38f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c38f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fd6d jne 0x1219fdbe */
  if (!C.zf) goto L_1219fdbe;
  /* 1219fd6f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1219fd72 push eax */
  push32((uint32_t)(EAX));
  /* 1219fd73 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219fd75 push 0x121bf08c */
  push32((uint32_t)(0x121bf08cu));
  /* 1219fd7a push 1 */
  push32((uint32_t)(0x1u));
  /* 1219fd7c call dword ptr [0x121c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d8))), 0x1219fd82u);
  /* 1219fd82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219fd84 je 0x1219fd92 */
  if (C.zf) goto L_1219fd92;
  /* 1219fd86 mov dword ptr [0x121c38f4], 1 */
  w32((uint32_t)(0x121c38f4), (0x1u));
  /* 1219fd90 jmp 0x1219fdbe */
  goto L_1219fdbe;
L_1219fd92:;
  /* 1219fd92 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1219fd95 push ecx */
  push32((uint32_t)(ECX));
  /* 1219fd96 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219fd98 push 0x121bf088 */
  push32((uint32_t)(0x121bf088u));
  /* 1219fd9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1219fd9f push 0 */
  push32((uint32_t)(0x0u));
  /* 1219fda1 call dword ptr [0x121c62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e8))), 0x1219fda7u);
  /* 1219fda7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219fda9 je 0x1219fdb7 */
  if (C.zf) goto L_1219fdb7;
  /* 1219fdab mov dword ptr [0x121c38f4], 2 */
  w32((uint32_t)(0x121c38f4), (0x2u));
  /* 1219fdb5 jmp 0x1219fdbe */
  goto L_1219fdbe;
L_1219fdb7:;
  /* 1219fdb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219fdb9 jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fdbe:;
  /* 1219fdbe cmp dword ptr [0x121c38f4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c38f4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fdc5 jne 0x1219fdf5 */
  if (!C.zf) goto L_1219fdf5;
  /* 1219fdc7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fdcb jne 0x1219fdd6 */
  if (!C.zf) goto L_1219fdd6;
  /* 1219fdcd mov edx, dword ptr [0x121c3900] */
  EDX = (r32((uint32_t)(0x121c3900)));
  /* 1219fdd3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1219fdd6:;
  /* 1219fdd6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219fdd9 push eax */
  push32((uint32_t)(EAX));
  /* 1219fdda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219fddd push ecx */
  push32((uint32_t)(ECX));
  /* 1219fdde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219fde1 push edx */
  push32((uint32_t)(EDX));
  /* 1219fde2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fde5 push eax */
  push32((uint32_t)(EAX));
  /* 1219fde6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1219fde9 push ecx */
  push32((uint32_t)(ECX));
  /* 1219fdea call dword ptr [0x121c62e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e8))), 0x1219fdf0u);
  /* 1219fdf0 jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fdf5:;
  /* 1219fdf5 cmp dword ptr [0x121c38f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c38f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fdfc jne 0x1219fee6 */
  if (!C.zf) goto L_1219fee6;
  /* 1219fe02 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fe06 jne 0x1219fe11 */
  if (!C.zf) goto L_1219fe11;
  /* 1219fe08 mov edx, dword ptr [0x121c3910] */
  EDX = (r32((uint32_t)(0x121c3910)));
  /* 1219fe0e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1219fe11:;
  /* 1219fe11 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219fe13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219fe15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219fe18 push eax */
  push32((uint32_t)(EAX));
  /* 1219fe19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219fe1c push ecx */
  push32((uint32_t)(ECX));
  /* 1219fe1d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1219fe20 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219fe22 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fe24 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1219fe27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fe2a push edx */
  push32((uint32_t)(EDX));
  /* 1219fe2b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219fe2e push eax */
  push32((uint32_t)(EAX));
  /* 1219fe2f call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x1219fe35u);
  /* 1219fe35 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1219fe38 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fe3c jne 0x1219fe45 */
  if (!C.zf) goto L_1219fe45;
  /* 1219fe3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219fe40 jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fe45:;
  /* 1219fe45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1219fe4c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219fe4f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1219fe51 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fe54 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1219fe56 call 0x1219acb0 */
  push32(0x1219fe5bu); f_1219acb0();
  /* 1219fe5b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1219fe5e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1219fe61 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1219fe64 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1219fe67 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219fe6a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1219fe6c push edx */
  push32((uint32_t)(EDX));
  /* 1219fe6d push 0 */
  push32((uint32_t)(0x0u));
  /* 1219fe6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219fe72 push eax */
  push32((uint32_t)(EAX));
  /* 1219fe73 call 0x1219b880 */
  push32(0x1219fe78u); f_1219b880();
  /* 1219fe78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219fe7b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1219fe82 jmp 0x1219fe9b */
  goto L_1219fe9b;
  /* 1219fe84 mov eax, 1 */
  EAX = (0x1u);
  /* 1219fe89 ret  */
  ESPCHK(0x1219fd40u, _esp0);
  ESP += 4; return;
  /* 1219fe8a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1219fe8d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1219fe94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1219fe9b:;
  /* 1219fe9b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fe9f jne 0x1219fea5 */
  if (!C.zf) goto L_1219fea5;
  /* 1219fea1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219fea3 jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fea5:;
  /* 1219fea5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1219fea8 push ecx */
  push32((uint32_t)(ECX));
  /* 1219fea9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219feac push edx */
  push32((uint32_t)(EDX));
  /* 1219fead mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219feb0 push eax */
  push32((uint32_t)(EAX));
  /* 1219feb1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219feb4 push ecx */
  push32((uint32_t)(ECX));
  /* 1219feb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219feb7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219feba push edx */
  push32((uint32_t)(EDX));
  /* 1219febb call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x1219fec1u);
  /* 1219fec1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1219fec4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219fec8 jne 0x1219fece */
  if (!C.zf) goto L_1219fece;
  /* 1219feca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219fecc jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fece:;
  /* 1219fece mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219fed1 push eax */
  push32((uint32_t)(EAX));
  /* 1219fed2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1219fed5 push ecx */
  push32((uint32_t)(ECX));
  /* 1219fed6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1219fed9 push edx */
  push32((uint32_t)(EDX));
  /* 1219feda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219fedd push eax */
  push32((uint32_t)(EAX));
  /* 1219fede call dword ptr [0x121c62d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d8))), 0x1219fee4u);
  /* 1219fee4 jmp 0x1219fee8 */
  goto L_1219fee8;
L_1219fee6:;
  /* 1219fee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1219fee8:;
  /* 1219fee8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1219feeb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1219feee mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1219fef5 pop edi */
  EDI = (pop32());
  /* 1219fef6 pop esi */
  ESI = (pop32());
  /* 1219fef7 pop ebx */
  EBX = (pop32());
  /* 1219fef8 mov esp, ebp */
  ESP = (EBP);
  /* 1219fefa pop ebp */
  EBP = (pop32());
  /* 1219fefb ret  */
  ESPCHK(0x1219fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff00 @ 0x1219ff00 (727 bytes, 263 insns) */
void f_1219ff00(void) {
  FTRACE(0x1219ff00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1219ff00 push ebp */
  push32((uint32_t)(EBP));
  /* 1219ff01 mov ebp, esp */
  EBP = (ESP);
  /* 1219ff03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1219ff05 push 0x121bf0a0 */
  push32((uint32_t)(0x121bf0a0u));
  /* 1219ff0a push 0x121a0c18 */
  push32((uint32_t)(0x121a0c18u));
  /* 1219ff0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1219ff15 push eax */
  push32((uint32_t)(EAX));
  /* 1219ff16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1219ff1d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ff20 push ebx */
  push32((uint32_t)(EBX));
  /* 1219ff21 push esi */
  push32((uint32_t)(ESI));
  /* 1219ff22 push edi */
  push32((uint32_t)(EDI));
  /* 1219ff23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1219ff26 cmp dword ptr [0x121c3918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ff2d jne 0x1219ff86 */
  if (!C.zf) goto L_1219ff86;
  /* 1219ff2f push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff33 push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ff35 push 0x121bf08c */
  push32((uint32_t)(0x121bf08cu));
  /* 1219ff3a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219ff3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff41 call dword ptr [0x121c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62dc))), 0x1219ff47u);
  /* 1219ff47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ff49 je 0x1219ff57 */
  if (C.zf) goto L_1219ff57;
  /* 1219ff4b mov dword ptr [0x121c3918], 1 */
  w32((uint32_t)(0x121c3918), (0x1u));
  /* 1219ff55 jmp 0x1219ff86 */
  goto L_1219ff86;
L_1219ff57:;
  /* 1219ff57 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff5b push 1 */
  push32((uint32_t)(0x1u));
  /* 1219ff5d push 0x121bf088 */
  push32((uint32_t)(0x121bf088u));
  /* 1219ff62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1219ff67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ff69 call dword ptr [0x121c62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d4))), 0x1219ff6fu);
  /* 1219ff6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1219ff71 je 0x1219ff7f */
  if (C.zf) goto L_1219ff7f;
  /* 1219ff73 mov dword ptr [0x121c3918], 2 */
  w32((uint32_t)(0x121c3918), (0x2u));
  /* 1219ff7d jmp 0x1219ff86 */
  goto L_1219ff86;
L_1219ff7f:;
  /* 1219ff7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1219ff81 jmp 0x121a01f1 */
  goto L_121a01f1;
L_1219ff86:;
  /* 1219ff86 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ff8a jle 0x1219ff9f */
  if ((C.zf||C.sf!=C.of)) goto L_1219ff9f;
  /* 1219ff8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219ff8f push eax */
  push32((uint32_t)(EAX));
  /* 1219ff90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219ff93 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ff94 call 0x121a0210 */
  push32(0x1219ff99u); f_121a0210();
  /* 1219ff99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1219ff9c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1219ff9f:;
  /* 1219ff9f cmp dword ptr [0x121c3918], 2 */
  { uint32_t _a=(r32((uint32_t)(0x121c3918))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ffa6 jne 0x1219ffcb */
  if (!C.zf) goto L_1219ffcb;
  /* 1219ffa8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1219ffab push edx */
  push32((uint32_t)(EDX));
  /* 1219ffac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1219ffaf push eax */
  push32((uint32_t)(EAX));
  /* 1219ffb0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219ffb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1219ffb4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219ffb7 push edx */
  push32((uint32_t)(EDX));
  /* 1219ffb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1219ffbb push eax */
  push32((uint32_t)(EAX));
  /* 1219ffbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1219ffbf push ecx */
  push32((uint32_t)(ECX));
  /* 1219ffc0 call dword ptr [0x121c62d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d4))), 0x1219ffc6u);
  /* 1219ffc6 jmp 0x121a01f1 */
  goto L_121a01f1;
L_1219ffcb:;
  /* 1219ffcb cmp dword ptr [0x121c3918], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c3918))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ffd2 jne 0x121a01ef */
  if (!C.zf) goto L_121a01ef;
  /* 1219ffd8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1219ffdc jne 0x1219ffe7 */
  if (!C.zf) goto L_1219ffe7;
  /* 1219ffde mov edx, dword ptr [0x121c3910] */
  EDX = (r32((uint32_t)(0x121c3910)));
  /* 1219ffe4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1219ffe7:;
  /* 1219ffe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ffe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1219ffeb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1219ffee push eax */
  push32((uint32_t)(EAX));
  /* 1219ffef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1219fff2 push ecx */
  push32((uint32_t)(ECX));
  /* 1219fff3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1219fff6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1219fff8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1219fffa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1219fffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0000 push edx */
  push32((uint32_t)(EDX));
  /* 121a0001 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a0004 push eax */
  push32((uint32_t)(EAX));
  /* 121a0005 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a000bu);
  /* 121a000b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a000e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0012 jne 0x121a001b */
  if (!C.zf) goto L_121a001b;
  /* 121a0014 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0016 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a001b:;
  /* 121a001b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a0022 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a0025 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a0027 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a002a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a002c call 0x1219acb0 */
  push32(0x121a0031u); f_1219acb0();
  /* 121a0031 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 121a0034 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a0037 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a003a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121a003d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a0044 jmp 0x121a005d */
  goto L_121a005d;
  /* 121a0046 mov eax, 1 */
  EAX = (0x1u);
  /* 121a004b ret  */
  ESPCHK(0x1219ff00u, _esp0);
  ESP += 4; return;
  /* 121a004c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a004f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 121a0056 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a005d:;
  /* 121a005d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0061 jne 0x121a006a */
  if (!C.zf) goto L_121a006a;
  /* 121a0063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0065 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a006a:;
  /* 121a006a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a006d push edx */
  push32((uint32_t)(EDX));
  /* 121a006e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a0071 push eax */
  push32((uint32_t)(EAX));
  /* 121a0072 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a0075 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0076 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a0079 push edx */
  push32((uint32_t)(EDX));
  /* 121a007a push 1 */
  push32((uint32_t)(0x1u));
  /* 121a007c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a007f push eax */
  push32((uint32_t)(EAX));
  /* 121a0080 call dword ptr [0x121c62e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62e0))), 0x121a0086u);
  /* 121a0086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a0088 jne 0x121a0091 */
  if (!C.zf) goto L_121a0091;
  /* 121a008a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a008c jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a0091:;
  /* 121a0091 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0093 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0095 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a0098 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0099 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a009c push edx */
  push32((uint32_t)(EDX));
  /* 121a009d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a00a0 push eax */
  push32((uint32_t)(EAX));
  /* 121a00a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a00a4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a00a5 call dword ptr [0x121c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62dc))), 0x121a00abu);
  /* 121a00ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121a00ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a00b2 jne 0x121a00bb */
  if (!C.zf) goto L_121a00bb;
  /* 121a00b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a00b6 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a00bb:;
  /* 121a00bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a00be and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 121a00c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a00c6 je 0x121a010b */
  if (C.zf) goto L_121a010b;
  /* 121a00c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a00cc je 0x121a0106 */
  if (C.zf) goto L_121a0106;
  /* 121a00ce mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a00d1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a00d4 jle 0x121a00dd */
  if ((C.zf||C.sf!=C.of)) goto L_121a00dd;
  /* 121a00d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a00d8 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a00dd:;
  /* 121a00dd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a00e0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a00e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a00e4 push edx */
  push32((uint32_t)(EDX));
  /* 121a00e5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a00e8 push eax */
  push32((uint32_t)(EAX));
  /* 121a00e9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a00ec push ecx */
  push32((uint32_t)(ECX));
  /* 121a00ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a00f0 push edx */
  push32((uint32_t)(EDX));
  /* 121a00f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a00f4 push eax */
  push32((uint32_t)(EAX));
  /* 121a00f5 call dword ptr [0x121c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62dc))), 0x121a00fbu);
  /* 121a00fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a00fd jne 0x121a0106 */
  if (!C.zf) goto L_121a0106;
  /* 121a00ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0101 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a0106:;
  /* 121a0106 jmp 0x121a01ea */
  goto L_121a01ea;
L_121a010b:;
  /* 121a010b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a010e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 121a0111 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a0118 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a011b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a011d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0120 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 121a0122 call 0x1219acb0 */
  push32(0x121a0127u); f_1219acb0();
  /* 121a0127 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 121a012a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 121a012d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 121a0130 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 121a0133 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a013a jmp 0x121a0153 */
  goto L_121a0153;
  /* 121a013c mov eax, 1 */
  EAX = (0x1u);
  /* 121a0141 ret  */
  ESPCHK(0x1219ff00u, _esp0);
  ESP += 4; return;
  /* 121a0142 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 121a0145 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121a014c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a0153:;
  /* 121a0153 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0157 jne 0x121a0160 */
  if (!C.zf) goto L_121a0160;
  /* 121a0159 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a015b jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a0160:;
  /* 121a0160 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a0163 push eax */
  push32((uint32_t)(EAX));
  /* 121a0164 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a0167 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0168 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a016b push edx */
  push32((uint32_t)(EDX));
  /* 121a016c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a016f push eax */
  push32((uint32_t)(EAX));
  /* 121a0170 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0173 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0177 push edx */
  push32((uint32_t)(EDX));
  /* 121a0178 call dword ptr [0x121c62dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62dc))), 0x121a017eu);
  /* 121a017e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a0180 jne 0x121a0186 */
  if (!C.zf) goto L_121a0186;
  /* 121a0182 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0184 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a0186:;
  /* 121a0186 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a018a jne 0x121a01ba */
  if (!C.zf) goto L_121a01ba;
  /* 121a018c push 0 */
  push32((uint32_t)(0x0u));
  /* 121a018e push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0190 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0192 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0194 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a0197 push eax */
  push32((uint32_t)(EAX));
  /* 121a0198 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a019b push ecx */
  push32((uint32_t)(ECX));
  /* 121a019c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a01a1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a01a4 push edx */
  push32((uint32_t)(EDX));
  /* 121a01a5 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a01abu);
  /* 121a01ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121a01ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a01b2 jne 0x121a01b8 */
  if (!C.zf) goto L_121a01b8;
  /* 121a01b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a01b6 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a01b8:;
  /* 121a01b8 jmp 0x121a01ea */
  goto L_121a01ea;
L_121a01ba:;
  /* 121a01ba push 0 */
  push32((uint32_t)(0x0u));
  /* 121a01bc push 0 */
  push32((uint32_t)(0x0u));
  /* 121a01be mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 121a01c1 push eax */
  push32((uint32_t)(EAX));
  /* 121a01c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121a01c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a01c6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a01c9 push edx */
  push32((uint32_t)(EDX));
  /* 121a01ca mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a01cd push eax */
  push32((uint32_t)(EAX));
  /* 121a01ce push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a01d3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 121a01d6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a01d7 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a01ddu);
  /* 121a01dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121a01e0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a01e4 jne 0x121a01ea */
  if (!C.zf) goto L_121a01ea;
  /* 121a01e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a01e8 jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a01ea:;
  /* 121a01ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a01ed jmp 0x121a01f1 */
  goto L_121a01f1;
L_121a01ef:;
  /* 121a01ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a01f1:;
  /* 121a01f1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 121a01f4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a01f7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 121a01fe pop edi */
  EDI = (pop32());
  /* 121a01ff pop esi */
  ESI = (pop32());
  /* 121a0200 pop ebx */
  EBX = (pop32());
  /* 121a0201 mov esp, ebp */
  ESP = (EBP);
  /* 121a0203 pop ebp */
  EBP = (pop32());
  /* 121a0204 ret  */
  ESPCHK(0x1219ff00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010210 @ 0x121a0210 (80 bytes, 32 insns) */
void f_121a0210(void) {
  FTRACE(0x121a0210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0210 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0211 mov ebp, esp */
  EBP = (ESP);
  /* 121a0213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0216 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0219 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a021c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a021f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a0222:;
  /* 121a0222 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0225 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0228 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a022b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a022e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a0230 je 0x121a0247 */
  if (C.zf) goto L_121a0247;
  /* 121a0232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0235 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a0238 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a023a je 0x121a0247 */
  if (C.zf) goto L_121a0247;
  /* 121a023c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a023f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0245 jmp 0x121a0222 */
  goto L_121a0222;
L_121a0247:;
  /* 121a0247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a024a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a024d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a024f jne 0x121a0259 */
  if (!C.zf) goto L_121a0259;
  /* 121a0251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0254 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0257 jmp 0x121a025c */
  goto L_121a025c;
L_121a0259:;
  /* 121a0259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_121a025c:;
  /* 121a025c mov esp, ebp */
  ESP = (EBP);
  /* 121a025e pop ebp */
  EBP = (pop32());
  /* 121a025f ret  */
  ESPCHK(0x121a0210u, _esp0);
  ESP += 4; return;
}

/* FUN_10010260 @ 0x121a0260 (130 bytes, 43 insns) */
void f_121a0260(void) {
  FTRACE(0x121a0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0260 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0261 mov ebp, esp */
  EBP = (ESP);
  /* 121a0263 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0267 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a026d jae 0x121a0291 */
  if (!C.cf) goto L_121a0291;
  /* 121a026f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0272 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a0275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0278 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a027b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a027e mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a0285 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a028a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a028d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a028f jne 0x121a02ac */
  if (!C.zf) goto L_121a02ac;
L_121a0291:;
  /* 121a0291 call 0x1219f9e0 */
  push32(0x121a0296u); f_1219f9e0();
  /* 121a0296 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a029c call 0x1219f9f0 */
  push32(0x121a02a1u); f_1219f9f0();
  /* 121a02a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a02a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a02aa jmp 0x121a02de */
  goto L_121a02de;
L_121a02ac:;
  /* 121a02ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a02af push edx */
  push32((uint32_t)(EDX));
  /* 121a02b0 call 0x121a1200 */
  push32(0x121a02b5u); f_121a1200();
  /* 121a02b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a02b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a02bb push eax */
  push32((uint32_t)(EAX));
  /* 121a02bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a02bf push ecx */
  push32((uint32_t)(ECX));
  /* 121a02c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a02c3 push edx */
  push32((uint32_t)(EDX));
  /* 121a02c4 call 0x121a02f0 */
  push32(0x121a02c9u); f_121a02f0();
  /* 121a02c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a02cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a02cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a02d2 push eax */
  push32((uint32_t)(EAX));
  /* 121a02d3 call 0x121a1290 */
  push32(0x121a02d8u); f_121a1290();
  /* 121a02d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a02db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a02de:;
  /* 121a02de mov esp, ebp */
  ESP = (EBP);
  /* 121a02e0 pop ebp */
  EBP = (pop32());
  /* 121a02e1 ret  */
  ESPCHK(0x121a0260u, _esp0);
  ESP += 4; return;
}

/* FUN_100102f0 @ 0x121a02f0 (178 bytes, 56 insns) */
void f_121a02f0(void) {
  FTRACE(0x121a02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a02f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a02f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a02f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a02f9 push eax */
  push32((uint32_t)(EAX));
  /* 121a02fa call 0x121a1080 */
  push32(0x121a02ffu); f_121a1080();
  /* 121a02ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0302 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a0305 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0309 jne 0x121a031e */
  if (!C.zf) goto L_121a031e;
  /* 121a030b call 0x1219f9e0 */
  push32(0x121a0310u); f_1219f9e0();
  /* 121a0310 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a0316 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0319 jmp 0x121a039e */
  goto L_121a039e;
L_121a031e:;
  /* 121a031e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a0321 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0322 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0324 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0327 push edx */
  push32((uint32_t)(EDX));
  /* 121a0328 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a032b push eax */
  push32((uint32_t)(EAX));
  /* 121a032c call dword ptr [0x121c62cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62cc))), 0x121a0332u);
  /* 121a0332 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a0335 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0339 jne 0x121a0346 */
  if (!C.zf) goto L_121a0346;
  /* 121a033b call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a0341u);
  /* 121a0341 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0344 jmp 0x121a034d */
  goto L_121a034d;
L_121a0346:;
  /* 121a0346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121a034d:;
  /* 121a034d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0351 je 0x121a0364 */
  if (C.zf) goto L_121a0364;
  /* 121a0353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0356 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0357 call 0x1219f940 */
  push32(0x121a035cu); f_1219f940();
  /* 121a035c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a035f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0362 jmp 0x121a039e */
  goto L_121a039e;
L_121a0364:;
  /* 121a0364 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0367 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121a036a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a036d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0370 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0373 mov ecx, dword ptr [edx*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a037a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 121a037e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 121a0381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0384 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a0387 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a038a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a038d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0390 mov eax, dword ptr [eax*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a0397 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 121a039b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a039e:;
  /* 121a039e mov esp, ebp */
  ESP = (EBP);
  /* 121a03a0 pop ebp */
  EBP = (pop32());
  /* 121a03a1 ret  */
  ESPCHK(0x121a02f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x121a03b0 (130 bytes, 43 insns) */
void f_121a03b0(void) {
  FTRACE(0x121a03b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a03b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a03b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a03b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a03b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a03b7 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a03bd jae 0x121a03e1 */
  if (!C.cf) goto L_121a03e1;
  /* 121a03bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a03c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a03c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a03c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a03cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a03ce mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a03d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a03da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a03dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a03df jne 0x121a03fc */
  if (!C.zf) goto L_121a03fc;
L_121a03e1:;
  /* 121a03e1 call 0x1219f9e0 */
  push32(0x121a03e6u); f_1219f9e0();
  /* 121a03e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a03ec call 0x1219f9f0 */
  push32(0x121a03f1u); f_1219f9f0();
  /* 121a03f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a03f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a03fa jmp 0x121a042e */
  goto L_121a042e;
L_121a03fc:;
  /* 121a03fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a03ff push edx */
  push32((uint32_t)(EDX));
  /* 121a0400 call 0x121a1200 */
  push32(0x121a0405u); f_121a1200();
  /* 121a0405 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0408 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a040b push eax */
  push32((uint32_t)(EAX));
  /* 121a040c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a040f push ecx */
  push32((uint32_t)(ECX));
  /* 121a0410 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0413 push edx */
  push32((uint32_t)(EDX));
  /* 121a0414 call 0x121a0440 */
  push32(0x121a0419u); f_121a0440();
  /* 121a0419 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a041c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a041f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0422 push eax */
  push32((uint32_t)(EAX));
  /* 121a0423 call 0x121a1290 */
  push32(0x121a0428u); f_121a1290();
  /* 121a0428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a042b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a042e:;
  /* 121a042e mov esp, ebp */
  ESP = (EBP);
  /* 121a0430 pop ebp */
  EBP = (pop32());
  /* 121a0431 ret  */
  ESPCHK(0x121a03b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010440 @ 0x121a0440 (627 bytes, 182 insns) */
void f_121a0440(void) {
  FTRACE(0x121a0440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0440 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0441 mov ebp, esp */
  EBP = (ESP);
  /* 121a0443 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0449 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a0450 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a0453 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 121a0459 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a045d jne 0x121a0466 */
  if (!C.zf) goto L_121a0466;
  /* 121a045f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0461 jmp 0x121a06af */
  goto L_121a06af;
L_121a0466:;
  /* 121a0466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0469 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a046c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a046f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a0472 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0475 mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a047c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a0481 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121a0484 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a0486 je 0x121a0498 */
  if (C.zf) goto L_121a0498;
  /* 121a0488 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a048a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a048c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a048f push edx */
  push32((uint32_t)(EDX));
  /* 121a0490 call 0x121a02f0 */
  push32(0x121a0495u); f_121a02f0();
  /* 121a0495 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a0498:;
  /* 121a0498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a049b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a049e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a04a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a04a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a04a7 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a04ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121a04b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 121a04b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a04ba je 0x121a05cc */
  if (C.zf) goto L_121a05cc;
  /* 121a04c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a04c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a04c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_121a04cd:;
  /* 121a04cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a04d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a04d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a04d6 jae 0x121a05ca */
  if (!C.cf) goto L_121a05ca;
  /* 121a04dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 121a04e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a04e5:;
  /* 121a04e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a04e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 121a04ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a04f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a04f6 jge 0x121a0557 */
  if ((C.sf==C.of)) goto L_121a0557;
  /* 121a04f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a04fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a04fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0501 jae 0x121a0557 */
  if (!C.cf) goto L_121a0557;
  /* 121a0503 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0506 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a0508 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 121a050e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0511 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0514 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0517 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 121a051e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0521 jne 0x121a0541 */
  if (!C.zf) goto L_121a0541;
  /* 121a0523 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 121a0529 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a052c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 121a0532 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0535 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 121a0538 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a053b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a053e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121a0541:;
  /* 121a0541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0544 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 121a054a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 121a054c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a054f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0552 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a0555 jmp 0x121a04e5 */
  goto L_121a04e5;
L_121a0557:;
  /* 121a0557 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0559 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 121a055f push edx */
  push32((uint32_t)(EDX));
  /* 121a0560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0563 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 121a0569 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a056b push eax */
  push32((uint32_t)(EAX));
  /* 121a056c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 121a0572 push edx */
  push32((uint32_t)(EDX));
  /* 121a0573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0576 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a0579 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a057c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a057f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0582 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a0589 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 121a058c push eax */
  push32((uint32_t)(EAX));
  /* 121a058d call dword ptr [0x121c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c631c))), 0x121a0593u);
  /* 121a0593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a0595 je 0x121a05ba */
  if (C.zf) goto L_121a05ba;
  /* 121a0597 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a059a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a05a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 121a05a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a05a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 121a05ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a05ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a05b4 jge 0x121a05b8 */
  if ((C.sf==C.of)) goto L_121a05b8;
  /* 121a05b6 jmp 0x121a05ca */
  goto L_121a05ca;
L_121a05b8:;
  /* 121a05b8 jmp 0x121a05c5 */
  goto L_121a05c5;
L_121a05ba:;
  /* 121a05ba call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a05c0u);
  /* 121a05c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a05c3 jmp 0x121a05ca */
  goto L_121a05ca;
L_121a05c5:;
  /* 121a05c5 jmp 0x121a04cd */
  goto L_121a04cd;
L_121a05ca:;
  /* 121a05ca jmp 0x121a061c */
  goto L_121a061c;
L_121a05cc:;
  /* 121a05cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121a05ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 121a05d4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a05d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a05d8 push edx */
  push32((uint32_t)(EDX));
  /* 121a05d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a05dc push eax */
  push32((uint32_t)(EAX));
  /* 121a05dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a05e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a05e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a05e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a05e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a05ec mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a05f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 121a05f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a05f7 call dword ptr [0x121c631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c631c))), 0x121a05fdu);
  /* 121a05fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a05ff je 0x121a0613 */
  if (C.zf) goto L_121a0613;
  /* 121a0601 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a0608 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 121a060e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121a0611 jmp 0x121a061c */
  goto L_121a061c;
L_121a0613:;
  /* 121a0613 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a0619u);
  /* 121a0619 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121a061c:;
  /* 121a061c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0620 jne 0x121a06a6 */
  if (!C.zf) goto L_121a06a6;
  /* 121a0626 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a062a je 0x121a065a */
  if (C.zf) goto L_121a065a;
  /* 121a062c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0630 jne 0x121a0649 */
  if (!C.zf) goto L_121a0649;
  /* 121a0632 call 0x1219f9e0 */
  push32(0x121a0637u); f_1219f9e0();
  /* 121a0637 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a063d call 0x1219f9f0 */
  push32(0x121a0642u); f_1219f9f0();
  /* 121a0642 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0645 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121a0647 jmp 0x121a0655 */
  goto L_121a0655;
L_121a0649:;
  /* 121a0649 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a064c push edx */
  push32((uint32_t)(EDX));
  /* 121a064d call 0x1219f940 */
  push32(0x121a0652u); f_1219f940();
  /* 121a0652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a0655:;
  /* 121a0655 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0658 jmp 0x121a06af */
  goto L_121a06af;
L_121a065a:;
  /* 121a065a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a065d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a0660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0663 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a0666 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0669 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a0670 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121a0675 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 121a0678 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a067a je 0x121a068b */
  if (C.zf) goto L_121a068b;
  /* 121a067c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a067f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a0682 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0685 jne 0x121a068b */
  if (!C.zf) goto L_121a068b;
  /* 121a0687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0689 jmp 0x121a06af */
  goto L_121a06af;
L_121a068b:;
  /* 121a068b call 0x1219f9e0 */
  push32(0x121a0690u); f_1219f9e0();
  /* 121a0690 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 121a0696 call 0x1219f9f0 */
  push32(0x121a069bu); f_1219f9f0();
  /* 121a069b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a06a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a06a4 jmp 0x121a06af */
  goto L_121a06af;
L_121a06a6:;
  /* 121a06a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a06a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_121a06af:;
  /* 121a06af mov esp, ebp */
  ESP = (EBP);
  /* 121a06b1 pop ebp */
  EBP = (pop32());
  /* 121a06b2 ret  */
  ESPCHK(0x121a0440u, _esp0);
  ESP += 4; return;
}

/* FUN_100106c0 @ 0x121a06c0 (199 bytes, 68 insns) */
void f_121a06c0(void) {
  FTRACE(0x121a06c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a06c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a06c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a06c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a06c4 push ebx */
  push32((uint32_t)(EBX));
  /* 121a06c5 push esi */
  push32((uint32_t)(ESI));
  /* 121a06c6 push edi */
  push32((uint32_t)(EDI));
L_121a06c7:;
  /* 121a06c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a06cb jne 0x121a06eb */
  if (!C.zf) goto L_121a06eb;
  /* 121a06cd push 0x121befec */
  push32((uint32_t)(0x121befecu));
  /* 121a06d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a06d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 121a06d6 push 0x121bf0b8 */
  push32((uint32_t)(0x121bf0b8u));
  /* 121a06db push 2 */
  push32((uint32_t)(0x2u));
  /* 121a06dd call 0x12196bd0 */
  push32(0x121a06e2u); f_12196bd0();
  /* 121a06e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a06e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a06e8 jne 0x121a06eb */
  if (!C.zf) goto L_121a06eb;
  /* 121a06ea int3  */
  x86_unimpl("int3 @ 0x121a06ea");
L_121a06eb:;
  /* 121a06eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a06ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a06ef jne 0x121a06c7 */
  if (!C.zf) goto L_121a06c7;
  /* 121a06f1 mov ecx, dword ptr [0x121c391c] */
  ECX = (r32((uint32_t)(0x121c391c)));
  /* 121a06f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a06fa mov dword ptr [0x121c391c], ecx */
  w32((uint32_t)(0x121c391c), (ECX));
  /* 121a0700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0703 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a0706 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 121a0708 push 0x121bf0b8 */
  push32((uint32_t)(0x121bf0b8u));
  /* 121a070d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a070f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 121a0714 call 0x12197b10 */
  push32(0x121a0719u); f_12197b10();
  /* 121a0719 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a071c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a071f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 121a0722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0725 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0729 je 0x121a0746 */
  if (C.zf) goto L_121a0746;
  /* 121a072b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a072e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a0731 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 121a0734 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0737 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 121a073a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a073d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 121a0744 jmp 0x121a076b */
  goto L_121a076b;
L_121a0746:;
  /* 121a0746 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0749 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a074c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121a074f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0752 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121a0755 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0758 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a075b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a075e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 121a0761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0764 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_121a076b:;
  /* 121a076b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a076e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0771 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a0774 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a0776 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0779 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 121a0780 pop edi */
  EDI = (pop32());
  /* 121a0781 pop esi */
  ESI = (pop32());
  /* 121a0782 pop ebx */
  EBX = (pop32());
  /* 121a0783 mov esp, ebp */
  ESP = (EBP);
  /* 121a0785 pop ebp */
  EBP = (pop32());
  /* 121a0786 ret  */
  ESPCHK(0x121a06c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x121a0790 (50 bytes, 17 insns) */
void f_121a0790(void) {
  FTRACE(0x121a0790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0790 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0791 mov ebp, esp */
  EBP = (ESP);
  /* 121a0793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0796 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a079c jb 0x121a07a2 */
  if (C.cf) goto L_121a07a2;
  /* 121a079e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a07a0 jmp 0x121a07c0 */
  goto L_121a07c0;
L_121a07a2:;
  /* 121a07a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a07a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a07a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a07ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a07ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a07b1 mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a07b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a07bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_121a07c0:;
  /* 121a07c0 pop ebp */
  EBP = (pop32());
  /* 121a07c1 ret  */
  ESPCHK(0x121a0790u, _esp0);
  ESP += 4; return;
}

/* FUN_100107d0 @ 0x121a07d0 (300 bytes, 80 insns) */
void f_121a07d0(void) {
  FTRACE(0x121a07d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a07d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a07d1 mov ebp, esp */
  EBP = (ESP);
  /* 121a07d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a07d4 cmp dword ptr [0x121c4de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c4de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a07db jne 0x121a07e9 */
  if (!C.zf) goto L_121a07e9;
  /* 121a07dd mov dword ptr [0x121c4de0], 0x200 */
  w32((uint32_t)(0x121c4de0), (0x200u));
  /* 121a07e7 jmp 0x121a07fc */
  goto L_121a07fc;
L_121a07e9:;
  /* 121a07e9 cmp dword ptr [0x121c4de0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x121c4de0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a07f0 jge 0x121a07fc */
  if ((C.sf==C.of)) goto L_121a07fc;
  /* 121a07f2 mov dword ptr [0x121c4de0], 0x14 */
  w32((uint32_t)(0x121c4de0), (0x14u));
L_121a07fc:;
  /* 121a07fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 121a0801 push 0x121bf0c4 */
  push32((uint32_t)(0x121bf0c4u));
  /* 121a0806 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a0808 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a080a mov eax, dword ptr [0x121c4de0] */
  EAX = (r32((uint32_t)(0x121c4de0)));
  /* 121a080f push eax */
  push32((uint32_t)(EAX));
  /* 121a0810 call 0x12197f20 */
  push32(0x121a0815u); f_12197f20();
  /* 121a0815 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0818 mov dword ptr [0x121c3a90], eax */
  w32((uint32_t)(0x121c3a90), (EAX));
  /* 121a081d cmp dword ptr [0x121c3a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0824 jne 0x121a0865 */
  if (!C.zf) goto L_121a0865;
  /* 121a0826 mov dword ptr [0x121c4de0], 0x14 */
  w32((uint32_t)(0x121c4de0), (0x14u));
  /* 121a0830 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 121a0835 push 0x121bf0c4 */
  push32((uint32_t)(0x121bf0c4u));
  /* 121a083a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a083c push 4 */
  push32((uint32_t)(0x4u));
  /* 121a083e mov ecx, dword ptr [0x121c4de0] */
  ECX = (r32((uint32_t)(0x121c4de0)));
  /* 121a0844 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0845 call 0x12197f20 */
  push32(0x121a084au); f_12197f20();
  /* 121a084a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a084d mov dword ptr [0x121c3a90], eax */
  w32((uint32_t)(0x121c3a90), (EAX));
  /* 121a0852 cmp dword ptr [0x121c3a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0859 jne 0x121a0865 */
  if (!C.zf) goto L_121a0865;
  /* 121a085b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121a085d call 0x12196a80 */
  push32(0x121a0862u); f_12196a80();
  /* 121a0862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a0865:;
  /* 121a0865 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a086c jmp 0x121a0877 */
  goto L_121a0877;
L_121a086e:;
  /* 121a086e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0871 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0874 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121a0877:;
  /* 121a0877 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a087b jge 0x121a0896 */
  if ((C.sf==C.of)) goto L_121a0896;
  /* 121a087d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0880 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a0883 add eax, 0x121c2120 */
  { uint32_t _a=(EAX),_b=(0x121c2120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a088b mov edx, dword ptr [0x121c3a90] */
  EDX = (r32((uint32_t)(0x121c3a90)));
  /* 121a0891 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 121a0894 jmp 0x121a086e */
  goto L_121a086e;
L_121a0896:;
  /* 121a0896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a089d jmp 0x121a08a8 */
  goto L_121a08a8;
L_121a089f:;
  /* 121a089f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a08a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a08a8:;
  /* 121a08a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a08ac jge 0x121a08f8 */
  if ((C.sf==C.of)) goto L_121a08f8;
  /* 121a08ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a08b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a08ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a08bd mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a08c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a08c8 je 0x121a08e6 */
  if (C.zf) goto L_121a08e6;
  /* 121a08ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a08d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a08d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a08d9 mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a08e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a08e4 jne 0x121a08f6 */
  if (!C.zf) goto L_121a08f6;
L_121a08e6:;
  /* 121a08e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a08e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a08ec mov dword ptr [ecx + 0x121c2130], 0xffffffff */
  w32((uint32_t)(ECX + 0x121c2130), (0xffffffffu));
L_121a08f6:;
  /* 121a08f6 jmp 0x121a089f */
  goto L_121a089f;
L_121a08f8:;
  /* 121a08f8 mov esp, ebp */
  ESP = (EBP);
  /* 121a08fa pop ebp */
  EBP = (pop32());
  /* 121a08fb ret  */
  ESPCHK(0x121a07d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010900 @ 0x121a0900 (26 bytes, 9 insns) */
void f_121a0900(void) {
  FTRACE(0x121a0900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0900 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0901 mov ebp, esp */
  EBP = (ESP);
  /* 121a0903 call 0x121a1500 */
  push32(0x121a0908u); f_121a1500();
  /* 121a0908 movsx eax, byte ptr [0x121c3734] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x121c3734))));
  /* 121a090f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a0911 je 0x121a0918 */
  if (C.zf) goto L_121a0918;
  /* 121a0913 call 0x121a12c0 */
  push32(0x121a0918u); f_121a12c0();
L_121a0918:;
  /* 121a0918 pop ebp */
  EBP = (pop32());
  /* 121a0919 ret  */
  ESPCHK(0x121a0900u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x121a0920 (61 bytes, 20 insns) */
void f_121a0920(void) {
  FTRACE(0x121a0920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0920 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0921 mov ebp, esp */
  EBP = (ESP);
  /* 121a0923 cmp dword ptr [ebp + 8], 0x121c2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x121c2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a092a jb 0x121a094e */
  if (C.cf) goto L_121a094e;
  /* 121a092c cmp dword ptr [ebp + 8], 0x121c2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x121c2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0933 ja 0x121a094e */
  if ((!C.cf&&!C.zf)) goto L_121a094e;
  /* 121a0935 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0938 sub eax, 0x121c2120 */
  { uint32_t _a=(EAX),_b=(0x121c2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a093d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a0940 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0943 push eax */
  push32((uint32_t)(EAX));
  /* 121a0944 call 0x1219b510 */
  push32(0x121a0949u); f_1219b510();
  /* 121a0949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a094c jmp 0x121a095b */
  goto L_121a095b;
L_121a094e:;
  /* 121a094e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0951 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0954 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0955 call dword ptr [0x121c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6308))), 0x121a095bu);
L_121a095b:;
  /* 121a095b pop ebp */
  EBP = (pop32());
  /* 121a095c ret  */
  ESPCHK(0x121a0920u, _esp0);
  ESP += 4; return;
}

/* FUN_10010960 @ 0x121a0960 (41 bytes, 16 insns) */
void f_121a0960(void) {
  FTRACE(0x121a0960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0960 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0961 mov ebp, esp */
  EBP = (ESP);
  /* 121a0963 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0967 jge 0x121a097a */
  if ((C.sf==C.of)) goto L_121a097a;
  /* 121a0969 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a096c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a096f push eax */
  push32((uint32_t)(EAX));
  /* 121a0970 call 0x1219b510 */
  push32(0x121a0975u); f_1219b510();
  /* 121a0975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0978 jmp 0x121a0987 */
  goto L_121a0987;
L_121a097a:;
  /* 121a097a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a097d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0980 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0981 call dword ptr [0x121c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6308))), 0x121a0987u);
L_121a0987:;
  /* 121a0987 pop ebp */
  EBP = (pop32());
  /* 121a0988 ret  */
  ESPCHK(0x121a0960u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x121a0990 (61 bytes, 20 insns) */
void f_121a0990(void) {
  FTRACE(0x121a0990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0990 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0991 mov ebp, esp */
  EBP = (ESP);
  /* 121a0993 cmp dword ptr [ebp + 8], 0x121c2120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x121c2120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a099a jb 0x121a09be */
  if (C.cf) goto L_121a09be;
  /* 121a099c cmp dword ptr [ebp + 8], 0x121c2380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x121c2380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a09a3 ja 0x121a09be */
  if ((!C.cf&&!C.zf)) goto L_121a09be;
  /* 121a09a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a09a8 sub eax, 0x121c2120 */
  { uint32_t _a=(EAX),_b=(0x121c2120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a09ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a09b0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09b3 push eax */
  push32((uint32_t)(EAX));
  /* 121a09b4 call 0x1219b5b0 */
  push32(0x121a09b9u); f_1219b5b0();
  /* 121a09b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09bc jmp 0x121a09cb */
  goto L_121a09cb;
L_121a09be:;
  /* 121a09be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a09c1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09c4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a09c5 call dword ptr [0x121c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6304))), 0x121a09cbu);
L_121a09cb:;
  /* 121a09cb pop ebp */
  EBP = (pop32());
  /* 121a09cc ret  */
  ESPCHK(0x121a0990u, _esp0);
  ESP += 4; return;
}

/* FUN_100109d0 @ 0x121a09d0 (41 bytes, 16 insns) */
void f_121a09d0(void) {
  FTRACE(0x121a09d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a09d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a09d1 mov ebp, esp */
  EBP = (ESP);
  /* 121a09d3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a09d7 jge 0x121a09ea */
  if ((C.sf==C.of)) goto L_121a09ea;
  /* 121a09d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a09dc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09df push eax */
  push32((uint32_t)(EAX));
  /* 121a09e0 call 0x1219b5b0 */
  push32(0x121a09e5u); f_1219b5b0();
  /* 121a09e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09e8 jmp 0x121a09f7 */
  goto L_121a09f7;
L_121a09ea:;
  /* 121a09ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a09ed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a09f0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a09f1 call dword ptr [0x121c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6304))), 0x121a09f7u);
L_121a09f7:;
  /* 121a09f7 pop ebp */
  EBP = (pop32());
  /* 121a09f8 ret  */
  ESPCHK(0x121a09d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a00 @ 0x121a0a00 (119 bytes, 34 insns) */
void f_121a0a00(void) {
  FTRACE(0x121a0a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0a00 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0a01 mov ebp, esp */
  EBP = (ESP);
  /* 121a0a03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0a06 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a0a0b call dword ptr [0x121c6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6330))), 0x121a0a11u);
  /* 121a0a11 cmp dword ptr [0x121c3a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0a18 je 0x121a0a38 */
  if (C.zf) goto L_121a0a38;
  /* 121a0a1a push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a0a1f call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a0a25u);
  /* 121a0a25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a0a27 call 0x1219b510 */
  push32(0x121a0a2cu); f_1219b510();
  /* 121a0a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0a2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a0a36 jmp 0x121a0a3f */
  goto L_121a0a3f;
L_121a0a38:;
  /* 121a0a38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121a0a3f:;
  /* 121a0a3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 121a0a43 push eax */
  push32((uint32_t)(EAX));
  /* 121a0a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0a47 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0a48 call 0x121a0a80 */
  push32(0x121a0a4du); f_121a0a80();
  /* 121a0a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0a50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a0a53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0a57 je 0x121a0a65 */
  if (C.zf) goto L_121a0a65;
  /* 121a0a59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a0a5b call 0x1219b5b0 */
  push32(0x121a0a60u); f_1219b5b0();
  /* 121a0a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0a63 jmp 0x121a0a70 */
  goto L_121a0a70;
L_121a0a65:;
  /* 121a0a65 push 0x121c3a8c */
  push32((uint32_t)(0x121c3a8cu));
  /* 121a0a6a call dword ptr [0x121c6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6320))), 0x121a0a70u);
L_121a0a70:;
  /* 121a0a70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0a73 mov esp, ebp */
  ESP = (EBP);
  /* 121a0a75 pop ebp */
  EBP = (pop32());
  /* 121a0a76 ret  */
  ESPCHK(0x121a0a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x121a0a80 (160 bytes, 50 insns) */
void f_121a0a80(void) {
  FTRACE(0x121a0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0a81 mov ebp, esp */
  EBP = (ESP);
  /* 121a0a83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0a86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0a8a jne 0x121a0a93 */
  if (!C.zf) goto L_121a0a93;
  /* 121a0a8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0a8e jmp 0x121a0b1c */
  goto L_121a0b1c;
L_121a0a93:;
  /* 121a0a93 cmp dword ptr [0x121c3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0a9a jne 0x121a0aca */
  if (!C.zf) goto L_121a0aca;
  /* 121a0a9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0a9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0aa4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0aa9 jle 0x121a0abb */
  if ((C.zf||C.sf!=C.of)) goto L_121a0abb;
  /* 121a0aab call 0x1219f9e0 */
  push32(0x121a0ab0u); f_1219f9e0();
  /* 121a0ab0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 121a0ab6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0ab9 jmp 0x121a0b1c */
  goto L_121a0b1c;
L_121a0abb:;
  /* 121a0abb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0abe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 121a0ac1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 121a0ac3 mov eax, 1 */
  EAX = (0x1u);
  /* 121a0ac8 jmp 0x121a0b1c */
  goto L_121a0b1c;
L_121a0aca:;
  /* 121a0aca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a0ad1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121a0ad4 push eax */
  push32((uint32_t)(EAX));
  /* 121a0ad5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0ad7 mov ecx, dword ptr [0x121c1ea4] */
  ECX = (r32((uint32_t)(0x121c1ea4)));
  /* 121a0add push ecx */
  push32((uint32_t)(ECX));
  /* 121a0ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0ae1 push edx */
  push32((uint32_t)(EDX));
  /* 121a0ae2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a0ae4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 121a0ae7 push eax */
  push32((uint32_t)(EAX));
  /* 121a0ae8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 121a0aed mov ecx, dword ptr [0x121c3910] */
  ECX = (r32((uint32_t)(0x121c3910)));
  /* 121a0af3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0af4 call dword ptr [0x121c6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6388))), 0x121a0afau);
  /* 121a0afa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0afd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0b01 je 0x121a0b09 */
  if (C.zf) goto L_121a0b09;
  /* 121a0b03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0b07 je 0x121a0b19 */
  if (C.zf) goto L_121a0b19;
L_121a0b09:;
  /* 121a0b09 call 0x1219f9e0 */
  push32(0x121a0b0eu); f_1219f9e0();
  /* 121a0b0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 121a0b14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0b17 jmp 0x121a0b1c */
  goto L_121a0b1c;
L_121a0b19:;
  /* 121a0b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a0b1c:;
  /* 121a0b1c mov esp, ebp */
  ESP = (EBP);
  /* 121a0b1e pop ebp */
  EBP = (pop32());
  /* 121a0b1f ret  */
  ESPCHK(0x121a0a80u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x121a0b20 (32 bytes, 18 insns) */
void f_121a0b20(void) {
  FTRACE(0x121a0b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0b20 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0b21 mov ebp, esp */
  EBP = (ESP);
  /* 121a0b23 push ebx */
  push32((uint32_t)(EBX));
  /* 121a0b24 push esi */
  push32((uint32_t)(ESI));
  /* 121a0b25 push edi */
  push32((uint32_t)(EDI));
  /* 121a0b26 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a0b2b push 0x121a0b38 */
  push32((uint32_t)(0x121a0b38u));
  /* 121a0b30 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 121a0b33 call 0x121a826c */
  push32(0x121a0b38u); f_121a826c();
  /* 121a0b38 pop ebp */
  EBP = (pop32());
  /* 121a0b39 pop edi */
  EDI = (pop32());
  /* 121a0b3a pop esi */
  ESI = (pop32());
  /* 121a0b3b pop ebx */
  EBX = (pop32());
  /* 121a0b3c mov esp, ebp */
  ESP = (EBP);
  /* 121a0b3e pop ebp */
  EBP = (pop32());
  /* 121a0b3f ret  */
  ESPCHK(0x121a0b20u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x121a0b62 (104 bytes, 33 insns) */
void f_121a0b62(void) {
  FTRACE(0x121a0b62u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0b62 push ebx */
  push32((uint32_t)(EBX));
  /* 121a0b63 push esi */
  push32((uint32_t)(ESI));
  /* 121a0b64 push edi */
  push32((uint32_t)(EDI));
  /* 121a0b65 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 121a0b69 push eax */
  push32((uint32_t)(EAX));
  /* 121a0b6a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 121a0b6c push 0x121a0b40 */
  push32((uint32_t)(0x121a0b40u));
  /* 121a0b71 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 121a0b78 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_121a0b7f:;
  /* 121a0b7f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 121a0b83 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a0b86 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 121a0b89 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0b8c je 0x121a0bbc */
  if (C.zf) goto L_121a0bbc;
  /* 121a0b8e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0b92 je 0x121a0bbc */
  if (C.zf) goto L_121a0bbc;
  /* 121a0b94 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 121a0b97 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 121a0b9a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 121a0b9e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 121a0ba1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0ba6 jne 0x121a0bba */
  if (!C.zf) goto L_121a0bba;
  /* 121a0ba8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 121a0bad mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 121a0bb1 call 0x121a0bf6 */
  push32(0x121a0bb6u); f_121a0bf6();
  /* 121a0bb6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x121a0bbau);
L_121a0bba:;
  /* 121a0bba jmp 0x121a0b7f */
  goto L_121a0b7f;
L_121a0bbc:;
  /* 121a0bbc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 121a0bc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0bc6 pop edi */
  EDI = (pop32());
  /* 121a0bc7 pop esi */
  ESI = (pop32());
  /* 121a0bc8 pop ebx */
  EBX = (pop32());
  /* 121a0bc9 ret  */
  ESPCHK(0x121a0b62u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf6 @ 0x121a0bf6 (24 bytes, 10 insns) */
void f_121a0bf6(void) {
  FTRACE(0x121a0bf6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 121a0bf7 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0bf8 mov ebx, 0x121c23b8 */
  EBX = (0x121c23b8u);
  /* 121a0bfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0c00 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 121a0c03 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 121a0c06 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 121a0c09 pop ecx */
  ECX = (pop32());
  /* 121a0c0a pop ebx */
  EBX = (pop32());
  /* 121a0c0b ret 4 */
  ESPCHK(0x121a0bf6u, _esp0);
  ESP += 8; return;
}

/* FUN_10010cd5 @ 0x121a0cd5 (27 bytes, 11 insns) */
void f_121a0cd5(void) {
  FTRACE(0x121a0cd5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0cd5 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0cd6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a0cda mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 121a0cdc mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 121a0cdf push eax */
  push32((uint32_t)(EAX));
  /* 121a0ce0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 121a0ce3 push eax */
  push32((uint32_t)(EAX));
  /* 121a0ce4 call 0x121a0b62 */
  push32(0x121a0ce9u); f_121a0b62();
  /* 121a0ce9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0cec pop ebp */
  EBP = (pop32());
  /* 121a0ced ret 4 */
  ESPCHK(0x121a0cd5u, _esp0);
  ESP += 8; return;
}

/* FUN_10010cf0 @ 0x121a0cf0 (482 bytes, 138 insns) */
void f_121a0cf0(void) {
  FTRACE(0x121a0cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0cf1 mov ebp, esp */
  EBP = (ESP);
  /* 121a0cf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0cf6 push esi */
  push32((uint32_t)(ESI));
  /* 121a0cf7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 121a0cfe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121a0d00 call 0x1219b510 */
  push32(0x121a0d05u); f_1219b510();
  /* 121a0d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a0d0f jmp 0x121a0d1a */
  goto L_121a0d1a;
L_121a0d11:;
  /* 121a0d11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d17 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121a0d1a:;
  /* 121a0d1a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0d1e jge 0x121a0ec0 */
  if ((C.sf==C.of)) goto L_121a0ec0;
  /* 121a0d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0d27 cmp dword ptr [ecx*4 + 0x121c50e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121c50e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0d2f je 0x121a0e26 */
  if (C.zf) goto L_121a0e26;
  /* 121a0d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0d38 mov eax, dword ptr [edx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a0d3f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0d42 jmp 0x121a0d4d */
  goto L_121a0d4d;
L_121a0d44:;
  /* 121a0d44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0d47 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a0d4d:;
  /* 121a0d4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0d50 mov eax, dword ptr [edx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a0d57 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d5c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0d5f jae 0x121a0e16 */
  if (!C.cf) goto L_121a0e16;
  /* 121a0d65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0d68 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121a0d6c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121a0d6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a0d71 jne 0x121a0e11 */
  if (!C.zf) goto L_121a0e11;
  /* 121a0d77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0d7a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0d7e jne 0x121a0db9 */
  if (!C.zf) goto L_121a0db9;
  /* 121a0d80 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121a0d82 call 0x1219b510 */
  push32(0x121a0d87u); f_1219b510();
  /* 121a0d87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0d8d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0d91 jne 0x121a0daf */
  if (!C.zf) goto L_121a0daf;
  /* 121a0d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0d96 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0d99 push edx */
  push32((uint32_t)(EDX));
  /* 121a0d9a call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x121a0da0u);
  /* 121a0da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0da3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a0da6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0da9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0dac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_121a0daf:;
  /* 121a0daf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121a0db1 call 0x1219b5b0 */
  push32(0x121a0db6u); f_1219b5b0();
  /* 121a0db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a0db9:;
  /* 121a0db9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0dbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0dbf push eax */
  push32((uint32_t)(EAX));
  /* 121a0dc0 call dword ptr [0x121c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6308))), 0x121a0dc6u);
  /* 121a0dc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0dc9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 121a0dcd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121a0dd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a0dd2 je 0x121a0de6 */
  if (C.zf) goto L_121a0de6;
  /* 121a0dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0dd7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0dda push eax */
  push32((uint32_t)(EAX));
  /* 121a0ddb call dword ptr [0x121c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6304))), 0x121a0de1u);
  /* 121a0de1 jmp 0x121a0d44 */
  goto L_121a0d44;
L_121a0de6:;
  /* 121a0de6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0de9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121a0def mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0df2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a0df5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0dfb sub eax, dword ptr [edx*4 + 0x121c50e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x121c50e0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a0e02 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a0e03 mov esi, 0x24 */
  ESI = (0x24u);
  /* 121a0e08 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 121a0e0a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0e0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a0e0f jmp 0x121a0e16 */
  goto L_121a0e16;
L_121a0e11:;
  /* 121a0e11 jmp 0x121a0d44 */
  goto L_121a0d44;
L_121a0e16:;
  /* 121a0e16 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0e1a je 0x121a0e21 */
  if (C.zf) goto L_121a0e21;
  /* 121a0e1c jmp 0x121a0ec0 */
  goto L_121a0ec0;
L_121a0e21:;
  /* 121a0e21 jmp 0x121a0ebb */
  goto L_121a0ebb;
L_121a0e26:;
  /* 121a0e26 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 121a0e28 push 0x121bf0cc */
  push32((uint32_t)(0x121bf0ccu));
  /* 121a0e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a0e2f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 121a0e34 call 0x12197b10 */
  push32(0x121a0e39u); f_12197b10();
  /* 121a0e39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0e3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a0e3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0e43 je 0x121a0eb9 */
  if (C.zf) goto L_121a0eb9;
  /* 121a0e45 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0e48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e4b mov dword ptr [eax*4 + 0x121c50e0], ecx */
  w32((uint32_t)(EAX*4 + 0x121c50e0), (ECX));
  /* 121a0e52 mov edx, dword ptr [0x121c521c] */
  EDX = (r32((uint32_t)(0x121c521c)));
  /* 121a0e58 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0e5b mov dword ptr [0x121c521c], edx */
  w32((uint32_t)(0x121c521c), (EDX));
  /* 121a0e61 jmp 0x121a0e6c */
  goto L_121a0e6c;
L_121a0e63:;
  /* 121a0e63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e66 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a0e6c:;
  /* 121a0e6c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0e6f mov edx, dword ptr [ecx*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a0e76 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0e7c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0e7f jae 0x121a0ea4 */
  if (!C.cf) goto L_121a0ea4;
  /* 121a0e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e84 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 121a0e88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e8b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121a0e91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e94 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 121a0e98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a0e9b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 121a0ea2 jmp 0x121a0e63 */
  goto L_121a0e63;
L_121a0ea4:;
  /* 121a0ea4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a0ea7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a0eaa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a0ead mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0eb0 push edx */
  push32((uint32_t)(EDX));
  /* 121a0eb1 call 0x121a1200 */
  push32(0x121a0eb6u); f_121a1200();
  /* 121a0eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a0eb9:;
  /* 121a0eb9 jmp 0x121a0ec0 */
  goto L_121a0ec0;
L_121a0ebb:;
  /* 121a0ebb jmp 0x121a0d11 */
  goto L_121a0d11;
L_121a0ec0:;
  /* 121a0ec0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121a0ec2 call 0x1219b5b0 */
  push32(0x121a0ec7u); f_1219b5b0();
  /* 121a0ec7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a0eca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a0ecd pop esi */
  ESI = (pop32());
  /* 121a0ece mov esp, ebp */
  ESP = (EBP);
  /* 121a0ed0 pop ebp */
  EBP = (pop32());
  /* 121a0ed1 ret  */
  ESPCHK(0x121a0cf0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x121a0ee0 (183 bytes, 57 insns) */
void f_121a0ee0(void) {
  FTRACE(0x121a0ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0ee1 mov ebp, esp */
  EBP = (ESP);
  /* 121a0ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0ee7 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0eed jae 0x121a0f7a */
  if (!C.cf) goto L_121a0f7a;
  /* 121a0ef3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0ef6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a0ef9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0efc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a0eff imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0f02 mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a0f09 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0f0d jne 0x121a0f7a */
  if (!C.zf) goto L_121a0f7a;
  /* 121a0f0f cmp dword ptr [0x121c36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0f16 jne 0x121a0f5a */
  if (!C.zf) goto L_121a0f5a;
  /* 121a0f18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0f1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a0f1e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0f22 je 0x121a0f32 */
  if (C.zf) goto L_121a0f32;
  /* 121a0f24 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0f28 je 0x121a0f40 */
  if (C.zf) goto L_121a0f40;
  /* 121a0f2a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0f2e je 0x121a0f4e */
  if (C.zf) goto L_121a0f4e;
  /* 121a0f30 jmp 0x121a0f5a */
  goto L_121a0f5a;
L_121a0f32:;
  /* 121a0f32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0f35 push edx */
  push32((uint32_t)(EDX));
  /* 121a0f36 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 121a0f38 call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a0f3eu);
  /* 121a0f3e jmp 0x121a0f5a */
  goto L_121a0f5a;
L_121a0f40:;
  /* 121a0f40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0f43 push eax */
  push32((uint32_t)(EAX));
  /* 121a0f44 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 121a0f46 call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a0f4cu);
  /* 121a0f4c jmp 0x121a0f5a */
  goto L_121a0f5a;
L_121a0f4e:;
  /* 121a0f4e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0f51 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0f52 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 121a0f54 call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a0f5au);
L_121a0f5a:;
  /* 121a0f5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0f5d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121a0f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0f63 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0f66 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0f69 mov ecx, dword ptr [edx*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a0f70 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a0f73 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 121a0f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a0f78 jmp 0x121a0f93 */
  goto L_121a0f93;
L_121a0f7a:;
  /* 121a0f7a call 0x1219f9e0 */
  push32(0x121a0f7fu); f_1219f9e0();
  /* 121a0f7f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a0f85 call 0x1219f9f0 */
  push32(0x121a0f8au); f_1219f9f0();
  /* 121a0f8a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a0f90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121a0f93:;
  /* 121a0f93 mov esp, ebp */
  ESP = (EBP);
  /* 121a0f95 pop ebp */
  EBP = (pop32());
  /* 121a0f96 ret  */
  ESPCHK(0x121a0ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010fa0 @ 0x121a0fa0 (216 bytes, 63 insns) */
void f_121a0fa0(void) {
  FTRACE(0x121a0fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a0fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a0fa1 mov ebp, esp */
  EBP = (ESP);
  /* 121a0fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a0fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0fa7 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0fad jae 0x121a105b */
  if (!C.cf) goto L_121a105b;
  /* 121a0fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0fb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a0fb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0fbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a0fbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0fc2 mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a0fc9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a0fce and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a0fd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a0fd3 je 0x121a105b */
  if (C.zf) goto L_121a105b;
  /* 121a0fd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0fdc sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121a0fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a0fe2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121a0fe5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a0fe8 mov ecx, dword ptr [edx*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a0fef cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0ff3 je 0x121a105b */
  if (C.zf) goto L_121a105b;
  /* 121a0ff5 cmp dword ptr [0x121c36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a0ffc jne 0x121a103a */
  if (!C.zf) goto L_121a103a;
  /* 121a0ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1001 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a1004 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1008 je 0x121a1018 */
  if (C.zf) goto L_121a1018;
  /* 121a100a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a100e je 0x121a1024 */
  if (C.zf) goto L_121a1024;
  /* 121a1010 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1014 je 0x121a1030 */
  if (C.zf) goto L_121a1030;
  /* 121a1016 jmp 0x121a103a */
  goto L_121a103a;
L_121a1018:;
  /* 121a1018 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a101a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 121a101c call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a1022u);
  /* 121a1022 jmp 0x121a103a */
  goto L_121a103a;
L_121a1024:;
  /* 121a1024 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a1026 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 121a1028 call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a102eu);
  /* 121a102e jmp 0x121a103a */
  goto L_121a103a;
L_121a1030:;
  /* 121a1030 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a1032 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 121a1034 call dword ptr [0x121c62d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62d0))), 0x121a103au);
L_121a103a:;
  /* 121a103a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a103d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a1040 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1043 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a1046 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1049 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a1050 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 121a1057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1059 jmp 0x121a1074 */
  goto L_121a1074;
L_121a105b:;
  /* 121a105b call 0x1219f9e0 */
  push32(0x121a1060u); f_1219f9e0();
  /* 121a1060 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a1066 call 0x1219f9f0 */
  push32(0x121a106bu); f_1219f9f0();
  /* 121a106b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a1071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121a1074:;
  /* 121a1074 mov esp, ebp */
  ESP = (EBP);
  /* 121a1076 pop ebp */
  EBP = (pop32());
  /* 121a1077 ret  */
  ESPCHK(0x121a0fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011080 @ 0x121a1080 (102 bytes, 30 insns) */
void f_121a1080(void) {
  FTRACE(0x121a1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1080 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1081 mov ebp, esp */
  EBP = (ESP);
  /* 121a1083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1086 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a108c jae 0x121a10cb */
  if (!C.cf) goto L_121a10cb;
  /* 121a108e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1091 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a1094 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1097 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a109a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a109d mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a10a4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a10a9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a10ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a10ae je 0x121a10cb */
  if (C.zf) goto L_121a10cb;
  /* 121a10b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a10b3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 121a10b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a10b9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 121a10bc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a10bf mov ecx, dword ptr [edx*4 + 0x121c50e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x121c50e0)));
  /* 121a10c6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 121a10c9 jmp 0x121a10e4 */
  goto L_121a10e4;
L_121a10cb:;
  /* 121a10cb call 0x1219f9e0 */
  push32(0x121a10d0u); f_1219f9e0();
  /* 121a10d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a10d6 call 0x1219f9f0 */
  push32(0x121a10dbu); f_1219f9f0();
  /* 121a10db mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a10e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_121a10e4:;
  /* 121a10e4 pop ebp */
  EBP = (pop32());
  /* 121a10e5 ret  */
  ESPCHK(0x121a1080u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x121a10f0 (260 bytes, 83 insns) */
void f_121a10f0(void) {
  FTRACE(0x121a10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a10f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a10f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a10f6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a10fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a10fd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 121a1100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1102 je 0x121a110d */
  if (C.zf) goto L_121a110d;
  /* 121a1104 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a1107 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 121a110a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_121a110d:;
  /* 121a110d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1110 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 121a1116 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a1118 je 0x121a1122 */
  if (C.zf) goto L_121a1122;
  /* 121a111a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a111d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 121a111f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_121a1122:;
  /* 121a1122 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1125 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 121a112b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a112d je 0x121a1138 */
  if (C.zf) goto L_121a1138;
  /* 121a112f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a1132 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 121a1135 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_121a1138:;
  /* 121a1138 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a113b push eax */
  push32((uint32_t)(EAX));
  /* 121a113c call dword ptr [0x121c6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6368))), 0x121a1142u);
  /* 121a1142 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a1145 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1149 jne 0x121a1162 */
  if (!C.zf) goto L_121a1162;
  /* 121a114b call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a1151u);
  /* 121a1151 push eax */
  push32((uint32_t)(EAX));
  /* 121a1152 call 0x1219f940 */
  push32(0x121a1157u); f_1219f940();
  /* 121a1157 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a115a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a115d jmp 0x121a11f0 */
  goto L_121a11f0;
L_121a1162:;
  /* 121a1162 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1166 jne 0x121a1173 */
  if (!C.zf) goto L_121a1173;
  /* 121a1168 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a116b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 121a116e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 121a1171 jmp 0x121a1182 */
  goto L_121a1182;
L_121a1173:;
  /* 121a1173 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1177 jne 0x121a1182 */
  if (!C.zf) goto L_121a1182;
  /* 121a1179 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a117c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 121a117f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_121a1182:;
  /* 121a1182 call 0x121a0cf0 */
  push32(0x121a1187u); f_121a0cf0();
  /* 121a1187 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a118a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a118e jne 0x121a11ab */
  if (!C.zf) goto L_121a11ab;
  /* 121a1190 call 0x1219f9e0 */
  push32(0x121a1195u); f_1219f9e0();
  /* 121a1195 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 121a119b call 0x1219f9f0 */
  push32(0x121a11a0u); f_1219f9f0();
  /* 121a11a0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a11a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a11a9 jmp 0x121a11f0 */
  goto L_121a11f0;
L_121a11ab:;
  /* 121a11ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a11ae push eax */
  push32((uint32_t)(EAX));
  /* 121a11af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a11b2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a11b3 call 0x121a0ee0 */
  push32(0x121a11b8u); f_121a0ee0();
  /* 121a11b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a11bb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a11be or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 121a11c1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 121a11c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a11c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a11ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a11cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a11d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a11d3 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a11da mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 121a11dd mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 121a11e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a11e4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a11e5 call 0x121a1290 */
  push32(0x121a11eau); f_121a1290();
  /* 121a11ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a11ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a11f0:;
  /* 121a11f0 mov esp, ebp */
  ESP = (EBP);
  /* 121a11f2 pop ebp */
  EBP = (pop32());
  /* 121a11f3 ret  */
  ESPCHK(0x121a10f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011200 @ 0x121a1200 (134 bytes, 44 insns) */
void f_121a1200(void) {
  FTRACE(0x121a1200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1200 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1201 mov ebp, esp */
  EBP = (ESP);
  /* 121a1203 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1207 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a120a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a120d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a1210 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1213 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a121a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a121c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121a121f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1222 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1226 jne 0x121a1261 */
  if (!C.zf) goto L_121a1261;
  /* 121a1228 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121a122a call 0x1219b510 */
  push32(0x121a122fu); f_1219b510();
  /* 121a122f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1235 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1239 jne 0x121a1257 */
  if (!C.zf) goto L_121a1257;
  /* 121a123b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a123e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1241 push edx */
  push32((uint32_t)(EDX));
  /* 121a1242 call dword ptr [0x121c63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c63a4))), 0x121a1248u);
  /* 121a1248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a124b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a124e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1254 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_121a1257:;
  /* 121a1257 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121a1259 call 0x1219b5b0 */
  push32(0x121a125eu); f_1219b5b0();
  /* 121a125e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a1261:;
  /* 121a1261 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1264 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a1267 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a126a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a126d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1270 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a1277 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 121a127b push eax */
  push32((uint32_t)(EAX));
  /* 121a127c call dword ptr [0x121c6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6308))), 0x121a1282u);
  /* 121a1282 mov esp, ebp */
  ESP = (EBP);
  /* 121a1284 pop ebp */
  EBP = (pop32());
  /* 121a1285 ret  */
  ESPCHK(0x121a1200u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x121a1290 (38 bytes, 13 insns) */
void f_121a1290(void) {
  FTRACE(0x121a1290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1290 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1291 mov ebp, esp */
  EBP = (ESP);
  /* 121a1293 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1296 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a1299 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a129c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a129f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a12a2 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a12a9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 121a12ad push eax */
  push32((uint32_t)(EAX));
  /* 121a12ae call dword ptr [0x121c6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6304))), 0x121a12b4u);
  /* 121a12b4 pop ebp */
  EBP = (pop32());
  /* 121a12b5 ret  */
  ESPCHK(0x121a1290u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x121a12c0 (218 bytes, 63 insns) */
void f_121a12c0(void) {
  FTRACE(0x121a12c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a12c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a12c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a12c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a12c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a12cd push 2 */
  push32((uint32_t)(0x2u));
  /* 121a12cf call 0x1219b510 */
  push32(0x121a12d4u); f_1219b510();
  /* 121a12d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a12d7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 121a12de jmp 0x121a12e9 */
  goto L_121a12e9;
L_121a12e0:;
  /* 121a12e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a12e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a12e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a12e9:;
  /* 121a12e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a12ec cmp ecx, dword ptr [0x121c4de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c4de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a12f2 jge 0x121a1389 */
  if ((C.sf==C.of)) goto L_121a1389;
  /* 121a12f8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a12fb mov eax, dword ptr [0x121c3a90] */
  EAX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1300 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1304 je 0x121a1384 */
  if (C.zf) goto L_121a1384;
  /* 121a1306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1309 mov edx, dword ptr [0x121c3a90] */
  EDX = (r32((uint32_t)(0x121c3a90)));
  /* 121a130f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121a1312 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a1315 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 121a131b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a131d je 0x121a1341 */
  if (C.zf) goto L_121a1341;
  /* 121a131f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1322 mov eax, dword ptr [0x121c3a90] */
  EAX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1327 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a132a push ecx */
  push32((uint32_t)(ECX));
  /* 121a132b call 0x121a20b0 */
  push32(0x121a1330u); f_121a20b0();
  /* 121a1330 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1333 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1336 je 0x121a1341 */
  if (C.zf) goto L_121a1341;
  /* 121a1338 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a133b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a133e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121a1341:;
  /* 121a1341 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1345 jl 0x121a1384 */
  if ((C.sf!=C.of)) goto L_121a1384;
  /* 121a1347 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a134a mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1350 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a1353 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1356 push edx */
  push32((uint32_t)(EDX));
  /* 121a1357 call dword ptr [0x121c6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c6370))), 0x121a135du);
  /* 121a135d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a135f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1362 mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1368 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a136b push edx */
  push32((uint32_t)(EDX));
  /* 121a136c call 0x121985a0 */
  push32(0x121a1371u); f_121985a0();
  /* 121a1371 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1377 mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a137d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_121a1384:;
  /* 121a1384 jmp 0x121a12e0 */
  goto L_121a12e0;
L_121a1389:;
  /* 121a1389 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a138b call 0x1219b5b0 */
  push32(0x121a1390u); f_1219b5b0();
  /* 121a1390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1396 mov esp, ebp */
  ESP = (EBP);
  /* 121a1398 pop ebp */
  EBP = (pop32());
  /* 121a1399 ret  */
  ESPCHK(0x121a12c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x121a13a0 (68 bytes, 26 insns) */
void f_121a13a0(void) {
  FTRACE(0x121a13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a13a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a13a1 mov ebp, esp */
  EBP = (ESP);
  /* 121a13a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a13a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a13a8 jne 0x121a13b6 */
  if (!C.zf) goto L_121a13b6;
  /* 121a13aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121a13ac call 0x121a1510 */
  push32(0x121a13b1u); f_121a1510();
  /* 121a13b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a13b4 jmp 0x121a13e0 */
  goto L_121a13e0;
L_121a13b6:;
  /* 121a13b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a13b9 push eax */
  push32((uint32_t)(EAX));
  /* 121a13ba call 0x121a0920 */
  push32(0x121a13bfu); f_121a0920();
  /* 121a13bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a13c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a13c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a13c6 call 0x121a13f0 */
  push32(0x121a13cbu); f_121a13f0();
  /* 121a13cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a13ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a13d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a13d4 push edx */
  push32((uint32_t)(EDX));
  /* 121a13d5 call 0x121a0990 */
  push32(0x121a13dau); f_121a0990();
  /* 121a13da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a13dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a13e0:;
  /* 121a13e0 mov esp, ebp */
  ESP = (EBP);
  /* 121a13e2 pop ebp */
  EBP = (pop32());
  /* 121a13e3 ret  */
  ESPCHK(0x121a13a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100113f0 @ 0x121a13f0 (65 bytes, 26 insns) */
void f_121a13f0(void) {
  FTRACE(0x121a13f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a13f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a13f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a13f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a13f6 push eax */
  push32((uint32_t)(EAX));
  /* 121a13f7 call 0x121a1440 */
  push32(0x121a13fcu); f_121a1440();
  /* 121a13fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a13ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1401 je 0x121a1408 */
  if (C.zf) goto L_121a1408;
  /* 121a1403 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a1406 jmp 0x121a142f */
  goto L_121a142f;
L_121a1408:;
  /* 121a1408 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a140b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a140e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 121a1414 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a1416 je 0x121a142d */
  if (C.zf) goto L_121a142d;
  /* 121a1418 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a141b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a141e push ecx */
  push32((uint32_t)(ECX));
  /* 121a141f call 0x121a2200 */
  push32(0x121a1424u); f_121a2200();
  /* 121a1424 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1427 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a1429 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a142b jmp 0x121a142f */
  goto L_121a142f;
L_121a142d:;
  /* 121a142d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a142f:;
  /* 121a142f pop ebp */
  EBP = (pop32());
  /* 121a1430 ret  */
  ESPCHK(0x121a13f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011440 @ 0x121a1440 (183 bytes, 62 insns) */
void f_121a1440(void) {
  FTRACE(0x121a1440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1440 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1441 mov ebp, esp */
  EBP = (ESP);
  /* 121a1443 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a144d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1450 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a1453 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1456 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a1459 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 121a145c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a145f jne 0x121a14db */
  if (!C.zf) goto L_121a14db;
  /* 121a1461 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1464 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a1467 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 121a146d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a146f je 0x121a14db */
  if (C.zf) goto L_121a14db;
  /* 121a1471 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1474 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1477 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 121a1479 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a147c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a147f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1483 jle 0x121a14db */
  if ((C.zf||C.sf!=C.of)) goto L_121a14db;
  /* 121a1485 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1488 push edx */
  push32((uint32_t)(EDX));
  /* 121a1489 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a148c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a148f push ecx */
  push32((uint32_t)(ECX));
  /* 121a1490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1493 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121a1496 push eax */
  push32((uint32_t)(EAX));
  /* 121a1497 call 0x121a03b0 */
  push32(0x121a149cu); f_121a03b0();
  /* 121a149c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a149f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a14a2 jne 0x121a14c5 */
  if (!C.zf) goto L_121a14c5;
  /* 121a14a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14a7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a14aa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 121a14b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a14b2 je 0x121a14c3 */
  if (C.zf) goto L_121a14c3;
  /* 121a14b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14b7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a14ba and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 121a14bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14c0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_121a14c3:;
  /* 121a14c3 jmp 0x121a14db */
  goto L_121a14db;
L_121a14c5:;
  /* 121a14c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a14cb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 121a14ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14d1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 121a14d4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a14db:;
  /* 121a14db mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14e1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121a14e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a14e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a14e9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 121a14f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a14f3 mov esp, ebp */
  ESP = (EBP);
  /* 121a14f5 pop ebp */
  EBP = (pop32());
  /* 121a14f6 ret  */
  ESPCHK(0x121a1440u, _esp0);
  ESP += 4; return;
}

/* FUN_10011500 @ 0x121a1500 (15 bytes, 7 insns) */
void f_121a1500(void) {
  FTRACE(0x121a1500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1500 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1501 mov ebp, esp */
  EBP = (ESP);
  /* 121a1503 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a1505 call 0x121a1510 */
  push32(0x121a150au); f_121a1510();
  /* 121a150a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a150d pop ebp */
  EBP = (pop32());
  /* 121a150e ret  */
  ESPCHK(0x121a1500u, _esp0);
  ESP += 4; return;
}

/* FUN_10011510 @ 0x121a1510 (319 bytes, 94 insns) */
void f_121a1510(void) {
  FTRACE(0x121a1510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1510 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1511 mov ebp, esp */
  EBP = (ESP);
  /* 121a1513 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1516 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a151d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a1524 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1526 call 0x1219b510 */
  push32(0x121a152bu); f_1219b510();
  /* 121a152b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a152e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a1535 jmp 0x121a1540 */
  goto L_121a1540;
L_121a1537:;
  /* 121a1537 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a153a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a153d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121a1540:;
  /* 121a1540 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1543 cmp ecx, dword ptr [0x121c4de0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121c4de0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1549 jge 0x121a1633 */
  if ((C.sf==C.of)) goto L_121a1633;
  /* 121a154f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1552 mov eax, dword ptr [0x121c3a90] */
  EAX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1557 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a155b je 0x121a162e */
  if (C.zf) goto L_121a162e;
  /* 121a1561 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1564 mov edx, dword ptr [0x121c3a90] */
  EDX = (r32((uint32_t)(0x121c3a90)));
  /* 121a156a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121a156d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a1570 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 121a1576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a1578 je 0x121a162e */
  if (C.zf) goto L_121a162e;
  /* 121a157e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1581 mov eax, dword ptr [0x121c3a90] */
  EAX = (r32((uint32_t)(0x121c3a90)));
  /* 121a1586 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a1589 push ecx */
  push32((uint32_t)(ECX));
  /* 121a158a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a158d push edx */
  push32((uint32_t)(EDX));
  /* 121a158e call 0x121a0960 */
  push32(0x121a1593u); f_121a0960();
  /* 121a1593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1596 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1599 mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a159f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a15a2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121a15a5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 121a15aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a15ac je 0x121a1615 */
  if (C.zf) goto L_121a1615;
  /* 121a15ae cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a15b2 jne 0x121a15d9 */
  if (!C.zf) goto L_121a15d9;
  /* 121a15b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a15b7 mov edx, dword ptr [0x121c3a90] */
  EDX = (r32((uint32_t)(0x121c3a90)));
  /* 121a15bd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 121a15c0 push eax */
  push32((uint32_t)(EAX));
  /* 121a15c1 call 0x121a13f0 */
  push32(0x121a15c6u); f_121a13f0();
  /* 121a15c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a15c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a15cc je 0x121a15d7 */
  if (C.zf) goto L_121a15d7;
  /* 121a15ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a15d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a15d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a15d7:;
  /* 121a15d7 jmp 0x121a1615 */
  goto L_121a1615;
L_121a15d9:;
  /* 121a15d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a15dd jne 0x121a1615 */
  if (!C.zf) goto L_121a1615;
  /* 121a15df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a15e2 mov eax, dword ptr [0x121c3a90] */
  EAX = (r32((uint32_t)(0x121c3a90)));
  /* 121a15e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a15ea mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a15ed and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 121a15f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a15f2 je 0x121a1615 */
  if (C.zf) goto L_121a1615;
  /* 121a15f4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a15f7 mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a15fd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a1600 push edx */
  push32((uint32_t)(EDX));
  /* 121a1601 call 0x121a13f0 */
  push32(0x121a1606u); f_121a13f0();
  /* 121a1606 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1609 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a160c jne 0x121a1615 */
  if (!C.zf) goto L_121a1615;
  /* 121a160e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_121a1615:;
  /* 121a1615 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1618 mov ecx, dword ptr [0x121c3a90] */
  ECX = (r32((uint32_t)(0x121c3a90)));
  /* 121a161e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 121a1621 push edx */
  push32((uint32_t)(EDX));
  /* 121a1622 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1625 push eax */
  push32((uint32_t)(EAX));
  /* 121a1626 call 0x121a09d0 */
  push32(0x121a162bu); f_121a09d0();
  /* 121a162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a162e:;
  /* 121a162e jmp 0x121a1537 */
  goto L_121a1537;
L_121a1633:;
  /* 121a1633 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1635 call 0x1219b5b0 */
  push32(0x121a163au); f_1219b5b0();
  /* 121a163a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a163d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1641 jne 0x121a1648 */
  if (!C.zf) goto L_121a1648;
  /* 121a1643 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1646 jmp 0x121a164b */
  goto L_121a164b;
L_121a1648:;
  /* 121a1648 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a164b:;
  /* 121a164b mov esp, ebp */
  ESP = (EBP);
  /* 121a164d pop ebp */
  EBP = (pop32());
  /* 121a164e ret  */
  ESPCHK(0x121a1510u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x121a1650 (15 bytes, 7 insns) */
void f_121a1650(void) {
  FTRACE(0x121a1650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1650 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1651 mov ebp, esp */
  EBP = (ESP);
  /* 121a1653 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1655 call 0x12196a80 */
  push32(0x121a165au); f_12196a80();
  /* 121a165a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a165d pop ebp */
  EBP = (pop32());
  /* 121a165e ret  */
  ESPCHK(0x121a1650u, _esp0);
  ESP += 4; return;
}

/* FUN_10011660 @ 0x121a1660 (1007 bytes, 269 insns) */
void f_121a1660(void) {
  FTRACE(0x121a1660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1660 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1661 mov ebp, esp */
  EBP = (ESP);
  /* 121a1663 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1669 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a166d jl 0x121a1675 */
  if ((C.sf!=C.of)) goto L_121a1675;
  /* 121a166f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1673 jle 0x121a167c */
  if ((C.zf||C.sf!=C.of)) goto L_121a167c;
L_121a1675:;
  /* 121a1675 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1677 jmp 0x121a1a4b */
  goto L_121a1a4b;
L_121a167c:;
  /* 121a167c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a167e call 0x1219b510 */
  push32(0x121a1683u); f_1219b510();
  /* 121a1683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1686 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a168d mov eax, dword ptr [0x121c3a7c] */
  EAX = (r32((uint32_t)(0x121c3a7c)));
  /* 121a1692 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1695 mov dword ptr [0x121c3a7c], eax */
  w32((uint32_t)(0x121c3a7c), (EAX));
L_121a169a:;
  /* 121a169a cmp dword ptr [0x121c3a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a16a1 je 0x121a16ad */
  if (C.zf) goto L_121a16ad;
  /* 121a16a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a16a5 call dword ptr [0x121c62c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62c0))), 0x121a16abu);
  /* 121a16ab jmp 0x121a169a */
  goto L_121a169a;
L_121a16ad:;
  /* 121a16ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a16b1 je 0x121a16f1 */
  if (C.zf) goto L_121a16f1;
  /* 121a16b3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a16b7 je 0x121a16d1 */
  if (C.zf) goto L_121a16d1;
  /* 121a16b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a16bc push ecx */
  push32((uint32_t)(ECX));
  /* 121a16bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a16c0 push edx */
  push32((uint32_t)(EDX));
  /* 121a16c1 call 0x121a1a50 */
  push32(0x121a16c6u); f_121a1a50();
  /* 121a16c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a16c9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 121a16cf jmp 0x121a16e3 */
  goto L_121a16e3;
L_121a16d1:;
  /* 121a16d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a16d4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a16d7 mov ecx, dword ptr [eax + 0x121c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x121c24dc)));
  /* 121a16dd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_121a16e3:;
  /* 121a16e3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 121a16e9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a16ec jmp 0x121a1a2b */
  goto L_121a1a2b;
L_121a16f1:;
  /* 121a16f1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 121a16f8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a16ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1703 je 0x121a1a23 */
  if (C.zf) goto L_121a1a23;
  /* 121a1709 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a170c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a170f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1712 jne 0x121a1934 */
  if (!C.zf) goto L_121a1934;
  /* 121a1718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a171b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121a171f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1722 jne 0x121a1934 */
  if (!C.zf) goto L_121a1934;
  /* 121a1728 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a172b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 121a172f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1732 jne 0x121a1934 */
  if (!C.zf) goto L_121a1934;
  /* 121a1738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a173b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_121a1741:;
  /* 121a1741 push 0x121bf11c */
  push32((uint32_t)(0x121bf11cu));
  /* 121a1746 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a174c push ecx */
  push32((uint32_t)(ECX));
  /* 121a174d call 0x121a38b0 */
  push32(0x121a1752u); f_121a38b0();
  /* 121a1752 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1755 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 121a175b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1762 je 0x121a178d */
  if (C.zf) goto L_121a178d;
  /* 121a1764 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a176a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1770 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 121a1776 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a177d je 0x121a178d */
  if (C.zf) goto L_121a178d;
  /* 121a177f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a1785 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a1788 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a178b jne 0x121a17b3 */
  if (!C.zf) goto L_121a17b3;
L_121a178d:;
  /* 121a178d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1791 je 0x121a17ac */
  if (C.zf) goto L_121a17ac;
  /* 121a1793 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a1795 call 0x1219b5b0 */
  push32(0x121a179au); f_1219b5b0();
  /* 121a179a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a179d mov edx, dword ptr [0x121c3a7c] */
  EDX = (r32((uint32_t)(0x121c3a7c)));
  /* 121a17a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a17a6 mov dword ptr [0x121c3a7c], edx */
  w32((uint32_t)(0x121c3a7c), (EDX));
L_121a17ac:;
  /* 121a17ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a17ae jmp 0x121a1a4b */
  goto L_121a1a4b;
L_121a17b3:;
  /* 121a17b3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 121a17ba jmp 0x121a17c5 */
  goto L_121a17c5;
L_121a17bc:;
  /* 121a17bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a17bf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a17c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_121a17c5:;
  /* 121a17c5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a17c9 jg 0x121a1813 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a1813;
  /* 121a17cb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121a17d1 push ecx */
  push32((uint32_t)(ECX));
  /* 121a17d2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a17d8 push edx */
  push32((uint32_t)(EDX));
  /* 121a17d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a17dc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a17df mov ecx, dword ptr [eax + 0x121c24d8] */
  ECX = (r32((uint32_t)(EAX + 0x121c24d8)));
  /* 121a17e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a17e6 call 0x121a3870 */
  push32(0x121a17ebu); f_121a3870();
  /* 121a17eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a17ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a17f0 jne 0x121a1811 */
  if (!C.zf) goto L_121a1811;
  /* 121a17f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a17f5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a17f8 mov eax, dword ptr [edx + 0x121c24d8] */
  EAX = (r32((uint32_t)(EDX + 0x121c24d8)));
  /* 121a17fe push eax */
  push32((uint32_t)(EAX));
  /* 121a17ff call 0x1219a940 */
  push32(0x121a1804u); f_1219a940();
  /* 121a1804 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1807 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a180d jne 0x121a1811 */
  if (!C.zf) goto L_121a1811;
  /* 121a180f jmp 0x121a1813 */
  goto L_121a1813;
L_121a1811:;
  /* 121a1811 jmp 0x121a17bc */
  goto L_121a17bc;
L_121a1813:;
  /* 121a1813 push 0x121bf118 */
  push32((uint32_t)(0x121bf118u));
  /* 121a1818 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a181e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1821 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 121a1827 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a182d push edx */
  push32((uint32_t)(EDX));
  /* 121a182e call 0x121a3830 */
  push32(0x121a1833u); f_121a3830();
  /* 121a1833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1836 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 121a183c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1843 jne 0x121a1879 */
  if (!C.zf) goto L_121a1879;
  /* 121a1845 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a184b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a184e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1851 je 0x121a1879 */
  if (C.zf) goto L_121a1879;
  /* 121a1853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1857 je 0x121a1872 */
  if (C.zf) goto L_121a1872;
  /* 121a1859 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a185b call 0x1219b5b0 */
  push32(0x121a1860u); f_1219b5b0();
  /* 121a1860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1863 mov edx, dword ptr [0x121c3a7c] */
  EDX = (r32((uint32_t)(0x121c3a7c)));
  /* 121a1869 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a186c mov dword ptr [0x121c3a7c], edx */
  w32((uint32_t)(0x121c3a7c), (EDX));
L_121a1872:;
  /* 121a1872 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1874 jmp 0x121a1a4b */
  goto L_121a1a4b;
L_121a1879:;
  /* 121a1879 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a187d jg 0x121a18ca */
  if ((!C.zf&&C.sf==C.of)) goto L_121a18ca;
  /* 121a187f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121a1885 push eax */
  push32((uint32_t)(EAX));
  /* 121a1886 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a188c push ecx */
  push32((uint32_t)(ECX));
  /* 121a188d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 121a1893 push edx */
  push32((uint32_t)(EDX));
  /* 121a1894 call 0x1219b330 */
  push32(0x121a1899u); f_1219b330();
  /* 121a1899 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a189c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 121a18a2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 121a18aa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 121a18b0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a18b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a18b4 push edx */
  push32((uint32_t)(EDX));
  /* 121a18b5 call 0x121a1a50 */
  push32(0x121a18bau); f_121a1a50();
  /* 121a18ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a18bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a18bf je 0x121a18ca */
  if (C.zf) goto L_121a18ca;
  /* 121a18c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a18c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a18c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121a18ca:;
  /* 121a18ca mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a18d0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a18d6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 121a18dc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a18e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a18e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a18e7 je 0x121a18f8 */
  if (C.zf) goto L_121a18f8;
  /* 121a18e9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a18ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a18f2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_121a18f8:;
  /* 121a18f8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 121a18fe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a1901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1903 jne 0x121a1741 */
  if (!C.zf) goto L_121a1741;
  /* 121a1909 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a190d je 0x121a191c */
  if (C.zf) goto L_121a191c;
  /* 121a190f call 0x121a1bf0 */
  push32(0x121a1914u); f_121a1bf0();
  /* 121a1914 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 121a191a jmp 0x121a1926 */
  goto L_121a1926;
L_121a191c:;
  /* 121a191c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_121a1926:;
  /* 121a1926 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 121a192c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a192f jmp 0x121a1a21 */
  goto L_121a1a21;
L_121a1934:;
  /* 121a1934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1937 push edx */
  push32((uint32_t)(EDX));
  /* 121a1938 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a193a push 0 */
  push32((uint32_t)(0x0u));
  /* 121a193c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 121a1942 push eax */
  push32((uint32_t)(EAX));
  /* 121a1943 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1946 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1947 call 0x121a1cf0 */
  push32(0x121a194cu); f_121a1cf0();
  /* 121a194c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a194f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a1952 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1956 je 0x121a1a21 */
  if (C.zf) goto L_121a1a21;
  /* 121a195c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a1963 jmp 0x121a196e */
  goto L_121a196e;
L_121a1965:;
  /* 121a1965 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a1968 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a196b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a196e:;
  /* 121a196e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1972 jg 0x121a19d0 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a19d0;
  /* 121a1974 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1978 je 0x121a19ce */
  if (C.zf) goto L_121a19ce;
  /* 121a197a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a197d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1980 mov ecx, dword ptr [eax + 0x121c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x121c24dc)));
  /* 121a1986 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1987 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 121a198d push edx */
  push32((uint32_t)(EDX));
  /* 121a198e call 0x121a37a0 */
  push32(0x121a1993u); f_121a37a0();
  /* 121a1993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1996 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1998 je 0x121a19c5 */
  if (C.zf) goto L_121a19c5;
  /* 121a199a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 121a19a0 push eax */
  push32((uint32_t)(EAX));
  /* 121a19a1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a19a4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a19a5 call 0x121a1a50 */
  push32(0x121a19aau); f_121a1a50();
  /* 121a19aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a19ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a19af je 0x121a19bc */
  if (C.zf) goto L_121a19bc;
  /* 121a19b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a19b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a19b7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121a19ba jmp 0x121a19c3 */
  goto L_121a19c3;
L_121a19bc:;
  /* 121a19bc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_121a19c3:;
  /* 121a19c3 jmp 0x121a19ce */
  goto L_121a19ce;
L_121a19c5:;
  /* 121a19c5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a19c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a19cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121a19ce:;
  /* 121a19ce jmp 0x121a1965 */
  goto L_121a1965;
L_121a19d0:;
  /* 121a19d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a19d4 je 0x121a19fb */
  if (C.zf) goto L_121a19fb;
  /* 121a19d6 call 0x121a1bf0 */
  push32(0x121a19dbu); f_121a1bf0();
  /* 121a19db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a19de push 2 */
  push32((uint32_t)(0x2u));
  /* 121a19e0 mov ecx, dword ptr [0x121c24dc] */
  ECX = (r32((uint32_t)(0x121c24dc)));
  /* 121a19e6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a19e7 call 0x121985a0 */
  push32(0x121a19ecu); f_121985a0();
  /* 121a19ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a19ef mov dword ptr [0x121c24dc], 0 */
  w32((uint32_t)(0x121c24dc), (0x0u));
  /* 121a19f9 jmp 0x121a1a21 */
  goto L_121a1a21;
L_121a19fb:;
  /* 121a19fb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a19ff je 0x121a1a0e */
  if (C.zf) goto L_121a1a0e;
  /* 121a1a01 call 0x121a1bf0 */
  push32(0x121a1a06u); f_121a1bf0();
  /* 121a1a06 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 121a1a0c jmp 0x121a1a18 */
  goto L_121a1a18;
L_121a1a0e:;
  /* 121a1a0e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_121a1a18:;
  /* 121a1a18 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 121a1a1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121a1a21:;
  /* 121a1a21 jmp 0x121a1a2b */
  goto L_121a1a2b;
L_121a1a23:;
  /* 121a1a23 call 0x121a1bf0 */
  push32(0x121a1a28u); f_121a1bf0();
  /* 121a1a28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a1a2b:;
  /* 121a1a2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1a2f je 0x121a1a48 */
  if (C.zf) goto L_121a1a48;
  /* 121a1a31 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 121a1a33 call 0x1219b5b0 */
  push32(0x121a1a38u); f_1219b5b0();
  /* 121a1a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1a3b mov eax, dword ptr [0x121c3a7c] */
  EAX = (r32((uint32_t)(0x121c3a7c)));
  /* 121a1a40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1a43 mov dword ptr [0x121c3a7c], eax */
  w32((uint32_t)(0x121c3a7c), (EAX));
L_121a1a48:;
  /* 121a1a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a1a4b:;
  /* 121a1a4b mov esp, ebp */
  ESP = (EBP);
  /* 121a1a4d pop ebp */
  EBP = (pop32());
  /* 121a1a4e ret  */
  ESPCHK(0x121a1660u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x121a1a50 (403 bytes, 117 insns) */
void f_121a1a50(void) {
  FTRACE(0x121a1a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1a50 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1a51 mov ebp, esp */
  EBP = (ESP);
  /* 121a1a53 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1a59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1a5c push eax */
  push32((uint32_t)(EAX));
  /* 121a1a5d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 121a1a63 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1a64 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 121a1a6a push edx */
  push32((uint32_t)(EDX));
  /* 121a1a6b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 121a1a71 push eax */
  push32((uint32_t)(EAX));
  /* 121a1a72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1a75 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1a76 call 0x121a1cf0 */
  push32(0x121a1a7bu); f_121a1cf0();
  /* 121a1a7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1a7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1a80 jne 0x121a1a89 */
  if (!C.zf) goto L_121a1a89;
  /* 121a1a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1a84 jmp 0x121a1bdf */
  goto L_121a1bdf;
L_121a1a89:;
  /* 121a1a89 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 121a1a8e push 0x121bf120 */
  push32((uint32_t)(0x121bf120u));
  /* 121a1a93 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1a95 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 121a1a9b push edx */
  push32((uint32_t)(EDX));
  /* 121a1a9c call 0x1219a940 */
  push32(0x121a1aa1u); f_1219a940();
  /* 121a1aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1aa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1aa7 push eax */
  push32((uint32_t)(EAX));
  /* 121a1aa8 call 0x12197b10 */
  push32(0x121a1aadu); f_12197b10();
  /* 121a1aad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1ab0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a1ab3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1ab7 jne 0x121a1ac0 */
  if (!C.zf) goto L_121a1ac0;
  /* 121a1ab9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1abb jmp 0x121a1bdf */
  goto L_121a1bdf;
L_121a1ac0:;
  /* 121a1ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ac3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1ac6 mov ecx, dword ptr [eax + 0x121c24dc] */
  ECX = (r32((uint32_t)(EAX + 0x121c24dc)));
  /* 121a1acc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a1acf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ad2 mov eax, dword ptr [edx*4 + 0x121c38f8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121c38f8)));
  /* 121a1ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a1adc push 6 */
  push32((uint32_t)(0x6u));
  /* 121a1ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ae1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1ae4 add ecx, 0x121c3948 */
  { uint32_t _a=(ECX),_b=(0x121c3948u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1aea push ecx */
  push32((uint32_t)(ECX));
  /* 121a1aeb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 121a1aee push edx */
  push32((uint32_t)(EDX));
  /* 121a1aef call 0x1219e3f0 */
  push32(0x121a1af4u); f_1219e3f0();
  /* 121a1af4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1af7 mov eax, dword ptr [0x121c3910] */
  EAX = (r32((uint32_t)(0x121c3910)));
  /* 121a1afc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121a1aff lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 121a1b05 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1b06 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1b09 push edx */
  push32((uint32_t)(EDX));
  /* 121a1b0a call 0x1219aac0 */
  push32(0x121a1b0fu); f_1219aac0();
  /* 121a1b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1b12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1b15 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1b18 mov dword ptr [ecx + 0x121c24dc], eax */
  w32((uint32_t)(ECX + 0x121c24dc), (EAX));
  /* 121a1b1e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 121a1b24 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a1b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1b2d mov dword ptr [eax*4 + 0x121c38f8], edx */
  w32((uint32_t)(EAX*4 + 0x121c38f8), (EDX));
  /* 121a1b34 push 6 */
  push32((uint32_t)(0x6u));
  /* 121a1b36 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 121a1b3c push ecx */
  push32((uint32_t)(ECX));
  /* 121a1b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1b40 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1b43 add edx, 0x121c3948 */
  { uint32_t _a=(EDX),_b=(0x121c3948u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1b49 push edx */
  push32((uint32_t)(EDX));
  /* 121a1b4a call 0x1219e3f0 */
  push32(0x121a1b4fu); f_1219e3f0();
  /* 121a1b4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1b52 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1b56 jne 0x121a1b63 */
  if (!C.zf) goto L_121a1b63;
  /* 121a1b58 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a1b5e mov dword ptr [0x121c3910], eax */
  w32((uint32_t)(0x121c3910), (EAX));
L_121a1b63:;
  /* 121a1b63 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1b67 jne 0x121a1b75 */
  if (!C.zf) goto L_121a1b75;
  /* 121a1b69 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 121a1b6f mov dword ptr [0x121c3914], ecx */
  w32((uint32_t)(0x121c3914), (ECX));
L_121a1b75:;
  /* 121a1b75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1b78 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1b7b call dword ptr [edx + 0x121c24e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x121c24e0))), 0x121a1b81u);
  /* 121a1b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1b83 je 0x121a1bbc */
  if (C.zf) goto L_121a1bbc;
  /* 121a1b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1b88 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1b8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1b8e mov dword ptr [eax + 0x121c24dc], ecx */
  w32((uint32_t)(EAX + 0x121c24dc), (ECX));
  /* 121a1b94 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1b96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1b99 push edx */
  push32((uint32_t)(EDX));
  /* 121a1b9a call 0x121985a0 */
  push32(0x121a1b9fu); f_121985a0();
  /* 121a1b9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1ba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ba5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1ba8 mov dword ptr [eax*4 + 0x121c38f8], ecx */
  w32((uint32_t)(EAX*4 + 0x121c38f8), (ECX));
  /* 121a1baf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a1bb2 mov dword ptr [0x121c3910], edx */
  w32((uint32_t)(0x121c3910), (EDX));
  /* 121a1bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1bba jmp 0x121a1bdf */
  goto L_121a1bdf;
L_121a1bbc:;
  /* 121a1bbc cmp dword ptr [ebp - 0xc], 0x121c23c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x121c23c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1bc3 je 0x121a1bd3 */
  if (C.zf) goto L_121a1bd3;
  /* 121a1bc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1bc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1bca push eax */
  push32((uint32_t)(EAX));
  /* 121a1bcb call 0x121985a0 */
  push32(0x121a1bd0u); f_121985a0();
  /* 121a1bd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a1bd3:;
  /* 121a1bd3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1bd6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1bd9 mov eax, dword ptr [ecx + 0x121c24dc] */
  EAX = (r32((uint32_t)(ECX + 0x121c24dc)));
L_121a1bdf:;
  /* 121a1bdf mov esp, ebp */
  ESP = (EBP);
  /* 121a1be1 pop ebp */
  EBP = (pop32());
  /* 121a1be2 ret  */
  ESPCHK(0x121a1a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011bf0 @ 0x121a1bf0 (256 bytes, 72 insns) */
void f_121a1bf0(void) {
  FTRACE(0x121a1bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1bf1 mov ebp, esp */
  EBP = (ESP);
  /* 121a1bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1bf6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121a1bfd cmp dword ptr [0x121c24dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c24dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1c04 jne 0x121a1c24 */
  if (!C.zf) goto L_121a1c24;
  /* 121a1c06 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 121a1c0b push 0x121bf120 */
  push32((uint32_t)(0x121bf120u));
  /* 121a1c10 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1c12 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 121a1c17 call 0x12197b10 */
  push32(0x121a1c1cu); f_12197b10();
  /* 121a1c1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1c1f mov dword ptr [0x121c24dc], eax */
  w32((uint32_t)(0x121c24dc), (EAX));
L_121a1c24:;
  /* 121a1c24 mov eax, dword ptr [0x121c24dc] */
  EAX = (r32((uint32_t)(0x121c24dc)));
  /* 121a1c29 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121a1c2c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 121a1c33 jmp 0x121a1c3e */
  goto L_121a1c3e;
L_121a1c35:;
  /* 121a1c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1c38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1c3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121a1c3e:;
  /* 121a1c3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1c41 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1c44 mov eax, dword ptr [edx + 0x121c24dc] */
  EAX = (r32((uint32_t)(EDX + 0x121c24dc)));
  /* 121a1c4a push eax */
  push32((uint32_t)(EAX));
  /* 121a1c4b push 0x121bf12c */
  push32((uint32_t)(0x121bf12cu));
  /* 121a1c50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1c53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1c56 mov edx, dword ptr [ecx + 0x121c24d8] */
  EDX = (r32((uint32_t)(ECX + 0x121c24d8)));
  /* 121a1c5c push edx */
  push32((uint32_t)(EDX));
  /* 121a1c5d push 3 */
  push32((uint32_t)(0x3u));
  /* 121a1c5f mov eax, dword ptr [0x121c24dc] */
  EAX = (r32((uint32_t)(0x121c24dc)));
  /* 121a1c64 push eax */
  push32((uint32_t)(EAX));
  /* 121a1c65 call 0x121a1e90 */
  push32(0x121a1c6au); f_121a1e90();
  /* 121a1c6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1c6d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1c71 jge 0x121a1cb9 */
  if ((C.sf==C.of)) goto L_121a1cb9;
  /* 121a1c73 push 0x121bf118 */
  push32((uint32_t)(0x121bf118u));
  /* 121a1c78 mov ecx, dword ptr [0x121c24dc] */
  ECX = (r32((uint32_t)(0x121c24dc)));
  /* 121a1c7e push ecx */
  push32((uint32_t)(ECX));
  /* 121a1c7f call 0x1219aad0 */
  push32(0x121a1c84u); f_1219aad0();
  /* 121a1c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1c87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1c8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1c8d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1c90 mov eax, dword ptr [edx + 0x121c24dc] */
  EAX = (r32((uint32_t)(EDX + 0x121c24dc)));
  /* 121a1c96 push eax */
  push32((uint32_t)(EAX));
  /* 121a1c97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1c9a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a1c9d mov edx, dword ptr [ecx + 0x121c24dc] */
  EDX = (r32((uint32_t)(ECX + 0x121c24dc)));
  /* 121a1ca3 push edx */
  push32((uint32_t)(EDX));
  /* 121a1ca4 call 0x121a37a0 */
  push32(0x121a1ca9u); f_121a37a0();
  /* 121a1ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1cac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1cae je 0x121a1cb7 */
  if (C.zf) goto L_121a1cb7;
  /* 121a1cb0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121a1cb7:;
  /* 121a1cb7 jmp 0x121a1ce7 */
  goto L_121a1ce7;
L_121a1cb9:;
  /* 121a1cb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1cbd jne 0x121a1cc6 */
  if (!C.zf) goto L_121a1cc6;
  /* 121a1cbf mov eax, dword ptr [0x121c24dc] */
  EAX = (r32((uint32_t)(0x121c24dc)));
  /* 121a1cc4 jmp 0x121a1cec */
  goto L_121a1cec;
L_121a1cc6:;
  /* 121a1cc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a1cc8 mov eax, dword ptr [0x121c24dc] */
  EAX = (r32((uint32_t)(0x121c24dc)));
  /* 121a1ccd push eax */
  push32((uint32_t)(EAX));
  /* 121a1cce call 0x121985a0 */
  push32(0x121a1cd3u); f_121985a0();
  /* 121a1cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1cd6 mov dword ptr [0x121c24dc], 0 */
  w32((uint32_t)(0x121c24dc), (0x0u));
  /* 121a1ce0 mov eax, dword ptr [0x121c24f4] */
  EAX = (r32((uint32_t)(0x121c24f4)));
  /* 121a1ce5 jmp 0x121a1cec */
  goto L_121a1cec;
L_121a1ce7:;
  /* 121a1ce7 jmp 0x121a1c35 */
  goto L_121a1c35;
L_121a1cec:;
  /* 121a1cec mov esp, ebp */
  ESP = (EBP);
  /* 121a1cee pop ebp */
  EBP = (pop32());
  /* 121a1cef ret  */
  ESPCHK(0x121a1bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cf0 @ 0x121a1cf0 (388 bytes, 115 insns) */
void f_121a1cf0(void) {
  FTRACE(0x121a1cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1cf1 mov ebp, esp */
  EBP = (ESP);
  /* 121a1cf3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1cf9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1cfd jne 0x121a1d06 */
  if (!C.zf) goto L_121a1d06;
  /* 121a1cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1d01 jmp 0x121a1e70 */
  goto L_121a1e70;
L_121a1d06:;
  /* 121a1d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1d09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a1d0c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1d0f jne 0x121a1d60 */
  if (!C.zf) goto L_121a1d60;
  /* 121a1d11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1d14 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121a1d18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1d1a jne 0x121a1d60 */
  if (!C.zf) goto L_121a1d60;
  /* 121a1d1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1d1f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 121a1d22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1d25 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 121a1d29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1d2d je 0x121a1d49 */
  if (C.zf) goto L_121a1d49;
  /* 121a1d2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a1d32 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 121a1d37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a1d3a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 121a1d40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a1d43 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_121a1d49:;
  /* 121a1d49 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1d4d je 0x121a1d58 */
  if (C.zf) goto L_121a1d58;
  /* 121a1d4f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a1d52 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121a1d58:;
  /* 121a1d58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1d5b jmp 0x121a1e70 */
  goto L_121a1e70;
L_121a1d60:;
  /* 121a1d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1d63 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1d64 push 0x121c2450 */
  push32((uint32_t)(0x121c2450u));
  /* 121a1d69 call 0x121a37a0 */
  push32(0x121a1d6eu); f_121a37a0();
  /* 121a1d6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1d73 je 0x121a1e28 */
  if (C.zf) goto L_121a1e28;
  /* 121a1d79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1d7c push edx */
  push32((uint32_t)(EDX));
  /* 121a1d7d push 0x121c23cc */
  push32((uint32_t)(0x121c23ccu));
  /* 121a1d82 call 0x121a37a0 */
  push32(0x121a1d87u); f_121a37a0();
  /* 121a1d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1d8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1d8c je 0x121a1e28 */
  if (C.zf) goto L_121a1e28;
  /* 121a1d92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1d95 push eax */
  push32((uint32_t)(EAX));
  /* 121a1d96 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 121a1d9c push ecx */
  push32((uint32_t)(ECX));
  /* 121a1d9d call 0x121a1ee0 */
  push32(0x121a1da2u); f_121a1ee0();
  /* 121a1da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1da5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1da7 je 0x121a1db0 */
  if (C.zf) goto L_121a1db0;
  /* 121a1da9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1dab jmp 0x121a1e70 */
  goto L_121a1e70;
L_121a1db0:;
  /* 121a1db0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 121a1db6 push edx */
  push32((uint32_t)(EDX));
  /* 121a1db7 push 0x121c3920 */
  push32((uint32_t)(0x121c3920u));
  /* 121a1dbc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 121a1dc2 push eax */
  push32((uint32_t)(EAX));
  /* 121a1dc3 call 0x121a38f0 */
  push32(0x121a1dc8u); f_121a38f0();
  /* 121a1dc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1dcd jne 0x121a1dd6 */
  if (!C.zf) goto L_121a1dd6;
  /* 121a1dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1dd1 jmp 0x121a1e70 */
  goto L_121a1e70;
L_121a1dd6:;
  /* 121a1dd6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a1dd8 mov cx, word ptr [0x121c3924] */
  CX = (r16((uint32_t)(0x121c3924)));
  /* 121a1ddf mov dword ptr [0x121c3928], ecx */
  w32((uint32_t)(0x121c3928), (ECX));
  /* 121a1de5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 121a1deb push edx */
  push32((uint32_t)(EDX));
  /* 121a1dec push 0x121c2450 */
  push32((uint32_t)(0x121c2450u));
  /* 121a1df1 call 0x121a2040 */
  push32(0x121a1df6u); f_121a2040();
  /* 121a1df6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1dfc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a1dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a1e01 je 0x121a1e16 */
  if (C.zf) goto L_121a1e16;
  /* 121a1e03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1e06 push edx */
  push32((uint32_t)(EDX));
  /* 121a1e07 push 0x121c23cc */
  push32((uint32_t)(0x121c23ccu));
  /* 121a1e0c call 0x1219aac0 */
  push32(0x121a1e11u); f_1219aac0();
  /* 121a1e11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1e14 jmp 0x121a1e28 */
  goto L_121a1e28;
L_121a1e16:;
  /* 121a1e16 push 0x121c2450 */
  push32((uint32_t)(0x121c2450u));
  /* 121a1e1b push 0x121c23cc */
  push32((uint32_t)(0x121c23ccu));
  /* 121a1e20 call 0x1219aac0 */
  push32(0x121a1e25u); f_1219aac0();
  /* 121a1e25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a1e28:;
  /* 121a1e28 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1e2c je 0x121a1e41 */
  if (C.zf) goto L_121a1e41;
  /* 121a1e2e push 6 */
  push32((uint32_t)(0x6u));
  /* 121a1e30 push 0x121c3920 */
  push32((uint32_t)(0x121c3920u));
  /* 121a1e35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a1e38 push eax */
  push32((uint32_t)(EAX));
  /* 121a1e39 call 0x1219e3f0 */
  push32(0x121a1e3eu); f_1219e3f0();
  /* 121a1e3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a1e41:;
  /* 121a1e41 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1e45 je 0x121a1e5a */
  if (C.zf) goto L_121a1e5a;
  /* 121a1e47 push 4 */
  push32((uint32_t)(0x4u));
  /* 121a1e49 push 0x121c3928 */
  push32((uint32_t)(0x121c3928u));
  /* 121a1e4e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a1e51 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1e52 call 0x1219e3f0 */
  push32(0x121a1e57u); f_1219e3f0();
  /* 121a1e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a1e5a:;
  /* 121a1e5a push 0x121c2450 */
  push32((uint32_t)(0x121c2450u));
  /* 121a1e5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1e62 push edx */
  push32((uint32_t)(EDX));
  /* 121a1e63 call 0x1219aac0 */
  push32(0x121a1e68u); f_1219aac0();
  /* 121a1e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1e6b mov eax, 0x121c2450 */
  EAX = (0x121c2450u);
L_121a1e70:;
  /* 121a1e70 mov esp, ebp */
  ESP = (EBP);
  /* 121a1e72 pop ebp */
  EBP = (pop32());
  /* 121a1e73 ret  */
  ESPCHK(0x121a1cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x121a1e80 (7 bytes, 5 insns) */
void f_121a1e80(void) {
  FTRACE(0x121a1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1e81 mov ebp, esp */
  EBP = (ESP);
  /* 121a1e83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1e85 pop ebp */
  EBP = (pop32());
  /* 121a1e86 ret  */
  ESPCHK(0x121a1e80u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x121a1e90 (79 bytes, 28 insns) */
void f_121a1e90(void) {
  FTRACE(0x121a1e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1e90 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1e91 mov ebp, esp */
  EBP = (ESP);
  /* 121a1e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1e96 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 121a1e99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a1e9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a1ea3 jmp 0x121a1eae */
  goto L_121a1eae;
L_121a1ea5:;
  /* 121a1ea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1ea8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1eab mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121a1eae:;
  /* 121a1eae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a1eb1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1eb4 jge 0x121a1ed4 */
  if ((C.sf==C.of)) goto L_121a1ed4;
  /* 121a1eb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1eb9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1ebc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a1ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1ec2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 121a1ec5 push edx */
  push32((uint32_t)(EDX));
  /* 121a1ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ec9 push eax */
  push32((uint32_t)(EAX));
  /* 121a1eca call 0x1219aad0 */
  push32(0x121a1ecfu); f_1219aad0();
  /* 121a1ecf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1ed2 jmp 0x121a1ea5 */
  goto L_121a1ea5;
L_121a1ed4:;
  /* 121a1ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a1edb mov esp, ebp */
  ESP = (EBP);
  /* 121a1edd pop ebp */
  EBP = (pop32());
  /* 121a1ede ret  */
  ESPCHK(0x121a1e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ee0 @ 0x121a1ee0 (349 bytes, 122 insns) */
void f_121a1ee0(void) {
  FTRACE(0x121a1ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a1ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a1ee1 mov ebp, esp */
  EBP = (ESP);
  /* 121a1ee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a1ee6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 121a1eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 121a1eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ef0 push eax */
  push32((uint32_t)(EAX));
  /* 121a1ef1 call 0x1219b880 */
  push32(0x121a1ef6u); f_1219b880();
  /* 121a1ef6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1ef9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1efc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a1eff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a1f01 jne 0x121a1f0a */
  if (!C.zf) goto L_121a1f0a;
  /* 121a1f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1f05 jmp 0x121a2039 */
  goto L_121a2039;
L_121a1f0a:;
  /* 121a1f0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f0d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a1f10 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1f13 jne 0x121a1f40 */
  if (!C.zf) goto L_121a1f40;
  /* 121a1f15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f18 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 121a1f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1f1e je 0x121a1f40 */
  if (C.zf) goto L_121a1f40;
  /* 121a1f20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f23 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f26 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1f27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1f2a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f30 push edx */
  push32((uint32_t)(EDX));
  /* 121a1f31 call 0x1219aac0 */
  push32(0x121a1f36u); f_1219aac0();
  /* 121a1f36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a1f3b jmp 0x121a2039 */
  goto L_121a2039;
L_121a1f40:;
  /* 121a1f40 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a1f47 jmp 0x121a1f52 */
  goto L_121a1f52;
L_121a1f49:;
  /* 121a1f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a1f4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a1f52:;
  /* 121a1f52 push 0x121bf130 */
  push32((uint32_t)(0x121bf130u));
  /* 121a1f57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f5a push ecx */
  push32((uint32_t)(ECX));
  /* 121a1f5b call 0x121a3830 */
  push32(0x121a1f60u); f_121a3830();
  /* 121a1f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f63 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a1f66 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1f6a jne 0x121a1f74 */
  if (!C.zf) goto L_121a1f74;
  /* 121a1f6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a1f6f jmp 0x121a2039 */
  goto L_121a2039;
L_121a1f74:;
  /* 121a1f74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f77 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1f7a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a1f7c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 121a1f7f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1f83 jne 0x121a1faa */
  if (!C.zf) goto L_121a1faa;
  /* 121a1f85 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1f89 jge 0x121a1faa */
  if ((C.sf==C.of)) goto L_121a1faa;
  /* 121a1f8b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a1f8f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1f92 je 0x121a1faa */
  if (C.zf) goto L_121a1faa;
  /* 121a1f94 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1f97 push edx */
  push32((uint32_t)(EDX));
  /* 121a1f98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1f9b push eax */
  push32((uint32_t)(EAX));
  /* 121a1f9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1f9f push ecx */
  push32((uint32_t)(ECX));
  /* 121a1fa0 call 0x1219b330 */
  push32(0x121a1fa5u); f_1219b330();
  /* 121a1fa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1fa8 jmp 0x121a2010 */
  goto L_121a2010;
L_121a1faa:;
  /* 121a1faa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1fae jne 0x121a1fd8 */
  if (!C.zf) goto L_121a1fd8;
  /* 121a1fb0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1fb4 jge 0x121a1fd8 */
  if ((C.sf==C.of)) goto L_121a1fd8;
  /* 121a1fb6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a1fba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1fbd je 0x121a1fd8 */
  if (C.zf) goto L_121a1fd8;
  /* 121a1fbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1fc2 push eax */
  push32((uint32_t)(EAX));
  /* 121a1fc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a1fc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1fca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1fcd push edx */
  push32((uint32_t)(EDX));
  /* 121a1fce call 0x1219b330 */
  push32(0x121a1fd3u); f_1219b330();
  /* 121a1fd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a1fd6 jmp 0x121a2010 */
  goto L_121a2010;
L_121a1fd8:;
  /* 121a1fd8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1fdc jne 0x121a200b */
  if (!C.zf) goto L_121a200b;
  /* 121a1fde movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a1fe2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a1fe4 je 0x121a1fef */
  if (C.zf) goto L_121a1fef;
  /* 121a1fe6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a1fea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a1fed jne 0x121a200b */
  if (!C.zf) goto L_121a200b;
L_121a1fef:;
  /* 121a1fef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a1ff2 push edx */
  push32((uint32_t)(EDX));
  /* 121a1ff3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a1ff6 push eax */
  push32((uint32_t)(EAX));
  /* 121a1ff7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a1ffa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2000 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2001 call 0x1219b330 */
  push32(0x121a2006u); f_1219b330();
  /* 121a2006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2009 jmp 0x121a2010 */
  goto L_121a2010;
L_121a200b:;
  /* 121a200b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a200e jmp 0x121a2039 */
  goto L_121a2039;
L_121a2010:;
  /* 121a2010 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a2014 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2017 jne 0x121a201b */
  if (!C.zf) goto L_121a201b;
  /* 121a2019 jmp 0x121a2037 */
  goto L_121a2037;
L_121a201b:;
  /* 121a201b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a201f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a2021 jne 0x121a2025 */
  if (!C.zf) goto L_121a2025;
  /* 121a2023 jmp 0x121a2037 */
  goto L_121a2037;
L_121a2025:;
  /* 121a2025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2028 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a202b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 121a202f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 121a2032 jmp 0x121a1f49 */
  goto L_121a1f49;
L_121a2037:;
  /* 121a2037 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a2039:;
  /* 121a2039 mov esp, ebp */
  ESP = (EBP);
  /* 121a203b pop ebp */
  EBP = (pop32());
  /* 121a203c ret  */
  ESPCHK(0x121a1ee0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x121a2040 (101 bytes, 36 insns) */
void f_121a2040(void) {
  FTRACE(0x121a2040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2040 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2041 mov ebp, esp */
  EBP = (ESP);
  /* 121a2043 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a2046 push eax */
  push32((uint32_t)(EAX));
  /* 121a2047 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a204a push ecx */
  push32((uint32_t)(ECX));
  /* 121a204b call 0x1219aac0 */
  push32(0x121a2050u); f_1219aac0();
  /* 121a2050 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2053 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a2056 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 121a205a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a205c je 0x121a2078 */
  if (C.zf) goto L_121a2078;
  /* 121a205e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a2061 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2064 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2065 push 0x121bf138 */
  push32((uint32_t)(0x121bf138u));
  /* 121a206a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a206c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a206f push edx */
  push32((uint32_t)(EDX));
  /* 121a2070 call 0x121a1e90 */
  push32(0x121a2075u); f_121a1e90();
  /* 121a2075 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a2078:;
  /* 121a2078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a207b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 121a2082 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a2084 je 0x121a20a3 */
  if (C.zf) goto L_121a20a3;
  /* 121a2086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a2089 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a208f push edx */
  push32((uint32_t)(EDX));
  /* 121a2090 push 0x121bf134 */
  push32((uint32_t)(0x121bf134u));
  /* 121a2095 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2097 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a209a push eax */
  push32((uint32_t)(EAX));
  /* 121a209b call 0x121a1e90 */
  push32(0x121a20a0u); f_121a1e90();
  /* 121a20a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a20a3:;
  /* 121a20a3 pop ebp */
  EBP = (pop32());
  /* 121a20a4 ret  */
  ESPCHK(0x121a2040u, _esp0);
  ESP += 4; return;
}

/* FUN_100120b0 @ 0x121a20b0 (130 bytes, 50 insns) */
void f_121a20b0(void) {
  FTRACE(0x121a20b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a20b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a20b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a20b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a20b4 push ebx */
  push32((uint32_t)(EBX));
  /* 121a20b5 push esi */
  push32((uint32_t)(ESI));
  /* 121a20b6 push edi */
  push32((uint32_t)(EDI));
  /* 121a20b7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a20be:;
  /* 121a20be cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a20c2 jne 0x121a20e2 */
  if (!C.zf) goto L_121a20e2;
  /* 121a20c4 push 0x121bf148 */
  push32((uint32_t)(0x121bf148u));
  /* 121a20c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a20cb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 121a20cd push 0x121bf13c */
  push32((uint32_t)(0x121bf13cu));
  /* 121a20d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a20d4 call 0x12196bd0 */
  push32(0x121a20d9u); f_12196bd0();
  /* 121a20d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a20dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a20df jne 0x121a20e2 */
  if (!C.zf) goto L_121a20e2;
  /* 121a20e1 int3  */
  x86_unimpl("int3 @ 0x121a20e1");
L_121a20e2:;
  /* 121a20e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a20e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a20e6 jne 0x121a20be */
  if (!C.zf) goto L_121a20be;
  /* 121a20e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a20eb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a20ee and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 121a20f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a20f3 je 0x121a2101 */
  if (C.zf) goto L_121a2101;
  /* 121a20f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a20f8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 121a20ff jmp 0x121a2128 */
  goto L_121a2128;
L_121a2101:;
  /* 121a2101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2104 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2105 call 0x121a0920 */
  push32(0x121a210au); f_121a0920();
  /* 121a210a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a210d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2110 push edx */
  push32((uint32_t)(EDX));
  /* 121a2111 call 0x121a2140 */
  push32(0x121a2116u); f_121a2140();
  /* 121a2116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a211c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a211f push eax */
  push32((uint32_t)(EAX));
  /* 121a2120 call 0x121a0990 */
  push32(0x121a2125u); f_121a0990();
  /* 121a2125 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a2128:;
  /* 121a2128 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a212b pop edi */
  EDI = (pop32());
  /* 121a212c pop esi */
  ESI = (pop32());
  /* 121a212d pop ebx */
  EBX = (pop32());
  /* 121a212e mov esp, ebp */
  ESP = (EBP);
  /* 121a2130 pop ebp */
  EBP = (pop32());
  /* 121a2131 ret  */
  ESPCHK(0x121a20b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x121a2140 (190 bytes, 67 insns) */
void f_121a2140(void) {
  FTRACE(0x121a2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2140 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2141 mov ebp, esp */
  EBP = (ESP);
  /* 121a2143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a2146 push ebx */
  push32((uint32_t)(EBX));
  /* 121a2147 push esi */
  push32((uint32_t)(ESI));
  /* 121a2148 push edi */
  push32((uint32_t)(EDI));
  /* 121a2149 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a2150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2153 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a2156:;
  /* 121a2156 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a215a jne 0x121a217a */
  if (!C.zf) goto L_121a217a;
  /* 121a215c push 0x121befec */
  push32((uint32_t)(0x121befecu));
  /* 121a2161 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a2163 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 121a2165 push 0x121bf13c */
  push32((uint32_t)(0x121bf13cu));
  /* 121a216a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a216c call 0x12196bd0 */
  push32(0x121a2171u); f_12196bd0();
  /* 121a2171 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2174 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2177 jne 0x121a217a */
  if (!C.zf) goto L_121a217a;
  /* 121a2179 int3  */
  x86_unimpl("int3 @ 0x121a2179");
L_121a217a:;
  /* 121a217a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a217c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a217e jne 0x121a2156 */
  if (!C.zf) goto L_121a2156;
  /* 121a2180 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2183 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121a2186 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 121a218b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a218d je 0x121a21ea */
  if (C.zf) goto L_121a21ea;
  /* 121a218f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2192 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2193 call 0x121a1440 */
  push32(0x121a2198u); f_121a1440();
  /* 121a2198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a219b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a219e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21a1 push edx */
  push32((uint32_t)(EDX));
  /* 121a21a2 call 0x121a47c0 */
  push32(0x121a21a7u); f_121a47c0();
  /* 121a21a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a21aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a21b0 push ecx */
  push32((uint32_t)(ECX));
  /* 121a21b1 call 0x121a4690 */
  push32(0x121a21b6u); f_121a4690();
  /* 121a21b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a21b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a21bb jge 0x121a21c6 */
  if ((C.sf==C.of)) goto L_121a21c6;
  /* 121a21bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 121a21c4 jmp 0x121a21ea */
  goto L_121a21ea;
L_121a21c6:;
  /* 121a21c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21c9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a21cd je 0x121a21ea */
  if (C.zf) goto L_121a21ea;
  /* 121a21cf push 2 */
  push32((uint32_t)(0x2u));
  /* 121a21d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21d4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a21d7 push ecx */
  push32((uint32_t)(ECX));
  /* 121a21d8 call 0x121985a0 */
  push32(0x121a21ddu); f_121985a0();
  /* 121a21dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a21e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21e3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_121a21ea:;
  /* 121a21ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a21ed mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 121a21f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a21f7 pop edi */
  EDI = (pop32());
  /* 121a21f8 pop esi */
  ESI = (pop32());
  /* 121a21f9 pop ebx */
  EBX = (pop32());
  /* 121a21fa mov esp, ebp */
  ESP = (EBP);
  /* 121a21fc pop ebp */
  EBP = (pop32());
  /* 121a21fd ret  */
  ESPCHK(0x121a2140u, _esp0);
  ESP += 4; return;
}

/* FUN_10012200 @ 0x121a2200 (210 bytes, 63 insns) */
void f_121a2200(void) {
  FTRACE(0x121a2200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2200 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2201 mov ebp, esp */
  EBP = (ESP);
  /* 121a2203 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2204 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2207 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a220d jae 0x121a2231 */
  if (!C.cf) goto L_121a2231;
  /* 121a220f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2212 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a2215 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2218 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a221b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a221e mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a2225 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a222a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a222d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a222f jne 0x121a2244 */
  if (!C.zf) goto L_121a2244;
L_121a2231:;
  /* 121a2231 call 0x1219f9e0 */
  push32(0x121a2236u); f_1219f9e0();
  /* 121a2236 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a223c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a223f jmp 0x121a22ce */
  goto L_121a22ce;
L_121a2244:;
  /* 121a2244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2247 push edx */
  push32((uint32_t)(EDX));
  /* 121a2248 call 0x121a1200 */
  push32(0x121a224du); f_121a1200();
  /* 121a224d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2250 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2253 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a2256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2259 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a225c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a225f mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a2266 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 121a226b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 121a226e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a2270 je 0x121a22ad */
  if (C.zf) goto L_121a22ad;
  /* 121a2272 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2275 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2276 call 0x121a1080 */
  push32(0x121a227bu); f_121a1080();
  /* 121a227b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a227e push eax */
  push32((uint32_t)(EAX));
  /* 121a227f call dword ptr [0x121c62bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62bc))), 0x121a2285u);
  /* 121a2285 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a2287 jne 0x121a2294 */
  if (!C.zf) goto L_121a2294;
  /* 121a2289 call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a228fu);
  /* 121a228f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a2292 jmp 0x121a229b */
  goto L_121a229b;
L_121a2294:;
  /* 121a2294 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121a229b:;
  /* 121a229b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a229f jne 0x121a22a3 */
  if (!C.zf) goto L_121a22a3;
  /* 121a22a1 jmp 0x121a22bf */
  goto L_121a22bf;
L_121a22a3:;
  /* 121a22a3 call 0x1219f9f0 */
  push32(0x121a22a8u); f_1219f9f0();
  /* 121a22a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a22ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_121a22ad:;
  /* 121a22ad call 0x1219f9e0 */
  push32(0x121a22b2u); f_1219f9e0();
  /* 121a22b2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a22b8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_121a22bf:;
  /* 121a22bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a22c2 push eax */
  push32((uint32_t)(EAX));
  /* 121a22c3 call 0x121a1290 */
  push32(0x121a22c8u); f_121a1290();
  /* 121a22c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a22cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a22ce:;
  /* 121a22ce mov esp, ebp */
  ESP = (EBP);
  /* 121a22d0 pop ebp */
  EBP = (pop32());
  /* 121a22d1 ret  */
  ESPCHK(0x121a2200u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x121a22e0 (219 bytes, 64 insns) */
void f_121a22e0(void) {
  FTRACE(0x121a22e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a22e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a22e1 mov ebp, esp */
  EBP = (ESP);
  /* 121a22e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121a22e4 cmp dword ptr [0x121c390c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c390c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a22eb je 0x121a2381 */
  if (C.zf) goto L_121a2381;
  /* 121a22f1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 121a22f3 push 0x121bf158 */
  push32((uint32_t)(0x121bf158u));
  /* 121a22f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a22fa push 0xac */
  push32((uint32_t)(0xacu));
  /* 121a22ff push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2301 call 0x12197f20 */
  push32(0x121a2306u); f_12197f20();
  /* 121a2306 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2309 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a230c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2310 jne 0x121a231c */
  if (!C.zf) goto L_121a231c;
  /* 121a2312 mov eax, 1 */
  EAX = (0x1u);
  /* 121a2317 jmp 0x121a23b7 */
  goto L_121a23b7;
L_121a231c:;
  /* 121a231c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a231f push eax */
  push32((uint32_t)(EAX));
  /* 121a2320 call 0x121a23c0 */
  push32(0x121a2325u); f_121a23c0();
  /* 121a2325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2328 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a232a je 0x121a234d */
  if (C.zf) goto L_121a234d;
  /* 121a232c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a232f push ecx */
  push32((uint32_t)(ECX));
  /* 121a2330 call 0x121a2950 */
  push32(0x121a2335u); f_121a2950();
  /* 121a2335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2338 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a233a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a233d push edx */
  push32((uint32_t)(EDX));
  /* 121a233e call 0x121985a0 */
  push32(0x121a2343u); f_121985a0();
  /* 121a2343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2346 mov eax, 1 */
  EAX = (0x1u);
  /* 121a234b jmp 0x121a23b7 */
  goto L_121a23b7;
L_121a234d:;
  /* 121a234d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2350 mov dword ptr [0x121c2c98], eax */
  w32((uint32_t)(0x121c2c98), (EAX));
  /* 121a2355 mov ecx, dword ptr [0x121c392c] */
  ECX = (r32((uint32_t)(0x121c392c)));
  /* 121a235b push ecx */
  push32((uint32_t)(ECX));
  /* 121a235c call 0x121a2950 */
  push32(0x121a2361u); f_121a2950();
  /* 121a2361 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2364 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2366 mov edx, dword ptr [0x121c392c] */
  EDX = (r32((uint32_t)(0x121c392c)));
  /* 121a236c push edx */
  push32((uint32_t)(EDX));
  /* 121a236d call 0x121985a0 */
  push32(0x121a2372u); f_121985a0();
  /* 121a2372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2375 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2378 mov dword ptr [0x121c392c], eax */
  w32((uint32_t)(0x121c392c), (EAX));
  /* 121a237d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a237f jmp 0x121a23b7 */
  goto L_121a23b7;
L_121a2381:;
  /* 121a2381 mov dword ptr [0x121c2c98], 0x121c2ca0 */
  w32((uint32_t)(0x121c2c98), (0x121c2ca0u));
  /* 121a238b mov ecx, dword ptr [0x121c392c] */
  ECX = (r32((uint32_t)(0x121c392c)));
  /* 121a2391 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2392 call 0x121a2950 */
  push32(0x121a2397u); f_121a2950();
  /* 121a2397 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a239a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a239c mov edx, dword ptr [0x121c392c] */
  EDX = (r32((uint32_t)(0x121c392c)));
  /* 121a23a2 push edx */
  push32((uint32_t)(EDX));
  /* 121a23a3 call 0x121985a0 */
  push32(0x121a23a8u); f_121985a0();
  /* 121a23a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a23ab mov dword ptr [0x121c392c], 0 */
  w32((uint32_t)(0x121c392c), (0x0u));
  /* 121a23b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a23b7:;
  /* 121a23b7 mov esp, ebp */
  ESP = (EBP);
  /* 121a23b9 pop ebp */
  EBP = (pop32());
  /* 121a23ba ret  */
  ESPCHK(0x121a22e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x121a23c0 (1423 bytes, 533 insns) */
void f_121a23c0(void) {
  FTRACE(0x121a23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a23c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a23c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a23c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a23c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 121a23cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a23cf mov ax, word ptr [0x121c3966] */
  AX = (r16((uint32_t)(0x121c3966)));
  /* 121a23d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a23d8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a23da mov cx, word ptr [0x121c3968] */
  CX = (r16((uint32_t)(0x121c3968)));
  /* 121a23e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a23e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a23e8 jne 0x121a23f2 */
  if (!C.zf) goto L_121a23f2;
  /* 121a23ea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a23ed jmp 0x121a294b */
  goto L_121a294b;
L_121a23f2:;
  /* 121a23f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a23f5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a23f8 push edx */
  push32((uint32_t)(EDX));
  /* 121a23f9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 121a23fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a23fe push eax */
  push32((uint32_t)(EAX));
  /* 121a23ff push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2401 call 0x121a5cd0 */
  push32(0x121a2406u); f_121a5cd0();
  /* 121a2406 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2409 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a240c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a240e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2411 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2414 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2417 push edx */
  push32((uint32_t)(EDX));
  /* 121a2418 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 121a241a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a241d push eax */
  push32((uint32_t)(EAX));
  /* 121a241e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2420 call 0x121a5cd0 */
  push32(0x121a2425u); f_121a5cd0();
  /* 121a2425 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2428 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a242b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a242d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2430 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2433 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2436 push edx */
  push32((uint32_t)(EDX));
  /* 121a2437 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 121a2439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a243c push eax */
  push32((uint32_t)(EAX));
  /* 121a243d push 1 */
  push32((uint32_t)(0x1u));
  /* 121a243f call 0x121a5cd0 */
  push32(0x121a2444u); f_121a5cd0();
  /* 121a2444 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2447 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a244a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a244c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a244f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2452 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2455 push edx */
  push32((uint32_t)(EDX));
  /* 121a2456 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 121a2458 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a245b push eax */
  push32((uint32_t)(EAX));
  /* 121a245c push 1 */
  push32((uint32_t)(0x1u));
  /* 121a245e call 0x121a5cd0 */
  push32(0x121a2463u); f_121a5cd0();
  /* 121a2463 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2469 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a246b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a246e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2471 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2474 push edx */
  push32((uint32_t)(EDX));
  /* 121a2475 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 121a2477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a247a push eax */
  push32((uint32_t)(EAX));
  /* 121a247b push 1 */
  push32((uint32_t)(0x1u));
  /* 121a247d call 0x121a5cd0 */
  push32(0x121a2482u); f_121a5cd0();
  /* 121a2482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a248a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a248d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2490 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2493 push edx */
  push32((uint32_t)(EDX));
  /* 121a2494 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 121a2496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2499 push eax */
  push32((uint32_t)(EAX));
  /* 121a249a push 1 */
  push32((uint32_t)(0x1u));
  /* 121a249c call 0x121a5cd0 */
  push32(0x121a24a1u); f_121a5cd0();
  /* 121a24a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a24a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a24a9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a24ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a24af push edx */
  push32((uint32_t)(EDX));
  /* 121a24b0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 121a24b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a24b5 push eax */
  push32((uint32_t)(EAX));
  /* 121a24b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a24b8 call 0x121a5cd0 */
  push32(0x121a24bdu); f_121a5cd0();
  /* 121a24bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a24c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a24c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a24c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a24cb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24ce push edx */
  push32((uint32_t)(EDX));
  /* 121a24cf push 0x2a */
  push32((uint32_t)(0x2au));
  /* 121a24d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a24d4 push eax */
  push32((uint32_t)(EAX));
  /* 121a24d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a24d7 call 0x121a5cd0 */
  push32(0x121a24dcu); f_121a5cd0();
  /* 121a24dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a24e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a24e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a24e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a24ea add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24ed push edx */
  push32((uint32_t)(EDX));
  /* 121a24ee push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 121a24f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a24f3 push eax */
  push32((uint32_t)(EAX));
  /* 121a24f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a24f6 call 0x121a5cd0 */
  push32(0x121a24fbu); f_121a5cd0();
  /* 121a24fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a24fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2501 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2503 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2506 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2509 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a250c push edx */
  push32((uint32_t)(EDX));
  /* 121a250d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 121a250f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2512 push eax */
  push32((uint32_t)(EAX));
  /* 121a2513 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2515 call 0x121a5cd0 */
  push32(0x121a251au); f_121a5cd0();
  /* 121a251a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a251d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2520 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2522 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2528 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a252b push edx */
  push32((uint32_t)(EDX));
  /* 121a252c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 121a252e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2531 push eax */
  push32((uint32_t)(EAX));
  /* 121a2532 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2534 call 0x121a5cd0 */
  push32(0x121a2539u); f_121a5cd0();
  /* 121a2539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a253c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a253f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2541 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2547 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a254a push edx */
  push32((uint32_t)(EDX));
  /* 121a254b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 121a254d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2550 push eax */
  push32((uint32_t)(EAX));
  /* 121a2551 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2553 call 0x121a5cd0 */
  push32(0x121a2558u); f_121a5cd0();
  /* 121a2558 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a255b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a255e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2566 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2569 push edx */
  push32((uint32_t)(EDX));
  /* 121a256a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 121a256c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a256f push eax */
  push32((uint32_t)(EAX));
  /* 121a2570 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2572 call 0x121a5cd0 */
  push32(0x121a2577u); f_121a5cd0();
  /* 121a2577 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a257a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a257d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a257f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2585 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2588 push edx */
  push32((uint32_t)(EDX));
  /* 121a2589 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121a258b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a258e push eax */
  push32((uint32_t)(EAX));
  /* 121a258f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2591 call 0x121a5cd0 */
  push32(0x121a2596u); f_121a5cd0();
  /* 121a2596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2599 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a259c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a259e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a25a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a25a4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25a7 push edx */
  push32((uint32_t)(EDX));
  /* 121a25a8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 121a25aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a25ad push eax */
  push32((uint32_t)(EAX));
  /* 121a25ae push 1 */
  push32((uint32_t)(0x1u));
  /* 121a25b0 call 0x121a5cd0 */
  push32(0x121a25b5u); f_121a5cd0();
  /* 121a25b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a25bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a25bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a25c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a25c3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25c6 push edx */
  push32((uint32_t)(EDX));
  /* 121a25c7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 121a25c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a25cc push eax */
  push32((uint32_t)(EAX));
  /* 121a25cd push 1 */
  push32((uint32_t)(0x1u));
  /* 121a25cf call 0x121a5cd0 */
  push32(0x121a25d4u); f_121a5cd0();
  /* 121a25d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a25da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a25dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a25df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a25e2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25e5 push edx */
  push32((uint32_t)(EDX));
  /* 121a25e6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 121a25e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a25eb push eax */
  push32((uint32_t)(EAX));
  /* 121a25ec push 1 */
  push32((uint32_t)(0x1u));
  /* 121a25ee call 0x121a5cd0 */
  push32(0x121a25f3u); f_121a5cd0();
  /* 121a25f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a25f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a25f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a25fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a25fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2601 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2604 push edx */
  push32((uint32_t)(EDX));
  /* 121a2605 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 121a2607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a260a push eax */
  push32((uint32_t)(EAX));
  /* 121a260b push 1 */
  push32((uint32_t)(0x1u));
  /* 121a260d call 0x121a5cd0 */
  push32(0x121a2612u); f_121a5cd0();
  /* 121a2612 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2615 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2618 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a261a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a261d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2620 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2623 push edx */
  push32((uint32_t)(EDX));
  /* 121a2624 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 121a2626 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2629 push eax */
  push32((uint32_t)(EAX));
  /* 121a262a push 1 */
  push32((uint32_t)(0x1u));
  /* 121a262c call 0x121a5cd0 */
  push32(0x121a2631u); f_121a5cd0();
  /* 121a2631 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2634 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2637 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2639 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a263c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a263f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2642 push edx */
  push32((uint32_t)(EDX));
  /* 121a2643 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 121a2645 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2648 push eax */
  push32((uint32_t)(EAX));
  /* 121a2649 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a264b call 0x121a5cd0 */
  push32(0x121a2650u); f_121a5cd0();
  /* 121a2650 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2653 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2656 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2658 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a265b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a265e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2661 push edx */
  push32((uint32_t)(EDX));
  /* 121a2662 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 121a2664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2667 push eax */
  push32((uint32_t)(EAX));
  /* 121a2668 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a266a call 0x121a5cd0 */
  push32(0x121a266fu); f_121a5cd0();
  /* 121a266f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2672 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2675 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2677 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a267a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a267d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2680 push edx */
  push32((uint32_t)(EDX));
  /* 121a2681 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 121a2683 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2686 push eax */
  push32((uint32_t)(EAX));
  /* 121a2687 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2689 call 0x121a5cd0 */
  push32(0x121a268eu); f_121a5cd0();
  /* 121a268e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2691 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2694 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2696 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2699 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a269c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a269f push edx */
  push32((uint32_t)(EDX));
  /* 121a26a0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 121a26a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a26a5 push eax */
  push32((uint32_t)(EAX));
  /* 121a26a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a26a8 call 0x121a5cd0 */
  push32(0x121a26adu); f_121a5cd0();
  /* 121a26ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a26b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a26b5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a26b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a26bb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26be push edx */
  push32((uint32_t)(EDX));
  /* 121a26bf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 121a26c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a26c4 push eax */
  push32((uint32_t)(EAX));
  /* 121a26c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a26c7 call 0x121a5cd0 */
  push32(0x121a26ccu); f_121a5cd0();
  /* 121a26cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a26d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a26d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a26d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a26da add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26dd push edx */
  push32((uint32_t)(EDX));
  /* 121a26de push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 121a26e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a26e3 push eax */
  push32((uint32_t)(EAX));
  /* 121a26e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a26e6 call 0x121a5cd0 */
  push32(0x121a26ebu); f_121a5cd0();
  /* 121a26eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a26f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a26f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a26f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a26f9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a26fc push edx */
  push32((uint32_t)(EDX));
  /* 121a26fd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 121a26ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2702 push eax */
  push32((uint32_t)(EAX));
  /* 121a2703 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2705 call 0x121a5cd0 */
  push32(0x121a270au); f_121a5cd0();
  /* 121a270a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a270d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2710 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2712 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2715 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2718 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a271b push edx */
  push32((uint32_t)(EDX));
  /* 121a271c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 121a271e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2721 push eax */
  push32((uint32_t)(EAX));
  /* 121a2722 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2724 call 0x121a5cd0 */
  push32(0x121a2729u); f_121a5cd0();
  /* 121a2729 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a272c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a272f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2731 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2737 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a273a push edx */
  push32((uint32_t)(EDX));
  /* 121a273b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 121a273d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2740 push eax */
  push32((uint32_t)(EAX));
  /* 121a2741 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2743 call 0x121a5cd0 */
  push32(0x121a2748u); f_121a5cd0();
  /* 121a2748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a274b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a274e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2756 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2759 push edx */
  push32((uint32_t)(EDX));
  /* 121a275a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 121a275c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a275f push eax */
  push32((uint32_t)(EAX));
  /* 121a2760 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2762 call 0x121a5cd0 */
  push32(0x121a2767u); f_121a5cd0();
  /* 121a2767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a276a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a276d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a276f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2772 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2775 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2778 push edx */
  push32((uint32_t)(EDX));
  /* 121a2779 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 121a277b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a277e push eax */
  push32((uint32_t)(EAX));
  /* 121a277f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2781 call 0x121a5cd0 */
  push32(0x121a2786u); f_121a5cd0();
  /* 121a2786 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2789 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a278c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a278e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2791 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2794 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2797 push edx */
  push32((uint32_t)(EDX));
  /* 121a2798 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 121a279a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a279d push eax */
  push32((uint32_t)(EAX));
  /* 121a279e push 1 */
  push32((uint32_t)(0x1u));
  /* 121a27a0 call 0x121a5cd0 */
  push32(0x121a27a5u); f_121a5cd0();
  /* 121a27a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a27ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a27ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a27b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a27b3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27b6 push edx */
  push32((uint32_t)(EDX));
  /* 121a27b7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 121a27b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a27bc push eax */
  push32((uint32_t)(EAX));
  /* 121a27bd push 1 */
  push32((uint32_t)(0x1u));
  /* 121a27bf call 0x121a5cd0 */
  push32(0x121a27c4u); f_121a5cd0();
  /* 121a27c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a27ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a27cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a27cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a27d2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27d8 push edx */
  push32((uint32_t)(EDX));
  /* 121a27d9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 121a27db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a27de push eax */
  push32((uint32_t)(EAX));
  /* 121a27df push 1 */
  push32((uint32_t)(0x1u));
  /* 121a27e1 call 0x121a5cd0 */
  push32(0x121a27e6u); f_121a5cd0();
  /* 121a27e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a27ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a27ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a27f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a27f4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a27fa push edx */
  push32((uint32_t)(EDX));
  /* 121a27fb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 121a27fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2800 push eax */
  push32((uint32_t)(EAX));
  /* 121a2801 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2803 call 0x121a5cd0 */
  push32(0x121a2808u); f_121a5cd0();
  /* 121a2808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a280b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a280e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2810 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2816 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a281c push edx */
  push32((uint32_t)(EDX));
  /* 121a281d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121a281f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2822 push eax */
  push32((uint32_t)(EAX));
  /* 121a2823 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2825 call 0x121a5cd0 */
  push32(0x121a282au); f_121a5cd0();
  /* 121a282a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a282d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2838 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a283e push edx */
  push32((uint32_t)(EDX));
  /* 121a283f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 121a2841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2844 push eax */
  push32((uint32_t)(EAX));
  /* 121a2845 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2847 call 0x121a5cd0 */
  push32(0x121a284cu); f_121a5cd0();
  /* 121a284c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a284f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2852 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2854 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2857 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a285a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2860 push edx */
  push32((uint32_t)(EDX));
  /* 121a2861 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 121a2863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2866 push eax */
  push32((uint32_t)(EAX));
  /* 121a2867 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2869 call 0x121a5cd0 */
  push32(0x121a286eu); f_121a5cd0();
  /* 121a286e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2874 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2879 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a287c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2882 push edx */
  push32((uint32_t)(EDX));
  /* 121a2883 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 121a2885 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2888 push eax */
  push32((uint32_t)(EAX));
  /* 121a2889 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a288b call 0x121a5cd0 */
  push32(0x121a2890u); f_121a5cd0();
  /* 121a2890 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2893 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2896 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2898 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a289b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a289e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28a4 push edx */
  push32((uint32_t)(EDX));
  /* 121a28a5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 121a28a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a28aa push eax */
  push32((uint32_t)(EAX));
  /* 121a28ab push 1 */
  push32((uint32_t)(0x1u));
  /* 121a28ad call 0x121a5cd0 */
  push32(0x121a28b2u); f_121a5cd0();
  /* 121a28b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a28b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a28ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a28bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a28c0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28c6 push edx */
  push32((uint32_t)(EDX));
  /* 121a28c7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 121a28c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a28cc push eax */
  push32((uint32_t)(EAX));
  /* 121a28cd push 1 */
  push32((uint32_t)(0x1u));
  /* 121a28cf call 0x121a5cd0 */
  push32(0x121a28d4u); f_121a5cd0();
  /* 121a28d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a28da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a28dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a28df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a28e2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28e8 push edx */
  push32((uint32_t)(EDX));
  /* 121a28e9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 121a28eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a28ee push eax */
  push32((uint32_t)(EAX));
  /* 121a28ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121a28f1 call 0x121a5cd0 */
  push32(0x121a28f6u); f_121a5cd0();
  /* 121a28f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a28f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a28fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a28fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2904 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a290a push edx */
  push32((uint32_t)(EDX));
  /* 121a290b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 121a290d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2910 push eax */
  push32((uint32_t)(EAX));
  /* 121a2911 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2913 call 0x121a5cd0 */
  push32(0x121a2918u); f_121a5cd0();
  /* 121a2918 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a291b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a291e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2920 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2923 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2926 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a292c push edx */
  push32((uint32_t)(EDX));
  /* 121a292d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 121a2932 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2935 push eax */
  push32((uint32_t)(EAX));
  /* 121a2936 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2938 call 0x121a5cd0 */
  push32(0x121a293du); f_121a5cd0();
  /* 121a293d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2940 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a2943 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2945 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 121a2948 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_121a294b:;
  /* 121a294b mov esp, ebp */
  ESP = (EBP);
  /* 121a294d pop ebp */
  EBP = (pop32());
  /* 121a294e ret  */
  ESPCHK(0x121a23c0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x121a2950 (779 bytes, 265 insns) */
void f_121a2950(void) {
  FTRACE(0x121a2950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2950 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2951 mov ebp, esp */
  EBP = (ESP);
  /* 121a2953 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2957 jne 0x121a295e */
  if (!C.zf) goto L_121a295e;
  /* 121a2959 jmp 0x121a2c59 */
  goto L_121a2c59;
L_121a295e:;
  /* 121a295e push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2963 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121a2966 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2967 call 0x121985a0 */
  push32(0x121a296cu); f_121985a0();
  /* 121a296c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a296f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2971 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2974 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a2977 push eax */
  push32((uint32_t)(EAX));
  /* 121a2978 call 0x121985a0 */
  push32(0x121a297du); f_121985a0();
  /* 121a297d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2980 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2985 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a2988 push edx */
  push32((uint32_t)(EDX));
  /* 121a2989 call 0x121985a0 */
  push32(0x121a298eu); f_121985a0();
  /* 121a298e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2991 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2993 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2996 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a2999 push ecx */
  push32((uint32_t)(ECX));
  /* 121a299a call 0x121985a0 */
  push32(0x121a299fu); f_121985a0();
  /* 121a299f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29a7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a29aa push eax */
  push32((uint32_t)(EAX));
  /* 121a29ab call 0x121985a0 */
  push32(0x121a29b0u); f_121985a0();
  /* 121a29b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29b8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121a29bb push edx */
  push32((uint32_t)(EDX));
  /* 121a29bc call 0x121985a0 */
  push32(0x121a29c1u); f_121985a0();
  /* 121a29c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29c9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a29cb push ecx */
  push32((uint32_t)(ECX));
  /* 121a29cc call 0x121985a0 */
  push32(0x121a29d1u); f_121985a0();
  /* 121a29d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29d9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 121a29dc push eax */
  push32((uint32_t)(EAX));
  /* 121a29dd call 0x121985a0 */
  push32(0x121a29e2u); f_121985a0();
  /* 121a29e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29ea mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 121a29ed push edx */
  push32((uint32_t)(EDX));
  /* 121a29ee call 0x121985a0 */
  push32(0x121a29f3u); f_121985a0();
  /* 121a29f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a29f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a29f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a29fb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 121a29fe push ecx */
  push32((uint32_t)(ECX));
  /* 121a29ff call 0x121985a0 */
  push32(0x121a2a04u); f_121985a0();
  /* 121a2a04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a07 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a0c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 121a2a0f push eax */
  push32((uint32_t)(EAX));
  /* 121a2a10 call 0x121985a0 */
  push32(0x121a2a15u); f_121985a0();
  /* 121a2a15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a18 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a1d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 121a2a20 push edx */
  push32((uint32_t)(EDX));
  /* 121a2a21 call 0x121985a0 */
  push32(0x121a2a26u); f_121985a0();
  /* 121a2a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a2e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 121a2a31 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2a32 call 0x121985a0 */
  push32(0x121a2a37u); f_121985a0();
  /* 121a2a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a3f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a2a42 push eax */
  push32((uint32_t)(EAX));
  /* 121a2a43 call 0x121985a0 */
  push32(0x121a2a48u); f_121985a0();
  /* 121a2a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a4b push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a50 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 121a2a53 push edx */
  push32((uint32_t)(EDX));
  /* 121a2a54 call 0x121985a0 */
  push32(0x121a2a59u); f_121985a0();
  /* 121a2a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a5c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a61 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 121a2a64 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2a65 call 0x121985a0 */
  push32(0x121a2a6au); f_121985a0();
  /* 121a2a6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a72 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 121a2a75 push eax */
  push32((uint32_t)(EAX));
  /* 121a2a76 call 0x121985a0 */
  push32(0x121a2a7bu); f_121985a0();
  /* 121a2a7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a7e push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a83 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 121a2a86 push edx */
  push32((uint32_t)(EDX));
  /* 121a2a87 call 0x121985a0 */
  push32(0x121a2a8cu); f_121985a0();
  /* 121a2a8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2a8f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2a91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2a94 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 121a2a97 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2a98 call 0x121985a0 */
  push32(0x121a2a9du); f_121985a0();
  /* 121a2a9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2aa2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2aa5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 121a2aa8 push eax */
  push32((uint32_t)(EAX));
  /* 121a2aa9 call 0x121985a0 */
  push32(0x121a2aaeu); f_121985a0();
  /* 121a2aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ab1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2ab6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 121a2ab9 push edx */
  push32((uint32_t)(EDX));
  /* 121a2aba call 0x121985a0 */
  push32(0x121a2abfu); f_121985a0();
  /* 121a2abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2ac7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 121a2aca push ecx */
  push32((uint32_t)(ECX));
  /* 121a2acb call 0x121985a0 */
  push32(0x121a2ad0u); f_121985a0();
  /* 121a2ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ad3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2ad8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 121a2adb push eax */
  push32((uint32_t)(EAX));
  /* 121a2adc call 0x121985a0 */
  push32(0x121a2ae1u); f_121985a0();
  /* 121a2ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ae4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ae6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2ae9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 121a2aec push edx */
  push32((uint32_t)(EDX));
  /* 121a2aed call 0x121985a0 */
  push32(0x121a2af2u); f_121985a0();
  /* 121a2af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2af5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2af7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2afa mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 121a2afd push ecx */
  push32((uint32_t)(ECX));
  /* 121a2afe call 0x121985a0 */
  push32(0x121a2b03u); f_121985a0();
  /* 121a2b03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b06 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b0b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 121a2b0e push eax */
  push32((uint32_t)(EAX));
  /* 121a2b0f call 0x121985a0 */
  push32(0x121a2b14u); f_121985a0();
  /* 121a2b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b1c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 121a2b1f push edx */
  push32((uint32_t)(EDX));
  /* 121a2b20 call 0x121985a0 */
  push32(0x121a2b25u); f_121985a0();
  /* 121a2b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b28 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b2d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 121a2b30 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2b31 call 0x121985a0 */
  push32(0x121a2b36u); f_121985a0();
  /* 121a2b36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b39 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b3e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 121a2b41 push eax */
  push32((uint32_t)(EAX));
  /* 121a2b42 call 0x121985a0 */
  push32(0x121a2b47u); f_121985a0();
  /* 121a2b47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b4a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b4f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 121a2b52 push edx */
  push32((uint32_t)(EDX));
  /* 121a2b53 call 0x121985a0 */
  push32(0x121a2b58u); f_121985a0();
  /* 121a2b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b5b push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b60 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 121a2b63 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2b64 call 0x121985a0 */
  push32(0x121a2b69u); f_121985a0();
  /* 121a2b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b6c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b71 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 121a2b74 push eax */
  push32((uint32_t)(EAX));
  /* 121a2b75 call 0x121985a0 */
  push32(0x121a2b7au); f_121985a0();
  /* 121a2b7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b82 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 121a2b88 push edx */
  push32((uint32_t)(EDX));
  /* 121a2b89 call 0x121985a0 */
  push32(0x121a2b8eu); f_121985a0();
  /* 121a2b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2b91 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2b93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2b96 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 121a2b9c push ecx */
  push32((uint32_t)(ECX));
  /* 121a2b9d call 0x121985a0 */
  push32(0x121a2ba2u); f_121985a0();
  /* 121a2ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ba5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ba7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2baa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 121a2bb0 push eax */
  push32((uint32_t)(EAX));
  /* 121a2bb1 call 0x121985a0 */
  push32(0x121a2bb6u); f_121985a0();
  /* 121a2bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2bb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2bbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2bbe mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 121a2bc4 push edx */
  push32((uint32_t)(EDX));
  /* 121a2bc5 call 0x121985a0 */
  push32(0x121a2bcau); f_121985a0();
  /* 121a2bca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2bcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2bd2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 121a2bd8 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2bd9 call 0x121985a0 */
  push32(0x121a2bdeu); f_121985a0();
  /* 121a2bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2be1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2be3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2be6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 121a2bec push eax */
  push32((uint32_t)(EAX));
  /* 121a2bed call 0x121985a0 */
  push32(0x121a2bf2u); f_121985a0();
  /* 121a2bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2bf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2bfa mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 121a2c00 push edx */
  push32((uint32_t)(EDX));
  /* 121a2c01 call 0x121985a0 */
  push32(0x121a2c06u); f_121985a0();
  /* 121a2c06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2c09 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2c0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2c0e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 121a2c14 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2c15 call 0x121985a0 */
  push32(0x121a2c1au); f_121985a0();
  /* 121a2c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2c22 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 121a2c28 push eax */
  push32((uint32_t)(EAX));
  /* 121a2c29 call 0x121985a0 */
  push32(0x121a2c2eu); f_121985a0();
  /* 121a2c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2c31 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2c33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2c36 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 121a2c3c push edx */
  push32((uint32_t)(EDX));
  /* 121a2c3d call 0x121985a0 */
  push32(0x121a2c42u); f_121985a0();
  /* 121a2c42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2c45 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2c47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2c4a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 121a2c50 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2c51 call 0x121985a0 */
  push32(0x121a2c56u); f_121985a0();
  /* 121a2c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a2c59:;
  /* 121a2c59 pop ebp */
  EBP = (pop32());
  /* 121a2c5a ret  */
  ESPCHK(0x121a2950u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c60 @ 0x121a2c60 (678 bytes, 180 insns) */
void f_121a2c60(void) {
  FTRACE(0x121a2c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2c60 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2c61 mov ebp, esp */
  EBP = (ESP);
  /* 121a2c63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a2c66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a2c6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a2c6f mov ax, word ptr [0x121c3962] */
  AX = (r16((uint32_t)(0x121c3962)));
  /* 121a2c75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a2c78 cmp dword ptr [0x121c3908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2c7f je 0x121a2dda */
  if (C.zf) goto L_121a2dda;
  /* 121a2c85 push 0x121c3930 */
  push32((uint32_t)(0x121c3930u));
  /* 121a2c8a push 0xe */
  push32((uint32_t)(0xeu));
  /* 121a2c8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2c8f push ecx */
  push32((uint32_t)(ECX));
  /* 121a2c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2c92 call 0x121a5cd0 */
  push32(0x121a2c97u); f_121a5cd0();
  /* 121a2c97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2c9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2c9d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 121a2c9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a2ca2 push 0x121c3934 */
  push32((uint32_t)(0x121c3934u));
  /* 121a2ca7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 121a2ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2cac push eax */
  push32((uint32_t)(EAX));
  /* 121a2cad push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2caf call 0x121a5cd0 */
  push32(0x121a2cb4u); f_121a5cd0();
  /* 121a2cb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2cb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2cba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2cbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a2cbf push 0x121c3938 */
  push32((uint32_t)(0x121c3938u));
  /* 121a2cc4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121a2cc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2cc9 push edx */
  push32((uint32_t)(EDX));
  /* 121a2cca push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2ccc call 0x121a5cd0 */
  push32(0x121a2cd1u); f_121a5cd0();
  /* 121a2cd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2cd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a2cd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a2cd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a2cdc mov edx, dword ptr [0x121c3938] */
  EDX = (r32((uint32_t)(0x121c3938)));
  /* 121a2ce2 push edx */
  push32((uint32_t)(EDX));
  /* 121a2ce3 call 0x121a2f10 */
  push32(0x121a2ce8u); f_121a2f10();
  /* 121a2ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ceb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2cef je 0x121a2d49 */
  if (C.zf) goto L_121a2d49;
  /* 121a2cf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2cf3 mov eax, dword ptr [0x121c3930] */
  EAX = (r32((uint32_t)(0x121c3930)));
  /* 121a2cf8 push eax */
  push32((uint32_t)(EAX));
  /* 121a2cf9 call 0x121985a0 */
  push32(0x121a2cfeu); f_121985a0();
  /* 121a2cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2d01 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2d03 mov ecx, dword ptr [0x121c3934] */
  ECX = (r32((uint32_t)(0x121c3934)));
  /* 121a2d09 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2d0a call 0x121985a0 */
  push32(0x121a2d0fu); f_121985a0();
  /* 121a2d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2d14 mov edx, dword ptr [0x121c3938] */
  EDX = (r32((uint32_t)(0x121c3938)));
  /* 121a2d1a push edx */
  push32((uint32_t)(EDX));
  /* 121a2d1b call 0x121985a0 */
  push32(0x121a2d20u); f_121985a0();
  /* 121a2d20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2d23 mov dword ptr [0x121c3930], 0 */
  w32((uint32_t)(0x121c3930), (0x0u));
  /* 121a2d2d mov dword ptr [0x121c3934], 0 */
  w32((uint32_t)(0x121c3934), (0x0u));
  /* 121a2d37 mov dword ptr [0x121c3938], 0 */
  w32((uint32_t)(0x121c3938), (0x0u));
  /* 121a2d41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a2d44 jmp 0x121a2f02 */
  goto L_121a2f02;
L_121a2d49:;
  /* 121a2d49 mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2d4e cmp dword ptr [eax], 0x121c2d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x121c2d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2d54 je 0x121a2d90 */
  if (C.zf) goto L_121a2d90;
  /* 121a2d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2d58 mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2d5e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a2d60 push edx */
  push32((uint32_t)(EDX));
  /* 121a2d61 call 0x121985a0 */
  push32(0x121a2d66u); f_121985a0();
  /* 121a2d66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2d69 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2d6b mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2d70 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121a2d73 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2d74 call 0x121985a0 */
  push32(0x121a2d79u); f_121985a0();
  /* 121a2d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2d7c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2d7e mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2d84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a2d87 push eax */
  push32((uint32_t)(EAX));
  /* 121a2d88 call 0x121985a0 */
  push32(0x121a2d8du); f_121985a0();
  /* 121a2d8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a2d90:;
  /* 121a2d90 mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2d96 mov edx, dword ptr [0x121c3930] */
  EDX = (r32((uint32_t)(0x121c3930)));
  /* 121a2d9c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121a2d9e mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2da3 mov ecx, dword ptr [0x121c3934] */
  ECX = (r32((uint32_t)(0x121c3934)));
  /* 121a2da9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 121a2dac mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2db2 mov eax, dword ptr [0x121c3938] */
  EAX = (r32((uint32_t)(0x121c3938)));
  /* 121a2db7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121a2dba mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2dc0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a2dc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a2dc4 mov byte ptr [0x121c1ea8], al */
  w8((uint32_t)(0x121c1ea8), (AL));
  /* 121a2dc9 mov dword ptr [0x121c1eac], 1 */
  w32((uint32_t)(0x121c1eac), (0x1u));
  /* 121a2dd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a2dd5 jmp 0x121a2f02 */
  goto L_121a2f02;
L_121a2dda:;
  /* 121a2dda push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ddc mov ecx, dword ptr [0x121c3930] */
  ECX = (r32((uint32_t)(0x121c3930)));
  /* 121a2de2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2de3 call 0x121985a0 */
  push32(0x121a2de8u); f_121985a0();
  /* 121a2de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2deb push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2ded mov edx, dword ptr [0x121c3934] */
  EDX = (r32((uint32_t)(0x121c3934)));
  /* 121a2df3 push edx */
  push32((uint32_t)(EDX));
  /* 121a2df4 call 0x121985a0 */
  push32(0x121a2df9u); f_121985a0();
  /* 121a2df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2dfc push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2dfe mov eax, dword ptr [0x121c3938] */
  EAX = (r32((uint32_t)(0x121c3938)));
  /* 121a2e03 push eax */
  push32((uint32_t)(EAX));
  /* 121a2e04 call 0x121985a0 */
  push32(0x121a2e09u); f_121985a0();
  /* 121a2e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2e0c mov dword ptr [0x121c3930], 0 */
  w32((uint32_t)(0x121c3930), (0x0u));
  /* 121a2e16 mov dword ptr [0x121c3934], 0 */
  w32((uint32_t)(0x121c3934), (0x0u));
  /* 121a2e20 mov dword ptr [0x121c3938], 0 */
  w32((uint32_t)(0x121c3938), (0x0u));
  /* 121a2e2a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 121a2e2f push 0x121bf164 */
  push32((uint32_t)(0x121bf164u));
  /* 121a2e34 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2e36 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2e38 call 0x12197b10 */
  push32(0x121a2e3du); f_12197b10();
  /* 121a2e3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2e40 mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2e46 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121a2e48 mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2e4e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2e51 jne 0x121a2e5b */
  if (!C.zf) goto L_121a2e5b;
  /* 121a2e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a2e56 jmp 0x121a2f02 */
  goto L_121a2f02;
L_121a2e5b:;
  /* 121a2e5b push 0x121bf134 */
  push32((uint32_t)(0x121bf134u));
  /* 121a2e60 mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2e65 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121a2e67 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2e68 call 0x1219aac0 */
  push32(0x121a2e6du); f_1219aac0();
  /* 121a2e6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2e70 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 121a2e75 push 0x121bf164 */
  push32((uint32_t)(0x121bf164u));
  /* 121a2e7a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2e7c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2e7e call 0x12197b10 */
  push32(0x121a2e83u); f_12197b10();
  /* 121a2e83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2e86 mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2e8c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 121a2e8f mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2e94 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2e98 jne 0x121a2e9f */
  if (!C.zf) goto L_121a2e9f;
  /* 121a2e9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a2e9d jmp 0x121a2f02 */
  goto L_121a2f02;
L_121a2e9f:;
  /* 121a2e9f mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2ea5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121a2ea8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121a2eab push 0x92 */
  push32((uint32_t)(0x92u));
  /* 121a2eb0 push 0x121bf164 */
  push32((uint32_t)(0x121bf164u));
  /* 121a2eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2eb9 call 0x12197b10 */
  push32(0x121a2ebeu); f_12197b10();
  /* 121a2ebe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ec1 mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2ec7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 121a2eca mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2ed0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2ed4 jne 0x121a2edb */
  if (!C.zf) goto L_121a2edb;
  /* 121a2ed6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a2ed9 jmp 0x121a2f02 */
  goto L_121a2f02;
L_121a2edb:;
  /* 121a2edb mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2ee0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121a2ee3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 121a2ee6 mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a2eec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a2eee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a2ef0 mov byte ptr [0x121c1ea8], cl */
  w8((uint32_t)(0x121c1ea8), (CL));
  /* 121a2ef6 mov dword ptr [0x121c1eac], 1 */
  w32((uint32_t)(0x121c1eac), (0x1u));
  /* 121a2f00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a2f02:;
  /* 121a2f02 mov esp, ebp */
  ESP = (EBP);
  /* 121a2f04 pop ebp */
  EBP = (pop32());
  /* 121a2f05 ret  */
  ESPCHK(0x121a2c60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x121a2f10 (125 bytes, 49 insns) */
void f_121a2f10(void) {
  FTRACE(0x121a2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2f11 mov ebp, esp */
  EBP = (ESP);
  /* 121a2f13 push ecx */
  push32((uint32_t)(ECX));
L_121a2f14:;
  /* 121a2f14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f17 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a2f1a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a2f1c je 0x121a2f89 */
  if (C.zf) goto L_121a2f89;
  /* 121a2f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f21 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a2f24 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2f27 jl 0x121a2f4d */
  if ((C.sf!=C.of)) goto L_121a2f4d;
  /* 121a2f29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a2f2f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2f32 jg 0x121a2f4d */
  if ((!C.zf&&C.sf==C.of)) goto L_121a2f4d;
  /* 121a2f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f37 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a2f3a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a2f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f40 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121a2f42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2f48 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a2f4b jmp 0x121a2f87 */
  goto L_121a2f87;
L_121a2f4d:;
  /* 121a2f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a2f53 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2f56 jne 0x121a2f7e */
  if (!C.zf) goto L_121a2f7e;
  /* 121a2f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a2f5e:;
  /* 121a2f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2f61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2f64 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121a2f67 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a2f69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2f6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2f6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a2f72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2f75 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a2f78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a2f7a jne 0x121a2f5e */
  if (!C.zf) goto L_121a2f5e;
  /* 121a2f7c jmp 0x121a2f87 */
  goto L_121a2f87;
L_121a2f7e:;
  /* 121a2f7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a2f81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2f84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121a2f87:;
  /* 121a2f87 jmp 0x121a2f14 */
  goto L_121a2f14;
L_121a2f89:;
  /* 121a2f89 mov esp, ebp */
  ESP = (EBP);
  /* 121a2f8b pop ebp */
  EBP = (pop32());
  /* 121a2f8c ret  */
  ESPCHK(0x121a2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x121a2f90 (304 bytes, 85 insns) */
void f_121a2f90(void) {
  FTRACE(0x121a2f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a2f90 push ebp */
  push32((uint32_t)(EBP));
  /* 121a2f91 mov ebp, esp */
  EBP = (ESP);
  /* 121a2f93 push ecx */
  push32((uint32_t)(ECX));
  /* 121a2f94 cmp dword ptr [0x121c3904], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3904))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2f9b je 0x121a305c */
  if (C.zf) goto L_121a305c;
  /* 121a2fa1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 121a2fa3 push 0x121bf170 */
  push32((uint32_t)(0x121bf170u));
  /* 121a2fa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2faa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121a2fac push 1 */
  push32((uint32_t)(0x1u));
  /* 121a2fae call 0x12197f20 */
  push32(0x121a2fb3u); f_12197f20();
  /* 121a2fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2fb6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a2fb9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a2fbd jne 0x121a2fc9 */
  if (!C.zf) goto L_121a2fc9;
  /* 121a2fbf mov eax, 1 */
  EAX = (0x1u);
  /* 121a2fc4 jmp 0x121a30bc */
  goto L_121a30bc;
L_121a2fc9:;
  /* 121a2fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2fcc push eax */
  push32((uint32_t)(EAX));
  /* 121a2fcd call 0x121a30c0 */
  push32(0x121a2fd2u); f_121a30c0();
  /* 121a2fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a2fd7 je 0x121a2ffd */
  if (C.zf) goto L_121a2ffd;
  /* 121a2fd9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2fdc push ecx */
  push32((uint32_t)(ECX));
  /* 121a2fdd call 0x121a3350 */
  push32(0x121a2fe2u); f_121a3350();
  /* 121a2fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2fe5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a2fe7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a2fea push edx */
  push32((uint32_t)(EDX));
  /* 121a2feb call 0x121985a0 */
  push32(0x121a2ff0u); f_121985a0();
  /* 121a2ff0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a2ff3 mov eax, 1 */
  EAX = (0x1u);
  /* 121a2ff8 jmp 0x121a30bc */
  goto L_121a30bc;
L_121a2ffd:;
  /* 121a2ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3000 mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a3006 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a3008 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a300a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a300d mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a3013 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 121a3016 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 121a3019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a301c mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a3022 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121a3025 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 121a3028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a302b mov dword ptr [0x121c2d88], eax */
  w32((uint32_t)(0x121c2d88), (EAX));
  /* 121a3030 mov ecx, dword ptr [0x121c393c] */
  ECX = (r32((uint32_t)(0x121c393c)));
  /* 121a3036 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3037 call 0x121a3350 */
  push32(0x121a303cu); f_121a3350();
  /* 121a303c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a303f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3041 mov edx, dword ptr [0x121c393c] */
  EDX = (r32((uint32_t)(0x121c393c)));
  /* 121a3047 push edx */
  push32((uint32_t)(EDX));
  /* 121a3048 call 0x121985a0 */
  push32(0x121a304du); f_121985a0();
  /* 121a304d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3053 mov dword ptr [0x121c393c], eax */
  w32((uint32_t)(0x121c393c), (EAX));
  /* 121a3058 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a305a jmp 0x121a30bc */
  goto L_121a30bc;
L_121a305c:;
  /* 121a305c mov ecx, dword ptr [0x121c2d88] */
  ECX = (r32((uint32_t)(0x121c2d88)));
  /* 121a3062 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a3064 mov dword ptr [0x121c2d58], edx */
  w32((uint32_t)(0x121c2d58), (EDX));
  /* 121a306a mov eax, dword ptr [0x121c2d88] */
  EAX = (r32((uint32_t)(0x121c2d88)));
  /* 121a306f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 121a3072 mov dword ptr [0x121c2d5c], ecx */
  w32((uint32_t)(0x121c2d5c), (ECX));
  /* 121a3078 mov edx, dword ptr [0x121c2d88] */
  EDX = (r32((uint32_t)(0x121c2d88)));
  /* 121a307e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a3081 mov dword ptr [0x121c2d60], eax */
  w32((uint32_t)(0x121c2d60), (EAX));
  /* 121a3086 mov dword ptr [0x121c2d88], 0x121c2d58 */
  w32((uint32_t)(0x121c2d88), (0x121c2d58u));
  /* 121a3090 mov ecx, dword ptr [0x121c393c] */
  ECX = (r32((uint32_t)(0x121c393c)));
  /* 121a3096 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3097 call 0x121a3350 */
  push32(0x121a309cu); f_121a3350();
  /* 121a309c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a309f push 2 */
  push32((uint32_t)(0x2u));
  /* 121a30a1 mov edx, dword ptr [0x121c393c] */
  EDX = (r32((uint32_t)(0x121c393c)));
  /* 121a30a7 push edx */
  push32((uint32_t)(EDX));
  /* 121a30a8 call 0x121985a0 */
  push32(0x121a30adu); f_121985a0();
  /* 121a30ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a30b0 mov dword ptr [0x121c393c], 0 */
  w32((uint32_t)(0x121c393c), (0x0u));
  /* 121a30ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a30bc:;
  /* 121a30bc mov esp, ebp */
  ESP = (EBP);
  /* 121a30be pop ebp */
  EBP = (pop32());
  /* 121a30bf ret  */
  ESPCHK(0x121a2f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x121a30c0 (525 bytes, 200 insns) */
void f_121a30c0(void) {
  FTRACE(0x121a30c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a30c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a30c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a30c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a30c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a30cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a30cf mov ax, word ptr [0x121c395c] */
  AX = (r16((uint32_t)(0x121c395c)));
  /* 121a30d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a30d8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a30dc jne 0x121a30e6 */
  if (!C.zf) goto L_121a30e6;
  /* 121a30de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a30e1 jmp 0x121a32c9 */
  goto L_121a32c9;
L_121a30e6:;
  /* 121a30e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a30e9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a30ec push ecx */
  push32((uint32_t)(ECX));
  /* 121a30ed push 0x15 */
  push32((uint32_t)(0x15u));
  /* 121a30ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a30f2 push edx */
  push32((uint32_t)(EDX));
  /* 121a30f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a30f5 call 0x121a5cd0 */
  push32(0x121a30fau); f_121a5cd0();
  /* 121a30fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a30fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3100 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3102 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3105 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3108 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a310b push edx */
  push32((uint32_t)(EDX));
  /* 121a310c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 121a310e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3111 push eax */
  push32((uint32_t)(EAX));
  /* 121a3112 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3114 call 0x121a5cd0 */
  push32(0x121a3119u); f_121a5cd0();
  /* 121a3119 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a311c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a311f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3121 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3124 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3127 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a312a push edx */
  push32((uint32_t)(EDX));
  /* 121a312b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121a312d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3130 push eax */
  push32((uint32_t)(EAX));
  /* 121a3131 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3133 call 0x121a5cd0 */
  push32(0x121a3138u); f_121a5cd0();
  /* 121a3138 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a313b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a313e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3140 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3143 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3146 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3149 push edx */
  push32((uint32_t)(EDX));
  /* 121a314a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121a314c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a314f push eax */
  push32((uint32_t)(EAX));
  /* 121a3150 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3152 call 0x121a5cd0 */
  push32(0x121a3157u); f_121a5cd0();
  /* 121a3157 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a315a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a315d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a315f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3162 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3165 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3168 push edx */
  push32((uint32_t)(EDX));
  /* 121a3169 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121a316b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a316e push eax */
  push32((uint32_t)(EAX));
  /* 121a316f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3171 call 0x121a5cd0 */
  push32(0x121a3176u); f_121a5cd0();
  /* 121a3176 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a317c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a317e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3184 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 121a3187 push eax */
  push32((uint32_t)(EAX));
  /* 121a3188 call 0x121a32d0 */
  push32(0x121a318du); f_121a32d0();
  /* 121a318d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3190 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3193 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3196 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3197 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 121a3199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a319c push edx */
  push32((uint32_t)(EDX));
  /* 121a319d push 1 */
  push32((uint32_t)(0x1u));
  /* 121a319f call 0x121a5cd0 */
  push32(0x121a31a4u); f_121a5cd0();
  /* 121a31a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a31aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a31ac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a31af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a31b2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31b5 push edx */
  push32((uint32_t)(EDX));
  /* 121a31b6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 121a31b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a31bb push eax */
  push32((uint32_t)(EAX));
  /* 121a31bc push 1 */
  push32((uint32_t)(0x1u));
  /* 121a31be call 0x121a5cd0 */
  push32(0x121a31c3u); f_121a5cd0();
  /* 121a31c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a31c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a31cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a31ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a31d1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31d4 push edx */
  push32((uint32_t)(EDX));
  /* 121a31d5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121a31d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a31da push eax */
  push32((uint32_t)(EAX));
  /* 121a31db push 0 */
  push32((uint32_t)(0x0u));
  /* 121a31dd call 0x121a5cd0 */
  push32(0x121a31e2u); f_121a5cd0();
  /* 121a31e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a31e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a31ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a31ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a31f0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a31f3 push edx */
  push32((uint32_t)(EDX));
  /* 121a31f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121a31f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a31f9 push eax */
  push32((uint32_t)(EAX));
  /* 121a31fa push 0 */
  push32((uint32_t)(0x0u));
  /* 121a31fc call 0x121a5cd0 */
  push32(0x121a3201u); f_121a5cd0();
  /* 121a3201 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3204 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3207 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3209 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a320f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3212 push edx */
  push32((uint32_t)(EDX));
  /* 121a3213 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 121a3215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3218 push eax */
  push32((uint32_t)(EAX));
  /* 121a3219 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a321b call 0x121a5cd0 */
  push32(0x121a3220u); f_121a5cd0();
  /* 121a3220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3228 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a322b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a322e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3231 push edx */
  push32((uint32_t)(EDX));
  /* 121a3232 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 121a3234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3237 push eax */
  push32((uint32_t)(EAX));
  /* 121a3238 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a323a call 0x121a5cd0 */
  push32(0x121a323fu); f_121a5cd0();
  /* 121a323f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3242 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3245 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3247 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a324a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a324d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3250 push edx */
  push32((uint32_t)(EDX));
  /* 121a3251 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 121a3253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3256 push eax */
  push32((uint32_t)(EAX));
  /* 121a3257 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a3259 call 0x121a5cd0 */
  push32(0x121a325eu); f_121a5cd0();
  /* 121a325e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3261 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3264 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3266 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a326c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a326f push edx */
  push32((uint32_t)(EDX));
  /* 121a3270 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 121a3272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3275 push eax */
  push32((uint32_t)(EAX));
  /* 121a3276 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a3278 call 0x121a5cd0 */
  push32(0x121a327du); f_121a5cd0();
  /* 121a327d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3280 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a3283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3285 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a3288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a328b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a328e push edx */
  push32((uint32_t)(EDX));
  /* 121a328f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 121a3291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3294 push eax */
  push32((uint32_t)(EAX));
  /* 121a3295 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a3297 call 0x121a5cd0 */
  push32(0x121a329cu); f_121a5cd0();
  /* 121a329c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a329f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a32a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a32a4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a32a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a32aa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a32ad push edx */
  push32((uint32_t)(EDX));
  /* 121a32ae push 0x53 */
  push32((uint32_t)(0x53u));
  /* 121a32b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a32b3 push eax */
  push32((uint32_t)(EAX));
  /* 121a32b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a32b6 call 0x121a5cd0 */
  push32(0x121a32bbu); f_121a5cd0();
  /* 121a32bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a32be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a32c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 121a32c3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a32c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121a32c9:;
  /* 121a32c9 mov esp, ebp */
  ESP = (EBP);
  /* 121a32cb pop ebp */
  EBP = (pop32());
  /* 121a32cc ret  */
  ESPCHK(0x121a30c0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x121a32d0 (125 bytes, 49 insns) */
void f_121a32d0(void) {
  FTRACE(0x121a32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a32d1 mov ebp, esp */
  EBP = (ESP);
  /* 121a32d3 push ecx */
  push32((uint32_t)(ECX));
L_121a32d4:;
  /* 121a32d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a32d7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a32da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a32dc je 0x121a3349 */
  if (C.zf) goto L_121a3349;
  /* 121a32de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a32e1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a32e4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a32e7 jl 0x121a330d */
  if ((C.sf!=C.of)) goto L_121a330d;
  /* 121a32e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a32ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a32ef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a32f2 jg 0x121a330d */
  if ((!C.zf&&C.sf==C.of)) goto L_121a330d;
  /* 121a32f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a32f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a32fa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a32fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3300 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 121a3302 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3308 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a330b jmp 0x121a3347 */
  goto L_121a3347;
L_121a330d:;
  /* 121a330d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3310 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a3313 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3316 jne 0x121a333e */
  if (!C.zf) goto L_121a333e;
  /* 121a3318 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a331b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a331e:;
  /* 121a331e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3324 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121a3327 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 121a3329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a332c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a332f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a3332 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3335 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a3338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a333a jne 0x121a331e */
  if (!C.zf) goto L_121a331e;
  /* 121a333c jmp 0x121a3347 */
  goto L_121a3347;
L_121a333e:;
  /* 121a333e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3341 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3344 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_121a3347:;
  /* 121a3347 jmp 0x121a32d4 */
  goto L_121a32d4;
L_121a3349:;
  /* 121a3349 mov esp, ebp */
  ESP = (EBP);
  /* 121a334b pop ebp */
  EBP = (pop32());
  /* 121a334c ret  */
  ESPCHK(0x121a32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013350 @ 0x121a3350 (147 bytes, 52 insns) */
void f_121a3350(void) {
  FTRACE(0x121a3350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3350 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3351 mov ebp, esp */
  EBP = (ESP);
  /* 121a3353 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3357 jne 0x121a335e */
  if (!C.zf) goto L_121a335e;
  /* 121a3359 jmp 0x121a33e1 */
  goto L_121a33e1;
L_121a335e:;
  /* 121a335e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3361 cmp dword ptr [eax + 0xc], 0x121c3998 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x121c3998u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3368 je 0x121a33e1 */
  if (C.zf) goto L_121a33e1;
  /* 121a336a push 2 */
  push32((uint32_t)(0x2u));
  /* 121a336c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a336f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a3372 push edx */
  push32((uint32_t)(EDX));
  /* 121a3373 call 0x121985a0 */
  push32(0x121a3378u); f_121985a0();
  /* 121a3378 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a337b push 2 */
  push32((uint32_t)(0x2u));
  /* 121a337d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3380 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121a3383 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3384 call 0x121985a0 */
  push32(0x121a3389u); f_121985a0();
  /* 121a3389 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a338c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a338e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3391 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121a3394 push eax */
  push32((uint32_t)(EAX));
  /* 121a3395 call 0x121985a0 */
  push32(0x121a339au); f_121985a0();
  /* 121a339a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a339d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a339f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a33a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121a33a5 push edx */
  push32((uint32_t)(EDX));
  /* 121a33a6 call 0x121985a0 */
  push32(0x121a33abu); f_121985a0();
  /* 121a33ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a33ae push 2 */
  push32((uint32_t)(0x2u));
  /* 121a33b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a33b3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 121a33b6 push ecx */
  push32((uint32_t)(ECX));
  /* 121a33b7 call 0x121985a0 */
  push32(0x121a33bcu); f_121985a0();
  /* 121a33bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a33bf push 2 */
  push32((uint32_t)(0x2u));
  /* 121a33c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a33c4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 121a33c7 push eax */
  push32((uint32_t)(EAX));
  /* 121a33c8 call 0x121985a0 */
  push32(0x121a33cdu); f_121985a0();
  /* 121a33cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a33d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a33d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a33d5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 121a33d8 push edx */
  push32((uint32_t)(EDX));
  /* 121a33d9 call 0x121985a0 */
  push32(0x121a33deu); f_121985a0();
  /* 121a33de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a33e1:;
  /* 121a33e1 pop ebp */
  EBP = (pop32());
  /* 121a33e2 ret  */
  ESPCHK(0x121a3350u, _esp0);
  ESP += 4; return;
}

/* FUN_100133f0 @ 0x121a33f0 (928 bytes, 284 insns) */
void f_121a33f0(void) {
  FTRACE(0x121a33f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a33f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a33f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a33f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a33f6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 121a33fd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 121a3404 cmp dword ptr [0x121c3900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a340b je 0x121a3741 */
  if (C.zf) goto L_121a3741;
  /* 121a3411 cmp dword ptr [0x121c3910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3418 jne 0x121a3440 */
  if (!C.zf) goto L_121a3440;
  /* 121a341a push 0x121c3910 */
  push32((uint32_t)(0x121c3910u));
  /* 121a341f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121a3424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3426 mov ax, word ptr [0x121c3954] */
  AX = (r16((uint32_t)(0x121c3954)));
  /* 121a342c push eax */
  push32((uint32_t)(EAX));
  /* 121a342d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a342f call 0x121a5cd0 */
  push32(0x121a3434u); f_121a5cd0();
  /* 121a3434 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3437 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3439 je 0x121a3440 */
  if (C.zf) goto L_121a3440;
  /* 121a343b jmp 0x121a3702 */
  goto L_121a3702;
L_121a3440:;
  /* 121a3440 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 121a3442 push 0x121bf17c */
  push32((uint32_t)(0x121bf17cu));
  /* 121a3447 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3449 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121a344e call 0x12197b10 */
  push32(0x121a3453u); f_12197b10();
  /* 121a3453 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3456 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 121a3459 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121a345b push 0x121bf17c */
  push32((uint32_t)(0x121bf17cu));
  /* 121a3460 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3462 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121a3467 call 0x12197b10 */
  push32(0x121a346cu); f_12197b10();
  /* 121a346c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a346f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 121a3472 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 121a3474 push 0x121bf17c */
  push32((uint32_t)(0x121bf17cu));
  /* 121a3479 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a347b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 121a3480 call 0x12197b10 */
  push32(0x121a3485u); f_12197b10();
  /* 121a3485 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3488 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 121a348b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 121a348d push 0x121bf17c */
  push32((uint32_t)(0x121bf17cu));
  /* 121a3492 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3494 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 121a3499 call 0x12197b10 */
  push32(0x121a349eu); f_12197b10();
  /* 121a349e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a34a1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121a34a4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a34a8 je 0x121a34bc */
  if (C.zf) goto L_121a34bc;
  /* 121a34aa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a34ae je 0x121a34bc */
  if (C.zf) goto L_121a34bc;
  /* 121a34b0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a34b4 je 0x121a34bc */
  if (C.zf) goto L_121a34bc;
  /* 121a34b6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a34ba jne 0x121a34c1 */
  if (!C.zf) goto L_121a34c1;
L_121a34bc:;
  /* 121a34bc jmp 0x121a3702 */
  goto L_121a3702;
L_121a34c1:;
  /* 121a34c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a34c4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 121a34c7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121a34ce jmp 0x121a34d9 */
  goto L_121a34d9;
L_121a34d0:;
  /* 121a34d0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a34d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a34d6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121a34d9:;
  /* 121a34d9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a34e0 jge 0x121a34f5 */
  if ((C.sf==C.of)) goto L_121a34f5;
  /* 121a34e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a34e5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 121a34e8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 121a34ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a34ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a34f0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121a34f3 jmp 0x121a34d0 */
  goto L_121a34d0;
L_121a34f5:;
  /* 121a34f5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 121a34f8 push eax */
  push32((uint32_t)(EAX));
  /* 121a34f9 mov ecx, dword ptr [0x121c3910] */
  ECX = (r32((uint32_t)(0x121c3910)));
  /* 121a34ff push ecx */
  push32((uint32_t)(ECX));
  /* 121a3500 call dword ptr [0x121c62ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62ec))), 0x121a3506u);
  /* 121a3506 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3508 jne 0x121a350f */
  if (!C.zf) goto L_121a350f;
  /* 121a350a jmp 0x121a3702 */
  goto L_121a3702;
L_121a350f:;
  /* 121a350f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3513 jbe 0x121a351a */
  if ((C.cf||C.zf)) goto L_121a351a;
  /* 121a3515 jmp 0x121a3702 */
  goto L_121a3702;
L_121a351a:;
  /* 121a351a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a351d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a3523 mov dword ptr [0x121c1ea4], edx */
  w32((uint32_t)(0x121c1ea4), (EDX));
  /* 121a3529 cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3530 jle 0x121a3589 */
  if ((C.zf||C.sf!=C.of)) goto L_121a3589;
  /* 121a3532 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 121a3535 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121a3538 jmp 0x121a3543 */
  goto L_121a3543;
L_121a353a:;
  /* 121a353a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a353d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3540 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_121a3543:;
  /* 121a3543 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3546 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3548 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a354a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a354c je 0x121a3589 */
  if (C.zf) goto L_121a3589;
  /* 121a354e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3551 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a3553 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 121a3556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a3558 je 0x121a3589 */
  if (C.zf) goto L_121a3589;
  /* 121a355a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a355d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a355f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a3561 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 121a3564 jmp 0x121a356f */
  goto L_121a356f;
L_121a3566:;
  /* 121a3566 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a3569 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a356c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_121a356f:;
  /* 121a356f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3572 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3574 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121a3577 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a357a jg 0x121a3587 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a3587;
  /* 121a357c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a357f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3582 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121a3585 jmp 0x121a3566 */
  goto L_121a3566;
L_121a3587:;
  /* 121a3587 jmp 0x121a353a */
  goto L_121a353a;
L_121a3589:;
  /* 121a3589 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a358b push 0 */
  push32((uint32_t)(0x0u));
  /* 121a358d push 0 */
  push32((uint32_t)(0x0u));
  /* 121a358f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a3592 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3595 push eax */
  push32((uint32_t)(EAX));
  /* 121a3596 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121a359b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a359e push ecx */
  push32((uint32_t)(ECX));
  /* 121a359f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a35a1 call 0x1219fd40 */
  push32(0x121a35a6u); f_1219fd40();
  /* 121a35a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a35a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a35ab jne 0x121a35b2 */
  if (!C.zf) goto L_121a35b2;
  /* 121a35ad jmp 0x121a3702 */
  goto L_121a3702;
L_121a35b2:;
  /* 121a35b2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a35b5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 121a35ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a35bd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 121a35c0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 121a35c7 jmp 0x121a35d2 */
  goto L_121a35d2;
L_121a35c9:;
  /* 121a35c9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a35cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a35cf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121a35d2:;
  /* 121a35d2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a35d9 jge 0x121a35f0 */
  if ((C.sf==C.of)) goto L_121a35f0;
  /* 121a35db mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a35de mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 121a35e2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 121a35e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121a35e8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a35eb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 121a35ee jmp 0x121a35c9 */
  goto L_121a35c9;
L_121a35f0:;
  /* 121a35f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a35f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a35f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a35f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a35fa push edx */
  push32((uint32_t)(EDX));
  /* 121a35fb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 121a3600 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a3603 push eax */
  push32((uint32_t)(EAX));
  /* 121a3604 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3606 call 0x121a5f70 */
  push32(0x121a360bu); f_121a5f70();
  /* 121a360b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a360e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3610 jne 0x121a3617 */
  if (!C.zf) goto L_121a3617;
  /* 121a3612 jmp 0x121a3702 */
  goto L_121a3702;
L_121a3617:;
  /* 121a3617 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a361a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 121a361f cmp dword ptr [0x121c1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121c1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3626 jle 0x121a3683 */
  if ((C.zf||C.sf!=C.of)) goto L_121a3683;
  /* 121a3628 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 121a362b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121a362e jmp 0x121a3639 */
  goto L_121a3639;
L_121a3630:;
  /* 121a3630 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3633 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3636 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_121a3639:;
  /* 121a3639 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a363c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121a363e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121a3640 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a3642 je 0x121a3683 */
  if (C.zf) goto L_121a3683;
  /* 121a3644 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3647 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3649 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 121a364c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a364e je 0x121a3683 */
  if (C.zf) goto L_121a3683;
  /* 121a3650 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3655 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a3657 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 121a365a jmp 0x121a3665 */
  goto L_121a3665;
L_121a365c:;
  /* 121a365c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a365f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3662 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_121a3665:;
  /* 121a3665 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 121a3668 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a366a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 121a366d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3670 jg 0x121a3681 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a3681;
  /* 121a3672 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 121a3675 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a3678 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 121a367f jmp 0x121a365c */
  goto L_121a365c;
L_121a3681:;
  /* 121a3681 jmp 0x121a3630 */
  goto L_121a3630;
L_121a3683:;
  /* 121a3683 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a3686 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3689 mov dword ptr [0x121c1c98], eax */
  w32((uint32_t)(0x121c1c98), (EAX));
  /* 121a368e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a3691 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3694 mov dword ptr [0x121c1c9c], ecx */
  w32((uint32_t)(0x121c1c9c), (ECX));
  /* 121a369a cmp dword ptr [0x121c3940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a36a1 je 0x121a36b4 */
  if (C.zf) goto L_121a36b4;
  /* 121a36a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a36a5 mov edx, dword ptr [0x121c3940] */
  EDX = (r32((uint32_t)(0x121c3940)));
  /* 121a36ab push edx */
  push32((uint32_t)(EDX));
  /* 121a36ac call 0x121985a0 */
  push32(0x121a36b1u); f_121985a0();
  /* 121a36b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a36b4:;
  /* 121a36b4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a36b7 mov dword ptr [0x121c3940], eax */
  w32((uint32_t)(0x121c3940), (EAX));
  /* 121a36bc cmp dword ptr [0x121c3944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a36c3 je 0x121a36d6 */
  if (C.zf) goto L_121a36d6;
  /* 121a36c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a36c7 mov ecx, dword ptr [0x121c3944] */
  ECX = (r32((uint32_t)(0x121c3944)));
  /* 121a36cd push ecx */
  push32((uint32_t)(ECX));
  /* 121a36ce call 0x121985a0 */
  push32(0x121a36d3u); f_121985a0();
  /* 121a36d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a36d6:;
  /* 121a36d6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a36d9 mov dword ptr [0x121c3944], edx */
  w32((uint32_t)(0x121c3944), (EDX));
  /* 121a36df push 2 */
  push32((uint32_t)(0x2u));
  /* 121a36e1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a36e4 push eax */
  push32((uint32_t)(EAX));
  /* 121a36e5 call 0x121985a0 */
  push32(0x121a36eau); f_121985a0();
  /* 121a36ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a36ed push 2 */
  push32((uint32_t)(0x2u));
  /* 121a36ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a36f2 push ecx */
  push32((uint32_t)(ECX));
  /* 121a36f3 call 0x121985a0 */
  push32(0x121a36f8u); f_121985a0();
  /* 121a36f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a36fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a36fd jmp 0x121a378c */
  goto L_121a378c;
L_121a3702:;
  /* 121a3702 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3704 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 121a3707 push edx */
  push32((uint32_t)(EDX));
  /* 121a3708 call 0x121985a0 */
  push32(0x121a370du); f_121985a0();
  /* 121a370d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3710 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3712 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 121a3715 push eax */
  push32((uint32_t)(EAX));
  /* 121a3716 call 0x121985a0 */
  push32(0x121a371bu); f_121985a0();
  /* 121a371b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a371e push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3720 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121a3723 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3724 call 0x121985a0 */
  push32(0x121a3729u); f_121985a0();
  /* 121a3729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a372c push 2 */
  push32((uint32_t)(0x2u));
  /* 121a372e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 121a3731 push edx */
  push32((uint32_t)(EDX));
  /* 121a3732 call 0x121985a0 */
  push32(0x121a3737u); f_121985a0();
  /* 121a3737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a373a mov eax, 1 */
  EAX = (0x1u);
  /* 121a373f jmp 0x121a378c */
  goto L_121a378c;
L_121a3741:;
  /* 121a3741 mov dword ptr [0x121c1c98], 0x121c1ca2 */
  w32((uint32_t)(0x121c1c98), (0x121c1ca2u));
  /* 121a374b mov dword ptr [0x121c1c9c], 0x121c1ca2 */
  w32((uint32_t)(0x121c1c9c), (0x121c1ca2u));
  /* 121a3755 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3757 mov eax, dword ptr [0x121c3940] */
  EAX = (r32((uint32_t)(0x121c3940)));
  /* 121a375c push eax */
  push32((uint32_t)(EAX));
  /* 121a375d call 0x121985a0 */
  push32(0x121a3762u); f_121985a0();
  /* 121a3762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3765 push 2 */
  push32((uint32_t)(0x2u));
  /* 121a3767 mov ecx, dword ptr [0x121c3944] */
  ECX = (r32((uint32_t)(0x121c3944)));
  /* 121a376d push ecx */
  push32((uint32_t)(ECX));
  /* 121a376e call 0x121985a0 */
  push32(0x121a3773u); f_121985a0();
  /* 121a3773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3776 mov dword ptr [0x121c3940], 0 */
  w32((uint32_t)(0x121c3940), (0x0u));
  /* 121a3780 mov dword ptr [0x121c3944], 0 */
  w32((uint32_t)(0x121c3944), (0x0u));
  /* 121a378a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a378c:;
  /* 121a378c mov esp, ebp */
  ESP = (EBP);
  /* 121a378e pop ebp */
  EBP = (pop32());
  /* 121a378f ret  */
  ESPCHK(0x121a33f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013790 @ 0x121a3790 (7 bytes, 5 insns) */
void f_121a3790(void) {
  FTRACE(0x121a3790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3790 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3791 mov ebp, esp */
  EBP = (ESP);
  /* 121a3793 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3795 pop ebp */
  EBP = (pop32());
  /* 121a3796 ret  */
  ESPCHK(0x121a3790u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x121a37a0 (129 bytes, 56 insns) */
void f_121a37a0(void) {
  FTRACE(0x121a37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a37a0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 121a37a4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 121a37a8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 121a37ae jne 0x121a37ec */
  if (!C.zf) goto L_121a37ec;
L_121a37b0:;
  /* 121a37b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121a37b2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a37b4 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a37b6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a37b8 je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a37ba cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a37bd jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a37bf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121a37c1 je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a37c3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121a37c6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a37c9 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a37cb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a37cd je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a37cf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a37d2 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a37d4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a37d7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a37da or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121a37dc jne 0x121a37b0 */
  if (!C.zf) goto L_121a37b0;
  /* 121a37de mov edi, edi */
  EDI = (EDI);
L_121a37e0:;
  /* 121a37e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a37e2 ret  */
  ESPCHK(0x121a37a0u, _esp0);
  ESP += 4; return;
  /* 121a37e3 nop  */
  /* nop */
L_121a37e4:;
  /* 121a37e4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a37e6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a37e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 121a37e9 ret  */
  ESPCHK(0x121a37a0u, _esp0);
  ESP += 4; return;
  /* 121a37ea mov edi, edi */
  EDI = (EDI);
L_121a37ec:;
  /* 121a37ec test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 121a37f2 je 0x121a3808 */
  if (C.zf) goto L_121a3808;
  /* 121a37f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a37f6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121a37f7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a37f9 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a37fb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121a37fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a37fe je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a3800 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 121a3806 je 0x121a37b0 */
  if (C.zf) goto L_121a37b0;
L_121a3808:;
  /* 121a3808 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 121a380b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a380e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a3810 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a3812 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a3814 je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a3816 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a3819 jne 0x121a37e4 */
  if (!C.zf) goto L_121a37e4;
  /* 121a381b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 121a381d je 0x121a37e0 */
  if (C.zf) goto L_121a37e0;
  /* 121a381f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3822 jmp 0x121a37b0 */
  goto L_121a37b0;
}

/* FUN_10013830 @ 0x121a3830 (62 bytes, 35 insns) */
void f_121a3830(void) {
  FTRACE(0x121a3830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3830 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3831 mov ebp, esp */
  EBP = (ESP);
  /* 121a3833 push esi */
  push32((uint32_t)(ESI));
  /* 121a3834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3836 push eax */
  push32((uint32_t)(EAX));
  /* 121a3837 push eax */
  push32((uint32_t)(EAX));
  /* 121a3838 push eax */
  push32((uint32_t)(EAX));
  /* 121a3839 push eax */
  push32((uint32_t)(EAX));
  /* 121a383a push eax */
  push32((uint32_t)(EAX));
  /* 121a383b push eax */
  push32((uint32_t)(EAX));
  /* 121a383c push eax */
  push32((uint32_t)(EAX));
  /* 121a383d push eax */
  push32((uint32_t)(EAX));
  /* 121a383e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a3841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121a3844:;
  /* 121a3844 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a3846 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a3848 je 0x121a3851 */
  if (C.zf) goto L_121a3851;
  /* 121a384a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121a384b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x121a384b");
  /* 121a384f jmp 0x121a3844 */
  goto L_121a3844;
L_121a3851:;
  /* 121a3851 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3854 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121a3857 nop  */
  /* nop */
L_121a3858:;
  /* 121a3858 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121a3859 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121a385b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a385d je 0x121a3866 */
  if (C.zf) goto L_121a3866;
  /* 121a385f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a3860 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x121a3860");
  /* 121a3864 jae 0x121a3858 */
  if (!C.cf) goto L_121a3858;
L_121a3866:;
  /* 121a3866 mov eax, ecx */
  EAX = (ECX);
  /* 121a3868 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a386b pop esi */
  ESI = (pop32());
  /* 121a386c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121a386d ret  */
  ESPCHK(0x121a3830u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x121a3870 (56 bytes, 31 insns) */
void f_121a3870(void) {
  FTRACE(0x121a3870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3870 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3871 mov ebp, esp */
  EBP = (ESP);
  /* 121a3873 push edi */
  push32((uint32_t)(EDI));
  /* 121a3874 push esi */
  push32((uint32_t)(ESI));
  /* 121a3875 push ebx */
  push32((uint32_t)(EBX));
  /* 121a3876 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3879 jecxz 0x121a38a1 */
  x86_unimpl("jecxz @ 0x121a3879");
  /* 121a387b mov ebx, ecx */
  EBX = (ECX);
  /* 121a387d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3880 mov esi, edi */
  ESI = (EDI);
  /* 121a3882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3884 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 121a3886 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a3888 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a388a mov edi, esi */
  EDI = (ESI);
  /* 121a388c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121a388f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 121a3891 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 121a3894 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3896 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 121a3899 ja 0x121a389f */
  if ((!C.cf&&!C.zf)) goto L_121a389f;
  /* 121a389b je 0x121a38a1 */
  if (C.zf) goto L_121a38a1;
  /* 121a389d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121a389e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_121a389f:;
  /* 121a389f not ecx */
  ECX = (~(ECX));
L_121a38a1:;
  /* 121a38a1 mov eax, ecx */
  EAX = (ECX);
  /* 121a38a3 pop ebx */
  EBX = (pop32());
  /* 121a38a4 pop esi */
  ESI = (pop32());
  /* 121a38a5 pop edi */
  EDI = (pop32());
  /* 121a38a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121a38a7 ret  */
  ESPCHK(0x121a3870u, _esp0);
  ESP += 4; return;
}

/* FUN_100138b0 @ 0x121a38b0 (58 bytes, 32 insns) */
void f_121a38b0(void) {
  FTRACE(0x121a38b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a38b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a38b1 mov ebp, esp */
  EBP = (ESP);
  /* 121a38b3 push esi */
  push32((uint32_t)(ESI));
  /* 121a38b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a38b6 push eax */
  push32((uint32_t)(EAX));
  /* 121a38b7 push eax */
  push32((uint32_t)(EAX));
  /* 121a38b8 push eax */
  push32((uint32_t)(EAX));
  /* 121a38b9 push eax */
  push32((uint32_t)(EAX));
  /* 121a38ba push eax */
  push32((uint32_t)(EAX));
  /* 121a38bb push eax */
  push32((uint32_t)(EAX));
  /* 121a38bc push eax */
  push32((uint32_t)(EAX));
  /* 121a38bd push eax */
  push32((uint32_t)(EAX));
  /* 121a38be mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a38c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_121a38c4:;
  /* 121a38c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a38c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a38c8 je 0x121a38d1 */
  if (C.zf) goto L_121a38d1;
  /* 121a38ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 121a38cb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x121a38cb");
  /* 121a38cf jmp 0x121a38c4 */
  goto L_121a38c4;
L_121a38d1:;
  /* 121a38d1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_121a38d4:;
  /* 121a38d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121a38d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 121a38d8 je 0x121a38e4 */
  if (C.zf) goto L_121a38e4;
  /* 121a38da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121a38db bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x121a38db");
  /* 121a38df jae 0x121a38d4 */
  if (!C.cf) goto L_121a38d4;
  /* 121a38e1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_121a38e4:;
  /* 121a38e4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a38e7 pop esi */
  ESI = (pop32());
  /* 121a38e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 121a38e9 ret  */
  ESPCHK(0x121a38b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138f0 @ 0x121a38f0 (512 bytes, 147 insns) */
void f_121a38f0(void) {
  FTRACE(0x121a38f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a38f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a38f1 mov ebp, esp */
  EBP = (ESP);
  /* 121a38f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a38f6 cmp dword ptr [0x121c398c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c398c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a38fd jne 0x121a3922 */
  if (!C.zf) goto L_121a3922;
  /* 121a38ff call 0x121a43c0 */
  push32(0x121a3904u); f_121a43c0();
  /* 121a3904 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3906 je 0x121a3912 */
  if (C.zf) goto L_121a3912;
  /* 121a3908 mov eax, dword ptr [0x121c62b0] */
  EAX = (r32((uint32_t)(0x121c62b0)));
  /* 121a390d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a3910 jmp 0x121a3919 */
  goto L_121a3919;
L_121a3912:;
  /* 121a3912 mov dword ptr [ebp - 8], 0x121a4410 */
  w32((uint32_t)(EBP + -0x8), (0x121a4410u));
L_121a3919:;
  /* 121a3919 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a391c mov dword ptr [0x121c398c], ecx */
  w32((uint32_t)(0x121c398c), (ECX));
L_121a3922:;
  /* 121a3922 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3926 jne 0x121a3932 */
  if (!C.zf) goto L_121a3932;
  /* 121a3928 call 0x121a4210 */
  push32(0x121a392du); f_121a4210();
  /* 121a392d jmp 0x121a39fe */
  goto L_121a39fe;
L_121a3932:;
  /* 121a3932 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3935 mov dword ptr [0x121c397c], edx */
  w32((uint32_t)(0x121c397c), (EDX));
  /* 121a393b cmp dword ptr [0x121c397c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c397c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3942 je 0x121a3964 */
  if (C.zf) goto L_121a3964;
  /* 121a3944 mov eax, dword ptr [0x121c397c] */
  EAX = (r32((uint32_t)(0x121c397c)));
  /* 121a3949 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a394c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a394e je 0x121a3964 */
  if (C.zf) goto L_121a3964;
  /* 121a3950 push 0x121c397c */
  push32((uint32_t)(0x121c397cu));
  /* 121a3955 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121a3957 push 0x121c2a90 */
  push32((uint32_t)(0x121c2a90u));
  /* 121a395c call 0x121a3af0 */
  push32(0x121a3961u); f_121a3af0();
  /* 121a3961 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a3964:;
  /* 121a3964 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3967 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a396a mov dword ptr [0x121c3980], edx */
  w32((uint32_t)(0x121c3980), (EDX));
  /* 121a3970 cmp dword ptr [0x121c3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3977 je 0x121a3999 */
  if (C.zf) goto L_121a3999;
  /* 121a3979 mov eax, dword ptr [0x121c3980] */
  EAX = (r32((uint32_t)(0x121c3980)));
  /* 121a397e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a3981 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a3983 je 0x121a3999 */
  if (C.zf) goto L_121a3999;
  /* 121a3985 push 0x121c3980 */
  push32((uint32_t)(0x121c3980u));
  /* 121a398a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121a398c push 0x121c29d8 */
  push32((uint32_t)(0x121c29d8u));
  /* 121a3991 call 0x121a3af0 */
  push32(0x121a3996u); f_121a3af0();
  /* 121a3996 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a3999:;
  /* 121a3999 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a39a3 cmp dword ptr [0x121c397c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c397c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a39aa je 0x121a39dd */
  if (C.zf) goto L_121a39dd;
  /* 121a39ac mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a39b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 121a39b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a39b7 je 0x121a39dd */
  if (C.zf) goto L_121a39dd;
  /* 121a39b9 cmp dword ptr [0x121c3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a39c0 je 0x121a39d6 */
  if (C.zf) goto L_121a39d6;
  /* 121a39c2 mov ecx, dword ptr [0x121c3980] */
  ECX = (r32((uint32_t)(0x121c3980)));
  /* 121a39c8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121a39cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a39cd je 0x121a39d6 */
  if (C.zf) goto L_121a39d6;
  /* 121a39cf call 0x121a3b80 */
  push32(0x121a39d4u); f_121a3b80();
  /* 121a39d4 jmp 0x121a39db */
  goto L_121a39db;
L_121a39d6:;
  /* 121a39d6 call 0x121a3f70 */
  push32(0x121a39dbu); f_121a3f70();
L_121a39db:;
  /* 121a39db jmp 0x121a39fe */
  goto L_121a39fe;
L_121a39dd:;
  /* 121a39dd cmp dword ptr [0x121c3980], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3980))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a39e4 je 0x121a39f9 */
  if (C.zf) goto L_121a39f9;
  /* 121a39e6 mov eax, dword ptr [0x121c3980] */
  EAX = (r32((uint32_t)(0x121c3980)));
  /* 121a39eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a39ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a39f0 je 0x121a39f9 */
  if (C.zf) goto L_121a39f9;
  /* 121a39f2 call 0x121a4110 */
  push32(0x121a39f7u); f_121a4110();
  /* 121a39f7 jmp 0x121a39fe */
  goto L_121a39fe;
L_121a39f9:;
  /* 121a39f9 call 0x121a4210 */
  push32(0x121a39feu); f_121a4210();
L_121a39fe:;
  /* 121a39fe cmp dword ptr [0x121c3984], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3984))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3a05 jne 0x121a3a0e */
  if (!C.zf) goto L_121a3a0e;
  /* 121a3a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3a09 jmp 0x121a3aec */
  goto L_121a3aec;
L_121a3a0e:;
  /* 121a3a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3a11 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3a17 push edx */
  push32((uint32_t)(EDX));
  /* 121a3a18 call 0x121a4240 */
  push32(0x121a3a1du); f_121a4240();
  /* 121a3a1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a3a23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3a27 je 0x121a3a3c */
  if (C.zf) goto L_121a3a3c;
  /* 121a3a29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3a2c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a3a31 push eax */
  push32((uint32_t)(EAX));
  /* 121a3a32 call dword ptr [0x121c62b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b4))), 0x121a3a38u);
  /* 121a3a38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3a3a jne 0x121a3a43 */
  if (!C.zf) goto L_121a3a43;
L_121a3a3c:;
  /* 121a3a3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3a3e jmp 0x121a3aec */
  goto L_121a3aec;
L_121a3a43:;
  /* 121a3a43 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3a45 mov ecx, dword ptr [0x121c396c] */
  ECX = (r32((uint32_t)(0x121c396c)));
  /* 121a3a4b push ecx */
  push32((uint32_t)(ECX));
  /* 121a3a4c call dword ptr [0x121c62c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62c4))), 0x121a3a52u);
  /* 121a3a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3a54 jne 0x121a3a5d */
  if (!C.zf) goto L_121a3a5d;
  /* 121a3a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3a58 jmp 0x121a3aec */
  goto L_121a3aec;
L_121a3a5d:;
  /* 121a3a5d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3a61 je 0x121a3a88 */
  if (C.zf) goto L_121a3a88;
  /* 121a3a63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a3a66 mov ax, word ptr [0x121c396c] */
  AX = (r16((uint32_t)(0x121c396c)));
  /* 121a3a6c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 121a3a6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a3a72 mov dx, word ptr [0x121c3988] */
  DX = (r16((uint32_t)(0x121c3988)));
  /* 121a3a79 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 121a3a7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a3a80 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 121a3a84 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_121a3a88:;
  /* 121a3a88 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3a8c je 0x121a3ae7 */
  if (C.zf) goto L_121a3ae7;
  /* 121a3a8e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121a3a90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3a93 push edx */
  push32((uint32_t)(EDX));
  /* 121a3a94 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 121a3a99 mov eax, dword ptr [0x121c396c] */
  EAX = (r32((uint32_t)(0x121c396c)));
  /* 121a3a9e push eax */
  push32((uint32_t)(EAX));
  /* 121a3a9f call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a3aa5u);
  /* 121a3aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3aa7 jne 0x121a3aad */
  if (!C.zf) goto L_121a3aad;
  /* 121a3aa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3aab jmp 0x121a3aec */
  goto L_121a3aec;
L_121a3aad:;
  /* 121a3aad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 121a3aaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3ab2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3ab5 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3ab6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 121a3abb mov edx, dword ptr [0x121c3988] */
  EDX = (r32((uint32_t)(0x121c3988)));
  /* 121a3ac1 push edx */
  push32((uint32_t)(EDX));
  /* 121a3ac2 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a3ac8u);
  /* 121a3ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3aca jne 0x121a3ad0 */
  if (!C.zf) goto L_121a3ad0;
  /* 121a3acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a3ace jmp 0x121a3aec */
  goto L_121a3aec;
L_121a3ad0:;
  /* 121a3ad0 push 0xa */
  push32((uint32_t)(0xau));
  /* 121a3ad2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3ad5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3ada push eax */
  push32((uint32_t)(EAX));
  /* 121a3adb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3ade push ecx */
  push32((uint32_t)(ECX));
  /* 121a3adf call 0x1219a650 */
  push32(0x121a3ae4u); f_1219a650();
  /* 121a3ae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a3ae7:;
  /* 121a3ae7 mov eax, 1 */
  EAX = (0x1u);
L_121a3aec:;
  /* 121a3aec mov esp, ebp */
  ESP = (EBP);
  /* 121a3aee pop ebp */
  EBP = (pop32());
  /* 121a3aef ret  */
  ESPCHK(0x121a38f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013af0 @ 0x121a3af0 (130 bytes, 47 insns) */
void f_121a3af0(void) {
  FTRACE(0x121a3af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3af0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3af1 mov ebp, esp */
  EBP = (ESP);
  /* 121a3af3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3af6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 121a3afd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_121a3b04:;
  /* 121a3b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a3b07 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3b0a jg 0x121a3b6e */
  if ((!C.zf&&C.sf==C.of)) goto L_121a3b6e;
  /* 121a3b0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3b10 je 0x121a3b6e */
  if (C.zf) goto L_121a3b6e;
  /* 121a3b12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a3b15 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3b18 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a3b19 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3b1b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a3b1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a3b20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3b23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3b26 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 121a3b29 push eax */
  push32((uint32_t)(EAX));
  /* 121a3b2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3b2d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121a3b2f push edx */
  push32((uint32_t)(EDX));
  /* 121a3b30 call 0x121a61e0 */
  push32(0x121a3b35u); f_121a61e0();
  /* 121a3b35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3b38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a3b3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3b3f jne 0x121a3b52 */
  if (!C.zf) goto L_121a3b52;
  /* 121a3b41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3b44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3b47 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 121a3b4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a3b4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121a3b50 jmp 0x121a3b6c */
  goto L_121a3b6c;
L_121a3b52:;
  /* 121a3b52 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3b56 jge 0x121a3b63 */
  if ((C.sf==C.of)) goto L_121a3b63;
  /* 121a3b58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3b5b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3b5e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 121a3b61 jmp 0x121a3b6c */
  goto L_121a3b6c;
L_121a3b63:;
  /* 121a3b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3b66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3b69 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_121a3b6c:;
  /* 121a3b6c jmp 0x121a3b04 */
  goto L_121a3b04;
L_121a3b6e:;
  /* 121a3b6e mov esp, ebp */
  ESP = (EBP);
  /* 121a3b70 pop ebp */
  EBP = (pop32());
  /* 121a3b71 ret  */
  ESPCHK(0x121a3af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x121a3b80 (186 bytes, 50 insns) */
void f_121a3b80(void) {
  FTRACE(0x121a3b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3b80 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3b81 mov ebp, esp */
  EBP = (ESP);
  /* 121a3b83 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3b84 mov eax, dword ptr [0x121c397c] */
  EAX = (r32((uint32_t)(0x121c397c)));
  /* 121a3b89 push eax */
  push32((uint32_t)(EAX));
  /* 121a3b8a call 0x1219a940 */
  push32(0x121a3b8fu); f_1219a940();
  /* 121a3b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3b92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3b94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3b97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121a3b9a mov dword ptr [0x121c3978], ecx */
  w32((uint32_t)(0x121c3978), (ECX));
  /* 121a3ba0 mov edx, dword ptr [0x121c3980] */
  EDX = (r32((uint32_t)(0x121c3980)));
  /* 121a3ba6 push edx */
  push32((uint32_t)(EDX));
  /* 121a3ba7 call 0x1219a940 */
  push32(0x121a3bacu); f_1219a940();
  /* 121a3bac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3baf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3bb1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3bb4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121a3bb7 mov dword ptr [0x121c3970], ecx */
  w32((uint32_t)(0x121c3970), (ECX));
  /* 121a3bbd mov dword ptr [0x121c396c], 0 */
  w32((uint32_t)(0x121c396c), (0x0u));
  /* 121a3bc7 cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3bce je 0x121a3bd9 */
  if (C.zf) goto L_121a3bd9;
  /* 121a3bd0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121a3bd7 jmp 0x121a3beb */
  goto L_121a3beb;
L_121a3bd9:;
  /* 121a3bd9 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a3bdf push edx */
  push32((uint32_t)(EDX));
  /* 121a3be0 call 0x121a4620 */
  push32(0x121a3be5u); f_121a4620();
  /* 121a3be5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a3beb:;
  /* 121a3beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3bee mov dword ptr [0x121c3974], eax */
  w32((uint32_t)(0x121c3974), (EAX));
  /* 121a3bf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3bf5 push 0x121a3c40 */
  push32((uint32_t)(0x121a3c40u));
  /* 121a3bfa call dword ptr [0x121c62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b8))), 0x121a3c00u);
  /* 121a3c00 mov ecx, dword ptr [0x121c3984] */
  ECX = (r32((uint32_t)(0x121c3984)));
  /* 121a3c06 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 121a3c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a3c0e je 0x121a3c2c */
  if (C.zf) goto L_121a3c2c;
  /* 121a3c10 mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a3c16 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 121a3c1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a3c1e je 0x121a3c2c */
  if (C.zf) goto L_121a3c2c;
  /* 121a3c20 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3c25 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 121a3c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3c2a jne 0x121a3c36 */
  if (!C.zf) goto L_121a3c36;
L_121a3c2c:;
  /* 121a3c2c mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
L_121a3c36:;
  /* 121a3c36 mov esp, ebp */
  ESP = (EBP);
  /* 121a3c38 pop ebp */
  EBP = (pop32());
  /* 121a3c39 ret  */
  ESPCHK(0x121a3b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x121a3c40 (804 bytes, 220 insns) */
void f_121a3c40(void) {
  FTRACE(0x121a3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3c41 mov ebp, esp */
  EBP = (ESP);
  /* 121a3c43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3c49 push eax */
  push32((uint32_t)(EAX));
  /* 121a3c4a call 0x121a45a0 */
  push32(0x121a3c4fu); f_121a45a0();
  /* 121a3c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3c52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121a3c55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a3c57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a3c5a push ecx */
  push32((uint32_t)(ECX));
  /* 121a3c5b mov edx, dword ptr [0x121c3970] */
  EDX = (r32((uint32_t)(0x121c3970)));
  /* 121a3c61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a3c63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3c65 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 121a3c6b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3c71 push edx */
  push32((uint32_t)(EDX));
  /* 121a3c72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3c75 push eax */
  push32((uint32_t)(EAX));
  /* 121a3c76 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a3c7cu);
  /* 121a3c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3c7e jne 0x121a3c94 */
  if (!C.zf) goto L_121a3c94;
  /* 121a3c80 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a3c8a mov eax, 1 */
  EAX = (0x1u);
  /* 121a3c8f jmp 0x121a3f5e */
  goto L_121a3f5e;
L_121a3c94:;
  /* 121a3c94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a3c97 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3c98 mov edx, dword ptr [0x121c3980] */
  EDX = (r32((uint32_t)(0x121c3980)));
  /* 121a3c9e push edx */
  push32((uint32_t)(EDX));
  /* 121a3c9f call 0x121a61e0 */
  push32(0x121a3ca4u); f_121a61e0();
  /* 121a3ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3ca7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3ca9 jne 0x121a3dcf */
  if (!C.zf) goto L_121a3dcf;
  /* 121a3caf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a3cb1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121a3cb4 push eax */
  push32((uint32_t)(EAX));
  /* 121a3cb5 mov ecx, dword ptr [0x121c3978] */
  ECX = (r32((uint32_t)(0x121c3978)));
  /* 121a3cbb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a3cbd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3cbf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 121a3cc5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3ccb push ecx */
  push32((uint32_t)(ECX));
  /* 121a3ccc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3ccf push edx */
  push32((uint32_t)(EDX));
  /* 121a3cd0 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a3cd6u);
  /* 121a3cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3cd8 jne 0x121a3cee */
  if (!C.zf) goto L_121a3cee;
  /* 121a3cda mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a3ce4 mov eax, 1 */
  EAX = (0x1u);
  /* 121a3ce9 jmp 0x121a3f5e */
  goto L_121a3f5e;
L_121a3cee:;
  /* 121a3cee lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121a3cf1 push eax */
  push32((uint32_t)(EAX));
  /* 121a3cf2 mov ecx, dword ptr [0x121c397c] */
  ECX = (r32((uint32_t)(0x121c397c)));
  /* 121a3cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3cf9 call 0x121a61e0 */
  push32(0x121a3cfeu); f_121a61e0();
  /* 121a3cfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3d03 jne 0x121a3d30 */
  if (!C.zf) goto L_121a3d30;
  /* 121a3d05 mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a3d0b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 121a3d11 mov dword ptr [0x121c3984], edx */
  w32((uint32_t)(0x121c3984), (EDX));
  /* 121a3d17 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3d1a mov dword ptr [0x121c3988], eax */
  w32((uint32_t)(0x121c3988), (EAX));
  /* 121a3d1f mov ecx, dword ptr [0x121c3988] */
  ECX = (r32((uint32_t)(0x121c3988)));
  /* 121a3d25 mov dword ptr [0x121c396c], ecx */
  w32((uint32_t)(0x121c396c), (ECX));
  /* 121a3d2b jmp 0x121a3dcf */
  goto L_121a3dcf;
L_121a3d30:;
  /* 121a3d30 mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a3d36 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 121a3d39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a3d3b jne 0x121a3dcf */
  if (!C.zf) goto L_121a3dcf;
  /* 121a3d41 cmp dword ptr [0x121c3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3d48 je 0x121a3d9d */
  if (C.zf) goto L_121a3d9d;
  /* 121a3d4a mov eax, dword ptr [0x121c3974] */
  EAX = (r32((uint32_t)(0x121c3974)));
  /* 121a3d4f push eax */
  push32((uint32_t)(EAX));
  /* 121a3d50 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a3d53 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3d54 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a3d5a push edx */
  push32((uint32_t)(EDX));
  /* 121a3d5b call 0x121a62b0 */
  push32(0x121a3d60u); f_121a62b0();
  /* 121a3d60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3d63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3d65 jne 0x121a3d9d */
  if (!C.zf) goto L_121a3d9d;
  /* 121a3d67 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3d6c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 121a3d6e mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a3d73 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3d76 mov dword ptr [0x121c3988], ecx */
  w32((uint32_t)(0x121c3988), (ECX));
  /* 121a3d7c mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a3d82 push edx */
  push32((uint32_t)(EDX));
  /* 121a3d83 call 0x1219a940 */
  push32(0x121a3d88u); f_1219a940();
  /* 121a3d88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3d8b cmp eax, dword ptr [0x121c3974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c3974))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3d91 jne 0x121a3d9b */
  if (!C.zf) goto L_121a3d9b;
  /* 121a3d93 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3d96 mov dword ptr [0x121c396c], eax */
  w32((uint32_t)(0x121c396c), (EAX));
L_121a3d9b:;
  /* 121a3d9b jmp 0x121a3dcf */
  goto L_121a3dcf;
L_121a3d9d:;
  /* 121a3d9d mov ecx, dword ptr [0x121c3984] */
  ECX = (r32((uint32_t)(0x121c3984)));
  /* 121a3da3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a3da6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a3da8 jne 0x121a3dcf */
  if (!C.zf) goto L_121a3dcf;
  /* 121a3daa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3dad push edx */
  push32((uint32_t)(EDX));
  /* 121a3dae call 0x121a42e0 */
  push32(0x121a3db3u); f_121a42e0();
  /* 121a3db3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3db8 je 0x121a3dcf */
  if (C.zf) goto L_121a3dcf;
  /* 121a3dba mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3dbf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 121a3dc1 mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a3dc6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3dc9 mov dword ptr [0x121c3988], ecx */
  w32((uint32_t)(0x121c3988), (ECX));
L_121a3dcf:;
  /* 121a3dcf mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a3dd5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 121a3ddb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3de1 je 0x121a3f51 */
  if (C.zf) goto L_121a3f51;
  /* 121a3de7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a3de9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121a3dec push eax */
  push32((uint32_t)(EAX));
  /* 121a3ded mov ecx, dword ptr [0x121c3978] */
  ECX = (r32((uint32_t)(0x121c3978)));
  /* 121a3df3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a3df5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3df7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 121a3dfd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3e03 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3e04 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3e07 push edx */
  push32((uint32_t)(EDX));
  /* 121a3e08 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a3e0eu);
  /* 121a3e0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3e10 jne 0x121a3e26 */
  if (!C.zf) goto L_121a3e26;
  /* 121a3e12 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a3e1c mov eax, 1 */
  EAX = (0x1u);
  /* 121a3e21 jmp 0x121a3f5e */
  goto L_121a3f5e;
L_121a3e26:;
  /* 121a3e26 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121a3e29 push eax */
  push32((uint32_t)(EAX));
  /* 121a3e2a mov ecx, dword ptr [0x121c397c] */
  ECX = (r32((uint32_t)(0x121c397c)));
  /* 121a3e30 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3e31 call 0x121a61e0 */
  push32(0x121a3e36u); f_121a61e0();
  /* 121a3e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3e3b jne 0x121a3ef0 */
  if (!C.zf) goto L_121a3ef0;
  /* 121a3e41 mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a3e47 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 121a3e4a mov dword ptr [0x121c3984], edx */
  w32((uint32_t)(0x121c3984), (EDX));
  /* 121a3e50 cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3e57 je 0x121a3e7a */
  if (C.zf) goto L_121a3e7a;
  /* 121a3e59 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3e5e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121a3e61 mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a3e66 cmp dword ptr [0x121c396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3e6d jne 0x121a3e78 */
  if (!C.zf) goto L_121a3e78;
  /* 121a3e6f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3e72 mov dword ptr [0x121c396c], ecx */
  w32((uint32_t)(0x121c396c), (ECX));
L_121a3e78:;
  /* 121a3e78 jmp 0x121a3eee */
  goto L_121a3eee;
L_121a3e7a:;
  /* 121a3e7a cmp dword ptr [0x121c3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3e81 je 0x121a3ecf */
  if (C.zf) goto L_121a3ecf;
  /* 121a3e83 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a3e89 push edx */
  push32((uint32_t)(EDX));
  /* 121a3e8a call 0x1219a940 */
  push32(0x121a3e8fu); f_1219a940();
  /* 121a3e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3e92 cmp eax, dword ptr [0x121c3974] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c3974))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3e98 jne 0x121a3ecf */
  if (!C.zf) goto L_121a3ecf;
  /* 121a3e9a push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3e9c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3e9f push eax */
  push32((uint32_t)(EAX));
  /* 121a3ea0 call 0x121a4330 */
  push32(0x121a3ea5u); f_121a4330();
  /* 121a3ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3eaa je 0x121a3ecd */
  if (C.zf) goto L_121a3ecd;
  /* 121a3eac mov ecx, dword ptr [0x121c3984] */
  ECX = (r32((uint32_t)(0x121c3984)));
  /* 121a3eb2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 121a3eb5 mov dword ptr [0x121c3984], ecx */
  w32((uint32_t)(0x121c3984), (ECX));
  /* 121a3ebb cmp dword ptr [0x121c396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3ec2 jne 0x121a3ecd */
  if (!C.zf) goto L_121a3ecd;
  /* 121a3ec4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3ec7 mov dword ptr [0x121c396c], edx */
  w32((uint32_t)(0x121c396c), (EDX));
L_121a3ecd:;
  /* 121a3ecd jmp 0x121a3eee */
  goto L_121a3eee;
L_121a3ecf:;
  /* 121a3ecf mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3ed4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121a3ed7 mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a3edc cmp dword ptr [0x121c396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3ee3 jne 0x121a3eee */
  if (!C.zf) goto L_121a3eee;
  /* 121a3ee5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3ee8 mov dword ptr [0x121c396c], ecx */
  w32((uint32_t)(0x121c396c), (ECX));
L_121a3eee:;
  /* 121a3eee jmp 0x121a3f51 */
  goto L_121a3f51;
L_121a3ef0:;
  /* 121a3ef0 cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3ef7 jne 0x121a3f51 */
  if (!C.zf) goto L_121a3f51;
  /* 121a3ef9 cmp dword ptr [0x121c3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3f00 je 0x121a3f51 */
  if (C.zf) goto L_121a3f51;
  /* 121a3f02 mov edx, dword ptr [0x121c3974] */
  EDX = (r32((uint32_t)(0x121c3974)));
  /* 121a3f08 push edx */
  push32((uint32_t)(EDX));
  /* 121a3f09 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 121a3f0c push eax */
  push32((uint32_t)(EAX));
  /* 121a3f0d mov ecx, dword ptr [0x121c397c] */
  ECX = (r32((uint32_t)(0x121c397c)));
  /* 121a3f13 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3f14 call 0x121a62b0 */
  push32(0x121a3f19u); f_121a62b0();
  /* 121a3f19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3f1e jne 0x121a3f51 */
  if (!C.zf) goto L_121a3f51;
  /* 121a3f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a3f22 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3f25 push edx */
  push32((uint32_t)(EDX));
  /* 121a3f26 call 0x121a4330 */
  push32(0x121a3f2bu); f_121a4330();
  /* 121a3f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a3f30 je 0x121a3f51 */
  if (C.zf) goto L_121a3f51;
  /* 121a3f32 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3f37 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 121a3f3a mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a3f3f cmp dword ptr [0x121c396c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c396c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3f46 jne 0x121a3f51 */
  if (!C.zf) goto L_121a3f51;
  /* 121a3f48 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a3f4b mov dword ptr [0x121c396c], ecx */
  w32((uint32_t)(0x121c396c), (ECX));
L_121a3f51:;
  /* 121a3f51 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a3f56 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121a3f59 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a3f5b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3f5d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121a3f5e:;
  /* 121a3f5e mov esp, ebp */
  ESP = (EBP);
  /* 121a3f60 pop ebp */
  EBP = (pop32());
  /* 121a3f61 ret 4 */
  ESPCHK(0x121a3c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10013f70 @ 0x121a3f70 (116 bytes, 33 insns) */
void f_121a3f70(void) {
  FTRACE(0x121a3f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3f70 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3f71 mov ebp, esp */
  EBP = (ESP);
  /* 121a3f73 push ecx */
  push32((uint32_t)(ECX));
  /* 121a3f74 mov eax, dword ptr [0x121c397c] */
  EAX = (r32((uint32_t)(0x121c397c)));
  /* 121a3f79 push eax */
  push32((uint32_t)(EAX));
  /* 121a3f7a call 0x1219a940 */
  push32(0x121a3f7fu); f_1219a940();
  /* 121a3f7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3f82 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a3f84 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3f87 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121a3f8a mov dword ptr [0x121c3978], ecx */
  w32((uint32_t)(0x121c3978), (ECX));
  /* 121a3f90 cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a3f97 je 0x121a3fa2 */
  if (C.zf) goto L_121a3fa2;
  /* 121a3f99 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 121a3fa0 jmp 0x121a3fb4 */
  goto L_121a3fb4;
L_121a3fa2:;
  /* 121a3fa2 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a3fa8 push edx */
  push32((uint32_t)(EDX));
  /* 121a3fa9 call 0x121a4620 */
  push32(0x121a3faeu); f_121a4620();
  /* 121a3fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a3fb1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a3fb4:;
  /* 121a3fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a3fb7 mov dword ptr [0x121c3974], eax */
  w32((uint32_t)(0x121c3974), (EAX));
  /* 121a3fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 121a3fbe push 0x121a3ff0 */
  push32((uint32_t)(0x121a3ff0u));
  /* 121a3fc3 call dword ptr [0x121c62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b8))), 0x121a3fc9u);
  /* 121a3fc9 mov ecx, dword ptr [0x121c3984] */
  ECX = (r32((uint32_t)(0x121c3984)));
  /* 121a3fcf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121a3fd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a3fd4 jne 0x121a3fe0 */
  if (!C.zf) goto L_121a3fe0;
  /* 121a3fd6 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
L_121a3fe0:;
  /* 121a3fe0 mov esp, ebp */
  ESP = (EBP);
  /* 121a3fe2 pop ebp */
  EBP = (pop32());
  /* 121a3fe3 ret  */
  ESPCHK(0x121a3f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ff0 @ 0x121a3ff0 (287 bytes, 86 insns) */
void f_121a3ff0(void) {
  FTRACE(0x121a3ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a3ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a3ff1 mov ebp, esp */
  EBP = (ESP);
  /* 121a3ff3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a3ff6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a3ff9 push eax */
  push32((uint32_t)(EAX));
  /* 121a3ffa call 0x121a45a0 */
  push32(0x121a3fffu); f_121a45a0();
  /* 121a3fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4002 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121a4005 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a4007 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a400a push ecx */
  push32((uint32_t)(ECX));
  /* 121a400b mov edx, dword ptr [0x121c3978] */
  EDX = (r32((uint32_t)(0x121c3978)));
  /* 121a4011 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a4013 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4015 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 121a401b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4021 push edx */
  push32((uint32_t)(EDX));
  /* 121a4022 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a4025 push eax */
  push32((uint32_t)(EAX));
  /* 121a4026 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a402cu);
  /* 121a402c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a402e jne 0x121a4044 */
  if (!C.zf) goto L_121a4044;
  /* 121a4030 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a403a mov eax, 1 */
  EAX = (0x1u);
  /* 121a403f jmp 0x121a4109 */
  goto L_121a4109;
L_121a4044:;
  /* 121a4044 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a4047 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4048 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a404e push edx */
  push32((uint32_t)(EDX));
  /* 121a404f call 0x121a61e0 */
  push32(0x121a4054u); f_121a61e0();
  /* 121a4054 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4057 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4059 jne 0x121a4099 */
  if (!C.zf) goto L_121a4099;
  /* 121a405b cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4062 jne 0x121a4076 */
  if (!C.zf) goto L_121a4076;
  /* 121a4064 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a4066 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a4069 push eax */
  push32((uint32_t)(EAX));
  /* 121a406a call 0x121a4330 */
  push32(0x121a406fu); f_121a4330();
  /* 121a406f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4072 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4074 je 0x121a4097 */
  if (C.zf) goto L_121a4097;
L_121a4076:;
  /* 121a4076 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a4079 mov dword ptr [0x121c3988], ecx */
  w32((uint32_t)(0x121c3988), (ECX));
  /* 121a407f mov edx, dword ptr [0x121c3988] */
  EDX = (r32((uint32_t)(0x121c3988)));
  /* 121a4085 mov dword ptr [0x121c396c], edx */
  w32((uint32_t)(0x121c396c), (EDX));
  /* 121a408b mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a4090 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121a4092 mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
L_121a4097:;
  /* 121a4097 jmp 0x121a40fc */
  goto L_121a40fc;
L_121a4099:;
  /* 121a4099 cmp dword ptr [0x121c3978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a40a0 jne 0x121a40fc */
  if (!C.zf) goto L_121a40fc;
  /* 121a40a2 cmp dword ptr [0x121c3974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121c3974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a40a9 je 0x121a40fc */
  if (C.zf) goto L_121a40fc;
  /* 121a40ab mov ecx, dword ptr [0x121c3974] */
  ECX = (r32((uint32_t)(0x121c3974)));
  /* 121a40b1 push ecx */
  push32((uint32_t)(ECX));
  /* 121a40b2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 121a40b5 push edx */
  push32((uint32_t)(EDX));
  /* 121a40b6 mov eax, dword ptr [0x121c397c] */
  EAX = (r32((uint32_t)(0x121c397c)));
  /* 121a40bb push eax */
  push32((uint32_t)(EAX));
  /* 121a40bc call 0x121a62b0 */
  push32(0x121a40c1u); f_121a62b0();
  /* 121a40c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a40c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a40c6 jne 0x121a40fc */
  if (!C.zf) goto L_121a40fc;
  /* 121a40c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a40ca mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a40cd push ecx */
  push32((uint32_t)(ECX));
  /* 121a40ce call 0x121a4330 */
  push32(0x121a40d3u); f_121a4330();
  /* 121a40d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a40d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a40d8 je 0x121a40fc */
  if (C.zf) goto L_121a40fc;
  /* 121a40da mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a40dd mov dword ptr [0x121c3988], edx */
  w32((uint32_t)(0x121c3988), (EDX));
  /* 121a40e3 mov eax, dword ptr [0x121c3988] */
  EAX = (r32((uint32_t)(0x121c3988)));
  /* 121a40e8 mov dword ptr [0x121c396c], eax */
  w32((uint32_t)(0x121c396c), (EAX));
  /* 121a40ed mov ecx, dword ptr [0x121c3984] */
  ECX = (r32((uint32_t)(0x121c3984)));
  /* 121a40f3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 121a40f6 mov dword ptr [0x121c3984], ecx */
  w32((uint32_t)(0x121c3984), (ECX));
L_121a40fc:;
  /* 121a40fc mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a4101 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121a4104 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a4106 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121a4109:;
  /* 121a4109 mov esp, ebp */
  ESP = (EBP);
  /* 121a410b pop ebp */
  EBP = (pop32());
  /* 121a410c ret 4 */
  ESPCHK(0x121a3ff0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014110 @ 0x121a4110 (69 bytes, 20 insns) */
void f_121a4110(void) {
  FTRACE(0x121a4110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4110 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4111 mov ebp, esp */
  EBP = (ESP);
  /* 121a4113 mov eax, dword ptr [0x121c3980] */
  EAX = (r32((uint32_t)(0x121c3980)));
  /* 121a4118 push eax */
  push32((uint32_t)(EAX));
  /* 121a4119 call 0x1219a940 */
  push32(0x121a411eu); f_1219a940();
  /* 121a411e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4121 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a4123 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4126 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 121a4129 mov dword ptr [0x121c3970], ecx */
  w32((uint32_t)(0x121c3970), (ECX));
  /* 121a412f push 1 */
  push32((uint32_t)(0x1u));
  /* 121a4131 push 0x121a4160 */
  push32((uint32_t)(0x121a4160u));
  /* 121a4136 call dword ptr [0x121c62b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b8))), 0x121a413cu);
  /* 121a413c mov edx, dword ptr [0x121c3984] */
  EDX = (r32((uint32_t)(0x121c3984)));
  /* 121a4142 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 121a4145 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a4147 jne 0x121a4153 */
  if (!C.zf) goto L_121a4153;
  /* 121a4149 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
L_121a4153:;
  /* 121a4153 pop ebp */
  EBP = (pop32());
  /* 121a4154 ret  */
  ESPCHK(0x121a4110u, _esp0);
  ESP += 4; return;
}

/* FUN_10014160 @ 0x121a4160 (172 bytes, 54 insns) */
void f_121a4160(void) {
  FTRACE(0x121a4160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4160 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4161 mov ebp, esp */
  EBP = (ESP);
  /* 121a4163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4166 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4169 push eax */
  push32((uint32_t)(EAX));
  /* 121a416a call 0x121a45a0 */
  push32(0x121a416fu); f_121a45a0();
  /* 121a416f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4172 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 121a4175 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a4177 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a417a push ecx */
  push32((uint32_t)(ECX));
  /* 121a417b mov edx, dword ptr [0x121c3970] */
  EDX = (r32((uint32_t)(0x121c3970)));
  /* 121a4181 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a4183 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4185 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 121a418b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4191 push edx */
  push32((uint32_t)(EDX));
  /* 121a4192 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a4195 push eax */
  push32((uint32_t)(EAX));
  /* 121a4196 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a419cu);
  /* 121a419c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a419e jne 0x121a41b1 */
  if (!C.zf) goto L_121a41b1;
  /* 121a41a0 mov dword ptr [0x121c3984], 0 */
  w32((uint32_t)(0x121c3984), (0x0u));
  /* 121a41aa mov eax, 1 */
  EAX = (0x1u);
  /* 121a41af jmp 0x121a4206 */
  goto L_121a4206;
L_121a41b1:;
  /* 121a41b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 121a41b4 push ecx */
  push32((uint32_t)(ECX));
  /* 121a41b5 mov edx, dword ptr [0x121c3980] */
  EDX = (r32((uint32_t)(0x121c3980)));
  /* 121a41bb push edx */
  push32((uint32_t)(EDX));
  /* 121a41bc call 0x121a61e0 */
  push32(0x121a41c1u); f_121a61e0();
  /* 121a41c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a41c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a41c6 jne 0x121a41f9 */
  if (!C.zf) goto L_121a41f9;
  /* 121a41c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a41cb push eax */
  push32((uint32_t)(EAX));
  /* 121a41cc call 0x121a42e0 */
  push32(0x121a41d1u); f_121a42e0();
  /* 121a41d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a41d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a41d6 je 0x121a41f9 */
  if (C.zf) goto L_121a41f9;
  /* 121a41d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 121a41db mov dword ptr [0x121c3988], ecx */
  w32((uint32_t)(0x121c3988), (ECX));
  /* 121a41e1 mov edx, dword ptr [0x121c3988] */
  EDX = (r32((uint32_t)(0x121c3988)));
  /* 121a41e7 mov dword ptr [0x121c396c], edx */
  w32((uint32_t)(0x121c396c), (EDX));
  /* 121a41ed mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a41f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 121a41f4 mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
L_121a41f9:;
  /* 121a41f9 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a41fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 121a4201 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121a4203 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4205 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_121a4206:;
  /* 121a4206 mov esp, ebp */
  ESP = (EBP);
  /* 121a4208 pop ebp */
  EBP = (pop32());
  /* 121a4209 ret 4 */
  ESPCHK(0x121a4160u, _esp0);
  ESP += 8; return;
}

/* FUN_10014210 @ 0x121a4210 (43 bytes, 11 insns) */
void f_121a4210(void) {
  FTRACE(0x121a4210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4210 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4211 mov ebp, esp */
  EBP = (ESP);
  /* 121a4213 mov eax, dword ptr [0x121c3984] */
  EAX = (r32((uint32_t)(0x121c3984)));
  /* 121a4218 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 121a421d mov dword ptr [0x121c3984], eax */
  w32((uint32_t)(0x121c3984), (EAX));
  /* 121a4222 call dword ptr [0x121c62a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62a8))), 0x121a4228u);
  /* 121a4228 mov dword ptr [0x121c3988], eax */
  w32((uint32_t)(0x121c3988), (EAX));
  /* 121a422d mov ecx, dword ptr [0x121c3988] */
  ECX = (r32((uint32_t)(0x121c3988)));
  /* 121a4233 mov dword ptr [0x121c396c], ecx */
  w32((uint32_t)(0x121c396c), (ECX));
  /* 121a4239 pop ebp */
  EBP = (pop32());
  /* 121a423a ret  */
  ESPCHK(0x121a4210u, _esp0);
  ESP += 4; return;
}

/* FUN_10014240 @ 0x121a4240 (155 bytes, 57 insns) */
void f_121a4240(void) {
  FTRACE(0x121a4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4240 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4241 mov ebp, esp */
  EBP = (ESP);
  /* 121a4243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4246 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a424a je 0x121a426b */
  if (C.zf) goto L_121a426b;
  /* 121a424c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a424f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 121a4252 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a4254 je 0x121a426b */
  if (C.zf) goto L_121a426b;
  /* 121a4256 push 0x121bf80c */
  push32((uint32_t)(0x121bf80cu));
  /* 121a425b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a425e push edx */
  push32((uint32_t)(EDX));
  /* 121a425f call 0x121a37a0 */
  push32(0x121a4264u); f_121a37a0();
  /* 121a4264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4269 jne 0x121a4293 */
  if (!C.zf) goto L_121a4293;
L_121a426b:;
  /* 121a426b push 8 */
  push32((uint32_t)(0x8u));
  /* 121a426d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121a4270 push eax */
  push32((uint32_t)(EAX));
  /* 121a4271 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 121a4276 mov ecx, dword ptr [0x121c3988] */
  ECX = (r32((uint32_t)(0x121c3988)));
  /* 121a427c push ecx */
  push32((uint32_t)(ECX));
  /* 121a427d call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a4283u);
  /* 121a4283 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4285 jne 0x121a428b */
  if (!C.zf) goto L_121a428b;
  /* 121a4287 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a4289 jmp 0x121a42d7 */
  goto L_121a42d7;
L_121a428b:;
  /* 121a428b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 121a428e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 121a4291 jmp 0x121a42cb */
  goto L_121a42cb;
L_121a4293:;
  /* 121a4293 push 0x121bf808 */
  push32((uint32_t)(0x121bf808u));
  /* 121a4298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a429b push eax */
  push32((uint32_t)(EAX));
  /* 121a429c call 0x121a37a0 */
  push32(0x121a42a1u); f_121a37a0();
  /* 121a42a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a42a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a42a6 jne 0x121a42cb */
  if (!C.zf) goto L_121a42cb;
  /* 121a42a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 121a42aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 121a42ad push ecx */
  push32((uint32_t)(ECX));
  /* 121a42ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 121a42b0 mov edx, dword ptr [0x121c3988] */
  EDX = (r32((uint32_t)(0x121c3988)));
  /* 121a42b6 push edx */
  push32((uint32_t)(EDX));
  /* 121a42b7 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a42bdu);
  /* 121a42bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a42bf jne 0x121a42c5 */
  if (!C.zf) goto L_121a42c5;
  /* 121a42c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a42c3 jmp 0x121a42d7 */
  goto L_121a42d7;
L_121a42c5:;
  /* 121a42c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 121a42c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_121a42cb:;
  /* 121a42cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a42ce push ecx */
  push32((uint32_t)(ECX));
  /* 121a42cf call 0x121a63c0 */
  push32(0x121a42d4u); f_121a63c0();
  /* 121a42d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121a42d7:;
  /* 121a42d7 mov esp, ebp */
  ESP = (EBP);
  /* 121a42d9 pop ebp */
  EBP = (pop32());
  /* 121a42da ret  */
  ESPCHK(0x121a4240u, _esp0);
  ESP += 4; return;
}

/* FUN_100142e0 @ 0x121a42e0 (79 bytes, 26 insns) */
void f_121a42e0(void) {
  FTRACE(0x121a42e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a42e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a42e1 mov ebp, esp */
  EBP = (ESP);
  /* 121a42e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a42e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 121a42ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 121a42ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a42f5 jmp 0x121a4300 */
  goto L_121a4300;
L_121a42f7:;
  /* 121a42f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a42fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a42fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121a4300:;
  /* 121a4300 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4304 jae 0x121a4326 */
  if (!C.cf) goto L_121a4326;
  /* 121a4306 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4309 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121a430f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4312 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121a4314 mov cx, word ptr [eax*2 + 0x121c29c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x121c29c4)));
  /* 121a431c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a431e jne 0x121a4324 */
  if (!C.zf) goto L_121a4324;
  /* 121a4320 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a4322 jmp 0x121a432b */
  goto L_121a432b;
L_121a4324:;
  /* 121a4324 jmp 0x121a42f7 */
  goto L_121a42f7;
L_121a4326:;
  /* 121a4326 mov eax, 1 */
  EAX = (0x1u);
L_121a432b:;
  /* 121a432b mov esp, ebp */
  ESP = (EBP);
  /* 121a432d pop ebp */
  EBP = (pop32());
  /* 121a432e ret  */
  ESPCHK(0x121a42e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014330 @ 0x121a4330 (135 bytes, 48 insns) */
void f_121a4330(void) {
  FTRACE(0x121a4330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4330 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4331 mov ebp, esp */
  EBP = (ESP);
  /* 121a4333 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4336 push esi */
  push32((uint32_t)(ESI));
  /* 121a4337 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a433a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a433f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a4344 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a4349 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 121a434c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a4351 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a4354 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 121a4356 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 121a4359 push ecx */
  push32((uint32_t)(ECX));
  /* 121a435a push 1 */
  push32((uint32_t)(0x1u));
  /* 121a435c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a435f push edx */
  push32((uint32_t)(EDX));
  /* 121a4360 call dword ptr [0x121c398c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c398c))), 0x121a4366u);
  /* 121a4366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4368 jne 0x121a436e */
  if (!C.zf) goto L_121a436e;
  /* 121a436a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a436c jmp 0x121a43b2 */
  goto L_121a43b2;
L_121a436e:;
  /* 121a436e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 121a4371 push eax */
  push32((uint32_t)(EAX));
  /* 121a4372 call 0x121a45a0 */
  push32(0x121a4377u); f_121a45a0();
  /* 121a4377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a437a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a437d je 0x121a43ad */
  if (C.zf) goto L_121a43ad;
  /* 121a437f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4383 je 0x121a43ad */
  if (C.zf) goto L_121a43ad;
  /* 121a4385 mov ecx, dword ptr [0x121c397c] */
  ECX = (r32((uint32_t)(0x121c397c)));
  /* 121a438b push ecx */
  push32((uint32_t)(ECX));
  /* 121a438c call 0x121a4620 */
  push32(0x121a4391u); f_121a4620();
  /* 121a4391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4394 mov esi, eax */
  ESI = (EAX);
  /* 121a4396 mov edx, dword ptr [0x121c397c] */
  EDX = (r32((uint32_t)(0x121c397c)));
  /* 121a439c push edx */
  push32((uint32_t)(EDX));
  /* 121a439d call 0x1219a940 */
  push32(0x121a43a2u); f_1219a940();
  /* 121a43a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a43a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a43a7 jne 0x121a43ad */
  if (!C.zf) goto L_121a43ad;
  /* 121a43a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a43ab jmp 0x121a43b2 */
  goto L_121a43b2;
L_121a43ad:;
  /* 121a43ad mov eax, 1 */
  EAX = (0x1u);
L_121a43b2:;
  /* 121a43b2 pop esi */
  ESI = (pop32());
  /* 121a43b3 mov esp, ebp */
  ESP = (EBP);
  /* 121a43b5 pop ebp */
  EBP = (pop32());
  /* 121a43b6 ret  */
  ESPCHK(0x121a4330u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x121a43c0 (77 bytes, 18 insns) */
void f_121a43c0(void) {
  FTRACE(0x121a43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a43c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a43c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a43c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 121a43d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 121a43d9 push eax */
  push32((uint32_t)(EAX));
  /* 121a43da call dword ptr [0x121c62a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62a4))), 0x121a43e0u);
  /* 121a43e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a43e2 je 0x121a43f9 */
  if (C.zf) goto L_121a43f9;
  /* 121a43e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a43eb jne 0x121a43f9 */
  if (!C.zf) goto L_121a43f9;
  /* 121a43ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 121a43f7 jmp 0x121a4403 */
  goto L_121a4403;
L_121a43f9:;
  /* 121a43f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_121a4403:;
  /* 121a4403 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 121a4409 mov esp, ebp */
  ESP = (EBP);
  /* 121a440b pop ebp */
  EBP = (pop32());
  /* 121a440c ret  */
  ESPCHK(0x121a43c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x121a4410 (388 bytes, 118 insns) */
void f_121a4410(void) {
  FTRACE(0x121a4410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4410 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4411 mov ebp, esp */
  EBP = (ESP);
  /* 121a4413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4416 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a441d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 121a4424 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_121a442b:;
  /* 121a442b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a442e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4431 jg 0x121a4578 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a4578;
  /* 121a4437 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a443a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a443d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 121a443e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4440 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 121a4442 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a4445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4448 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a444b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a444e cmp edx, dword ptr [ecx + 0x121c2520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x121c2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4454 jne 0x121a454e */
  if (!C.zf) goto L_121a454e;
  /* 121a445a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a445d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4460 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4464 ja 0x121a4487 */
  if ((!C.cf&&!C.zf)) goto L_121a4487;
  /* 121a4466 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a446a je 0x121a44f9 */
  if (C.zf) goto L_121a44f9;
  /* 121a4470 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4474 je 0x121a44a4 */
  if (C.zf) goto L_121a44a4;
  /* 121a4476 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a447a je 0x121a44c6 */
  if (C.zf) goto L_121a44c6;
  /* 121a447c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4480 je 0x121a44e8 */
  if (C.zf) goto L_121a44e8;
  /* 121a4482 jmp 0x121a4518 */
  goto L_121a4518;
L_121a4487:;
  /* 121a4487 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a448e je 0x121a44b5 */
  if (C.zf) goto L_121a44b5;
  /* 121a4490 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4497 je 0x121a44d7 */
  if (C.zf) goto L_121a44d7;
  /* 121a4499 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a44a0 je 0x121a450a */
  if (C.zf) goto L_121a450a;
  /* 121a44a2 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44a4:;
  /* 121a44a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44aa add ecx, 0x121c2524 */
  { uint32_t _a=(ECX),_b=(0x121c2524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a44b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a44b3 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44b5:;
  /* 121a44b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44bb mov eax, dword ptr [edx + 0x121c252c] */
  EAX = (r32((uint32_t)(EDX + 0x121c252c)));
  /* 121a44c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a44c4 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44c6:;
  /* 121a44c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44cc add ecx, 0x121c2530 */
  { uint32_t _a=(ECX),_b=(0x121c2530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a44d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a44d5 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44d7:;
  /* 121a44d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44dd mov eax, dword ptr [edx + 0x121c2534] */
  EAX = (r32((uint32_t)(EDX + 0x121c2534)));
  /* 121a44e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121a44e6 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44e8:;
  /* 121a44e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44ee add ecx, 0x121c2538 */
  { uint32_t _a=(ECX),_b=(0x121c2538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a44f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a44f7 jmp 0x121a4518 */
  goto L_121a4518;
L_121a44f9:;
  /* 121a44f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a44fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a44ff add edx, 0x121c253c */
  { uint32_t _a=(EDX),_b=(0x121c253cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4505 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a4508 jmp 0x121a4518 */
  goto L_121a4518;
L_121a450a:;
  /* 121a450a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a450d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a4510 add eax, 0x121c2544 */
  { uint32_t _a=(EAX),_b=(0x121c2544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4515 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121a4518:;
  /* 121a4518 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a451c je 0x121a4524 */
  if (C.zf) goto L_121a4524;
  /* 121a451e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4522 jge 0x121a4526 */
  if ((C.sf==C.of)) goto L_121a4526;
L_121a4524:;
  /* 121a4524 jmp 0x121a4578 */
  goto L_121a4578;
L_121a4526:;
  /* 121a4526 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a4529 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a452c push ecx */
  push32((uint32_t)(ECX));
  /* 121a452d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4530 push edx */
  push32((uint32_t)(EDX));
  /* 121a4531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4534 push eax */
  push32((uint32_t)(EAX));
  /* 121a4535 call 0x1219b330 */
  push32(0x121a453au); f_1219b330();
  /* 121a453a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a453d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a4540 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4543 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 121a4547 mov eax, 1 */
  EAX = (0x1u);
  /* 121a454c jmp 0x121a458e */
  goto L_121a458e;
L_121a454e:;
  /* 121a454e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4551 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a4554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4557 cmp eax, dword ptr [edx + 0x121c2520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x121c2520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a455d jae 0x121a456a */
  if (!C.cf) goto L_121a456a;
  /* 121a455f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4562 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4565 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121a4568 jmp 0x121a4573 */
  goto L_121a4573;
L_121a456a:;
  /* 121a456a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a456d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4570 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a4573:;
  /* 121a4573 jmp 0x121a442b */
  goto L_121a442b;
L_121a4578:;
  /* 121a4578 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121a457b push eax */
  push32((uint32_t)(EAX));
  /* 121a457c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121a457f push ecx */
  push32((uint32_t)(ECX));
  /* 121a4580 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121a4583 push edx */
  push32((uint32_t)(EDX));
  /* 121a4584 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4587 push eax */
  push32((uint32_t)(EAX));
  /* 121a4588 call dword ptr [0x121c62b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62b0))), 0x121a458eu);
L_121a458e:;
  /* 121a458e mov esp, ebp */
  ESP = (EBP);
  /* 121a4590 pop ebp */
  EBP = (pop32());
  /* 121a4591 ret 0x10 */
  ESPCHK(0x121a4410u, _esp0);
  ESP += 20; return;
}

/* FUN_100145a0 @ 0x121a45a0 (118 bytes, 42 insns) */
void f_121a45a0(void) {
  FTRACE(0x121a45a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a45a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a45a1 mov ebp, esp */
  EBP = (ESP);
  /* 121a45a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a45a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121a45ad:;
  /* 121a45ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a45b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a45b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 121a45b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a45b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a45bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a45bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121a45c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a45c4 je 0x121a460f */
  if (C.zf) goto L_121a460f;
  /* 121a45c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a45ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a45cd jl 0x121a45e2 */
  if ((C.sf!=C.of)) goto L_121a45e2;
  /* 121a45cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a45d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a45d6 jg 0x121a45e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_121a45e2;
  /* 121a45d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121a45db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a45dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 121a45e0 jmp 0x121a45fc */
  goto L_121a45fc;
L_121a45e2:;
  /* 121a45e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a45e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a45e9 jl 0x121a45fc */
  if ((C.sf!=C.of)) goto L_121a45fc;
  /* 121a45eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a45ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a45f2 jg 0x121a45fc */
  if ((!C.zf&&C.sf==C.of)) goto L_121a45fc;
  /* 121a45f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 121a45f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 121a45f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_121a45fc:;
  /* 121a45fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a45ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 121a4602 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 121a4606 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 121a460a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a460d jmp 0x121a45ad */
  goto L_121a45ad;
L_121a460f:;
  /* 121a460f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4612 mov esp, ebp */
  ESP = (EBP);
  /* 121a4614 pop ebp */
  EBP = (pop32());
  /* 121a4615 ret  */
  ESPCHK(0x121a45a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x121a4620 (101 bytes, 36 insns) */
void f_121a4620(void) {
  FTRACE(0x121a4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4620 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4621 mov ebp, esp */
  EBP = (ESP);
  /* 121a4623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4626 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a462d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4630 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 121a4632 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 121a4635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4638 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a463b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_121a463e:;
  /* 121a463e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121a4642 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4645 jl 0x121a4650 */
  if ((C.sf!=C.of)) goto L_121a4650;
  /* 121a4647 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121a464b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a464e jle 0x121a4662 */
  if ((C.zf||C.sf!=C.of)) goto L_121a4662;
L_121a4650:;
  /* 121a4650 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121a4654 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4657 jl 0x121a467e */
  if ((C.sf!=C.of)) goto L_121a467e;
  /* 121a4659 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 121a465d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4660 jg 0x121a467e */
  if ((!C.zf&&C.sf==C.of)) goto L_121a467e;
L_121a4662:;
  /* 121a4662 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4668 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 121a466b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a466e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 121a4670 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 121a4673 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4676 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4679 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 121a467c jmp 0x121a463e */
  goto L_121a463e;
L_121a467e:;
  /* 121a467e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a4681 mov esp, ebp */
  ESP = (EBP);
  /* 121a4683 pop ebp */
  EBP = (pop32());
  /* 121a4684 ret  */
  ESPCHK(0x121a4620u, _esp0);
  ESP += 4; return;
}

/* FUN_10014690 @ 0x121a4690 (122 bytes, 39 insns) */
void f_121a4690(void) {
  FTRACE(0x121a4690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4690 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4691 mov ebp, esp */
  EBP = (ESP);
  /* 121a4693 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4697 cmp eax, dword ptr [0x121c521c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x121c521c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a469d jae 0x121a46c1 */
  if (!C.cf) goto L_121a46c1;
  /* 121a469f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a46a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 121a46a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a46a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 121a46ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a46ae mov eax, dword ptr [ecx*4 + 0x121c50e0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x121c50e0)));
  /* 121a46b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 121a46ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 121a46bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a46bf jne 0x121a46dc */
  if (!C.zf) goto L_121a46dc;
L_121a46c1:;
  /* 121a46c1 call 0x1219f9e0 */
  push32(0x121a46c6u); f_1219f9e0();
  /* 121a46c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 121a46cc call 0x1219f9f0 */
  push32(0x121a46d1u); f_1219f9f0();
  /* 121a46d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121a46d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a46da jmp 0x121a4706 */
  goto L_121a4706;
L_121a46dc:;
  /* 121a46dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a46df push edx */
  push32((uint32_t)(EDX));
  /* 121a46e0 call 0x121a1200 */
  push32(0x121a46e5u); f_121a1200();
  /* 121a46e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a46e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a46eb push eax */
  push32((uint32_t)(EAX));
  /* 121a46ec call 0x121a4710 */
  push32(0x121a46f1u); f_121a4710();
  /* 121a46f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a46f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a46f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a46fa push ecx */
  push32((uint32_t)(ECX));
  /* 121a46fb call 0x121a1290 */
  push32(0x121a4700u); f_121a1290();
  /* 121a4700 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121a4706:;
  /* 121a4706 mov esp, ebp */
  ESP = (EBP);
  /* 121a4708 pop ebp */
  EBP = (pop32());
  /* 121a4709 ret  */
  ESPCHK(0x121a4690u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x121a4710 (170 bytes, 59 insns) */
void f_121a4710(void) {
  FTRACE(0x121a4710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4710 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4711 mov ebp, esp */
  EBP = (ESP);
  /* 121a4713 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4714 push esi */
  push32((uint32_t)(ESI));
  /* 121a4715 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4718 push eax */
  push32((uint32_t)(EAX));
  /* 121a4719 call 0x121a1080 */
  push32(0x121a471eu); f_121a1080();
  /* 121a471e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4721 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4724 je 0x121a4763 */
  if (C.zf) goto L_121a4763;
  /* 121a4726 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a472a je 0x121a4732 */
  if (C.zf) goto L_121a4732;
  /* 121a472c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4730 jne 0x121a474c */
  if (!C.zf) goto L_121a474c;
L_121a4732:;
  /* 121a4732 push 1 */
  push32((uint32_t)(0x1u));
  /* 121a4734 call 0x121a1080 */
  push32(0x121a4739u); f_121a1080();
  /* 121a4739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a473c mov esi, eax */
  ESI = (EAX);
  /* 121a473e push 2 */
  push32((uint32_t)(0x2u));
  /* 121a4740 call 0x121a1080 */
  push32(0x121a4745u); f_121a1080();
  /* 121a4745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4748 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a474a je 0x121a4763 */
  if (C.zf) goto L_121a4763;
L_121a474c:;
  /* 121a474c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a474f push ecx */
  push32((uint32_t)(ECX));
  /* 121a4750 call 0x121a1080 */
  push32(0x121a4755u); f_121a1080();
  /* 121a4755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4758 push eax */
  push32((uint32_t)(EAX));
  /* 121a4759 call dword ptr [0x121c62ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c62ac))), 0x121a475fu);
  /* 121a475f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a4761 je 0x121a476c */
  if (C.zf) goto L_121a476c;
L_121a4763:;
  /* 121a4763 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121a476a jmp 0x121a4775 */
  goto L_121a4775;
L_121a476c:;
  /* 121a476c call dword ptr [0x121c628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x121c628c))), 0x121a4772u);
  /* 121a4772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121a4775:;
  /* 121a4775 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4778 push edx */
  push32((uint32_t)(EDX));
  /* 121a4779 call 0x121a0fa0 */
  push32(0x121a477eu); f_121a0fa0();
  /* 121a477e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4781 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4784 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 121a4787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a478a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 121a478d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121a4790 mov edx, dword ptr [eax*4 + 0x121c50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121c50e0)));
  /* 121a4797 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 121a479c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a47a0 je 0x121a47b3 */
  if (C.zf) goto L_121a47b3;
  /* 121a47a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a47a5 push eax */
  push32((uint32_t)(EAX));
  /* 121a47a6 call 0x1219f940 */
  push32(0x121a47abu); f_1219f940();
  /* 121a47ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a47ae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121a47b1 jmp 0x121a47b5 */
  goto L_121a47b5;
L_121a47b3:;
  /* 121a47b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121a47b5:;
  /* 121a47b5 pop esi */
  ESI = (pop32());
  /* 121a47b6 mov esp, ebp */
  ESP = (EBP);
  /* 121a47b8 pop ebp */
  EBP = (pop32());
  /* 121a47b9 ret  */
  ESPCHK(0x121a4710u, _esp0);
  ESP += 4; return;
}

/* FUN_100147c0 @ 0x121a47c0 (146 bytes, 52 insns) */
void f_121a47c0(void) {
  FTRACE(0x121a47c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a47c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121a47c1 mov ebp, esp */
  EBP = (ESP);
  /* 121a47c3 push ebx */
  push32((uint32_t)(EBX));
  /* 121a47c4 push esi */
  push32((uint32_t)(ESI));
  /* 121a47c5 push edi */
  push32((uint32_t)(EDI));
L_121a47c6:;
  /* 121a47c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a47ca jne 0x121a47ea */
  if (!C.zf) goto L_121a47ea;
  /* 121a47cc push 0x121bf148 */
  push32((uint32_t)(0x121bf148u));
  /* 121a47d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121a47d3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 121a47d5 push 0x121bf810 */
  push32((uint32_t)(0x121bf810u));
  /* 121a47da push 2 */
  push32((uint32_t)(0x2u));
  /* 121a47dc call 0x12196bd0 */
  push32(0x121a47e1u); f_12196bd0();
  /* 121a47e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a47e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a47e7 jne 0x121a47ea */
  if (!C.zf) goto L_121a47ea;
  /* 121a47e9 int3  */
  x86_unimpl("int3 @ 0x121a47e9");
L_121a47ea:;
  /* 121a47ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121a47ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121a47ee jne 0x121a47c6 */
  if (!C.zf) goto L_121a47c6;
  /* 121a47f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a47f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a47f6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 121a47fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121a47fe je 0x121a484d */
  if (C.zf) goto L_121a484d;
  /* 121a4800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4803 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121a4806 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 121a4809 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121a480b je 0x121a484d */
  if (C.zf) goto L_121a484d;
  /* 121a480d push 2 */
  push32((uint32_t)(0x2u));
  /* 121a480f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4812 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121a4815 push eax */
  push32((uint32_t)(EAX));
  /* 121a4816 call 0x121985a0 */
  push32(0x121a481bu); f_121985a0();
  /* 121a481b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a481e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4821 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121a4824 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 121a482a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a482d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 121a4830 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4833 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 121a4839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a483c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 121a4843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121a4846 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_121a484d:;
  /* 121a484d pop edi */
  EDI = (pop32());
  /* 121a484e pop esi */
  ESI = (pop32());
  /* 121a484f pop ebx */
  EBX = (pop32());
  /* 121a4850 pop ebp */
  EBP = (pop32());
  /* 121a4851 ret  */
  ESPCHK(0x121a47c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014860 @ 0x121a4860 (289 bytes, 97 insns) */
void f_121a4860(void) {
  FTRACE(0x121a4860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4860 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4861 mov ebp, esp */
  EBP = (ESP);
  /* 121a4863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4866 push esi */
  push32((uint32_t)(ESI));
  /* 121a4867 mov eax, dword ptr [0x121c2c98] */
  EAX = (r32((uint32_t)(0x121c2c98)));
  /* 121a486c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a486f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a4876 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a487d jmp 0x121a4888 */
  goto L_121a4888;
L_121a487f:;
  /* 121a487f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4882 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4885 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121a4888:;
  /* 121a4888 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a488c jae 0x121a48c1 */
  if (!C.cf) goto L_121a48c1;
  /* 121a488e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4891 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4894 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a4897 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4898 call 0x1219a940 */
  push32(0x121a489du); f_1219a940();
  /* 121a489d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48a0 mov esi, eax */
  ESI = (EAX);
  /* 121a48a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a48a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a48a8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 121a48ac push ecx */
  push32((uint32_t)(ECX));
  /* 121a48ad call 0x1219a940 */
  push32(0x121a48b2u); f_1219a940();
  /* 121a48b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48b5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48b8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121a48bc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a48bf jmp 0x121a487f */
  goto L_121a487f;
L_121a48c1:;
  /* 121a48c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a48c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48c7 push eax */
  push32((uint32_t)(EAX));
  /* 121a48c8 call 0x12197af0 */
  push32(0x121a48cdu); f_12197af0();
  /* 121a48cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a48d3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a48d7 je 0x121a4979 */
  if (C.zf) goto L_121a4979;
  /* 121a48dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a48e0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a48e3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a48ea jmp 0x121a48f5 */
  goto L_121a48f5;
L_121a48ec:;
  /* 121a48ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a48ef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a48f2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a48f5:;
  /* 121a48f5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a48f9 jae 0x121a496a */
  if (!C.cf) goto L_121a496a;
  /* 121a48fb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a48fe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 121a4901 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4904 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4907 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a490a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a490d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4910 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 121a4913 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4914 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4917 push edx */
  push32((uint32_t)(EDX));
  /* 121a4918 call 0x1219aac0 */
  push32(0x121a491du); f_1219aac0();
  /* 121a491d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4920 push eax */
  push32((uint32_t)(EAX));
  /* 121a4921 call 0x1219a940 */
  push32(0x121a4926u); f_1219a940();
  /* 121a4926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4929 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a492c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a492e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a4931 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4934 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121a4937 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a493a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a493d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4940 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4943 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4946 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 121a494a push eax */
  push32((uint32_t)(EAX));
  /* 121a494b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a494e push ecx */
  push32((uint32_t)(ECX));
  /* 121a494f call 0x1219aac0 */
  push32(0x121a4954u); f_1219aac0();
  /* 121a4954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4957 push eax */
  push32((uint32_t)(EAX));
  /* 121a4958 call 0x1219a940 */
  push32(0x121a495du); f_1219a940();
  /* 121a495d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4960 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4963 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4965 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4968 jmp 0x121a48ec */
  goto L_121a48ec;
L_121a496a:;
  /* 121a496a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a496d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121a4970 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4973 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4976 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121a4979:;
  /* 121a4979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a497c pop esi */
  ESI = (pop32());
  /* 121a497d mov esp, ebp */
  ESP = (EBP);
  /* 121a497f pop ebp */
  EBP = (pop32());
  /* 121a4980 ret  */
  ESPCHK(0x121a4860u, _esp0);
  ESP += 4; return;
}

/* FUN_10014990 @ 0x121a4990 (291 bytes, 97 insns) */
void f_121a4990(void) {
  FTRACE(0x121a4990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121a4990 push ebp */
  push32((uint32_t)(EBP));
  /* 121a4991 mov ebp, esp */
  EBP = (ESP);
  /* 121a4993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121a4996 push esi */
  push32((uint32_t)(ESI));
  /* 121a4997 mov eax, dword ptr [0x121c2c98] */
  EAX = (r32((uint32_t)(0x121c2c98)));
  /* 121a499c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121a499f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121a49a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a49ad jmp 0x121a49b8 */
  goto L_121a49b8;
L_121a49af:;
  /* 121a49af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a49b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a49b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121a49b8:;
  /* 121a49b8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a49bc jae 0x121a49f2 */
  if (!C.cf) goto L_121a49f2;
  /* 121a49be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a49c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a49c4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 121a49c8 push ecx */
  push32((uint32_t)(ECX));
  /* 121a49c9 call 0x1219a940 */
  push32(0x121a49ceu); f_1219a940();
  /* 121a49ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a49d1 mov esi, eax */
  ESI = (EAX);
  /* 121a49d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a49d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a49d9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 121a49dd push ecx */
  push32((uint32_t)(ECX));
  /* 121a49de call 0x1219a940 */
  push32(0x121a49e3u); f_1219a940();
  /* 121a49e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a49e6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a49e9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 121a49ed mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121a49f0 jmp 0x121a49af */
  goto L_121a49af;
L_121a49f2:;
  /* 121a49f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121a49f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a49f8 push eax */
  push32((uint32_t)(EAX));
  /* 121a49f9 call 0x12197af0 */
  push32(0x121a49feu); f_12197af0();
  /* 121a49fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121a4a04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4a08 je 0x121a4aab */
  if (C.zf) goto L_121a4aab;
  /* 121a4a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4a11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a4a14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 121a4a1b jmp 0x121a4a26 */
  goto L_121a4a26;
L_121a4a1d:;
  /* 121a4a1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4a20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_121a4a26:;
  /* 121a4a26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121a4a2a jae 0x121a4a9c */
  if (!C.cf) goto L_121a4a9c;
  /* 121a4a2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 121a4a32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a4a3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4a41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 121a4a45 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4a46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a49 push edx */
  push32((uint32_t)(EDX));
  /* 121a4a4a call 0x1219aac0 */
  push32(0x121a4a4fu); f_1219aac0();
  /* 121a4a4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a52 push eax */
  push32((uint32_t)(EAX));
  /* 121a4a53 call 0x1219a940 */
  push32(0x121a4a58u); f_1219a940();
  /* 121a4a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 121a4a63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 121a4a69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121a4a72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121a4a75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121a4a78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 121a4a7c push eax */
  push32((uint32_t)(EAX));
  /* 121a4a7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a80 push ecx */
  push32((uint32_t)(ECX));
  /* 121a4a81 call 0x1219aac0 */
  push32(0x121a4a86u); f_1219aac0();
  /* 121a4a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a89 push eax */
  push32((uint32_t)(EAX));
  /* 121a4a8a call 0x1219a940 */
  push32(0x121a4a8fu); f_1219a940();
  /* 121a4a8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4a97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121a4a9a jmp 0x121a4a1d */
  goto L_121a4a1d;
L_121a4a9c:;
  /* 121a4a9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4a9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 121a4aa2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 121a4aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121a4aa8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_121a4aab:;
  /* 121a4aab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121a4aae pop esi */
  ESI = (pop32());
  /* 121a4aaf mov esp, ebp */
  ESP = (EBP);
  /* 121a4ab1 pop ebp */
  EBP = (pop32());
  /* 121a4ab2 ret  */
  ESPCHK(0x121a4990u, _esp0);
  ESP += 4; return;
}

