#include "recomp.h"

/* FUN_1000aad0 @ 0x117faad0 (10 bytes, 5 insns) */
void f_117faad0(void) {
  FTRACE(0x117faad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117faad0 push ebp */
  push32((uint32_t)(EBP));
  /* 117faad1 mov ebp, esp */
  EBP = (ESP);
  /* 117faad3 mov eax, dword ptr [0x11820c94] */
  EAX = (r32((uint32_t)(0x11820c94)));
  /* 117faad8 pop ebp */
  EBP = (pop32());
  /* 117faad9 ret  */
  ESPCHK(0x117faad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x117faae0 (31 bytes, 11 insns) */
void f_117faae0(void) {
  FTRACE(0x117faae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117faae0 push ebp */
  push32((uint32_t)(EBP));
  /* 117faae1 mov ebp, esp */
  EBP = (ESP);
  /* 117faae3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faaea jbe 0x117faaf0 */
  if ((C.cf||C.zf)) goto L_117faaf0;
  /* 117faaec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117faaee jmp 0x117faafd */
  goto L_117faafd;
L_117faaf0:;
  /* 117faaf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117faaf3 mov dword ptr [0x11820c94], eax */
  w32((uint32_t)(0x11820c94), (EAX));
  /* 117faaf8 mov eax, 1 */
  EAX = (0x1u);
L_117faafd:;
  /* 117faafd pop ebp */
  EBP = (pop32());
  /* 117faafe ret  */
  ESPCHK(0x117faae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab00 @ 0x117fab00 (89 bytes, 20 insns) */
void f_117fab00(void) {
  FTRACE(0x117fab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fab00 push ebp */
  push32((uint32_t)(EBP));
  /* 117fab01 mov ebp, esp */
  EBP = (ESP);
  /* 117fab03 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 117fab08 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fab0a mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117fab0f push eax */
  push32((uint32_t)(EAX));
  /* 117fab10 call dword ptr [0x11825350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825350))), 0x117fab16u);
  /* 117fab16 mov dword ptr [0x11824088], eax */
  w32((uint32_t)(0x11824088), (EAX));
  /* 117fab1b cmp dword ptr [0x11824088], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824088))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fab22 jne 0x117fab28 */
  if (!C.zf) goto L_117fab28;
  /* 117fab24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fab26 jmp 0x117fab57 */
  goto L_117fab57;
L_117fab28:;
  /* 117fab28 mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fab2e mov dword ptr [0x1182407c], ecx */
  w32((uint32_t)(0x1182407c), (ECX));
  /* 117fab34 mov dword ptr [0x11824080], 0 */
  w32((uint32_t)(0x11824080), (0x0u));
  /* 117fab3e mov dword ptr [0x11824084], 0 */
  w32((uint32_t)(0x11824084), (0x0u));
  /* 117fab48 mov dword ptr [0x11824068], 0x10 */
  w32((uint32_t)(0x11824068), (0x10u));
  /* 117fab52 mov eax, 1 */
  EAX = (0x1u);
L_117fab57:;
  /* 117fab57 pop ebp */
  EBP = (pop32());
  /* 117fab58 ret  */
  ESPCHK(0x117fab00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x117fab60 (85 bytes, 29 insns) */
void f_117fab60(void) {
  FTRACE(0x117fab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fab60 push ebp */
  push32((uint32_t)(EBP));
  /* 117fab61 mov ebp, esp */
  EBP = (ESP);
  /* 117fab63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fab66 mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fab6b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fab6e mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fab74 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fab76 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117fab79 mov edx, dword ptr [0x11824088] */
  EDX = (r32((uint32_t)(0x11824088)));
  /* 117fab7f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117fab82:;
  /* 117fab82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fab85 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fab88 jae 0x117fabaf */
  if (!C.cf) goto L_117fabaf;
  /* 117fab8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fab8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fab90 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fab93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fab96 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fab9d jae 0x117faba4 */
  if (!C.cf) goto L_117faba4;
  /* 117fab9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117faba2 jmp 0x117fabb1 */
  goto L_117fabb1;
L_117faba4:;
  /* 117faba4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117faba7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fabaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fabad jmp 0x117fab82 */
  goto L_117fab82;
L_117fabaf:;
  /* 117fabaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fabb1:;
  /* 117fabb1 mov esp, ebp */
  ESP = (EBP);
  /* 117fabb3 pop ebp */
  EBP = (pop32());
  /* 117fabb4 ret  */
  ESPCHK(0x117fab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x117fabc0 (95 bytes, 33 insns) */
void f_117fabc0(void) {
  FTRACE(0x117fabc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fabc0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fabc1 mov ebp, esp */
  EBP = (ESP);
  /* 117fabc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fabc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fabc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fabcc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fabcf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fabd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fabd5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 117fabd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fabdb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fabe0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fabe3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fabe5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fabe8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fabeb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fabed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fabef jne 0x117fac11 */
  if (!C.zf) goto L_117fac11;
  /* 117fabf1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fabf4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 117fabf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fabf9 jne 0x117fac11 */
  if (!C.zf) goto L_117fac11;
  /* 117fabfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fabfe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fac04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fac06 je 0x117fac11 */
  if (C.zf) goto L_117fac11;
  /* 117fac08 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 117fac0f jmp 0x117fac18 */
  goto L_117fac18;
L_117fac11:;
  /* 117fac11 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_117fac18:;
  /* 117fac18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fac1b mov esp, ebp */
  ESP = (EBP);
  /* 117fac1d pop ebp */
  EBP = (pop32());
  /* 117fac1e ret  */
  ESPCHK(0x117fabc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x117fac20 (1485 bytes, 453 insns) */
void f_117fac20(void) {
  FTRACE(0x117fac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fac20 push ebp */
  push32((uint32_t)(EBP));
  /* 117fac21 mov ebp, esp */
  EBP = (ESP);
  /* 117fac23 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fac26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fac29 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fac2c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 117fac2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fac32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fac35 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fac38 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fac3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fac3e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 117fac41 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fac44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fac47 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fac4d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fac50 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 117fac57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fac5a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fac5d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fac60 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117fac63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fac66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fac68 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fac6b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 117fac6e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fac71 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fac74 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 117fac77 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fac7a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fac7c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117fac7f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fac82 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 117fac85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117fac88 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fac8b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117fac8e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fac90 jne 0x117fadb8 */
  if (!C.zf) goto L_117fadb8;
  /* 117fac96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fac99 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fac9c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fac9f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117faca2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faca6 jbe 0x117facaf */
  if ((C.cf||C.zf)) goto L_117facaf;
  /* 117faca8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_117facaf:;
  /* 117facaf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117facb2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117facb5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 117facb8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117facbb jne 0x117fad91 */
  if (!C.zf) goto L_117fad91;
  /* 117facc1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117facc5 jae 0x117fad26 */
  if (!C.cf) goto L_117fad26;
  /* 117facc7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117faccc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117faccf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117facd1 not eax */
  EAX = (~(EAX));
  /* 117facd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117facd6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117facd9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 117facdd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117facdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117face2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117face5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 117face9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117facec add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117facef mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 117facf2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117facf5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117facf8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117facfb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 117facfe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad01 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fad04 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fad08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fad0a jne 0x117fad24 */
  if (!C.zf) goto L_117fad24;
  /* 117fad0c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fad11 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fad14 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fad16 not eax */
  EAX = (~(EAX));
  /* 117fad18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fad1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fad1d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fad1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fad22 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117fad24:;
  /* 117fad24 jmp 0x117fad91 */
  goto L_117fad91;
L_117fad26:;
  /* 117fad26 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fad29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fad2c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fad31 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fad33 not edx */
  EDX = (~(EDX));
  /* 117fad35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fad38 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad3b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 117fad42 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fad44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fad47 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad4a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 117fad51 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad54 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fad57 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fad5a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fad5d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad60 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fad63 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117fad66 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fad69 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fad6c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fad70 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fad72 jne 0x117fad91 */
  if (!C.zf) goto L_117fad91;
  /* 117fad74 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fad77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fad7a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fad7f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fad81 not edx */
  EDX = (~(EDX));
  /* 117fad83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fad86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fad89 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fad8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fad8e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_117fad91:;
  /* 117fad91 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fad94 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fad97 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fad9a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fad9d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117fada0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fada3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fada6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fada9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fadac mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fadaf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fadb2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fadb5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_117fadb8:;
  /* 117fadb8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fadbb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117fadbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fadc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fadc4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fadc8 jbe 0x117fadd1 */
  if ((C.cf||C.zf)) goto L_117fadd1;
  /* 117fadca mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_117fadd1:;
  /* 117fadd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fadd4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117fadd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fadd9 jne 0x117faf35 */
  if (!C.zf) goto L_117faf35;
  /* 117faddf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fade2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fade5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 117fade8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fadeb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117fadee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fadf1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 117fadf4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fadf8 jbe 0x117fae01 */
  if ((C.cf||C.zf)) goto L_117fae01;
  /* 117fadfa mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_117fae01:;
  /* 117fae01 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fae04 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fae07 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 117fae0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fae0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fae10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fae13 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 117fae16 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fae1a jbe 0x117fae23 */
  if ((C.cf||C.zf)) goto L_117fae23;
  /* 117fae1c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_117fae23:;
  /* 117fae23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fae26 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fae29 je 0x117faf2f */
  if (C.zf) goto L_117faf2f;
  /* 117fae2f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fae32 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fae35 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fae38 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fae3b jne 0x117faf11 */
  if (!C.zf) goto L_117faf11;
  /* 117fae41 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fae45 jae 0x117faea6 */
  if (!C.cf) goto L_117faea6;
  /* 117fae47 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fae4c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fae4f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fae51 not edx */
  EDX = (~(EDX));
  /* 117fae53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fae56 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fae59 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 117fae5d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fae5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fae62 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fae65 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 117fae69 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fae6c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fae6f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fae72 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fae75 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fae78 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fae7b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117fae7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fae81 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fae84 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fae88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fae8a jne 0x117faea4 */
  if (!C.zf) goto L_117faea4;
  /* 117fae8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fae91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fae94 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fae96 not edx */
  EDX = (~(EDX));
  /* 117fae98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fae9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fae9d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fae9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117faea2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117faea4:;
  /* 117faea4 jmp 0x117faf11 */
  goto L_117faf11;
L_117faea6:;
  /* 117faea6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117faea9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117faeac mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117faeb1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117faeb3 not eax */
  EAX = (~(EAX));
  /* 117faeb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117faeb8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faebb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117faec2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117faec4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117faec7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faeca mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 117faed1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faed4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117faed7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 117faeda sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117faedd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faee0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117faee3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 117faee6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faee9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117faeec movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117faef0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117faef2 jne 0x117faf11 */
  if (!C.zf) goto L_117faf11;
  /* 117faef4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117faef7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117faefa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117faeff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117faf01 not eax */
  EAX = (~(EAX));
  /* 117faf03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117faf06 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117faf09 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117faf0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117faf0e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117faf11:;
  /* 117faf11 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 117faf14 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117faf17 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 117faf1a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117faf1d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117faf20 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117faf23 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117faf26 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 117faf29 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117faf2c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_117faf2f:;
  /* 117faf2f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 117faf32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_117faf35:;
  /* 117faf35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117faf38 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117faf3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117faf3d jne 0x117faf4b */
  if (!C.zf) goto L_117faf4b;
  /* 117faf3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117faf42 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faf45 je 0x117fb05b */
  if (C.zf) goto L_117fb05b;
L_117faf4b:;
  /* 117faf4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117faf4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117faf51 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 117faf54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117faf57 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf5a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117faf5d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117faf60 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117faf63 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117faf69 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117faf6c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117faf6f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf72 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 117faf75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf78 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117faf7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf7e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117faf81 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf84 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117faf87 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117faf8a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faf8d jne 0x117fb05b */
  if (!C.zf) goto L_117fb05b;
  /* 117faf93 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117faf97 jae 0x117faff4 */
  if (!C.cf) goto L_117faff4;
  /* 117faf99 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faf9c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117faf9f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fafa3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fafa6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fafa9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fafac add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fafaf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fafb2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fafb5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 117fafb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fafba jne 0x117fafd2 */
  if (!C.zf) goto L_117fafd2;
  /* 117fafbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fafc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fafc4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fafc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fafc9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fafcb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fafcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fafd0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117fafd2:;
  /* 117fafd2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fafd7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fafda shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fafdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fafdf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fafe2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 117fafe6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fafe8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fafeb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fafee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 117faff2 jmp 0x117fb05b */
  goto L_117fb05b;
L_117faff4:;
  /* 117faff4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117faff7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117faffa movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117faffe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fb001 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb004 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fb007 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fb00a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fb00d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb010 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 117fb013 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fb015 jne 0x117fb032 */
  if (!C.zf) goto L_117fb032;
  /* 117fb017 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb01a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb01d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb022 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb027 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb02a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb02c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb02f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_117fb032:;
  /* 117fb032 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb035 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb038 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fb03d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb03f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb042 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fb045 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117fb04c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb04e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb051 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117fb054 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_117fb05b:;
  /* 117fb05b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fb05e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb061 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117fb063 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fb066 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb069 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb06c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 117fb06f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb072 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fb074 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb077 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb07a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117fb07c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb07f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb082 jne 0x117fb1e9 */
  if (!C.zf) goto L_117fb1e9;
  /* 117fb088 cmp dword ptr [0x11824080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb08f je 0x117fb1d8 */
  if (C.zf) goto L_117fb1d8;
  /* 117fb095 mov eax, dword ptr [0x11824078] */
  EAX = (r32((uint32_t)(0x11824078)));
  /* 117fb09a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 117fb09d mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fb0a3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fb0a6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb0a8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117fb0ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117fb0b0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117fb0b5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb0b8 push eax */
  push32((uint32_t)(EAX));
  /* 117fb0b9 call dword ptr [0x1182536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182536c))), 0x117fb0bfu);
  /* 117fb0bf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb0c4 mov ecx, dword ptr [0x11824078] */
  ECX = (r32((uint32_t)(0x11824078)));
  /* 117fb0ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb0cc mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb0d1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fb0d4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb0d6 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb0dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fb0df mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb0e4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb0e7 mov edx, dword ptr [0x11824078] */
  EDX = (r32((uint32_t)(0x11824078)));
  /* 117fb0ed mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 117fb0f8 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb0fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb100 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 117fb103 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fb106 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb10b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb10e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 117fb111 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb117 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117fb11a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 117fb11e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb120 jne 0x117fb136 */
  if (!C.zf) goto L_117fb136;
  /* 117fb122 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb128 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fb12b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 117fb12d mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fb133 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_117fb136:;
  /* 117fb136 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb13c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb140 jne 0x117fb1d8 */
  if (!C.zf) goto L_117fb1d8;
  /* 117fb146 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117fb14b push 0 */
  push32((uint32_t)(0x0u));
  /* 117fb14d mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb152 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117fb155 push ecx */
  push32((uint32_t)(ECX));
  /* 117fb156 call dword ptr [0x1182536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182536c))), 0x117fb15cu);
  /* 117fb15c mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb162 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117fb165 push eax */
  push32((uint32_t)(EAX));
  /* 117fb166 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fb168 mov ecx, dword ptr [0x1182408c] */
  ECX = (r32((uint32_t)(0x1182408c)));
  /* 117fb16e push ecx */
  push32((uint32_t)(ECX));
  /* 117fb16f call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117fb175u);
  /* 117fb175 mov edx, dword ptr [0x11824084] */
  EDX = (r32((uint32_t)(0x11824084)));
  /* 117fb17b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb17e mov eax, dword ptr [0x11824088] */
  EAX = (r32((uint32_t)(0x11824088)));
  /* 117fb183 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb185 mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fb18b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb18e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb190 push eax */
  push32((uint32_t)(EAX));
  /* 117fb191 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fb197 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb19a push edx */
  push32((uint32_t)(EDX));
  /* 117fb19b mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fb1a0 push eax */
  push32((uint32_t)(EAX));
  /* 117fb1a1 call 0x117fe750 */
  push32(0x117fb1a6u); f_117fe750();
  /* 117fb1a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb1a9 mov ecx, dword ptr [0x11824084] */
  ECX = (r32((uint32_t)(0x11824084)));
  /* 117fb1af sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb1b2 mov dword ptr [0x11824084], ecx */
  w32((uint32_t)(0x11824084), (ECX));
  /* 117fb1b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb1bb cmp edx, dword ptr [0x11824080] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11824080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb1c1 jbe 0x117fb1cc */
  if ((C.cf||C.zf)) goto L_117fb1cc;
  /* 117fb1c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb1c6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb1c9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117fb1cc:;
  /* 117fb1cc mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fb1d2 mov dword ptr [0x1182407c], ecx */
  w32((uint32_t)(0x1182407c), (ECX));
L_117fb1d8:;
  /* 117fb1d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb1db mov dword ptr [0x11824080], edx */
  w32((uint32_t)(0x11824080), (EDX));
  /* 117fb1e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb1e4 mov dword ptr [0x11824078], eax */
  w32((uint32_t)(0x11824078), (EAX));
L_117fb1e9:;
  /* 117fb1e9 mov esp, ebp */
  ESP = (EBP);
  /* 117fb1eb pop ebp */
  EBP = (pop32());
  /* 117fb1ec ret  */
  ESPCHK(0x117fac20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x117fb1f0 (1334 bytes, 427 insns) */
void f_117fb1f0(void) {
  FTRACE(0x117fb1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fb1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fb1f1 mov ebp, esp */
  EBP = (ESP);
  /* 117fb1f3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb1f6 push esi */
  push32((uint32_t)(ESI));
  /* 117fb1f7 mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fb1fc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb1ff mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fb205 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb207 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117fb20a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb20d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb210 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 117fb213 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 117fb216 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb219 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117fb21c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb21f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fb222 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb226 jge 0x117fb23c */
  if ((C.sf==C.of)) goto L_117fb23c;
  /* 117fb228 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 117fb22b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb22e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117fb233 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 117fb23a jmp 0x117fb251 */
  goto L_117fb251;
L_117fb23c:;
  /* 117fb23c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117fb243 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb246 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb249 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fb24c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb24e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_117fb251:;
  /* 117fb251 mov ecx, dword ptr [0x1182407c] */
  ECX = (r32((uint32_t)(0x1182407c)));
  /* 117fb257 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_117fb25a:;
  /* 117fb25a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb25d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb260 jae 0x117fb286 */
  if (!C.cf) goto L_117fb286;
  /* 117fb262 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb265 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb268 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 117fb26a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb26d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fb270 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 117fb273 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb275 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb277 je 0x117fb27b */
  if (C.zf) goto L_117fb27b;
  /* 117fb279 jmp 0x117fb286 */
  goto L_117fb286;
L_117fb27b:;
  /* 117fb27b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb27e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb281 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117fb284 jmp 0x117fb25a */
  goto L_117fb25a;
L_117fb286:;
  /* 117fb286 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb289 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb28c jne 0x117fb36d */
  if (!C.zf) goto L_117fb36d;
  /* 117fb292 mov eax, dword ptr [0x11824088] */
  EAX = (r32((uint32_t)(0x11824088)));
  /* 117fb297 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_117fb29a:;
  /* 117fb29a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb29d cmp ecx, dword ptr [0x1182407c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1182407c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb2a3 jae 0x117fb2c9 */
  if (!C.cf) goto L_117fb2c9;
  /* 117fb2a5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb2ab and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 117fb2ad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2b0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fb2b3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 117fb2b6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fb2ba je 0x117fb2be */
  if (C.zf) goto L_117fb2be;
  /* 117fb2bc jmp 0x117fb2c9 */
  goto L_117fb2c9;
L_117fb2be:;
  /* 117fb2be mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2c1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb2c4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb2c7 jmp 0x117fb29a */
  goto L_117fb29a;
L_117fb2c9:;
  /* 117fb2c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2cc cmp ecx, dword ptr [0x1182407c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1182407c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb2d2 jne 0x117fb36d */
  if (!C.zf) goto L_117fb36d;
L_117fb2d8:;
  /* 117fb2d8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2db cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb2de jae 0x117fb2f6 */
  if (!C.cf) goto L_117fb2f6;
  /* 117fb2e0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2e3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb2e7 je 0x117fb2eb */
  if (C.zf) goto L_117fb2eb;
  /* 117fb2e9 jmp 0x117fb2f6 */
  goto L_117fb2f6;
L_117fb2eb:;
  /* 117fb2eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb2f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117fb2f4 jmp 0x117fb2d8 */
  goto L_117fb2d8;
L_117fb2f6:;
  /* 117fb2f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb2f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb2fc jne 0x117fb347 */
  if (!C.zf) goto L_117fb347;
  /* 117fb2fe mov eax, dword ptr [0x11824088] */
  EAX = (r32((uint32_t)(0x11824088)));
  /* 117fb303 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_117fb306:;
  /* 117fb306 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb309 cmp ecx, dword ptr [0x1182407c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1182407c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb30f jae 0x117fb327 */
  if (!C.cf) goto L_117fb327;
  /* 117fb311 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb314 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb318 je 0x117fb31c */
  if (C.zf) goto L_117fb31c;
  /* 117fb31a jmp 0x117fb327 */
  goto L_117fb327;
L_117fb31c:;
  /* 117fb31c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb31f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb322 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb325 jmp 0x117fb306 */
  goto L_117fb306;
L_117fb327:;
  /* 117fb327 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb32a cmp ecx, dword ptr [0x1182407c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1182407c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb330 jne 0x117fb347 */
  if (!C.zf) goto L_117fb347;
  /* 117fb332 call 0x117fb730 */
  push32(0x117fb337u); f_117fb730();
  /* 117fb337 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb33a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb33e jne 0x117fb347 */
  if (!C.zf) goto L_117fb347;
  /* 117fb340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb342 jmp 0x117fb721 */
  goto L_117fb721;
L_117fb347:;
  /* 117fb347 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb34a push edx */
  push32((uint32_t)(EDX));
  /* 117fb34b call 0x117fb840 */
  push32(0x117fb350u); f_117fb840();
  /* 117fb350 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb353 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb356 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117fb359 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117fb35b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb35e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb361 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb364 jne 0x117fb36d */
  if (!C.zf) goto L_117fb36d;
  /* 117fb366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb368 jmp 0x117fb721 */
  goto L_117fb721;
L_117fb36d:;
  /* 117fb36d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb370 mov dword ptr [0x1182407c], edx */
  w32((uint32_t)(0x1182407c), (EDX));
  /* 117fb376 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb379 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb37c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 117fb37f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb382 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fb384 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 117fb387 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb38b je 0x117fb3b0 */
  if (C.zf) goto L_117fb3b0;
  /* 117fb38d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb390 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb393 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb396 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 117fb39a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb39d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb3a0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 117fb3a3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 117fb3aa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 117fb3ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fb3ae jne 0x117fb3e5 */
  if (!C.zf) goto L_117fb3e5;
L_117fb3b0:;
  /* 117fb3b0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_117fb3b7:;
  /* 117fb3b7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb3ba mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb3bd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb3c0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 117fb3c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb3c7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb3ca mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 117fb3cd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 117fb3d4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 117fb3d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fb3d8 jne 0x117fb3e5 */
  if (!C.zf) goto L_117fb3e5;
  /* 117fb3da mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb3dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb3e0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 117fb3e3 jmp 0x117fb3b7 */
  goto L_117fb3b7;
L_117fb3e5:;
  /* 117fb3e5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb3e8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb3ee mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb3f1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117fb3f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fb3fb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117fb402 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb405 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb408 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb40b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 117fb40f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117fb412 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb416 jne 0x117fb432 */
  if (!C.zf) goto L_117fb432;
  /* 117fb418 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 117fb41f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb422 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb425 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fb428 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 117fb42f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_117fb432:;
  /* 117fb432 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb436 jl 0x117fb44b */
  if ((C.sf!=C.of)) goto L_117fb44b;
  /* 117fb438 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fb43b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117fb43d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117fb440 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb443 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb446 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117fb449 jmp 0x117fb432 */
  goto L_117fb432;
L_117fb44b:;
  /* 117fb44b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb44e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb451 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 117fb455 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117fb458 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb45b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fb45d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb460 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fb463 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb466 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117fb469 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb46c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117fb46f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb473 jle 0x117fb47c */
  if ((C.zf||C.sf!=C.of)) goto L_117fb47c;
  /* 117fb475 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_117fb47c:;
  /* 117fb47c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb47f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb482 je 0x117fb6a0 */
  if (C.zf) goto L_117fb6a0;
  /* 117fb488 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb48b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb48e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb491 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb494 jne 0x117fb56a */
  if (!C.zf) goto L_117fb56a;
  /* 117fb49a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb49e jge 0x117fb4ff */
  if ((C.sf==C.of)) goto L_117fb4ff;
  /* 117fb4a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fb4a5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb4a8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb4aa not eax */
  EAX = (~(EAX));
  /* 117fb4ac mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb4af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb4b2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 117fb4b6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb4b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb4bb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb4be mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 117fb4c2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb4c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb4c8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 117fb4cb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fb4ce mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb4d1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb4d4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 117fb4d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb4da add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb4dd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fb4e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fb4e3 jne 0x117fb4fd */
  if (!C.zf) goto L_117fb4fd;
  /* 117fb4e5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fb4ea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb4ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb4ef not eax */
  EAX = (~(EAX));
  /* 117fb4f1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb4f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fb4f6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fb4f8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb4fb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117fb4fd:;
  /* 117fb4fd jmp 0x117fb56a */
  goto L_117fb56a;
L_117fb4ff:;
  /* 117fb4ff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb502 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb505 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb50a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb50c not edx */
  EDX = (~(EDX));
  /* 117fb50e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb511 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb514 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 117fb51b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb51d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb520 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb523 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 117fb52a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb52d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb530 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fb533 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fb536 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb539 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb53c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117fb53f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb542 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb545 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fb549 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb54b jne 0x117fb56a */
  if (!C.zf) goto L_117fb56a;
  /* 117fb54d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb550 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb553 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb558 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb55a not edx */
  EDX = (~(EDX));
  /* 117fb55c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb55f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb562 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fb564 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb567 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_117fb56a:;
  /* 117fb56a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb56d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fb570 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb573 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fb576 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117fb579 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb57c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fb57f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb582 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fb585 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fb588 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb58c je 0x117fb6a0 */
  if (C.zf) goto L_117fb6a0;
  /* 117fb592 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb598 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 117fb59b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117fb59e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fb5a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb5a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117fb5aa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fb5b0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117fb5b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fb5b6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5b9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117fb5bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5bf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb5c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5c5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117fb5c8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5cb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb5ce mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fb5d1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb5d4 jne 0x117fb6a0 */
  if (!C.zf) goto L_117fb6a0;
  /* 117fb5da cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb5de jge 0x117fb63a */
  if ((C.sf==C.of)) goto L_117fb63a;
  /* 117fb5e0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb5e3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb5e6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fb5ea mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb5ed add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb5f0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117fb5f3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fb5f5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb5f8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb5fb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 117fb5fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb600 jne 0x117fb618 */
  if (!C.zf) goto L_117fb618;
  /* 117fb602 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fb607 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb60a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb60c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb60f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fb611 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fb613 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb616 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117fb618:;
  /* 117fb618 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb61d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb620 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb622 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb625 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb628 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 117fb62c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb62e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb631 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb634 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 117fb638 jmp 0x117fb6a0 */
  goto L_117fb6a0;
L_117fb63a:;
  /* 117fb63a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb63d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb640 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fb644 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb647 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb64a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117fb64d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fb64f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb652 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb655 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 117fb658 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb65a jne 0x117fb677 */
  if (!C.zf) goto L_117fb677;
  /* 117fb65c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb65f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb662 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fb667 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fb669 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb66c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fb66f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fb671 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb674 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117fb677:;
  /* 117fb677 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb67a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb67d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fb682 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fb684 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb687 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb68a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 117fb691 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb693 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb696 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb699 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_117fb6a0:;
  /* 117fb6a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb6a4 je 0x117fb6ba */
  if (C.zf) goto L_117fb6ba;
  /* 117fb6a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb6a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb6ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117fb6ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb6b1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6b4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb6b7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_117fb6ba:;
  /* 117fb6ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb6bd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6c0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117fb6c3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb6c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb6cc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117fb6ce mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb6d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb6d7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6da mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 117fb6dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb6e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fb6e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb6e5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fb6e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb6ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb6ed mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117fb6ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fb6f1 jne 0x117fb713 */
  if (!C.zf) goto L_117fb713;
  /* 117fb6f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb6f6 cmp eax, dword ptr [0x11824080] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11824080))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb6fc jne 0x117fb713 */
  if (!C.zf) goto L_117fb713;
  /* 117fb6fe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb701 cmp ecx, dword ptr [0x11824078] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11824078))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb707 jne 0x117fb713 */
  if (!C.zf) goto L_117fb713;
  /* 117fb709 mov dword ptr [0x11824080], 0 */
  w32((uint32_t)(0x11824080), (0x0u));
L_117fb713:;
  /* 117fb713 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117fb716 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fb719 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117fb71b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb71e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117fb721:;
  /* 117fb721 pop esi */
  ESI = (pop32());
  /* 117fb722 mov esp, ebp */
  ESP = (EBP);
  /* 117fb724 pop ebp */
  EBP = (pop32());
  /* 117fb725 ret  */
  ESPCHK(0x117fb1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x117fb730 (271 bytes, 78 insns) */
void f_117fb730(void) {
  FTRACE(0x117fb730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fb730 push ebp */
  push32((uint32_t)(EBP));
  /* 117fb731 mov ebp, esp */
  EBP = (ESP);
  /* 117fb733 push ecx */
  push32((uint32_t)(ECX));
  /* 117fb734 mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fb739 cmp eax, dword ptr [0x11824068] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11824068))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb73f jne 0x117fb78b */
  if (!C.zf) goto L_117fb78b;
  /* 117fb741 mov ecx, dword ptr [0x11824068] */
  ECX = (r32((uint32_t)(0x11824068)));
  /* 117fb747 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb74a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb74d push ecx */
  push32((uint32_t)(ECX));
  /* 117fb74e mov edx, dword ptr [0x11824088] */
  EDX = (r32((uint32_t)(0x11824088)));
  /* 117fb754 push edx */
  push32((uint32_t)(EDX));
  /* 117fb755 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fb757 mov eax, dword ptr [0x1182408c] */
  EAX = (r32((uint32_t)(0x1182408c)));
  /* 117fb75c push eax */
  push32((uint32_t)(EAX));
  /* 117fb75d call dword ptr [0x1182534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182534c))), 0x117fb763u);
  /* 117fb763 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fb766 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb76a jne 0x117fb773 */
  if (!C.zf) goto L_117fb773;
  /* 117fb76c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb76e jmp 0x117fb83b */
  goto L_117fb83b;
L_117fb773:;
  /* 117fb773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb776 mov dword ptr [0x11824088], ecx */
  w32((uint32_t)(0x11824088), (ECX));
  /* 117fb77c mov edx, dword ptr [0x11824068] */
  EDX = (r32((uint32_t)(0x11824068)));
  /* 117fb782 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb785 mov dword ptr [0x11824068], edx */
  w32((uint32_t)(0x11824068), (EDX));
L_117fb78b:;
  /* 117fb78b mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fb790 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb793 mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fb799 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb79b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fb79e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 117fb7a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 117fb7a5 mov edx, dword ptr [0x1182408c] */
  EDX = (r32((uint32_t)(0x1182408c)));
  /* 117fb7ab push edx */
  push32((uint32_t)(EDX));
  /* 117fb7ac call dword ptr [0x11825350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825350))), 0x117fb7b2u);
  /* 117fb7b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb7b5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 117fb7b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb7bb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb7bf jne 0x117fb7c5 */
  if (!C.zf) goto L_117fb7c5;
  /* 117fb7c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb7c3 jmp 0x117fb83b */
  goto L_117fb83b;
L_117fb7c5:;
  /* 117fb7c5 push 4 */
  push32((uint32_t)(0x4u));
  /* 117fb7c7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 117fb7cc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 117fb7d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fb7d3 call dword ptr [0x11825348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825348))), 0x117fb7d9u);
  /* 117fb7d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb7dc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 117fb7df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb7e2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb7e6 jne 0x117fb802 */
  if (!C.zf) goto L_117fb802;
  /* 117fb7e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb7eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb7ee push ecx */
  push32((uint32_t)(ECX));
  /* 117fb7ef push 0 */
  push32((uint32_t)(0x0u));
  /* 117fb7f1 mov edx, dword ptr [0x1182408c] */
  EDX = (r32((uint32_t)(0x1182408c)));
  /* 117fb7f7 push edx */
  push32((uint32_t)(EDX));
  /* 117fb7f8 call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117fb7feu);
  /* 117fb7fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fb800 jmp 0x117fb83b */
  goto L_117fb83b;
L_117fb802:;
  /* 117fb802 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb805 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117fb80b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb80e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117fb815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb818 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 117fb81f mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fb824 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb827 mov dword ptr [0x11824084], eax */
  w32((uint32_t)(0x11824084), (EAX));
  /* 117fb82c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb82f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117fb832 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 117fb838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117fb83b:;
  /* 117fb83b mov esp, ebp */
  ESP = (EBP);
  /* 117fb83d pop ebp */
  EBP = (pop32());
  /* 117fb83e ret  */
  ESPCHK(0x117fb730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x117fb840 (494 bytes, 149 insns) */
void f_117fb840(void) {
  FTRACE(0x117fb840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fb840 push ebp */
  push32((uint32_t)(EBP));
  /* 117fb841 mov ebp, esp */
  EBP = (ESP);
  /* 117fb843 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb849 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fb84c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117fb84f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb852 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fb855 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fb858 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_117fb85f:;
  /* 117fb85f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb863 jl 0x117fb878 */
  if ((C.sf!=C.of)) goto L_117fb878;
  /* 117fb865 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fb868 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117fb86a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fb86d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb870 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb873 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 117fb876 jmp 0x117fb85f */
  goto L_117fb85f;
L_117fb878:;
  /* 117fb878 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb87b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fb881 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb884 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117fb88b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117fb88e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117fb895 jmp 0x117fb8a0 */
  goto L_117fb8a0;
L_117fb897:;
  /* 117fb897 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb89a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb89d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_117fb8a0:;
  /* 117fb8a0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb8a4 jge 0x117fb8c6 */
  if ((C.sf==C.of)) goto L_117fb8c6;
  /* 117fb8a6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fb8a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fb8ac lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 117fb8af mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb8b2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb8b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb8b8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117fb8bb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb8be mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb8c1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117fb8c4 jmp 0x117fb897 */
  goto L_117fb897;
L_117fb8c6:;
  /* 117fb8c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb8c9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 117fb8cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fb8cf mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117fb8d2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb8d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117fb8d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 117fb8d9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117fb8de push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117fb8e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb8e6 push edx */
  push32((uint32_t)(EDX));
  /* 117fb8e7 call dword ptr [0x11825348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825348))), 0x117fb8edu);
  /* 117fb8ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fb8ef jne 0x117fb8f9 */
  if (!C.zf) goto L_117fb8f9;
  /* 117fb8f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fb8f4 jmp 0x117fba2a */
  goto L_117fba2a;
L_117fb8f9:;
  /* 117fb8f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb8fc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb901 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117fb904 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb907 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fb90a jmp 0x117fb918 */
  goto L_117fb918;
L_117fb90c:;
  /* 117fb90c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb90f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb915 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fb918:;
  /* 117fb918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb91b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fb91e ja 0x117fb97d */
  if ((!C.cf&&!C.zf)) goto L_117fb97d;
  /* 117fb920 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb923 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 117fb92a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb92d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 117fb937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fb93a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb93d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb940 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb943 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 117fb949 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb94c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb952 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb955 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117fb958 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb95b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fb961 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb964 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fb967 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb96a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb96f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117fb972 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fb975 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 117fb97b jmp 0x117fb90c */
  goto L_117fb90c;
L_117fb97d:;
  /* 117fb97d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fb980 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb986 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117fb989 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fb98c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb98f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb992 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117fb995 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb998 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fb99b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb99e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb9a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb9a4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117fb9a7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fb9aa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fb9ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb9b0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117fb9b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb9b6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fb9b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fb9bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fb9bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fb9c2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117fb9c5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb9c8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb9cb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 117fb9d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fb9d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb9d9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 117fb9e4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb9e7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 117fb9eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb9ee mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 117fb9f1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fb9f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fb9f7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 117fb9fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fb9fc jne 0x117fba0d */
  if (!C.zf) goto L_117fba0d;
  /* 117fb9fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba01 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fba04 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117fba07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117fba0d:;
  /* 117fba0d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fba12 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fba15 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fba17 not edx */
  EDX = (~(EDX));
  /* 117fba19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fba1f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fba21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fba27 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_117fba2a:;
  /* 117fba2a mov esp, ebp */
  ESP = (EBP);
  /* 117fba2c pop ebp */
  EBP = (pop32());
  /* 117fba2d ret  */
  ESPCHK(0x117fb840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba30 @ 0x117fba30 (1515 bytes, 489 insns) */
void f_117fba30(void) {
  FTRACE(0x117fba30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fba30 push ebp */
  push32((uint32_t)(EBP));
  /* 117fba31 mov ebp, esp */
  EBP = (ESP);
  /* 117fba33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fba36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fba39 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fba3c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 117fba3e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117fba41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba44 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 117fba47 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 117fba4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fba4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fba50 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fba53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117fba56 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fba59 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 117fba5c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fba5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fba62 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fba68 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fba6b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 117fba72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117fba75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fba78 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fba7b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117fba7e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fba81 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fba83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fba86 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 117fba89 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fba8c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fba8f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 117fba92 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fba95 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fba97 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117fba9a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fba9d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbaa0 jle 0x117fbd56 */
  if ((C.zf||C.sf!=C.of)) goto L_117fbd56;
  /* 117fbaa6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbaa9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117fbaac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fbaae jne 0x117fbabb */
  if (!C.zf) goto L_117fbabb;
  /* 117fbab0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbab3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbab6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbab9 jle 0x117fbac2 */
  if ((C.zf||C.sf!=C.of)) goto L_117fbac2;
L_117fbabb:;
  /* 117fbabb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fbabd jmp 0x117fc017 */
  goto L_117fc017;
L_117fbac2:;
  /* 117fbac2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbac5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117fbac8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbacb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fbace cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbad2 jbe 0x117fbadb */
  if ((C.cf||C.zf)) goto L_117fbadb;
  /* 117fbad4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_117fbadb:;
  /* 117fbadb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbade mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbae1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbae4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbae7 jne 0x117fbbbd */
  if (!C.zf) goto L_117fbbbd;
  /* 117fbaed cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbaf1 jae 0x117fbb52 */
  if (!C.cf) goto L_117fbb52;
  /* 117fbaf3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbaf8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbafb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbafd not edx */
  EDX = (~(EDX));
  /* 117fbaff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbb02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb05 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 117fbb09 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fbb0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbb0e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb11 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 117fbb15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb18 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb1b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fbb1e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fbb21 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb24 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb27 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117fbb2a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb2d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb30 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fbb34 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fbb36 jne 0x117fbb50 */
  if (!C.zf) goto L_117fbb50;
  /* 117fbb38 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbb3d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbb40 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbb42 not edx */
  EDX = (~(EDX));
  /* 117fbb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbb47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fbb49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbb4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbb4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117fbb50:;
  /* 117fbb50 jmp 0x117fbbbd */
  goto L_117fbbbd;
L_117fbb52:;
  /* 117fbb52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbb55 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbb58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbb5d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbb5f not eax */
  EAX = (~(EAX));
  /* 117fbb61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbb64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb67 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117fbb6e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbb70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbb73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb76 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 117fbb7d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb80 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb83 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 117fbb86 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fbb89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb8c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb8f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 117fbb92 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbb95 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbb98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fbb9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fbb9e jne 0x117fbbbd */
  if (!C.zf) goto L_117fbbbd;
  /* 117fbba0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbba3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbba6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbbab shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbbad not eax */
  EAX = (~(EAX));
  /* 117fbbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbbb2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbbb5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fbbb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbbba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117fbbbd:;
  /* 117fbbbd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbbc0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fbbc3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbbc6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbbc9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117fbbcc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbbcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fbbd2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbbd5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fbbd8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 117fbbdb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbbde add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbbe1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbbe4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fbbe7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbbeb jle 0x117fbd37 */
  if ((C.zf||C.sf!=C.of)) goto L_117fbd37;
  /* 117fbbf1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbbf4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbbf7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117fbbfa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbbfd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fbc00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbc03 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117fbc06 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbc0a jbe 0x117fbc13 */
  if ((C.cf||C.zf)) goto L_117fbc13;
  /* 117fbc0c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_117fbc13:;
  /* 117fbc13 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbc16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fbc19 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 117fbc1c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117fbc1f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc22 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbc25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbc28 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117fbc2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbc31 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 117fbc34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbc37 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc3a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 117fbc3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc40 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbc43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc46 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117fbc49 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbc4f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbc52 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbc55 jne 0x117fbd23 */
  if (!C.zf) goto L_117fbd23;
  /* 117fbc5b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbc5f jae 0x117fbcbc */
  if (!C.cf) goto L_117fbcbc;
  /* 117fbc61 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbc64 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbc67 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fbc6b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbc6e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbc71 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fbc74 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fbc77 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbc7a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbc7d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 117fbc80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fbc82 jne 0x117fbc9a */
  if (!C.zf) goto L_117fbc9a;
  /* 117fbc84 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbc89 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbc8c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbc8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbc91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fbc93 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbc95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbc98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117fbc9a:;
  /* 117fbc9a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbc9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbca2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbca4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbca7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbcaa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 117fbcae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbcb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbcb3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbcb6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 117fbcba jmp 0x117fbd23 */
  goto L_117fbd23;
L_117fbcbc:;
  /* 117fbcbc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbcbf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbcc2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fbcc6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbcc9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbccc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fbccf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fbcd2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbcd5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbcd8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 117fbcdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fbcdd jne 0x117fbcfa */
  if (!C.zf) goto L_117fbcfa;
  /* 117fbcdf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbce2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbce5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbcea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbcec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbcef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbcf2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbcf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbcf7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_117fbcfa:;
  /* 117fbcfa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbcfd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbd00 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbd05 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbd07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbd0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbd0d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117fbd14 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbd16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbd19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbd1c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_117fbd23:;
  /* 117fbd23 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbd26 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbd29 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117fbd2b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbd2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbd34 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_117fbd37:;
  /* 117fbd37 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fbd3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd3d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbd40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117fbd42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fbd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbd4b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd4e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 117fbd51 jmp 0x117fc012 */
  goto L_117fc012;
L_117fbd56:;
  /* 117fbd56 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fbd59 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbd5c jge 0x117fc012 */
  if ((C.sf==C.of)) goto L_117fc012;
  /* 117fbd62 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fbd65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbd6b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117fbd6d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fbd70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd73 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbd76 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd79 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 117fbd7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbd7f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbd82 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 117fbd85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbd88 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbd8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fbd8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbd91 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117fbd94 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbd97 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117fbd9a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbd9e jbe 0x117fbda7 */
  if ((C.cf||C.zf)) goto L_117fbda7;
  /* 117fbda0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_117fbda7:;
  /* 117fbda7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbdaa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117fbdad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fbdaf jne 0x117fbef0 */
  if (!C.zf) goto L_117fbef0;
  /* 117fbdb5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fbdb8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117fbdbb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbdbe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fbdc1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbdc5 jbe 0x117fbdce */
  if ((C.cf||C.zf)) goto L_117fbdce;
  /* 117fbdc7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_117fbdce:;
  /* 117fbdce mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbdd1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbdd4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbdd7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbdda jne 0x117fbeb0 */
  if (!C.zf) goto L_117fbeb0;
  /* 117fbde0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbde4 jae 0x117fbe45 */
  if (!C.cf) goto L_117fbe45;
  /* 117fbde6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbdeb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbdee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbdf0 not edx */
  EDX = (~(EDX));
  /* 117fbdf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbdf5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbdf8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 117fbdfc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fbdfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbe01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe04 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 117fbe08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe0b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe0e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117fbe11 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fbe14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe17 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117fbe1d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe20 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe23 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fbe27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fbe29 jne 0x117fbe43 */
  if (!C.zf) goto L_117fbe43;
  /* 117fbe2b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbe30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbe33 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbe35 not edx */
  EDX = (~(EDX));
  /* 117fbe37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbe3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fbe3c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbe3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbe41 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117fbe43:;
  /* 117fbe43 jmp 0x117fbeb0 */
  goto L_117fbeb0;
L_117fbe45:;
  /* 117fbe45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbe48 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbe4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbe50 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbe52 not eax */
  EAX = (~(EAX));
  /* 117fbe54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbe57 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe5a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117fbe61 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117fbe63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbe66 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe69 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 117fbe70 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe73 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe76 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 117fbe79 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fbe7c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe7f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe82 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 117fbe85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbe88 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbe8b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117fbe8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fbe91 jne 0x117fbeb0 */
  if (!C.zf) goto L_117fbeb0;
  /* 117fbe93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fbe96 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbe99 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbe9e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbea0 not eax */
  EAX = (~(EAX));
  /* 117fbea2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbea5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbea8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fbeaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbead mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117fbeb0:;
  /* 117fbeb0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbeb3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fbeb6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbeb9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbebc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117fbebf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbec2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fbec5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fbec8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fbecb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 117fbece mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbed1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbed4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fbed7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fbeda sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 117fbedd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbee0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117fbee3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbee7 jbe 0x117fbef0 */
  if ((C.cf||C.zf)) goto L_117fbef0;
  /* 117fbee9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_117fbef0:;
  /* 117fbef0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fbef3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fbef6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 117fbef9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117fbefc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbeff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbf02 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbf05 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117fbf08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf0b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbf0e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117fbf11 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fbf14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf17 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 117fbf1a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf1d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbf20 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 117fbf26 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fbf2c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fbf2f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbf32 jne 0x117fbffe */
  if (!C.zf) goto L_117fbffe;
  /* 117fbf38 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fbf3c jae 0x117fbf98 */
  if (!C.cf) goto L_117fbf98;
  /* 117fbf3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf41 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbf44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fbf48 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf4b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbf4e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117fbf51 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fbf53 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf56 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbf59 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 117fbf5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fbf5e jne 0x117fbf76 */
  if (!C.zf) goto L_117fbf76;
  /* 117fbf60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbf65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fbf68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbf6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbf6d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fbf6f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fbf71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbf74 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_117fbf76:;
  /* 117fbf76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbf7b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fbf7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbf80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbf83 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf86 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 117fbf8a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fbf8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbf8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf92 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 117fbf96 jmp 0x117fbffe */
  goto L_117fbffe;
L_117fbf98:;
  /* 117fbf98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbf9b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbf9e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117fbfa2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbfa5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbfa8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117fbfab add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fbfad mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbfb0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fbfb3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 117fbfb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fbfb8 jne 0x117fbfd5 */
  if (!C.zf) goto L_117fbfd5;
  /* 117fbfba mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fbfbd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbfc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117fbfc5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117fbfc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbfca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fbfcd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 117fbfcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fbfd2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_117fbfd5:;
  /* 117fbfd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fbfd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fbfdb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fbfe0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fbfe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbfe5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbfe8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 117fbfef or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fbff1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fbff4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fbff7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_117fbffe:;
  /* 117fbffe mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc001 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fc004 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117fc006 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc009 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc00c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fc00f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_117fc012:;
  /* 117fc012 mov eax, 1 */
  EAX = (0x1u);
L_117fc017:;
  /* 117fc017 mov esp, ebp */
  ESP = (EBP);
  /* 117fc019 pop ebp */
  EBP = (pop32());
  /* 117fc01a ret  */
  ESPCHK(0x117fba30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c020 @ 0x117fc020 (304 bytes, 79 insns) */
void f_117fc020(void) {
  FTRACE(0x117fc020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fc020 push ebp */
  push32((uint32_t)(EBP));
  /* 117fc021 mov ebp, esp */
  EBP = (ESP);
  /* 117fc023 push ecx */
  push32((uint32_t)(ECX));
  /* 117fc024 cmp dword ptr [0x11824080], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824080))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc02b je 0x117fc14c */
  if (C.zf) goto L_117fc14c;
  /* 117fc031 mov eax, dword ptr [0x11824078] */
  EAX = (r32((uint32_t)(0x11824078)));
  /* 117fc036 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 117fc039 mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fc03f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fc042 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc044 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fc047 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117fc04c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117fc051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc054 push eax */
  push32((uint32_t)(EAX));
  /* 117fc055 call dword ptr [0x1182536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182536c))), 0x117fc05bu);
  /* 117fc05b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fc060 mov ecx, dword ptr [0x11824078] */
  ECX = (r32((uint32_t)(0x11824078)));
  /* 117fc066 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fc068 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc06d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fc070 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117fc072 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fc078 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117fc07b mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc080 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fc083 mov edx, dword ptr [0x11824078] */
  EDX = (r32((uint32_t)(0x11824078)));
  /* 117fc089 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 117fc094 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc099 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fc09c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 117fc09f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117fc0a2 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc0a7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fc0aa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 117fc0ad mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fc0b3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117fc0b6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 117fc0ba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fc0bc jne 0x117fc0d2 */
  if (!C.zf) goto L_117fc0d2;
  /* 117fc0be mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fc0c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fc0c7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 117fc0c9 mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fc0cf mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_117fc0d2:;
  /* 117fc0d2 mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fc0d8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc0dc jne 0x117fc142 */
  if (!C.zf) goto L_117fc142;
  /* 117fc0de cmp dword ptr [0x11824084], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11824084))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc0e5 jle 0x117fc142 */
  if ((C.zf||C.sf!=C.of)) goto L_117fc142;
  /* 117fc0e7 mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc0ec mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117fc0ef push ecx */
  push32((uint32_t)(ECX));
  /* 117fc0f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc0f2 mov edx, dword ptr [0x1182408c] */
  EDX = (r32((uint32_t)(0x1182408c)));
  /* 117fc0f8 push edx */
  push32((uint32_t)(EDX));
  /* 117fc0f9 call dword ptr [0x11825370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825370))), 0x117fc0ffu);
  /* 117fc0ff mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fc104 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fc107 mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fc10d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc10f mov edx, dword ptr [0x11824080] */
  EDX = (r32((uint32_t)(0x11824080)));
  /* 117fc115 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc118 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc11a push ecx */
  push32((uint32_t)(ECX));
  /* 117fc11b mov eax, dword ptr [0x11824080] */
  EAX = (r32((uint32_t)(0x11824080)));
  /* 117fc120 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc123 push eax */
  push32((uint32_t)(EAX));
  /* 117fc124 mov ecx, dword ptr [0x11824080] */
  ECX = (r32((uint32_t)(0x11824080)));
  /* 117fc12a push ecx */
  push32((uint32_t)(ECX));
  /* 117fc12b call 0x117fe750 */
  push32(0x117fc130u); f_117fe750();
  /* 117fc130 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc133 mov edx, dword ptr [0x11824084] */
  EDX = (r32((uint32_t)(0x11824084)));
  /* 117fc139 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc13c mov dword ptr [0x11824084], edx */
  w32((uint32_t)(0x11824084), (EDX));
L_117fc142:;
  /* 117fc142 mov dword ptr [0x11824080], 0 */
  w32((uint32_t)(0x11824080), (0x0u));
L_117fc14c:;
  /* 117fc14c mov esp, ebp */
  ESP = (EBP);
  /* 117fc14e pop ebp */
  EBP = (pop32());
  /* 117fc14f ret  */
  ESPCHK(0x117fc020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c150 @ 0x117fc150 (1565 bytes, 343 insns) */
void f_117fc150(void) {
  FTRACE(0x117fc150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fc150 push ebp */
  push32((uint32_t)(EBP));
  /* 117fc151 mov ebp, esp */
  EBP = (ESP);
  /* 117fc153 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc159 mov eax, dword ptr [0x11824084] */
  EAX = (r32((uint32_t)(0x11824084)));
  /* 117fc15e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fc161 push eax */
  push32((uint32_t)(EAX));
  /* 117fc162 mov ecx, dword ptr [0x11824088] */
  ECX = (r32((uint32_t)(0x11824088)));
  /* 117fc168 push ecx */
  push32((uint32_t)(ECX));
  /* 117fc169 call dword ptr [0x11825398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825398))), 0x117fc16fu);
  /* 117fc16f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc171 je 0x117fc17b */
  if (C.zf) goto L_117fc17b;
  /* 117fc173 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fc176 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc17b:;
  /* 117fc17b mov edx, dword ptr [0x11824088] */
  EDX = (r32((uint32_t)(0x11824088)));
  /* 117fc181 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 117fc187 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 117fc191 jmp 0x117fc1a2 */
  goto L_117fc1a2;
L_117fc193:;
  /* 117fc193 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 117fc199 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc19c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_117fc1a2:;
  /* 117fc1a2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 117fc1a8 cmp ecx, dword ptr [0x11824084] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11824084))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc1ae jge 0x117fc767 */
  if ((C.sf==C.of)) goto L_117fc767;
  /* 117fc1b4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc1ba mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117fc1bd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 117fc1c3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 117fc1c8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 117fc1ce push ecx */
  push32((uint32_t)(ECX));
  /* 117fc1cf call dword ptr [0x11825398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825398))), 0x117fc1d5u);
  /* 117fc1d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc1d7 je 0x117fc1e3 */
  if (C.zf) goto L_117fc1e3;
  /* 117fc1d9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 117fc1de jmp 0x117fc769 */
  goto L_117fc769;
L_117fc1e3:;
  /* 117fc1e3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc1e9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117fc1ec mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 117fc1f2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 117fc1f8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc1fe mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117fc201 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc207 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fc20a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fc20d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 117fc217 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 117fc221 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117fc228 jmp 0x117fc233 */
  goto L_117fc233;
L_117fc22a:;
  /* 117fc22a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fc22d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc230 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117fc233:;
  /* 117fc233 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc237 jge 0x117fc72b */
  if ((C.sf==C.of)) goto L_117fc72b;
  /* 117fc23d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 117fc247 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 117fc251 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 117fc25b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 117fc265 jmp 0x117fc276 */
  goto L_117fc276;
L_117fc267:;
  /* 117fc267 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117fc26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc270 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_117fc276:;
  /* 117fc276 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc27d jge 0x117fc292 */
  if ((C.sf==C.of)) goto L_117fc292;
  /* 117fc27f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117fc285 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 117fc290 jmp 0x117fc267 */
  goto L_117fc267;
L_117fc292:;
  /* 117fc292 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc296 jl 0x117fc6cd */
  if ((C.sf!=C.of)) goto L_117fc6cd;
  /* 117fc29c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117fc2a1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 117fc2a7 push ecx */
  push32((uint32_t)(ECX));
  /* 117fc2a8 call dword ptr [0x11825398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825398))), 0x117fc2aeu);
  /* 117fc2ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc2b0 je 0x117fc2bc */
  if (C.zf) goto L_117fc2bc;
  /* 117fc2b2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 117fc2b7 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc2bc:;
  /* 117fc2bc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 117fc2c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 117fc2c5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 117fc2cf jmp 0x117fc2e0 */
  goto L_117fc2e0;
L_117fc2d1:;
  /* 117fc2d1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 117fc2d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc2da mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_117fc2e0:;
  /* 117fc2e0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc2e7 jge 0x117fc464 */
  if ((C.sf==C.of)) goto L_117fc464;
  /* 117fc2ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fc2f0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc2f3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 117fc2f9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc2ff add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc305 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 117fc30b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc311 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc315 jne 0x117fc322 */
  if (!C.zf) goto L_117fc322;
  /* 117fc317 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 117fc31d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc320 je 0x117fc32c */
  if (C.zf) goto L_117fc32c;
L_117fc322:;
  /* 117fc322 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 117fc327 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc32c:;
  /* 117fc32c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc332 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fc334 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 117fc33a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 117fc340 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 117fc346 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 117fc34c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117fc34f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fc351 je 0x117fc389 */
  if (C.zf) goto L_117fc389;
  /* 117fc353 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 117fc359 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc35c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 117fc362 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc36c jle 0x117fc378 */
  if ((C.zf||C.sf!=C.of)) goto L_117fc378;
  /* 117fc36e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 117fc373 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc378:;
  /* 117fc378 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 117fc37e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc381 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 117fc387 jmp 0x117fc3cb */
  goto L_117fc3cb;
L_117fc389:;
  /* 117fc389 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 117fc38f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fc392 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc395 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 117fc39b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc3a2 jle 0x117fc3ae */
  if ((C.zf||C.sf!=C.of)) goto L_117fc3ae;
  /* 117fc3a4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_117fc3ae:;
  /* 117fc3ae mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117fc3b4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 117fc3bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc3be mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117fc3c4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_117fc3cb:;
  /* 117fc3cb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc3d2 jl 0x117fc3ed */
  if ((C.sf!=C.of)) goto L_117fc3ed;
  /* 117fc3d4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 117fc3da and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 117fc3dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc3df jne 0x117fc3ed */
  if (!C.zf) goto L_117fc3ed;
  /* 117fc3e1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc3eb jle 0x117fc3f7 */
  if ((C.zf||C.sf!=C.of)) goto L_117fc3f7;
L_117fc3ed:;
  /* 117fc3ed mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 117fc3f2 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc3f7:;
  /* 117fc3f7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc3fd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc403 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 117fc406 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc40c je 0x117fc418 */
  if (C.zf) goto L_117fc418;
  /* 117fc40e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 117fc413 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc418:;
  /* 117fc418 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc41e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc424 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 117fc42a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc430 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc436 jb 0x117fc32c */
  if (C.cf) goto L_117fc32c;
  /* 117fc43c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc442 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc448 je 0x117fc454 */
  if (C.zf) goto L_117fc454;
  /* 117fc44a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 117fc44f jmp 0x117fc769 */
  goto L_117fc769;
L_117fc454:;
  /* 117fc454 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fc457 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc45c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fc45f jmp 0x117fc2d1 */
  goto L_117fc2d1;
L_117fc464:;
  /* 117fc464 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fc467 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fc469 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc46f je 0x117fc47b */
  if (C.zf) goto L_117fc47b;
  /* 117fc471 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 117fc476 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc47b:;
  /* 117fc47b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fc47e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 117fc484 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 117fc48b jmp 0x117fc496 */
  goto L_117fc496;
L_117fc48d:;
  /* 117fc48d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc490 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc493 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_117fc496:;
  /* 117fc496 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc49a jge 0x117fc6cd */
  if ((C.sf==C.of)) goto L_117fc6cd;
  /* 117fc4a0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 117fc4aa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 117fc4b0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_117fc4b6:;
  /* 117fc4b6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc4bc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fc4bf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 117fc4c5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc4cb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc4d1 je 0x117fc5fa */
  if (C.zf) goto L_117fc5fa;
  /* 117fc4d7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc4da mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117fc4e0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc4e7 je 0x117fc5fa */
  if (C.zf) goto L_117fc5fa;
  /* 117fc4ed mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc4f3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc4f9 jb 0x117fc50e */
  if (C.cf) goto L_117fc50e;
  /* 117fc4fb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 117fc501 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc506 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc50c jb 0x117fc518 */
  if (C.cf) goto L_117fc518;
L_117fc50e:;
  /* 117fc50e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 117fc513 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc518:;
  /* 117fc518 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc51e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 117fc524 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 117fc52a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 117fc530 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc533 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117fc536 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc539 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc53e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_117fc544:;
  /* 117fc544 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc547 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc54d je 0x117fc56e */
  if (C.zf) goto L_117fc56e;
  /* 117fc54f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc552 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc558 jne 0x117fc55c */
  if (!C.zf) goto L_117fc55c;
  /* 117fc55a jmp 0x117fc56e */
  goto L_117fc56e;
L_117fc55c:;
  /* 117fc55c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc55f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fc561 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 117fc564 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc567 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc569 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117fc56c jmp 0x117fc544 */
  goto L_117fc544;
L_117fc56e:;
  /* 117fc56e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fc571 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc577 jne 0x117fc583 */
  if (!C.zf) goto L_117fc583;
  /* 117fc579 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 117fc57e jmp 0x117fc769 */
  goto L_117fc769;
L_117fc583:;
  /* 117fc583 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc589 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fc58b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fc58e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc591 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 117fc597 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc59e jle 0x117fc5aa */
  if ((C.zf||C.sf!=C.of)) goto L_117fc5aa;
  /* 117fc5a0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_117fc5aa:;
  /* 117fc5aa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 117fc5b0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc5b3 je 0x117fc5bf */
  if (C.zf) goto L_117fc5bf;
  /* 117fc5b5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 117fc5ba jmp 0x117fc769 */
  goto L_117fc769;
L_117fc5bf:;
  /* 117fc5bf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc5c5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fc5c8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc5ce je 0x117fc5da */
  if (C.zf) goto L_117fc5da;
  /* 117fc5d0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 117fc5d5 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc5da:;
  /* 117fc5da mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 117fc5e0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 117fc5e6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117fc5ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc5ef mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 117fc5f5 jmp 0x117fc4b6 */
  goto L_117fc4b6;
L_117fc5fa:;
  /* 117fc5fa cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc601 je 0x117fc671 */
  if (C.zf) goto L_117fc671;
  /* 117fc603 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc607 jge 0x117fc63b */
  if ((C.sf==C.of)) goto L_117fc63b;
  /* 117fc609 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fc60e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc611 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fc613 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 117fc619 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc61b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 117fc621 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fc626 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc629 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fc62b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 117fc631 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc633 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 117fc639 jmp 0x117fc671 */
  goto L_117fc671;
L_117fc63b:;
  /* 117fc63b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc63e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc641 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fc646 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fc648 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 117fc64e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc650 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 117fc656 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc659 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc65c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117fc661 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117fc663 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 117fc669 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc66b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_117fc671:;
  /* 117fc671 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 117fc677 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fc67a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc680 jne 0x117fc694 */
  if (!C.zf) goto L_117fc694;
  /* 117fc682 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fc685 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 117fc68b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc692 je 0x117fc69e */
  if (C.zf) goto L_117fc69e;
L_117fc694:;
  /* 117fc694 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 117fc699 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc69e:;
  /* 117fc69e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 117fc6a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fc6a7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc6ad je 0x117fc6b9 */
  if (C.zf) goto L_117fc6b9;
  /* 117fc6af mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 117fc6b4 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc6b9:;
  /* 117fc6b9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 117fc6bf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc6c2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 117fc6c8 jmp 0x117fc48d */
  goto L_117fc48d;
L_117fc6cd:;
  /* 117fc6cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fc6d0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 117fc6d6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 117fc6dc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc6e0 jne 0x117fc6fa */
  if (!C.zf) goto L_117fc6fa;
  /* 117fc6e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fc6e5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 117fc6eb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 117fc6f1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc6f8 je 0x117fc701 */
  if (C.zf) goto L_117fc701;
L_117fc6fa:;
  /* 117fc6fa mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 117fc6ff jmp 0x117fc769 */
  goto L_117fc769;
L_117fc701:;
  /* 117fc701 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 117fc707 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc70d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 117fc713 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fc716 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc71b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117fc71e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc721 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117fc723 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fc726 jmp 0x117fc22a */
  goto L_117fc22a;
L_117fc72b:;
  /* 117fc72b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc731 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 117fc737 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc739 jne 0x117fc74c */
  if (!C.zf) goto L_117fc74c;
  /* 117fc73b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc741 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 117fc747 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc74a je 0x117fc753 */
  if (C.zf) goto L_117fc753;
L_117fc74c:;
  /* 117fc74c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 117fc751 jmp 0x117fc769 */
  goto L_117fc769;
L_117fc753:;
  /* 117fc753 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 117fc759 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc75c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 117fc762 jmp 0x117fc193 */
  goto L_117fc193;
L_117fc767:;
  /* 117fc767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fc769:;
  /* 117fc769 mov esp, ebp */
  ESP = (EBP);
  /* 117fc76b pop ebp */
  EBP = (pop32());
  /* 117fc76c ret  */
  ESPCHK(0x117fc150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c770 @ 0x117fc770 (250 bytes, 92 insns) */
void f_117fc770(void) {
  FTRACE(0x117fc770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fc770 push ebp */
  push32((uint32_t)(EBP));
  /* 117fc771 mov ebp, esp */
  EBP = (ESP);
  /* 117fc773 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc776 push ebx */
  push32((uint32_t)(EBX));
  /* 117fc777 push esi */
  push32((uint32_t)(ESI));
  /* 117fc778 push edi */
  push32((uint32_t)(EDI));
  /* 117fc779 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 117fc77c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117fc77f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117fc782 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_117fc785:;
  /* 117fc785 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc789 jne 0x117fc7a9 */
  if (!C.zf) goto L_117fc7a9;
  /* 117fc78b push 0x1181e558 */
  push32((uint32_t)(0x1181e558u));
  /* 117fc790 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc792 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 117fc794 push 0x1181e54c */
  push32((uint32_t)(0x1181e54cu));
  /* 117fc799 push 2 */
  push32((uint32_t)(0x2u));
  /* 117fc79b call 0x117f5920 */
  push32(0x117fc7a0u); f_117f5920();
  /* 117fc7a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc7a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc7a6 jne 0x117fc7a9 */
  if (!C.zf) goto L_117fc7a9;
  /* 117fc7a8 int3  */
  x86_unimpl("int3 @ 0x117fc7a8");
L_117fc7a9:;
  /* 117fc7a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fc7ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fc7ad jne 0x117fc785 */
  if (!C.zf) goto L_117fc785;
L_117fc7af:;
  /* 117fc7af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc7b3 jne 0x117fc7d3 */
  if (!C.zf) goto L_117fc7d3;
  /* 117fc7b5 push 0x1181e53c */
  push32((uint32_t)(0x1181e53cu));
  /* 117fc7ba push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc7bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 117fc7be push 0x1181e54c */
  push32((uint32_t)(0x1181e54cu));
  /* 117fc7c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117fc7c5 call 0x117f5920 */
  push32(0x117fc7cau); f_117f5920();
  /* 117fc7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc7cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc7d0 jne 0x117fc7d3 */
  if (!C.zf) goto L_117fc7d3;
  /* 117fc7d2 int3  */
  x86_unimpl("int3 @ 0x117fc7d2");
L_117fc7d3:;
  /* 117fc7d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc7d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc7d7 jne 0x117fc7af */
  if (!C.zf) goto L_117fc7af;
  /* 117fc7d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc7dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 117fc7e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc7e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc7e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117fc7ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc7ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc7f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117fc7f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc7f7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 117fc7fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fc801 push ecx */
  push32((uint32_t)(ECX));
  /* 117fc802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fc805 push edx */
  push32((uint32_t)(EDX));
  /* 117fc806 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc809 push eax */
  push32((uint32_t)(EAX));
  /* 117fc80a call 0x117fd7f0 */
  push32(0x117fc80fu); f_117fd7f0();
  /* 117fc80f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc812 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fc815 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc818 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fc81b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc81e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc821 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117fc824 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc827 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc82b jl 0x117fc84f */
  if ((C.sf!=C.of)) goto L_117fc84f;
  /* 117fc82d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fc832 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117fc835 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fc837 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fc83d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 117fc840 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc843 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fc845 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc848 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc84b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117fc84d jmp 0x117fc860 */
  goto L_117fc860;
L_117fc84f:;
  /* 117fc84f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc852 push edx */
  push32((uint32_t)(EDX));
  /* 117fc853 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc855 call 0x117fd570 */
  push32(0x117fc85au); f_117fd570();
  /* 117fc85a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc85d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_117fc860:;
  /* 117fc860 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fc863 pop edi */
  EDI = (pop32());
  /* 117fc864 pop esi */
  ESI = (pop32());
  /* 117fc865 pop ebx */
  EBX = (pop32());
  /* 117fc866 mov esp, ebp */
  ESP = (EBP);
  /* 117fc868 pop ebp */
  EBP = (pop32());
  /* 117fc869 ret  */
  ESPCHK(0x117fc770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c870 @ 0x117fc870 (183 bytes, 58 insns) */
void f_117fc870(void) {
  FTRACE(0x117fc870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fc870 push ebp */
  push32((uint32_t)(EBP));
  /* 117fc871 mov ebp, esp */
  EBP = (ESP);
  /* 117fc873 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc879 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc87c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc881 ja 0x117fc89a */
  if ((!C.cf&&!C.zf)) goto L_117fc89a;
  /* 117fc883 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc886 mov edx, dword ptr [0x11820c98] */
  EDX = (r32((uint32_t)(0x11820c98)));
  /* 117fc88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc88e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117fc892 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 117fc895 jmp 0x117fc923 */
  goto L_117fc923;
L_117fc89a:;
  /* 117fc89a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc89d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 117fc8a0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fc8a6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fc8ac mov edx, dword ptr [0x11820c98] */
  EDX = (r32((uint32_t)(0x11820c98)));
  /* 117fc8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc8b4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 117fc8b8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 117fc8bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc8bf je 0x117fc8e3 */
  if (C.zf) goto L_117fc8e3;
  /* 117fc8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc8c4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 117fc8c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fc8cd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 117fc8d0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 117fc8d3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 117fc8d6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 117fc8da mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 117fc8e1 jmp 0x117fc8f4 */
  goto L_117fc8f4;
L_117fc8e3:;
  /* 117fc8e3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117fc8e6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 117fc8e9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 117fc8ed mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_117fc8f4:;
  /* 117fc8f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 117fc8f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc8f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fc8fa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 117fc8fd push ecx */
  push32((uint32_t)(ECX));
  /* 117fc8fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fc901 push edx */
  push32((uint32_t)(EDX));
  /* 117fc902 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 117fc905 push eax */
  push32((uint32_t)(EAX));
  /* 117fc906 push 1 */
  push32((uint32_t)(0x1u));
  /* 117fc908 call 0x117fea90 */
  push32(0x117fc90du); f_117fea90();
  /* 117fc90d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc910 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fc912 jne 0x117fc918 */
  if (!C.zf) goto L_117fc918;
  /* 117fc914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc916 jmp 0x117fc923 */
  goto L_117fc923;
L_117fc918:;
  /* 117fc918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc91b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fc920 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_117fc923:;
  /* 117fc923 mov esp, ebp */
  ESP = (EBP);
  /* 117fc925 pop ebp */
  EBP = (pop32());
  /* 117fc926 ret  */
  ESPCHK(0x117fc870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x117fc930 (836 bytes, 238 insns) */
void f_117fc930(void) {
  FTRACE(0x117fc930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fc930 push ebp */
  push32((uint32_t)(EBP));
  /* 117fc931 mov ebp, esp */
  EBP = (ESP);
  /* 117fc933 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fc936 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fc938 call 0x117fa260 */
  push32(0x117fc93du); f_117fa260();
  /* 117fc93d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc943 push eax */
  push32((uint32_t)(EAX));
  /* 117fc944 call 0x117fcc80 */
  push32(0x117fc949u); f_117fcc80();
  /* 117fc949 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc94c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 117fc94f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fc952 cmp ecx, dword ptr [0x11823dc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11823dc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc958 jne 0x117fc96b */
  if (!C.zf) goto L_117fc96b;
  /* 117fc95a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fc95c call 0x117fa300 */
  push32(0x117fc961u); f_117fa300();
  /* 117fc961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc966 jmp 0x117fcc70 */
  goto L_117fcc70;
L_117fc96b:;
  /* 117fc96b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc96f jne 0x117fc98c */
  if (!C.zf) goto L_117fc98c;
  /* 117fc971 call 0x117fcd60 */
  push32(0x117fc976u); f_117fcd60();
  /* 117fc976 call 0x117fcde0 */
  push32(0x117fc97bu); f_117fcde0();
  /* 117fc97b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fc97d call 0x117fa300 */
  push32(0x117fc982u); f_117fa300();
  /* 117fc982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fc987 jmp 0x117fcc70 */
  goto L_117fcc70;
L_117fc98c:;
  /* 117fc98c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fc993 jmp 0x117fc99e */
  goto L_117fc99e;
L_117fc995:;
  /* 117fc995 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc998 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc99b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fc99e:;
  /* 117fc99e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc9a2 jae 0x117fcaef */
  if (!C.cf) goto L_117fcaef;
  /* 117fc9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc9ab imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fc9ae mov ecx, dword ptr [eax + 0x11820eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11820eb8)));
  /* 117fc9b4 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc9b7 jne 0x117fcaea */
  if (!C.zf) goto L_117fcaea;
  /* 117fc9bd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117fc9c4 jmp 0x117fc9cf */
  goto L_117fc9cf;
L_117fc9c6:;
  /* 117fc9c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc9c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc9cc mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_117fc9cf:;
  /* 117fc9cf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc9d6 jae 0x117fc9e4 */
  if (!C.cf) goto L_117fc9e4;
  /* 117fc9d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fc9db mov byte ptr [eax + 0x11823f60], 0 */
  w8((uint32_t)(EAX + 0x11823f60), (0x0u));
  /* 117fc9e2 jmp 0x117fc9c6 */
  goto L_117fc9c6;
L_117fc9e4:;
  /* 117fc9e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117fc9eb jmp 0x117fc9f6 */
  goto L_117fc9f6;
L_117fc9ed:;
  /* 117fc9ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fc9f0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fc9f3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117fc9f6:;
  /* 117fc9f6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fc9fa jae 0x117fca77 */
  if (!C.cf) goto L_117fca77;
  /* 117fc9fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fc9ff imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fca02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fca05 lea ecx, [edx + eax*8 + 0x11820ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11820ec8));
  /* 117fca0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fca0f jmp 0x117fca1a */
  goto L_117fca1a;
L_117fca11:;
  /* 117fca11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fca14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fca17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117fca1a:;
  /* 117fca1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fca1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fca1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117fca21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fca23 je 0x117fca72 */
  if (C.zf) goto L_117fca72;
  /* 117fca25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fca28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fca2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117fca2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fca2f je 0x117fca72 */
  if (C.zf) goto L_117fca72;
  /* 117fca31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fca34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fca36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117fca38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117fca3b jmp 0x117fca46 */
  goto L_117fca46;
L_117fca3d:;
  /* 117fca3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fca40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fca43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117fca46:;
  /* 117fca46 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fca49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fca4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117fca4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fca51 ja 0x117fca70 */
  if ((!C.cf&&!C.zf)) goto L_117fca70;
  /* 117fca53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fca56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fca59 mov dl, byte ptr [eax + 0x11823f61] */
  DL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117fca5f or dl, byte ptr [ecx + 0x11820eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11820eb0))); DL = (_r); fl_logic(_r,8); }
  /* 117fca65 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fca68 mov byte ptr [eax + 0x11823f61], dl */
  w8((uint32_t)(EAX + 0x11823f61), (DL));
  /* 117fca6e jmp 0x117fca3d */
  goto L_117fca3d;
L_117fca70:;
  /* 117fca70 jmp 0x117fca11 */
  goto L_117fca11;
L_117fca72:;
  /* 117fca72 jmp 0x117fc9ed */
  goto L_117fc9ed;
L_117fca77:;
  /* 117fca77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fca7a mov dword ptr [0x11823dc4], ecx */
  w32((uint32_t)(0x11823dc4), (ECX));
  /* 117fca80 mov dword ptr [0x11823e4c], 1 */
  w32((uint32_t)(0x11823e4c), (0x1u));
  /* 117fca8a mov edx, dword ptr [0x11823dc4] */
  EDX = (r32((uint32_t)(0x11823dc4)));
  /* 117fca90 push edx */
  push32((uint32_t)(EDX));
  /* 117fca91 call 0x117fcce0 */
  push32(0x117fca96u); f_117fcce0();
  /* 117fca96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fca99 mov dword ptr [0x11824064], eax */
  w32((uint32_t)(0x11824064), (EAX));
  /* 117fca9e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117fcaa5 jmp 0x117fcab0 */
  goto L_117fcab0;
L_117fcaa7:;
  /* 117fcaa7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fcaaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcaad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117fcab0:;
  /* 117fcab0 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcab4 jae 0x117fcad4 */
  if (!C.cf) goto L_117fcad4;
  /* 117fcab6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcab9 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fcabc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fcabf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fcac2 mov cx, word ptr [ecx + eax*2 + 0x11820ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11820ebc)));
  /* 117fcaca mov word ptr [edx*2 + 0x11823e40], cx */
  w16((uint32_t)(EDX*2 + 0x11823e40), (CX));
  /* 117fcad2 jmp 0x117fcaa7 */
  goto L_117fcaa7;
L_117fcad4:;
  /* 117fcad4 call 0x117fcde0 */
  push32(0x117fcad9u); f_117fcde0();
  /* 117fcad9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fcadb call 0x117fa300 */
  push32(0x117fcae0u); f_117fa300();
  /* 117fcae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcae3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fcae5 jmp 0x117fcc70 */
  goto L_117fcc70;
L_117fcaea:;
  /* 117fcaea jmp 0x117fc995 */
  goto L_117fc995;
L_117fcaef:;
  /* 117fcaef lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 117fcaf2 push edx */
  push32((uint32_t)(EDX));
  /* 117fcaf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fcaf6 push eax */
  push32((uint32_t)(EAX));
  /* 117fcaf7 call dword ptr [0x11825344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825344))), 0x117fcafdu);
  /* 117fcafd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcb00 jne 0x117fcc42 */
  if (!C.zf) goto L_117fcc42;
  /* 117fcb06 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117fcb0d jmp 0x117fcb18 */
  goto L_117fcb18;
L_117fcb0f:;
  /* 117fcb0f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcb12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcb15 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_117fcb18:;
  /* 117fcb18 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcb1f jae 0x117fcb2d */
  if (!C.cf) goto L_117fcb2d;
  /* 117fcb21 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcb24 mov byte ptr [edx + 0x11823f60], 0 */
  w8((uint32_t)(EDX + 0x11823f60), (0x0u));
  /* 117fcb2b jmp 0x117fcb0f */
  goto L_117fcb0f;
L_117fcb2d:;
  /* 117fcb2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fcb30 mov dword ptr [0x11823dc4], eax */
  w32((uint32_t)(0x11823dc4), (EAX));
  /* 117fcb35 mov dword ptr [0x11824064], 0 */
  w32((uint32_t)(0x11824064), (0x0u));
  /* 117fcb3f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcb43 jbe 0x117fcbfe */
  if ((C.cf||C.zf)) goto L_117fcbfe;
  /* 117fcb49 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 117fcb4c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 117fcb4f jmp 0x117fcb5a */
  goto L_117fcb5a;
L_117fcb51:;
  /* 117fcb51 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fcb54 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcb57 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_117fcb5a:;
  /* 117fcb5a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fcb5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fcb5f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117fcb61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fcb63 je 0x117fcbac */
  if (C.zf) goto L_117fcbac;
  /* 117fcb65 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fcb68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fcb6a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 117fcb6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fcb6f je 0x117fcbac */
  if (C.zf) goto L_117fcbac;
  /* 117fcb71 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fcb74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fcb76 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117fcb78 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117fcb7b jmp 0x117fcb86 */
  goto L_117fcb86;
L_117fcb7d:;
  /* 117fcb7d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcb80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcb83 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117fcb86:;
  /* 117fcb86 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fcb89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fcb8b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 117fcb8e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcb91 ja 0x117fcbaa */
  if ((!C.cf&&!C.zf)) goto L_117fcbaa;
  /* 117fcb93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcb96 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117fcb9c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 117fcb9f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcba2 mov byte ptr [edx + 0x11823f61], cl */
  w8((uint32_t)(EDX + 0x11823f61), (CL));
  /* 117fcba8 jmp 0x117fcb7d */
  goto L_117fcb7d;
L_117fcbaa:;
  /* 117fcbaa jmp 0x117fcb51 */
  goto L_117fcb51;
L_117fcbac:;
  /* 117fcbac mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 117fcbb3 jmp 0x117fcbbe */
  goto L_117fcbbe;
L_117fcbb5:;
  /* 117fcbb5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcbb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcbbb mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117fcbbe:;
  /* 117fcbbe cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcbc5 jae 0x117fcbde */
  if (!C.cf) goto L_117fcbde;
  /* 117fcbc7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcbca mov dl, byte ptr [ecx + 0x11823f61] */
  DL = (r8((uint32_t)(ECX + 0x11823f61)));
  /* 117fcbd0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 117fcbd3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fcbd6 mov byte ptr [eax + 0x11823f61], dl */
  w8((uint32_t)(EAX + 0x11823f61), (DL));
  /* 117fcbdc jmp 0x117fcbb5 */
  goto L_117fcbb5;
L_117fcbde:;
  /* 117fcbde mov ecx, dword ptr [0x11823dc4] */
  ECX = (r32((uint32_t)(0x11823dc4)));
  /* 117fcbe4 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcbe5 call 0x117fcce0 */
  push32(0x117fcbeau); f_117fcce0();
  /* 117fcbea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcbed mov dword ptr [0x11824064], eax */
  w32((uint32_t)(0x11824064), (EAX));
  /* 117fcbf2 mov dword ptr [0x11823e4c], 1 */
  w32((uint32_t)(0x11823e4c), (0x1u));
  /* 117fcbfc jmp 0x117fcc08 */
  goto L_117fcc08;
L_117fcbfe:;
  /* 117fcbfe mov dword ptr [0x11823e4c], 0 */
  w32((uint32_t)(0x11823e4c), (0x0u));
L_117fcc08:;
  /* 117fcc08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117fcc0f jmp 0x117fcc1a */
  goto L_117fcc1a;
L_117fcc11:;
  /* 117fcc11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fcc14 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcc17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117fcc1a:;
  /* 117fcc1a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcc1e jae 0x117fcc2f */
  if (!C.cf) goto L_117fcc2f;
  /* 117fcc20 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fcc23 mov word ptr [eax*2 + 0x11823e40], 0 */
  w16((uint32_t)(EAX*2 + 0x11823e40), (0x0u));
  /* 117fcc2d jmp 0x117fcc11 */
  goto L_117fcc11;
L_117fcc2f:;
  /* 117fcc2f call 0x117fcde0 */
  push32(0x117fcc34u); f_117fcde0();
  /* 117fcc34 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fcc36 call 0x117fa300 */
  push32(0x117fcc3bu); f_117fa300();
  /* 117fcc3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcc3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fcc40 jmp 0x117fcc70 */
  goto L_117fcc70;
L_117fcc42:;
  /* 117fcc42 cmp dword ptr [0x118228e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcc49 je 0x117fcc63 */
  if (C.zf) goto L_117fcc63;
  /* 117fcc4b call 0x117fcd60 */
  push32(0x117fcc50u); f_117fcd60();
  /* 117fcc50 call 0x117fcde0 */
  push32(0x117fcc55u); f_117fcde0();
  /* 117fcc55 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fcc57 call 0x117fa300 */
  push32(0x117fcc5cu); f_117fa300();
  /* 117fcc5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcc5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fcc61 jmp 0x117fcc70 */
  goto L_117fcc70;
L_117fcc63:;
  /* 117fcc63 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 117fcc65 call 0x117fa300 */
  push32(0x117fcc6au); f_117fa300();
  /* 117fcc6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcc6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117fcc70:;
  /* 117fcc70 mov esp, ebp */
  ESP = (EBP);
  /* 117fcc72 pop ebp */
  EBP = (pop32());
  /* 117fcc73 ret  */
  ESPCHK(0x117fc930u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x117fcc80 (89 bytes, 21 insns) */
void f_117fcc80(void) {
  FTRACE(0x117fcc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fcc80 push ebp */
  push32((uint32_t)(EBP));
  /* 117fcc81 mov ebp, esp */
  EBP = (ESP);
  /* 117fcc83 mov dword ptr [0x118228e0], 0 */
  w32((uint32_t)(0x118228e0), (0x0u));
  /* 117fcc8d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcc91 jne 0x117fcca5 */
  if (!C.zf) goto L_117fcca5;
  /* 117fcc93 mov dword ptr [0x118228e0], 1 */
  w32((uint32_t)(0x118228e0), (0x1u));
  /* 117fcc9d call dword ptr [0x1182533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182533c))), 0x117fcca3u);
  /* 117fcca3 jmp 0x117fccd7 */
  goto L_117fccd7;
L_117fcca5:;
  /* 117fcca5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcca9 jne 0x117fccbd */
  if (!C.zf) goto L_117fccbd;
  /* 117fccab mov dword ptr [0x118228e0], 1 */
  w32((uint32_t)(0x118228e0), (0x1u));
  /* 117fccb5 call dword ptr [0x11825340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825340))), 0x117fccbbu);
  /* 117fccbb jmp 0x117fccd7 */
  goto L_117fccd7;
L_117fccbd:;
  /* 117fccbd cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fccc1 jne 0x117fccd4 */
  if (!C.zf) goto L_117fccd4;
  /* 117fccc3 mov dword ptr [0x118228e0], 1 */
  w32((uint32_t)(0x118228e0), (0x1u));
  /* 117fcccd mov eax, dword ptr [0x11822900] */
  EAX = (r32((uint32_t)(0x11822900)));
  /* 117fccd2 jmp 0x117fccd7 */
  goto L_117fccd7;
L_117fccd4:;
  /* 117fccd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_117fccd7:;
  /* 117fccd7 pop ebp */
  EBP = (pop32());
  /* 117fccd8 ret  */
  ESPCHK(0x117fcc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce0 @ 0x117fcce0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_117fcce0(void) {
  FTRACE(0x117fcce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fcce0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fcce1 mov ebp, esp */
  EBP = (ESP);
  /* 117fcce3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fcce7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fccea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcced sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fccf3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fccf6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fccfa ja 0x117fcd2a */
  if ((!C.cf&&!C.zf)) goto L_117fcd2a;
  /* 117fccfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fccff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fcd01 mov dl, byte ptr [eax + 0x117fcd44] */
  DL = (r8((uint32_t)(EAX + 0x117fcd44)));
  /* 117fcd07 jmp dword ptr [edx*4 + 0x117fcd30] */
  switch (EDX) {
    case 0: goto L_117fcd0e;
    case 1: goto L_117fcd15;
    case 2: goto L_117fcd1c;
    case 3: goto L_117fcd23;
    case 4: goto L_117fcd2a;
    default: x86_unimpl("switch@0x117fcd07 out of table"); return;
  }
L_117fcd0e:;
  /* 117fcd0e mov eax, 0x411 */
  EAX = (0x411u);
  /* 117fcd13 jmp 0x117fcd2c */
  goto L_117fcd2c;
L_117fcd15:;
  /* 117fcd15 mov eax, 0x804 */
  EAX = (0x804u);
  /* 117fcd1a jmp 0x117fcd2c */
  goto L_117fcd2c;
L_117fcd1c:;
  /* 117fcd1c mov eax, 0x412 */
  EAX = (0x412u);
  /* 117fcd21 jmp 0x117fcd2c */
  goto L_117fcd2c;
L_117fcd23:;
  /* 117fcd23 mov eax, 0x404 */
  EAX = (0x404u);
  /* 117fcd28 jmp 0x117fcd2c */
  goto L_117fcd2c;
L_117fcd2a:;
  /* 117fcd2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fcd2c:;
  /* 117fcd2c mov esp, ebp */
  ESP = (EBP);
  /* 117fcd2e pop ebp */
  EBP = (pop32());
  /* 117fcd2f ret  */
  ESPCHK(0x117fcce0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x117fcd60 (116 bytes, 29 insns) */
void f_117fcd60(void) {
  FTRACE(0x117fcd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fcd60 push ebp */
  push32((uint32_t)(EBP));
  /* 117fcd61 mov ebp, esp */
  EBP = (ESP);
  /* 117fcd63 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcd64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fcd6b jmp 0x117fcd76 */
  goto L_117fcd76;
L_117fcd6d:;
  /* 117fcd6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcd70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcd73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fcd76:;
  /* 117fcd76 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcd7d jge 0x117fcd8b */
  if ((C.sf==C.of)) goto L_117fcd8b;
  /* 117fcd7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcd82 mov byte ptr [ecx + 0x11823f60], 0 */
  w8((uint32_t)(ECX + 0x11823f60), (0x0u));
  /* 117fcd89 jmp 0x117fcd6d */
  goto L_117fcd6d;
L_117fcd8b:;
  /* 117fcd8b mov dword ptr [0x11823dc4], 0 */
  w32((uint32_t)(0x11823dc4), (0x0u));
  /* 117fcd95 mov dword ptr [0x11823e4c], 0 */
  w32((uint32_t)(0x11823e4c), (0x0u));
  /* 117fcd9f mov dword ptr [0x11824064], 0 */
  w32((uint32_t)(0x11824064), (0x0u));
  /* 117fcda9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fcdb0 jmp 0x117fcdbb */
  goto L_117fcdbb;
L_117fcdb2:;
  /* 117fcdb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcdb5 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcdb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fcdbb:;
  /* 117fcdbb cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcdbf jge 0x117fcdd0 */
  if ((C.sf==C.of)) goto L_117fcdd0;
  /* 117fcdc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fcdc4 mov word ptr [eax*2 + 0x11823e40], 0 */
  w16((uint32_t)(EAX*2 + 0x11823e40), (0x0u));
  /* 117fcdce jmp 0x117fcdb2 */
  goto L_117fcdb2;
L_117fcdd0:;
  /* 117fcdd0 mov esp, ebp */
  ESP = (EBP);
  /* 117fcdd2 pop ebp */
  EBP = (pop32());
  /* 117fcdd3 ret  */
  ESPCHK(0x117fcd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cde0 @ 0x117fcde0 (770 bytes, 175 insns) */
void f_117fcde0(void) {
  FTRACE(0x117fcde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fcde0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fcde1 mov ebp, esp */
  EBP = (ESP);
  /* 117fcde3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fcde9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 117fcdef push eax */
  push32((uint32_t)(EAX));
  /* 117fcdf0 mov ecx, dword ptr [0x11823dc4] */
  ECX = (r32((uint32_t)(0x11823dc4)));
  /* 117fcdf6 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcdf7 call dword ptr [0x11825344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825344))), 0x117fcdfdu);
  /* 117fcdfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fce00 jne 0x117fd019 */
  if (!C.zf) goto L_117fd019;
  /* 117fce06 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117fce10 jmp 0x117fce21 */
  goto L_117fce21;
L_117fce12:;
  /* 117fce12 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fce18 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fce1b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_117fce21:;
  /* 117fce21 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fce2b jae 0x117fce42 */
  if (!C.cf) goto L_117fce42;
  /* 117fce2d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fce33 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 117fce39 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 117fce40 jmp 0x117fce12 */
  goto L_117fce12;
L_117fce42:;
  /* 117fce42 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 117fce49 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 117fce4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fce52 jmp 0x117fce5d */
  goto L_117fce5d;
L_117fce54:;
  /* 117fce54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fce57 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fce5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fce5d:;
  /* 117fce5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fce60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fce62 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117fce64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fce66 je 0x117fcea8 */
  if (C.zf) goto L_117fcea8;
  /* 117fce68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fce6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fce6d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117fce6f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 117fce75 jmp 0x117fce86 */
  goto L_117fce86;
L_117fce77:;
  /* 117fce77 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fce7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fce80 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_117fce86:;
  /* 117fce86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fce89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fce8b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 117fce8e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fce94 ja 0x117fcea6 */
  if ((!C.cf&&!C.zf)) goto L_117fcea6;
  /* 117fce96 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fce9c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 117fcea4 jmp 0x117fce77 */
  goto L_117fce77;
L_117fcea6:;
  /* 117fcea6 jmp 0x117fce54 */
  goto L_117fce54;
L_117fcea8:;
  /* 117fcea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fceaa mov eax, dword ptr [0x11824064] */
  EAX = (r32((uint32_t)(0x11824064)));
  /* 117fceaf push eax */
  push32((uint32_t)(EAX));
  /* 117fceb0 mov ecx, dword ptr [0x11823dc4] */
  ECX = (r32((uint32_t)(0x11823dc4)));
  /* 117fceb6 push ecx */
  push32((uint32_t)(ECX));
  /* 117fceb7 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 117fcebd push edx */
  push32((uint32_t)(EDX));
  /* 117fcebe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fcec3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 117fcec9 push eax */
  push32((uint32_t)(EAX));
  /* 117fceca push 1 */
  push32((uint32_t)(0x1u));
  /* 117fcecc call 0x117fea90 */
  push32(0x117fced1u); f_117fea90();
  /* 117fced1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fced4 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fced6 mov ecx, dword ptr [0x11823dc4] */
  ECX = (r32((uint32_t)(0x11823dc4)));
  /* 117fcedc push ecx */
  push32((uint32_t)(ECX));
  /* 117fcedd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fcee2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 117fcee8 push edx */
  push32((uint32_t)(EDX));
  /* 117fcee9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fceee lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 117fcef4 push eax */
  push32((uint32_t)(EAX));
  /* 117fcef5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fcefa mov ecx, dword ptr [0x11824064] */
  ECX = (r32((uint32_t)(0x11824064)));
  /* 117fcf00 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcf01 call 0x117fec50 */
  push32(0x117fcf06u); f_117fec50();
  /* 117fcf06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcf09 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fcf0b mov edx, dword ptr [0x11823dc4] */
  EDX = (r32((uint32_t)(0x11823dc4)));
  /* 117fcf11 push edx */
  push32((uint32_t)(EDX));
  /* 117fcf12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fcf17 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 117fcf1d push eax */
  push32((uint32_t)(EAX));
  /* 117fcf1e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fcf23 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 117fcf29 push ecx */
  push32((uint32_t)(ECX));
  /* 117fcf2a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 117fcf2f mov edx, dword ptr [0x11824064] */
  EDX = (r32((uint32_t)(0x11824064)));
  /* 117fcf35 push edx */
  push32((uint32_t)(EDX));
  /* 117fcf36 call 0x117fec50 */
  push32(0x117fcf3bu); f_117fec50();
  /* 117fcf3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcf3e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117fcf48 jmp 0x117fcf59 */
  goto L_117fcf59;
L_117fcf4a:;
  /* 117fcf4a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcf50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fcf53 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_117fcf59:;
  /* 117fcf59 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fcf63 jae 0x117fd014 */
  if (!C.cf) goto L_117fd014;
  /* 117fcf69 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcf6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fcf71 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 117fcf79 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117fcf7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fcf7e je 0x117fcfb6 */
  if (C.zf) goto L_117fcfb6;
  /* 117fcf80 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcf86 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117fcf8c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 117fcf8f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcf95 mov byte ptr [edx + 0x11823f61], cl */
  w8((uint32_t)(EDX + 0x11823f61), (CL));
  /* 117fcf9b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfa1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfa7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 117fcfae mov byte ptr [eax + 0x11823e60], dl */
  w8((uint32_t)(EAX + 0x11823e60), (DL));
  /* 117fcfb4 jmp 0x117fd00f */
  goto L_117fd00f;
L_117fcfb6:;
  /* 117fcfb6 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fcfbe mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 117fcfc6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117fcfc9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fcfcb je 0x117fd002 */
  if (C.zf) goto L_117fd002;
  /* 117fcfcd mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfd3 mov al, byte ptr [edx + 0x11823f61] */
  AL = (r8((uint32_t)(EDX + 0x11823f61)));
  /* 117fcfd9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117fcfdb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfe1 mov byte ptr [ecx + 0x11823f61], al */
  w8((uint32_t)(ECX + 0x11823f61), (AL));
  /* 117fcfe7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcfed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fcff3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 117fcffa mov byte ptr [edx + 0x11823e60], cl */
  w8((uint32_t)(EDX + 0x11823e60), (CL));
  /* 117fd000 jmp 0x117fd00f */
  goto L_117fd00f;
L_117fd002:;
  /* 117fd002 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd008 mov byte ptr [edx + 0x11823e60], 0 */
  w8((uint32_t)(EDX + 0x11823e60), (0x0u));
L_117fd00f:;
  /* 117fd00f jmp 0x117fcf4a */
  goto L_117fcf4a;
L_117fd014:;
  /* 117fd014 jmp 0x117fd0de */
  goto L_117fd0de;
L_117fd019:;
  /* 117fd019 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 117fd023 jmp 0x117fd034 */
  goto L_117fd034;
L_117fd025:;
  /* 117fd025 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd02b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd02e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_117fd034:;
  /* 117fd034 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd03e jae 0x117fd0de */
  if (!C.cf) goto L_117fd0de;
  /* 117fd044 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd04b jb 0x117fd088 */
  if (C.cf) goto L_117fd088;
  /* 117fd04d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd054 ja 0x117fd088 */
  if ((!C.cf&&!C.zf)) goto L_117fd088;
  /* 117fd056 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd05c mov dl, byte ptr [ecx + 0x11823f61] */
  DL = (r8((uint32_t)(ECX + 0x11823f61)));
  /* 117fd062 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 117fd065 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd06b mov byte ptr [eax + 0x11823f61], dl */
  w8((uint32_t)(EAX + 0x11823f61), (DL));
  /* 117fd071 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd077 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd07a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd080 mov byte ptr [edx + 0x11823e60], cl */
  w8((uint32_t)(EDX + 0x11823e60), (CL));
  /* 117fd086 jmp 0x117fd0d9 */
  goto L_117fd0d9;
L_117fd088:;
  /* 117fd088 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd08f jb 0x117fd0cc */
  if (C.cf) goto L_117fd0cc;
  /* 117fd091 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd098 ja 0x117fd0cc */
  if ((!C.cf&&!C.zf)) goto L_117fd0cc;
  /* 117fd09a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd0a0 mov cl, byte ptr [eax + 0x11823f61] */
  CL = (r8((uint32_t)(EAX + 0x11823f61)));
  /* 117fd0a6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117fd0a9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd0af mov byte ptr [edx + 0x11823f61], cl */
  w8((uint32_t)(EDX + 0x11823f61), (CL));
  /* 117fd0b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd0bb sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd0be mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd0c4 mov byte ptr [ecx + 0x11823e60], al */
  w8((uint32_t)(ECX + 0x11823e60), (AL));
  /* 117fd0ca jmp 0x117fd0d9 */
  goto L_117fd0d9;
L_117fd0cc:;
  /* 117fd0cc mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 117fd0d2 mov byte ptr [edx + 0x11823e60], 0 */
  w8((uint32_t)(EDX + 0x11823e60), (0x0u));
L_117fd0d9:;
  /* 117fd0d9 jmp 0x117fd025 */
  goto L_117fd025;
L_117fd0de:;
  /* 117fd0de mov esp, ebp */
  ESP = (EBP);
  /* 117fd0e0 pop ebp */
  EBP = (pop32());
  /* 117fd0e1 ret  */
  ESPCHK(0x117fcde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0f0 @ 0x117fd0f0 (23 bytes, 9 insns) */
void f_117fd0f0(void) {
  FTRACE(0x117fd0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fd0f1 mov ebp, esp */
  EBP = (ESP);
  /* 117fd0f3 cmp dword ptr [0x11823e4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11823e4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd0fa je 0x117fd103 */
  if (C.zf) goto L_117fd103;
  /* 117fd0fc mov eax, dword ptr [0x11823dc4] */
  EAX = (r32((uint32_t)(0x11823dc4)));
  /* 117fd101 jmp 0x117fd105 */
  goto L_117fd105;
L_117fd103:;
  /* 117fd103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fd105:;
  /* 117fd105 pop ebp */
  EBP = (pop32());
  /* 117fd106 ret  */
  ESPCHK(0x117fd0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d110 @ 0x117fd110 (34 bytes, 10 insns) */
void f_117fd110(void) {
  FTRACE(0x117fd110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd110 push ebp */
  push32((uint32_t)(EBP));
  /* 117fd111 mov ebp, esp */
  EBP = (ESP);
  /* 117fd113 cmp dword ptr [0x11824210], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11824210))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd11a jne 0x117fd130 */
  if (!C.zf) goto L_117fd130;
  /* 117fd11c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 117fd11e call 0x117fc930 */
  push32(0x117fd123u); f_117fc930();
  /* 117fd123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd126 mov dword ptr [0x11824210], 1 */
  w32((uint32_t)(0x11824210), (0x1u));
L_117fd130:;
  /* 117fd130 pop ebp */
  EBP = (pop32());
  /* 117fd131 ret  */
  ESPCHK(0x117fd110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d140 @ 0x117fd140 (664 bytes, 264 insns) [15 switch table(s)] */
void f_117fd140(void) {
  FTRACE(0x117fd140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd140 push ebp */
  push32((uint32_t)(EBP));
  /* 117fd141 mov ebp, esp */
  EBP = (ESP);
  /* 117fd143 push edi */
  push32((uint32_t)(EDI));
  /* 117fd144 push esi */
  push32((uint32_t)(ESI));
  /* 117fd145 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd148 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fd14b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd14e mov eax, ecx */
  EAX = (ECX);
  /* 117fd150 mov edx, ecx */
  EDX = (ECX);
  /* 117fd152 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd154 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd156 jbe 0x117fd160 */
  if ((C.cf||C.zf)) goto L_117fd160;
  /* 117fd158 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd15a jb 0x117fd2d8 */
  if (C.cf) goto L_117fd2d8;
L_117fd160:;
  /* 117fd160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fd166 jne 0x117fd17c */
  if (!C.zf) goto L_117fd17c;
  /* 117fd168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd16b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd16e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd171 jb 0x117fd19c */
  if (C.cf) goto L_117fd19c;
  /* 117fd173 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd175 jmp dword ptr [edx*4 + 0x117fd288] */
  switch (EDX) {
    case 0: goto L_117fd298;
    case 1: goto L_117fd2a0;
    case 2: goto L_117fd2ac;
    case 3: goto L_117fd2c0;
    default: x86_unimpl("switch@0x117fd175 out of table"); return;
  }
L_117fd17c:;
  /* 117fd17c mov eax, edi */
  EAX = (EDI);
  /* 117fd17e mov edx, 3 */
  EDX = (0x3u);
  /* 117fd183 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd186 jb 0x117fd194 */
  if (C.cf) goto L_117fd194;
  /* 117fd188 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117fd18b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd18d jmp dword ptr [eax*4 + 0x117fd1a0] */
  switch (EAX) {
    case 1: goto L_117fd1b0;
    case 2: goto L_117fd1dc;
    case 3: goto L_117fd200;
    default: x86_unimpl("switch@0x117fd18d out of table"); return;
  }
L_117fd194:;
  /* 117fd194 jmp dword ptr [ecx*4 + 0x117fd298] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117fd298)))); return;
  /* 117fd19b nop  */
  /* nop */
L_117fd19c:;
  /* 117fd19c jmp dword ptr [ecx*4 + 0x117fd21c] */
  switch (ECX) {
    case 0: goto L_117fd27f;
    case 1: goto L_117fd26c;
    case 2: goto L_117fd264;
    case 3: goto L_117fd25c;
    case 4: goto L_117fd254;
    case 5: goto L_117fd24c;
    case 6: goto L_117fd244;
    case 7: goto L_117fd23c;
    default: x86_unimpl("switch@0x117fd19c out of table"); return;
  }
  /* 117fd1a3 nop  */
  /* nop */
L_117fd1b0:;
  /* 117fd1b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd1b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd1b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd1b6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd1b9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd1bc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd1bf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd1c2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd1c5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd1c8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd1cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd1ce jb 0x117fd19c */
  if (C.cf) goto L_117fd19c;
  /* 117fd1d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd1d2 jmp dword ptr [edx*4 + 0x117fd288] */
  switch (EDX) {
    case 0: goto L_117fd298;
    case 1: goto L_117fd2a0;
    case 2: goto L_117fd2ac;
    case 3: goto L_117fd2c0;
    default: x86_unimpl("switch@0x117fd1d2 out of table"); return;
  }
  /* 117fd1d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd1dc:;
  /* 117fd1dc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd1de mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd1e0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd1e2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd1e5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd1e8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd1eb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd1ee add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd1f1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd1f4 jb 0x117fd19c */
  if (C.cf) goto L_117fd19c;
  /* 117fd1f6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd1f8 jmp dword ptr [edx*4 + 0x117fd288] */
  switch (EDX) {
    case 0: goto L_117fd298;
    case 1: goto L_117fd2a0;
    case 2: goto L_117fd2ac;
    case 3: goto L_117fd2c0;
    default: x86_unimpl("switch@0x117fd1f8 out of table"); return;
  }
  /* 117fd1ff nop  */
  /* nop */
L_117fd200:;
  /* 117fd200 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd202 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd204 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd206 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117fd207 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd20a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fd20b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd20e jb 0x117fd19c */
  if (C.cf) goto L_117fd19c;
  /* 117fd210 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd212 jmp dword ptr [edx*4 + 0x117fd288] */
  switch (EDX) {
    case 0: goto L_117fd298;
    case 1: goto L_117fd2a0;
    case 2: goto L_117fd2ac;
    case 3: goto L_117fd2c0;
    default: x86_unimpl("switch@0x117fd212 out of table"); return;
  }
  /* 117fd219 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd23c:;
  /* 117fd23c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117fd240 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117fd244:;
  /* 117fd244 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117fd248 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117fd24c:;
  /* 117fd24c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117fd250 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117fd254:;
  /* 117fd254 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117fd258 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117fd25c:;
  /* 117fd25c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117fd260 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117fd264:;
  /* 117fd264 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117fd268 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117fd26c:;
  /* 117fd26c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117fd270 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117fd274 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117fd27b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd27d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117fd27f:;
  /* 117fd27f jmp dword ptr [edx*4 + 0x117fd288] */
  switch (EDX) {
    case 0: goto L_117fd298;
    case 1: goto L_117fd2a0;
    case 2: goto L_117fd2ac;
    case 3: goto L_117fd2c0;
    default: x86_unimpl("switch@0x117fd27f out of table"); return;
  }
  /* 117fd286 mov edi, edi */
  EDI = (EDI);
L_117fd298:;
  /* 117fd298 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd29b pop esi */
  ESI = (pop32());
  /* 117fd29c pop edi */
  EDI = (pop32());
  /* 117fd29d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd29e ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd29f nop  */
  /* nop */
L_117fd2a0:;
  /* 117fd2a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd2a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd2a7 pop esi */
  ESI = (pop32());
  /* 117fd2a8 pop edi */
  EDI = (pop32());
  /* 117fd2a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd2aa ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd2ab nop  */
  /* nop */
L_117fd2ac:;
  /* 117fd2ac mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd2ae mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd2b0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd2b3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd2b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd2b9 pop esi */
  ESI = (pop32());
  /* 117fd2ba pop edi */
  EDI = (pop32());
  /* 117fd2bb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd2bc ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd2bd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd2c0:;
  /* 117fd2c0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fd2c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fd2c4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd2c7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd2ca mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd2cd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd2d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd2d3 pop esi */
  ESI = (pop32());
  /* 117fd2d4 pop edi */
  EDI = (pop32());
  /* 117fd2d5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd2d6 ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd2d7 nop  */
  /* nop */
L_117fd2d8:;
  /* 117fd2d8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117fd2dc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117fd2e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fd2e6 jne 0x117fd30c */
  if (!C.zf) goto L_117fd30c;
  /* 117fd2e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd2eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd2ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd2f1 jb 0x117fd300 */
  if (C.cf) goto L_117fd300;
  /* 117fd2f3 std  */
  C.df=1;
  /* 117fd2f4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd2f6 cld  */
  C.df=0;
  /* 117fd2f7 jmp dword ptr [edx*4 + 0x117fd420] */
  switch (EDX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd2f7 out of table"); return;
  }
  /* 117fd2fe mov edi, edi */
  EDI = (EDI);
L_117fd300:;
  /* 117fd300 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fd302 jmp dword ptr [ecx*4 + 0x117fd3d0] */
  switch (ECX) {
    case 0: goto L_117fd417;
    default: x86_unimpl("switch@0x117fd302 out of table"); return;
  }
  /* 117fd309 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd30c:;
  /* 117fd30c mov eax, edi */
  EAX = (EDI);
  /* 117fd30e mov edx, 3 */
  EDX = (0x3u);
  /* 117fd313 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd316 jb 0x117fd324 */
  if (C.cf) goto L_117fd324;
  /* 117fd318 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117fd31b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd31d jmp dword ptr [eax*4 + 0x117fd328] */
  switch (EAX) {
    case 1: goto L_117fd338;
    case 2: goto L_117fd358;
    case 3: goto L_117fd380;
    default: x86_unimpl("switch@0x117fd31d out of table"); return;
  }
L_117fd324:;
  /* 117fd324 jmp dword ptr [ecx*4 + 0x117fd420] */
  switch (ECX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd324 out of table"); return;
  }
  /* 117fd32b nop  */
  /* nop */
L_117fd338:;
  /* 117fd338 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd33b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd33d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd340 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117fd341 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd344 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117fd345 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd348 jb 0x117fd300 */
  if (C.cf) goto L_117fd300;
  /* 117fd34a std  */
  C.df=1;
  /* 117fd34b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd34d cld  */
  C.df=0;
  /* 117fd34e jmp dword ptr [edx*4 + 0x117fd420] */
  switch (EDX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd34e out of table"); return;
  }
  /* 117fd355 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd358:;
  /* 117fd358 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd35b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd35d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd360 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd363 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd366 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd369 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd36c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd36f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd372 jb 0x117fd300 */
  if (C.cf) goto L_117fd300;
  /* 117fd374 std  */
  C.df=1;
  /* 117fd375 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd377 cld  */
  C.df=0;
  /* 117fd378 jmp dword ptr [edx*4 + 0x117fd420] */
  switch (EDX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd378 out of table"); return;
  }
  /* 117fd37f nop  */
  /* nop */
L_117fd380:;
  /* 117fd380 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd383 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd385 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd388 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd38b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd38e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd391 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fd394 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd397 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd39a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd39d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd3a0 jb 0x117fd300 */
  if (C.cf) goto L_117fd300;
  /* 117fd3a6 std  */
  C.df=1;
  /* 117fd3a7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fd3a9 cld  */
  C.df=0;
  /* 117fd3aa jmp dword ptr [edx*4 + 0x117fd420] */
  switch (EDX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd3aa out of table"); return;
  }
  /* 117fd3b1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117fd3b4 aam 0xd3 */
  x86_unimpl("aam @ 0x117fd3b4");
  /* 117fd3b6 jg 0x117fd3c9 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fd3c9;
  /* 117fd3b9 sar dword ptr [edi + 0x11], cl */
  w32((uint32_t)(EDI + 0x11), (sh_sar((uint32_t)(r32((uint32_t)(EDI + 0x11))), (CL)&0x1f, 32)));
  /* 117fd3bc in al, 0xd3 */
  x86_unimpl("in @ 0x117fd3bc");
  /* 117fd3be jg 0x117fd3d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fd3d1;
  /* 117fd3c0 in al, dx */
  x86_unimpl("in @ 0x117fd3c0");
  /* 117fd3c1 sar dword ptr [edi + 0x11], cl */
  w32((uint32_t)(EDI + 0x11), (sh_sar((uint32_t)(r32((uint32_t)(EDI + 0x11))), (CL)&0x1f, 32)));
  /* 117fd3c4 hlt  */
  x86_unimpl("hlt @ 0x117fd3c4");
  /* 117fd3c5 sar dword ptr [edi + 0x11], cl */
  w32((uint32_t)(EDI + 0x11), (sh_sar((uint32_t)(r32((uint32_t)(EDI + 0x11))), (CL)&0x1f, 32)));
  /* 117fd3c8 cld  */
  C.df=0;
L_117fd3c9:;
  /* 117fd3c9 sar dword ptr [edi + 0x11], cl */
  w32((uint32_t)(EDI + 0x11), (sh_sar((uint32_t)(r32((uint32_t)(EDI + 0x11))), (CL)&0x1f, 32)));
  /* 117fd3cc add al, 0xd4 */
  { uint32_t _a=(AL),_b=(0xd4u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fd3ce jg 0x117fd3e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fd3e1;
  /* 117fd3d4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117fd3d8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117fd3dc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117fd3e0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117fd3e4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117fd3e8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117fd3ec mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117fd3f0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117fd3f4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117fd3f8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117fd3fc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117fd400 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117fd404 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117fd408 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117fd40c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117fd413 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd415 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117fd417:;
  /* 117fd417 jmp dword ptr [edx*4 + 0x117fd420] */
  switch (EDX) {
    case 0: goto L_117fd430;
    case 1: goto L_117fd438;
    case 2: goto L_117fd448;
    case 3: goto L_117fd45c;
    default: x86_unimpl("switch@0x117fd417 out of table"); return;
  }
  /* 117fd41e mov edi, edi */
  EDI = (EDI);
L_117fd430:;
  /* 117fd430 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd433 pop esi */
  ESI = (pop32());
  /* 117fd434 pop edi */
  EDI = (pop32());
  /* 117fd435 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd436 ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd437 nop  */
  /* nop */
L_117fd438:;
  /* 117fd438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd43b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd43e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd441 pop esi */
  ESI = (pop32());
  /* 117fd442 pop edi */
  EDI = (pop32());
  /* 117fd443 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd444 ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd445 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fd448:;
  /* 117fd448 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd44b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd44e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd451 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd454 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd457 pop esi */
  ESI = (pop32());
  /* 117fd458 pop edi */
  EDI = (pop32());
  /* 117fd459 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd45a ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
  /* 117fd45b nop  */
  /* nop */
L_117fd45c:;
  /* 117fd45c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fd45f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fd462 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fd465 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fd468 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fd46b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fd46e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd471 pop esi */
  ESI = (pop32());
  /* 117fd472 pop edi */
  EDI = (pop32());
  /* 117fd473 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fd474 ret  */
  ESPCHK(0x117fd140u, _esp0);
  ESP += 4; return;
L_117fd3d1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fd3d1 (unresolved jump table)"); return;
L_117fd3e1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fd3e1 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x117fd480 (104 bytes, 43 insns) */
void f_117fd480(void) {
  FTRACE(0x117fd480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd480 push ebx */
  push32((uint32_t)(EBX));
  /* 117fd481 push esi */
  push32((uint32_t)(ESI));
  /* 117fd482 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 117fd486 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd488 jne 0x117fd4a2 */
  if (!C.zf) goto L_117fd4a2;
  /* 117fd48a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 117fd48e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fd492 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd494 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd496 mov ebx, eax */
  EBX = (EAX);
  /* 117fd498 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 117fd49c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd49e mov edx, ebx */
  EDX = (EBX);
  /* 117fd4a0 jmp 0x117fd4e3 */
  goto L_117fd4e3;
L_117fd4a2:;
  /* 117fd4a2 mov ecx, eax */
  ECX = (EAX);
  /* 117fd4a4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 117fd4a8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fd4ac mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_117fd4b0:;
  /* 117fd4b0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117fd4b2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 117fd4b4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117fd4b6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 117fd4b8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fd4ba jne 0x117fd4b0 */
  if (!C.zf) goto L_117fd4b0;
  /* 117fd4bc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd4be mov esi, eax */
  ESI = (EAX);
  /* 117fd4c0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117fd4c4 mov ecx, eax */
  ECX = (EAX);
  /* 117fd4c6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 117fd4ca mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117fd4cc add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd4ce jb 0x117fd4de */
  if (C.cf) goto L_117fd4de;
  /* 117fd4d0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd4d4 ja 0x117fd4de */
  if ((!C.cf&&!C.zf)) goto L_117fd4de;
  /* 117fd4d6 jb 0x117fd4df */
  if (C.cf) goto L_117fd4df;
  /* 117fd4d8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd4dc jbe 0x117fd4df */
  if ((C.cf||C.zf)) goto L_117fd4df;
L_117fd4de:;
  /* 117fd4de dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_117fd4df:;
  /* 117fd4df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd4e1 mov eax, esi */
  EAX = (ESI);
L_117fd4e3:;
  /* 117fd4e3 pop esi */
  ESI = (pop32());
  /* 117fd4e4 pop ebx */
  EBX = (pop32());
  /* 117fd4e5 ret 0x10 */
  ESPCHK(0x117fd480u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x117fd4f0 (117 bytes, 44 insns) */
void f_117fd4f0(void) {
  FTRACE(0x117fd4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd4f0 push ebx */
  push32((uint32_t)(EBX));
  /* 117fd4f1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 117fd4f5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd4f7 jne 0x117fd511 */
  if (!C.zf) goto L_117fd511;
  /* 117fd4f9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fd4fd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 117fd501 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd503 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd505 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117fd509 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd50b mov eax, edx */
  EAX = (EDX);
  /* 117fd50d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117fd50f jmp 0x117fd561 */
  goto L_117fd561;
L_117fd511:;
  /* 117fd511 mov ecx, eax */
  ECX = (EAX);
  /* 117fd513 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 117fd517 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 117fd51b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_117fd51f:;
  /* 117fd51f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117fd521 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 117fd523 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117fd525 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 117fd527 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fd529 jne 0x117fd51f */
  if (!C.zf) goto L_117fd51f;
  /* 117fd52b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117fd52d mov ecx, eax */
  ECX = (EAX);
  /* 117fd52f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117fd533 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 117fd534 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 117fd538 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd53a jb 0x117fd54a */
  if (C.cf) goto L_117fd54a;
  /* 117fd53c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd540 ja 0x117fd54a */
  if ((!C.cf&&!C.zf)) goto L_117fd54a;
  /* 117fd542 jb 0x117fd552 */
  if (C.cf) goto L_117fd552;
  /* 117fd544 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd548 jbe 0x117fd552 */
  if ((C.cf||C.zf)) goto L_117fd552;
L_117fd54a:;
  /* 117fd54a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd54e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117fd552:;
  /* 117fd552 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd556 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd55a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fd55c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fd55e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_117fd561:;
  /* 117fd561 pop ebx */
  EBX = (pop32());
  /* 117fd562 ret 0x10 */
  ESPCHK(0x117fd4f0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000d570 @ 0x117fd570 (628 bytes, 214 insns) */
void f_117fd570(void) {
  FTRACE(0x117fd570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd570 push ebp */
  push32((uint32_t)(EBP));
  /* 117fd571 mov ebp, esp */
  EBP = (ESP);
  /* 117fd573 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd576 push ebx */
  push32((uint32_t)(EBX));
  /* 117fd577 push esi */
  push32((uint32_t)(ESI));
  /* 117fd578 push edi */
  push32((uint32_t)(EDI));
L_117fd579:;
  /* 117fd579 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd57d jne 0x117fd59d */
  if (!C.zf) goto L_117fd59d;
  /* 117fd57f push 0x1181e604 */
  push32((uint32_t)(0x1181e604u));
  /* 117fd584 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fd586 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 117fd588 push 0x1181e5f8 */
  push32((uint32_t)(0x1181e5f8u));
  /* 117fd58d push 2 */
  push32((uint32_t)(0x2u));
  /* 117fd58f call 0x117f5920 */
  push32(0x117fd594u); f_117f5920();
  /* 117fd594 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd597 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd59a jne 0x117fd59d */
  if (!C.zf) goto L_117fd59d;
  /* 117fd59c int3  */
  x86_unimpl("int3 @ 0x117fd59c");
L_117fd59d:;
  /* 117fd59d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd59f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd5a1 jne 0x117fd579 */
  if (!C.zf) goto L_117fd579;
  /* 117fd5a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd5a6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117fd5a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 117fd5af mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fd5b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd5b8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd5be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fd5c0 je 0x117fd5cf */
  if (C.zf) goto L_117fd5cf;
  /* 117fd5c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5c5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117fd5c8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 117fd5cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fd5cd je 0x117fd5e5 */
  if (C.zf) goto L_117fd5e5;
L_117fd5cf:;
  /* 117fd5cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117fd5d5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117fd5d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5da mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 117fd5dd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fd5e0 jmp 0x117fd7dd */
  goto L_117fd7dd;
L_117fd5e5:;
  /* 117fd5e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5e8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117fd5eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 117fd5ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd5f0 je 0x117fd63c */
  if (C.zf) goto L_117fd63c;
  /* 117fd5f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5f5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117fd5fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd5ff mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 117fd602 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 117fd605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd607 je 0x117fd625 */
  if (C.zf) goto L_117fd625;
  /* 117fd609 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd60c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd60f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fd612 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117fd614 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd617 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd61a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 117fd61d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd620 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117fd623 jmp 0x117fd63c */
  goto L_117fd63c;
L_117fd625:;
  /* 117fd625 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd628 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd62b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd62e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd631 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117fd634 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fd637 jmp 0x117fd7dd */
  goto L_117fd7dd;
L_117fd63c:;
  /* 117fd63c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd63f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd642 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd645 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd648 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117fd64b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd64e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd651 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 117fd654 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd657 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117fd65a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd65d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117fd664 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fd66b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd66e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117fd671 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd674 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117fd677 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 117fd67d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fd67f jne 0x117fd6af */
  if (!C.zf) goto L_117fd6af;
  /* 117fd681 cmp dword ptr [ebp - 8], 0x11821140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11821140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd688 je 0x117fd693 */
  if (C.zf) goto L_117fd693;
  /* 117fd68a cmp dword ptr [ebp - 8], 0x11821160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11821160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd691 jne 0x117fd6a3 */
  if (!C.zf) goto L_117fd6a3;
L_117fd693:;
  /* 117fd693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd696 push edx */
  push32((uint32_t)(EDX));
  /* 117fd697 call 0x117ff4e0 */
  push32(0x117fd69cu); f_117ff4e0();
  /* 117fd69c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd69f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd6a1 jne 0x117fd6af */
  if (!C.zf) goto L_117fd6af;
L_117fd6a3:;
  /* 117fd6a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6a6 push eax */
  push32((uint32_t)(EAX));
  /* 117fd6a7 call 0x117ff410 */
  push32(0x117fd6acu); f_117ff410();
  /* 117fd6ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fd6af:;
  /* 117fd6af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6b2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117fd6b5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd6bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fd6bd je 0x117fd79b */
  if (C.zf) goto L_117fd79b;
L_117fd6c3:;
  /* 117fd6c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6c9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 117fd6cb sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd6ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fd6d0 jge 0x117fd6f3 */
  if ((C.sf==C.of)) goto L_117fd6f3;
  /* 117fd6d2 push 0x1181e5b8 */
  push32((uint32_t)(0x1181e5b8u));
  /* 117fd6d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fd6d9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 117fd6de push 0x1181e5f8 */
  push32((uint32_t)(0x1181e5f8u));
  /* 117fd6e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 117fd6e5 call 0x117f5920 */
  push32(0x117fd6eau); f_117f5920();
  /* 117fd6ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd6ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd6f0 jne 0x117fd6f3 */
  if (!C.zf) goto L_117fd6f3;
  /* 117fd6f2 int3  */
  x86_unimpl("int3 @ 0x117fd6f2");
L_117fd6f3:;
  /* 117fd6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd6f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd6f7 jne 0x117fd6c3 */
  if (!C.zf) goto L_117fd6c3;
  /* 117fd6f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd6ff mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117fd701 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd704 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fd707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd70a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117fd70d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd710 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd713 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117fd715 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd718 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 117fd71b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd71e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd721 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117fd724 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd728 jle 0x117fd746 */
  if ((C.zf||C.sf!=C.of)) goto L_117fd746;
  /* 117fd72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd72d push ecx */
  push32((uint32_t)(ECX));
  /* 117fd72e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd731 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fd734 push eax */
  push32((uint32_t)(EAX));
  /* 117fd735 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd738 push ecx */
  push32((uint32_t)(ECX));
  /* 117fd739 call 0x117ff100 */
  push32(0x117fd73eu); f_117ff100();
  /* 117fd73e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd741 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117fd744 jmp 0x117fd78e */
  goto L_117fd78e;
L_117fd746:;
  /* 117fd746 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd74a je 0x117fd769 */
  if (C.zf) goto L_117fd769;
  /* 117fd74c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd74f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117fd752 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd755 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117fd758 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fd75b mov ecx, dword ptr [edx*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117fd762 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd764 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117fd767 jmp 0x117fd770 */
  goto L_117fd770;
L_117fd769:;
  /* 117fd769 mov dword ptr [ebp - 0x14], 0x11820a60 */
  w32((uint32_t)(EBP + -0x14), (0x11820a60u));
L_117fd770:;
  /* 117fd770 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117fd773 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 117fd777 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117fd77a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd77c je 0x117fd78e */
  if (C.zf) goto L_117fd78e;
  /* 117fd77e push 2 */
  push32((uint32_t)(0x2u));
  /* 117fd780 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fd782 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd785 push ecx */
  push32((uint32_t)(ECX));
  /* 117fd786 call 0x117fefb0 */
  push32(0x117fd78bu); f_117fefb0();
  /* 117fd78b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fd78e:;
  /* 117fd78e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd791 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117fd794 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 117fd797 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 117fd799 jmp 0x117fd7b9 */
  goto L_117fd7b9;
L_117fd79b:;
  /* 117fd79b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117fd7a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd7a5 push edx */
  push32((uint32_t)(EDX));
  /* 117fd7a6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 117fd7a9 push eax */
  push32((uint32_t)(EAX));
  /* 117fd7aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fd7ad push ecx */
  push32((uint32_t)(ECX));
  /* 117fd7ae call 0x117ff100 */
  push32(0x117fd7b3u); f_117ff100();
  /* 117fd7b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd7b6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117fd7b9:;
  /* 117fd7b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fd7bc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd7bf je 0x117fd7d5 */
  if (C.zf) goto L_117fd7d5;
  /* 117fd7c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd7c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117fd7c7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 117fd7ca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd7cd mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 117fd7d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fd7d3 jmp 0x117fd7dd */
  goto L_117fd7dd;
L_117fd7d5:;
  /* 117fd7d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd7d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_117fd7dd:;
  /* 117fd7dd pop edi */
  EDI = (pop32());
  /* 117fd7de pop esi */
  ESI = (pop32());
  /* 117fd7df pop ebx */
  EBX = (pop32());
  /* 117fd7e0 mov esp, ebp */
  ESP = (EBP);
  /* 117fd7e2 pop ebp */
  EBP = (pop32());
  /* 117fd7e3 ret  */
  ESPCHK(0x117fd570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7f0 @ 0x117fd7f0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_117fd7f0(void) {
  FTRACE(0x117fd7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fd7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fd7f1 mov ebp, esp */
  EBP = (ESP);
  /* 117fd7f3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd7f9 push ebx */
  push32((uint32_t)(EBX));
  /* 117fd7fa push esi */
  push32((uint32_t)(ESI));
  /* 117fd7fb push edi */
  push32((uint32_t)(EDI));
  /* 117fd7fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117fd803 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 117fd80d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_117fd814:;
  /* 117fd814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd817 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 117fd819 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 117fd81c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd820 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd823 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd826 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 117fd829 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fd82b je 0x117fe407 */
  if (C.zf) goto L_117fe407;
  /* 117fd831 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd838 jl 0x117fe407 */
  if ((C.sf!=C.of)) goto L_117fe407;
  /* 117fd83e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd842 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd845 jl 0x117fd866 */
  if ((C.sf!=C.of)) goto L_117fd866;
  /* 117fd847 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd84b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd84e jg 0x117fd866 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fd866;
  /* 117fd850 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd854 movsx ecx, byte ptr [eax + 0x1181e5f0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1181e5f0))));
  /* 117fd85b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 117fd85e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 117fd864 jmp 0x117fd870 */
  goto L_117fd870;
L_117fd866:;
  /* 117fd866 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_117fd870:;
  /* 117fd870 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 117fd876 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 117fd879 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117fd87c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fd87f movsx edx, byte ptr [ecx + eax*8 + 0x1181e610] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1181e610))));
  /* 117fd887 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117fd88a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117fd88d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117fd890 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 117fd896 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd89d ja 0x117fe402 */
  if ((!C.cf&&!C.zf)) goto L_117fe402;
  /* 117fd8a3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 117fd8a9 jmp dword ptr [ecx*4 + 0x117fe414] */
  switch (ECX) {
    case 0: goto L_117fd8b0;
    case 1: goto L_117fd94a;
    case 2: goto L_117fd98c;
    case 3: goto L_117fd9fb;
    case 4: goto L_117fda53;
    case 5: goto L_117fda62;
    case 6: goto L_117fdaae;
    case 7: goto L_117fdb41;
    case 8: goto L_117fd9d8;
    case 9: goto L_117fd9e3;
    case 10: goto L_117fd9ce;
    case 11: goto L_117fd9c3;
    case 12: goto L_117fd9ee;
    case 13: goto L_117fd9f6;
    default: x86_unimpl("switch@0x117fd8a9 out of table"); return;
  }
L_117fd8b0:;
  /* 117fd8b0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117fd8b7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fd8ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117fd8c0 mov eax, dword ptr [0x11820c98] */
  EAX = (r32((uint32_t)(0x11820c98)));
  /* 117fd8c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fd8c7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 117fd8cb and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 117fd8d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fd8d3 je 0x117fd92d */
  if (C.zf) goto L_117fd92d;
  /* 117fd8d5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 117fd8db push edx */
  push32((uint32_t)(EDX));
  /* 117fd8dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd8df push eax */
  push32((uint32_t)(EAX));
  /* 117fd8e0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 117fd8e5 call 0x117fe520 */
  push32(0x117fd8eau); f_117fe520();
  /* 117fd8ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd8ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd8f0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117fd8f2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 117fd8f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fd8f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd8fb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_117fd8fe:;
  /* 117fd8fe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd902 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fd904 jne 0x117fd927 */
  if (!C.zf) goto L_117fd927;
  /* 117fd906 push 0x1181e690 */
  push32((uint32_t)(0x1181e690u));
  /* 117fd90b push 0 */
  push32((uint32_t)(0x0u));
  /* 117fd90d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 117fd912 push 0x1181e684 */
  push32((uint32_t)(0x1181e684u));
  /* 117fd917 push 2 */
  push32((uint32_t)(0x2u));
  /* 117fd919 call 0x117f5920 */
  push32(0x117fd91eu); f_117f5920();
  /* 117fd91e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd921 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd924 jne 0x117fd927 */
  if (!C.zf) goto L_117fd927;
  /* 117fd926 int3  */
  x86_unimpl("int3 @ 0x117fd926");
L_117fd927:;
  /* 117fd927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fd92b jne 0x117fd8fe */
  if (!C.zf) goto L_117fd8fe;
L_117fd92d:;
  /* 117fd92d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 117fd933 push ecx */
  push32((uint32_t)(ECX));
  /* 117fd934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fd937 push edx */
  push32((uint32_t)(EDX));
  /* 117fd938 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd93c push eax */
  push32((uint32_t)(EAX));
  /* 117fd93d call 0x117fe520 */
  push32(0x117fd942u); f_117fe520();
  /* 117fd942 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fd945 jmp 0x117fe402 */
  goto L_117fe402;
L_117fd94a:;
  /* 117fd94a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117fd951 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fd954 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 117fd95a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 117fd960 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 117fd966 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 117fd96c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117fd96f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fd976 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 117fd980 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117fd987 jmp 0x117fe402 */
  goto L_117fe402;
L_117fd98c:;
  /* 117fd98c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd990 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 117fd996 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 117fd99c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fd99f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 117fd9a5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fd9ac ja 0x117fd9f6 */
  if ((!C.cf&&!C.zf)) goto L_117fd9f6;
  /* 117fd9ae mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 117fd9b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fd9b6 mov al, byte ptr [ecx + 0x117fe44c] */
  AL = (r8((uint32_t)(ECX + 0x117fe44c)));
  /* 117fd9bc jmp dword ptr [eax*4 + 0x117fe434] */
  switch (EAX) {
    case 0: goto L_117fd9d8;
    case 1: goto L_117fd9e3;
    case 2: goto L_117fd9ce;
    case 3: goto L_117fd9c3;
    case 4: goto L_117fd9ee;
    case 5: goto L_117fd9f6;
    default: x86_unimpl("switch@0x117fd9bc out of table"); return;
  }
L_117fd9c3:;
  /* 117fd9c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd9c6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117fd9c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fd9cc jmp 0x117fd9f6 */
  goto L_117fd9f6;
L_117fd9ce:;
  /* 117fd9ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd9d1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 117fd9d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fd9d6 jmp 0x117fd9f6 */
  goto L_117fd9f6;
L_117fd9d8:;
  /* 117fd9d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd9db or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 117fd9de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fd9e1 jmp 0x117fd9f6 */
  goto L_117fd9f6;
L_117fd9e3:;
  /* 117fd9e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd9e6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 117fd9e9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fd9ec jmp 0x117fd9f6 */
  goto L_117fd9f6;
L_117fd9ee:;
  /* 117fd9ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fd9f1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 117fd9f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fd9f6:;
  /* 117fd9f6 jmp 0x117fe402 */
  goto L_117fe402;
L_117fd9fb:;
  /* 117fd9fb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fd9ff cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fda02 jne 0x117fda37 */
  if (!C.zf) goto L_117fda37;
  /* 117fda04 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117fda07 push edx */
  push32((uint32_t)(EDX));
  /* 117fda08 call 0x117fe630 */
  push32(0x117fda0du); f_117fe630();
  /* 117fda0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fda10 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 117fda16 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fda1d jge 0x117fda35 */
  if ((C.sf==C.of)) goto L_117fda35;
  /* 117fda1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fda22 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 117fda24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fda27 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 117fda2d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fda2f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_117fda35:;
  /* 117fda35 jmp 0x117fda4e */
  goto L_117fda4e;
L_117fda37:;
  /* 117fda37 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 117fda3d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fda40 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fda44 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 117fda48 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_117fda4e:;
  /* 117fda4e jmp 0x117fe402 */
  goto L_117fe402;
L_117fda53:;
  /* 117fda53 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 117fda5d jmp 0x117fe402 */
  goto L_117fe402;
L_117fda62:;
  /* 117fda62 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fda66 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fda69 jne 0x117fda92 */
  if (!C.zf) goto L_117fda92;
  /* 117fda6b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117fda6e push eax */
  push32((uint32_t)(EAX));
  /* 117fda6f call 0x117fe630 */
  push32(0x117fda74u); f_117fe630();
  /* 117fda74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fda77 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 117fda7d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fda84 jge 0x117fda90 */
  if ((C.sf==C.of)) goto L_117fda90;
  /* 117fda86 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_117fda90:;
  /* 117fda90 jmp 0x117fdaa9 */
  goto L_117fdaa9;
L_117fda92:;
  /* 117fda92 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 117fda98 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fda9b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fda9f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 117fdaa3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_117fdaa9:;
  /* 117fdaa9 jmp 0x117fe402 */
  goto L_117fe402;
L_117fdaae:;
  /* 117fdaae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fdab2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 117fdab8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 117fdabe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fdac1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 117fdac7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdace ja 0x117fdb3c */
  if ((!C.cf&&!C.zf)) goto L_117fdb3c;
  /* 117fdad0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 117fdad6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fdad8 mov al, byte ptr [ecx + 0x117fe471] */
  AL = (r8((uint32_t)(ECX + 0x117fe471)));
  /* 117fdade jmp dword ptr [eax*4 + 0x117fe45d] */
  switch (EAX) {
    case 0: goto L_117fdaf0;
    case 1: goto L_117fdb29;
    case 2: goto L_117fdae5;
    case 3: goto L_117fdb33;
    case 4: goto L_117fdb3c;
    default: x86_unimpl("switch@0x117fdade out of table"); return;
  }
L_117fdae5:;
  /* 117fdae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdae8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 117fdaeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fdaee jmp 0x117fdb3c */
  goto L_117fdb3c;
L_117fdaf0:;
  /* 117fdaf0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fdaf3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 117fdaf6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdaf9 jne 0x117fdb1b */
  if (!C.zf) goto L_117fdb1b;
  /* 117fdafb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fdafe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117fdb02 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdb05 jne 0x117fdb1b */
  if (!C.zf) goto L_117fdb1b;
  /* 117fdb07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fdb0a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdb0d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117fdb10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb13 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117fdb16 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fdb19 jmp 0x117fdb27 */
  goto L_117fdb27;
L_117fdb1b:;
  /* 117fdb1b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 117fdb22 jmp 0x117fd8b0 */
  goto L_117fd8b0;
L_117fdb27:;
  /* 117fdb27 jmp 0x117fdb3c */
  goto L_117fdb3c;
L_117fdb29:;
  /* 117fdb29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb2c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 117fdb2e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fdb31 jmp 0x117fdb3c */
  goto L_117fdb3c;
L_117fdb33:;
  /* 117fdb33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb36 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117fdb39 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117fdb3c:;
  /* 117fdb3c jmp 0x117fe402 */
  goto L_117fe402;
L_117fdb41:;
  /* 117fdb41 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fdb45 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 117fdb4b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 117fdb51 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fdb54 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 117fdb5a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdb61 ja 0x117fe227 */
  if ((!C.cf&&!C.zf)) goto L_117fe227;
  /* 117fdb67 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 117fdb6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fdb6f mov cl, byte ptr [edx + 0x117fe4dc] */
  CL = (r8((uint32_t)(EDX + 0x117fe4dc)));
  /* 117fdb75 jmp dword ptr [ecx*4 + 0x117fe4a0] */
  switch (ECX) {
    case 0: goto L_117fdb7c;
    case 1: goto L_117fde10;
    case 2: goto L_117fdca0;
    case 3: goto L_117fdf49;
    case 4: goto L_117fdc0b;
    case 5: goto L_117fdb91;
    case 6: goto L_117fdf1b;
    case 7: goto L_117fde20;
    case 8: goto L_117fddc5;
    case 9: goto L_117fdf95;
    case 10: goto L_117fdf3f;
    case 11: goto L_117fdcb6;
    case 12: goto L_117fdf33;
    case 13: goto L_117fdf55;
    case 14: goto L_117fe227;
    default: x86_unimpl("switch@0x117fdb75 out of table"); return;
  }
L_117fdb7c:;
  /* 117fdb7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb7f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdb84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdb86 jne 0x117fdb91 */
  if (!C.zf) goto L_117fdb91;
  /* 117fdb88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb8b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117fdb8e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117fdb91:;
  /* 117fdb91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdb94 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 117fdb9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fdb9c je 0x117fdbd7 */
  if (C.zf) goto L_117fdbd7;
  /* 117fdb9e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117fdba1 push eax */
  push32((uint32_t)(EAX));
  /* 117fdba2 call 0x117fe670 */
  push32(0x117fdba7u); f_117fe670();
  /* 117fdba7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdbaa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 117fdbae mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 117fdbb2 push ecx */
  push32((uint32_t)(ECX));
  /* 117fdbb3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 117fdbb9 push edx */
  push32((uint32_t)(EDX));
  /* 117fdbba call 0x117ff750 */
  push32(0x117fdbbfu); f_117ff750();
  /* 117fdbbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdbc2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117fdbc5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdbc9 jge 0x117fdbd5 */
  if ((C.sf==C.of)) goto L_117fdbd5;
  /* 117fdbcb mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_117fdbd5:;
  /* 117fdbd5 jmp 0x117fdbfd */
  goto L_117fdbfd;
L_117fdbd7:;
  /* 117fdbd7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117fdbda push eax */
  push32((uint32_t)(EAX));
  /* 117fdbdb call 0x117fe630 */
  push32(0x117fdbe0u); f_117fe630();
  /* 117fdbe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdbe3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 117fdbea mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 117fdbf0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 117fdbf6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_117fdbfd:;
  /* 117fdbfd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 117fdc03 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117fdc06 jmp 0x117fe227 */
  goto L_117fe227;
L_117fdc0b:;
  /* 117fdc0b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 117fdc0e push eax */
  push32((uint32_t)(EAX));
  /* 117fdc0f call 0x117fe630 */
  push32(0x117fdc14u); f_117fe630();
  /* 117fdc14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdc17 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 117fdc1d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdc24 je 0x117fdc32 */
  if (C.zf) goto L_117fdc32;
  /* 117fdc26 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117fdc2c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdc30 jne 0x117fdc4c */
  if (!C.zf) goto L_117fdc4c;
L_117fdc32:;
  /* 117fdc32 mov edx, dword ptr [0x11820fb0] */
  EDX = (r32((uint32_t)(0x11820fb0)));
  /* 117fdc38 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117fdc3b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdc3e push eax */
  push32((uint32_t)(EAX));
  /* 117fdc3f call 0x117f9690 */
  push32(0x117fdc44u); f_117f9690();
  /* 117fdc44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdc47 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117fdc4a jmp 0x117fdc9b */
  goto L_117fdc9b;
L_117fdc4c:;
  /* 117fdc4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdc4f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 117fdc55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fdc57 je 0x117fdc7c */
  if (C.zf) goto L_117fdc7c;
  /* 117fdc59 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117fdc5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117fdc62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fdc65 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117fdc6b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 117fdc6e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117fdc70 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117fdc73 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 117fdc7a jmp 0x117fdc9b */
  goto L_117fdc9b;
L_117fdc7c:;
  /* 117fdc7c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 117fdc83 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117fdc89 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fdc8c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117fdc8f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 117fdc95 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 117fdc98 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_117fdc9b:;
  /* 117fdc9b jmp 0x117fe227 */
  goto L_117fe227;
L_117fdca0:;
  /* 117fdca0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdca3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 117fdca9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fdcab jne 0x117fdcb6 */
  if (!C.zf) goto L_117fdcb6;
  /* 117fdcad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdcb0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117fdcb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fdcb6:;
  /* 117fdcb6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdcbd jne 0x117fdccb */
  if (!C.zf) goto L_117fdccb;
  /* 117fdcbf mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 117fdcc9 jmp 0x117fdcd7 */
  goto L_117fdcd7;
L_117fdccb:;
  /* 117fdccb mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 117fdcd1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_117fdcd7:;
  /* 117fdcd7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 117fdcdd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 117fdce3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117fdce6 push edx */
  push32((uint32_t)(EDX));
  /* 117fdce7 call 0x117fe630 */
  push32(0x117fdcecu); f_117fe630();
  /* 117fdcec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdcef mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fdcf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdcf5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdcfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdcfc je 0x117fdd66 */
  if (C.zf) goto L_117fdd66;
  /* 117fdcfe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdd02 jne 0x117fdd0d */
  if (!C.zf) goto L_117fdd0d;
  /* 117fdd04 mov ecx, dword ptr [0x11820fb4] */
  ECX = (r32((uint32_t)(0x11820fb4)));
  /* 117fdd0a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117fdd0d:;
  /* 117fdd0d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 117fdd14 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdd17 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_117fdd1d:;
  /* 117fdd1d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 117fdd23 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 117fdd29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fdd2c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 117fdd32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdd34 je 0x117fdd56 */
  if (C.zf) goto L_117fdd56;
  /* 117fdd36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 117fdd3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fdd3e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 117fdd41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdd43 je 0x117fdd56 */
  if (C.zf) goto L_117fdd56;
  /* 117fdd45 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 117fdd4b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdd4e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 117fdd54 jmp 0x117fdd1d */
  goto L_117fdd1d;
L_117fdd56:;
  /* 117fdd56 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 117fdd5c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fdd5f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117fdd61 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117fdd64 jmp 0x117fddc0 */
  goto L_117fddc0;
L_117fdd66:;
  /* 117fdd66 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdd6a jne 0x117fdd74 */
  if (!C.zf) goto L_117fdd74;
  /* 117fdd6c mov eax, dword ptr [0x11820fb0] */
  EAX = (r32((uint32_t)(0x11820fb0)));
  /* 117fdd71 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_117fdd74:;
  /* 117fdd74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdd77 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_117fdd7d:;
  /* 117fdd7d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 117fdd83 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 117fdd89 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fdd8c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 117fdd92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fdd94 je 0x117fddb4 */
  if (C.zf) goto L_117fddb4;
  /* 117fdd96 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 117fdd9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117fdd9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fdda1 je 0x117fddb4 */
  if (C.zf) goto L_117fddb4;
  /* 117fdda3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 117fdda9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fddac mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 117fddb2 jmp 0x117fdd7d */
  goto L_117fdd7d;
L_117fddb4:;
  /* 117fddb4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 117fddba sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fddbd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_117fddc0:;
  /* 117fddc0 jmp 0x117fe227 */
  goto L_117fe227;
L_117fddc5:;
  /* 117fddc5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117fddc8 push edx */
  push32((uint32_t)(EDX));
  /* 117fddc9 call 0x117fe630 */
  push32(0x117fddceu); f_117fe630();
  /* 117fddce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fddd1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 117fddd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fddda and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdddf je 0x117fddf3 */
  if (C.zf) goto L_117fddf3;
  /* 117fdde1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 117fdde7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 117fddee mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 117fddf1 jmp 0x117fde01 */
  goto L_117fde01;
L_117fddf3:;
  /* 117fddf3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 117fddf9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 117fddff mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_117fde01:;
  /* 117fde01 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 117fde0b jmp 0x117fe227 */
  goto L_117fe227;
L_117fde10:;
  /* 117fde10 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 117fde17 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 117fde1a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fde1d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_117fde20:;
  /* 117fde20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fde23 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 117fde25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fde28 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 117fde2e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 117fde31 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fde38 jge 0x117fde46 */
  if ((C.sf==C.of)) goto L_117fde46;
  /* 117fde3a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 117fde44 jmp 0x117fde62 */
  goto L_117fde62;
L_117fde46:;
  /* 117fde46 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fde4d jne 0x117fde62 */
  if (!C.zf) goto L_117fde62;
  /* 117fde4f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fde53 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fde56 jne 0x117fde62 */
  if (!C.zf) goto L_117fde62;
  /* 117fde58 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_117fde62:;
  /* 117fde62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fde65 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fde68 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 117fde6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fde6e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fde71 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fde73 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fde76 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 117fde7c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 117fde82 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fde85 push ecx */
  push32((uint32_t)(ECX));
  /* 117fde86 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 117fde8c push edx */
  push32((uint32_t)(EDX));
  /* 117fde8d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fde91 push eax */
  push32((uint32_t)(EAX));
  /* 117fde92 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fde95 push ecx */
  push32((uint32_t)(ECX));
  /* 117fde96 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 117fde9c push edx */
  push32((uint32_t)(EDX));
  /* 117fde9d call dword ptr [0x118213a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118213a0))), 0x117fdea3u);
  /* 117fdea3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdea6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdea9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdeae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdeb0 je 0x117fdec8 */
  if (C.zf) goto L_117fdec8;
  /* 117fdeb2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdeb9 jne 0x117fdec8 */
  if (!C.zf) goto L_117fdec8;
  /* 117fdebb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdebe push ecx */
  push32((uint32_t)(ECX));
  /* 117fdebf call dword ptr [0x118213ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118213ac))), 0x117fdec5u);
  /* 117fdec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fdec8:;
  /* 117fdec8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 117fdecc cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdecf jne 0x117fdeea */
  if (!C.zf) goto L_117fdeea;
  /* 117fded1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fded4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117fded9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdedb jne 0x117fdeea */
  if (!C.zf) goto L_117fdeea;
  /* 117fdedd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdee0 push ecx */
  push32((uint32_t)(ECX));
  /* 117fdee1 call dword ptr [0x118213a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118213a4))), 0x117fdee7u);
  /* 117fdee7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fdeea:;
  /* 117fdeea mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdeed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117fdef0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fdef3 jne 0x117fdf07 */
  if (!C.zf) goto L_117fdf07;
  /* 117fdef5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdef8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 117fdefb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fdefe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdf01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdf04 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_117fdf07:;
  /* 117fdf07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fdf0a push eax */
  push32((uint32_t)(EAX));
  /* 117fdf0b call 0x117f9690 */
  push32(0x117fdf10u); f_117f9690();
  /* 117fdf10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdf13 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 117fdf16 jmp 0x117fe227 */
  goto L_117fe227;
L_117fdf1b:;
  /* 117fdf1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdf1e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 117fdf21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fdf24 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 117fdf2e jmp 0x117fdfb5 */
  goto L_117fdfb5;
L_117fdf33:;
  /* 117fdf33 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 117fdf3d jmp 0x117fdfb5 */
  goto L_117fdfb5;
L_117fdf3f:;
  /* 117fdf3f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_117fdf49:;
  /* 117fdf49 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 117fdf53 jmp 0x117fdf5f */
  goto L_117fdf5f;
L_117fdf55:;
  /* 117fdf55 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_117fdf5f:;
  /* 117fdf5f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 117fdf69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdf6c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 117fdf72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fdf74 je 0x117fdf93 */
  if (C.zf) goto L_117fdf93;
  /* 117fdf76 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 117fdf7d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 117fdf83 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdf86 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 117fdf8c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_117fdf93:;
  /* 117fdf93 jmp 0x117fdfb5 */
  goto L_117fdfb5;
L_117fdf95:;
  /* 117fdf95 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 117fdf9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdfa2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 117fdfa8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fdfaa je 0x117fdfb5 */
  if (C.zf) goto L_117fdfb5;
  /* 117fdfac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdfaf or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117fdfb2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fdfb5:;
  /* 117fdfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdfb8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdfbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdfbf je 0x117fdfde */
  if (C.zf) goto L_117fdfde;
  /* 117fdfc1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117fdfc4 push ecx */
  push32((uint32_t)(ECX));
  /* 117fdfc5 call 0x117fe650 */
  push32(0x117fdfcau); f_117fe650();
  /* 117fdfca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdfcd mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117fdfd3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117fdfd9 jmp 0x117fe06f */
  goto L_117fe06f;
L_117fdfde:;
  /* 117fdfde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdfe1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 117fdfe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fdfe6 je 0x117fe030 */
  if (C.zf) goto L_117fe030;
  /* 117fdfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fdfeb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117fdfee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fdff0 je 0x117fe010 */
  if (C.zf) goto L_117fe010;
  /* 117fdff2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117fdff5 push ecx */
  push32((uint32_t)(ECX));
  /* 117fdff6 call 0x117fe630 */
  push32(0x117fdffbu); f_117fe630();
  /* 117fdffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fdffe movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 117fe001 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117fe002 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117fe008 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117fe00e jmp 0x117fe02e */
  goto L_117fe02e;
L_117fe010:;
  /* 117fe010 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117fe013 push edx */
  push32((uint32_t)(EDX));
  /* 117fe014 call 0x117fe630 */
  push32(0x117fe019u); f_117fe630();
  /* 117fe019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe01c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117fe021 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117fe022 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117fe028 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_117fe02e:;
  /* 117fe02e jmp 0x117fe06f */
  goto L_117fe06f;
L_117fe030:;
  /* 117fe030 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe033 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe038 je 0x117fe055 */
  if (C.zf) goto L_117fe055;
  /* 117fe03a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 117fe03d push ecx */
  push32((uint32_t)(ECX));
  /* 117fe03e call 0x117fe630 */
  push32(0x117fe043u); f_117fe630();
  /* 117fe043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe046 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117fe047 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117fe04d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 117fe053 jmp 0x117fe06f */
  goto L_117fe06f;
L_117fe055:;
  /* 117fe055 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 117fe058 push edx */
  push32((uint32_t)(EDX));
  /* 117fe059 call 0x117fe630 */
  push32(0x117fe05eu); f_117fe630();
  /* 117fe05e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe061 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117fe063 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 117fe069 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_117fe06f:;
  /* 117fe06f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe072 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe075 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe077 je 0x117fe0b7 */
  if (C.zf) goto L_117fe0b7;
  /* 117fe079 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe080 jg 0x117fe0b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe0b7;
  /* 117fe082 jl 0x117fe08d */
  if ((C.sf!=C.of)) goto L_117fe08d;
  /* 117fe084 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe08b jae 0x117fe0b7 */
  if (!C.cf) goto L_117fe0b7;
L_117fe08d:;
  /* 117fe08d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 117fe093 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fe095 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 117fe09b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe09e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fe0a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117fe0a6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 117fe0ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe0af or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 117fe0b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fe0b5 jmp 0x117fe0cf */
  goto L_117fe0cf;
L_117fe0b7:;
  /* 117fe0b7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 117fe0bd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117fe0c3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 117fe0c9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_117fe0cf:;
  /* 117fe0cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe0d2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe0d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe0da jne 0x117fe0f7 */
  if (!C.zf) goto L_117fe0f7;
  /* 117fe0dc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117fe0e2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 117fe0e8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 117fe0eb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117fe0f1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_117fe0f7:;
  /* 117fe0f7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe0fe jge 0x117fe10c */
  if ((C.sf==C.of)) goto L_117fe10c;
  /* 117fe100 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 117fe10a jmp 0x117fe115 */
  goto L_117fe115;
L_117fe10c:;
  /* 117fe10c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe10f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe112 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fe115:;
  /* 117fe115 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117fe11b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 117fe121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe123 jne 0x117fe12c */
  if (!C.zf) goto L_117fe12c;
  /* 117fe125 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_117fe12c:;
  /* 117fe12c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 117fe12f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_117fe132:;
  /* 117fe132 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 117fe138 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 117fe13e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe141 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 117fe147 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe149 jg 0x117fe15f */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe15f;
  /* 117fe14b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117fe151 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 117fe157 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fe159 je 0x117fe1e0 */
  if (C.zf) goto L_117fe1e0;
L_117fe15f:;
  /* 117fe15f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 117fe165 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117fe166 push edx */
  push32((uint32_t)(EDX));
  /* 117fe167 push eax */
  push32((uint32_t)(EAX));
  /* 117fe168 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 117fe16e push edx */
  push32((uint32_t)(EDX));
  /* 117fe16f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117fe175 push eax */
  push32((uint32_t)(EAX));
  /* 117fe176 call 0x117fd4f0 */
  push32(0x117fe17bu); f_117fd4f0();
  /* 117fe17b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe17e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 117fe184 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 117fe18a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117fe18b push edx */
  push32((uint32_t)(EDX));
  /* 117fe18c push eax */
  push32((uint32_t)(EAX));
  /* 117fe18d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 117fe193 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe194 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 117fe19a push edx */
  push32((uint32_t)(EDX));
  /* 117fe19b call 0x117fd480 */
  push32(0x117fe1a0u); f_117fd480();
  /* 117fe1a0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 117fe1a6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 117fe1ac cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe1b3 jle 0x117fe1c7 */
  if ((C.zf||C.sf!=C.of)) goto L_117fe1c7;
  /* 117fe1b5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 117fe1bb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe1c1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_117fe1c7:;
  /* 117fe1c7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe1ca mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 117fe1d0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 117fe1d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe1d5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe1d8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fe1db jmp 0x117fe132 */
  goto L_117fe132;
L_117fe1e0:;
  /* 117fe1e0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 117fe1e3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe1e6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117fe1e9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe1ec add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe1ef mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117fe1f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe1f5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe1fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe1fc je 0x117fe227 */
  if (C.zf) goto L_117fe227;
  /* 117fe1fe mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe201 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117fe204 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe207 jne 0x117fe20f */
  if (!C.zf) goto L_117fe20f;
  /* 117fe209 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe20d jne 0x117fe227 */
  if (!C.zf) goto L_117fe227;
L_117fe20f:;
  /* 117fe20f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe212 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe215 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117fe218 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe21b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 117fe21e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fe221 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe224 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_117fe227:;
  /* 117fe227 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe22e jne 0x117fe402 */
  if (!C.zf) goto L_117fe402;
  /* 117fe234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe237 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe23a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe23c je 0x117fe28d */
  if (C.zf) goto L_117fe28d;
  /* 117fe23e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe241 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 117fe247 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fe249 je 0x117fe25b */
  if (C.zf) goto L_117fe25b;
  /* 117fe24b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 117fe252 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117fe259 jmp 0x117fe28d */
  goto L_117fe28d;
L_117fe25b:;
  /* 117fe25b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe25e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe261 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe263 je 0x117fe275 */
  if (C.zf) goto L_117fe275;
  /* 117fe265 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 117fe26c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 117fe273 jmp 0x117fe28d */
  goto L_117fe28d;
L_117fe275:;
  /* 117fe275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe278 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe27b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe27d je 0x117fe28d */
  if (C.zf) goto L_117fe28d;
  /* 117fe27f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 117fe286 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_117fe28d:;
  /* 117fe28d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 117fe293 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe296 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe299 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 117fe29f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe2a2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 117fe2a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe2a7 jne 0x117fe2c5 */
  if (!C.zf) goto L_117fe2c5;
  /* 117fe2a9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117fe2af push eax */
  push32((uint32_t)(EAX));
  /* 117fe2b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe2b4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117fe2ba push edx */
  push32((uint32_t)(EDX));
  /* 117fe2bb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117fe2bd call 0x117fe5a0 */
  push32(0x117fe2c2u); f_117fe5a0();
  /* 117fe2c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fe2c5:;
  /* 117fe2c5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117fe2cb push eax */
  push32((uint32_t)(EAX));
  /* 117fe2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe2cf push ecx */
  push32((uint32_t)(ECX));
  /* 117fe2d0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fe2d3 push edx */
  push32((uint32_t)(EDX));
  /* 117fe2d4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 117fe2da push eax */
  push32((uint32_t)(EAX));
  /* 117fe2db call 0x117fe5e0 */
  push32(0x117fe2e0u); f_117fe5e0();
  /* 117fe2e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe2e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe2e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117fe2e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fe2eb je 0x117fe313 */
  if (C.zf) goto L_117fe313;
  /* 117fe2ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe2f0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe2f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe2f5 jne 0x117fe313 */
  if (!C.zf) goto L_117fe313;
  /* 117fe2f7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117fe2fd push eax */
  push32((uint32_t)(EAX));
  /* 117fe2fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe301 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe302 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117fe308 push edx */
  push32((uint32_t)(EDX));
  /* 117fe309 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 117fe30b call 0x117fe5a0 */
  push32(0x117fe310u); f_117fe5a0();
  /* 117fe310 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fe313:;
  /* 117fe313 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe317 je 0x117fe3c1 */
  if (C.zf) goto L_117fe3c1;
  /* 117fe31d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe321 jle 0x117fe3c1 */
  if ((C.zf||C.sf!=C.of)) goto L_117fe3c1;
  /* 117fe327 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe32a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 117fe330 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fe333 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_117fe339:;
  /* 117fe339 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 117fe33f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 117fe345 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe348 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 117fe34e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe350 je 0x117fe3bf */
  if (C.zf) goto L_117fe3bf;
  /* 117fe352 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 117fe358 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117fe35b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 117fe362 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 117fe369 push eax */
  push32((uint32_t)(EAX));
  /* 117fe36a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 117fe370 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe371 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 117fe377 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe37a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 117fe380 call 0x117ff750 */
  push32(0x117fe385u); f_117ff750();
  /* 117fe385 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe388 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 117fe38e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe395 jg 0x117fe399 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe399;
  /* 117fe397 jmp 0x117fe3bf */
  goto L_117fe3bf;
L_117fe399:;
  /* 117fe399 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117fe39f push eax */
  push32((uint32_t)(EAX));
  /* 117fe3a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe3a4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 117fe3aa push edx */
  push32((uint32_t)(EDX));
  /* 117fe3ab lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 117fe3b1 push eax */
  push32((uint32_t)(EAX));
  /* 117fe3b2 call 0x117fe5e0 */
  push32(0x117fe3b7u); f_117fe5e0();
  /* 117fe3b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe3ba jmp 0x117fe339 */
  goto L_117fe339;
L_117fe3bf:;
  /* 117fe3bf jmp 0x117fe3dc */
  goto L_117fe3dc;
L_117fe3c1:;
  /* 117fe3c1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 117fe3c7 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe3c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe3cb push edx */
  push32((uint32_t)(EDX));
  /* 117fe3cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fe3cf push eax */
  push32((uint32_t)(EAX));
  /* 117fe3d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fe3d3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe3d4 call 0x117fe5e0 */
  push32(0x117fe3d9u); f_117fe5e0();
  /* 117fe3d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fe3dc:;
  /* 117fe3dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe3df and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe3e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fe3e4 je 0x117fe402 */
  if (C.zf) goto L_117fe402;
  /* 117fe3e6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 117fe3ec push eax */
  push32((uint32_t)(EAX));
  /* 117fe3ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe3f1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 117fe3f7 push edx */
  push32((uint32_t)(EDX));
  /* 117fe3f8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 117fe3fa call 0x117fe5a0 */
  push32(0x117fe3ffu); f_117fe5a0();
  /* 117fe3ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fe402:;
  /* 117fe402 jmp 0x117fd814 */
  goto L_117fd814;
L_117fe407:;
  /* 117fe407 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 117fe40d pop edi */
  EDI = (pop32());
  /* 117fe40e pop esi */
  ESI = (pop32());
  /* 117fe40f pop ebx */
  EBX = (pop32());
  /* 117fe410 mov esp, ebp */
  ESP = (EBP);
  /* 117fe412 pop ebp */
  EBP = (pop32());
  /* 117fe413 ret  */
  ESPCHK(0x117fd7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e520 @ 0x117fe520 (119 bytes, 44 insns) */
void f_117fe520(void) {
  FTRACE(0x117fe520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe520 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe521 mov ebp, esp */
  EBP = (ESP);
  /* 117fe523 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe524 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe527 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117fe52a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe52d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe530 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 117fe533 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe536 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe53a jl 0x117fe562 */
  if ((C.sf!=C.of)) goto L_117fe562;
  /* 117fe53c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe53f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117fe541 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 117fe544 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 117fe546 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 117fe54a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117fe550 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117fe553 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe556 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fe558 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe55b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe55e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117fe560 jmp 0x117fe575 */
  goto L_117fe575;
L_117fe562:;
  /* 117fe562 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe565 push edx */
  push32((uint32_t)(EDX));
  /* 117fe566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe569 push eax */
  push32((uint32_t)(EAX));
  /* 117fe56a call 0x117fd570 */
  push32(0x117fe56fu); f_117fd570();
  /* 117fe56f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe572 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117fe575:;
  /* 117fe575 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe579 jne 0x117fe586 */
  if (!C.zf) goto L_117fe586;
  /* 117fe57b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe57e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117fe584 jmp 0x117fe593 */
  goto L_117fe593;
L_117fe586:;
  /* 117fe586 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe589 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117fe58b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe58e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe591 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_117fe593:;
  /* 117fe593 mov esp, ebp */
  ESP = (EBP);
  /* 117fe595 pop ebp */
  EBP = (pop32());
  /* 117fe596 ret  */
  ESPCHK(0x117fe520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x117fe5a0 (53 bytes, 23 insns) */
void f_117fe5a0(void) {
  FTRACE(0x117fe5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe5a1 mov ebp, esp */
  EBP = (ESP);
L_117fe5a3:;
  /* 117fe5a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe5a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe5a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe5ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117fe5af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe5b1 jle 0x117fe5d3 */
  if ((C.zf||C.sf!=C.of)) goto L_117fe5d3;
  /* 117fe5b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fe5b6 push edx */
  push32((uint32_t)(EDX));
  /* 117fe5b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe5ba push eax */
  push32((uint32_t)(EAX));
  /* 117fe5bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe5be push ecx */
  push32((uint32_t)(ECX));
  /* 117fe5bf call 0x117fe520 */
  push32(0x117fe5c4u); f_117fe520();
  /* 117fe5c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe5c7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fe5ca cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe5cd jne 0x117fe5d1 */
  if (!C.zf) goto L_117fe5d1;
  /* 117fe5cf jmp 0x117fe5d3 */
  goto L_117fe5d3;
L_117fe5d1:;
  /* 117fe5d1 jmp 0x117fe5a3 */
  goto L_117fe5a3;
L_117fe5d3:;
  /* 117fe5d3 pop ebp */
  EBP = (pop32());
  /* 117fe5d4 ret  */
  ESPCHK(0x117fe5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5e0 @ 0x117fe5e0 (74 bytes, 31 insns) */
void f_117fe5e0(void) {
  FTRACE(0x117fe5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe5e1 mov ebp, esp */
  EBP = (ESP);
  /* 117fe5e3 push ecx */
  push32((uint32_t)(ECX));
L_117fe5e4:;
  /* 117fe5e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe5e7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe5ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe5ed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 117fe5f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fe5f2 jle 0x117fe626 */
  if ((C.zf||C.sf!=C.of)) goto L_117fe626;
  /* 117fe5f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fe5f7 push edx */
  push32((uint32_t)(EDX));
  /* 117fe5f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe5fb push eax */
  push32((uint32_t)(EAX));
  /* 117fe5fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe5ff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117fe602 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fe605 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe608 push eax */
  push32((uint32_t)(EAX));
  /* 117fe609 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe60c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe60f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 117fe612 call 0x117fe520 */
  push32(0x117fe617u); f_117fe520();
  /* 117fe617 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe61a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fe61d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe620 jne 0x117fe624 */
  if (!C.zf) goto L_117fe624;
  /* 117fe622 jmp 0x117fe626 */
  goto L_117fe626;
L_117fe624:;
  /* 117fe624 jmp 0x117fe5e4 */
  goto L_117fe5e4;
L_117fe626:;
  /* 117fe626 mov esp, ebp */
  ESP = (EBP);
  /* 117fe628 pop ebp */
  EBP = (pop32());
  /* 117fe629 ret  */
  ESPCHK(0x117fe5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e630 @ 0x117fe630 (26 bytes, 12 insns) */
void f_117fe630(void) {
  FTRACE(0x117fe630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe630 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe631 mov ebp, esp */
  EBP = (ESP);
  /* 117fe633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe636 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe638 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe63b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe63e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117fe640 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe643 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe645 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117fe648 pop ebp */
  EBP = (pop32());
  /* 117fe649 ret  */
  ESPCHK(0x117fe630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e650 @ 0x117fe650 (31 bytes, 14 insns) */
void f_117fe650(void) {
  FTRACE(0x117fe650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe650 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe651 mov ebp, esp */
  EBP = (ESP);
  /* 117fe653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe656 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe658 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe65e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117fe660 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe663 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe665 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe668 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117fe66a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117fe66d pop ebp */
  EBP = (pop32());
  /* 117fe66e ret  */
  ESPCHK(0x117fe650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e670 @ 0x117fe670 (27 bytes, 12 insns) */
void f_117fe670(void) {
  FTRACE(0x117fe670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe670 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe671 mov ebp, esp */
  EBP = (ESP);
  /* 117fe673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe676 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe678 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe67b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe67e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117fe680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe683 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117fe685 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 117fe689 pop ebp */
  EBP = (pop32());
  /* 117fe68a ret  */
  ESPCHK(0x117fe670u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x117fe690 (145 bytes, 42 insns) */
void f_117fe690(void) {
  FTRACE(0x117fe690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe690 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe691 mov ebp, esp */
  EBP = (ESP);
  /* 117fe693 push ecx */
  push32((uint32_t)(ECX));
  /* 117fe694 call 0x117fe740 */
  push32(0x117fe699u); f_117fe740();
  /* 117fe699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe69c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117fe69e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fe6a5 jmp 0x117fe6b0 */
  goto L_117fe6b0;
L_117fe6a7:;
  /* 117fe6a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe6aa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe6ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117fe6b0:;
  /* 117fe6b0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe6b4 jae 0x117fe6da */
  if (!C.cf) goto L_117fe6da;
  /* 117fe6b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe6b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe6bc cmp ecx, dword ptr [eax*8 + 0x11820fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11820fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe6c3 jne 0x117fe6d8 */
  if (!C.zf) goto L_117fe6d8;
  /* 117fe6c5 call 0x117fe730 */
  push32(0x117fe6cau); f_117fe730();
  /* 117fe6ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fe6cd mov ecx, dword ptr [edx*8 + 0x11820fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11820fbc)));
  /* 117fe6d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117fe6d6 jmp 0x117fe71d */
  goto L_117fe71d;
L_117fe6d8:;
  /* 117fe6d8 jmp 0x117fe6a7 */
  goto L_117fe6a7;
L_117fe6da:;
  /* 117fe6da cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe6de jb 0x117fe6f3 */
  if (C.cf) goto L_117fe6f3;
  /* 117fe6e0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe6e4 ja 0x117fe6f3 */
  if ((!C.cf&&!C.zf)) goto L_117fe6f3;
  /* 117fe6e6 call 0x117fe730 */
  push32(0x117fe6ebu); f_117fe730();
  /* 117fe6eb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 117fe6f1 jmp 0x117fe71d */
  goto L_117fe71d;
L_117fe6f3:;
  /* 117fe6f3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe6fa jb 0x117fe712 */
  if (C.cf) goto L_117fe712;
  /* 117fe6fc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe703 ja 0x117fe712 */
  if ((!C.cf&&!C.zf)) goto L_117fe712;
  /* 117fe705 call 0x117fe730 */
  push32(0x117fe70au); f_117fe730();
  /* 117fe70a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 117fe710 jmp 0x117fe71d */
  goto L_117fe71d;
L_117fe712:;
  /* 117fe712 call 0x117fe730 */
  push32(0x117fe717u); f_117fe730();
  /* 117fe717 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_117fe71d:;
  /* 117fe71d mov esp, ebp */
  ESP = (EBP);
  /* 117fe71f pop ebp */
  EBP = (pop32());
  /* 117fe720 ret  */
  ESPCHK(0x117fe690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e730 @ 0x117fe730 (13 bytes, 6 insns) */
void f_117fe730(void) {
  FTRACE(0x117fe730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe730 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe731 mov ebp, esp */
  EBP = (ESP);
  /* 117fe733 call 0x117f62a0 */
  push32(0x117fe738u); f_117f62a0();
  /* 117fe738 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe73b pop ebp */
  EBP = (pop32());
  /* 117fe73c ret  */
  ESPCHK(0x117fe730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e740 @ 0x117fe740 (13 bytes, 6 insns) */
void f_117fe740(void) {
  FTRACE(0x117fe740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe740 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe741 mov ebp, esp */
  EBP = (ESP);
  /* 117fe743 call 0x117f62a0 */
  push32(0x117fe748u); f_117f62a0();
  /* 117fe748 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe74b pop ebp */
  EBP = (pop32());
  /* 117fe74c ret  */
  ESPCHK(0x117fe740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e750 @ 0x117fe750 (664 bytes, 263 insns) [15 switch table(s)] */
void f_117fe750(void) {
  FTRACE(0x117fe750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fe750 push ebp */
  push32((uint32_t)(EBP));
  /* 117fe751 mov ebp, esp */
  EBP = (ESP);
  /* 117fe753 push edi */
  push32((uint32_t)(EDI));
  /* 117fe754 push esi */
  push32((uint32_t)(ESI));
  /* 117fe755 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 117fe758 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fe75b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe75e mov eax, ecx */
  EAX = (ECX);
  /* 117fe760 mov edx, ecx */
  EDX = (ECX);
  /* 117fe762 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe764 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe766 jbe 0x117fe770 */
  if ((C.cf||C.zf)) goto L_117fe770;
  /* 117fe768 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe76a jb 0x117fe8e8 */
  if (C.cf) goto L_117fe8e8;
L_117fe770:;
  /* 117fe770 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fe776 jne 0x117fe78c */
  if (!C.zf) goto L_117fe78c;
  /* 117fe778 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe77b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe77e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe781 jb 0x117fe7ac */
  if (C.cf) goto L_117fe7ac;
  /* 117fe783 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe785 jmp dword ptr [edx*4 + 0x117fe898] */
  switch (EDX) {
    case 0: goto L_117fe8a8;
    case 1: goto L_117fe8b0;
    case 2: goto L_117fe8bc;
    case 3: goto L_117fe8d0;
    default: x86_unimpl("switch@0x117fe785 out of table"); return;
  }
L_117fe78c:;
  /* 117fe78c mov eax, edi */
  EAX = (EDI);
  /* 117fe78e mov edx, 3 */
  EDX = (0x3u);
  /* 117fe793 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe796 jb 0x117fe7a4 */
  if (C.cf) goto L_117fe7a4;
  /* 117fe798 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe79b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe79d jmp dword ptr [eax*4 + 0x117fe7b0] */
  switch (EAX) {
    case 1: goto L_117fe7c0;
    case 2: goto L_117fe7ec;
    case 3: goto L_117fe810;
    default: x86_unimpl("switch@0x117fe79d out of table"); return;
  }
L_117fe7a4:;
  /* 117fe7a4 jmp dword ptr [ecx*4 + 0x117fe8a8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x117fe8a8)))); return;
  /* 117fe7ab nop  */
  /* nop */
L_117fe7ac:;
  /* 117fe7ac jmp dword ptr [ecx*4 + 0x117fe82c] */
  switch (ECX) {
    case 0: goto L_117fe88f;
    case 1: goto L_117fe87c;
    case 2: goto L_117fe874;
    case 3: goto L_117fe86c;
    case 4: goto L_117fe864;
    case 5: goto L_117fe85c;
    case 6: goto L_117fe854;
    case 7: goto L_117fe84c;
    default: x86_unimpl("switch@0x117fe7ac out of table"); return;
  }
  /* 117fe7b3 nop  */
  /* nop */
L_117fe7c0:;
  /* 117fe7c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe7c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe7c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe7c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fe7c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fe7cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fe7cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe7d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fe7d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe7d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe7db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe7de jb 0x117fe7ac */
  if (C.cf) goto L_117fe7ac;
  /* 117fe7e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe7e2 jmp dword ptr [edx*4 + 0x117fe898] */
  switch (EDX) {
    case 0: goto L_117fe8a8;
    case 1: goto L_117fe8b0;
    case 2: goto L_117fe8bc;
    case 3: goto L_117fe8d0;
    default: x86_unimpl("switch@0x117fe7e2 out of table"); return;
  }
  /* 117fe7e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fe7ec:;
  /* 117fe7ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe7ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe7f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe7f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fe7f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe7f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fe7fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe7fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe801 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe804 jb 0x117fe7ac */
  if (C.cf) goto L_117fe7ac;
  /* 117fe806 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe808 jmp dword ptr [edx*4 + 0x117fe898] */
  switch (EDX) {
    case 0: goto L_117fe8a8;
    case 1: goto L_117fe8b0;
    case 2: goto L_117fe8bc;
    case 3: goto L_117fe8d0;
    default: x86_unimpl("switch@0x117fe808 out of table"); return;
  }
  /* 117fe80f nop  */
  /* nop */
L_117fe810:;
  /* 117fe810 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe812 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe814 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe816 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 117fe817 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe81a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117fe81b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe81e jb 0x117fe7ac */
  if (C.cf) goto L_117fe7ac;
  /* 117fe820 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe822 jmp dword ptr [edx*4 + 0x117fe898] */
  switch (EDX) {
    case 0: goto L_117fe8a8;
    case 1: goto L_117fe8b0;
    case 2: goto L_117fe8bc;
    case 3: goto L_117fe8d0;
    default: x86_unimpl("switch@0x117fe822 out of table"); return;
  }
  /* 117fe829 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fe84c:;
  /* 117fe84c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 117fe850 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_117fe854:;
  /* 117fe854 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 117fe858 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_117fe85c:;
  /* 117fe85c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 117fe860 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_117fe864:;
  /* 117fe864 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 117fe868 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_117fe86c:;
  /* 117fe86c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 117fe870 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_117fe874:;
  /* 117fe874 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 117fe878 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_117fe87c:;
  /* 117fe87c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 117fe880 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 117fe884 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117fe88b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fe88d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117fe88f:;
  /* 117fe88f jmp dword ptr [edx*4 + 0x117fe898] */
  switch (EDX) {
    case 0: goto L_117fe8a8;
    case 1: goto L_117fe8b0;
    case 2: goto L_117fe8bc;
    case 3: goto L_117fe8d0;
    default: x86_unimpl("switch@0x117fe88f out of table"); return;
  }
  /* 117fe896 mov edi, edi */
  EDI = (EDI);
L_117fe8a8:;
  /* 117fe8a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe8ab pop esi */
  ESI = (pop32());
  /* 117fe8ac pop edi */
  EDI = (pop32());
  /* 117fe8ad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fe8ae ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fe8af nop  */
  /* nop */
L_117fe8b0:;
  /* 117fe8b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe8b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe8b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe8b7 pop esi */
  ESI = (pop32());
  /* 117fe8b8 pop edi */
  EDI = (pop32());
  /* 117fe8b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fe8ba ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fe8bb nop  */
  /* nop */
L_117fe8bc:;
  /* 117fe8bc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe8be mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe8c0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fe8c3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fe8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe8c9 pop esi */
  ESI = (pop32());
  /* 117fe8ca pop edi */
  EDI = (pop32());
  /* 117fe8cb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fe8cc ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fe8cd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fe8d0:;
  /* 117fe8d0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 117fe8d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 117fe8d4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fe8d7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fe8da mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fe8dd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fe8e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fe8e3 pop esi */
  ESI = (pop32());
  /* 117fe8e4 pop edi */
  EDI = (pop32());
  /* 117fe8e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fe8e6 ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fe8e7 nop  */
  /* nop */
L_117fe8e8:;
  /* 117fe8e8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 117fe8ec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 117fe8f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 117fe8f6 jne 0x117fe91c */
  if (!C.zf) goto L_117fe91c;
  /* 117fe8f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe8fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 117fe8fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe901 jb 0x117fe910 */
  if (C.cf) goto L_117fe910;
  /* 117fe903 std  */
  C.df=1;
  /* 117fe904 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe906 cld  */
  C.df=0;
  /* 117fe907 jmp dword ptr [edx*4 + 0x117fea30] */
  switch (EDX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fe907 out of table"); return;
  }
  /* 117fe90e mov edi, edi */
  EDI = (EDI);
L_117fe910:;
  /* 117fe910 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fe912 jmp dword ptr [ecx*4 + 0x117fe9e0] */
  switch (ECX) {
    case 0: goto L_117fea27;
    default: x86_unimpl("switch@0x117fe912 out of table"); return;
  }
  /* 117fe919 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fe91c:;
  /* 117fe91c mov eax, edi */
  EAX = (EDI);
  /* 117fe91e mov edx, 3 */
  EDX = (0x3u);
  /* 117fe923 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe926 jb 0x117fe934 */
  if (C.cf) goto L_117fe934;
  /* 117fe928 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 117fe92b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe92d jmp dword ptr [eax*4 + 0x117fe938] */
  switch (EAX) {
    case 1: goto L_117fe948;
    case 2: goto L_117fe968;
    case 3: goto L_117fe990;
    default: x86_unimpl("switch@0x117fe92d out of table"); return;
  }
L_117fe934:;
  /* 117fe934 jmp dword ptr [ecx*4 + 0x117fea30] */
  switch (ECX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fe934 out of table"); return;
  }
  /* 117fe93b nop  */
  /* nop */
L_117fe948:;
  /* 117fe948 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fe94b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe94d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fe950 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 117fe951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe954 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 117fe955 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe958 jb 0x117fe910 */
  if (C.cf) goto L_117fe910;
  /* 117fe95a std  */
  C.df=1;
  /* 117fe95b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe95d cld  */
  C.df=0;
  /* 117fe95e jmp dword ptr [edx*4 + 0x117fea30] */
  switch (EDX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fe95e out of table"); return;
  }
  /* 117fe965 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fe968:;
  /* 117fe968 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fe96b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe96d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fe970 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fe973 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe976 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fe979 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe97c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe97f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe982 jb 0x117fe910 */
  if (C.cf) goto L_117fe910;
  /* 117fe984 std  */
  C.df=1;
  /* 117fe985 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe987 cld  */
  C.df=0;
  /* 117fe988 jmp dword ptr [edx*4 + 0x117fea30] */
  switch (EDX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fe988 out of table"); return;
  }
  /* 117fe98f nop  */
  /* nop */
L_117fe990:;
  /* 117fe990 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fe993 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 117fe995 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fe998 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fe99b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fe99e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fe9a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 117fe9a4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fe9a7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe9aa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fe9ad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fe9b0 jb 0x117fe910 */
  if (C.cf) goto L_117fe910;
  /* 117fe9b6 std  */
  C.df=1;
  /* 117fe9b7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 117fe9b9 cld  */
  C.df=0;
  /* 117fe9ba jmp dword ptr [edx*4 + 0x117fea30] */
  switch (EDX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fe9ba out of table"); return;
  }
  /* 117fe9c1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 117fe9c4 in al, 0xe9 */
  x86_unimpl("in @ 0x117fe9c4");
  /* 117fe9c6 jg 0x117fe9d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe9d9;
  /* 117fe9c8 in al, dx */
  x86_unimpl("in @ 0x117fe9c8");
  /* 117fe9c9 jmp 0xfb73fb4d */
  jmp_ind(0xfb73fb4du); return;
  /* 117fe9ce jg 0x117fe9e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe9e1;
  /* 117fe9d0 cld  */
  C.df=0;
  /* 117fe9d1 jmp 0xfb83fb55 */
  jmp_ind(0xfb83fb55u); return;
  /* 117fe9d6 jg 0x117fe9e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe9e9;
  /* 117fe9d8 or al, 0xea */
  { uint32_t _r=(AL)|(0xeau); AL = (_r); fl_logic(_r,8); }
  /* 117fe9da jg 0x117fe9ed */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe9ed;
  /* 117fe9dc adc al, 0xea */
  { uint32_t _a=(AL),_b=(0xeau),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 117fe9de jg 0x117fe9f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_117fe9f1;
  /* 117fe9e4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 117fe9e8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 117fe9ec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 117fe9f0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 117fe9f4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 117fe9f8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 117fe9fc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 117fea00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 117fea04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 117fea08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 117fea0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 117fea10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 117fea14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 117fea18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 117fea1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 117fea23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 117fea25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117fea27:;
  /* 117fea27 jmp dword ptr [edx*4 + 0x117fea30] */
  switch (EDX) {
    case 0: goto L_117fea40;
    case 1: goto L_117fea48;
    case 2: goto L_117fea58;
    case 3: goto L_117fea6c;
    default: x86_unimpl("switch@0x117fea27 out of table"); return;
  }
  /* 117fea2e mov edi, edi */
  EDI = (EDI);
L_117fea40:;
  /* 117fea40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fea43 pop esi */
  ESI = (pop32());
  /* 117fea44 pop edi */
  EDI = (pop32());
  /* 117fea45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fea46 ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fea47 nop  */
  /* nop */
L_117fea48:;
  /* 117fea48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fea4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fea4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fea51 pop esi */
  ESI = (pop32());
  /* 117fea52 pop edi */
  EDI = (pop32());
  /* 117fea53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fea54 ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fea55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_117fea58:;
  /* 117fea58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fea5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fea5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fea61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fea64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fea67 pop esi */
  ESI = (pop32());
  /* 117fea68 pop edi */
  EDI = (pop32());
  /* 117fea69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fea6a ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
  /* 117fea6b nop  */
  /* nop */
L_117fea6c:;
  /* 117fea6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 117fea6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 117fea72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 117fea75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 117fea78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 117fea7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 117fea7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fea81 pop esi */
  ESI = (pop32());
  /* 117fea82 pop edi */
  EDI = (pop32());
  /* 117fea83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 117fea84 ret  */
  ESPCHK(0x117fe750u, _esp0);
  ESP += 4; return;
L_117fe9d9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fe9d9 (unresolved jump table)"); return;
L_117fe9e1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fe9e1 (unresolved jump table)"); return;
L_117fe9e9: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fe9e9 (unresolved jump table)"); return;
L_117fe9ed: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fe9ed (unresolved jump table)"); return;
L_117fe9f1: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x117fe9f1 (unresolved jump table)"); return;
}

/* FUN_1000ea90 @ 0x117fea90 (421 bytes, 148 insns) */
void f_117fea90(void) {
  FTRACE(0x117fea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fea90 push ebp */
  push32((uint32_t)(EBP));
  /* 117fea91 mov ebp, esp */
  EBP = (ESP);
  /* 117fea93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117fea95 push 0x1181e6a8 */
  push32((uint32_t)(0x1181e6a8u));
  /* 117fea9a push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 117fea9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117feaa5 push eax */
  push32((uint32_t)(EAX));
  /* 117feaa6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117feaad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117feab0 push ebx */
  push32((uint32_t)(EBX));
  /* 117feab1 push esi */
  push32((uint32_t)(ESI));
  /* 117feab2 push edi */
  push32((uint32_t)(EDI));
  /* 117feab3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117feab6 cmp dword ptr [0x118228e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feabd jne 0x117feb0e */
  if (!C.zf) goto L_117feb0e;
  /* 117feabf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 117feac2 push eax */
  push32((uint32_t)(EAX));
  /* 117feac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 117feac5 push 0x1181e6a4 */
  push32((uint32_t)(0x1181e6a4u));
  /* 117feaca push 1 */
  push32((uint32_t)(0x1u));
  /* 117feacc call dword ptr [0x11825330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825330))), 0x117fead2u);
  /* 117fead2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fead4 je 0x117feae2 */
  if (C.zf) goto L_117feae2;
  /* 117fead6 mov dword ptr [0x118228e4], 1 */
  w32((uint32_t)(0x118228e4), (0x1u));
  /* 117feae0 jmp 0x117feb0e */
  goto L_117feb0e;
L_117feae2:;
  /* 117feae2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 117feae5 push ecx */
  push32((uint32_t)(ECX));
  /* 117feae6 push 1 */
  push32((uint32_t)(0x1u));
  /* 117feae8 push 0x1181e6a0 */
  push32((uint32_t)(0x1181e6a0u));
  /* 117feaed push 1 */
  push32((uint32_t)(0x1u));
  /* 117feaef push 0 */
  push32((uint32_t)(0x0u));
  /* 117feaf1 call dword ptr [0x11825334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825334))), 0x117feaf7u);
  /* 117feaf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117feaf9 je 0x117feb07 */
  if (C.zf) goto L_117feb07;
  /* 117feafb mov dword ptr [0x118228e4], 2 */
  w32((uint32_t)(0x118228e4), (0x2u));
  /* 117feb05 jmp 0x117feb0e */
  goto L_117feb0e;
L_117feb07:;
  /* 117feb07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117feb09 jmp 0x117fec38 */
  goto L_117fec38;
L_117feb0e:;
  /* 117feb0e cmp dword ptr [0x118228e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x118228e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feb15 jne 0x117feb45 */
  if (!C.zf) goto L_117feb45;
  /* 117feb17 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feb1b jne 0x117feb26 */
  if (!C.zf) goto L_117feb26;
  /* 117feb1d mov edx, dword ptr [0x118228f0] */
  EDX = (r32((uint32_t)(0x118228f0)));
  /* 117feb23 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_117feb26:;
  /* 117feb26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117feb29 push eax */
  push32((uint32_t)(EAX));
  /* 117feb2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117feb2d push ecx */
  push32((uint32_t)(ECX));
  /* 117feb2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117feb31 push edx */
  push32((uint32_t)(EDX));
  /* 117feb32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117feb35 push eax */
  push32((uint32_t)(EAX));
  /* 117feb36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117feb39 push ecx */
  push32((uint32_t)(ECX));
  /* 117feb3a call dword ptr [0x11825334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825334))), 0x117feb40u);
  /* 117feb40 jmp 0x117fec38 */
  goto L_117fec38;
L_117feb45:;
  /* 117feb45 cmp dword ptr [0x118228e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118228e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feb4c jne 0x117fec36 */
  if (!C.zf) goto L_117fec36;
  /* 117feb52 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feb56 jne 0x117feb61 */
  if (!C.zf) goto L_117feb61;
  /* 117feb58 mov edx, dword ptr [0x11822900] */
  EDX = (r32((uint32_t)(0x11822900)));
  /* 117feb5e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_117feb61:;
  /* 117feb61 push 0 */
  push32((uint32_t)(0x0u));
  /* 117feb63 push 0 */
  push32((uint32_t)(0x0u));
  /* 117feb65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117feb68 push eax */
  push32((uint32_t)(EAX));
  /* 117feb69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117feb6c push ecx */
  push32((uint32_t)(ECX));
  /* 117feb6d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 117feb70 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117feb72 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117feb74 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117feb77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117feb7a push edx */
  push32((uint32_t)(EDX));
  /* 117feb7b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117feb7e push eax */
  push32((uint32_t)(EAX));
  /* 117feb7f call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x117feb85u);
  /* 117feb85 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 117feb88 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feb8c jne 0x117feb95 */
  if (!C.zf) goto L_117feb95;
  /* 117feb8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117feb90 jmp 0x117fec38 */
  goto L_117fec38;
L_117feb95:;
  /* 117feb95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117feb9c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117feb9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117feba1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117feba4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117feba6 call 0x117f9a00 */
  push32(0x117febabu); f_117f9a00();
  /* 117febab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 117febae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117febb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117febb4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117febb7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 117febba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 117febbc push edx */
  push32((uint32_t)(EDX));
  /* 117febbd push 0 */
  push32((uint32_t)(0x0u));
  /* 117febbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117febc2 push eax */
  push32((uint32_t)(EAX));
  /* 117febc3 call 0x117fa5d0 */
  push32(0x117febc8u); f_117fa5d0();
  /* 117febc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117febcb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117febd2 jmp 0x117febeb */
  goto L_117febeb;
  /* 117febd4 mov eax, 1 */
  EAX = (0x1u);
  /* 117febd9 ret  */
  ESPCHK(0x117fea90u, _esp0);
  ESP += 4; return;
  /* 117febda mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117febdd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117febe4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117febeb:;
  /* 117febeb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117febef jne 0x117febf5 */
  if (!C.zf) goto L_117febf5;
  /* 117febf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117febf3 jmp 0x117fec38 */
  goto L_117fec38;
L_117febf5:;
  /* 117febf5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117febf8 push ecx */
  push32((uint32_t)(ECX));
  /* 117febf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117febfc push edx */
  push32((uint32_t)(EDX));
  /* 117febfd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fec00 push eax */
  push32((uint32_t)(EAX));
  /* 117fec01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fec04 push ecx */
  push32((uint32_t)(ECX));
  /* 117fec05 push 1 */
  push32((uint32_t)(0x1u));
  /* 117fec07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117fec0a push edx */
  push32((uint32_t)(EDX));
  /* 117fec0b call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x117fec11u);
  /* 117fec11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fec14 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fec18 jne 0x117fec1e */
  if (!C.zf) goto L_117fec1e;
  /* 117fec1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fec1c jmp 0x117fec38 */
  goto L_117fec38;
L_117fec1e:;
  /* 117fec1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fec21 push eax */
  push32((uint32_t)(EAX));
  /* 117fec22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fec25 push ecx */
  push32((uint32_t)(ECX));
  /* 117fec26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fec29 push edx */
  push32((uint32_t)(EDX));
  /* 117fec2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fec2d push eax */
  push32((uint32_t)(EAX));
  /* 117fec2e call dword ptr [0x11825330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825330))), 0x117fec34u);
  /* 117fec34 jmp 0x117fec38 */
  goto L_117fec38;
L_117fec36:;
  /* 117fec36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fec38:;
  /* 117fec38 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 117fec3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fec3e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117fec45 pop edi */
  EDI = (pop32());
  /* 117fec46 pop esi */
  ESI = (pop32());
  /* 117fec47 pop ebx */
  EBX = (pop32());
  /* 117fec48 mov esp, ebp */
  ESP = (EBP);
  /* 117fec4a pop ebp */
  EBP = (pop32());
  /* 117fec4b ret  */
  ESPCHK(0x117fea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec50 @ 0x117fec50 (727 bytes, 263 insns) */
void f_117fec50(void) {
  FTRACE(0x117fec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fec50 push ebp */
  push32((uint32_t)(EBP));
  /* 117fec51 mov ebp, esp */
  EBP = (ESP);
  /* 117fec53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 117fec55 push 0x1181e6b8 */
  push32((uint32_t)(0x1181e6b8u));
  /* 117fec5a push 0x117ff968 */
  push32((uint32_t)(0x117ff968u));
  /* 117fec5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 117fec65 push eax */
  push32((uint32_t)(EAX));
  /* 117fec66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 117fec6d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fec70 push ebx */
  push32((uint32_t)(EBX));
  /* 117fec71 push esi */
  push32((uint32_t)(ESI));
  /* 117fec72 push edi */
  push32((uint32_t)(EDI));
  /* 117fec73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117fec76 cmp dword ptr [0x11822908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fec7d jne 0x117fecd6 */
  if (!C.zf) goto L_117fecd6;
  /* 117fec7f push 0 */
  push32((uint32_t)(0x0u));
  /* 117fec81 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fec83 push 1 */
  push32((uint32_t)(0x1u));
  /* 117fec85 push 0x1181e6a4 */
  push32((uint32_t)(0x1181e6a4u));
  /* 117fec8a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fec8f push 0 */
  push32((uint32_t)(0x0u));
  /* 117fec91 call dword ptr [0x11825328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825328))), 0x117fec97u);
  /* 117fec97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fec99 je 0x117feca7 */
  if (C.zf) goto L_117feca7;
  /* 117fec9b mov dword ptr [0x11822908], 1 */
  w32((uint32_t)(0x11822908), (0x1u));
  /* 117feca5 jmp 0x117fecd6 */
  goto L_117fecd6;
L_117feca7:;
  /* 117feca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117feca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fecab push 1 */
  push32((uint32_t)(0x1u));
  /* 117fecad push 0x1181e6a0 */
  push32((uint32_t)(0x1181e6a0u));
  /* 117fecb2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 117fecb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fecb9 call dword ptr [0x1182532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182532c))), 0x117fecbfu);
  /* 117fecbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fecc1 je 0x117feccf */
  if (C.zf) goto L_117feccf;
  /* 117fecc3 mov dword ptr [0x11822908], 2 */
  w32((uint32_t)(0x11822908), (0x2u));
  /* 117feccd jmp 0x117fecd6 */
  goto L_117fecd6;
L_117feccf:;
  /* 117feccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fecd1 jmp 0x117fef41 */
  goto L_117fef41;
L_117fecd6:;
  /* 117fecd6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fecda jle 0x117fecef */
  if ((C.zf||C.sf!=C.of)) goto L_117fecef;
  /* 117fecdc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fecdf push eax */
  push32((uint32_t)(EAX));
  /* 117fece0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fece3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fece4 call 0x117fef60 */
  push32(0x117fece9u); f_117fef60();
  /* 117fece9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fecec mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_117fecef:;
  /* 117fecef cmp dword ptr [0x11822908], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11822908))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fecf6 jne 0x117fed1b */
  if (!C.zf) goto L_117fed1b;
  /* 117fecf8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117fecfb push edx */
  push32((uint32_t)(EDX));
  /* 117fecfc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117fecff push eax */
  push32((uint32_t)(EAX));
  /* 117fed00 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fed03 push ecx */
  push32((uint32_t)(ECX));
  /* 117fed04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fed07 push edx */
  push32((uint32_t)(EDX));
  /* 117fed08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fed0b push eax */
  push32((uint32_t)(EAX));
  /* 117fed0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fed0f push ecx */
  push32((uint32_t)(ECX));
  /* 117fed10 call dword ptr [0x1182532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182532c))), 0x117fed16u);
  /* 117fed16 jmp 0x117fef41 */
  goto L_117fef41;
L_117fed1b:;
  /* 117fed1b cmp dword ptr [0x11822908], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11822908))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fed22 jne 0x117fef3f */
  if (!C.zf) goto L_117fef3f;
  /* 117fed28 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fed2c jne 0x117fed37 */
  if (!C.zf) goto L_117fed37;
  /* 117fed2e mov edx, dword ptr [0x11822900] */
  EDX = (r32((uint32_t)(0x11822900)));
  /* 117fed34 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_117fed37:;
  /* 117fed37 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fed39 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fed3b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fed3e push eax */
  push32((uint32_t)(EAX));
  /* 117fed3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fed42 push ecx */
  push32((uint32_t)(ECX));
  /* 117fed43 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 117fed46 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 117fed48 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fed4a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 117fed4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fed50 push edx */
  push32((uint32_t)(EDX));
  /* 117fed51 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117fed54 push eax */
  push32((uint32_t)(EAX));
  /* 117fed55 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x117fed5bu);
  /* 117fed5b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 117fed5e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fed62 jne 0x117fed6b */
  if (!C.zf) goto L_117fed6b;
  /* 117fed64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fed66 jmp 0x117fef41 */
  goto L_117fef41;
L_117fed6b:;
  /* 117fed6b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117fed72 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fed75 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117fed77 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fed7a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117fed7c call 0x117f9a00 */
  push32(0x117fed81u); f_117f9a00();
  /* 117fed81 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 117fed84 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117fed87 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117fed8a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 117fed8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117fed94 jmp 0x117fedad */
  goto L_117fedad;
  /* 117fed96 mov eax, 1 */
  EAX = (0x1u);
  /* 117fed9b ret  */
  ESPCHK(0x117fec50u, _esp0);
  ESP += 4; return;
  /* 117fed9c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117fed9f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 117feda6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117fedad:;
  /* 117fedad cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fedb1 jne 0x117fedba */
  if (!C.zf) goto L_117fedba;
  /* 117fedb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fedb5 jmp 0x117fef41 */
  goto L_117fef41;
L_117fedba:;
  /* 117fedba mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fedbd push edx */
  push32((uint32_t)(EDX));
  /* 117fedbe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fedc1 push eax */
  push32((uint32_t)(EAX));
  /* 117fedc2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 117fedc5 push ecx */
  push32((uint32_t)(ECX));
  /* 117fedc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117fedc9 push edx */
  push32((uint32_t)(EDX));
  /* 117fedca push 1 */
  push32((uint32_t)(0x1u));
  /* 117fedcc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 117fedcf push eax */
  push32((uint32_t)(EAX));
  /* 117fedd0 call dword ptr [0x11825338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825338))), 0x117fedd6u);
  /* 117fedd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fedd8 jne 0x117fede1 */
  if (!C.zf) goto L_117fede1;
  /* 117fedda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117feddc jmp 0x117fef41 */
  goto L_117fef41;
L_117fede1:;
  /* 117fede1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fede3 push 0 */
  push32((uint32_t)(0x0u));
  /* 117fede5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fede8 push ecx */
  push32((uint32_t)(ECX));
  /* 117fede9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fedec push edx */
  push32((uint32_t)(EDX));
  /* 117feded mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fedf0 push eax */
  push32((uint32_t)(EAX));
  /* 117fedf1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fedf4 push ecx */
  push32((uint32_t)(ECX));
  /* 117fedf5 call dword ptr [0x11825328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825328))), 0x117fedfbu);
  /* 117fedfb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fedfe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fee02 jne 0x117fee0b */
  if (!C.zf) goto L_117fee0b;
  /* 117fee04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fee06 jmp 0x117fef41 */
  goto L_117fef41;
L_117fee0b:;
  /* 117fee0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fee0e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 117fee14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fee16 je 0x117fee5b */
  if (C.zf) goto L_117fee5b;
  /* 117fee18 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fee1c je 0x117fee56 */
  if (C.zf) goto L_117fee56;
  /* 117fee1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fee21 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fee24 jle 0x117fee2d */
  if ((C.zf||C.sf!=C.of)) goto L_117fee2d;
  /* 117fee26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fee28 jmp 0x117fef41 */
  goto L_117fef41;
L_117fee2d:;
  /* 117fee2d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117fee30 push ecx */
  push32((uint32_t)(ECX));
  /* 117fee31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117fee34 push edx */
  push32((uint32_t)(EDX));
  /* 117fee35 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117fee38 push eax */
  push32((uint32_t)(EAX));
  /* 117fee39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117fee3c push ecx */
  push32((uint32_t)(ECX));
  /* 117fee3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fee40 push edx */
  push32((uint32_t)(EDX));
  /* 117fee41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fee44 push eax */
  push32((uint32_t)(EAX));
  /* 117fee45 call dword ptr [0x11825328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825328))), 0x117fee4bu);
  /* 117fee4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117fee4d jne 0x117fee56 */
  if (!C.zf) goto L_117fee56;
  /* 117fee4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fee51 jmp 0x117fef41 */
  goto L_117fef41;
L_117fee56:;
  /* 117fee56 jmp 0x117fef3a */
  goto L_117fef3a;
L_117fee5b:;
  /* 117fee5b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fee5e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117fee61 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117fee68 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fee6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117fee6d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fee70 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 117fee72 call 0x117f9a00 */
  push32(0x117fee77u); f_117f9a00();
  /* 117fee77 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 117fee7a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 117fee7d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117fee80 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 117fee83 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 117fee8a jmp 0x117feea3 */
  goto L_117feea3;
  /* 117fee8c mov eax, 1 */
  EAX = (0x1u);
  /* 117fee91 ret  */
  ESPCHK(0x117fec50u, _esp0);
  ESP += 4; return;
  /* 117fee92 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 117fee95 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 117fee9c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_117feea3:;
  /* 117feea3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feea7 jne 0x117feeb0 */
  if (!C.zf) goto L_117feeb0;
  /* 117feea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117feeab jmp 0x117fef41 */
  goto L_117fef41;
L_117feeb0:;
  /* 117feeb0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117feeb3 push eax */
  push32((uint32_t)(EAX));
  /* 117feeb4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117feeb7 push ecx */
  push32((uint32_t)(ECX));
  /* 117feeb8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117feebb push edx */
  push32((uint32_t)(EDX));
  /* 117feebc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117feebf push eax */
  push32((uint32_t)(EAX));
  /* 117feec0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117feec3 push ecx */
  push32((uint32_t)(ECX));
  /* 117feec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117feec7 push edx */
  push32((uint32_t)(EDX));
  /* 117feec8 call dword ptr [0x11825328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825328))), 0x117feeceu);
  /* 117feece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117feed0 jne 0x117feed6 */
  if (!C.zf) goto L_117feed6;
  /* 117feed2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117feed4 jmp 0x117fef41 */
  goto L_117fef41;
L_117feed6:;
  /* 117feed6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117feeda jne 0x117fef0a */
  if (!C.zf) goto L_117fef0a;
  /* 117feedc push 0 */
  push32((uint32_t)(0x0u));
  /* 117feede push 0 */
  push32((uint32_t)(0x0u));
  /* 117feee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 117feee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 117feee4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117feee7 push eax */
  push32((uint32_t)(EAX));
  /* 117feee8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 117feeeb push ecx */
  push32((uint32_t)(ECX));
  /* 117feeec push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117feef1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 117feef4 push edx */
  push32((uint32_t)(EDX));
  /* 117feef5 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x117feefbu);
  /* 117feefb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117feefe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fef02 jne 0x117fef08 */
  if (!C.zf) goto L_117fef08;
  /* 117fef04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fef06 jmp 0x117fef41 */
  goto L_117fef41;
L_117fef08:;
  /* 117fef08 jmp 0x117fef3a */
  goto L_117fef3a;
L_117fef0a:;
  /* 117fef0a push 0 */
  push32((uint32_t)(0x0u));
  /* 117fef0c push 0 */
  push32((uint32_t)(0x0u));
  /* 117fef0e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 117fef11 push eax */
  push32((uint32_t)(EAX));
  /* 117fef12 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117fef15 push ecx */
  push32((uint32_t)(ECX));
  /* 117fef16 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117fef19 push edx */
  push32((uint32_t)(EDX));
  /* 117fef1a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 117fef1d push eax */
  push32((uint32_t)(EAX));
  /* 117fef1e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117fef23 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 117fef26 push ecx */
  push32((uint32_t)(ECX));
  /* 117fef27 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x117fef2du);
  /* 117fef2d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117fef30 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fef34 jne 0x117fef3a */
  if (!C.zf) goto L_117fef3a;
  /* 117fef36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117fef38 jmp 0x117fef41 */
  goto L_117fef41;
L_117fef3a:;
  /* 117fef3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117fef3d jmp 0x117fef41 */
  goto L_117fef41;
L_117fef3f:;
  /* 117fef3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117fef41:;
  /* 117fef41 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 117fef44 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117fef47 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 117fef4e pop edi */
  EDI = (pop32());
  /* 117fef4f pop esi */
  ESI = (pop32());
  /* 117fef50 pop ebx */
  EBX = (pop32());
  /* 117fef51 mov esp, ebp */
  ESP = (EBP);
  /* 117fef53 pop ebp */
  EBP = (pop32());
  /* 117fef54 ret  */
  ESPCHK(0x117fec50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef60 @ 0x117fef60 (80 bytes, 32 insns) */
void f_117fef60(void) {
  FTRACE(0x117fef60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fef60 push ebp */
  push32((uint32_t)(EBP));
  /* 117fef61 mov ebp, esp */
  EBP = (ESP);
  /* 117fef63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fef66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117fef69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fef6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fef6f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117fef72:;
  /* 117fef72 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fef75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fef78 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fef7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117fef7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fef80 je 0x117fef97 */
  if (C.zf) goto L_117fef97;
  /* 117fef82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fef85 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117fef88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fef8a je 0x117fef97 */
  if (C.zf) goto L_117fef97;
  /* 117fef8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fef8f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fef92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117fef95 jmp 0x117fef72 */
  goto L_117fef72;
L_117fef97:;
  /* 117fef97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fef9a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117fef9d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117fef9f jne 0x117fefa9 */
  if (!C.zf) goto L_117fefa9;
  /* 117fefa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fefa4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117fefa7 jmp 0x117fefac */
  goto L_117fefac;
L_117fefa9:;
  /* 117fefa9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_117fefac:;
  /* 117fefac mov esp, ebp */
  ESP = (EBP);
  /* 117fefae pop ebp */
  EBP = (pop32());
  /* 117fefaf ret  */
  ESPCHK(0x117fef60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efb0 @ 0x117fefb0 (130 bytes, 43 insns) */
void f_117fefb0(void) {
  FTRACE(0x117fefb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fefb0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fefb1 mov ebp, esp */
  EBP = (ESP);
  /* 117fefb3 push ecx */
  push32((uint32_t)(ECX));
  /* 117fefb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fefb7 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fefbd jae 0x117fefe1 */
  if (!C.cf) goto L_117fefe1;
  /* 117fefbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fefc2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117fefc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fefc8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117fefcb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fefce mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117fefd5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117fefda and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117fefdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117fefdf jne 0x117feffc */
  if (!C.zf) goto L_117feffc;
L_117fefe1:;
  /* 117fefe1 call 0x117fe730 */
  push32(0x117fefe6u); f_117fe730();
  /* 117fefe6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117fefec call 0x117fe740 */
  push32(0x117feff1u); f_117fe740();
  /* 117feff1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117feff7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117feffa jmp 0x117ff02e */
  goto L_117ff02e;
L_117feffc:;
  /* 117feffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fefff push edx */
  push32((uint32_t)(EDX));
  /* 117ff000 call 0x117fff50 */
  push32(0x117ff005u); f_117fff50();
  /* 117ff005 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff008 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117ff00b push eax */
  push32((uint32_t)(EAX));
  /* 117ff00c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff00f push ecx */
  push32((uint32_t)(ECX));
  /* 117ff010 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff013 push edx */
  push32((uint32_t)(EDX));
  /* 117ff014 call 0x117ff040 */
  push32(0x117ff019u); f_117ff040();
  /* 117ff019 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff01c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ff01f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff022 push eax */
  push32((uint32_t)(EAX));
  /* 117ff023 call 0x117fffe0 */
  push32(0x117ff028u); f_117fffe0();
  /* 117ff028 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117ff02e:;
  /* 117ff02e mov esp, ebp */
  ESP = (EBP);
  /* 117ff030 pop ebp */
  EBP = (pop32());
  /* 117ff031 ret  */
  ESPCHK(0x117fefb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f040 @ 0x117ff040 (178 bytes, 56 insns) */
void f_117ff040(void) {
  FTRACE(0x117ff040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff040 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff041 mov ebp, esp */
  EBP = (ESP);
  /* 117ff043 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff046 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff049 push eax */
  push32((uint32_t)(EAX));
  /* 117ff04a call 0x117ffdd0 */
  push32(0x117ff04fu); f_117ffdd0();
  /* 117ff04f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff052 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117ff055 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff059 jne 0x117ff06e */
  if (!C.zf) goto L_117ff06e;
  /* 117ff05b call 0x117fe730 */
  push32(0x117ff060u); f_117fe730();
  /* 117ff060 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ff066 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff069 jmp 0x117ff0ee */
  goto L_117ff0ee;
L_117ff06e:;
  /* 117ff06e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117ff071 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff072 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff074 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff077 push edx */
  push32((uint32_t)(EDX));
  /* 117ff078 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ff07b push eax */
  push32((uint32_t)(EAX));
  /* 117ff07c call dword ptr [0x11825324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825324))), 0x117ff082u);
  /* 117ff082 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117ff085 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff089 jne 0x117ff096 */
  if (!C.zf) goto L_117ff096;
  /* 117ff08b call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117ff091u);
  /* 117ff091 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ff094 jmp 0x117ff09d */
  goto L_117ff09d;
L_117ff096:;
  /* 117ff096 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117ff09d:;
  /* 117ff09d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff0a1 je 0x117ff0b4 */
  if (C.zf) goto L_117ff0b4;
  /* 117ff0a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff0a6 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff0a7 call 0x117fe690 */
  push32(0x117ff0acu); f_117fe690();
  /* 117ff0ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff0af or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff0b2 jmp 0x117ff0ee */
  goto L_117ff0ee;
L_117ff0b4:;
  /* 117ff0b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff0b7 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117ff0ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff0bd and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff0c0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff0c3 mov ecx, dword ptr [edx*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ff0ca mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 117ff0ce and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 117ff0d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff0d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff0d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff0da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117ff0dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff0e0 mov eax, dword ptr [eax*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ff0e7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 117ff0eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117ff0ee:;
  /* 117ff0ee mov esp, ebp */
  ESP = (EBP);
  /* 117ff0f0 pop ebp */
  EBP = (pop32());
  /* 117ff0f1 ret  */
  ESPCHK(0x117ff040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f100 @ 0x117ff100 (130 bytes, 43 insns) */
void f_117ff100(void) {
  FTRACE(0x117ff100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff100 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff101 mov ebp, esp */
  EBP = (ESP);
  /* 117ff103 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff107 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff10d jae 0x117ff131 */
  if (!C.cf) goto L_117ff131;
  /* 117ff10f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff112 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff118 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff11b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff11e mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff125 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117ff12a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117ff12d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117ff12f jne 0x117ff14c */
  if (!C.zf) goto L_117ff14c;
L_117ff131:;
  /* 117ff131 call 0x117fe730 */
  push32(0x117ff136u); f_117fe730();
  /* 117ff136 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ff13c call 0x117fe740 */
  push32(0x117ff141u); f_117fe740();
  /* 117ff141 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ff147 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff14a jmp 0x117ff17e */
  goto L_117ff17e;
L_117ff14c:;
  /* 117ff14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff14f push edx */
  push32((uint32_t)(EDX));
  /* 117ff150 call 0x117fff50 */
  push32(0x117ff155u); f_117fff50();
  /* 117ff155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff158 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117ff15b push eax */
  push32((uint32_t)(EAX));
  /* 117ff15c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff15f push ecx */
  push32((uint32_t)(ECX));
  /* 117ff160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff163 push edx */
  push32((uint32_t)(EDX));
  /* 117ff164 call 0x117ff190 */
  push32(0x117ff169u); f_117ff190();
  /* 117ff169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff16c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ff16f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff172 push eax */
  push32((uint32_t)(EAX));
  /* 117ff173 call 0x117fffe0 */
  push32(0x117ff178u); f_117fffe0();
  /* 117ff178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff17b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117ff17e:;
  /* 117ff17e mov esp, ebp */
  ESP = (EBP);
  /* 117ff180 pop ebp */
  EBP = (pop32());
  /* 117ff181 ret  */
  ESPCHK(0x117ff100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x117ff190 (627 bytes, 182 insns) */
void f_117ff190(void) {
  FTRACE(0x117ff190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff190 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff191 mov ebp, esp */
  EBP = (ESP);
  /* 117ff193 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff199 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 117ff1a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117ff1a3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 117ff1a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff1ad jne 0x117ff1b6 */
  if (!C.zf) goto L_117ff1b6;
  /* 117ff1af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ff1b1 jmp 0x117ff3ff */
  goto L_117ff3ff;
L_117ff1b6:;
  /* 117ff1b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff1b9 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff1bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff1bf and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff1c2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff1c5 mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff1cc movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117ff1d1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 117ff1d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117ff1d6 je 0x117ff1e8 */
  if (C.zf) goto L_117ff1e8;
  /* 117ff1d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117ff1da push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff1dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff1df push edx */
  push32((uint32_t)(EDX));
  /* 117ff1e0 call 0x117ff040 */
  push32(0x117ff1e5u); f_117ff040();
  /* 117ff1e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117ff1e8:;
  /* 117ff1e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff1eb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff1ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff1f1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117ff1f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff1f7 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ff1fe movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 117ff203 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 117ff208 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff20a je 0x117ff31c */
  if (C.zf) goto L_117ff31c;
  /* 117ff210 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff213 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117ff216 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_117ff21d:;
  /* 117ff21d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff220 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff223 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff226 jae 0x117ff31a */
  if (!C.cf) goto L_117ff31a;
  /* 117ff22c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 117ff232 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117ff235:;
  /* 117ff235 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff238 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 117ff23e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff240 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff246 jge 0x117ff2a7 */
  if ((C.sf==C.of)) goto L_117ff2a7;
  /* 117ff248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff24b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff24e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff251 jae 0x117ff2a7 */
  if (!C.cf) goto L_117ff2a7;
  /* 117ff253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff256 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117ff258 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 117ff25e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff261 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff264 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ff267 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 117ff26e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff271 jne 0x117ff291 */
  if (!C.zf) goto L_117ff291;
  /* 117ff273 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 117ff279 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff27c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 117ff282 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff285 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 117ff288 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff28b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff28e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_117ff291:;
  /* 117ff291 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff294 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 117ff29a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 117ff29c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff29f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff2a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117ff2a5 jmp 0x117ff235 */
  goto L_117ff235;
L_117ff2a7:;
  /* 117ff2a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff2a9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 117ff2af push edx */
  push32((uint32_t)(EDX));
  /* 117ff2b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff2b3 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 117ff2b9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff2bb push eax */
  push32((uint32_t)(EAX));
  /* 117ff2bc lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 117ff2c2 push edx */
  push32((uint32_t)(EDX));
  /* 117ff2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff2c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff2c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff2cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117ff2cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff2d2 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ff2d9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 117ff2dc push eax */
  push32((uint32_t)(EAX));
  /* 117ff2dd call dword ptr [0x118253b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b4))), 0x117ff2e3u);
  /* 117ff2e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff2e5 je 0x117ff30a */
  if (C.zf) goto L_117ff30a;
  /* 117ff2e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117ff2ea add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff2f0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117ff2f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff2f6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 117ff2fc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff2fe cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff304 jge 0x117ff308 */
  if ((C.sf==C.of)) goto L_117ff308;
  /* 117ff306 jmp 0x117ff31a */
  goto L_117ff31a;
L_117ff308:;
  /* 117ff308 jmp 0x117ff315 */
  goto L_117ff315;
L_117ff30a:;
  /* 117ff30a call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117ff310u);
  /* 117ff310 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117ff313 jmp 0x117ff31a */
  goto L_117ff31a;
L_117ff315:;
  /* 117ff315 jmp 0x117ff21d */
  goto L_117ff21d;
L_117ff31a:;
  /* 117ff31a jmp 0x117ff36c */
  goto L_117ff36c;
L_117ff31c:;
  /* 117ff31c push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff31e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 117ff324 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff325 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117ff328 push edx */
  push32((uint32_t)(EDX));
  /* 117ff329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff32c push eax */
  push32((uint32_t)(EAX));
  /* 117ff32d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff330 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff336 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff339 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff33c mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff343 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 117ff346 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff347 call dword ptr [0x118253b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b4))), 0x117ff34du);
  /* 117ff34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff34f je 0x117ff363 */
  if (C.zf) goto L_117ff363;
  /* 117ff351 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117ff358 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 117ff35e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117ff361 jmp 0x117ff36c */
  goto L_117ff36c;
L_117ff363:;
  /* 117ff363 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117ff369u);
  /* 117ff369 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117ff36c:;
  /* 117ff36c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff370 jne 0x117ff3f6 */
  if (!C.zf) goto L_117ff3f6;
  /* 117ff376 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff37a je 0x117ff3aa */
  if (C.zf) goto L_117ff3aa;
  /* 117ff37c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff380 jne 0x117ff399 */
  if (!C.zf) goto L_117ff399;
  /* 117ff382 call 0x117fe730 */
  push32(0x117ff387u); f_117fe730();
  /* 117ff387 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ff38d call 0x117fe740 */
  push32(0x117ff392u); f_117fe740();
  /* 117ff392 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ff395 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 117ff397 jmp 0x117ff3a5 */
  goto L_117ff3a5;
L_117ff399:;
  /* 117ff399 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ff39c push edx */
  push32((uint32_t)(EDX));
  /* 117ff39d call 0x117fe690 */
  push32(0x117ff3a2u); f_117fe690();
  /* 117ff3a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117ff3a5:;
  /* 117ff3a5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff3a8 jmp 0x117ff3ff */
  goto L_117ff3ff;
L_117ff3aa:;
  /* 117ff3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff3ad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff3b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff3b3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117ff3b6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff3b9 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ff3c0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 117ff3c5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 117ff3c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff3ca je 0x117ff3db */
  if (C.zf) goto L_117ff3db;
  /* 117ff3cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff3cf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117ff3d2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff3d5 jne 0x117ff3db */
  if (!C.zf) goto L_117ff3db;
  /* 117ff3d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ff3d9 jmp 0x117ff3ff */
  goto L_117ff3ff;
L_117ff3db:;
  /* 117ff3db call 0x117fe730 */
  push32(0x117ff3e0u); f_117fe730();
  /* 117ff3e0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 117ff3e6 call 0x117fe740 */
  push32(0x117ff3ebu); f_117fe740();
  /* 117ff3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ff3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff3f4 jmp 0x117ff3ff */
  goto L_117ff3ff;
L_117ff3f6:;
  /* 117ff3f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117ff3f9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_117ff3ff:;
  /* 117ff3ff mov esp, ebp */
  ESP = (EBP);
  /* 117ff401 pop ebp */
  EBP = (pop32());
  /* 117ff402 ret  */
  ESPCHK(0x117ff190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f410 @ 0x117ff410 (199 bytes, 68 insns) */
void f_117ff410(void) {
  FTRACE(0x117ff410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff410 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff411 mov ebp, esp */
  EBP = (ESP);
  /* 117ff413 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff414 push ebx */
  push32((uint32_t)(EBX));
  /* 117ff415 push esi */
  push32((uint32_t)(ESI));
  /* 117ff416 push edi */
  push32((uint32_t)(EDI));
L_117ff417:;
  /* 117ff417 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff41b jne 0x117ff43b */
  if (!C.zf) goto L_117ff43b;
  /* 117ff41d push 0x1181e604 */
  push32((uint32_t)(0x1181e604u));
  /* 117ff422 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff424 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 117ff426 push 0x1181e6d0 */
  push32((uint32_t)(0x1181e6d0u));
  /* 117ff42b push 2 */
  push32((uint32_t)(0x2u));
  /* 117ff42d call 0x117f5920 */
  push32(0x117ff432u); f_117f5920();
  /* 117ff432 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff435 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff438 jne 0x117ff43b */
  if (!C.zf) goto L_117ff43b;
  /* 117ff43a int3  */
  x86_unimpl("int3 @ 0x117ff43a");
L_117ff43b:;
  /* 117ff43b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ff43d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff43f jne 0x117ff417 */
  if (!C.zf) goto L_117ff417;
  /* 117ff441 mov ecx, dword ptr [0x1182290c] */
  ECX = (r32((uint32_t)(0x1182290c)));
  /* 117ff447 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff44a mov dword ptr [0x1182290c], ecx */
  w32((uint32_t)(0x1182290c), (ECX));
  /* 117ff450 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff453 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117ff456 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 117ff458 push 0x1181e6d0 */
  push32((uint32_t)(0x1181e6d0u));
  /* 117ff45d push 2 */
  push32((uint32_t)(0x2u));
  /* 117ff45f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 117ff464 call 0x117f6860 */
  push32(0x117ff469u); f_117f6860();
  /* 117ff469 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff46c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff46f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 117ff472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff475 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff479 je 0x117ff496 */
  if (C.zf) goto L_117ff496;
  /* 117ff47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff47e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 117ff481 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 117ff484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff487 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 117ff48a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff48d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 117ff494 jmp 0x117ff4bb */
  goto L_117ff4bb;
L_117ff496:;
  /* 117ff496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff499 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117ff49c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 117ff49f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4a2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 117ff4a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4a8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff4ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4ae mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117ff4b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4b4 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_117ff4bb:;
  /* 117ff4bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4c1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 117ff4c4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117ff4c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff4c9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 117ff4d0 pop edi */
  EDI = (pop32());
  /* 117ff4d1 pop esi */
  ESI = (pop32());
  /* 117ff4d2 pop ebx */
  EBX = (pop32());
  /* 117ff4d3 mov esp, ebp */
  ESP = (EBP);
  /* 117ff4d5 pop ebp */
  EBP = (pop32());
  /* 117ff4d6 ret  */
  ESPCHK(0x117ff410u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x117ff4e0 (50 bytes, 17 insns) */
void f_117ff4e0(void) {
  FTRACE(0x117ff4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff4e1 mov ebp, esp */
  EBP = (ESP);
  /* 117ff4e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff4e6 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff4ec jb 0x117ff4f2 */
  if (C.cf) goto L_117ff4f2;
  /* 117ff4ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ff4f0 jmp 0x117ff510 */
  goto L_117ff510;
L_117ff4f2:;
  /* 117ff4f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff4f5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff4f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff4fb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff4fe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff501 mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff508 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117ff50d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_117ff510:;
  /* 117ff510 pop ebp */
  EBP = (pop32());
  /* 117ff511 ret  */
  ESPCHK(0x117ff4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f520 @ 0x117ff520 (300 bytes, 80 insns) */
void f_117ff520(void) {
  FTRACE(0x117ff520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff520 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff521 mov ebp, esp */
  EBP = (ESP);
  /* 117ff523 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff524 cmp dword ptr [0x11823dc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11823dc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff52b jne 0x117ff539 */
  if (!C.zf) goto L_117ff539;
  /* 117ff52d mov dword ptr [0x11823dc0], 0x200 */
  w32((uint32_t)(0x11823dc0), (0x200u));
  /* 117ff537 jmp 0x117ff54c */
  goto L_117ff54c;
L_117ff539:;
  /* 117ff539 cmp dword ptr [0x11823dc0], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11823dc0))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff540 jge 0x117ff54c */
  if ((C.sf==C.of)) goto L_117ff54c;
  /* 117ff542 mov dword ptr [0x11823dc0], 0x14 */
  w32((uint32_t)(0x11823dc0), (0x14u));
L_117ff54c:;
  /* 117ff54c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 117ff551 push 0x1181e6dc */
  push32((uint32_t)(0x1181e6dcu));
  /* 117ff556 push 2 */
  push32((uint32_t)(0x2u));
  /* 117ff558 push 4 */
  push32((uint32_t)(0x4u));
  /* 117ff55a mov eax, dword ptr [0x11823dc0] */
  EAX = (r32((uint32_t)(0x11823dc0)));
  /* 117ff55f push eax */
  push32((uint32_t)(EAX));
  /* 117ff560 call 0x117f6c70 */
  push32(0x117ff565u); f_117f6c70();
  /* 117ff565 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff568 mov dword ptr [0x11822a80], eax */
  w32((uint32_t)(0x11822a80), (EAX));
  /* 117ff56d cmp dword ptr [0x11822a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff574 jne 0x117ff5b5 */
  if (!C.zf) goto L_117ff5b5;
  /* 117ff576 mov dword ptr [0x11823dc0], 0x14 */
  w32((uint32_t)(0x11823dc0), (0x14u));
  /* 117ff580 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 117ff585 push 0x1181e6dc */
  push32((uint32_t)(0x1181e6dcu));
  /* 117ff58a push 2 */
  push32((uint32_t)(0x2u));
  /* 117ff58c push 4 */
  push32((uint32_t)(0x4u));
  /* 117ff58e mov ecx, dword ptr [0x11823dc0] */
  ECX = (r32((uint32_t)(0x11823dc0)));
  /* 117ff594 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff595 call 0x117f6c70 */
  push32(0x117ff59au); f_117f6c70();
  /* 117ff59a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff59d mov dword ptr [0x11822a80], eax */
  w32((uint32_t)(0x11822a80), (EAX));
  /* 117ff5a2 cmp dword ptr [0x11822a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff5a9 jne 0x117ff5b5 */
  if (!C.zf) goto L_117ff5b5;
  /* 117ff5ab push 0x1a */
  push32((uint32_t)(0x1au));
  /* 117ff5ad call 0x117f57d0 */
  push32(0x117ff5b2u); f_117f57d0();
  /* 117ff5b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117ff5b5:;
  /* 117ff5b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117ff5bc jmp 0x117ff5c7 */
  goto L_117ff5c7;
L_117ff5be:;
  /* 117ff5be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff5c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff5c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117ff5c7:;
  /* 117ff5c7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff5cb jge 0x117ff5e6 */
  if ((C.sf==C.of)) goto L_117ff5e6;
  /* 117ff5cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff5d0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff5d3 add eax, 0x11821120 */
  { uint32_t _a=(EAX),_b=(0x11821120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff5d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff5db mov edx, dword ptr [0x11822a80] */
  EDX = (r32((uint32_t)(0x11822a80)));
  /* 117ff5e1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 117ff5e4 jmp 0x117ff5be */
  goto L_117ff5be;
L_117ff5e6:;
  /* 117ff5e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117ff5ed jmp 0x117ff5f8 */
  goto L_117ff5f8;
L_117ff5ef:;
  /* 117ff5ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff5f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff5f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117ff5f8:;
  /* 117ff5f8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff5fc jge 0x117ff648 */
  if ((C.sf==C.of)) goto L_117ff648;
  /* 117ff5fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff601 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff607 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff60a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff60d mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff614 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff618 je 0x117ff636 */
  if (C.zf) goto L_117ff636;
  /* 117ff61a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff61d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff620 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff623 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ff626 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ff629 mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ff630 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff634 jne 0x117ff646 */
  if (!C.zf) goto L_117ff646;
L_117ff636:;
  /* 117ff636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ff639 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ff63c mov dword ptr [ecx + 0x11821130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11821130), (0xffffffffu));
L_117ff646:;
  /* 117ff646 jmp 0x117ff5ef */
  goto L_117ff5ef;
L_117ff648:;
  /* 117ff648 mov esp, ebp */
  ESP = (EBP);
  /* 117ff64a pop ebp */
  EBP = (pop32());
  /* 117ff64b ret  */
  ESPCHK(0x117ff520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x117ff650 (26 bytes, 9 insns) */
void f_117ff650(void) {
  FTRACE(0x117ff650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff650 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff651 mov ebp, esp */
  EBP = (ESP);
  /* 117ff653 call 0x11800250 */
  push32(0x117ff658u); f_11800250();
  /* 117ff658 movsx eax, byte ptr [0x11822724] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11822724))));
  /* 117ff65f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ff661 je 0x117ff668 */
  if (C.zf) goto L_117ff668;
  /* 117ff663 call 0x11800010 */
  push32(0x117ff668u); f_11800010();
L_117ff668:;
  /* 117ff668 pop ebp */
  EBP = (pop32());
  /* 117ff669 ret  */
  ESPCHK(0x117ff650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x117ff670 (61 bytes, 20 insns) */
void f_117ff670(void) {
  FTRACE(0x117ff670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff670 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff671 mov ebp, esp */
  EBP = (ESP);
  /* 117ff673 cmp dword ptr [ebp + 8], 0x11821120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11821120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff67a jb 0x117ff69e */
  if (C.cf) goto L_117ff69e;
  /* 117ff67c cmp dword ptr [ebp + 8], 0x11821380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11821380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff683 ja 0x117ff69e */
  if ((!C.cf&&!C.zf)) goto L_117ff69e;
  /* 117ff685 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff688 sub eax, 0x11821120 */
  { uint32_t _a=(EAX),_b=(0x11821120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff68d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff690 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff693 push eax */
  push32((uint32_t)(EAX));
  /* 117ff694 call 0x117fa260 */
  push32(0x117ff699u); f_117fa260();
  /* 117ff699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff69c jmp 0x117ff6ab */
  goto L_117ff6ab;
L_117ff69e:;
  /* 117ff69e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff6a1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff6a4 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff6a5 call dword ptr [0x11825360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825360))), 0x117ff6abu);
L_117ff6ab:;
  /* 117ff6ab pop ebp */
  EBP = (pop32());
  /* 117ff6ac ret  */
  ESPCHK(0x117ff670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6b0 @ 0x117ff6b0 (41 bytes, 16 insns) */
void f_117ff6b0(void) {
  FTRACE(0x117ff6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff6b1 mov ebp, esp */
  EBP = (ESP);
  /* 117ff6b3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff6b7 jge 0x117ff6ca */
  if ((C.sf==C.of)) goto L_117ff6ca;
  /* 117ff6b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff6bc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff6bf push eax */
  push32((uint32_t)(EAX));
  /* 117ff6c0 call 0x117fa260 */
  push32(0x117ff6c5u); f_117fa260();
  /* 117ff6c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff6c8 jmp 0x117ff6d7 */
  goto L_117ff6d7;
L_117ff6ca:;
  /* 117ff6ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff6cd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff6d0 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff6d1 call dword ptr [0x11825360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825360))), 0x117ff6d7u);
L_117ff6d7:;
  /* 117ff6d7 pop ebp */
  EBP = (pop32());
  /* 117ff6d8 ret  */
  ESPCHK(0x117ff6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6e0 @ 0x117ff6e0 (61 bytes, 20 insns) */
void f_117ff6e0(void) {
  FTRACE(0x117ff6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff6e1 mov ebp, esp */
  EBP = (ESP);
  /* 117ff6e3 cmp dword ptr [ebp + 8], 0x11821120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11821120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff6ea jb 0x117ff70e */
  if (C.cf) goto L_117ff70e;
  /* 117ff6ec cmp dword ptr [ebp + 8], 0x11821380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11821380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff6f3 ja 0x117ff70e */
  if ((!C.cf&&!C.zf)) goto L_117ff70e;
  /* 117ff6f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff6f8 sub eax, 0x11821120 */
  { uint32_t _a=(EAX),_b=(0x11821120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff6fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ff700 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff703 push eax */
  push32((uint32_t)(EAX));
  /* 117ff704 call 0x117fa300 */
  push32(0x117ff709u); f_117fa300();
  /* 117ff709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff70c jmp 0x117ff71b */
  goto L_117ff71b;
L_117ff70e:;
  /* 117ff70e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff711 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff714 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff715 call dword ptr [0x1182535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182535c))), 0x117ff71bu);
L_117ff71b:;
  /* 117ff71b pop ebp */
  EBP = (pop32());
  /* 117ff71c ret  */
  ESPCHK(0x117ff6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f720 @ 0x117ff720 (41 bytes, 16 insns) */
void f_117ff720(void) {
  FTRACE(0x117ff720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff720 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff721 mov ebp, esp */
  EBP = (ESP);
  /* 117ff723 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff727 jge 0x117ff73a */
  if ((C.sf==C.of)) goto L_117ff73a;
  /* 117ff729 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff72c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff72f push eax */
  push32((uint32_t)(EAX));
  /* 117ff730 call 0x117fa300 */
  push32(0x117ff735u); f_117fa300();
  /* 117ff735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff738 jmp 0x117ff747 */
  goto L_117ff747;
L_117ff73a:;
  /* 117ff73a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff73d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff740 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff741 call dword ptr [0x1182535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182535c))), 0x117ff747u);
L_117ff747:;
  /* 117ff747 pop ebp */
  EBP = (pop32());
  /* 117ff748 ret  */
  ESPCHK(0x117ff720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f750 @ 0x117ff750 (119 bytes, 34 insns) */
void f_117ff750(void) {
  FTRACE(0x117ff750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff750 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff751 mov ebp, esp */
  EBP = (ESP);
  /* 117ff753 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff756 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 117ff75b call dword ptr [0x118253c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253c8))), 0x117ff761u);
  /* 117ff761 cmp dword ptr [0x11822a6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff768 je 0x117ff788 */
  if (C.zf) goto L_117ff788;
  /* 117ff76a push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 117ff76f call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117ff775u);
  /* 117ff775 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117ff777 call 0x117fa260 */
  push32(0x117ff77cu); f_117fa260();
  /* 117ff77c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff77f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 117ff786 jmp 0x117ff78f */
  goto L_117ff78f;
L_117ff788:;
  /* 117ff788 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_117ff78f:;
  /* 117ff78f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 117ff793 push eax */
  push32((uint32_t)(EAX));
  /* 117ff794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff797 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff798 call 0x117ff7d0 */
  push32(0x117ff79du); f_117ff7d0();
  /* 117ff79d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff7a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117ff7a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff7a7 je 0x117ff7b5 */
  if (C.zf) goto L_117ff7b5;
  /* 117ff7a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 117ff7ab call 0x117fa300 */
  push32(0x117ff7b0u); f_117fa300();
  /* 117ff7b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff7b3 jmp 0x117ff7c0 */
  goto L_117ff7c0;
L_117ff7b5:;
  /* 117ff7b5 push 0x11822a7c */
  push32((uint32_t)(0x11822a7cu));
  /* 117ff7ba call dword ptr [0x118253b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253b8))), 0x117ff7c0u);
L_117ff7c0:;
  /* 117ff7c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ff7c3 mov esp, ebp */
  ESP = (EBP);
  /* 117ff7c5 pop ebp */
  EBP = (pop32());
  /* 117ff7c6 ret  */
  ESPCHK(0x117ff750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7d0 @ 0x117ff7d0 (160 bytes, 50 insns) */
void f_117ff7d0(void) {
  FTRACE(0x117ff7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff7d1 mov ebp, esp */
  EBP = (ESP);
  /* 117ff7d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ff7d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff7da jne 0x117ff7e3 */
  if (!C.zf) goto L_117ff7e3;
  /* 117ff7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ff7de jmp 0x117ff86c */
  goto L_117ff86c;
L_117ff7e3:;
  /* 117ff7e3 cmp dword ptr [0x118228f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff7ea jne 0x117ff81a */
  if (!C.zf) goto L_117ff81a;
  /* 117ff7ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ff7ef and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff7f4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff7f9 jle 0x117ff80b */
  if ((C.zf||C.sf!=C.of)) goto L_117ff80b;
  /* 117ff7fb call 0x117fe730 */
  push32(0x117ff800u); f_117fe730();
  /* 117ff800 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 117ff806 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff809 jmp 0x117ff86c */
  goto L_117ff86c;
L_117ff80b:;
  /* 117ff80b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff80e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 117ff811 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 117ff813 mov eax, 1 */
  EAX = (0x1u);
  /* 117ff818 jmp 0x117ff86c */
  goto L_117ff86c;
L_117ff81a:;
  /* 117ff81a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117ff821 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 117ff824 push eax */
  push32((uint32_t)(EAX));
  /* 117ff825 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff827 mov ecx, dword ptr [0x11820ea4] */
  ECX = (r32((uint32_t)(0x11820ea4)));
  /* 117ff82d push ecx */
  push32((uint32_t)(ECX));
  /* 117ff82e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff831 push edx */
  push32((uint32_t)(EDX));
  /* 117ff832 push 1 */
  push32((uint32_t)(0x1u));
  /* 117ff834 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 117ff837 push eax */
  push32((uint32_t)(EAX));
  /* 117ff838 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 117ff83d mov ecx, dword ptr [0x11822900] */
  ECX = (r32((uint32_t)(0x11822900)));
  /* 117ff843 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff844 call dword ptr [0x11825384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825384))), 0x117ff84au);
  /* 117ff84a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ff84d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff851 je 0x117ff859 */
  if (C.zf) goto L_117ff859;
  /* 117ff853 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff857 je 0x117ff869 */
  if (C.zf) goto L_117ff869;
L_117ff859:;
  /* 117ff859 call 0x117fe730 */
  push32(0x117ff85eu); f_117fe730();
  /* 117ff85e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 117ff864 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ff867 jmp 0x117ff86c */
  goto L_117ff86c;
L_117ff869:;
  /* 117ff869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_117ff86c:;
  /* 117ff86c mov esp, ebp */
  ESP = (EBP);
  /* 117ff86e pop ebp */
  EBP = (pop32());
  /* 117ff86f ret  */
  ESPCHK(0x117ff7d0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x117ff870 (32 bytes, 18 insns) */
void f_117ff870(void) {
  FTRACE(0x117ff870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff870 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff871 mov ebp, esp */
  EBP = (ESP);
  /* 117ff873 push ebx */
  push32((uint32_t)(EBX));
  /* 117ff874 push esi */
  push32((uint32_t)(ESI));
  /* 117ff875 push edi */
  push32((uint32_t)(EDI));
  /* 117ff876 push ebp */
  push32((uint32_t)(EBP));
  /* 117ff877 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff879 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ff87b push 0x117ff888 */
  push32((uint32_t)(0x117ff888u));
  /* 117ff880 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 117ff883 call 0x11806fbc */
  push32(0x117ff888u); f_11806fbc();
  /* 117ff888 pop ebp */
  EBP = (pop32());
  /* 117ff889 pop edi */
  EDI = (pop32());
  /* 117ff88a pop esi */
  ESI = (pop32());
  /* 117ff88b pop ebx */
  EBX = (pop32());
  /* 117ff88c mov esp, ebp */
  ESP = (EBP);
  /* 117ff88e pop ebp */
  EBP = (pop32());
  /* 117ff88f ret  */
  ESPCHK(0x117ff870u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x117ff8b2 (104 bytes, 33 insns) */
void f_117ff8b2(void) {
  FTRACE(0x117ff8b2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff8b2 push ebx */
  push32((uint32_t)(EBX));
  /* 117ff8b3 push esi */
  push32((uint32_t)(ESI));
  /* 117ff8b4 push edi */
  push32((uint32_t)(EDI));
  /* 117ff8b5 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 117ff8b9 push eax */
  push32((uint32_t)(EAX));
  /* 117ff8ba push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 117ff8bc push 0x117ff890 */
  push32((uint32_t)(0x117ff890u));
  /* 117ff8c1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 117ff8c8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_117ff8cf:;
  /* 117ff8cf mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 117ff8d3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 117ff8d6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 117ff8d9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff8dc je 0x117ff90c */
  if (C.zf) goto L_117ff90c;
  /* 117ff8de cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff8e2 je 0x117ff90c */
  if (C.zf) goto L_117ff90c;
  /* 117ff8e4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 117ff8e7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 117ff8ea mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 117ff8ee mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 117ff8f1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ff8f6 jne 0x117ff90a */
  if (!C.zf) goto L_117ff90a;
  /* 117ff8f8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 117ff8fd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 117ff901 call 0x117ff946 */
  push32(0x117ff906u); f_117ff946();
  /* 117ff906 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x117ff90au);
L_117ff90a:;
  /* 117ff90a jmp 0x117ff8cf */
  goto L_117ff8cf;
L_117ff90c:;
  /* 117ff90c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 117ff913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ff916 pop edi */
  EDI = (pop32());
  /* 117ff917 pop esi */
  ESI = (pop32());
  /* 117ff918 pop ebx */
  EBX = (pop32());
  /* 117ff919 ret  */
  ESPCHK(0x117ff8b2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f946 @ 0x117ff946 (24 bytes, 10 insns) */
void f_117ff946(void) {
  FTRACE(0x117ff946u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ff946 push ebx */
  push32((uint32_t)(EBX));
  /* 117ff947 push ecx */
  push32((uint32_t)(ECX));
  /* 117ff948 mov ebx, 0x118213b8 */
  EBX = (0x118213b8u);
  /* 117ff94d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ff950 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 117ff953 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 117ff956 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 117ff959 pop ecx */
  ECX = (pop32());
  /* 117ff95a pop ebx */
  EBX = (pop32());
  /* 117ff95b ret 4 */
  ESPCHK(0x117ff946u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa25 @ 0x117ffa25 (27 bytes, 11 insns) */
void f_117ffa25(void) {
  FTRACE(0x117ffa25u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffa25 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffa26 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 117ffa2a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 117ffa2c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 117ffa2f push eax */
  push32((uint32_t)(EAX));
  /* 117ffa30 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 117ffa33 push eax */
  push32((uint32_t)(EAX));
  /* 117ffa34 call 0x117ff8b2 */
  push32(0x117ffa39u); f_117ff8b2();
  /* 117ffa39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffa3c pop ebp */
  EBP = (pop32());
  /* 117ffa3d ret 4 */
  ESPCHK(0x117ffa25u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fa40 @ 0x117ffa40 (482 bytes, 138 insns) */
void f_117ffa40(void) {
  FTRACE(0x117ffa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffa40 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffa41 mov ebp, esp */
  EBP = (ESP);
  /* 117ffa43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ffa46 push esi */
  push32((uint32_t)(ESI));
  /* 117ffa47 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 117ffa4e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117ffa50 call 0x117fa260 */
  push32(0x117ffa55u); f_117fa260();
  /* 117ffa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffa58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 117ffa5f jmp 0x117ffa6a */
  goto L_117ffa6a;
L_117ffa61:;
  /* 117ffa61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffa64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffa67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117ffa6a:;
  /* 117ffa6a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffa6e jge 0x117ffc10 */
  if ((C.sf==C.of)) goto L_117ffc10;
  /* 117ffa74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffa77 cmp dword ptr [ecx*4 + 0x118240c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x118240c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffa7f je 0x117ffb76 */
  if (C.zf) goto L_117ffb76;
  /* 117ffa85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffa88 mov eax, dword ptr [edx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ffa8f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ffa92 jmp 0x117ffa9d */
  goto L_117ffa9d;
L_117ffa94:;
  /* 117ffa94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffa97 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffa9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_117ffa9d:;
  /* 117ffa9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffaa0 mov eax, dword ptr [edx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ffaa7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffaac cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffaaf jae 0x117ffb66 */
  if (!C.cf) goto L_117ffb66;
  /* 117ffab5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffab8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117ffabc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117ffabf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117ffac1 jne 0x117ffb61 */
  if (!C.zf) goto L_117ffb61;
  /* 117ffac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffaca cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fface jne 0x117ffb09 */
  if (!C.zf) goto L_117ffb09;
  /* 117ffad0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117ffad2 call 0x117fa260 */
  push32(0x117ffad7u); f_117fa260();
  /* 117ffad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffadd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffae1 jne 0x117ffaff */
  if (!C.zf) goto L_117ffaff;
  /* 117ffae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffae6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffae9 push edx */
  push32((uint32_t)(EDX));
  /* 117ffaea call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117ffaf0u);
  /* 117ffaf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffaf3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117ffaf6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffaf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffafc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117ffaff:;
  /* 117ffaff push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117ffb01 call 0x117fa300 */
  push32(0x117ffb06u); f_117fa300();
  /* 117ffb06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117ffb09:;
  /* 117ffb09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb0c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffb0f push eax */
  push32((uint32_t)(EAX));
  /* 117ffb10 call dword ptr [0x11825360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825360))), 0x117ffb16u);
  /* 117ffb16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb19 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117ffb1d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 117ffb20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117ffb22 je 0x117ffb36 */
  if (C.zf) goto L_117ffb36;
  /* 117ffb24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffb2a push eax */
  push32((uint32_t)(EAX));
  /* 117ffb2b call dword ptr [0x1182535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182535c))), 0x117ffb31u);
  /* 117ffb31 jmp 0x117ffa94 */
  goto L_117ffa94;
L_117ffb36:;
  /* 117ffb36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb39 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117ffb3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffb42 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ffb45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffb48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb4b sub eax, dword ptr [edx*4 + 0x118240c0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x118240c0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ffb52 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 117ffb53 mov esi, 0x24 */
  ESI = (0x24u);
  /* 117ffb58 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 117ffb5a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffb5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117ffb5f jmp 0x117ffb66 */
  goto L_117ffb66;
L_117ffb61:;
  /* 117ffb61 jmp 0x117ffa94 */
  goto L_117ffa94;
L_117ffb66:;
  /* 117ffb66 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffb6a je 0x117ffb71 */
  if (C.zf) goto L_117ffb71;
  /* 117ffb6c jmp 0x117ffc10 */
  goto L_117ffc10;
L_117ffb71:;
  /* 117ffb71 jmp 0x117ffc0b */
  goto L_117ffc0b;
L_117ffb76:;
  /* 117ffb76 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 117ffb78 push 0x1181e6e4 */
  push32((uint32_t)(0x1181e6e4u));
  /* 117ffb7d push 2 */
  push32((uint32_t)(0x2u));
  /* 117ffb7f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 117ffb84 call 0x117f6860 */
  push32(0x117ffb89u); f_117f6860();
  /* 117ffb89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffb8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ffb8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffb93 je 0x117ffc09 */
  if (C.zf) goto L_117ffc09;
  /* 117ffb95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffb9b mov dword ptr [eax*4 + 0x118240c0], ecx */
  w32((uint32_t)(EAX*4 + 0x118240c0), (ECX));
  /* 117ffba2 mov edx, dword ptr [0x118241fc] */
  EDX = (r32((uint32_t)(0x118241fc)));
  /* 117ffba8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffbab mov dword ptr [0x118241fc], edx */
  w32((uint32_t)(0x118241fc), (EDX));
  /* 117ffbb1 jmp 0x117ffbbc */
  goto L_117ffbbc;
L_117ffbb3:;
  /* 117ffbb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffbb6 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffbb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117ffbbc:;
  /* 117ffbbc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffbbf mov edx, dword ptr [ecx*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ffbc6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffbcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffbcf jae 0x117ffbf4 */
  if (!C.cf) goto L_117ffbf4;
  /* 117ffbd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffbd4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 117ffbd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffbdb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 117ffbe1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffbe4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 117ffbe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117ffbeb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 117ffbf2 jmp 0x117ffbb3 */
  goto L_117ffbb3;
L_117ffbf4:;
  /* 117ffbf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117ffbf7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ffbfa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 117ffbfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ffc00 push edx */
  push32((uint32_t)(EDX));
  /* 117ffc01 call 0x117fff50 */
  push32(0x117ffc06u); f_117fff50();
  /* 117ffc06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117ffc09:;
  /* 117ffc09 jmp 0x117ffc10 */
  goto L_117ffc10;
L_117ffc0b:;
  /* 117ffc0b jmp 0x117ffa61 */
  goto L_117ffa61;
L_117ffc10:;
  /* 117ffc10 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 117ffc12 call 0x117fa300 */
  push32(0x117ffc17u); f_117fa300();
  /* 117ffc17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffc1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117ffc1d pop esi */
  ESI = (pop32());
  /* 117ffc1e mov esp, ebp */
  ESP = (EBP);
  /* 117ffc20 pop ebp */
  EBP = (pop32());
  /* 117ffc21 ret  */
  ESPCHK(0x117ffa40u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x117ffc30 (183 bytes, 57 insns) */
void f_117ffc30(void) {
  FTRACE(0x117ffc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffc30 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffc31 mov ebp, esp */
  EBP = (ESP);
  /* 117ffc33 push ecx */
  push32((uint32_t)(ECX));
  /* 117ffc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffc37 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc3d jae 0x117ffcca */
  if (!C.cf) goto L_117ffcca;
  /* 117ffc43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffc46 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ffc49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffc4c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ffc4f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffc52 mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ffc59 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc5d jne 0x117ffcca */
  if (!C.zf) goto L_117ffcca;
  /* 117ffc5f cmp dword ptr [0x118226e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc66 jne 0x117ffcaa */
  if (!C.zf) goto L_117ffcaa;
  /* 117ffc68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffc6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117ffc6e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc72 je 0x117ffc82 */
  if (C.zf) goto L_117ffc82;
  /* 117ffc74 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc78 je 0x117ffc90 */
  if (C.zf) goto L_117ffc90;
  /* 117ffc7a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffc7e je 0x117ffc9e */
  if (C.zf) goto L_117ffc9e;
  /* 117ffc80 jmp 0x117ffcaa */
  goto L_117ffcaa;
L_117ffc82:;
  /* 117ffc82 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffc85 push edx */
  push32((uint32_t)(EDX));
  /* 117ffc86 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117ffc88 call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffc8eu);
  /* 117ffc8e jmp 0x117ffcaa */
  goto L_117ffcaa;
L_117ffc90:;
  /* 117ffc90 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffc93 push eax */
  push32((uint32_t)(EAX));
  /* 117ffc94 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 117ffc96 call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffc9cu);
  /* 117ffc9c jmp 0x117ffcaa */
  goto L_117ffcaa;
L_117ffc9e:;
  /* 117ffc9e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffca1 push ecx */
  push32((uint32_t)(ECX));
  /* 117ffca2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117ffca4 call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffcaau);
L_117ffcaa:;
  /* 117ffcaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffcad sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117ffcb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffcb3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117ffcb6 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffcb9 mov ecx, dword ptr [edx*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ffcc0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffcc3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 117ffcc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ffcc8 jmp 0x117ffce3 */
  goto L_117ffce3;
L_117ffcca:;
  /* 117ffcca call 0x117fe730 */
  push32(0x117ffccfu); f_117fe730();
  /* 117ffccf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ffcd5 call 0x117fe740 */
  push32(0x117ffcdau); f_117fe740();
  /* 117ffcda mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ffce0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117ffce3:;
  /* 117ffce3 mov esp, ebp */
  ESP = (EBP);
  /* 117ffce5 pop ebp */
  EBP = (pop32());
  /* 117ffce6 ret  */
  ESPCHK(0x117ffc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcf0 @ 0x117ffcf0 (216 bytes, 63 insns) */
void f_117ffcf0(void) {
  FTRACE(0x117ffcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffcf1 mov ebp, esp */
  EBP = (ESP);
  /* 117ffcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 117ffcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffcf7 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffcfd jae 0x117ffdab */
  if (!C.cf) goto L_117ffdab;
  /* 117ffd03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ffd09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ffd0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffd12 mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ffd19 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117ffd1e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117ffd21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117ffd23 je 0x117ffdab */
  if (C.zf) goto L_117ffdab;
  /* 117ffd29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd2c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117ffd2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd32 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117ffd35 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffd38 mov ecx, dword ptr [edx*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ffd3f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffd43 je 0x117ffdab */
  if (C.zf) goto L_117ffdab;
  /* 117ffd45 cmp dword ptr [0x118226e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x118226e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffd4c jne 0x117ffd8a */
  if (!C.zf) goto L_117ffd8a;
  /* 117ffd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd51 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117ffd54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffd58 je 0x117ffd68 */
  if (C.zf) goto L_117ffd68;
  /* 117ffd5a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffd5e je 0x117ffd74 */
  if (C.zf) goto L_117ffd74;
  /* 117ffd60 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffd64 je 0x117ffd80 */
  if (C.zf) goto L_117ffd80;
  /* 117ffd66 jmp 0x117ffd8a */
  goto L_117ffd8a;
L_117ffd68:;
  /* 117ffd68 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ffd6a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 117ffd6c call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffd72u);
  /* 117ffd72 jmp 0x117ffd8a */
  goto L_117ffd8a;
L_117ffd74:;
  /* 117ffd74 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ffd76 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 117ffd78 call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffd7eu);
  /* 117ffd7e jmp 0x117ffd8a */
  goto L_117ffd8a;
L_117ffd80:;
  /* 117ffd80 push 0 */
  push32((uint32_t)(0x0u));
  /* 117ffd82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 117ffd84 call dword ptr [0x1182531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182531c))), 0x117ffd8au);
L_117ffd8a:;
  /* 117ffd8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd8d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117ffd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffd93 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117ffd96 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffd99 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ffda0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 117ffda7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117ffda9 jmp 0x117ffdc4 */
  goto L_117ffdc4;
L_117ffdab:;
  /* 117ffdab call 0x117fe730 */
  push32(0x117ffdb0u); f_117fe730();
  /* 117ffdb0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ffdb6 call 0x117fe740 */
  push32(0x117ffdbbu); f_117fe740();
  /* 117ffdbb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ffdc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117ffdc4:;
  /* 117ffdc4 mov esp, ebp */
  ESP = (EBP);
  /* 117ffdc6 pop ebp */
  EBP = (pop32());
  /* 117ffdc7 ret  */
  ESPCHK(0x117ffcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdd0 @ 0x117ffdd0 (102 bytes, 30 insns) */
void f_117ffdd0(void) {
  FTRACE(0x117ffdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffdd1 mov ebp, esp */
  EBP = (ESP);
  /* 117ffdd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffdd6 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffddc jae 0x117ffe1b */
  if (!C.cf) goto L_117ffe1b;
  /* 117ffdde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffde1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 117ffde4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffde7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 117ffdea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffded mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 117ffdf4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 117ffdf9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117ffdfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117ffdfe je 0x117ffe1b */
  if (C.zf) goto L_117ffe1b;
  /* 117ffe00 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffe03 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 117ffe06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffe09 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 117ffe0c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffe0f mov ecx, dword ptr [edx*4 + 0x118240c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x118240c0)));
  /* 117ffe16 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 117ffe19 jmp 0x117ffe34 */
  goto L_117ffe34;
L_117ffe1b:;
  /* 117ffe1b call 0x117fe730 */
  push32(0x117ffe20u); f_117fe730();
  /* 117ffe20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 117ffe26 call 0x117fe740 */
  push32(0x117ffe2bu); f_117fe740();
  /* 117ffe2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ffe31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_117ffe34:;
  /* 117ffe34 pop ebp */
  EBP = (pop32());
  /* 117ffe35 ret  */
  ESPCHK(0x117ffdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe40 @ 0x117ffe40 (260 bytes, 83 insns) */
void f_117ffe40(void) {
  FTRACE(0x117ffe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117ffe40 push ebp */
  push32((uint32_t)(EBP));
  /* 117ffe41 mov ebp, esp */
  EBP = (ESP);
  /* 117ffe43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117ffe46 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 117ffe4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffe4d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 117ffe50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117ffe52 je 0x117ffe5d */
  if (C.zf) goto L_117ffe5d;
  /* 117ffe54 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 117ffe57 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 117ffe5a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_117ffe5d:;
  /* 117ffe5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffe60 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 117ffe66 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117ffe68 je 0x117ffe72 */
  if (C.zf) goto L_117ffe72;
  /* 117ffe6a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 117ffe6d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 117ffe6f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_117ffe72:;
  /* 117ffe72 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117ffe75 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 117ffe7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117ffe7d je 0x117ffe88 */
  if (C.zf) goto L_117ffe88;
  /* 117ffe7f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117ffe82 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 117ffe85 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_117ffe88:;
  /* 117ffe88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffe8b push eax */
  push32((uint32_t)(EAX));
  /* 117ffe8c call dword ptr [0x118253cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253cc))), 0x117ffe92u);
  /* 117ffe92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117ffe95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffe99 jne 0x117ffeb2 */
  if (!C.zf) goto L_117ffeb2;
  /* 117ffe9b call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x117ffea1u);
  /* 117ffea1 push eax */
  push32((uint32_t)(EAX));
  /* 117ffea2 call 0x117fe690 */
  push32(0x117ffea7u); f_117fe690();
  /* 117ffea7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117ffeaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ffead jmp 0x117fff40 */
  goto L_117fff40;
L_117ffeb2:;
  /* 117ffeb2 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffeb6 jne 0x117ffec3 */
  if (!C.zf) goto L_117ffec3;
  /* 117ffeb8 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 117ffebb or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 117ffebe mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 117ffec1 jmp 0x117ffed2 */
  goto L_117ffed2;
L_117ffec3:;
  /* 117ffec3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffec7 jne 0x117ffed2 */
  if (!C.zf) goto L_117ffed2;
  /* 117ffec9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117ffecc or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 117ffecf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_117ffed2:;
  /* 117ffed2 call 0x117ffa40 */
  push32(0x117ffed7u); f_117ffa40();
  /* 117ffed7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117ffeda cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117ffede jne 0x117ffefb */
  if (!C.zf) goto L_117ffefb;
  /* 117ffee0 call 0x117fe730 */
  push32(0x117ffee5u); f_117fe730();
  /* 117ffee5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 117ffeeb call 0x117fe740 */
  push32(0x117ffef0u); f_117fe740();
  /* 117ffef0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 117ffef6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117ffef9 jmp 0x117fff40 */
  goto L_117fff40;
L_117ffefb:;
  /* 117ffefb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117ffefe push eax */
  push32((uint32_t)(EAX));
  /* 117ffeff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fff02 push ecx */
  push32((uint32_t)(ECX));
  /* 117fff03 call 0x117ffc30 */
  push32(0x117fff08u); f_117ffc30();
  /* 117fff08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fff0b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 117fff0e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 117fff11 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 117fff14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fff17 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117fff1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fff1d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117fff20 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fff23 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117fff2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 117fff2d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 117fff31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117fff34 push ecx */
  push32((uint32_t)(ECX));
  /* 117fff35 call 0x117fffe0 */
  push32(0x117fff3au); f_117fffe0();
  /* 117fff3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fff3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_117fff40:;
  /* 117fff40 mov esp, ebp */
  ESP = (EBP);
  /* 117fff42 pop ebp */
  EBP = (pop32());
  /* 117fff43 ret  */
  ESPCHK(0x117ffe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x117fff50 (134 bytes, 44 insns) */
void f_117fff50(void) {
  FTRACE(0x117fff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fff50 push ebp */
  push32((uint32_t)(EBP));
  /* 117fff51 mov ebp, esp */
  EBP = (ESP);
  /* 117fff53 push ecx */
  push32((uint32_t)(ECX));
  /* 117fff54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fff57 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117fff5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fff5d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117fff60 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fff63 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117fff6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fff6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117fff6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fff72 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fff76 jne 0x117fffb1 */
  if (!C.zf) goto L_117fffb1;
  /* 117fff78 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117fff7a call 0x117fa260 */
  push32(0x117fff7fu); f_117fa260();
  /* 117fff7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117fff82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fff85 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117fff89 jne 0x117fffa7 */
  if (!C.zf) goto L_117fffa7;
  /* 117fff8b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fff8e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fff91 push edx */
  push32((uint32_t)(EDX));
  /* 117fff92 call dword ptr [0x11825364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825364))), 0x117fff98u);
  /* 117fff98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fff9b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117fff9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117fffa1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117fffa4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_117fffa7:;
  /* 117fffa7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 117fffa9 call 0x117fa300 */
  push32(0x117fffaeu); f_117fa300();
  /* 117fffae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117fffb1:;
  /* 117fffb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fffb4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117fffb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fffba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117fffbd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117fffc0 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117fffc7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 117fffcb push eax */
  push32((uint32_t)(EAX));
  /* 117fffcc call dword ptr [0x11825360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825360))), 0x117fffd2u);
  /* 117fffd2 mov esp, ebp */
  ESP = (EBP);
  /* 117fffd4 pop ebp */
  EBP = (pop32());
  /* 117fffd5 ret  */
  ESPCHK(0x117fff50u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x117fffe0 (38 bytes, 13 insns) */
void f_117fffe0(void) {
  FTRACE(0x117fffe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117fffe0 push ebp */
  push32((uint32_t)(EBP));
  /* 117fffe1 mov ebp, esp */
  EBP = (ESP);
  /* 117fffe3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fffe6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 117fffe9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117fffec and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 117fffef imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117ffff2 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 117ffff9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 117ffffd push eax */
  push32((uint32_t)(EAX));
  /* 117ffffe call dword ptr [0x1182535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182535c))), 0x11800004u);
  /* 11800004 pop ebp */
  EBP = (pop32());
  /* 11800005 ret  */
  ESPCHK(0x117fffe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010010 @ 0x11800010 (218 bytes, 63 insns) */
void f_11800010(void) {
  FTRACE(0x11800010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800010 push ebp */
  push32((uint32_t)(EBP));
  /* 11800011 mov ebp, esp */
  EBP = (ESP);
  /* 11800013 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1180001d push 2 */
  push32((uint32_t)(0x2u));
  /* 1180001f call 0x117fa260 */
  push32(0x11800024u); f_117fa260();
  /* 11800024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800027 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1180002e jmp 0x11800039 */
  goto L_11800039;
L_11800030:;
  /* 11800030 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800033 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800036 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11800039:;
  /* 11800039 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180003c cmp ecx, dword ptr [0x11823dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11823dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800042 jge 0x118000d9 */
  if ((C.sf==C.of)) goto L_118000d9;
  /* 11800048 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180004b mov eax, dword ptr [0x11822a80] */
  EAX = (r32((uint32_t)(0x11822a80)));
  /* 11800050 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800054 je 0x118000d4 */
  if (C.zf) goto L_118000d4;
  /* 11800056 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800059 mov edx, dword ptr [0x11822a80] */
  EDX = (r32((uint32_t)(0x11822a80)));
  /* 1180005f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11800062 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11800065 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1180006b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180006d je 0x11800091 */
  if (C.zf) goto L_11800091;
  /* 1180006f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800072 mov eax, dword ptr [0x11822a80] */
  EAX = (r32((uint32_t)(0x11822a80)));
  /* 11800077 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1180007a push ecx */
  push32((uint32_t)(ECX));
  /* 1180007b call 0x11800e00 */
  push32(0x11800080u); f_11800e00();
  /* 11800080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800083 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800086 je 0x11800091 */
  if (C.zf) goto L_11800091;
  /* 11800088 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180008b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180008e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11800091:;
  /* 11800091 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800095 jl 0x118000d4 */
  if ((C.sf!=C.of)) goto L_118000d4;
  /* 11800097 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180009a mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 118000a0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118000a3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118000a6 push edx */
  push32((uint32_t)(EDX));
  /* 118000a7 call dword ptr [0x1182539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182539c))), 0x118000adu);
  /* 118000ad push 2 */
  push32((uint32_t)(0x2u));
  /* 118000af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118000b2 mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 118000b8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118000bb push edx */
  push32((uint32_t)(EDX));
  /* 118000bc call 0x117f72f0 */
  push32(0x118000c1u); f_117f72f0();
  /* 118000c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118000c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118000c7 mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 118000cd mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_118000d4:;
  /* 118000d4 jmp 0x11800030 */
  goto L_11800030;
L_118000d9:;
  /* 118000d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118000db call 0x117fa300 */
  push32(0x118000e0u); f_117fa300();
  /* 118000e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118000e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118000e6 mov esp, ebp */
  ESP = (EBP);
  /* 118000e8 pop ebp */
  EBP = (pop32());
  /* 118000e9 ret  */
  ESPCHK(0x11800010u, _esp0);
  ESP += 4; return;
}

/* FUN_100100f0 @ 0x118000f0 (68 bytes, 26 insns) */
void f_118000f0(void) {
  FTRACE(0x118000f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118000f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118000f1 mov ebp, esp */
  EBP = (ESP);
  /* 118000f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118000f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118000f8 jne 0x11800106 */
  if (!C.zf) goto L_11800106;
  /* 118000fa push 0 */
  push32((uint32_t)(0x0u));
  /* 118000fc call 0x11800260 */
  push32(0x11800101u); f_11800260();
  /* 11800101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800104 jmp 0x11800130 */
  goto L_11800130;
L_11800106:;
  /* 11800106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800109 push eax */
  push32((uint32_t)(EAX));
  /* 1180010a call 0x117ff670 */
  push32(0x1180010fu); f_117ff670();
  /* 1180010f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800115 push ecx */
  push32((uint32_t)(ECX));
  /* 11800116 call 0x11800140 */
  push32(0x1180011bu); f_11800140();
  /* 1180011b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180011e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800121 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800124 push edx */
  push32((uint32_t)(EDX));
  /* 11800125 call 0x117ff6e0 */
  push32(0x1180012au); f_117ff6e0();
  /* 1180012a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180012d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11800130:;
  /* 11800130 mov esp, ebp */
  ESP = (EBP);
  /* 11800132 pop ebp */
  EBP = (pop32());
  /* 11800133 ret  */
  ESPCHK(0x118000f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010140 @ 0x11800140 (65 bytes, 26 insns) */
void f_11800140(void) {
  FTRACE(0x11800140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800140 push ebp */
  push32((uint32_t)(EBP));
  /* 11800141 mov ebp, esp */
  EBP = (ESP);
  /* 11800143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800146 push eax */
  push32((uint32_t)(EAX));
  /* 11800147 call 0x11800190 */
  push32(0x1180014cu); f_11800190();
  /* 1180014c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180014f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800151 je 0x11800158 */
  if (C.zf) goto L_11800158;
  /* 11800153 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11800156 jmp 0x1180017f */
  goto L_1180017f;
L_11800158:;
  /* 11800158 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180015b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1180015e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11800164 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11800166 je 0x1180017d */
  if (C.zf) goto L_1180017d;
  /* 11800168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180016b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1180016e push ecx */
  push32((uint32_t)(ECX));
  /* 1180016f call 0x11800f50 */
  push32(0x11800174u); f_11800f50();
  /* 11800174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800177 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11800179 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180017b jmp 0x1180017f */
  goto L_1180017f;
L_1180017d:;
  /* 1180017d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1180017f:;
  /* 1180017f pop ebp */
  EBP = (pop32());
  /* 11800180 ret  */
  ESPCHK(0x11800140u, _esp0);
  ESP += 4; return;
}

/* FUN_10010190 @ 0x11800190 (183 bytes, 62 insns) */
void f_11800190(void) {
  FTRACE(0x11800190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800190 push ebp */
  push32((uint32_t)(EBP));
  /* 11800191 mov ebp, esp */
  EBP = (ESP);
  /* 11800193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800196 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1180019d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118001a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118001a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001a6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118001a9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118001ac cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118001af jne 0x1180022b */
  if (!C.zf) goto L_1180022b;
  /* 118001b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001b4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118001b7 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 118001bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118001bf je 0x1180022b */
  if (C.zf) goto L_1180022b;
  /* 118001c1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001c7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 118001c9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118001cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118001cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118001d3 jle 0x1180022b */
  if ((C.zf||C.sf!=C.of)) goto L_1180022b;
  /* 118001d5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118001d8 push edx */
  push32((uint32_t)(EDX));
  /* 118001d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001dc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 118001df push ecx */
  push32((uint32_t)(ECX));
  /* 118001e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 118001e6 push eax */
  push32((uint32_t)(EAX));
  /* 118001e7 call 0x117ff100 */
  push32(0x118001ecu); f_117ff100();
  /* 118001ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118001ef cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118001f2 jne 0x11800215 */
  if (!C.zf) goto L_11800215;
  /* 118001f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118001f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118001fa and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11800200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11800202 je 0x11800213 */
  if (C.zf) goto L_11800213;
  /* 11800204 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800207 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1180020a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1180020d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800210 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11800213:;
  /* 11800213 jmp 0x1180022b */
  goto L_1180022b;
L_11800215:;
  /* 11800215 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800218 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1180021b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1180021e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800221 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11800224 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1180022b:;
  /* 1180022b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180022e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800231 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11800234 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11800236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800239 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11800240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800243 mov esp, ebp */
  ESP = (EBP);
  /* 11800245 pop ebp */
  EBP = (pop32());
  /* 11800246 ret  */
  ESPCHK(0x11800190u, _esp0);
  ESP += 4; return;
}

/* FUN_10010250 @ 0x11800250 (15 bytes, 7 insns) */
void f_11800250(void) {
  FTRACE(0x11800250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800250 push ebp */
  push32((uint32_t)(EBP));
  /* 11800251 mov ebp, esp */
  EBP = (ESP);
  /* 11800253 push 1 */
  push32((uint32_t)(0x1u));
  /* 11800255 call 0x11800260 */
  push32(0x1180025au); f_11800260();
  /* 1180025a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180025d pop ebp */
  EBP = (pop32());
  /* 1180025e ret  */
  ESPCHK(0x11800250u, _esp0);
  ESP += 4; return;
}

/* FUN_10010260 @ 0x11800260 (319 bytes, 94 insns) */
void f_11800260(void) {
  FTRACE(0x11800260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800260 push ebp */
  push32((uint32_t)(EBP));
  /* 11800261 mov ebp, esp */
  EBP = (ESP);
  /* 11800263 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800266 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1180026d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11800274 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800276 call 0x117fa260 */
  push32(0x1180027bu); f_117fa260();
  /* 1180027b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180027e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11800285 jmp 0x11800290 */
  goto L_11800290;
L_11800287:;
  /* 11800287 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180028a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180028d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11800290:;
  /* 11800290 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800293 cmp ecx, dword ptr [0x11823dc0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11823dc0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800299 jge 0x11800383 */
  if ((C.sf==C.of)) goto L_11800383;
  /* 1180029f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118002a2 mov eax, dword ptr [0x11822a80] */
  EAX = (r32((uint32_t)(0x11822a80)));
  /* 118002a7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118002ab je 0x1180037e */
  if (C.zf) goto L_1180037e;
  /* 118002b1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118002b4 mov edx, dword ptr [0x11822a80] */
  EDX = (r32((uint32_t)(0x11822a80)));
  /* 118002ba mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 118002bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118002c0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 118002c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118002c8 je 0x1180037e */
  if (C.zf) goto L_1180037e;
  /* 118002ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118002d1 mov eax, dword ptr [0x11822a80] */
  EAX = (r32((uint32_t)(0x11822a80)));
  /* 118002d6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118002d9 push ecx */
  push32((uint32_t)(ECX));
  /* 118002da mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118002dd push edx */
  push32((uint32_t)(EDX));
  /* 118002de call 0x117ff6b0 */
  push32(0x118002e3u); f_117ff6b0();
  /* 118002e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118002e6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118002e9 mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 118002ef mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118002f2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 118002f5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 118002fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118002fc je 0x11800365 */
  if (C.zf) goto L_11800365;
  /* 118002fe cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800302 jne 0x11800329 */
  if (!C.zf) goto L_11800329;
  /* 11800304 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800307 mov edx, dword ptr [0x11822a80] */
  EDX = (r32((uint32_t)(0x11822a80)));
  /* 1180030d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11800310 push eax */
  push32((uint32_t)(EAX));
  /* 11800311 call 0x11800140 */
  push32(0x11800316u); f_11800140();
  /* 11800316 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800319 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180031c je 0x11800327 */
  if (C.zf) goto L_11800327;
  /* 1180031e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800321 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800324 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11800327:;
  /* 11800327 jmp 0x11800365 */
  goto L_11800365;
L_11800329:;
  /* 11800329 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180032d jne 0x11800365 */
  if (!C.zf) goto L_11800365;
  /* 1180032f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800332 mov eax, dword ptr [0x11822a80] */
  EAX = (r32((uint32_t)(0x11822a80)));
  /* 11800337 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1180033a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1180033d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11800340 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11800342 je 0x11800365 */
  if (C.zf) goto L_11800365;
  /* 11800344 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800347 mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 1180034d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11800350 push edx */
  push32((uint32_t)(EDX));
  /* 11800351 call 0x11800140 */
  push32(0x11800356u); f_11800140();
  /* 11800356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800359 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180035c jne 0x11800365 */
  if (!C.zf) goto L_11800365;
  /* 1180035e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_11800365:;
  /* 11800365 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800368 mov ecx, dword ptr [0x11822a80] */
  ECX = (r32((uint32_t)(0x11822a80)));
  /* 1180036e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11800371 push edx */
  push32((uint32_t)(EDX));
  /* 11800372 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800375 push eax */
  push32((uint32_t)(EAX));
  /* 11800376 call 0x117ff720 */
  push32(0x1180037bu); f_117ff720();
  /* 1180037b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1180037e:;
  /* 1180037e jmp 0x11800287 */
  goto L_11800287;
L_11800383:;
  /* 11800383 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800385 call 0x117fa300 */
  push32(0x1180038au); f_117fa300();
  /* 1180038a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180038d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800391 jne 0x11800398 */
  if (!C.zf) goto L_11800398;
  /* 11800393 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800396 jmp 0x1180039b */
  goto L_1180039b;
L_11800398:;
  /* 11800398 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1180039b:;
  /* 1180039b mov esp, ebp */
  ESP = (EBP);
  /* 1180039d pop ebp */
  EBP = (pop32());
  /* 1180039e ret  */
  ESPCHK(0x11800260u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x118003a0 (15 bytes, 7 insns) */
void f_118003a0(void) {
  FTRACE(0x118003a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118003a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118003a1 mov ebp, esp */
  EBP = (ESP);
  /* 118003a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118003a5 call 0x117f57d0 */
  push32(0x118003aau); f_117f57d0();
  /* 118003aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118003ad pop ebp */
  EBP = (pop32());
  /* 118003ae ret  */
  ESPCHK(0x118003a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100103b0 @ 0x118003b0 (1007 bytes, 269 insns) */
void f_118003b0(void) {
  FTRACE(0x118003b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118003b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118003b1 mov ebp, esp */
  EBP = (ESP);
  /* 118003b3 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118003b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118003bd jl 0x118003c5 */
  if ((C.sf!=C.of)) goto L_118003c5;
  /* 118003bf cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118003c3 jle 0x118003cc */
  if ((C.zf||C.sf!=C.of)) goto L_118003cc;
L_118003c5:;
  /* 118003c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118003c7 jmp 0x1180079b */
  goto L_1180079b;
L_118003cc:;
  /* 118003cc push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118003ce call 0x117fa260 */
  push32(0x118003d3u); f_117fa260();
  /* 118003d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118003d6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 118003dd mov eax, dword ptr [0x11822a6c] */
  EAX = (r32((uint32_t)(0x11822a6c)));
  /* 118003e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118003e5 mov dword ptr [0x11822a6c], eax */
  w32((uint32_t)(0x11822a6c), (EAX));
L_118003ea:;
  /* 118003ea cmp dword ptr [0x11822a7c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822a7c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118003f1 je 0x118003fd */
  if (C.zf) goto L_118003fd;
  /* 118003f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118003f5 call dword ptr [0x11825318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825318))), 0x118003fbu);
  /* 118003fb jmp 0x118003ea */
  goto L_118003ea;
L_118003fd:;
  /* 118003fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800401 je 0x11800441 */
  if (C.zf) goto L_11800441;
  /* 11800403 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800407 je 0x11800421 */
  if (C.zf) goto L_11800421;
  /* 11800409 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180040c push ecx */
  push32((uint32_t)(ECX));
  /* 1180040d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800410 push edx */
  push32((uint32_t)(EDX));
  /* 11800411 call 0x118007a0 */
  push32(0x11800416u); f_118007a0();
  /* 11800416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800419 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1180041f jmp 0x11800433 */
  goto L_11800433;
L_11800421:;
  /* 11800421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800424 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800427 mov ecx, dword ptr [eax + 0x118214dc] */
  ECX = (r32((uint32_t)(EAX + 0x118214dc)));
  /* 1180042d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11800433:;
  /* 11800433 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11800439 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1180043c jmp 0x1180077b */
  goto L_1180077b;
L_11800441:;
  /* 11800441 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11800448 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1180044f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800453 je 0x11800773 */
  if (C.zf) goto L_11800773;
  /* 11800459 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180045c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180045f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800462 jne 0x11800684 */
  if (!C.zf) goto L_11800684;
  /* 11800468 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180046b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1180046f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800472 jne 0x11800684 */
  if (!C.zf) goto L_11800684;
  /* 11800478 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180047b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1180047f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800482 jne 0x11800684 */
  if (!C.zf) goto L_11800684;
  /* 11800488 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1180048b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11800491:;
  /* 11800491 push 0x1181e734 */
  push32((uint32_t)(0x1181e734u));
  /* 11800496 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1180049c push ecx */
  push32((uint32_t)(ECX));
  /* 1180049d call 0x11802600 */
  push32(0x118004a2u); f_11802600();
  /* 118004a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118004a5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 118004ab cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118004b2 je 0x118004dd */
  if (C.zf) goto L_118004dd;
  /* 118004b4 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118004ba sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118004c0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 118004c6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118004cd je 0x118004dd */
  if (C.zf) goto L_118004dd;
  /* 118004cf mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118004d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118004d8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118004db jne 0x11800503 */
  if (!C.zf) goto L_11800503;
L_118004dd:;
  /* 118004dd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118004e1 je 0x118004fc */
  if (C.zf) goto L_118004fc;
  /* 118004e3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118004e5 call 0x117fa300 */
  push32(0x118004eau); f_117fa300();
  /* 118004ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118004ed mov edx, dword ptr [0x11822a6c] */
  EDX = (r32((uint32_t)(0x11822a6c)));
  /* 118004f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118004f6 mov dword ptr [0x11822a6c], edx */
  w32((uint32_t)(0x11822a6c), (EDX));
L_118004fc:;
  /* 118004fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118004fe jmp 0x1180079b */
  goto L_1180079b;
L_11800503:;
  /* 11800503 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1180050a jmp 0x11800515 */
  goto L_11800515;
L_1180050c:;
  /* 1180050c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180050f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800512 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11800515:;
  /* 11800515 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800519 jg 0x11800563 */
  if ((!C.zf&&C.sf==C.of)) goto L_11800563;
  /* 1180051b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11800521 push ecx */
  push32((uint32_t)(ECX));
  /* 11800522 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11800528 push edx */
  push32((uint32_t)(EDX));
  /* 11800529 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180052c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180052f mov ecx, dword ptr [eax + 0x118214d8] */
  ECX = (r32((uint32_t)(EAX + 0x118214d8)));
  /* 11800535 push ecx */
  push32((uint32_t)(ECX));
  /* 11800536 call 0x118025c0 */
  push32(0x1180053bu); f_118025c0();
  /* 1180053b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180053e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800540 jne 0x11800561 */
  if (!C.zf) goto L_11800561;
  /* 11800542 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11800545 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800548 mov eax, dword ptr [edx + 0x118214d8] */
  EAX = (r32((uint32_t)(EDX + 0x118214d8)));
  /* 1180054e push eax */
  push32((uint32_t)(EAX));
  /* 1180054f call 0x117f9690 */
  push32(0x11800554u); f_117f9690();
  /* 11800554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800557 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180055d jne 0x11800561 */
  if (!C.zf) goto L_11800561;
  /* 1180055f jmp 0x11800563 */
  goto L_11800563;
L_11800561:;
  /* 11800561 jmp 0x1180050c */
  goto L_1180050c;
L_11800563:;
  /* 11800563 push 0x1181e730 */
  push32((uint32_t)(0x1181e730u));
  /* 11800568 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1180056e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800571 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11800577 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1180057d push edx */
  push32((uint32_t)(EDX));
  /* 1180057e call 0x11802580 */
  push32(0x11800583u); f_11802580();
  /* 11800583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800586 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1180058c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800593 jne 0x118005c9 */
  if (!C.zf) goto L_118005c9;
  /* 11800595 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1180059b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180059e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118005a1 je 0x118005c9 */
  if (C.zf) goto L_118005c9;
  /* 118005a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118005a7 je 0x118005c2 */
  if (C.zf) goto L_118005c2;
  /* 118005a9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118005ab call 0x117fa300 */
  push32(0x118005b0u); f_117fa300();
  /* 118005b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118005b3 mov edx, dword ptr [0x11822a6c] */
  EDX = (r32((uint32_t)(0x11822a6c)));
  /* 118005b9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118005bc mov dword ptr [0x11822a6c], edx */
  w32((uint32_t)(0x11822a6c), (EDX));
L_118005c2:;
  /* 118005c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118005c4 jmp 0x1180079b */
  goto L_1180079b;
L_118005c9:;
  /* 118005c9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118005cd jg 0x1180061a */
  if ((!C.zf&&C.sf==C.of)) goto L_1180061a;
  /* 118005cf mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118005d5 push eax */
  push32((uint32_t)(EAX));
  /* 118005d6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118005dc push ecx */
  push32((uint32_t)(ECX));
  /* 118005dd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 118005e3 push edx */
  push32((uint32_t)(EDX));
  /* 118005e4 call 0x117fa080 */
  push32(0x118005e9u); f_117fa080();
  /* 118005e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118005ec mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118005f2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 118005fa lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11800600 push ecx */
  push32((uint32_t)(ECX));
  /* 11800601 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11800604 push edx */
  push32((uint32_t)(EDX));
  /* 11800605 call 0x118007a0 */
  push32(0x1180060au); f_118007a0();
  /* 1180060a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180060d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180060f je 0x1180061a */
  if (C.zf) goto L_1180061a;
  /* 11800611 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800614 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800617 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1180061a:;
  /* 1180061a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11800620 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800626 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1180062c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11800632 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11800635 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800637 je 0x11800648 */
  if (C.zf) goto L_11800648;
  /* 11800639 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1180063f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800642 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11800648:;
  /* 11800648 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1180064e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11800651 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800653 jne 0x11800491 */
  if (!C.zf) goto L_11800491;
  /* 11800659 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180065d je 0x1180066c */
  if (C.zf) goto L_1180066c;
  /* 1180065f call 0x11800940 */
  push32(0x11800664u); f_11800940();
  /* 11800664 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1180066a jmp 0x11800676 */
  goto L_11800676;
L_1180066c:;
  /* 1180066c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11800676:;
  /* 11800676 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1180067c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1180067f jmp 0x11800771 */
  goto L_11800771;
L_11800684:;
  /* 11800684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800687 push edx */
  push32((uint32_t)(EDX));
  /* 11800688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1180068a push 0 */
  push32((uint32_t)(0x0u));
  /* 1180068c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11800692 push eax */
  push32((uint32_t)(EAX));
  /* 11800693 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800696 push ecx */
  push32((uint32_t)(ECX));
  /* 11800697 call 0x11800a40 */
  push32(0x1180069cu); f_11800a40();
  /* 1180069c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180069f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118006a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118006a6 je 0x11800771 */
  if (C.zf) goto L_11800771;
  /* 118006ac mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118006b3 jmp 0x118006be */
  goto L_118006be;
L_118006b5:;
  /* 118006b5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118006b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118006bb mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118006be:;
  /* 118006be cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118006c2 jg 0x11800720 */
  if ((!C.zf&&C.sf==C.of)) goto L_11800720;
  /* 118006c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118006c8 je 0x1180071e */
  if (C.zf) goto L_1180071e;
  /* 118006ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118006cd imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118006d0 mov ecx, dword ptr [eax + 0x118214dc] */
  ECX = (r32((uint32_t)(EAX + 0x118214dc)));
  /* 118006d6 push ecx */
  push32((uint32_t)(ECX));
  /* 118006d7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 118006dd push edx */
  push32((uint32_t)(EDX));
  /* 118006de call 0x118024f0 */
  push32(0x118006e3u); f_118024f0();
  /* 118006e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118006e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118006e8 je 0x11800715 */
  if (C.zf) goto L_11800715;
  /* 118006ea lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 118006f0 push eax */
  push32((uint32_t)(EAX));
  /* 118006f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118006f4 push ecx */
  push32((uint32_t)(ECX));
  /* 118006f5 call 0x118007a0 */
  push32(0x118006fau); f_118007a0();
  /* 118006fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118006fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118006ff je 0x1180070c */
  if (C.zf) goto L_1180070c;
  /* 11800701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800704 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800707 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1180070a jmp 0x11800713 */
  goto L_11800713;
L_1180070c:;
  /* 1180070c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11800713:;
  /* 11800713 jmp 0x1180071e */
  goto L_1180071e;
L_11800715:;
  /* 11800715 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800718 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180071b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1180071e:;
  /* 1180071e jmp 0x118006b5 */
  goto L_118006b5;
L_11800720:;
  /* 11800720 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800724 je 0x1180074b */
  if (C.zf) goto L_1180074b;
  /* 11800726 call 0x11800940 */
  push32(0x1180072bu); f_11800940();
  /* 1180072b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1180072e push 2 */
  push32((uint32_t)(0x2u));
  /* 11800730 mov ecx, dword ptr [0x118214dc] */
  ECX = (r32((uint32_t)(0x118214dc)));
  /* 11800736 push ecx */
  push32((uint32_t)(ECX));
  /* 11800737 call 0x117f72f0 */
  push32(0x1180073cu); f_117f72f0();
  /* 1180073c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180073f mov dword ptr [0x118214dc], 0 */
  w32((uint32_t)(0x118214dc), (0x0u));
  /* 11800749 jmp 0x11800771 */
  goto L_11800771;
L_1180074b:;
  /* 1180074b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180074f je 0x1180075e */
  if (C.zf) goto L_1180075e;
  /* 11800751 call 0x11800940 */
  push32(0x11800756u); f_11800940();
  /* 11800756 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1180075c jmp 0x11800768 */
  goto L_11800768;
L_1180075e:;
  /* 1180075e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11800768:;
  /* 11800768 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1180076e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11800771:;
  /* 11800771 jmp 0x1180077b */
  goto L_1180077b;
L_11800773:;
  /* 11800773 call 0x11800940 */
  push32(0x11800778u); f_11800940();
  /* 11800778 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1180077b:;
  /* 1180077b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180077f je 0x11800798 */
  if (C.zf) goto L_11800798;
  /* 11800781 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11800783 call 0x117fa300 */
  push32(0x11800788u); f_117fa300();
  /* 11800788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180078b mov eax, dword ptr [0x11822a6c] */
  EAX = (r32((uint32_t)(0x11822a6c)));
  /* 11800790 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800793 mov dword ptr [0x11822a6c], eax */
  w32((uint32_t)(0x11822a6c), (EAX));
L_11800798:;
  /* 11800798 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1180079b:;
  /* 1180079b mov esp, ebp */
  ESP = (EBP);
  /* 1180079d pop ebp */
  EBP = (pop32());
  /* 1180079e ret  */
  ESPCHK(0x118003b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107a0 @ 0x118007a0 (403 bytes, 117 insns) */
void f_118007a0(void) {
  FTRACE(0x118007a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118007a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118007a1 mov ebp, esp */
  EBP = (ESP);
  /* 118007a3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118007a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118007ac push eax */
  push32((uint32_t)(EAX));
  /* 118007ad lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 118007b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118007b4 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 118007ba push edx */
  push32((uint32_t)(EDX));
  /* 118007bb lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 118007c1 push eax */
  push32((uint32_t)(EAX));
  /* 118007c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118007c5 push ecx */
  push32((uint32_t)(ECX));
  /* 118007c6 call 0x11800a40 */
  push32(0x118007cbu); f_11800a40();
  /* 118007cb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118007ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118007d0 jne 0x118007d9 */
  if (!C.zf) goto L_118007d9;
  /* 118007d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118007d4 jmp 0x1180092f */
  goto L_1180092f;
L_118007d9:;
  /* 118007d9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 118007de push 0x1181e738 */
  push32((uint32_t)(0x1181e738u));
  /* 118007e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118007e5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 118007eb push edx */
  push32((uint32_t)(EDX));
  /* 118007ec call 0x117f9690 */
  push32(0x118007f1u); f_117f9690();
  /* 118007f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118007f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118007f7 push eax */
  push32((uint32_t)(EAX));
  /* 118007f8 call 0x117f6860 */
  push32(0x118007fdu); f_117f6860();
  /* 118007fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800800 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11800803 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800807 jne 0x11800810 */
  if (!C.zf) goto L_11800810;
  /* 11800809 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180080b jmp 0x1180092f */
  goto L_1180092f;
L_11800810:;
  /* 11800810 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800813 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800816 mov ecx, dword ptr [eax + 0x118214dc] */
  ECX = (r32((uint32_t)(EAX + 0x118214dc)));
  /* 1180081c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180081f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800822 mov eax, dword ptr [edx*4 + 0x118228e8] */
  EAX = (r32((uint32_t)(EDX*4 + 0x118228e8)));
  /* 11800829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180082c push 6 */
  push32((uint32_t)(0x6u));
  /* 1180082e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800831 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800834 add ecx, 0x11822938 */
  { uint32_t _a=(ECX),_b=(0x11822938u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180083a push ecx */
  push32((uint32_t)(ECX));
  /* 1180083b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1180083e push edx */
  push32((uint32_t)(EDX));
  /* 1180083f call 0x117fd140 */
  push32(0x11800844u); f_117fd140();
  /* 11800844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800847 mov eax, dword ptr [0x11822900] */
  EAX = (r32((uint32_t)(0x11822900)));
  /* 1180084c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1180084f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11800855 push ecx */
  push32((uint32_t)(ECX));
  /* 11800856 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800859 push edx */
  push32((uint32_t)(EDX));
  /* 1180085a call 0x117f9810 */
  push32(0x1180085fu); f_117f9810();
  /* 1180085f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800865 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800868 mov dword ptr [ecx + 0x118214dc], eax */
  w32((uint32_t)(ECX + 0x118214dc), (EAX));
  /* 1180086e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11800874 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1180087a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180087d mov dword ptr [eax*4 + 0x118228e8], edx */
  w32((uint32_t)(EAX*4 + 0x118228e8), (EDX));
  /* 11800884 push 6 */
  push32((uint32_t)(0x6u));
  /* 11800886 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1180088c push ecx */
  push32((uint32_t)(ECX));
  /* 1180088d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800890 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800893 add edx, 0x11822938 */
  { uint32_t _a=(EDX),_b=(0x11822938u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800899 push edx */
  push32((uint32_t)(EDX));
  /* 1180089a call 0x117fd140 */
  push32(0x1180089fu); f_117fd140();
  /* 1180089f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118008a2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118008a6 jne 0x118008b3 */
  if (!C.zf) goto L_118008b3;
  /* 118008a8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118008ae mov dword ptr [0x11822900], eax */
  w32((uint32_t)(0x11822900), (EAX));
L_118008b3:;
  /* 118008b3 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118008b7 jne 0x118008c5 */
  if (!C.zf) goto L_118008c5;
  /* 118008b9 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118008bf mov dword ptr [0x11822904], ecx */
  w32((uint32_t)(0x11822904), (ECX));
L_118008c5:;
  /* 118008c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118008c8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118008cb call dword ptr [edx + 0x118214e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x118214e0))), 0x118008d1u);
  /* 118008d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118008d3 je 0x1180090c */
  if (C.zf) goto L_1180090c;
  /* 118008d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118008d8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118008db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118008de mov dword ptr [eax + 0x118214dc], ecx */
  w32((uint32_t)(EAX + 0x118214dc), (ECX));
  /* 118008e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118008e6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118008e9 push edx */
  push32((uint32_t)(EDX));
  /* 118008ea call 0x117f72f0 */
  push32(0x118008efu); f_117f72f0();
  /* 118008ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118008f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118008f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118008f8 mov dword ptr [eax*4 + 0x118228e8], ecx */
  w32((uint32_t)(EAX*4 + 0x118228e8), (ECX));
  /* 118008ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11800902 mov dword ptr [0x11822900], edx */
  w32((uint32_t)(0x11822900), (EDX));
  /* 11800908 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180090a jmp 0x1180092f */
  goto L_1180092f;
L_1180090c:;
  /* 1180090c cmp dword ptr [ebp - 0xc], 0x118213c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x118213c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800913 je 0x11800923 */
  if (C.zf) goto L_11800923;
  /* 11800915 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800917 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180091a push eax */
  push32((uint32_t)(EAX));
  /* 1180091b call 0x117f72f0 */
  push32(0x11800920u); f_117f72f0();
  /* 11800920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800923:;
  /* 11800923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800926 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800929 mov eax, dword ptr [ecx + 0x118214dc] */
  EAX = (r32((uint32_t)(ECX + 0x118214dc)));
L_1180092f:;
  /* 1180092f mov esp, ebp */
  ESP = (EBP);
  /* 11800931 pop ebp */
  EBP = (pop32());
  /* 11800932 ret  */
  ESPCHK(0x118007a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010940 @ 0x11800940 (256 bytes, 72 insns) */
void f_11800940(void) {
  FTRACE(0x11800940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800940 push ebp */
  push32((uint32_t)(EBP));
  /* 11800941 mov ebp, esp */
  EBP = (ESP);
  /* 11800943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800946 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1180094d cmp dword ptr [0x118214dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118214dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800954 jne 0x11800974 */
  if (!C.zf) goto L_11800974;
  /* 11800956 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1180095b push 0x1181e738 */
  push32((uint32_t)(0x1181e738u));
  /* 11800960 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800962 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11800967 call 0x117f6860 */
  push32(0x1180096cu); f_117f6860();
  /* 1180096c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180096f mov dword ptr [0x118214dc], eax */
  w32((uint32_t)(0x118214dc), (EAX));
L_11800974:;
  /* 11800974 mov eax, dword ptr [0x118214dc] */
  EAX = (r32((uint32_t)(0x118214dc)));
  /* 11800979 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1180097c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11800983 jmp 0x1180098e */
  goto L_1180098e;
L_11800985:;
  /* 11800985 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800988 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180098b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1180098e:;
  /* 1180098e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800991 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800994 mov eax, dword ptr [edx + 0x118214dc] */
  EAX = (r32((uint32_t)(EDX + 0x118214dc)));
  /* 1180099a push eax */
  push32((uint32_t)(EAX));
  /* 1180099b push 0x1181e744 */
  push32((uint32_t)(0x1181e744u));
  /* 118009a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118009a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118009a6 mov edx, dword ptr [ecx + 0x118214d8] */
  EDX = (r32((uint32_t)(ECX + 0x118214d8)));
  /* 118009ac push edx */
  push32((uint32_t)(EDX));
  /* 118009ad push 3 */
  push32((uint32_t)(0x3u));
  /* 118009af mov eax, dword ptr [0x118214dc] */
  EAX = (r32((uint32_t)(0x118214dc)));
  /* 118009b4 push eax */
  push32((uint32_t)(EAX));
  /* 118009b5 call 0x11800be0 */
  push32(0x118009bau); f_11800be0();
  /* 118009ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118009bd cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118009c1 jge 0x11800a09 */
  if ((C.sf==C.of)) goto L_11800a09;
  /* 118009c3 push 0x1181e730 */
  push32((uint32_t)(0x1181e730u));
  /* 118009c8 mov ecx, dword ptr [0x118214dc] */
  ECX = (r32((uint32_t)(0x118214dc)));
  /* 118009ce push ecx */
  push32((uint32_t)(ECX));
  /* 118009cf call 0x117f9820 */
  push32(0x118009d4u); f_117f9820();
  /* 118009d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118009d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118009da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118009dd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118009e0 mov eax, dword ptr [edx + 0x118214dc] */
  EAX = (r32((uint32_t)(EDX + 0x118214dc)));
  /* 118009e6 push eax */
  push32((uint32_t)(EAX));
  /* 118009e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118009ea imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118009ed mov edx, dword ptr [ecx + 0x118214dc] */
  EDX = (r32((uint32_t)(ECX + 0x118214dc)));
  /* 118009f3 push edx */
  push32((uint32_t)(EDX));
  /* 118009f4 call 0x118024f0 */
  push32(0x118009f9u); f_118024f0();
  /* 118009f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118009fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118009fe je 0x11800a07 */
  if (C.zf) goto L_11800a07;
  /* 11800a00 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11800a07:;
  /* 11800a07 jmp 0x11800a37 */
  goto L_11800a37;
L_11800a09:;
  /* 11800a09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800a0d jne 0x11800a16 */
  if (!C.zf) goto L_11800a16;
  /* 11800a0f mov eax, dword ptr [0x118214dc] */
  EAX = (r32((uint32_t)(0x118214dc)));
  /* 11800a14 jmp 0x11800a3c */
  goto L_11800a3c;
L_11800a16:;
  /* 11800a16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800a18 mov eax, dword ptr [0x118214dc] */
  EAX = (r32((uint32_t)(0x118214dc)));
  /* 11800a1d push eax */
  push32((uint32_t)(EAX));
  /* 11800a1e call 0x117f72f0 */
  push32(0x11800a23u); f_117f72f0();
  /* 11800a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800a26 mov dword ptr [0x118214dc], 0 */
  w32((uint32_t)(0x118214dc), (0x0u));
  /* 11800a30 mov eax, dword ptr [0x118214f4] */
  EAX = (r32((uint32_t)(0x118214f4)));
  /* 11800a35 jmp 0x11800a3c */
  goto L_11800a3c;
L_11800a37:;
  /* 11800a37 jmp 0x11800985 */
  goto L_11800985;
L_11800a3c:;
  /* 11800a3c mov esp, ebp */
  ESP = (EBP);
  /* 11800a3e pop ebp */
  EBP = (pop32());
  /* 11800a3f ret  */
  ESPCHK(0x11800940u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a40 @ 0x11800a40 (388 bytes, 115 insns) */
void f_11800a40(void) {
  FTRACE(0x11800a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11800a41 mov ebp, esp */
  EBP = (ESP);
  /* 11800a43 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800a49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800a4d jne 0x11800a56 */
  if (!C.zf) goto L_11800a56;
  /* 11800a4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800a51 jmp 0x11800bc0 */
  goto L_11800bc0;
L_11800a56:;
  /* 11800a56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800a59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11800a5c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800a5f jne 0x11800ab0 */
  if (!C.zf) goto L_11800ab0;
  /* 11800a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800a64 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11800a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800a6a jne 0x11800ab0 */
  if (!C.zf) goto L_11800ab0;
  /* 11800a6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800a6f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11800a72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800a75 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11800a79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800a7d je 0x11800a99 */
  if (C.zf) goto L_11800a99;
  /* 11800a7f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11800a82 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11800a87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11800a8a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11800a90 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11800a93 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11800a99:;
  /* 11800a99 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800a9d je 0x11800aa8 */
  if (C.zf) goto L_11800aa8;
  /* 11800a9f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11800aa2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11800aa8:;
  /* 11800aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800aab jmp 0x11800bc0 */
  goto L_11800bc0;
L_11800ab0:;
  /* 11800ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11800ab4 push 0x11821450 */
  push32((uint32_t)(0x11821450u));
  /* 11800ab9 call 0x118024f0 */
  push32(0x11800abeu); f_118024f0();
  /* 11800abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800ac3 je 0x11800b78 */
  if (C.zf) goto L_11800b78;
  /* 11800ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800acc push edx */
  push32((uint32_t)(EDX));
  /* 11800acd push 0x118213cc */
  push32((uint32_t)(0x118213ccu));
  /* 11800ad2 call 0x118024f0 */
  push32(0x11800ad7u); f_118024f0();
  /* 11800ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800ada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800adc je 0x11800b78 */
  if (C.zf) goto L_11800b78;
  /* 11800ae2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11800ae6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11800aec push ecx */
  push32((uint32_t)(ECX));
  /* 11800aed call 0x11800c30 */
  push32(0x11800af2u); f_11800c30();
  /* 11800af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800af7 je 0x11800b00 */
  if (C.zf) goto L_11800b00;
  /* 11800af9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800afb jmp 0x11800bc0 */
  goto L_11800bc0;
L_11800b00:;
  /* 11800b00 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11800b06 push edx */
  push32((uint32_t)(EDX));
  /* 11800b07 push 0x11822910 */
  push32((uint32_t)(0x11822910u));
  /* 11800b0c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11800b12 push eax */
  push32((uint32_t)(EAX));
  /* 11800b13 call 0x11802640 */
  push32(0x11800b18u); f_11802640();
  /* 11800b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800b1d jne 0x11800b26 */
  if (!C.zf) goto L_11800b26;
  /* 11800b1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800b21 jmp 0x11800bc0 */
  goto L_11800bc0;
L_11800b26:;
  /* 11800b26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11800b28 mov cx, word ptr [0x11822914] */
  CX = (r16((uint32_t)(0x11822914)));
  /* 11800b2f mov dword ptr [0x11822918], ecx */
  w32((uint32_t)(0x11822918), (ECX));
  /* 11800b35 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11800b3b push edx */
  push32((uint32_t)(EDX));
  /* 11800b3c push 0x11821450 */
  push32((uint32_t)(0x11821450u));
  /* 11800b41 call 0x11800d90 */
  push32(0x11800b46u); f_11800d90();
  /* 11800b46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800b4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11800b4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11800b51 je 0x11800b66 */
  if (C.zf) goto L_11800b66;
  /* 11800b53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800b56 push edx */
  push32((uint32_t)(EDX));
  /* 11800b57 push 0x118213cc */
  push32((uint32_t)(0x118213ccu));
  /* 11800b5c call 0x117f9810 */
  push32(0x11800b61u); f_117f9810();
  /* 11800b61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800b64 jmp 0x11800b78 */
  goto L_11800b78;
L_11800b66:;
  /* 11800b66 push 0x11821450 */
  push32((uint32_t)(0x11821450u));
  /* 11800b6b push 0x118213cc */
  push32((uint32_t)(0x118213ccu));
  /* 11800b70 call 0x117f9810 */
  push32(0x11800b75u); f_117f9810();
  /* 11800b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800b78:;
  /* 11800b78 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800b7c je 0x11800b91 */
  if (C.zf) goto L_11800b91;
  /* 11800b7e push 6 */
  push32((uint32_t)(0x6u));
  /* 11800b80 push 0x11822910 */
  push32((uint32_t)(0x11822910u));
  /* 11800b85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11800b88 push eax */
  push32((uint32_t)(EAX));
  /* 11800b89 call 0x117fd140 */
  push32(0x11800b8eu); f_117fd140();
  /* 11800b8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800b91:;
  /* 11800b91 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800b95 je 0x11800baa */
  if (C.zf) goto L_11800baa;
  /* 11800b97 push 4 */
  push32((uint32_t)(0x4u));
  /* 11800b99 push 0x11822918 */
  push32((uint32_t)(0x11822918u));
  /* 11800b9e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11800ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 11800ba2 call 0x117fd140 */
  push32(0x11800ba7u); f_117fd140();
  /* 11800ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800baa:;
  /* 11800baa push 0x11821450 */
  push32((uint32_t)(0x11821450u));
  /* 11800baf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800bb2 push edx */
  push32((uint32_t)(EDX));
  /* 11800bb3 call 0x117f9810 */
  push32(0x11800bb8u); f_117f9810();
  /* 11800bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800bbb mov eax, 0x11821450 */
  EAX = (0x11821450u);
L_11800bc0:;
  /* 11800bc0 mov esp, ebp */
  ESP = (EBP);
  /* 11800bc2 pop ebp */
  EBP = (pop32());
  /* 11800bc3 ret  */
  ESPCHK(0x11800a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x11800bd0 (7 bytes, 5 insns) */
void f_11800bd0(void) {
  FTRACE(0x11800bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11800bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11800bd3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800bd5 pop ebp */
  EBP = (pop32());
  /* 11800bd6 ret  */
  ESPCHK(0x11800bd0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11800be0 (79 bytes, 28 insns) */
void f_11800be0(void) {
  FTRACE(0x11800be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11800be1 mov ebp, esp */
  EBP = (ESP);
  /* 11800be3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800be6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11800be9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800bec mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11800bf3 jmp 0x11800bfe */
  goto L_11800bfe;
L_11800bf5:;
  /* 11800bf5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800bf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800bfb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11800bfe:;
  /* 11800bfe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800c01 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800c04 jge 0x11800c24 */
  if ((C.sf==C.of)) goto L_11800c24;
  /* 11800c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800c09 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800c0f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800c12 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11800c15 push edx */
  push32((uint32_t)(EDX));
  /* 11800c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800c19 push eax */
  push32((uint32_t)(EAX));
  /* 11800c1a call 0x117f9820 */
  push32(0x11800c1fu); f_117f9820();
  /* 11800c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c22 jmp 0x11800bf5 */
  goto L_11800bf5;
L_11800c24:;
  /* 11800c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11800c2b mov esp, ebp */
  ESP = (EBP);
  /* 11800c2d pop ebp */
  EBP = (pop32());
  /* 11800c2e ret  */
  ESPCHK(0x11800be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c30 @ 0x11800c30 (349 bytes, 122 insns) */
void f_11800c30(void) {
  FTRACE(0x11800c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800c30 push ebp */
  push32((uint32_t)(EBP));
  /* 11800c31 mov ebp, esp */
  EBP = (ESP);
  /* 11800c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800c36 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11800c3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11800c3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800c40 push eax */
  push32((uint32_t)(EAX));
  /* 11800c41 call 0x117fa5d0 */
  push32(0x11800c46u); f_117fa5d0();
  /* 11800c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800c4c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11800c4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11800c51 jne 0x11800c5a */
  if (!C.zf) goto L_11800c5a;
  /* 11800c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800c55 jmp 0x11800d89 */
  goto L_11800d89;
L_11800c5a:;
  /* 11800c5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800c5d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11800c60 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800c63 jne 0x11800c90 */
  if (!C.zf) goto L_11800c90;
  /* 11800c65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800c68 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11800c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800c6e je 0x11800c90 */
  if (C.zf) goto L_11800c90;
  /* 11800c70 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800c73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c76 push ecx */
  push32((uint32_t)(ECX));
  /* 11800c77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800c7a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c80 push edx */
  push32((uint32_t)(EDX));
  /* 11800c81 call 0x117f9810 */
  push32(0x11800c86u); f_117f9810();
  /* 11800c86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800c8b jmp 0x11800d89 */
  goto L_11800d89;
L_11800c90:;
  /* 11800c90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11800c97 jmp 0x11800ca2 */
  goto L_11800ca2;
L_11800c99:;
  /* 11800c99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800c9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800c9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11800ca2:;
  /* 11800ca2 push 0x1181e748 */
  push32((uint32_t)(0x1181e748u));
  /* 11800ca7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800caa push ecx */
  push32((uint32_t)(ECX));
  /* 11800cab call 0x11802580 */
  push32(0x11800cb0u); f_11802580();
  /* 11800cb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800cb3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11800cb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800cba jne 0x11800cc4 */
  if (!C.zf) goto L_11800cc4;
  /* 11800cbc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11800cbf jmp 0x11800d89 */
  goto L_11800d89;
L_11800cc4:;
  /* 11800cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800cc7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800cca mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11800ccc mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11800ccf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800cd3 jne 0x11800cfa */
  if (!C.zf) goto L_11800cfa;
  /* 11800cd5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800cd9 jge 0x11800cfa */
  if ((C.sf==C.of)) goto L_11800cfa;
  /* 11800cdb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800cdf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800ce2 je 0x11800cfa */
  if (C.zf) goto L_11800cfa;
  /* 11800ce4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800ce7 push edx */
  push32((uint32_t)(EDX));
  /* 11800ce8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800ceb push eax */
  push32((uint32_t)(EAX));
  /* 11800cec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800cef push ecx */
  push32((uint32_t)(ECX));
  /* 11800cf0 call 0x117fa080 */
  push32(0x11800cf5u); f_117fa080();
  /* 11800cf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800cf8 jmp 0x11800d60 */
  goto L_11800d60;
L_11800cfa:;
  /* 11800cfa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800cfe jne 0x11800d28 */
  if (!C.zf) goto L_11800d28;
  /* 11800d00 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800d04 jge 0x11800d28 */
  if ((C.sf==C.of)) goto L_11800d28;
  /* 11800d06 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800d0a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800d0d je 0x11800d28 */
  if (C.zf) goto L_11800d28;
  /* 11800d0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800d12 push eax */
  push32((uint32_t)(EAX));
  /* 11800d13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800d16 push ecx */
  push32((uint32_t)(ECX));
  /* 11800d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800d1a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800d1d push edx */
  push32((uint32_t)(EDX));
  /* 11800d1e call 0x117fa080 */
  push32(0x11800d23u); f_117fa080();
  /* 11800d23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800d26 jmp 0x11800d60 */
  goto L_11800d60;
L_11800d28:;
  /* 11800d28 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800d2c jne 0x11800d5b */
  if (!C.zf) goto L_11800d5b;
  /* 11800d2e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800d34 je 0x11800d3f */
  if (C.zf) goto L_11800d3f;
  /* 11800d36 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800d3a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800d3d jne 0x11800d5b */
  if (!C.zf) goto L_11800d5b;
L_11800d3f:;
  /* 11800d3f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800d42 push edx */
  push32((uint32_t)(EDX));
  /* 11800d43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800d46 push eax */
  push32((uint32_t)(EAX));
  /* 11800d47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800d4a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800d50 push ecx */
  push32((uint32_t)(ECX));
  /* 11800d51 call 0x117fa080 */
  push32(0x11800d56u); f_117fa080();
  /* 11800d56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800d59 jmp 0x11800d60 */
  goto L_11800d60;
L_11800d5b:;
  /* 11800d5b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11800d5e jmp 0x11800d89 */
  goto L_11800d89;
L_11800d60:;
  /* 11800d60 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800d64 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800d67 jne 0x11800d6b */
  if (!C.zf) goto L_11800d6b;
  /* 11800d69 jmp 0x11800d87 */
  goto L_11800d87;
L_11800d6b:;
  /* 11800d6b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11800d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800d71 jne 0x11800d75 */
  if (!C.zf) goto L_11800d75;
  /* 11800d73 jmp 0x11800d87 */
  goto L_11800d87;
L_11800d75:;
  /* 11800d75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11800d78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800d7b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11800d7f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11800d82 jmp 0x11800c99 */
  goto L_11800c99;
L_11800d87:;
  /* 11800d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11800d89:;
  /* 11800d89 mov esp, ebp */
  ESP = (EBP);
  /* 11800d8b pop ebp */
  EBP = (pop32());
  /* 11800d8c ret  */
  ESPCHK(0x11800c30u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11800d90 (101 bytes, 36 insns) */
void f_11800d90(void) {
  FTRACE(0x11800d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11800d91 mov ebp, esp */
  EBP = (ESP);
  /* 11800d93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800d96 push eax */
  push32((uint32_t)(EAX));
  /* 11800d97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800d9a push ecx */
  push32((uint32_t)(ECX));
  /* 11800d9b call 0x117f9810 */
  push32(0x11800da0u); f_117f9810();
  /* 11800da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800da3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800da6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11800daa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800dac je 0x11800dc8 */
  if (C.zf) goto L_11800dc8;
  /* 11800dae mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800db1 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11800db5 push 0x1181e750 */
  push32((uint32_t)(0x1181e750u));
  /* 11800dba push 2 */
  push32((uint32_t)(0x2u));
  /* 11800dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800dbf push edx */
  push32((uint32_t)(EDX));
  /* 11800dc0 call 0x11800be0 */
  push32(0x11800dc5u); f_11800be0();
  /* 11800dc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800dc8:;
  /* 11800dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800dcb movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11800dd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11800dd4 je 0x11800df3 */
  if (C.zf) goto L_11800df3;
  /* 11800dd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11800dd9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11800ddf push edx */
  push32((uint32_t)(EDX));
  /* 11800de0 push 0x1181e74c */
  push32((uint32_t)(0x1181e74cu));
  /* 11800de5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800de7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800dea push eax */
  push32((uint32_t)(EAX));
  /* 11800deb call 0x11800be0 */
  push32(0x11800df0u); f_11800be0();
  /* 11800df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800df3:;
  /* 11800df3 pop ebp */
  EBP = (pop32());
  /* 11800df4 ret  */
  ESPCHK(0x11800d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e00 @ 0x11800e00 (130 bytes, 50 insns) */
void f_11800e00(void) {
  FTRACE(0x11800e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11800e01 mov ebp, esp */
  EBP = (ESP);
  /* 11800e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11800e04 push ebx */
  push32((uint32_t)(EBX));
  /* 11800e05 push esi */
  push32((uint32_t)(ESI));
  /* 11800e06 push edi */
  push32((uint32_t)(EDI));
  /* 11800e07 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11800e0e:;
  /* 11800e0e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800e12 jne 0x11800e32 */
  if (!C.zf) goto L_11800e32;
  /* 11800e14 push 0x1181e760 */
  push32((uint32_t)(0x1181e760u));
  /* 11800e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11800e1b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11800e1d push 0x1181e754 */
  push32((uint32_t)(0x1181e754u));
  /* 11800e22 push 2 */
  push32((uint32_t)(0x2u));
  /* 11800e24 call 0x117f5920 */
  push32(0x11800e29u); f_117f5920();
  /* 11800e29 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800e2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800e2f jne 0x11800e32 */
  if (!C.zf) goto L_11800e32;
  /* 11800e31 int3  */
  x86_unimpl("int3 @ 0x11800e31");
L_11800e32:;
  /* 11800e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11800e34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800e36 jne 0x11800e0e */
  if (!C.zf) goto L_11800e0e;
  /* 11800e38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800e3b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11800e3e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11800e41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11800e43 je 0x11800e51 */
  if (C.zf) goto L_11800e51;
  /* 11800e45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800e48 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11800e4f jmp 0x11800e78 */
  goto L_11800e78;
L_11800e51:;
  /* 11800e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800e54 push ecx */
  push32((uint32_t)(ECX));
  /* 11800e55 call 0x117ff670 */
  push32(0x11800e5au); f_117ff670();
  /* 11800e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800e5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800e60 push edx */
  push32((uint32_t)(EDX));
  /* 11800e61 call 0x11800e90 */
  push32(0x11800e66u); f_11800e90();
  /* 11800e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800e6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800e6f push eax */
  push32((uint32_t)(EAX));
  /* 11800e70 call 0x117ff6e0 */
  push32(0x11800e75u); f_117ff6e0();
  /* 11800e75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11800e78:;
  /* 11800e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800e7b pop edi */
  EDI = (pop32());
  /* 11800e7c pop esi */
  ESI = (pop32());
  /* 11800e7d pop ebx */
  EBX = (pop32());
  /* 11800e7e mov esp, ebp */
  ESP = (EBP);
  /* 11800e80 pop ebp */
  EBP = (pop32());
  /* 11800e81 ret  */
  ESPCHK(0x11800e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e90 @ 0x11800e90 (190 bytes, 67 insns) */
void f_11800e90(void) {
  FTRACE(0x11800e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11800e91 mov ebp, esp */
  EBP = (ESP);
  /* 11800e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11800e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11800e97 push esi */
  push32((uint32_t)(ESI));
  /* 11800e98 push edi */
  push32((uint32_t)(EDI));
  /* 11800e99 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11800ea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800ea3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11800ea6:;
  /* 11800ea6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800eaa jne 0x11800eca */
  if (!C.zf) goto L_11800eca;
  /* 11800eac push 0x1181e604 */
  push32((uint32_t)(0x1181e604u));
  /* 11800eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11800eb3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11800eb5 push 0x1181e754 */
  push32((uint32_t)(0x1181e754u));
  /* 11800eba push 2 */
  push32((uint32_t)(0x2u));
  /* 11800ebc call 0x117f5920 */
  push32(0x11800ec1u); f_117f5920();
  /* 11800ec1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800ec4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800ec7 jne 0x11800eca */
  if (!C.zf) goto L_11800eca;
  /* 11800ec9 int3  */
  x86_unimpl("int3 @ 0x11800ec9");
L_11800eca:;
  /* 11800eca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11800ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11800ece jne 0x11800ea6 */
  if (!C.zf) goto L_11800ea6;
  /* 11800ed0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800ed3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11800ed6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11800edb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800edd je 0x11800f3a */
  if (C.zf) goto L_11800f3a;
  /* 11800edf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 11800ee3 call 0x11800190 */
  push32(0x11800ee8u); f_11800190();
  /* 11800ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800eeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800eee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800ef1 push edx */
  push32((uint32_t)(EDX));
  /* 11800ef2 call 0x11803510 */
  push32(0x11800ef7u); f_11803510();
  /* 11800ef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800efa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800efd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11800f00 push ecx */
  push32((uint32_t)(ECX));
  /* 11800f01 call 0x118033e0 */
  push32(0x11800f06u); f_118033e0();
  /* 11800f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800f09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800f0b jge 0x11800f16 */
  if ((C.sf==C.of)) goto L_11800f16;
  /* 11800f0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11800f14 jmp 0x11800f3a */
  goto L_11800f3a;
L_11800f16:;
  /* 11800f16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800f19 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800f1d je 0x11800f3a */
  if (C.zf) goto L_11800f3a;
  /* 11800f1f push 2 */
  push32((uint32_t)(0x2u));
  /* 11800f21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800f24 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11800f27 push ecx */
  push32((uint32_t)(ECX));
  /* 11800f28 call 0x117f72f0 */
  push32(0x11800f2du); f_117f72f0();
  /* 11800f2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800f30 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800f33 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11800f3a:;
  /* 11800f3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11800f3d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11800f44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800f47 pop edi */
  EDI = (pop32());
  /* 11800f48 pop esi */
  ESI = (pop32());
  /* 11800f49 pop ebx */
  EBX = (pop32());
  /* 11800f4a mov esp, ebp */
  ESP = (EBP);
  /* 11800f4c pop ebp */
  EBP = (pop32());
  /* 11800f4d ret  */
  ESPCHK(0x11800e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f50 @ 0x11800f50 (210 bytes, 63 insns) */
void f_11800f50(void) {
  FTRACE(0x11800f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11800f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11800f51 mov ebp, esp */
  EBP = (ESP);
  /* 11800f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11800f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800f57 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800f5d jae 0x11800f81 */
  if (!C.cf) goto L_11800f81;
  /* 11800f5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800f62 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11800f65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800f68 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11800f6b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800f6e mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 11800f75 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11800f7a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11800f7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11800f7f jne 0x11800f94 */
  if (!C.zf) goto L_11800f94;
L_11800f81:;
  /* 11800f81 call 0x117fe730 */
  push32(0x11800f86u); f_117fe730();
  /* 11800f86 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11800f8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11800f8f jmp 0x1180101e */
  goto L_1180101e;
L_11800f94:;
  /* 11800f94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800f97 push edx */
  push32((uint32_t)(EDX));
  /* 11800f98 call 0x117fff50 */
  push32(0x11800f9du); f_117fff50();
  /* 11800f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800fa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800fa3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11800fa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800fa9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11800fac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11800faf mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 11800fb6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11800fbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11800fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800fc0 je 0x11800ffd */
  if (C.zf) goto L_11800ffd;
  /* 11800fc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11800fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11800fc6 call 0x117ffdd0 */
  push32(0x11800fcbu); f_117ffdd0();
  /* 11800fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11800fce push eax */
  push32((uint32_t)(EAX));
  /* 11800fcf call dword ptr [0x11825314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825314))), 0x11800fd5u);
  /* 11800fd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11800fd7 jne 0x11800fe4 */
  if (!C.zf) goto L_11800fe4;
  /* 11800fd9 call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x11800fdfu);
  /* 11800fdf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11800fe2 jmp 0x11800feb */
  goto L_11800feb;
L_11800fe4:;
  /* 11800fe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11800feb:;
  /* 11800feb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11800fef jne 0x11800ff3 */
  if (!C.zf) goto L_11800ff3;
  /* 11800ff1 jmp 0x1180100f */
  goto L_1180100f;
L_11800ff3:;
  /* 11800ff3 call 0x117fe740 */
  push32(0x11800ff8u); f_117fe740();
  /* 11800ff8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11800ffb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11800ffd:;
  /* 11800ffd call 0x117fe730 */
  push32(0x11801002u); f_117fe730();
  /* 11801002 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11801008 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1180100f:;
  /* 1180100f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801012 push eax */
  push32((uint32_t)(EAX));
  /* 11801013 call 0x117fffe0 */
  push32(0x11801018u); f_117fffe0();
  /* 11801018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180101b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1180101e:;
  /* 1180101e mov esp, ebp */
  ESP = (EBP);
  /* 11801020 pop ebp */
  EBP = (pop32());
  /* 11801021 ret  */
  ESPCHK(0x11800f50u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11801030 (219 bytes, 64 insns) */
void f_11801030(void) {
  FTRACE(0x11801030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11801030 push ebp */
  push32((uint32_t)(EBP));
  /* 11801031 mov ebp, esp */
  EBP = (ESP);
  /* 11801033 push ecx */
  push32((uint32_t)(ECX));
  /* 11801034 cmp dword ptr [0x118228fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180103b je 0x118010d1 */
  if (C.zf) goto L_118010d1;
  /* 11801041 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11801043 push 0x1181e770 */
  push32((uint32_t)(0x1181e770u));
  /* 11801048 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180104a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1180104f push 1 */
  push32((uint32_t)(0x1u));
  /* 11801051 call 0x117f6c70 */
  push32(0x11801056u); f_117f6c70();
  /* 11801056 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180105c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801060 jne 0x1180106c */
  if (!C.zf) goto L_1180106c;
  /* 11801062 mov eax, 1 */
  EAX = (0x1u);
  /* 11801067 jmp 0x11801107 */
  goto L_11801107;
L_1180106c:;
  /* 1180106c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180106f push eax */
  push32((uint32_t)(EAX));
  /* 11801070 call 0x11801110 */
  push32(0x11801075u); f_11801110();
  /* 11801075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180107a je 0x1180109d */
  if (C.zf) goto L_1180109d;
  /* 1180107c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180107f push ecx */
  push32((uint32_t)(ECX));
  /* 11801080 call 0x118016a0 */
  push32(0x11801085u); f_118016a0();
  /* 11801085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801088 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180108a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180108d push edx */
  push32((uint32_t)(EDX));
  /* 1180108e call 0x117f72f0 */
  push32(0x11801093u); f_117f72f0();
  /* 11801093 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801096 mov eax, 1 */
  EAX = (0x1u);
  /* 1180109b jmp 0x11801107 */
  goto L_11801107;
L_1180109d:;
  /* 1180109d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118010a0 mov dword ptr [0x11821c98], eax */
  w32((uint32_t)(0x11821c98), (EAX));
  /* 118010a5 mov ecx, dword ptr [0x1182291c] */
  ECX = (r32((uint32_t)(0x1182291c)));
  /* 118010ab push ecx */
  push32((uint32_t)(ECX));
  /* 118010ac call 0x118016a0 */
  push32(0x118010b1u); f_118016a0();
  /* 118010b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118010b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118010b6 mov edx, dword ptr [0x1182291c] */
  EDX = (r32((uint32_t)(0x1182291c)));
  /* 118010bc push edx */
  push32((uint32_t)(EDX));
  /* 118010bd call 0x117f72f0 */
  push32(0x118010c2u); f_117f72f0();
  /* 118010c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118010c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118010c8 mov dword ptr [0x1182291c], eax */
  w32((uint32_t)(0x1182291c), (EAX));
  /* 118010cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118010cf jmp 0x11801107 */
  goto L_11801107;
L_118010d1:;
  /* 118010d1 mov dword ptr [0x11821c98], 0x11821ca0 */
  w32((uint32_t)(0x11821c98), (0x11821ca0u));
  /* 118010db mov ecx, dword ptr [0x1182291c] */
  ECX = (r32((uint32_t)(0x1182291c)));
  /* 118010e1 push ecx */
  push32((uint32_t)(ECX));
  /* 118010e2 call 0x118016a0 */
  push32(0x118010e7u); f_118016a0();
  /* 118010e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118010ea push 2 */
  push32((uint32_t)(0x2u));
  /* 118010ec mov edx, dword ptr [0x1182291c] */
  EDX = (r32((uint32_t)(0x1182291c)));
  /* 118010f2 push edx */
  push32((uint32_t)(EDX));
  /* 118010f3 call 0x117f72f0 */
  push32(0x118010f8u); f_117f72f0();
  /* 118010f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118010fb mov dword ptr [0x1182291c], 0 */
  w32((uint32_t)(0x1182291c), (0x0u));
  /* 11801105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11801107:;
  /* 11801107 mov esp, ebp */
  ESP = (EBP);
  /* 11801109 pop ebp */
  EBP = (pop32());
  /* 1180110a ret  */
  ESPCHK(0x11801030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x11801110 (1423 bytes, 533 insns) */
void f_11801110(void) {
  FTRACE(0x11801110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11801110 push ebp */
  push32((uint32_t)(EBP));
  /* 11801111 mov ebp, esp */
  EBP = (ESP);
  /* 11801113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11801116 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1180111d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180111f mov ax, word ptr [0x11822956] */
  AX = (r16((uint32_t)(0x11822956)));
  /* 11801125 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11801128 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1180112a mov cx, word ptr [0x11822958] */
  CX = (r16((uint32_t)(0x11822958)));
  /* 11801131 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801134 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801138 jne 0x11801142 */
  if (!C.zf) goto L_11801142;
  /* 1180113a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1180113d jmp 0x1180169b */
  goto L_1180169b;
L_11801142:;
  /* 11801142 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801145 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801148 push edx */
  push32((uint32_t)(EDX));
  /* 11801149 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1180114b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180114e push eax */
  push32((uint32_t)(EAX));
  /* 1180114f push 1 */
  push32((uint32_t)(0x1u));
  /* 11801151 call 0x11804a20 */
  push32(0x11801156u); f_11804a20();
  /* 11801156 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801159 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180115c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180115e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801164 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801167 push edx */
  push32((uint32_t)(EDX));
  /* 11801168 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1180116a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180116d push eax */
  push32((uint32_t)(EAX));
  /* 1180116e push 1 */
  push32((uint32_t)(0x1u));
  /* 11801170 call 0x11804a20 */
  push32(0x11801175u); f_11804a20();
  /* 11801175 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801178 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180117b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180117d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801180 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801183 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801186 push edx */
  push32((uint32_t)(EDX));
  /* 11801187 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11801189 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180118c push eax */
  push32((uint32_t)(EAX));
  /* 1180118d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180118f call 0x11804a20 */
  push32(0x11801194u); f_11804a20();
  /* 11801194 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801197 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180119a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180119c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180119f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118011a2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118011a5 push edx */
  push32((uint32_t)(EDX));
  /* 118011a6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 118011a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118011ab push eax */
  push32((uint32_t)(EAX));
  /* 118011ac push 1 */
  push32((uint32_t)(0x1u));
  /* 118011ae call 0x11804a20 */
  push32(0x118011b3u); f_11804a20();
  /* 118011b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118011b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118011b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118011bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118011be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118011c1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118011c4 push edx */
  push32((uint32_t)(EDX));
  /* 118011c5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 118011c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118011ca push eax */
  push32((uint32_t)(EAX));
  /* 118011cb push 1 */
  push32((uint32_t)(0x1u));
  /* 118011cd call 0x11804a20 */
  push32(0x118011d2u); f_11804a20();
  /* 118011d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118011d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118011d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118011da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118011dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118011e0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118011e3 push edx */
  push32((uint32_t)(EDX));
  /* 118011e4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 118011e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118011e9 push eax */
  push32((uint32_t)(EAX));
  /* 118011ea push 1 */
  push32((uint32_t)(0x1u));
  /* 118011ec call 0x11804a20 */
  push32(0x118011f1u); f_11804a20();
  /* 118011f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118011f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118011f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118011f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118011fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118011ff push edx */
  push32((uint32_t)(EDX));
  /* 11801200 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11801202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801205 push eax */
  push32((uint32_t)(EAX));
  /* 11801206 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801208 call 0x11804a20 */
  push32(0x1180120du); f_11804a20();
  /* 1180120d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801210 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801213 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801215 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180121b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180121e push edx */
  push32((uint32_t)(EDX));
  /* 1180121f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11801221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801224 push eax */
  push32((uint32_t)(EAX));
  /* 11801225 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801227 call 0x11804a20 */
  push32(0x1180122cu); f_11804a20();
  /* 1180122c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180122f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801232 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801234 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180123a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180123d push edx */
  push32((uint32_t)(EDX));
  /* 1180123e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 11801240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801243 push eax */
  push32((uint32_t)(EAX));
  /* 11801244 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801246 call 0x11804a20 */
  push32(0x1180124bu); f_11804a20();
  /* 1180124b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180124e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801251 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801253 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801256 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801259 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180125c push edx */
  push32((uint32_t)(EDX));
  /* 1180125d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1180125f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801262 push eax */
  push32((uint32_t)(EAX));
  /* 11801263 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801265 call 0x11804a20 */
  push32(0x1180126au); f_11804a20();
  /* 1180126a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180126d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801270 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801272 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801278 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180127b push edx */
  push32((uint32_t)(EDX));
  /* 1180127c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1180127e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801281 push eax */
  push32((uint32_t)(EAX));
  /* 11801282 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801284 call 0x11804a20 */
  push32(0x11801289u); f_11804a20();
  /* 11801289 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180128c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180128f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801291 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801294 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801297 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180129a push edx */
  push32((uint32_t)(EDX));
  /* 1180129b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1180129d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118012a0 push eax */
  push32((uint32_t)(EAX));
  /* 118012a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118012a3 call 0x11804a20 */
  push32(0x118012a8u); f_11804a20();
  /* 118012a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118012ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118012ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118012b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118012b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118012b6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118012b9 push edx */
  push32((uint32_t)(EDX));
  /* 118012ba push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 118012bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118012bf push eax */
  push32((uint32_t)(EAX));
  /* 118012c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118012c2 call 0x11804a20 */
  push32(0x118012c7u); f_11804a20();
  /* 118012c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118012ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118012cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118012cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118012d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118012d5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118012d8 push edx */
  push32((uint32_t)(EDX));
  /* 118012d9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118012db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118012de push eax */
  push32((uint32_t)(EAX));
  /* 118012df push 1 */
  push32((uint32_t)(0x1u));
  /* 118012e1 call 0x11804a20 */
  push32(0x118012e6u); f_11804a20();
  /* 118012e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118012e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118012ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118012ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118012f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118012f4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118012f7 push edx */
  push32((uint32_t)(EDX));
  /* 118012f8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 118012fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118012fd push eax */
  push32((uint32_t)(EAX));
  /* 118012fe push 1 */
  push32((uint32_t)(0x1u));
  /* 11801300 call 0x11804a20 */
  push32(0x11801305u); f_11804a20();
  /* 11801305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801308 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180130b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180130d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801310 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801313 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801316 push edx */
  push32((uint32_t)(EDX));
  /* 11801317 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11801319 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180131c push eax */
  push32((uint32_t)(EAX));
  /* 1180131d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180131f call 0x11804a20 */
  push32(0x11801324u); f_11804a20();
  /* 11801324 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180132a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180132c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180132f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801332 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801335 push edx */
  push32((uint32_t)(EDX));
  /* 11801336 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 11801338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180133b push eax */
  push32((uint32_t)(EAX));
  /* 1180133c push 1 */
  push32((uint32_t)(0x1u));
  /* 1180133e call 0x11804a20 */
  push32(0x11801343u); f_11804a20();
  /* 11801343 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801346 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801349 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180134b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180134e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801351 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801354 push edx */
  push32((uint32_t)(EDX));
  /* 11801355 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 11801357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180135a push eax */
  push32((uint32_t)(EAX));
  /* 1180135b push 1 */
  push32((uint32_t)(0x1u));
  /* 1180135d call 0x11804a20 */
  push32(0x11801362u); f_11804a20();
  /* 11801362 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801365 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801368 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180136a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180136d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801370 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801373 push edx */
  push32((uint32_t)(EDX));
  /* 11801374 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11801376 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801379 push eax */
  push32((uint32_t)(EAX));
  /* 1180137a push 1 */
  push32((uint32_t)(0x1u));
  /* 1180137c call 0x11804a20 */
  push32(0x11801381u); f_11804a20();
  /* 11801381 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801384 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801387 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801389 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180138c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180138f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801392 push edx */
  push32((uint32_t)(EDX));
  /* 11801393 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11801395 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801398 push eax */
  push32((uint32_t)(EAX));
  /* 11801399 push 1 */
  push32((uint32_t)(0x1u));
  /* 1180139b call 0x11804a20 */
  push32(0x118013a0u); f_11804a20();
  /* 118013a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118013a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118013a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118013a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118013ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118013ae add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118013b1 push edx */
  push32((uint32_t)(EDX));
  /* 118013b2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 118013b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118013b7 push eax */
  push32((uint32_t)(EAX));
  /* 118013b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 118013ba call 0x11804a20 */
  push32(0x118013bfu); f_11804a20();
  /* 118013bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118013c2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118013c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118013c7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118013ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118013cd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118013d0 push edx */
  push32((uint32_t)(EDX));
  /* 118013d1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 118013d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118013d6 push eax */
  push32((uint32_t)(EAX));
  /* 118013d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118013d9 call 0x11804a20 */
  push32(0x118013deu); f_11804a20();
  /* 118013de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118013e1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118013e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118013e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118013e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118013ec add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118013ef push edx */
  push32((uint32_t)(EDX));
  /* 118013f0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 118013f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118013f5 push eax */
  push32((uint32_t)(EAX));
  /* 118013f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 118013f8 call 0x11804a20 */
  push32(0x118013fdu); f_11804a20();
  /* 118013fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801403 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801405 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180140b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180140e push edx */
  push32((uint32_t)(EDX));
  /* 1180140f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11801411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801414 push eax */
  push32((uint32_t)(EAX));
  /* 11801415 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801417 call 0x11804a20 */
  push32(0x1180141cu); f_11804a20();
  /* 1180141c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180141f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801422 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801424 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180142a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180142d push edx */
  push32((uint32_t)(EDX));
  /* 1180142e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 11801430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801433 push eax */
  push32((uint32_t)(EAX));
  /* 11801434 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801436 call 0x11804a20 */
  push32(0x1180143bu); f_11804a20();
  /* 1180143b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180143e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801441 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801443 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801446 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801449 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180144c push edx */
  push32((uint32_t)(EDX));
  /* 1180144d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1180144f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801452 push eax */
  push32((uint32_t)(EAX));
  /* 11801453 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801455 call 0x11804a20 */
  push32(0x1180145au); f_11804a20();
  /* 1180145a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180145d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801460 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801462 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801468 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180146b push edx */
  push32((uint32_t)(EDX));
  /* 1180146c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1180146e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801471 push eax */
  push32((uint32_t)(EAX));
  /* 11801472 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801474 call 0x11804a20 */
  push32(0x11801479u); f_11804a20();
  /* 11801479 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180147c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180147f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801481 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801487 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180148a push edx */
  push32((uint32_t)(EDX));
  /* 1180148b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1180148d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801490 push eax */
  push32((uint32_t)(EAX));
  /* 11801491 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801493 call 0x11804a20 */
  push32(0x11801498u); f_11804a20();
  /* 11801498 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180149b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180149e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118014a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118014a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118014a6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118014a9 push edx */
  push32((uint32_t)(EDX));
  /* 118014aa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 118014ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118014af push eax */
  push32((uint32_t)(EAX));
  /* 118014b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118014b2 call 0x11804a20 */
  push32(0x118014b7u); f_11804a20();
  /* 118014b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118014ba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118014bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118014bf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118014c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118014c5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118014c8 push edx */
  push32((uint32_t)(EDX));
  /* 118014c9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 118014cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118014ce push eax */
  push32((uint32_t)(EAX));
  /* 118014cf push 1 */
  push32((uint32_t)(0x1u));
  /* 118014d1 call 0x11804a20 */
  push32(0x118014d6u); f_11804a20();
  /* 118014d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118014d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118014dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118014de mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118014e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118014e4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118014e7 push edx */
  push32((uint32_t)(EDX));
  /* 118014e8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 118014ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118014ed push eax */
  push32((uint32_t)(EAX));
  /* 118014ee push 1 */
  push32((uint32_t)(0x1u));
  /* 118014f0 call 0x11804a20 */
  push32(0x118014f5u); f_11804a20();
  /* 118014f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118014f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118014fb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118014fd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801500 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801503 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801506 push edx */
  push32((uint32_t)(EDX));
  /* 11801507 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11801509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180150c push eax */
  push32((uint32_t)(EAX));
  /* 1180150d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180150f call 0x11804a20 */
  push32(0x11801514u); f_11804a20();
  /* 11801514 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801517 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180151a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180151c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180151f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801522 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801528 push edx */
  push32((uint32_t)(EDX));
  /* 11801529 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1180152b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180152e push eax */
  push32((uint32_t)(EAX));
  /* 1180152f push 1 */
  push32((uint32_t)(0x1u));
  /* 11801531 call 0x11804a20 */
  push32(0x11801536u); f_11804a20();
  /* 11801536 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801539 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180153c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180153e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801544 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180154a push edx */
  push32((uint32_t)(EDX));
  /* 1180154b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1180154d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801550 push eax */
  push32((uint32_t)(EAX));
  /* 11801551 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801553 call 0x11804a20 */
  push32(0x11801558u); f_11804a20();
  /* 11801558 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180155b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180155e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801566 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180156c push edx */
  push32((uint32_t)(EDX));
  /* 1180156d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1180156f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801572 push eax */
  push32((uint32_t)(EAX));
  /* 11801573 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801575 call 0x11804a20 */
  push32(0x1180157au); f_11804a20();
  /* 1180157a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180157d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801580 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801582 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801588 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180158e push edx */
  push32((uint32_t)(EDX));
  /* 1180158f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11801591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801594 push eax */
  push32((uint32_t)(EAX));
  /* 11801595 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801597 call 0x11804a20 */
  push32(0x1180159cu); f_11804a20();
  /* 1180159c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180159f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118015a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118015a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118015a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118015aa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118015b0 push edx */
  push32((uint32_t)(EDX));
  /* 118015b1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 118015b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118015b6 push eax */
  push32((uint32_t)(EAX));
  /* 118015b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 118015b9 call 0x11804a20 */
  push32(0x118015beu); f_11804a20();
  /* 118015be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118015c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118015c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118015c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118015c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118015cc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118015d2 push edx */
  push32((uint32_t)(EDX));
  /* 118015d3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 118015d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118015d8 push eax */
  push32((uint32_t)(EAX));
  /* 118015d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 118015db call 0x11804a20 */
  push32(0x118015e0u); f_11804a20();
  /* 118015e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118015e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118015e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118015e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118015eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118015ee add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118015f4 push edx */
  push32((uint32_t)(EDX));
  /* 118015f5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 118015f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118015fa push eax */
  push32((uint32_t)(EAX));
  /* 118015fb push 1 */
  push32((uint32_t)(0x1u));
  /* 118015fd call 0x11804a20 */
  push32(0x11801602u); f_11804a20();
  /* 11801602 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801605 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801608 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180160a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180160d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801610 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801616 push edx */
  push32((uint32_t)(EDX));
  /* 11801617 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11801619 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180161c push eax */
  push32((uint32_t)(EAX));
  /* 1180161d push 1 */
  push32((uint32_t)(0x1u));
  /* 1180161f call 0x11804a20 */
  push32(0x11801624u); f_11804a20();
  /* 11801624 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801627 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180162a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180162c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1180162f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801632 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801638 push edx */
  push32((uint32_t)(EDX));
  /* 11801639 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1180163b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180163e push eax */
  push32((uint32_t)(EAX));
  /* 1180163f push 1 */
  push32((uint32_t)(0x1u));
  /* 11801641 call 0x11804a20 */
  push32(0x11801646u); f_11804a20();
  /* 11801646 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801649 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180164c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1180164e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801651 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801654 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180165a push edx */
  push32((uint32_t)(EDX));
  /* 1180165b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1180165d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801660 push eax */
  push32((uint32_t)(EAX));
  /* 11801661 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801663 call 0x11804a20 */
  push32(0x11801668u); f_11804a20();
  /* 11801668 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180166b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180166e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801670 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801673 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801676 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180167c push edx */
  push32((uint32_t)(EDX));
  /* 1180167d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11801682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801685 push eax */
  push32((uint32_t)(EAX));
  /* 11801686 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801688 call 0x11804a20 */
  push32(0x1180168du); f_11804a20();
  /* 1180168d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801690 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11801693 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801695 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11801698 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1180169b:;
  /* 1180169b mov esp, ebp */
  ESP = (EBP);
  /* 1180169d pop ebp */
  EBP = (pop32());
  /* 1180169e ret  */
  ESPCHK(0x11801110u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x118016a0 (779 bytes, 265 insns) */
void f_118016a0(void) {
  FTRACE(0x118016a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118016a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118016a1 mov ebp, esp */
  EBP = (ESP);
  /* 118016a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118016a7 jne 0x118016ae */
  if (!C.zf) goto L_118016ae;
  /* 118016a9 jmp 0x118019a9 */
  goto L_118019a9;
L_118016ae:;
  /* 118016ae push 2 */
  push32((uint32_t)(0x2u));
  /* 118016b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118016b3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118016b6 push ecx */
  push32((uint32_t)(ECX));
  /* 118016b7 call 0x117f72f0 */
  push32(0x118016bcu); f_117f72f0();
  /* 118016bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118016bf push 2 */
  push32((uint32_t)(0x2u));
  /* 118016c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118016c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118016c7 push eax */
  push32((uint32_t)(EAX));
  /* 118016c8 call 0x117f72f0 */
  push32(0x118016cdu); f_117f72f0();
  /* 118016cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118016d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118016d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118016d5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118016d8 push edx */
  push32((uint32_t)(EDX));
  /* 118016d9 call 0x117f72f0 */
  push32(0x118016deu); f_117f72f0();
  /* 118016de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118016e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118016e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118016e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118016e9 push ecx */
  push32((uint32_t)(ECX));
  /* 118016ea call 0x117f72f0 */
  push32(0x118016efu); f_117f72f0();
  /* 118016ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118016f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118016f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118016f7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118016fa push eax */
  push32((uint32_t)(EAX));
  /* 118016fb call 0x117f72f0 */
  push32(0x11801700u); f_117f72f0();
  /* 11801700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801703 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801705 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801708 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1180170b push edx */
  push32((uint32_t)(EDX));
  /* 1180170c call 0x117f72f0 */
  push32(0x11801711u); f_117f72f0();
  /* 11801711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801714 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801719 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1180171b push ecx */
  push32((uint32_t)(ECX));
  /* 1180171c call 0x117f72f0 */
  push32(0x11801721u); f_117f72f0();
  /* 11801721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801724 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801726 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801729 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1180172c push eax */
  push32((uint32_t)(EAX));
  /* 1180172d call 0x117f72f0 */
  push32(0x11801732u); f_117f72f0();
  /* 11801732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801735 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801737 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180173a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1180173d push edx */
  push32((uint32_t)(EDX));
  /* 1180173e call 0x117f72f0 */
  push32(0x11801743u); f_117f72f0();
  /* 11801743 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801746 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801748 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180174b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1180174e push ecx */
  push32((uint32_t)(ECX));
  /* 1180174f call 0x117f72f0 */
  push32(0x11801754u); f_117f72f0();
  /* 11801754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801757 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801759 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180175c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1180175f push eax */
  push32((uint32_t)(EAX));
  /* 11801760 call 0x117f72f0 */
  push32(0x11801765u); f_117f72f0();
  /* 11801765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801768 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180176a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180176d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11801770 push edx */
  push32((uint32_t)(EDX));
  /* 11801771 call 0x117f72f0 */
  push32(0x11801776u); f_117f72f0();
  /* 11801776 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801779 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180177b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180177e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11801781 push ecx */
  push32((uint32_t)(ECX));
  /* 11801782 call 0x117f72f0 */
  push32(0x11801787u); f_117f72f0();
  /* 11801787 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180178a push 2 */
  push32((uint32_t)(0x2u));
  /* 1180178c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180178f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11801792 push eax */
  push32((uint32_t)(EAX));
  /* 11801793 call 0x117f72f0 */
  push32(0x11801798u); f_117f72f0();
  /* 11801798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180179b push 2 */
  push32((uint32_t)(0x2u));
  /* 1180179d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017a0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 118017a3 push edx */
  push32((uint32_t)(EDX));
  /* 118017a4 call 0x117f72f0 */
  push32(0x118017a9u); f_117f72f0();
  /* 118017a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118017ac push 2 */
  push32((uint32_t)(0x2u));
  /* 118017ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017b1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 118017b4 push ecx */
  push32((uint32_t)(ECX));
  /* 118017b5 call 0x117f72f0 */
  push32(0x118017bau); f_117f72f0();
  /* 118017ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118017bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118017bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017c2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 118017c5 push eax */
  push32((uint32_t)(EAX));
  /* 118017c6 call 0x117f72f0 */
  push32(0x118017cbu); f_117f72f0();
  /* 118017cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118017ce push 2 */
  push32((uint32_t)(0x2u));
  /* 118017d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017d3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 118017d6 push edx */
  push32((uint32_t)(EDX));
  /* 118017d7 call 0x117f72f0 */
  push32(0x118017dcu); f_117f72f0();
  /* 118017dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118017df push 2 */
  push32((uint32_t)(0x2u));
  /* 118017e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017e4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 118017e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118017e8 call 0x117f72f0 */
  push32(0x118017edu); f_117f72f0();
  /* 118017ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118017f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118017f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118017f5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 118017f8 push eax */
  push32((uint32_t)(EAX));
  /* 118017f9 call 0x117f72f0 */
  push32(0x118017feu); f_117f72f0();
  /* 118017fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801801 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801806 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11801809 push edx */
  push32((uint32_t)(EDX));
  /* 1180180a call 0x117f72f0 */
  push32(0x1180180fu); f_117f72f0();
  /* 1180180f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801812 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801814 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801817 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1180181a push ecx */
  push32((uint32_t)(ECX));
  /* 1180181b call 0x117f72f0 */
  push32(0x11801820u); f_117f72f0();
  /* 11801820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801823 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801825 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801828 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1180182b push eax */
  push32((uint32_t)(EAX));
  /* 1180182c call 0x117f72f0 */
  push32(0x11801831u); f_117f72f0();
  /* 11801831 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801834 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801836 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801839 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1180183c push edx */
  push32((uint32_t)(EDX));
  /* 1180183d call 0x117f72f0 */
  push32(0x11801842u); f_117f72f0();
  /* 11801842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801845 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180184a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1180184d push ecx */
  push32((uint32_t)(ECX));
  /* 1180184e call 0x117f72f0 */
  push32(0x11801853u); f_117f72f0();
  /* 11801853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801856 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180185b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1180185e push eax */
  push32((uint32_t)(EAX));
  /* 1180185f call 0x117f72f0 */
  push32(0x11801864u); f_117f72f0();
  /* 11801864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801867 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180186c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1180186f push edx */
  push32((uint32_t)(EDX));
  /* 11801870 call 0x117f72f0 */
  push32(0x11801875u); f_117f72f0();
  /* 11801875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801878 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180187a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180187d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11801880 push ecx */
  push32((uint32_t)(ECX));
  /* 11801881 call 0x117f72f0 */
  push32(0x11801886u); f_117f72f0();
  /* 11801886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801889 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180188b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180188e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11801891 push eax */
  push32((uint32_t)(EAX));
  /* 11801892 call 0x117f72f0 */
  push32(0x11801897u); f_117f72f0();
  /* 11801897 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180189a push 2 */
  push32((uint32_t)(0x2u));
  /* 1180189c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180189f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 118018a2 push edx */
  push32((uint32_t)(EDX));
  /* 118018a3 call 0x117f72f0 */
  push32(0x118018a8u); f_117f72f0();
  /* 118018a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118018ab push 2 */
  push32((uint32_t)(0x2u));
  /* 118018ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118018b0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 118018b3 push ecx */
  push32((uint32_t)(ECX));
  /* 118018b4 call 0x117f72f0 */
  push32(0x118018b9u); f_117f72f0();
  /* 118018b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118018bc push 2 */
  push32((uint32_t)(0x2u));
  /* 118018be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118018c1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 118018c4 push eax */
  push32((uint32_t)(EAX));
  /* 118018c5 call 0x117f72f0 */
  push32(0x118018cau); f_117f72f0();
  /* 118018ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118018cd push 2 */
  push32((uint32_t)(0x2u));
  /* 118018cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118018d2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 118018d8 push edx */
  push32((uint32_t)(EDX));
  /* 118018d9 call 0x117f72f0 */
  push32(0x118018deu); f_117f72f0();
  /* 118018de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118018e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118018e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118018e6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 118018ec push ecx */
  push32((uint32_t)(ECX));
  /* 118018ed call 0x117f72f0 */
  push32(0x118018f2u); f_117f72f0();
  /* 118018f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118018f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118018f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118018fa mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11801900 push eax */
  push32((uint32_t)(EAX));
  /* 11801901 call 0x117f72f0 */
  push32(0x11801906u); f_117f72f0();
  /* 11801906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801909 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180190b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180190e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11801914 push edx */
  push32((uint32_t)(EDX));
  /* 11801915 call 0x117f72f0 */
  push32(0x1180191au); f_117f72f0();
  /* 1180191a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180191d push 2 */
  push32((uint32_t)(0x2u));
  /* 1180191f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801922 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 11801928 push ecx */
  push32((uint32_t)(ECX));
  /* 11801929 call 0x117f72f0 */
  push32(0x1180192eu); f_117f72f0();
  /* 1180192e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801931 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801933 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801936 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1180193c push eax */
  push32((uint32_t)(EAX));
  /* 1180193d call 0x117f72f0 */
  push32(0x11801942u); f_117f72f0();
  /* 11801942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801945 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180194a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 11801950 push edx */
  push32((uint32_t)(EDX));
  /* 11801951 call 0x117f72f0 */
  push32(0x11801956u); f_117f72f0();
  /* 11801956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801959 push 2 */
  push32((uint32_t)(0x2u));
  /* 1180195b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180195e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11801964 push ecx */
  push32((uint32_t)(ECX));
  /* 11801965 call 0x117f72f0 */
  push32(0x1180196au); f_117f72f0();
  /* 1180196a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180196d push 2 */
  push32((uint32_t)(0x2u));
  /* 1180196f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801972 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11801978 push eax */
  push32((uint32_t)(EAX));
  /* 11801979 call 0x117f72f0 */
  push32(0x1180197eu); f_117f72f0();
  /* 1180197e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801981 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801986 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1180198c push edx */
  push32((uint32_t)(EDX));
  /* 1180198d call 0x117f72f0 */
  push32(0x11801992u); f_117f72f0();
  /* 11801992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801995 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801997 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180199a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 118019a0 push ecx */
  push32((uint32_t)(ECX));
  /* 118019a1 call 0x117f72f0 */
  push32(0x118019a6u); f_117f72f0();
  /* 118019a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118019a9:;
  /* 118019a9 pop ebp */
  EBP = (pop32());
  /* 118019aa ret  */
  ESPCHK(0x118016a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100119b0 @ 0x118019b0 (678 bytes, 180 insns) */
void f_118019b0(void) {
  FTRACE(0x118019b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118019b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118019b1 mov ebp, esp */
  EBP = (ESP);
  /* 118019b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118019b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118019bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118019bf mov ax, word ptr [0x11822952] */
  AX = (r16((uint32_t)(0x11822952)));
  /* 118019c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118019c8 cmp dword ptr [0x118228f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118019cf je 0x11801b2a */
  if (C.zf) goto L_11801b2a;
  /* 118019d5 push 0x11822920 */
  push32((uint32_t)(0x11822920u));
  /* 118019da push 0xe */
  push32((uint32_t)(0xeu));
  /* 118019dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118019df push ecx */
  push32((uint32_t)(ECX));
  /* 118019e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 118019e2 call 0x11804a20 */
  push32(0x118019e7u); f_11804a20();
  /* 118019e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118019ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118019ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 118019ef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118019f2 push 0x11822924 */
  push32((uint32_t)(0x11822924u));
  /* 118019f7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 118019f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118019fc push eax */
  push32((uint32_t)(EAX));
  /* 118019fd push 1 */
  push32((uint32_t)(0x1u));
  /* 118019ff call 0x11804a20 */
  push32(0x11801a04u); f_11804a20();
  /* 11801a04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801a0a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801a0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801a0f push 0x11822928 */
  push32((uint32_t)(0x11822928u));
  /* 11801a14 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11801a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801a19 push edx */
  push32((uint32_t)(EDX));
  /* 11801a1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11801a1c call 0x11804a20 */
  push32(0x11801a21u); f_11804a20();
  /* 11801a21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801a27 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801a29 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801a2c mov edx, dword ptr [0x11822928] */
  EDX = (r32((uint32_t)(0x11822928)));
  /* 11801a32 push edx */
  push32((uint32_t)(EDX));
  /* 11801a33 call 0x11801c60 */
  push32(0x11801a38u); f_11801c60();
  /* 11801a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801a3f je 0x11801a99 */
  if (C.zf) goto L_11801a99;
  /* 11801a41 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801a43 mov eax, dword ptr [0x11822920] */
  EAX = (r32((uint32_t)(0x11822920)));
  /* 11801a48 push eax */
  push32((uint32_t)(EAX));
  /* 11801a49 call 0x117f72f0 */
  push32(0x11801a4eu); f_117f72f0();
  /* 11801a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a51 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801a53 mov ecx, dword ptr [0x11822924] */
  ECX = (r32((uint32_t)(0x11822924)));
  /* 11801a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11801a5a call 0x117f72f0 */
  push32(0x11801a5fu); f_117f72f0();
  /* 11801a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801a64 mov edx, dword ptr [0x11822928] */
  EDX = (r32((uint32_t)(0x11822928)));
  /* 11801a6a push edx */
  push32((uint32_t)(EDX));
  /* 11801a6b call 0x117f72f0 */
  push32(0x11801a70u); f_117f72f0();
  /* 11801a70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801a73 mov dword ptr [0x11822920], 0 */
  w32((uint32_t)(0x11822920), (0x0u));
  /* 11801a7d mov dword ptr [0x11822924], 0 */
  w32((uint32_t)(0x11822924), (0x0u));
  /* 11801a87 mov dword ptr [0x11822928], 0 */
  w32((uint32_t)(0x11822928), (0x0u));
  /* 11801a91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11801a94 jmp 0x11801c52 */
  goto L_11801c52;
L_11801a99:;
  /* 11801a99 mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801a9e cmp dword ptr [eax], 0x11821d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11821d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801aa4 je 0x11801ae0 */
  if (C.zf) goto L_11801ae0;
  /* 11801aa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801aa8 mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801aae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11801ab0 push edx */
  push32((uint32_t)(EDX));
  /* 11801ab1 call 0x117f72f0 */
  push32(0x11801ab6u); f_117f72f0();
  /* 11801ab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801abb mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801ac0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11801ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 11801ac4 call 0x117f72f0 */
  push32(0x11801ac9u); f_117f72f0();
  /* 11801ac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801acc push 2 */
  push32((uint32_t)(0x2u));
  /* 11801ace mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801ad4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11801ad7 push eax */
  push32((uint32_t)(EAX));
  /* 11801ad8 call 0x117f72f0 */
  push32(0x11801addu); f_117f72f0();
  /* 11801add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11801ae0:;
  /* 11801ae0 mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801ae6 mov edx, dword ptr [0x11822920] */
  EDX = (r32((uint32_t)(0x11822920)));
  /* 11801aec mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11801aee mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801af3 mov ecx, dword ptr [0x11822924] */
  ECX = (r32((uint32_t)(0x11822924)));
  /* 11801af9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11801afc mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801b02 mov eax, dword ptr [0x11822928] */
  EAX = (r32((uint32_t)(0x11822928)));
  /* 11801b07 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11801b0a mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801b10 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11801b12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11801b14 mov byte ptr [0x11820ea8], al */
  w8((uint32_t)(0x11820ea8), (AL));
  /* 11801b19 mov dword ptr [0x11820eac], 1 */
  w32((uint32_t)(0x11820eac), (0x1u));
  /* 11801b23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11801b25 jmp 0x11801c52 */
  goto L_11801c52;
L_11801b2a:;
  /* 11801b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 11801b2c mov ecx, dword ptr [0x11822920] */
  ECX = (r32((uint32_t)(0x11822920)));
  /* 11801b32 push ecx */
  push32((uint32_t)(ECX));
  /* 11801b33 call 0x117f72f0 */
  push32(0x11801b38u); f_117f72f0();
  /* 11801b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 11801b3d mov edx, dword ptr [0x11822924] */
  EDX = (r32((uint32_t)(0x11822924)));
  /* 11801b43 push edx */
  push32((uint32_t)(EDX));
  /* 11801b44 call 0x117f72f0 */
  push32(0x11801b49u); f_117f72f0();
  /* 11801b49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801b4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11801b4e mov eax, dword ptr [0x11822928] */
  EAX = (r32((uint32_t)(0x11822928)));
  /* 11801b53 push eax */
  push32((uint32_t)(EAX));
  /* 11801b54 call 0x117f72f0 */
  push32(0x11801b59u); f_117f72f0();
  /* 11801b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801b5c mov dword ptr [0x11822920], 0 */
  w32((uint32_t)(0x11822920), (0x0u));
  /* 11801b66 mov dword ptr [0x11822924], 0 */
  w32((uint32_t)(0x11822924), (0x0u));
  /* 11801b70 mov dword ptr [0x11822928], 0 */
  w32((uint32_t)(0x11822928), (0x0u));
  /* 11801b7a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11801b7f push 0x1181e77c */
  push32((uint32_t)(0x1181e77cu));
  /* 11801b84 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801b86 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801b88 call 0x117f6860 */
  push32(0x11801b8du); f_117f6860();
  /* 11801b8d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801b90 mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801b96 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11801b98 mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801b9e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801ba1 jne 0x11801bab */
  if (!C.zf) goto L_11801bab;
  /* 11801ba3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11801ba6 jmp 0x11801c52 */
  goto L_11801c52;
L_11801bab:;
  /* 11801bab push 0x1181e74c */
  push32((uint32_t)(0x1181e74cu));
  /* 11801bb0 mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801bb5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11801bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11801bb8 call 0x117f9810 */
  push32(0x11801bbdu); f_117f9810();
  /* 11801bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801bc0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11801bc5 push 0x1181e77c */
  push32((uint32_t)(0x1181e77cu));
  /* 11801bca push 2 */
  push32((uint32_t)(0x2u));
  /* 11801bcc push 2 */
  push32((uint32_t)(0x2u));
  /* 11801bce call 0x117f6860 */
  push32(0x11801bd3u); f_117f6860();
  /* 11801bd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801bd6 mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801bdc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11801bdf mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801be4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801be8 jne 0x11801bef */
  if (!C.zf) goto L_11801bef;
  /* 11801bea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11801bed jmp 0x11801c52 */
  goto L_11801c52;
L_11801bef:;
  /* 11801bef mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801bf5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11801bf8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11801bfb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11801c00 push 0x1181e77c */
  push32((uint32_t)(0x1181e77cu));
  /* 11801c05 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801c07 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801c09 call 0x117f6860 */
  push32(0x11801c0eu); f_117f6860();
  /* 11801c0e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801c11 mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801c17 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11801c1a mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801c20 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801c24 jne 0x11801c2b */
  if (!C.zf) goto L_11801c2b;
  /* 11801c26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11801c29 jmp 0x11801c52 */
  goto L_11801c52;
L_11801c2b:;
  /* 11801c2b mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801c30 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11801c33 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11801c36 mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801c3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11801c3e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11801c40 mov byte ptr [0x11820ea8], cl */
  w8((uint32_t)(0x11820ea8), (CL));
  /* 11801c46 mov dword ptr [0x11820eac], 1 */
  w32((uint32_t)(0x11820eac), (0x1u));
  /* 11801c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11801c52:;
  /* 11801c52 mov esp, ebp */
  ESP = (EBP);
  /* 11801c54 pop ebp */
  EBP = (pop32());
  /* 11801c55 ret  */
  ESPCHK(0x118019b0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11801c60 (125 bytes, 49 insns) */
void f_11801c60(void) {
  FTRACE(0x11801c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11801c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11801c61 mov ebp, esp */
  EBP = (ESP);
  /* 11801c63 push ecx */
  push32((uint32_t)(ECX));
L_11801c64:;
  /* 11801c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11801c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11801c6c je 0x11801cd9 */
  if (C.zf) goto L_11801cd9;
  /* 11801c6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c71 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11801c74 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801c77 jl 0x11801c9d */
  if ((C.sf!=C.of)) goto L_11801c9d;
  /* 11801c79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11801c7f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801c82 jg 0x11801c9d */
  if ((!C.zf&&C.sf==C.of)) goto L_11801c9d;
  /* 11801c84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11801c8a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11801c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c90 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11801c92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801c95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801c98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11801c9b jmp 0x11801cd7 */
  goto L_11801cd7;
L_11801c9d:;
  /* 11801c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801ca0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11801ca3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801ca6 jne 0x11801cce */
  if (!C.zf) goto L_11801cce;
  /* 11801ca8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801cab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11801cae:;
  /* 11801cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801cb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801cb4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11801cb7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11801cb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801cbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11801cc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801cc5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11801cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11801cca jne 0x11801cae */
  if (!C.zf) goto L_11801cae;
  /* 11801ccc jmp 0x11801cd7 */
  goto L_11801cd7;
L_11801cce:;
  /* 11801cce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801cd4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11801cd7:;
  /* 11801cd7 jmp 0x11801c64 */
  goto L_11801c64;
L_11801cd9:;
  /* 11801cd9 mov esp, ebp */
  ESP = (EBP);
  /* 11801cdb pop ebp */
  EBP = (pop32());
  /* 11801cdc ret  */
  ESPCHK(0x11801c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ce0 @ 0x11801ce0 (304 bytes, 85 insns) */
void f_11801ce0(void) {
  FTRACE(0x11801ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11801ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11801ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11801ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11801ce4 cmp dword ptr [0x118228f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801ceb je 0x11801dac */
  if (C.zf) goto L_11801dac;
  /* 11801cf1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11801cf3 push 0x1181e788 */
  push32((uint32_t)(0x1181e788u));
  /* 11801cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801cfa push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11801cfc push 1 */
  push32((uint32_t)(0x1u));
  /* 11801cfe call 0x117f6c70 */
  push32(0x11801d03u); f_117f6c70();
  /* 11801d03 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801d06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11801d09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801d0d jne 0x11801d19 */
  if (!C.zf) goto L_11801d19;
  /* 11801d0f mov eax, 1 */
  EAX = (0x1u);
  /* 11801d14 jmp 0x11801e0c */
  goto L_11801e0c;
L_11801d19:;
  /* 11801d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d1c push eax */
  push32((uint32_t)(EAX));
  /* 11801d1d call 0x11801e10 */
  push32(0x11801d22u); f_11801e10();
  /* 11801d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11801d27 je 0x11801d4d */
  if (C.zf) goto L_11801d4d;
  /* 11801d29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d2c push ecx */
  push32((uint32_t)(ECX));
  /* 11801d2d call 0x118020a0 */
  push32(0x11801d32u); f_118020a0();
  /* 11801d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801d35 push 2 */
  push32((uint32_t)(0x2u));
  /* 11801d37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d3a push edx */
  push32((uint32_t)(EDX));
  /* 11801d3b call 0x117f72f0 */
  push32(0x11801d40u); f_117f72f0();
  /* 11801d40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801d43 mov eax, 1 */
  EAX = (0x1u);
  /* 11801d48 jmp 0x11801e0c */
  goto L_11801e0c;
L_11801d4d:;
  /* 11801d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d50 mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801d56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11801d58 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11801d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d5d mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801d63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11801d66 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11801d69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d6c mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801d72 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11801d75 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11801d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801d7b mov dword ptr [0x11821d88], eax */
  w32((uint32_t)(0x11821d88), (EAX));
  /* 11801d80 mov ecx, dword ptr [0x1182292c] */
  ECX = (r32((uint32_t)(0x1182292c)));
  /* 11801d86 push ecx */
  push32((uint32_t)(ECX));
  /* 11801d87 call 0x118020a0 */
  push32(0x11801d8cu); f_118020a0();
  /* 11801d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801d8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11801d91 mov edx, dword ptr [0x1182292c] */
  EDX = (r32((uint32_t)(0x1182292c)));
  /* 11801d97 push edx */
  push32((uint32_t)(EDX));
  /* 11801d98 call 0x117f72f0 */
  push32(0x11801d9du); f_117f72f0();
  /* 11801d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801da0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801da3 mov dword ptr [0x1182292c], eax */
  w32((uint32_t)(0x1182292c), (EAX));
  /* 11801da8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11801daa jmp 0x11801e0c */
  goto L_11801e0c;
L_11801dac:;
  /* 11801dac mov ecx, dword ptr [0x11821d88] */
  ECX = (r32((uint32_t)(0x11821d88)));
  /* 11801db2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11801db4 mov dword ptr [0x11821d58], edx */
  w32((uint32_t)(0x11821d58), (EDX));
  /* 11801dba mov eax, dword ptr [0x11821d88] */
  EAX = (r32((uint32_t)(0x11821d88)));
  /* 11801dbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11801dc2 mov dword ptr [0x11821d5c], ecx */
  w32((uint32_t)(0x11821d5c), (ECX));
  /* 11801dc8 mov edx, dword ptr [0x11821d88] */
  EDX = (r32((uint32_t)(0x11821d88)));
  /* 11801dce mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11801dd1 mov dword ptr [0x11821d60], eax */
  w32((uint32_t)(0x11821d60), (EAX));
  /* 11801dd6 mov dword ptr [0x11821d88], 0x11821d58 */
  w32((uint32_t)(0x11821d88), (0x11821d58u));
  /* 11801de0 mov ecx, dword ptr [0x1182292c] */
  ECX = (r32((uint32_t)(0x1182292c)));
  /* 11801de6 push ecx */
  push32((uint32_t)(ECX));
  /* 11801de7 call 0x118020a0 */
  push32(0x11801decu); f_118020a0();
  /* 11801dec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801def push 2 */
  push32((uint32_t)(0x2u));
  /* 11801df1 mov edx, dword ptr [0x1182292c] */
  EDX = (r32((uint32_t)(0x1182292c)));
  /* 11801df7 push edx */
  push32((uint32_t)(EDX));
  /* 11801df8 call 0x117f72f0 */
  push32(0x11801dfdu); f_117f72f0();
  /* 11801dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e00 mov dword ptr [0x1182292c], 0 */
  w32((uint32_t)(0x1182292c), (0x0u));
  /* 11801e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11801e0c:;
  /* 11801e0c mov esp, ebp */
  ESP = (EBP);
  /* 11801e0e pop ebp */
  EBP = (pop32());
  /* 11801e0f ret  */
  ESPCHK(0x11801ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e10 @ 0x11801e10 (525 bytes, 200 insns) */
void f_11801e10(void) {
  FTRACE(0x11801e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11801e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11801e11 mov ebp, esp */
  EBP = (ESP);
  /* 11801e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11801e16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11801e1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11801e1f mov ax, word ptr [0x1182294c] */
  AX = (r16((uint32_t)(0x1182294c)));
  /* 11801e25 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11801e28 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11801e2c jne 0x11801e36 */
  if (!C.zf) goto L_11801e36;
  /* 11801e2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11801e31 jmp 0x11802019 */
  goto L_11802019;
L_11801e36:;
  /* 11801e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801e39 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e3c push ecx */
  push32((uint32_t)(ECX));
  /* 11801e3d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11801e3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801e42 push edx */
  push32((uint32_t)(EDX));
  /* 11801e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801e45 call 0x11804a20 */
  push32(0x11801e4au); f_11804a20();
  /* 11801e4a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e4d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801e50 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801e52 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801e55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801e58 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e5b push edx */
  push32((uint32_t)(EDX));
  /* 11801e5c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11801e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801e61 push eax */
  push32((uint32_t)(EAX));
  /* 11801e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801e64 call 0x11804a20 */
  push32(0x11801e69u); f_11804a20();
  /* 11801e69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801e6f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801e71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801e74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801e77 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e7a push edx */
  push32((uint32_t)(EDX));
  /* 11801e7b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11801e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801e80 push eax */
  push32((uint32_t)(EAX));
  /* 11801e81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801e83 call 0x11804a20 */
  push32(0x11801e88u); f_11804a20();
  /* 11801e88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801e8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801e90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801e93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801e96 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801e99 push edx */
  push32((uint32_t)(EDX));
  /* 11801e9a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11801e9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801e9f push eax */
  push32((uint32_t)(EAX));
  /* 11801ea0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11801ea2 call 0x11804a20 */
  push32(0x11801ea7u); f_11804a20();
  /* 11801ea7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801eaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801ead or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801eaf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801eb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801eb5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801eb8 push edx */
  push32((uint32_t)(EDX));
  /* 11801eb9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11801ebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801ebe push eax */
  push32((uint32_t)(EAX));
  /* 11801ebf push 1 */
  push32((uint32_t)(0x1u));
  /* 11801ec1 call 0x11804a20 */
  push32(0x11801ec6u); f_11804a20();
  /* 11801ec6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ec9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801ecc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801ece mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801ed1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801ed4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11801ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11801ed8 call 0x11802020 */
  push32(0x11801eddu); f_11802020();
  /* 11801edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ee0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801ee3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 11801ee7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11801ee9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801eec push edx */
  push32((uint32_t)(EDX));
  /* 11801eed push 1 */
  push32((uint32_t)(0x1u));
  /* 11801eef call 0x11804a20 */
  push32(0x11801ef4u); f_11804a20();
  /* 11801ef4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801efa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801efc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801eff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f02 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f05 push edx */
  push32((uint32_t)(EDX));
  /* 11801f06 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11801f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801f0b push eax */
  push32((uint32_t)(EAX));
  /* 11801f0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11801f0e call 0x11804a20 */
  push32(0x11801f13u); f_11804a20();
  /* 11801f13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f16 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801f19 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801f1b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f21 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f24 push edx */
  push32((uint32_t)(EDX));
  /* 11801f25 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11801f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801f2a push eax */
  push32((uint32_t)(EAX));
  /* 11801f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 11801f2d call 0x11804a20 */
  push32(0x11801f32u); f_11804a20();
  /* 11801f32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f35 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801f38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801f3a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801f3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f40 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f43 push edx */
  push32((uint32_t)(EDX));
  /* 11801f44 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11801f46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801f49 push eax */
  push32((uint32_t)(EAX));
  /* 11801f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11801f4c call 0x11804a20 */
  push32(0x11801f51u); f_11804a20();
  /* 11801f51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801f57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801f59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f5f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f62 push edx */
  push32((uint32_t)(EDX));
  /* 11801f63 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11801f65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801f68 push eax */
  push32((uint32_t)(EAX));
  /* 11801f69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11801f6b call 0x11804a20 */
  push32(0x11801f70u); f_11804a20();
  /* 11801f70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801f76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801f78 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801f7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f7e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f81 push edx */
  push32((uint32_t)(EDX));
  /* 11801f82 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11801f84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801f87 push eax */
  push32((uint32_t)(EAX));
  /* 11801f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11801f8a call 0x11804a20 */
  push32(0x11801f8fu); f_11804a20();
  /* 11801f8f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801f92 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801f95 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801f97 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801f9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801f9d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fa0 push edx */
  push32((uint32_t)(EDX));
  /* 11801fa1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11801fa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801fa6 push eax */
  push32((uint32_t)(EAX));
  /* 11801fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11801fa9 call 0x11804a20 */
  push32(0x11801faeu); f_11804a20();
  /* 11801fae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801fb4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801fb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801fb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801fbc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fbf push edx */
  push32((uint32_t)(EDX));
  /* 11801fc0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11801fc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801fc5 push eax */
  push32((uint32_t)(EAX));
  /* 11801fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11801fc8 call 0x11804a20 */
  push32(0x11801fcdu); f_11804a20();
  /* 11801fcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801fd3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801fd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801fdb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fde push edx */
  push32((uint32_t)(EDX));
  /* 11801fdf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11801fe1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11801fe4 push eax */
  push32((uint32_t)(EAX));
  /* 11801fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11801fe7 call 0x11804a20 */
  push32(0x11801fecu); f_11804a20();
  /* 11801fec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11801fef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11801ff2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11801ff4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11801ff7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11801ffa add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11801ffd push edx */
  push32((uint32_t)(EDX));
  /* 11801ffe push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11802000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802003 push eax */
  push32((uint32_t)(EAX));
  /* 11802004 push 0 */
  push32((uint32_t)(0x0u));
  /* 11802006 call 0x11804a20 */
  push32(0x1180200bu); f_11804a20();
  /* 1180200b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180200e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11802011 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11802013 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11802016 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11802019:;
  /* 11802019 mov esp, ebp */
  ESP = (EBP);
  /* 1180201b pop ebp */
  EBP = (pop32());
  /* 1180201c ret  */
  ESPCHK(0x11801e10u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11802020 (125 bytes, 49 insns) */
void f_11802020(void) {
  FTRACE(0x11802020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802020 push ebp */
  push32((uint32_t)(EBP));
  /* 11802021 mov ebp, esp */
  EBP = (ESP);
  /* 11802023 push ecx */
  push32((uint32_t)(ECX));
L_11802024:;
  /* 11802024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802027 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180202a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180202c je 0x11802099 */
  if (C.zf) goto L_11802099;
  /* 1180202e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802031 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11802034 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802037 jl 0x1180205d */
  if ((C.sf!=C.of)) goto L_1180205d;
  /* 11802039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180203c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1180203f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802042 jg 0x1180205d */
  if ((!C.zf&&C.sf==C.of)) goto L_1180205d;
  /* 11802044 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802047 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180204a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180204d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802050 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11802052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802058 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1180205b jmp 0x11802097 */
  goto L_11802097;
L_1180205d:;
  /* 1180205d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802060 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11802063 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802066 jne 0x1180208e */
  if (!C.zf) goto L_1180208e;
  /* 11802068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180206b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1180206e:;
  /* 1180206e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802074 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11802077 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11802079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180207c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180207f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11802082 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802085 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11802088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180208a jne 0x1180206e */
  if (!C.zf) goto L_1180206e;
  /* 1180208c jmp 0x11802097 */
  goto L_11802097;
L_1180208e:;
  /* 1180208e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802091 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802094 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11802097:;
  /* 11802097 jmp 0x11802024 */
  goto L_11802024;
L_11802099:;
  /* 11802099 mov esp, ebp */
  ESP = (EBP);
  /* 1180209b pop ebp */
  EBP = (pop32());
  /* 1180209c ret  */
  ESPCHK(0x11802020u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x118020a0 (147 bytes, 52 insns) */
void f_118020a0(void) {
  FTRACE(0x118020a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118020a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118020a1 mov ebp, esp */
  EBP = (ESP);
  /* 118020a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118020a7 jne 0x118020ae */
  if (!C.zf) goto L_118020ae;
  /* 118020a9 jmp 0x11802131 */
  goto L_11802131;
L_118020ae:;
  /* 118020ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118020b1 cmp dword ptr [eax + 0xc], 0x11822988 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11822988u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118020b8 je 0x11802131 */
  if (C.zf) goto L_11802131;
  /* 118020ba push 2 */
  push32((uint32_t)(0x2u));
  /* 118020bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118020bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118020c2 push edx */
  push32((uint32_t)(EDX));
  /* 118020c3 call 0x117f72f0 */
  push32(0x118020c8u); f_117f72f0();
  /* 118020c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118020cb push 2 */
  push32((uint32_t)(0x2u));
  /* 118020cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118020d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 118020d3 push ecx */
  push32((uint32_t)(ECX));
  /* 118020d4 call 0x117f72f0 */
  push32(0x118020d9u); f_117f72f0();
  /* 118020d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118020dc push 2 */
  push32((uint32_t)(0x2u));
  /* 118020de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118020e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 118020e4 push eax */
  push32((uint32_t)(EAX));
  /* 118020e5 call 0x117f72f0 */
  push32(0x118020eau); f_117f72f0();
  /* 118020ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118020ed push 2 */
  push32((uint32_t)(0x2u));
  /* 118020ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118020f2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 118020f5 push edx */
  push32((uint32_t)(EDX));
  /* 118020f6 call 0x117f72f0 */
  push32(0x118020fbu); f_117f72f0();
  /* 118020fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118020fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11802100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802103 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11802106 push ecx */
  push32((uint32_t)(ECX));
  /* 11802107 call 0x117f72f0 */
  push32(0x1180210cu); f_117f72f0();
  /* 1180210c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180210f push 2 */
  push32((uint32_t)(0x2u));
  /* 11802111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802114 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11802117 push eax */
  push32((uint32_t)(EAX));
  /* 11802118 call 0x117f72f0 */
  push32(0x1180211du); f_117f72f0();
  /* 1180211d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802120 push 2 */
  push32((uint32_t)(0x2u));
  /* 11802122 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802125 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11802128 push edx */
  push32((uint32_t)(EDX));
  /* 11802129 call 0x117f72f0 */
  push32(0x1180212eu); f_117f72f0();
  /* 1180212e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11802131:;
  /* 11802131 pop ebp */
  EBP = (pop32());
  /* 11802132 ret  */
  ESPCHK(0x118020a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x11802140 (928 bytes, 284 insns) */
void f_11802140(void) {
  FTRACE(0x11802140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802140 push ebp */
  push32((uint32_t)(EBP));
  /* 11802141 mov ebp, esp */
  EBP = (ESP);
  /* 11802143 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802146 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1180214d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11802154 cmp dword ptr [0x118228f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118228f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180215b je 0x11802491 */
  if (C.zf) goto L_11802491;
  /* 11802161 cmp dword ptr [0x11822900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802168 jne 0x11802190 */
  if (!C.zf) goto L_11802190;
  /* 1180216a push 0x11822900 */
  push32((uint32_t)(0x11822900u));
  /* 1180216f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11802174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802176 mov ax, word ptr [0x11822944] */
  AX = (r16((uint32_t)(0x11822944)));
  /* 1180217c push eax */
  push32((uint32_t)(EAX));
  /* 1180217d push 0 */
  push32((uint32_t)(0x0u));
  /* 1180217f call 0x11804a20 */
  push32(0x11802184u); f_11804a20();
  /* 11802184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802187 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802189 je 0x11802190 */
  if (C.zf) goto L_11802190;
  /* 1180218b jmp 0x11802452 */
  goto L_11802452;
L_11802190:;
  /* 11802190 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11802192 push 0x1181e794 */
  push32((uint32_t)(0x1181e794u));
  /* 11802197 push 2 */
  push32((uint32_t)(0x2u));
  /* 11802199 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1180219e call 0x117f6860 */
  push32(0x118021a3u); f_117f6860();
  /* 118021a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118021a6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 118021a9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 118021ab push 0x1181e794 */
  push32((uint32_t)(0x1181e794u));
  /* 118021b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118021b2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 118021b7 call 0x117f6860 */
  push32(0x118021bcu); f_117f6860();
  /* 118021bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118021bf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 118021c2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 118021c4 push 0x1181e794 */
  push32((uint32_t)(0x1181e794u));
  /* 118021c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118021cb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 118021d0 call 0x117f6860 */
  push32(0x118021d5u); f_117f6860();
  /* 118021d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118021d8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 118021db push 0x62 */
  push32((uint32_t)(0x62u));
  /* 118021dd push 0x1181e794 */
  push32((uint32_t)(0x1181e794u));
  /* 118021e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118021e4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 118021e9 call 0x117f6860 */
  push32(0x118021eeu); f_117f6860();
  /* 118021ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118021f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 118021f4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118021f8 je 0x1180220c */
  if (C.zf) goto L_1180220c;
  /* 118021fa cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118021fe je 0x1180220c */
  if (C.zf) goto L_1180220c;
  /* 11802200 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802204 je 0x1180220c */
  if (C.zf) goto L_1180220c;
  /* 11802206 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180220a jne 0x11802211 */
  if (!C.zf) goto L_11802211;
L_1180220c:;
  /* 1180220c jmp 0x11802452 */
  goto L_11802452;
L_11802211:;
  /* 11802211 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11802214 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11802217 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1180221e jmp 0x11802229 */
  goto L_11802229;
L_11802220:;
  /* 11802220 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11802223 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802226 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11802229:;
  /* 11802229 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802230 jge 0x11802245 */
  if ((C.sf==C.of)) goto L_11802245;
  /* 11802232 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11802235 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 11802238 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1180223a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1180223d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802240 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11802243 jmp 0x11802220 */
  goto L_11802220;
L_11802245:;
  /* 11802245 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11802248 push eax */
  push32((uint32_t)(EAX));
  /* 11802249 mov ecx, dword ptr [0x11822900] */
  ECX = (r32((uint32_t)(0x11822900)));
  /* 1180224f push ecx */
  push32((uint32_t)(ECX));
  /* 11802250 call dword ptr [0x11825344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825344))), 0x11802256u);
  /* 11802256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802258 jne 0x1180225f */
  if (!C.zf) goto L_1180225f;
  /* 1180225a jmp 0x11802452 */
  goto L_11802452;
L_1180225f:;
  /* 1180225f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802263 jbe 0x1180226a */
  if ((C.cf||C.zf)) goto L_1180226a;
  /* 11802265 jmp 0x11802452 */
  goto L_11802452;
L_1180226a:;
  /* 1180226a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180226d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11802273 mov dword ptr [0x11820ea4], edx */
  w32((uint32_t)(0x11820ea4), (EDX));
  /* 11802279 cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802280 jle 0x118022d9 */
  if ((C.zf||C.sf!=C.of)) goto L_118022d9;
  /* 11802282 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11802285 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11802288 jmp 0x11802293 */
  goto L_11802293;
L_1180228a:;
  /* 1180228a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1180228d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802290 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11802293:;
  /* 11802293 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11802296 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802298 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1180229a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180229c je 0x118022d9 */
  if (C.zf) goto L_118022d9;
  /* 1180229e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118022a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 118022a3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 118022a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118022a8 je 0x118022d9 */
  if (C.zf) goto L_118022d9;
  /* 118022aa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118022ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118022af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 118022b1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 118022b4 jmp 0x118022bf */
  goto L_118022bf;
L_118022b6:;
  /* 118022b6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118022b9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118022bc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_118022bf:;
  /* 118022bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118022c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118022c4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 118022c7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118022ca jg 0x118022d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_118022d7;
  /* 118022cc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118022cf add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118022d2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 118022d5 jmp 0x118022b6 */
  goto L_118022b6;
L_118022d7:;
  /* 118022d7 jmp 0x1180228a */
  goto L_1180228a;
L_118022d9:;
  /* 118022d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118022db push 0 */
  push32((uint32_t)(0x0u));
  /* 118022dd push 0 */
  push32((uint32_t)(0x0u));
  /* 118022df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 118022e2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118022e5 push eax */
  push32((uint32_t)(EAX));
  /* 118022e6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118022eb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118022ee push ecx */
  push32((uint32_t)(ECX));
  /* 118022ef push 1 */
  push32((uint32_t)(0x1u));
  /* 118022f1 call 0x117fea90 */
  push32(0x118022f6u); f_117fea90();
  /* 118022f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118022f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118022fb jne 0x11802302 */
  if (!C.zf) goto L_11802302;
  /* 118022fd jmp 0x11802452 */
  goto L_11802452;
L_11802302:;
  /* 11802302 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11802305 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1180230a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1180230d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11802310 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11802317 jmp 0x11802322 */
  goto L_11802322;
L_11802319:;
  /* 11802319 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1180231c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180231f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11802322:;
  /* 11802322 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802329 jge 0x11802340 */
  if ((C.sf==C.of)) goto L_11802340;
  /* 1180232b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1180232e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 11802332 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11802335 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11802338 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180233b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1180233e jmp 0x11802319 */
  goto L_11802319;
L_11802340:;
  /* 11802340 push 0 */
  push32((uint32_t)(0x0u));
  /* 11802342 push 0 */
  push32((uint32_t)(0x0u));
  /* 11802344 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11802347 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180234a push edx */
  push32((uint32_t)(EDX));
  /* 1180234b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11802350 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11802353 push eax */
  push32((uint32_t)(EAX));
  /* 11802354 push 1 */
  push32((uint32_t)(0x1u));
  /* 11802356 call 0x11804cc0 */
  push32(0x1180235bu); f_11804cc0();
  /* 1180235b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180235e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802360 jne 0x11802367 */
  if (!C.zf) goto L_11802367;
  /* 11802362 jmp 0x11802452 */
  goto L_11802452;
L_11802367:;
  /* 11802367 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1180236a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1180236f cmp dword ptr [0x11820ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11820ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802376 jle 0x118023d3 */
  if ((C.zf||C.sf!=C.of)) goto L_118023d3;
  /* 11802378 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1180237b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1180237e jmp 0x11802389 */
  goto L_11802389;
L_11802380:;
  /* 11802380 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11802383 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802386 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11802389:;
  /* 11802389 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1180238c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1180238e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11802390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11802392 je 0x118023d3 */
  if (C.zf) goto L_118023d3;
  /* 11802394 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11802397 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11802399 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1180239c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180239e je 0x118023d3 */
  if (C.zf) goto L_118023d3;
  /* 118023a0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118023a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118023a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118023a7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 118023aa jmp 0x118023b5 */
  goto L_118023b5;
L_118023ac:;
  /* 118023ac mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118023af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118023b2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_118023b5:;
  /* 118023b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118023b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118023ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 118023bd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118023c0 jg 0x118023d1 */
  if ((!C.zf&&C.sf==C.of)) goto L_118023d1;
  /* 118023c2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 118023c5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 118023c8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 118023cf jmp 0x118023ac */
  goto L_118023ac;
L_118023d1:;
  /* 118023d1 jmp 0x11802380 */
  goto L_11802380;
L_118023d3:;
  /* 118023d3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 118023d6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118023d9 mov dword ptr [0x11820c98], eax */
  w32((uint32_t)(0x11820c98), (EAX));
  /* 118023de mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118023e1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118023e4 mov dword ptr [0x11820c9c], ecx */
  w32((uint32_t)(0x11820c9c), (ECX));
  /* 118023ea cmp dword ptr [0x11822930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118023f1 je 0x11802404 */
  if (C.zf) goto L_11802404;
  /* 118023f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118023f5 mov edx, dword ptr [0x11822930] */
  EDX = (r32((uint32_t)(0x11822930)));
  /* 118023fb push edx */
  push32((uint32_t)(EDX));
  /* 118023fc call 0x117f72f0 */
  push32(0x11802401u); f_117f72f0();
  /* 11802401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11802404:;
  /* 11802404 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11802407 mov dword ptr [0x11822930], eax */
  w32((uint32_t)(0x11822930), (EAX));
  /* 1180240c cmp dword ptr [0x11822934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802413 je 0x11802426 */
  if (C.zf) goto L_11802426;
  /* 11802415 push 2 */
  push32((uint32_t)(0x2u));
  /* 11802417 mov ecx, dword ptr [0x11822934] */
  ECX = (r32((uint32_t)(0x11822934)));
  /* 1180241d push ecx */
  push32((uint32_t)(ECX));
  /* 1180241e call 0x117f72f0 */
  push32(0x11802423u); f_117f72f0();
  /* 11802423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11802426:;
  /* 11802426 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11802429 mov dword ptr [0x11822934], edx */
  w32((uint32_t)(0x11822934), (EDX));
  /* 1180242f push 2 */
  push32((uint32_t)(0x2u));
  /* 11802431 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11802434 push eax */
  push32((uint32_t)(EAX));
  /* 11802435 call 0x117f72f0 */
  push32(0x1180243au); f_117f72f0();
  /* 1180243a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180243d push 2 */
  push32((uint32_t)(0x2u));
  /* 1180243f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11802442 push ecx */
  push32((uint32_t)(ECX));
  /* 11802443 call 0x117f72f0 */
  push32(0x11802448u); f_117f72f0();
  /* 11802448 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180244b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180244d jmp 0x118024dc */
  goto L_118024dc;
L_11802452:;
  /* 11802452 push 2 */
  push32((uint32_t)(0x2u));
  /* 11802454 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11802457 push edx */
  push32((uint32_t)(EDX));
  /* 11802458 call 0x117f72f0 */
  push32(0x1180245du); f_117f72f0();
  /* 1180245d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802460 push 2 */
  push32((uint32_t)(0x2u));
  /* 11802462 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11802465 push eax */
  push32((uint32_t)(EAX));
  /* 11802466 call 0x117f72f0 */
  push32(0x1180246bu); f_117f72f0();
  /* 1180246b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180246e push 2 */
  push32((uint32_t)(0x2u));
  /* 11802470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11802473 push ecx */
  push32((uint32_t)(ECX));
  /* 11802474 call 0x117f72f0 */
  push32(0x11802479u); f_117f72f0();
  /* 11802479 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180247c push 2 */
  push32((uint32_t)(0x2u));
  /* 1180247e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11802481 push edx */
  push32((uint32_t)(EDX));
  /* 11802482 call 0x117f72f0 */
  push32(0x11802487u); f_117f72f0();
  /* 11802487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180248a mov eax, 1 */
  EAX = (0x1u);
  /* 1180248f jmp 0x118024dc */
  goto L_118024dc;
L_11802491:;
  /* 11802491 mov dword ptr [0x11820c98], 0x11820ca2 */
  w32((uint32_t)(0x11820c98), (0x11820ca2u));
  /* 1180249b mov dword ptr [0x11820c9c], 0x11820ca2 */
  w32((uint32_t)(0x11820c9c), (0x11820ca2u));
  /* 118024a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118024a7 mov eax, dword ptr [0x11822930] */
  EAX = (r32((uint32_t)(0x11822930)));
  /* 118024ac push eax */
  push32((uint32_t)(EAX));
  /* 118024ad call 0x117f72f0 */
  push32(0x118024b2u); f_117f72f0();
  /* 118024b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118024b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118024b7 mov ecx, dword ptr [0x11822934] */
  ECX = (r32((uint32_t)(0x11822934)));
  /* 118024bd push ecx */
  push32((uint32_t)(ECX));
  /* 118024be call 0x117f72f0 */
  push32(0x118024c3u); f_117f72f0();
  /* 118024c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118024c6 mov dword ptr [0x11822930], 0 */
  w32((uint32_t)(0x11822930), (0x0u));
  /* 118024d0 mov dword ptr [0x11822934], 0 */
  w32((uint32_t)(0x11822934), (0x0u));
  /* 118024da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_118024dc:;
  /* 118024dc mov esp, ebp */
  ESP = (EBP);
  /* 118024de pop ebp */
  EBP = (pop32());
  /* 118024df ret  */
  ESPCHK(0x11802140u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x118024e0 (7 bytes, 5 insns) */
void f_118024e0(void) {
  FTRACE(0x118024e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118024e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118024e1 mov ebp, esp */
  EBP = (ESP);
  /* 118024e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118024e5 pop ebp */
  EBP = (pop32());
  /* 118024e6 ret  */
  ESPCHK(0x118024e0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x118024f0 (129 bytes, 56 insns) */
void f_118024f0(void) {
  FTRACE(0x118024f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118024f0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 118024f4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118024f8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 118024fe jne 0x1180253c */
  if (!C.zf) goto L_1180253c;
L_11802500:;
  /* 11802500 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11802502 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802504 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 11802506 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11802508 je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 1180250a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1180250d jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 1180250f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11802511 je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 11802513 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11802516 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802519 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 1180251b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1180251d je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 1180251f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802522 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 11802524 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802527 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180252a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1180252c jne 0x11802500 */
  if (!C.zf) goto L_11802500;
  /* 1180252e mov edi, edi */
  EDI = (EDI);
L_11802530:;
  /* 11802530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802532 ret  */
  ESPCHK(0x118024f0u, _esp0);
  ESP += 4; return;
  /* 11802533 nop  */
  /* nop */
L_11802534:;
  /* 11802534 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802536 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11802538 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11802539 ret  */
  ESPCHK(0x118024f0u, _esp0);
  ESP += 4; return;
  /* 1180253a mov edi, edi */
  EDI = (EDI);
L_1180253c:;
  /* 1180253c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11802542 je 0x11802558 */
  if (C.zf) goto L_11802558;
  /* 11802544 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11802546 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11802547 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802549 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 1180254b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1180254c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1180254e je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 11802550 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11802556 je 0x11802500 */
  if (C.zf) goto L_11802500;
L_11802558:;
  /* 11802558 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1180255b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180255e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802560 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 11802562 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11802564 je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 11802566 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11802569 jne 0x11802534 */
  if (!C.zf) goto L_11802534;
  /* 1180256b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1180256d je 0x11802530 */
  if (C.zf) goto L_11802530;
  /* 1180256f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802572 jmp 0x11802500 */
  goto L_11802500;
}

/* FUN_10012580 @ 0x11802580 (62 bytes, 35 insns) */
void f_11802580(void) {
  FTRACE(0x11802580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802580 push ebp */
  push32((uint32_t)(EBP));
  /* 11802581 mov ebp, esp */
  EBP = (ESP);
  /* 11802583 push esi */
  push32((uint32_t)(ESI));
  /* 11802584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802586 push eax */
  push32((uint32_t)(EAX));
  /* 11802587 push eax */
  push32((uint32_t)(EAX));
  /* 11802588 push eax */
  push32((uint32_t)(EAX));
  /* 11802589 push eax */
  push32((uint32_t)(EAX));
  /* 1180258a push eax */
  push32((uint32_t)(EAX));
  /* 1180258b push eax */
  push32((uint32_t)(EAX));
  /* 1180258c push eax */
  push32((uint32_t)(EAX));
  /* 1180258d push eax */
  push32((uint32_t)(EAX));
  /* 1180258e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11802591 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11802594:;
  /* 11802594 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11802596 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11802598 je 0x118025a1 */
  if (C.zf) goto L_118025a1;
  /* 1180259a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1180259b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1180259b");
  /* 1180259f jmp 0x11802594 */
  goto L_11802594;
L_118025a1:;
  /* 118025a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 118025a4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 118025a7 nop  */
  /* nop */
L_118025a8:;
  /* 118025a8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118025a9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118025ab or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118025ad je 0x118025b6 */
  if (C.zf) goto L_118025b6;
  /* 118025af inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118025b0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118025b0");
  /* 118025b4 jae 0x118025a8 */
  if (!C.cf) goto L_118025a8;
L_118025b6:;
  /* 118025b6 mov eax, ecx */
  EAX = (ECX);
  /* 118025b8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118025bb pop esi */
  ESI = (pop32());
  /* 118025bc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118025bd ret  */
  ESPCHK(0x11802580u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x118025c0 (56 bytes, 31 insns) */
void f_118025c0(void) {
  FTRACE(0x118025c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118025c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118025c1 mov ebp, esp */
  EBP = (ESP);
  /* 118025c3 push edi */
  push32((uint32_t)(EDI));
  /* 118025c4 push esi */
  push32((uint32_t)(ESI));
  /* 118025c5 push ebx */
  push32((uint32_t)(EBX));
  /* 118025c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118025c9 jecxz 0x118025f1 */
  x86_unimpl("jecxz @ 0x118025c9");
  /* 118025cb mov ebx, ecx */
  EBX = (ECX);
  /* 118025cd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118025d0 mov esi, edi */
  ESI = (EDI);
  /* 118025d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118025d4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 118025d6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118025d8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118025da mov edi, esi */
  EDI = (ESI);
  /* 118025dc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118025df repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 118025e1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 118025e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118025e6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118025e9 ja 0x118025ef */
  if ((!C.cf&&!C.zf)) goto L_118025ef;
  /* 118025eb je 0x118025f1 */
  if (C.zf) goto L_118025f1;
  /* 118025ed dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 118025ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_118025ef:;
  /* 118025ef not ecx */
  ECX = (~(ECX));
L_118025f1:;
  /* 118025f1 mov eax, ecx */
  EAX = (ECX);
  /* 118025f3 pop ebx */
  EBX = (pop32());
  /* 118025f4 pop esi */
  ESI = (pop32());
  /* 118025f5 pop edi */
  EDI = (pop32());
  /* 118025f6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118025f7 ret  */
  ESPCHK(0x118025c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012600 @ 0x11802600 (58 bytes, 32 insns) */
void f_11802600(void) {
  FTRACE(0x11802600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802600 push ebp */
  push32((uint32_t)(EBP));
  /* 11802601 mov ebp, esp */
  EBP = (ESP);
  /* 11802603 push esi */
  push32((uint32_t)(ESI));
  /* 11802604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802606 push eax */
  push32((uint32_t)(EAX));
  /* 11802607 push eax */
  push32((uint32_t)(EAX));
  /* 11802608 push eax */
  push32((uint32_t)(EAX));
  /* 11802609 push eax */
  push32((uint32_t)(EAX));
  /* 1180260a push eax */
  push32((uint32_t)(EAX));
  /* 1180260b push eax */
  push32((uint32_t)(EAX));
  /* 1180260c push eax */
  push32((uint32_t)(EAX));
  /* 1180260d push eax */
  push32((uint32_t)(EAX));
  /* 1180260e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11802611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11802614:;
  /* 11802614 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11802616 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11802618 je 0x11802621 */
  if (C.zf) goto L_11802621;
  /* 1180261a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1180261b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1180261b");
  /* 1180261f jmp 0x11802614 */
  goto L_11802614;
L_11802621:;
  /* 11802621 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11802624:;
  /* 11802624 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11802626 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11802628 je 0x11802634 */
  if (C.zf) goto L_11802634;
  /* 1180262a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1180262b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1180262b");
  /* 1180262f jae 0x11802624 */
  if (!C.cf) goto L_11802624;
  /* 11802631 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11802634:;
  /* 11802634 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802637 pop esi */
  ESI = (pop32());
  /* 11802638 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11802639 ret  */
  ESPCHK(0x11802600u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x11802640 (512 bytes, 147 insns) */
void f_11802640(void) {
  FTRACE(0x11802640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802640 push ebp */
  push32((uint32_t)(EBP));
  /* 11802641 mov ebp, esp */
  EBP = (ESP);
  /* 11802643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802646 cmp dword ptr [0x1182297c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182297c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180264d jne 0x11802672 */
  if (!C.zf) goto L_11802672;
  /* 1180264f call 0x11803110 */
  push32(0x11802654u); f_11803110();
  /* 11802654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802656 je 0x11802662 */
  if (C.zf) goto L_11802662;
  /* 11802658 mov eax, dword ptr [0x11825308] */
  EAX = (r32((uint32_t)(0x11825308)));
  /* 1180265d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11802660 jmp 0x11802669 */
  goto L_11802669;
L_11802662:;
  /* 11802662 mov dword ptr [ebp - 8], 0x11803160 */
  w32((uint32_t)(EBP + -0x8), (0x11803160u));
L_11802669:;
  /* 11802669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180266c mov dword ptr [0x1182297c], ecx */
  w32((uint32_t)(0x1182297c), (ECX));
L_11802672:;
  /* 11802672 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802676 jne 0x11802682 */
  if (!C.zf) goto L_11802682;
  /* 11802678 call 0x11802f60 */
  push32(0x1180267du); f_11802f60();
  /* 1180267d jmp 0x1180274e */
  goto L_1180274e;
L_11802682:;
  /* 11802682 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802685 mov dword ptr [0x1182296c], edx */
  w32((uint32_t)(0x1182296c), (EDX));
  /* 1180268b cmp dword ptr [0x1182296c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182296c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802692 je 0x118026b4 */
  if (C.zf) goto L_118026b4;
  /* 11802694 mov eax, dword ptr [0x1182296c] */
  EAX = (r32((uint32_t)(0x1182296c)));
  /* 11802699 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180269c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180269e je 0x118026b4 */
  if (C.zf) goto L_118026b4;
  /* 118026a0 push 0x1182296c */
  push32((uint32_t)(0x1182296cu));
  /* 118026a5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118026a7 push 0x11821a90 */
  push32((uint32_t)(0x11821a90u));
  /* 118026ac call 0x11802840 */
  push32(0x118026b1u); f_11802840();
  /* 118026b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118026b4:;
  /* 118026b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118026b7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118026ba mov dword ptr [0x11822970], edx */
  w32((uint32_t)(0x11822970), (EDX));
  /* 118026c0 cmp dword ptr [0x11822970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118026c7 je 0x118026e9 */
  if (C.zf) goto L_118026e9;
  /* 118026c9 mov eax, dword ptr [0x11822970] */
  EAX = (r32((uint32_t)(0x11822970)));
  /* 118026ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118026d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118026d3 je 0x118026e9 */
  if (C.zf) goto L_118026e9;
  /* 118026d5 push 0x11822970 */
  push32((uint32_t)(0x11822970u));
  /* 118026da push 0x16 */
  push32((uint32_t)(0x16u));
  /* 118026dc push 0x118219d8 */
  push32((uint32_t)(0x118219d8u));
  /* 118026e1 call 0x11802840 */
  push32(0x118026e6u); f_11802840();
  /* 118026e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118026e9:;
  /* 118026e9 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 118026f3 cmp dword ptr [0x1182296c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182296c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118026fa je 0x1180272d */
  if (C.zf) goto L_1180272d;
  /* 118026fc mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802702 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11802705 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802707 je 0x1180272d */
  if (C.zf) goto L_1180272d;
  /* 11802709 cmp dword ptr [0x11822970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802710 je 0x11802726 */
  if (C.zf) goto L_11802726;
  /* 11802712 mov ecx, dword ptr [0x11822970] */
  ECX = (r32((uint32_t)(0x11822970)));
  /* 11802718 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1180271b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180271d je 0x11802726 */
  if (C.zf) goto L_11802726;
  /* 1180271f call 0x118028d0 */
  push32(0x11802724u); f_118028d0();
  /* 11802724 jmp 0x1180272b */
  goto L_1180272b;
L_11802726:;
  /* 11802726 call 0x11802cc0 */
  push32(0x1180272bu); f_11802cc0();
L_1180272b:;
  /* 1180272b jmp 0x1180274e */
  goto L_1180274e;
L_1180272d:;
  /* 1180272d cmp dword ptr [0x11822970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802734 je 0x11802749 */
  if (C.zf) goto L_11802749;
  /* 11802736 mov eax, dword ptr [0x11822970] */
  EAX = (r32((uint32_t)(0x11822970)));
  /* 1180273b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1180273e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11802740 je 0x11802749 */
  if (C.zf) goto L_11802749;
  /* 11802742 call 0x11802e60 */
  push32(0x11802747u); f_11802e60();
  /* 11802747 jmp 0x1180274e */
  goto L_1180274e;
L_11802749:;
  /* 11802749 call 0x11802f60 */
  push32(0x1180274eu); f_11802f60();
L_1180274e:;
  /* 1180274e cmp dword ptr [0x11822974], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822974))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802755 jne 0x1180275e */
  if (!C.zf) goto L_1180275e;
  /* 11802757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802759 jmp 0x1180283c */
  goto L_1180283c;
L_1180275e:;
  /* 1180275e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802761 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802767 push edx */
  push32((uint32_t)(EDX));
  /* 11802768 call 0x11802f90 */
  push32(0x1180276du); f_11802f90();
  /* 1180276d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802770 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11802773 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802777 je 0x1180278c */
  if (C.zf) goto L_1180278c;
  /* 11802779 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180277c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11802781 push eax */
  push32((uint32_t)(EAX));
  /* 11802782 call dword ptr [0x1182530c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182530c))), 0x11802788u);
  /* 11802788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180278a jne 0x11802793 */
  if (!C.zf) goto L_11802793;
L_1180278c:;
  /* 1180278c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180278e jmp 0x1180283c */
  goto L_1180283c;
L_11802793:;
  /* 11802793 push 1 */
  push32((uint32_t)(0x1u));
  /* 11802795 mov ecx, dword ptr [0x1182295c] */
  ECX = (r32((uint32_t)(0x1182295c)));
  /* 1180279b push ecx */
  push32((uint32_t)(ECX));
  /* 1180279c call dword ptr [0x11825310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825310))), 0x118027a2u);
  /* 118027a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118027a4 jne 0x118027ad */
  if (!C.zf) goto L_118027ad;
  /* 118027a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118027a8 jmp 0x1180283c */
  goto L_1180283c;
L_118027ad:;
  /* 118027ad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118027b1 je 0x118027d8 */
  if (C.zf) goto L_118027d8;
  /* 118027b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118027b6 mov ax, word ptr [0x1182295c] */
  AX = (r16((uint32_t)(0x1182295c)));
  /* 118027bc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 118027bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118027c2 mov dx, word ptr [0x11822978] */
  DX = (r16((uint32_t)(0x11822978)));
  /* 118027c9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 118027cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118027d0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 118027d4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_118027d8:;
  /* 118027d8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118027dc je 0x11802837 */
  if (C.zf) goto L_11802837;
  /* 118027de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118027e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118027e3 push edx */
  push32((uint32_t)(EDX));
  /* 118027e4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 118027e9 mov eax, dword ptr [0x1182295c] */
  EAX = (r32((uint32_t)(0x1182295c)));
  /* 118027ee push eax */
  push32((uint32_t)(EAX));
  /* 118027ef call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x118027f5u);
  /* 118027f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118027f7 jne 0x118027fd */
  if (!C.zf) goto L_118027fd;
  /* 118027f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118027fb jmp 0x1180283c */
  goto L_1180283c;
L_118027fd:;
  /* 118027fd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118027ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11802802 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802805 push ecx */
  push32((uint32_t)(ECX));
  /* 11802806 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1180280b mov edx, dword ptr [0x11822978] */
  EDX = (r32((uint32_t)(0x11822978)));
  /* 11802811 push edx */
  push32((uint32_t)(EDX));
  /* 11802812 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802818u);
  /* 11802818 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180281a jne 0x11802820 */
  if (!C.zf) goto L_11802820;
  /* 1180281c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180281e jmp 0x1180283c */
  goto L_1180283c;
L_11802820:;
  /* 11802820 push 0xa */
  push32((uint32_t)(0xau));
  /* 11802822 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11802825 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180282a push eax */
  push32((uint32_t)(EAX));
  /* 1180282b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180282e push ecx */
  push32((uint32_t)(ECX));
  /* 1180282f call 0x117f93a0 */
  push32(0x11802834u); f_117f93a0();
  /* 11802834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11802837:;
  /* 11802837 mov eax, 1 */
  EAX = (0x1u);
L_1180283c:;
  /* 1180283c mov esp, ebp */
  ESP = (EBP);
  /* 1180283e pop ebp */
  EBP = (pop32());
  /* 1180283f ret  */
  ESPCHK(0x11802640u, _esp0);
  ESP += 4; return;
}

/* FUN_10012840 @ 0x11802840 (130 bytes, 47 insns) */
void f_11802840(void) {
  FTRACE(0x11802840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802840 push ebp */
  push32((uint32_t)(EBP));
  /* 11802841 mov ebp, esp */
  EBP = (ESP);
  /* 11802843 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802846 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1180284d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11802854:;
  /* 11802854 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11802857 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180285a jg 0x118028be */
  if ((!C.zf&&C.sf==C.of)) goto L_118028be;
  /* 1180285c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802860 je 0x118028be */
  if (C.zf) goto L_118028be;
  /* 11802862 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11802865 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802868 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11802869 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180286b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1180286d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11802870 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802876 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11802879 push eax */
  push32((uint32_t)(EAX));
  /* 1180287a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180287d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1180287f push edx */
  push32((uint32_t)(EDX));
  /* 11802880 call 0x11804f30 */
  push32(0x11802885u); f_11804f30();
  /* 11802885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802888 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1180288b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180288f jne 0x118028a2 */
  if (!C.zf) goto L_118028a2;
  /* 11802891 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802894 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802897 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1180289b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1180289e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118028a0 jmp 0x118028bc */
  goto L_118028bc;
L_118028a2:;
  /* 118028a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118028a6 jge 0x118028b3 */
  if ((C.sf==C.of)) goto L_118028b3;
  /* 118028a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118028ab sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118028ae mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 118028b1 jmp 0x118028bc */
  goto L_118028bc;
L_118028b3:;
  /* 118028b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118028b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118028b9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_118028bc:;
  /* 118028bc jmp 0x11802854 */
  goto L_11802854;
L_118028be:;
  /* 118028be mov esp, ebp */
  ESP = (EBP);
  /* 118028c0 pop ebp */
  EBP = (pop32());
  /* 118028c1 ret  */
  ESPCHK(0x11802840u, _esp0);
  ESP += 4; return;
}

/* FUN_100128d0 @ 0x118028d0 (186 bytes, 50 insns) */
void f_118028d0(void) {
  FTRACE(0x118028d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118028d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118028d1 mov ebp, esp */
  EBP = (ESP);
  /* 118028d3 push ecx */
  push32((uint32_t)(ECX));
  /* 118028d4 mov eax, dword ptr [0x1182296c] */
  EAX = (r32((uint32_t)(0x1182296c)));
  /* 118028d9 push eax */
  push32((uint32_t)(EAX));
  /* 118028da call 0x117f9690 */
  push32(0x118028dfu); f_117f9690();
  /* 118028df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118028e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118028e4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118028e7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 118028ea mov dword ptr [0x11822968], ecx */
  w32((uint32_t)(0x11822968), (ECX));
  /* 118028f0 mov edx, dword ptr [0x11822970] */
  EDX = (r32((uint32_t)(0x11822970)));
  /* 118028f6 push edx */
  push32((uint32_t)(EDX));
  /* 118028f7 call 0x117f9690 */
  push32(0x118028fcu); f_117f9690();
  /* 118028fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118028ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11802901 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802904 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11802907 mov dword ptr [0x11822960], ecx */
  w32((uint32_t)(0x11822960), (ECX));
  /* 1180290d mov dword ptr [0x1182295c], 0 */
  w32((uint32_t)(0x1182295c), (0x0u));
  /* 11802917 cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180291e je 0x11802929 */
  if (C.zf) goto L_11802929;
  /* 11802920 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11802927 jmp 0x1180293b */
  goto L_1180293b;
L_11802929:;
  /* 11802929 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 1180292f push edx */
  push32((uint32_t)(EDX));
  /* 11802930 call 0x11803370 */
  push32(0x11802935u); f_11803370();
  /* 11802935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802938 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1180293b:;
  /* 1180293b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180293e mov dword ptr [0x11822964], eax */
  w32((uint32_t)(0x11822964), (EAX));
  /* 11802943 push 1 */
  push32((uint32_t)(0x1u));
  /* 11802945 push 0x11802990 */
  push32((uint32_t)(0x11802990u));
  /* 1180294a call dword ptr [0x11825304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825304))), 0x11802950u);
  /* 11802950 mov ecx, dword ptr [0x11822974] */
  ECX = (r32((uint32_t)(0x11822974)));
  /* 11802956 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1180295c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180295e je 0x1180297c */
  if (C.zf) goto L_1180297c;
  /* 11802960 mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802966 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1180296c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180296e je 0x1180297c */
  if (C.zf) goto L_1180297c;
  /* 11802970 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802975 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11802978 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180297a jne 0x11802986 */
  if (!C.zf) goto L_11802986;
L_1180297c:;
  /* 1180297c mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
L_11802986:;
  /* 11802986 mov esp, ebp */
  ESP = (EBP);
  /* 11802988 pop ebp */
  EBP = (pop32());
  /* 11802989 ret  */
  ESPCHK(0x118028d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012990 @ 0x11802990 (804 bytes, 220 insns) */
void f_11802990(void) {
  FTRACE(0x11802990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802990 push ebp */
  push32((uint32_t)(EBP));
  /* 11802991 mov ebp, esp */
  EBP = (ESP);
  /* 11802993 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802999 push eax */
  push32((uint32_t)(EAX));
  /* 1180299a call 0x118032f0 */
  push32(0x1180299fu); f_118032f0();
  /* 1180299f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118029a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 118029a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118029a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118029aa push ecx */
  push32((uint32_t)(ECX));
  /* 118029ab mov edx, dword ptr [0x11822960] */
  EDX = (r32((uint32_t)(0x11822960)));
  /* 118029b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118029b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118029b5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 118029bb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118029c1 push edx */
  push32((uint32_t)(EDX));
  /* 118029c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118029c5 push eax */
  push32((uint32_t)(EAX));
  /* 118029c6 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x118029ccu);
  /* 118029cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118029ce jne 0x118029e4 */
  if (!C.zf) goto L_118029e4;
  /* 118029d0 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 118029da mov eax, 1 */
  EAX = (0x1u);
  /* 118029df jmp 0x11802cae */
  goto L_11802cae;
L_118029e4:;
  /* 118029e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 118029e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118029e8 mov edx, dword ptr [0x11822970] */
  EDX = (r32((uint32_t)(0x11822970)));
  /* 118029ee push edx */
  push32((uint32_t)(EDX));
  /* 118029ef call 0x11804f30 */
  push32(0x118029f4u); f_11804f30();
  /* 118029f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118029f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118029f9 jne 0x11802b1f */
  if (!C.zf) goto L_11802b1f;
  /* 118029ff push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11802a01 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11802a04 push eax */
  push32((uint32_t)(EAX));
  /* 11802a05 mov ecx, dword ptr [0x11822968] */
  ECX = (r32((uint32_t)(0x11822968)));
  /* 11802a0b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802a0d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802a0f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11802a15 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802a1b push ecx */
  push32((uint32_t)(ECX));
  /* 11802a1c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802a1f push edx */
  push32((uint32_t)(EDX));
  /* 11802a20 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802a26u);
  /* 11802a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802a28 jne 0x11802a3e */
  if (!C.zf) goto L_11802a3e;
  /* 11802a2a mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 11802a34 mov eax, 1 */
  EAX = (0x1u);
  /* 11802a39 jmp 0x11802cae */
  goto L_11802cae;
L_11802a3e:;
  /* 11802a3e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11802a41 push eax */
  push32((uint32_t)(EAX));
  /* 11802a42 mov ecx, dword ptr [0x1182296c] */
  ECX = (r32((uint32_t)(0x1182296c)));
  /* 11802a48 push ecx */
  push32((uint32_t)(ECX));
  /* 11802a49 call 0x11804f30 */
  push32(0x11802a4eu); f_11804f30();
  /* 11802a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802a51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802a53 jne 0x11802a80 */
  if (!C.zf) goto L_11802a80;
  /* 11802a55 mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802a5b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11802a61 mov dword ptr [0x11822974], edx */
  w32((uint32_t)(0x11822974), (EDX));
  /* 11802a67 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802a6a mov dword ptr [0x11822978], eax */
  w32((uint32_t)(0x11822978), (EAX));
  /* 11802a6f mov ecx, dword ptr [0x11822978] */
  ECX = (r32((uint32_t)(0x11822978)));
  /* 11802a75 mov dword ptr [0x1182295c], ecx */
  w32((uint32_t)(0x1182295c), (ECX));
  /* 11802a7b jmp 0x11802b1f */
  goto L_11802b1f;
L_11802a80:;
  /* 11802a80 mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802a86 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11802a89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11802a8b jne 0x11802b1f */
  if (!C.zf) goto L_11802b1f;
  /* 11802a91 cmp dword ptr [0x11822964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802a98 je 0x11802aed */
  if (C.zf) goto L_11802aed;
  /* 11802a9a mov eax, dword ptr [0x11822964] */
  EAX = (r32((uint32_t)(0x11822964)));
  /* 11802a9f push eax */
  push32((uint32_t)(EAX));
  /* 11802aa0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11802aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11802aa4 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802aaa push edx */
  push32((uint32_t)(EDX));
  /* 11802aab call 0x11805000 */
  push32(0x11802ab0u); f_11805000();
  /* 11802ab0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802ab5 jne 0x11802aed */
  if (!C.zf) goto L_11802aed;
  /* 11802ab7 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802abc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11802abe mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802ac3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802ac6 mov dword ptr [0x11822978], ecx */
  w32((uint32_t)(0x11822978), (ECX));
  /* 11802acc mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802ad2 push edx */
  push32((uint32_t)(EDX));
  /* 11802ad3 call 0x117f9690 */
  push32(0x11802ad8u); f_117f9690();
  /* 11802ad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802adb cmp eax, dword ptr [0x11822964] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11822964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802ae1 jne 0x11802aeb */
  if (!C.zf) goto L_11802aeb;
  /* 11802ae3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802ae6 mov dword ptr [0x1182295c], eax */
  w32((uint32_t)(0x1182295c), (EAX));
L_11802aeb:;
  /* 11802aeb jmp 0x11802b1f */
  goto L_11802b1f;
L_11802aed:;
  /* 11802aed mov ecx, dword ptr [0x11822974] */
  ECX = (r32((uint32_t)(0x11822974)));
  /* 11802af3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11802af6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11802af8 jne 0x11802b1f */
  if (!C.zf) goto L_11802b1f;
  /* 11802afa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802afd push edx */
  push32((uint32_t)(EDX));
  /* 11802afe call 0x11803030 */
  push32(0x11802b03u); f_11803030();
  /* 11802b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802b08 je 0x11802b1f */
  if (C.zf) goto L_11802b1f;
  /* 11802b0a mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802b0f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11802b11 mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802b16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802b19 mov dword ptr [0x11822978], ecx */
  w32((uint32_t)(0x11822978), (ECX));
L_11802b1f:;
  /* 11802b1f mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802b25 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11802b2b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802b31 je 0x11802ca1 */
  if (C.zf) goto L_11802ca1;
  /* 11802b37 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11802b39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11802b3c push eax */
  push32((uint32_t)(EAX));
  /* 11802b3d mov ecx, dword ptr [0x11822968] */
  ECX = (r32((uint32_t)(0x11822968)));
  /* 11802b43 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802b45 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802b47 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11802b4d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802b53 push ecx */
  push32((uint32_t)(ECX));
  /* 11802b54 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802b57 push edx */
  push32((uint32_t)(EDX));
  /* 11802b58 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802b5eu);
  /* 11802b5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802b60 jne 0x11802b76 */
  if (!C.zf) goto L_11802b76;
  /* 11802b62 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 11802b6c mov eax, 1 */
  EAX = (0x1u);
  /* 11802b71 jmp 0x11802cae */
  goto L_11802cae;
L_11802b76:;
  /* 11802b76 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11802b79 push eax */
  push32((uint32_t)(EAX));
  /* 11802b7a mov ecx, dword ptr [0x1182296c] */
  ECX = (r32((uint32_t)(0x1182296c)));
  /* 11802b80 push ecx */
  push32((uint32_t)(ECX));
  /* 11802b81 call 0x11804f30 */
  push32(0x11802b86u); f_11804f30();
  /* 11802b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802b8b jne 0x11802c40 */
  if (!C.zf) goto L_11802c40;
  /* 11802b91 mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802b97 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11802b9a mov dword ptr [0x11822974], edx */
  w32((uint32_t)(0x11822974), (EDX));
  /* 11802ba0 cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802ba7 je 0x11802bca */
  if (C.zf) goto L_11802bca;
  /* 11802ba9 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802bae or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11802bb1 mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802bb6 cmp dword ptr [0x1182295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802bbd jne 0x11802bc8 */
  if (!C.zf) goto L_11802bc8;
  /* 11802bbf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802bc2 mov dword ptr [0x1182295c], ecx */
  w32((uint32_t)(0x1182295c), (ECX));
L_11802bc8:;
  /* 11802bc8 jmp 0x11802c3e */
  goto L_11802c3e;
L_11802bca:;
  /* 11802bca cmp dword ptr [0x11822964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802bd1 je 0x11802c1f */
  if (C.zf) goto L_11802c1f;
  /* 11802bd3 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802bd9 push edx */
  push32((uint32_t)(EDX));
  /* 11802bda call 0x117f9690 */
  push32(0x11802bdfu); f_117f9690();
  /* 11802bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802be2 cmp eax, dword ptr [0x11822964] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11822964))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802be8 jne 0x11802c1f */
  if (!C.zf) goto L_11802c1f;
  /* 11802bea push 1 */
  push32((uint32_t)(0x1u));
  /* 11802bec mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802bef push eax */
  push32((uint32_t)(EAX));
  /* 11802bf0 call 0x11803080 */
  push32(0x11802bf5u); f_11803080();
  /* 11802bf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802bfa je 0x11802c1d */
  if (C.zf) goto L_11802c1d;
  /* 11802bfc mov ecx, dword ptr [0x11822974] */
  ECX = (r32((uint32_t)(0x11822974)));
  /* 11802c02 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11802c05 mov dword ptr [0x11822974], ecx */
  w32((uint32_t)(0x11822974), (ECX));
  /* 11802c0b cmp dword ptr [0x1182295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802c12 jne 0x11802c1d */
  if (!C.zf) goto L_11802c1d;
  /* 11802c14 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802c17 mov dword ptr [0x1182295c], edx */
  w32((uint32_t)(0x1182295c), (EDX));
L_11802c1d:;
  /* 11802c1d jmp 0x11802c3e */
  goto L_11802c3e;
L_11802c1f:;
  /* 11802c1f mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802c24 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11802c27 mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802c2c cmp dword ptr [0x1182295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802c33 jne 0x11802c3e */
  if (!C.zf) goto L_11802c3e;
  /* 11802c35 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802c38 mov dword ptr [0x1182295c], ecx */
  w32((uint32_t)(0x1182295c), (ECX));
L_11802c3e:;
  /* 11802c3e jmp 0x11802ca1 */
  goto L_11802ca1;
L_11802c40:;
  /* 11802c40 cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802c47 jne 0x11802ca1 */
  if (!C.zf) goto L_11802ca1;
  /* 11802c49 cmp dword ptr [0x11822964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802c50 je 0x11802ca1 */
  if (C.zf) goto L_11802ca1;
  /* 11802c52 mov edx, dword ptr [0x11822964] */
  EDX = (r32((uint32_t)(0x11822964)));
  /* 11802c58 push edx */
  push32((uint32_t)(EDX));
  /* 11802c59 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11802c5c push eax */
  push32((uint32_t)(EAX));
  /* 11802c5d mov ecx, dword ptr [0x1182296c] */
  ECX = (r32((uint32_t)(0x1182296c)));
  /* 11802c63 push ecx */
  push32((uint32_t)(ECX));
  /* 11802c64 call 0x11805000 */
  push32(0x11802c69u); f_11805000();
  /* 11802c69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802c6e jne 0x11802ca1 */
  if (!C.zf) goto L_11802ca1;
  /* 11802c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11802c72 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802c75 push edx */
  push32((uint32_t)(EDX));
  /* 11802c76 call 0x11803080 */
  push32(0x11802c7bu); f_11803080();
  /* 11802c7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802c7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802c80 je 0x11802ca1 */
  if (C.zf) goto L_11802ca1;
  /* 11802c82 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802c87 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11802c8a mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802c8f cmp dword ptr [0x1182295c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1182295c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802c96 jne 0x11802ca1 */
  if (!C.zf) goto L_11802ca1;
  /* 11802c98 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802c9b mov dword ptr [0x1182295c], ecx */
  w32((uint32_t)(0x1182295c), (ECX));
L_11802ca1:;
  /* 11802ca1 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802ca6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11802ca9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802cab sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802cad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11802cae:;
  /* 11802cae mov esp, ebp */
  ESP = (EBP);
  /* 11802cb0 pop ebp */
  EBP = (pop32());
  /* 11802cb1 ret 4 */
  ESPCHK(0x11802990u, _esp0);
  ESP += 8; return;
}

/* FUN_10012cc0 @ 0x11802cc0 (116 bytes, 33 insns) */
void f_11802cc0(void) {
  FTRACE(0x11802cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11802cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11802cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11802cc4 mov eax, dword ptr [0x1182296c] */
  EAX = (r32((uint32_t)(0x1182296c)));
  /* 11802cc9 push eax */
  push32((uint32_t)(EAX));
  /* 11802cca call 0x117f9690 */
  push32(0x11802ccfu); f_117f9690();
  /* 11802ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802cd2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11802cd4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802cd7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11802cda mov dword ptr [0x11822968], ecx */
  w32((uint32_t)(0x11822968), (ECX));
  /* 11802ce0 cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802ce7 je 0x11802cf2 */
  if (C.zf) goto L_11802cf2;
  /* 11802ce9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11802cf0 jmp 0x11802d04 */
  goto L_11802d04;
L_11802cf2:;
  /* 11802cf2 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802cf8 push edx */
  push32((uint32_t)(EDX));
  /* 11802cf9 call 0x11803370 */
  push32(0x11802cfeu); f_11803370();
  /* 11802cfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802d01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11802d04:;
  /* 11802d04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11802d07 mov dword ptr [0x11822964], eax */
  w32((uint32_t)(0x11822964), (EAX));
  /* 11802d0c push 1 */
  push32((uint32_t)(0x1u));
  /* 11802d0e push 0x11802d40 */
  push32((uint32_t)(0x11802d40u));
  /* 11802d13 call dword ptr [0x11825304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825304))), 0x11802d19u);
  /* 11802d19 mov ecx, dword ptr [0x11822974] */
  ECX = (r32((uint32_t)(0x11822974)));
  /* 11802d1f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11802d22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11802d24 jne 0x11802d30 */
  if (!C.zf) goto L_11802d30;
  /* 11802d26 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
L_11802d30:;
  /* 11802d30 mov esp, ebp */
  ESP = (EBP);
  /* 11802d32 pop ebp */
  EBP = (pop32());
  /* 11802d33 ret  */
  ESPCHK(0x11802cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d40 @ 0x11802d40 (287 bytes, 86 insns) */
void f_11802d40(void) {
  FTRACE(0x11802d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11802d41 mov ebp, esp */
  EBP = (ESP);
  /* 11802d43 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802d49 push eax */
  push32((uint32_t)(EAX));
  /* 11802d4a call 0x118032f0 */
  push32(0x11802d4fu); f_118032f0();
  /* 11802d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802d52 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11802d55 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11802d57 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11802d5a push ecx */
  push32((uint32_t)(ECX));
  /* 11802d5b mov edx, dword ptr [0x11822968] */
  EDX = (r32((uint32_t)(0x11822968)));
  /* 11802d61 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802d63 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802d65 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11802d6b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802d71 push edx */
  push32((uint32_t)(EDX));
  /* 11802d72 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802d75 push eax */
  push32((uint32_t)(EAX));
  /* 11802d76 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802d7cu);
  /* 11802d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802d7e jne 0x11802d94 */
  if (!C.zf) goto L_11802d94;
  /* 11802d80 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 11802d8a mov eax, 1 */
  EAX = (0x1u);
  /* 11802d8f jmp 0x11802e59 */
  goto L_11802e59;
L_11802d94:;
  /* 11802d94 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11802d97 push ecx */
  push32((uint32_t)(ECX));
  /* 11802d98 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 11802d9e push edx */
  push32((uint32_t)(EDX));
  /* 11802d9f call 0x11804f30 */
  push32(0x11802da4u); f_11804f30();
  /* 11802da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802da7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802da9 jne 0x11802de9 */
  if (!C.zf) goto L_11802de9;
  /* 11802dab cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802db2 jne 0x11802dc6 */
  if (!C.zf) goto L_11802dc6;
  /* 11802db4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11802db6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802db9 push eax */
  push32((uint32_t)(EAX));
  /* 11802dba call 0x11803080 */
  push32(0x11802dbfu); f_11803080();
  /* 11802dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802dc4 je 0x11802de7 */
  if (C.zf) goto L_11802de7;
L_11802dc6:;
  /* 11802dc6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802dc9 mov dword ptr [0x11822978], ecx */
  w32((uint32_t)(0x11822978), (ECX));
  /* 11802dcf mov edx, dword ptr [0x11822978] */
  EDX = (r32((uint32_t)(0x11822978)));
  /* 11802dd5 mov dword ptr [0x1182295c], edx */
  w32((uint32_t)(0x1182295c), (EDX));
  /* 11802ddb mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802de0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11802de2 mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
L_11802de7:;
  /* 11802de7 jmp 0x11802e4c */
  goto L_11802e4c;
L_11802de9:;
  /* 11802de9 cmp dword ptr [0x11822968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802df0 jne 0x11802e4c */
  if (!C.zf) goto L_11802e4c;
  /* 11802df2 cmp dword ptr [0x11822964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11822964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802df9 je 0x11802e4c */
  if (C.zf) goto L_11802e4c;
  /* 11802dfb mov ecx, dword ptr [0x11822964] */
  ECX = (r32((uint32_t)(0x11822964)));
  /* 11802e01 push ecx */
  push32((uint32_t)(ECX));
  /* 11802e02 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11802e05 push edx */
  push32((uint32_t)(EDX));
  /* 11802e06 mov eax, dword ptr [0x1182296c] */
  EAX = (r32((uint32_t)(0x1182296c)));
  /* 11802e0b push eax */
  push32((uint32_t)(EAX));
  /* 11802e0c call 0x11805000 */
  push32(0x11802e11u); f_11805000();
  /* 11802e11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802e14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802e16 jne 0x11802e4c */
  if (!C.zf) goto L_11802e4c;
  /* 11802e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11802e1a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802e1d push ecx */
  push32((uint32_t)(ECX));
  /* 11802e1e call 0x11803080 */
  push32(0x11802e23u); f_11803080();
  /* 11802e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802e26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802e28 je 0x11802e4c */
  if (C.zf) goto L_11802e4c;
  /* 11802e2a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802e2d mov dword ptr [0x11822978], edx */
  w32((uint32_t)(0x11822978), (EDX));
  /* 11802e33 mov eax, dword ptr [0x11822978] */
  EAX = (r32((uint32_t)(0x11822978)));
  /* 11802e38 mov dword ptr [0x1182295c], eax */
  w32((uint32_t)(0x1182295c), (EAX));
  /* 11802e3d mov ecx, dword ptr [0x11822974] */
  ECX = (r32((uint32_t)(0x11822974)));
  /* 11802e43 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11802e46 mov dword ptr [0x11822974], ecx */
  w32((uint32_t)(0x11822974), (ECX));
L_11802e4c:;
  /* 11802e4c mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802e51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11802e54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802e56 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802e58 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11802e59:;
  /* 11802e59 mov esp, ebp */
  ESP = (EBP);
  /* 11802e5b pop ebp */
  EBP = (pop32());
  /* 11802e5c ret 4 */
  ESPCHK(0x11802d40u, _esp0);
  ESP += 8; return;
}

/* FUN_10012e60 @ 0x11802e60 (69 bytes, 20 insns) */
void f_11802e60(void) {
  FTRACE(0x11802e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11802e61 mov ebp, esp */
  EBP = (ESP);
  /* 11802e63 mov eax, dword ptr [0x11822970] */
  EAX = (r32((uint32_t)(0x11822970)));
  /* 11802e68 push eax */
  push32((uint32_t)(EAX));
  /* 11802e69 call 0x117f9690 */
  push32(0x11802e6eu); f_117f9690();
  /* 11802e6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802e71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11802e73 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802e76 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11802e79 mov dword ptr [0x11822960], ecx */
  w32((uint32_t)(0x11822960), (ECX));
  /* 11802e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11802e81 push 0x11802eb0 */
  push32((uint32_t)(0x11802eb0u));
  /* 11802e86 call dword ptr [0x11825304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825304))), 0x11802e8cu);
  /* 11802e8c mov edx, dword ptr [0x11822974] */
  EDX = (r32((uint32_t)(0x11822974)));
  /* 11802e92 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11802e95 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11802e97 jne 0x11802ea3 */
  if (!C.zf) goto L_11802ea3;
  /* 11802e99 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
L_11802ea3:;
  /* 11802ea3 pop ebp */
  EBP = (pop32());
  /* 11802ea4 ret  */
  ESPCHK(0x11802e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012eb0 @ 0x11802eb0 (172 bytes, 54 insns) */
void f_11802eb0(void) {
  FTRACE(0x11802eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11802eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11802eb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802eb9 push eax */
  push32((uint32_t)(EAX));
  /* 11802eba call 0x118032f0 */
  push32(0x11802ebfu); f_118032f0();
  /* 11802ebf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802ec2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11802ec5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11802ec7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11802eca push ecx */
  push32((uint32_t)(ECX));
  /* 11802ecb mov edx, dword ptr [0x11822960] */
  EDX = (r32((uint32_t)(0x11822960)));
  /* 11802ed1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802ed3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802ed5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11802edb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11802ee1 push edx */
  push32((uint32_t)(EDX));
  /* 11802ee2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802ee5 push eax */
  push32((uint32_t)(EAX));
  /* 11802ee6 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802eecu);
  /* 11802eec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802eee jne 0x11802f01 */
  if (!C.zf) goto L_11802f01;
  /* 11802ef0 mov dword ptr [0x11822974], 0 */
  w32((uint32_t)(0x11822974), (0x0u));
  /* 11802efa mov eax, 1 */
  EAX = (0x1u);
  /* 11802eff jmp 0x11802f56 */
  goto L_11802f56;
L_11802f01:;
  /* 11802f01 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11802f04 push ecx */
  push32((uint32_t)(ECX));
  /* 11802f05 mov edx, dword ptr [0x11822970] */
  EDX = (r32((uint32_t)(0x11822970)));
  /* 11802f0b push edx */
  push32((uint32_t)(EDX));
  /* 11802f0c call 0x11804f30 */
  push32(0x11802f11u); f_11804f30();
  /* 11802f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802f16 jne 0x11802f49 */
  if (!C.zf) goto L_11802f49;
  /* 11802f18 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802f1b push eax */
  push32((uint32_t)(EAX));
  /* 11802f1c call 0x11803030 */
  push32(0x11802f21u); f_11803030();
  /* 11802f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802f26 je 0x11802f49 */
  if (C.zf) goto L_11802f49;
  /* 11802f28 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11802f2b mov dword ptr [0x11822978], ecx */
  w32((uint32_t)(0x11822978), (ECX));
  /* 11802f31 mov edx, dword ptr [0x11822978] */
  EDX = (r32((uint32_t)(0x11822978)));
  /* 11802f37 mov dword ptr [0x1182295c], edx */
  w32((uint32_t)(0x1182295c), (EDX));
  /* 11802f3d mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802f42 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11802f44 mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
L_11802f49:;
  /* 11802f49 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802f4e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11802f51 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11802f53 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802f55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11802f56:;
  /* 11802f56 mov esp, ebp */
  ESP = (EBP);
  /* 11802f58 pop ebp */
  EBP = (pop32());
  /* 11802f59 ret 4 */
  ESPCHK(0x11802eb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012f60 @ 0x11802f60 (43 bytes, 11 insns) */
void f_11802f60(void) {
  FTRACE(0x11802f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802f60 push ebp */
  push32((uint32_t)(EBP));
  /* 11802f61 mov ebp, esp */
  EBP = (ESP);
  /* 11802f63 mov eax, dword ptr [0x11822974] */
  EAX = (r32((uint32_t)(0x11822974)));
  /* 11802f68 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11802f6d mov dword ptr [0x11822974], eax */
  w32((uint32_t)(0x11822974), (EAX));
  /* 11802f72 call dword ptr [0x11825300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825300))), 0x11802f78u);
  /* 11802f78 mov dword ptr [0x11822978], eax */
  w32((uint32_t)(0x11822978), (EAX));
  /* 11802f7d mov ecx, dword ptr [0x11822978] */
  ECX = (r32((uint32_t)(0x11822978)));
  /* 11802f83 mov dword ptr [0x1182295c], ecx */
  w32((uint32_t)(0x1182295c), (ECX));
  /* 11802f89 pop ebp */
  EBP = (pop32());
  /* 11802f8a ret  */
  ESPCHK(0x11802f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x11802f90 (155 bytes, 57 insns) */
void f_11802f90(void) {
  FTRACE(0x11802f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11802f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11802f91 mov ebp, esp */
  EBP = (ESP);
  /* 11802f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11802f96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11802f9a je 0x11802fbb */
  if (C.zf) goto L_11802fbb;
  /* 11802f9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802f9f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11802fa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11802fa4 je 0x11802fbb */
  if (C.zf) goto L_11802fbb;
  /* 11802fa6 push 0x1181ee24 */
  push32((uint32_t)(0x1181ee24u));
  /* 11802fab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802fae push edx */
  push32((uint32_t)(EDX));
  /* 11802faf call 0x118024f0 */
  push32(0x11802fb4u); f_118024f0();
  /* 11802fb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802fb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802fb9 jne 0x11802fe3 */
  if (!C.zf) goto L_11802fe3;
L_11802fbb:;
  /* 11802fbb push 8 */
  push32((uint32_t)(0x8u));
  /* 11802fbd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11802fc0 push eax */
  push32((uint32_t)(EAX));
  /* 11802fc1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11802fc6 mov ecx, dword ptr [0x11822978] */
  ECX = (r32((uint32_t)(0x11822978)));
  /* 11802fcc push ecx */
  push32((uint32_t)(ECX));
  /* 11802fcd call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x11802fd3u);
  /* 11802fd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802fd5 jne 0x11802fdb */
  if (!C.zf) goto L_11802fdb;
  /* 11802fd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11802fd9 jmp 0x11803027 */
  goto L_11803027;
L_11802fdb:;
  /* 11802fdb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11802fde mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11802fe1 jmp 0x1180301b */
  goto L_1180301b;
L_11802fe3:;
  /* 11802fe3 push 0x1181ee20 */
  push32((uint32_t)(0x1181ee20u));
  /* 11802fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11802feb push eax */
  push32((uint32_t)(EAX));
  /* 11802fec call 0x118024f0 */
  push32(0x11802ff1u); f_118024f0();
  /* 11802ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11802ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11802ff6 jne 0x1180301b */
  if (!C.zf) goto L_1180301b;
  /* 11802ff8 push 8 */
  push32((uint32_t)(0x8u));
  /* 11802ffa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11802ffd push ecx */
  push32((uint32_t)(ECX));
  /* 11802ffe push 0xb */
  push32((uint32_t)(0xbu));
  /* 11803000 mov edx, dword ptr [0x11822978] */
  EDX = (r32((uint32_t)(0x11822978)));
  /* 11803006 push edx */
  push32((uint32_t)(EDX));
  /* 11803007 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x1180300du);
  /* 1180300d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180300f jne 0x11803015 */
  if (!C.zf) goto L_11803015;
  /* 11803011 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11803013 jmp 0x11803027 */
  goto L_11803027;
L_11803015:;
  /* 11803015 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11803018 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1180301b:;
  /* 1180301b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180301e push ecx */
  push32((uint32_t)(ECX));
  /* 1180301f call 0x11805110 */
  push32(0x11803024u); f_11805110();
  /* 11803024 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11803027:;
  /* 11803027 mov esp, ebp */
  ESP = (EBP);
  /* 11803029 pop ebp */
  EBP = (pop32());
  /* 1180302a ret  */
  ESPCHK(0x11802f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10013030 @ 0x11803030 (79 bytes, 26 insns) */
void f_11803030(void) {
  FTRACE(0x11803030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803030 push ebp */
  push32((uint32_t)(EBP));
  /* 11803031 mov ebp, esp */
  EBP = (ESP);
  /* 11803033 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803036 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1180303a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1180303e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11803045 jmp 0x11803050 */
  goto L_11803050;
L_11803047:;
  /* 11803047 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180304a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180304d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11803050:;
  /* 11803050 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803054 jae 0x11803076 */
  if (!C.cf) goto L_11803076;
  /* 11803056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803059 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1180305f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803062 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11803064 mov cx, word ptr [eax*2 + 0x118219c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x118219c4)));
  /* 1180306c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180306e jne 0x11803074 */
  if (!C.zf) goto L_11803074;
  /* 11803070 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11803072 jmp 0x1180307b */
  goto L_1180307b;
L_11803074:;
  /* 11803074 jmp 0x11803047 */
  goto L_11803047;
L_11803076:;
  /* 11803076 mov eax, 1 */
  EAX = (0x1u);
L_1180307b:;
  /* 1180307b mov esp, ebp */
  ESP = (EBP);
  /* 1180307d pop ebp */
  EBP = (pop32());
  /* 1180307e ret  */
  ESPCHK(0x11803030u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x11803080 (135 bytes, 48 insns) */
void f_11803080(void) {
  FTRACE(0x11803080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803080 push ebp */
  push32((uint32_t)(EBP));
  /* 11803081 mov ebp, esp */
  EBP = (ESP);
  /* 11803083 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803086 push esi */
  push32((uint32_t)(ESI));
  /* 11803087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180308a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1180308f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11803094 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11803099 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1180309c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118030a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118030a4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118030a6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 118030a9 push ecx */
  push32((uint32_t)(ECX));
  /* 118030aa push 1 */
  push32((uint32_t)(0x1u));
  /* 118030ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118030af push edx */
  push32((uint32_t)(EDX));
  /* 118030b0 call dword ptr [0x1182297c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1182297c))), 0x118030b6u);
  /* 118030b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118030b8 jne 0x118030be */
  if (!C.zf) goto L_118030be;
  /* 118030ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118030bc jmp 0x11803102 */
  goto L_11803102;
L_118030be:;
  /* 118030be lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 118030c1 push eax */
  push32((uint32_t)(EAX));
  /* 118030c2 call 0x118032f0 */
  push32(0x118030c7u); f_118032f0();
  /* 118030c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118030ca cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118030cd je 0x118030fd */
  if (C.zf) goto L_118030fd;
  /* 118030cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118030d3 je 0x118030fd */
  if (C.zf) goto L_118030fd;
  /* 118030d5 mov ecx, dword ptr [0x1182296c] */
  ECX = (r32((uint32_t)(0x1182296c)));
  /* 118030db push ecx */
  push32((uint32_t)(ECX));
  /* 118030dc call 0x11803370 */
  push32(0x118030e1u); f_11803370();
  /* 118030e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118030e4 mov esi, eax */
  ESI = (EAX);
  /* 118030e6 mov edx, dword ptr [0x1182296c] */
  EDX = (r32((uint32_t)(0x1182296c)));
  /* 118030ec push edx */
  push32((uint32_t)(EDX));
  /* 118030ed call 0x117f9690 */
  push32(0x118030f2u); f_117f9690();
  /* 118030f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118030f5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118030f7 jne 0x118030fd */
  if (!C.zf) goto L_118030fd;
  /* 118030f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118030fb jmp 0x11803102 */
  goto L_11803102;
L_118030fd:;
  /* 118030fd mov eax, 1 */
  EAX = (0x1u);
L_11803102:;
  /* 11803102 pop esi */
  ESI = (pop32());
  /* 11803103 mov esp, ebp */
  ESP = (EBP);
  /* 11803105 pop ebp */
  EBP = (pop32());
  /* 11803106 ret  */
  ESPCHK(0x11803080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013110 @ 0x11803110 (77 bytes, 18 insns) */
void f_11803110(void) {
  FTRACE(0x11803110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803110 push ebp */
  push32((uint32_t)(EBP));
  /* 11803111 mov ebp, esp */
  EBP = (ESP);
  /* 11803113 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803119 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11803123 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11803129 push eax */
  push32((uint32_t)(EAX));
  /* 1180312a call dword ptr [0x118252fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252fc))), 0x11803130u);
  /* 11803130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11803132 je 0x11803149 */
  if (C.zf) goto L_11803149;
  /* 11803134 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180313b jne 0x11803149 */
  if (!C.zf) goto L_11803149;
  /* 1180313d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11803147 jmp 0x11803153 */
  goto L_11803153;
L_11803149:;
  /* 11803149 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11803153:;
  /* 11803153 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11803159 mov esp, ebp */
  ESP = (EBP);
  /* 1180315b pop ebp */
  EBP = (pop32());
  /* 1180315c ret  */
  ESPCHK(0x11803110u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11803160 (388 bytes, 118 insns) */
void f_11803160(void) {
  FTRACE(0x11803160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803160 push ebp */
  push32((uint32_t)(EBP));
  /* 11803161 mov ebp, esp */
  EBP = (ESP);
  /* 11803163 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803166 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1180316d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11803174 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1180317b:;
  /* 1180317b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180317e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803181 jg 0x118032c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_118032c8;
  /* 11803187 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180318a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180318d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1180318e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803190 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11803192 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11803195 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803198 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180319b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180319e cmp edx, dword ptr [ecx + 0x11821520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11821520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031a4 jne 0x1180329e */
  if (!C.zf) goto L_1180329e;
  /* 118031aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118031ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118031b0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031b4 ja 0x118031d7 */
  if ((!C.cf&&!C.zf)) goto L_118031d7;
  /* 118031b6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031ba je 0x11803249 */
  if (C.zf) goto L_11803249;
  /* 118031c0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031c4 je 0x118031f4 */
  if (C.zf) goto L_118031f4;
  /* 118031c6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031ca je 0x11803216 */
  if (C.zf) goto L_11803216;
  /* 118031cc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031d0 je 0x11803238 */
  if (C.zf) goto L_11803238;
  /* 118031d2 jmp 0x11803268 */
  goto L_11803268;
L_118031d7:;
  /* 118031d7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031de je 0x11803205 */
  if (C.zf) goto L_11803205;
  /* 118031e0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031e7 je 0x11803227 */
  if (C.zf) goto L_11803227;
  /* 118031e9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118031f0 je 0x1180325a */
  if (C.zf) goto L_1180325a;
  /* 118031f2 jmp 0x11803268 */
  goto L_11803268;
L_118031f4:;
  /* 118031f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118031f7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118031fa add ecx, 0x11821524 */
  { uint32_t _a=(ECX),_b=(0x11821524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803200 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11803203 jmp 0x11803268 */
  goto L_11803268;
L_11803205:;
  /* 11803205 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803208 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180320b mov eax, dword ptr [edx + 0x1182152c] */
  EAX = (r32((uint32_t)(EDX + 0x1182152c)));
  /* 11803211 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11803214 jmp 0x11803268 */
  goto L_11803268;
L_11803216:;
  /* 11803216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803219 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180321c add ecx, 0x11821530 */
  { uint32_t _a=(ECX),_b=(0x11821530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803222 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11803225 jmp 0x11803268 */
  goto L_11803268;
L_11803227:;
  /* 11803227 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180322a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180322d mov eax, dword ptr [edx + 0x11821534] */
  EAX = (r32((uint32_t)(EDX + 0x11821534)));
  /* 11803233 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11803236 jmp 0x11803268 */
  goto L_11803268;
L_11803238:;
  /* 11803238 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180323b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180323e add ecx, 0x11821538 */
  { uint32_t _a=(ECX),_b=(0x11821538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803244 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11803247 jmp 0x11803268 */
  goto L_11803268;
L_11803249:;
  /* 11803249 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180324c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1180324f add edx, 0x1182153c */
  { uint32_t _a=(EDX),_b=(0x1182153cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803255 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11803258 jmp 0x11803268 */
  goto L_11803268;
L_1180325a:;
  /* 1180325a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180325d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11803260 add eax, 0x11821544 */
  { uint32_t _a=(EAX),_b=(0x11821544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803265 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11803268:;
  /* 11803268 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180326c je 0x11803274 */
  if (C.zf) goto L_11803274;
  /* 1180326e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803272 jge 0x11803276 */
  if ((C.sf==C.of)) goto L_11803276;
L_11803274:;
  /* 11803274 jmp 0x118032c8 */
  goto L_118032c8;
L_11803276:;
  /* 11803276 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803279 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1180327c push ecx */
  push32((uint32_t)(ECX));
  /* 1180327d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803280 push edx */
  push32((uint32_t)(EDX));
  /* 11803281 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803284 push eax */
  push32((uint32_t)(EAX));
  /* 11803285 call 0x117fa080 */
  push32(0x1180328au); f_117fa080();
  /* 1180328a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180328d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803290 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803293 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11803297 mov eax, 1 */
  EAX = (0x1u);
  /* 1180329c jmp 0x118032de */
  goto L_118032de;
L_1180329e:;
  /* 1180329e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118032a1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118032a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118032a7 cmp eax, dword ptr [edx + 0x11821520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11821520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118032ad jae 0x118032ba */
  if (!C.cf) goto L_118032ba;
  /* 118032af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118032b2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118032b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118032b8 jmp 0x118032c3 */
  goto L_118032c3;
L_118032ba:;
  /* 118032ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118032bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118032c0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118032c3:;
  /* 118032c3 jmp 0x1180317b */
  goto L_1180317b;
L_118032c8:;
  /* 118032c8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118032cb push eax */
  push32((uint32_t)(EAX));
  /* 118032cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118032cf push ecx */
  push32((uint32_t)(ECX));
  /* 118032d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118032d3 push edx */
  push32((uint32_t)(EDX));
  /* 118032d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118032d7 push eax */
  push32((uint32_t)(EAX));
  /* 118032d8 call dword ptr [0x11825308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11825308))), 0x118032deu);
L_118032de:;
  /* 118032de mov esp, ebp */
  ESP = (EBP);
  /* 118032e0 pop ebp */
  EBP = (pop32());
  /* 118032e1 ret 0x10 */
  ESPCHK(0x11803160u, _esp0);
  ESP += 20; return;
}

/* FUN_100132f0 @ 0x118032f0 (118 bytes, 42 insns) */
void f_118032f0(void) {
  FTRACE(0x118032f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118032f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118032f1 mov ebp, esp */
  EBP = (ESP);
  /* 118032f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118032f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_118032fd:;
  /* 118032fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803300 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11803302 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11803305 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11803309 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180330c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180330f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11803312 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11803314 je 0x1180335f */
  if (C.zf) goto L_1180335f;
  /* 11803316 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1180331a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180331d jl 0x11803332 */
  if ((C.sf!=C.of)) goto L_11803332;
  /* 1180331f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11803323 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803326 jg 0x11803332 */
  if ((!C.zf&&C.sf==C.of)) goto L_11803332;
  /* 11803328 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1180332b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1180332d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11803330 jmp 0x1180334c */
  goto L_1180334c;
L_11803332:;
  /* 11803332 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11803336 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803339 jl 0x1180334c */
  if ((C.sf!=C.of)) goto L_1180334c;
  /* 1180333b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1180333f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803342 jg 0x1180334c */
  if ((!C.zf&&C.sf==C.of)) goto L_1180334c;
  /* 11803344 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11803347 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11803349 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1180334c:;
  /* 1180334c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180334f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11803352 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11803356 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1180335a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1180335d jmp 0x118032fd */
  goto L_118032fd;
L_1180335f:;
  /* 1180335f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803362 mov esp, ebp */
  ESP = (EBP);
  /* 11803364 pop ebp */
  EBP = (pop32());
  /* 11803365 ret  */
  ESPCHK(0x118032f0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11803370 (101 bytes, 36 insns) */
void f_11803370(void) {
  FTRACE(0x11803370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803370 push ebp */
  push32((uint32_t)(EBP));
  /* 11803371 mov ebp, esp */
  EBP = (ESP);
  /* 11803373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803376 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1180337d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803380 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11803382 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11803385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803388 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180338b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1180338e:;
  /* 1180338e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11803392 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803395 jl 0x118033a0 */
  if ((C.sf!=C.of)) goto L_118033a0;
  /* 11803397 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1180339b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180339e jle 0x118033b2 */
  if ((C.zf||C.sf!=C.of)) goto L_118033b2;
L_118033a0:;
  /* 118033a0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118033a4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118033a7 jl 0x118033ce */
  if ((C.sf!=C.of)) goto L_118033ce;
  /* 118033a9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 118033ad cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118033b0 jg 0x118033ce */
  if ((!C.zf&&C.sf==C.of)) goto L_118033ce;
L_118033b2:;
  /* 118033b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118033b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118033b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118033bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118033be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118033c0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 118033c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118033c6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118033c9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 118033cc jmp 0x1180338e */
  goto L_1180338e;
L_118033ce:;
  /* 118033ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118033d1 mov esp, ebp */
  ESP = (EBP);
  /* 118033d3 pop ebp */
  EBP = (pop32());
  /* 118033d4 ret  */
  ESPCHK(0x11803370u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x118033e0 (122 bytes, 39 insns) */
void f_118033e0(void) {
  FTRACE(0x118033e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118033e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118033e1 mov ebp, esp */
  EBP = (ESP);
  /* 118033e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118033e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118033e7 cmp eax, dword ptr [0x118241fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x118241fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118033ed jae 0x11803411 */
  if (!C.cf) goto L_11803411;
  /* 118033ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118033f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118033f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118033f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118033fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118033fe mov eax, dword ptr [ecx*4 + 0x118240c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x118240c0)));
  /* 11803405 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1180340a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1180340d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180340f jne 0x1180342c */
  if (!C.zf) goto L_1180342c;
L_11803411:;
  /* 11803411 call 0x117fe730 */
  push32(0x11803416u); f_117fe730();
  /* 11803416 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1180341c call 0x117fe740 */
  push32(0x11803421u); f_117fe740();
  /* 11803421 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11803427 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1180342a jmp 0x11803456 */
  goto L_11803456;
L_1180342c:;
  /* 1180342c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180342f push edx */
  push32((uint32_t)(EDX));
  /* 11803430 call 0x117fff50 */
  push32(0x11803435u); f_117fff50();
  /* 11803435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803438 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180343b push eax */
  push32((uint32_t)(EAX));
  /* 1180343c call 0x11803460 */
  push32(0x11803441u); f_11803460();
  /* 11803441 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803444 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11803447 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180344a push ecx */
  push32((uint32_t)(ECX));
  /* 1180344b call 0x117fffe0 */
  push32(0x11803450u); f_117fffe0();
  /* 11803450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11803456:;
  /* 11803456 mov esp, ebp */
  ESP = (EBP);
  /* 11803458 pop ebp */
  EBP = (pop32());
  /* 11803459 ret  */
  ESPCHK(0x118033e0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11803460 (170 bytes, 59 insns) */
void f_11803460(void) {
  FTRACE(0x11803460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803460 push ebp */
  push32((uint32_t)(EBP));
  /* 11803461 mov ebp, esp */
  EBP = (ESP);
  /* 11803463 push ecx */
  push32((uint32_t)(ECX));
  /* 11803464 push esi */
  push32((uint32_t)(ESI));
  /* 11803465 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803468 push eax */
  push32((uint32_t)(EAX));
  /* 11803469 call 0x117ffdd0 */
  push32(0x1180346eu); f_117ffdd0();
  /* 1180346e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803471 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803474 je 0x118034b3 */
  if (C.zf) goto L_118034b3;
  /* 11803476 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180347a je 0x11803482 */
  if (C.zf) goto L_11803482;
  /* 1180347c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803480 jne 0x1180349c */
  if (!C.zf) goto L_1180349c;
L_11803482:;
  /* 11803482 push 1 */
  push32((uint32_t)(0x1u));
  /* 11803484 call 0x117ffdd0 */
  push32(0x11803489u); f_117ffdd0();
  /* 11803489 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180348c mov esi, eax */
  ESI = (EAX);
  /* 1180348e push 2 */
  push32((uint32_t)(0x2u));
  /* 11803490 call 0x117ffdd0 */
  push32(0x11803495u); f_117ffdd0();
  /* 11803495 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803498 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180349a je 0x118034b3 */
  if (C.zf) goto L_118034b3;
L_1180349c:;
  /* 1180349c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180349f push ecx */
  push32((uint32_t)(ECX));
  /* 118034a0 call 0x117ffdd0 */
  push32(0x118034a5u); f_117ffdd0();
  /* 118034a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118034a8 push eax */
  push32((uint32_t)(EAX));
  /* 118034a9 call dword ptr [0x118252f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118252f8))), 0x118034afu);
  /* 118034af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118034b1 je 0x118034bc */
  if (C.zf) goto L_118034bc;
L_118034b3:;
  /* 118034b3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118034ba jmp 0x118034c5 */
  goto L_118034c5;
L_118034bc:;
  /* 118034bc call dword ptr [0x118253f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118253f0))), 0x118034c2u);
  /* 118034c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118034c5:;
  /* 118034c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118034c8 push edx */
  push32((uint32_t)(EDX));
  /* 118034c9 call 0x117ffcf0 */
  push32(0x118034ceu); f_117ffcf0();
  /* 118034ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118034d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118034d4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 118034d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118034da and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 118034dd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118034e0 mov edx, dword ptr [eax*4 + 0x118240c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x118240c0)));
  /* 118034e7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 118034ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118034f0 je 0x11803503 */
  if (C.zf) goto L_11803503;
  /* 118034f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118034f5 push eax */
  push32((uint32_t)(EAX));
  /* 118034f6 call 0x117fe690 */
  push32(0x118034fbu); f_117fe690();
  /* 118034fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118034fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11803501 jmp 0x11803505 */
  goto L_11803505;
L_11803503:;
  /* 11803503 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11803505:;
  /* 11803505 pop esi */
  ESI = (pop32());
  /* 11803506 mov esp, ebp */
  ESP = (EBP);
  /* 11803508 pop ebp */
  EBP = (pop32());
  /* 11803509 ret  */
  ESPCHK(0x11803460u, _esp0);
  ESP += 4; return;
}

/* FUN_10013510 @ 0x11803510 (146 bytes, 52 insns) */
void f_11803510(void) {
  FTRACE(0x11803510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803510 push ebp */
  push32((uint32_t)(EBP));
  /* 11803511 mov ebp, esp */
  EBP = (ESP);
  /* 11803513 push ebx */
  push32((uint32_t)(EBX));
  /* 11803514 push esi */
  push32((uint32_t)(ESI));
  /* 11803515 push edi */
  push32((uint32_t)(EDI));
L_11803516:;
  /* 11803516 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180351a jne 0x1180353a */
  if (!C.zf) goto L_1180353a;
  /* 1180351c push 0x1181e760 */
  push32((uint32_t)(0x1181e760u));
  /* 11803521 push 0 */
  push32((uint32_t)(0x0u));
  /* 11803523 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11803525 push 0x1181ee28 */
  push32((uint32_t)(0x1181ee28u));
  /* 1180352a push 2 */
  push32((uint32_t)(0x2u));
  /* 1180352c call 0x117f5920 */
  push32(0x11803531u); f_117f5920();
  /* 11803531 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803534 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803537 jne 0x1180353a */
  if (!C.zf) goto L_1180353a;
  /* 11803539 int3  */
  x86_unimpl("int3 @ 0x11803539");
L_1180353a:;
  /* 1180353a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1180353c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1180353e jne 0x11803516 */
  if (!C.zf) goto L_11803516;
  /* 11803540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803543 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11803546 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1180354c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1180354e je 0x1180359d */
  if (C.zf) goto L_1180359d;
  /* 11803550 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803553 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11803556 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11803559 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1180355b je 0x1180359d */
  if (C.zf) goto L_1180359d;
  /* 1180355d push 2 */
  push32((uint32_t)(0x2u));
  /* 1180355f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803562 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11803565 push eax */
  push32((uint32_t)(EAX));
  /* 11803566 call 0x117f72f0 */
  push32(0x1180356bu); f_117f72f0();
  /* 1180356b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180356e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803571 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11803574 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1180357a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180357d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11803580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803583 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11803589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1180358c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11803593 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803596 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1180359d:;
  /* 1180359d pop edi */
  EDI = (pop32());
  /* 1180359e pop esi */
  ESI = (pop32());
  /* 1180359f pop ebx */
  EBX = (pop32());
  /* 118035a0 pop ebp */
  EBP = (pop32());
  /* 118035a1 ret  */
  ESPCHK(0x11803510u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x118035b0 (289 bytes, 97 insns) */
void f_118035b0(void) {
  FTRACE(0x118035b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118035b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118035b1 mov ebp, esp */
  EBP = (ESP);
  /* 118035b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118035b6 push esi */
  push32((uint32_t)(ESI));
  /* 118035b7 mov eax, dword ptr [0x11821c98] */
  EAX = (r32((uint32_t)(0x11821c98)));
  /* 118035bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118035bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118035c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118035cd jmp 0x118035d8 */
  goto L_118035d8;
L_118035cf:;
  /* 118035cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118035d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118035d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_118035d8:;
  /* 118035d8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118035dc jae 0x11803611 */
  if (!C.cf) goto L_11803611;
  /* 118035de mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118035e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118035e4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118035e7 push ecx */
  push32((uint32_t)(ECX));
  /* 118035e8 call 0x117f9690 */
  push32(0x118035edu); f_117f9690();
  /* 118035ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118035f0 mov esi, eax */
  ESI = (EAX);
  /* 118035f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118035f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118035f8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 118035fc push ecx */
  push32((uint32_t)(ECX));
  /* 118035fd call 0x117f9690 */
  push32(0x11803602u); f_117f9690();
  /* 11803602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803605 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803608 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1180360c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1180360f jmp 0x118035cf */
  goto L_118035cf;
L_11803611:;
  /* 11803611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803614 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803617 push eax */
  push32((uint32_t)(EAX));
  /* 11803618 call 0x117f6840 */
  push32(0x1180361du); f_117f6840();
  /* 1180361d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803620 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11803623 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803627 je 0x118036c9 */
  if (C.zf) goto L_118036c9;
  /* 1180362d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803630 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11803633 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1180363a jmp 0x11803645 */
  goto L_11803645;
L_1180363c:;
  /* 1180363c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180363f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803642 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11803645:;
  /* 11803645 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803649 jae 0x118036ba */
  if (!C.cf) goto L_118036ba;
  /* 1180364b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180364e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11803651 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803654 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803657 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1180365a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180365d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803660 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11803663 push ecx */
  push32((uint32_t)(ECX));
  /* 11803664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803667 push edx */
  push32((uint32_t)(EDX));
  /* 11803668 call 0x117f9810 */
  push32(0x1180366du); f_117f9810();
  /* 1180366d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803670 push eax */
  push32((uint32_t)(EAX));
  /* 11803671 call 0x117f9690 */
  push32(0x11803676u); f_117f9690();
  /* 11803676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803679 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180367c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180367e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11803681 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803684 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11803687 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180368a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180368d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11803690 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803693 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803696 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1180369a push eax */
  push32((uint32_t)(EAX));
  /* 1180369b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180369e push ecx */
  push32((uint32_t)(ECX));
  /* 1180369f call 0x117f9810 */
  push32(0x118036a4u); f_117f9810();
  /* 118036a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118036a7 push eax */
  push32((uint32_t)(EAX));
  /* 118036a8 call 0x117f9690 */
  push32(0x118036adu); f_117f9690();
  /* 118036ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118036b0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118036b3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118036b5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118036b8 jmp 0x1180363c */
  goto L_1180363c;
L_118036ba:;
  /* 118036ba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118036bd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118036c0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118036c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118036c6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_118036c9:;
  /* 118036c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118036cc pop esi */
  ESI = (pop32());
  /* 118036cd mov esp, ebp */
  ESP = (EBP);
  /* 118036cf pop ebp */
  EBP = (pop32());
  /* 118036d0 ret  */
  ESPCHK(0x118035b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100136e0 @ 0x118036e0 (291 bytes, 97 insns) */
void f_118036e0(void) {
  FTRACE(0x118036e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118036e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118036e1 mov ebp, esp */
  EBP = (ESP);
  /* 118036e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118036e6 push esi */
  push32((uint32_t)(ESI));
  /* 118036e7 mov eax, dword ptr [0x11821c98] */
  EAX = (r32((uint32_t)(0x11821c98)));
  /* 118036ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 118036ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118036f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118036fd jmp 0x11803708 */
  goto L_11803708;
L_118036ff:;
  /* 118036ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803702 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803705 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11803708:;
  /* 11803708 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180370c jae 0x11803742 */
  if (!C.cf) goto L_11803742;
  /* 1180370e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803714 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11803718 push ecx */
  push32((uint32_t)(ECX));
  /* 11803719 call 0x117f9690 */
  push32(0x1180371eu); f_117f9690();
  /* 1180371e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803721 mov esi, eax */
  ESI = (EAX);
  /* 11803723 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803726 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803729 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1180372d push ecx */
  push32((uint32_t)(ECX));
  /* 1180372e call 0x117f9690 */
  push32(0x11803733u); f_117f9690();
  /* 11803733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803736 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803739 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1180373d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11803740 jmp 0x118036ff */
  goto L_118036ff;
L_11803742:;
  /* 11803742 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803745 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803748 push eax */
  push32((uint32_t)(EAX));
  /* 11803749 call 0x117f6840 */
  push32(0x1180374eu); f_117f6840();
  /* 1180374e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803751 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11803754 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803758 je 0x118037fb */
  if (C.zf) goto L_118037fb;
  /* 1180375e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803761 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11803764 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1180376b jmp 0x11803776 */
  goto L_11803776;
L_1180376d:;
  /* 1180376d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803770 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803773 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11803776:;
  /* 11803776 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180377a jae 0x118037ec */
  if (!C.cf) goto L_118037ec;
  /* 1180377c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1180377f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11803782 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803788 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1180378b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180378e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803791 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11803795 push ecx */
  push32((uint32_t)(ECX));
  /* 11803796 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803799 push edx */
  push32((uint32_t)(EDX));
  /* 1180379a call 0x117f9810 */
  push32(0x1180379fu); f_117f9810();
  /* 1180379f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118037a2 push eax */
  push32((uint32_t)(EAX));
  /* 118037a3 call 0x117f9690 */
  push32(0x118037a8u); f_117f9690();
  /* 118037a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118037ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118037b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118037b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037b6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 118037b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118037bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 118037c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118037c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118037c8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118037cc push eax */
  push32((uint32_t)(EAX));
  /* 118037cd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037d0 push ecx */
  push32((uint32_t)(ECX));
  /* 118037d1 call 0x117f9810 */
  push32(0x118037d6u); f_117f9810();
  /* 118037d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118037d9 push eax */
  push32((uint32_t)(EAX));
  /* 118037da call 0x117f9690 */
  push32(0x118037dfu); f_117f9690();
  /* 118037df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118037e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037e5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118037e7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118037ea jmp 0x1180376d */
  goto L_1180376d;
L_118037ec:;
  /* 118037ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037ef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118037f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118037f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118037f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_118037fb:;
  /* 118037fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118037fe pop esi */
  ESI = (pop32());
  /* 118037ff mov esp, ebp */
  ESP = (EBP);
  /* 11803801 pop ebp */
  EBP = (pop32());
  /* 11803802 ret  */
  ESPCHK(0x118036e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013810 @ 0x11803810 (878 bytes, 273 insns) */
void f_11803810(void) {
  FTRACE(0x11803810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803810 push ebp */
  push32((uint32_t)(EBP));
  /* 11803811 mov ebp, esp */
  EBP = (ESP);
  /* 11803813 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11803816 push esi */
  push32((uint32_t)(ESI));
  /* 11803817 mov eax, dword ptr [0x11821c98] */
  EAX = (r32((uint32_t)(0x11821c98)));
  /* 1180381c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1180381f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11803826 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1180382d jmp 0x11803838 */
  goto L_11803838;
L_1180382f:;
  /* 1180382f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803832 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803835 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11803838:;
  /* 11803838 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180383c jae 0x11803871 */
  if (!C.cf) goto L_11803871;
  /* 1180383e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803841 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803844 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11803847 push ecx */
  push32((uint32_t)(ECX));
  /* 11803848 call 0x117f9690 */
  push32(0x1180384du); f_117f9690();
  /* 1180384d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803850 mov esi, eax */
  ESI = (EAX);
  /* 11803852 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803855 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803858 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1180385c push ecx */
  push32((uint32_t)(ECX));
  /* 1180385d call 0x117f9690 */
  push32(0x11803862u); f_117f9690();
  /* 11803862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803865 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803868 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1180386c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1180386f jmp 0x1180382f */
  goto L_1180382f;
L_11803871:;
  /* 11803871 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11803878 jmp 0x11803883 */
  goto L_11803883;
L_1180387a:;
  /* 1180387a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180387d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803880 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11803883:;
  /* 11803883 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803887 jae 0x118038bd */
  if (!C.cf) goto L_118038bd;
  /* 11803889 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1180388c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180388f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11803893 push eax */
  push32((uint32_t)(EAX));
  /* 11803894 call 0x117f9690 */
  push32(0x11803899u); f_117f9690();
  /* 11803899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180389c mov esi, eax */
  ESI = (EAX);
  /* 1180389e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 118038a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118038a4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 118038a8 push eax */
  push32((uint32_t)(EAX));
  /* 118038a9 call 0x117f9690 */
  push32(0x118038aeu); f_117f9690();
  /* 118038ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118038b1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118038b4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118038b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118038bb jmp 0x1180387a */
  goto L_1180387a;
L_118038bd:;
  /* 118038bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118038c0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 118038c6 push eax */
  push32((uint32_t)(EAX));
  /* 118038c7 call 0x117f9690 */
  push32(0x118038ccu); f_117f9690();
  /* 118038cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118038cf mov esi, eax */
  ESI = (EAX);
  /* 118038d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118038d4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 118038da push edx */
  push32((uint32_t)(EDX));
  /* 118038db call 0x117f9690 */
  push32(0x118038e0u); f_117f9690();
  /* 118038e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118038e3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118038e6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118038ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118038ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118038f0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 118038f6 push edx */
  push32((uint32_t)(EDX));
  /* 118038f7 call 0x117f9690 */
  push32(0x118038fcu); f_117f9690();
  /* 118038fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118038ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803902 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11803906 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11803909 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1180390c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11803912 push ecx */
  push32((uint32_t)(ECX));
  /* 11803913 call 0x117f9690 */
  push32(0x11803918u); f_117f9690();
  /* 11803918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1180391b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180391e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11803922 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11803925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803928 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1180392e push edx */
  push32((uint32_t)(EDX));
  /* 1180392f call 0x117f9690 */
  push32(0x11803934u); f_117f9690();
  /* 11803934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803937 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1180393a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1180393e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11803941 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11803944 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803949 push eax */
  push32((uint32_t)(EAX));
  /* 1180394a call 0x117f6840 */
  push32(0x1180394fu); f_117f6840();
  /* 1180394f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803952 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11803955 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803959 je 0x11803b76 */
  if (C.zf) goto L_11803b76;
  /* 1180395f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803962 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11803965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803968 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1180396e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11803971 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11803976 mov eax, dword ptr [0x11821c98] */
  EAX = (r32((uint32_t)(0x11821c98)));
  /* 1180397b push eax */
  push32((uint32_t)(EAX));
  /* 1180397c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1180397f push ecx */
  push32((uint32_t)(ECX));
  /* 11803980 call 0x117fd140 */
  push32(0x11803985u); f_117fd140();
  /* 11803985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803988 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1180398f jmp 0x1180399a */
  goto L_1180399a;
L_11803991:;
  /* 11803991 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803994 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803997 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1180399a:;
  /* 1180399a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1180399e jae 0x11803a0e */
  if (!C.cf) goto L_11803a0e;
  /* 118039a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118039a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118039a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118039a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 118039ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118039af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118039b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118039b5 push edx */
  push32((uint32_t)(EDX));
  /* 118039b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118039b9 push eax */
  push32((uint32_t)(EAX));
  /* 118039ba call 0x117f9810 */
  push32(0x118039bfu); f_117f9810();
  /* 118039bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118039c2 push eax */
  push32((uint32_t)(EAX));
  /* 118039c3 call 0x117f9690 */
  push32(0x118039c8u); f_117f9690();
  /* 118039c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118039cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118039ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 118039d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 118039d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118039d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 118039db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118039de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 118039e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118039e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118039e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 118039ec push edx */
  push32((uint32_t)(EDX));
  /* 118039ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118039f0 push eax */
  push32((uint32_t)(EAX));
  /* 118039f1 call 0x117f9810 */
  push32(0x118039f6u); f_117f9810();
  /* 118039f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118039f9 push eax */
  push32((uint32_t)(EAX));
  /* 118039fa call 0x117f9690 */
  push32(0x118039ffu); f_117f9690();
  /* 118039ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a05 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11803a09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11803a0c jmp 0x11803991 */
  goto L_11803991;
L_11803a0e:;
  /* 11803a0e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11803a15 jmp 0x11803a20 */
  goto L_11803a20;
L_11803a17:;
  /* 11803a17 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803a1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a1d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11803a20:;
  /* 11803a20 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11803a24 jae 0x11803a96 */
  if (!C.cf) goto L_11803a96;
  /* 11803a26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803a29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803a2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a2f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11803a33 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803a36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803a39 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11803a3d push eax */
  push32((uint32_t)(EAX));
  /* 11803a3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a41 push ecx */
  push32((uint32_t)(ECX));
  /* 11803a42 call 0x117f9810 */
  push32(0x11803a47u); f_117f9810();
  /* 11803a47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a4a push eax */
  push32((uint32_t)(EAX));
  /* 11803a4b call 0x117f9690 */
  push32(0x11803a50u); f_117f9690();
  /* 11803a50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a53 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a56 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11803a5a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11803a5d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803a60 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803a63 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a66 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11803a6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11803a6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803a70 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11803a74 push eax */
  push32((uint32_t)(EAX));
  /* 11803a75 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11803a79 call 0x117f9810 */
  push32(0x11803a7eu); f_117f9810();
  /* 11803a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a81 push eax */
  push32((uint32_t)(EAX));
  /* 11803a82 call 0x117f9690 */
  push32(0x11803a87u); f_117f9690();
  /* 11803a87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803a8a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a8d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11803a91 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11803a94 jmp 0x11803a17 */
  goto L_11803a17;
L_11803a96:;
  /* 11803a96 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803a99 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803a9c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11803aa2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803aa5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11803aab push ecx */
  push32((uint32_t)(ECX));
  /* 11803aac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803aaf push edx */
  push32((uint32_t)(EDX));
  /* 11803ab0 call 0x117f9810 */
  push32(0x11803ab5u); f_117f9810();
  /* 11803ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803ab8 push eax */
  push32((uint32_t)(EAX));
  /* 11803ab9 call 0x117f9690 */
  push32(0x11803abeu); f_117f9690();
  /* 11803abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803ac1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803ac4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11803ac8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11803acb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803ace mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803ad1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11803ad7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803ada mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11803ae0 push eax */
  push32((uint32_t)(EAX));
  /* 11803ae1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803ae4 push ecx */
  push32((uint32_t)(ECX));
  /* 11803ae5 call 0x117f9810 */
  push32(0x11803aeau); f_117f9810();
  /* 11803aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803aed push eax */
  push32((uint32_t)(EAX));
  /* 11803aee call 0x117f9690 */
  push32(0x11803af3u); f_117f9690();
  /* 11803af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803af6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803af9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11803afd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11803b00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803b03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b06 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11803b0c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803b0f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11803b15 push ecx */
  push32((uint32_t)(ECX));
  /* 11803b16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b19 push edx */
  push32((uint32_t)(EDX));
  /* 11803b1a call 0x117f9810 */
  push32(0x11803b1fu); f_117f9810();
  /* 11803b1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803b22 push eax */
  push32((uint32_t)(EAX));
  /* 11803b23 call 0x117f9690 */
  push32(0x11803b28u); f_117f9690();
  /* 11803b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803b2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b2e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11803b32 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11803b35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803b38 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b3b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11803b41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11803b44 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11803b4a push eax */
  push32((uint32_t)(EAX));
  /* 11803b4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b4e push ecx */
  push32((uint32_t)(ECX));
  /* 11803b4f call 0x117f9810 */
  push32(0x11803b54u); f_117f9810();
  /* 11803b54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803b57 push eax */
  push32((uint32_t)(EAX));
  /* 11803b58 call 0x117f9690 */
  push32(0x11803b5du); f_117f9690();
  /* 11803b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803b60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b63 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11803b67 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11803b6a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11803b6d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11803b70 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11803b76:;
  /* 11803b76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11803b79 pop esi */
  ESI = (pop32());
  /* 11803b7a mov esp, ebp */
  ESP = (EBP);
  /* 11803b7c pop ebp */
  EBP = (pop32());
  /* 11803b7d ret  */
  ESPCHK(0x11803810u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x11803b80 (31 bytes, 15 insns) */
void f_11803b80(void) {
  FTRACE(0x11803b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11803b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11803b81 mov ebp, esp */
  EBP = (ESP);
  /* 11803b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11803b85 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11803b88 push eax */
  push32((uint32_t)(EAX));
  /* 11803b89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11803b8c push ecx */
  push32((uint32_t)(ECX));
  /* 11803b8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11803b90 push edx */
  push32((uint32_t)(EDX));
  /* 11803b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11803b94 push eax */
  push32((uint32_t)(EAX));
  /* 11803b95 call 0x11803ba0 */
  push32(0x11803b9au); f_11803ba0();
  /* 11803b9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11803b9d pop ebp */
  EBP = (pop32());
  /* 11803b9e ret  */
  ESPCHK(0x11803b80u, _esp0);
  ESP += 4; return;
}

