#include "recomp.h"

/* FUN_10007000 @ 0x10d97000 (116 bytes, 34 insns) */
void f_10d97000(void) {
  FTRACE(0x10d97000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97000 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97001 mov ebp, esp */
  EBP = (ESP);
  /* 10d97003 push ecx */
  push32((uint32_t)(ECX));
  /* 10d97004 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10d9700b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d9700d call 0x10d96820 */
  push32(0x10d97012u); f_10d96820();
  /* 10d97012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97015 call 0x10d98710 */
  push32(0x10d9701au); f_10d98710();
  /* 10d9701a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9701c jge 0x10d97025 */
  if ((C.sf==C.of)) goto L_10d97025;
  /* 10d9701e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d97025:;
  /* 10d97025 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d97027 call 0x10d968c0 */
  push32(0x10d9702cu); f_10d968c0();
  /* 10d9702c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9702f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97031 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97033 mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d97038 push eax */
  push32((uint32_t)(EAX));
  /* 10d97039 call dword ptr [0x10dc0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0240))), 0x10d9703fu);
  /* 10d9703f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d97041 jne 0x10d9706d */
  if (!C.zf) goto L_10d9706d;
  /* 10d97043 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d97049u);
  /* 10d97049 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9704c jne 0x10d97066 */
  if (!C.zf) goto L_10d97066;
  /* 10d9704e call 0x10d9ad00 */
  push32(0x10d97053u); f_10d9ad00();
  /* 10d97053 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10d97059 call 0x10d9acf0 */
  push32(0x10d9705eu); f_10d9acf0();
  /* 10d9705e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10d97064 jmp 0x10d9706d */
  goto L_10d9706d;
L_10d97066:;
  /* 10d97066 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10d9706d:;
  /* 10d9706d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97070 mov esp, ebp */
  ESP = (EBP);
  /* 10d97072 pop ebp */
  EBP = (pop32());
  /* 10d97073 ret  */
  ESPCHK(0x10d97000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x10d97080 (10 bytes, 5 insns) */
void f_10d97080(void) {
  FTRACE(0x10d97080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97080 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97081 mov ebp, esp */
  EBP = (ESP);
  /* 10d97083 call 0x10d97000 */
  push32(0x10d97088u); f_10d97000();
  /* 10d97088 pop ebp */
  EBP = (pop32());
  /* 10d97089 ret  */
  ESPCHK(0x10d97080u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x10d97090 (10 bytes, 5 insns) */
void f_10d97090(void) {
  FTRACE(0x10d97090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97090 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97091 mov ebp, esp */
  EBP = (ESP);
  /* 10d97093 mov eax, dword ptr [0x10dbcc94] */
  EAX = (r32((uint32_t)(0x10dbcc94)));
  /* 10d97098 pop ebp */
  EBP = (pop32());
  /* 10d97099 ret  */
  ESPCHK(0x10d97090u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x10d970a0 (31 bytes, 11 insns) */
void f_10d970a0(void) {
  FTRACE(0x10d970a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d970a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d970a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d970a3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d970aa jbe 0x10d970b0 */
  if ((C.cf||C.zf)) goto L_10d970b0;
  /* 10d970ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d970ae jmp 0x10d970bd */
  goto L_10d970bd;
L_10d970b0:;
  /* 10d970b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d970b3 mov dword ptr [0x10dbcc94], eax */
  w32((uint32_t)(0x10dbcc94), (EAX));
  /* 10d970b8 mov eax, 1 */
  EAX = (0x1u);
L_10d970bd:;
  /* 10d970bd pop ebp */
  EBP = (pop32());
  /* 10d970be ret  */
  ESPCHK(0x10d970a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x10d970c0 (89 bytes, 20 insns) */
void f_10d970c0(void) {
  FTRACE(0x10d970c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d970c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d970c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d970c3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10d970c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d970ca mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d970cf push eax */
  push32((uint32_t)(EAX));
  /* 10d970d0 call dword ptr [0x10dc0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0330))), 0x10d970d6u);
  /* 10d970d6 mov dword ptr [0x10dbfe28], eax */
  w32((uint32_t)(0x10dbfe28), (EAX));
  /* 10d970db cmp dword ptr [0x10dbfe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d970e2 jne 0x10d970e8 */
  if (!C.zf) goto L_10d970e8;
  /* 10d970e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d970e6 jmp 0x10d97117 */
  goto L_10d97117;
L_10d970e8:;
  /* 10d970e8 mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d970ee mov dword ptr [0x10dbfe1c], ecx */
  w32((uint32_t)(0x10dbfe1c), (ECX));
  /* 10d970f4 mov dword ptr [0x10dbfe20], 0 */
  w32((uint32_t)(0x10dbfe20), (0x0u));
  /* 10d970fe mov dword ptr [0x10dbfe24], 0 */
  w32((uint32_t)(0x10dbfe24), (0x0u));
  /* 10d97108 mov dword ptr [0x10dbfe08], 0x10 */
  w32((uint32_t)(0x10dbfe08), (0x10u));
  /* 10d97112 mov eax, 1 */
  EAX = (0x1u);
L_10d97117:;
  /* 10d97117 pop ebp */
  EBP = (pop32());
  /* 10d97118 ret  */
  ESPCHK(0x10d970c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x10d97120 (85 bytes, 29 insns) */
void f_10d97120(void) {
  FTRACE(0x10d97120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97120 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97121 mov ebp, esp */
  EBP = (ESP);
  /* 10d97123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97126 mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d9712b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9712e mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97134 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97136 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d97139 mov edx, dword ptr [0x10dbfe28] */
  EDX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d9713f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d97142:;
  /* 10d97142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97145 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97148 jae 0x10d9716f */
  if (!C.cf) goto L_10d9716f;
  /* 10d9714a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9714d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97150 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97153 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d97156 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9715d jae 0x10d97164 */
  if (!C.cf) goto L_10d97164;
  /* 10d9715f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97162 jmp 0x10d97171 */
  goto L_10d97171;
L_10d97164:;
  /* 10d97164 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97167 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9716a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9716d jmp 0x10d97142 */
  goto L_10d97142;
L_10d9716f:;
  /* 10d9716f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d97171:;
  /* 10d97171 mov esp, ebp */
  ESP = (EBP);
  /* 10d97173 pop ebp */
  EBP = (pop32());
  /* 10d97174 ret  */
  ESPCHK(0x10d97120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10d97180 (95 bytes, 33 insns) */
void f_10d97180(void) {
  FTRACE(0x10d97180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97180 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97181 mov ebp, esp */
  EBP = (ESP);
  /* 10d97183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97189 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9718c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9718f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d97192 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97195 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d97198 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9719b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d971a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d971a3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d971a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d971a8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d971ab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d971ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d971af jne 0x10d971d1 */
  if (!C.zf) goto L_10d971d1;
  /* 10d971b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d971b4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d971b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d971b9 jne 0x10d971d1 */
  if (!C.zf) goto L_10d971d1;
  /* 10d971bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d971be and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d971c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d971c6 je 0x10d971d1 */
  if (C.zf) goto L_10d971d1;
  /* 10d971c8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10d971cf jmp 0x10d971d8 */
  goto L_10d971d8;
L_10d971d1:;
  /* 10d971d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d971d8:;
  /* 10d971d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d971db mov esp, ebp */
  ESP = (EBP);
  /* 10d971dd pop ebp */
  EBP = (pop32());
  /* 10d971de ret  */
  ESPCHK(0x10d97180u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x10d971e0 (1485 bytes, 453 insns) */
void f_10d971e0(void) {
  FTRACE(0x10d971e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d971e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d971e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d971e3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d971e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d971e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d971ec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10d971ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d971f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d971f5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d971f8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d971fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d971fe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10d97201 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d97204 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97207 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9720d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97210 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10d97217 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9721a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9721d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97220 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d97223 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97226 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d97228 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9722b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d9722e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97231 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97234 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10d97237 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d9723a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9723c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9723f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97242 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10d97245 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d97248 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9724b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9724e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97250 jne 0x10d97378 */
  if (!C.zf) goto L_10d97378;
  /* 10d97256 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97259 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d9725c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9725f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d97262 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97266 jbe 0x10d9726f */
  if ((C.cf||C.zf)) goto L_10d9726f;
  /* 10d97268 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d9726f:;
  /* 10d9726f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97272 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97275 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97278 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9727b jne 0x10d97351 */
  if (!C.zf) goto L_10d97351;
  /* 10d97281 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97285 jae 0x10d972e6 */
  if (!C.cf) goto L_10d972e6;
  /* 10d97287 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d9728c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9728f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97291 not eax */
  EAX = (~(EAX));
  /* 10d97293 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97296 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97299 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d9729d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9729f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d972a2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d972a5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d972a9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d972ac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d972af mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d972b2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d972b5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d972b8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d972bb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d972be mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d972c1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d972c4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d972c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d972ca jne 0x10d972e4 */
  if (!C.zf) goto L_10d972e4;
  /* 10d972cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d972d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d972d4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d972d6 not eax */
  EAX = (~(EAX));
  /* 10d972d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d972db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d972dd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d972df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d972e2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d972e4:;
  /* 10d972e4 jmp 0x10d97351 */
  goto L_10d97351;
L_10d972e6:;
  /* 10d972e6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d972e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d972ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d972f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d972f3 not edx */
  EDX = (~(EDX));
  /* 10d972f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d972f8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d972fb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d97302 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97304 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97307 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d9730a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d97311 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97314 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97317 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d9731a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d9731d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97320 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97323 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d97326 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97329 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9732c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d97330 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97332 jne 0x10d97351 */
  if (!C.zf) goto L_10d97351;
  /* 10d97334 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d97337 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9733a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d9733f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97341 not edx */
  EDX = (~(EDX));
  /* 10d97343 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97346 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97349 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9734b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9734e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d97351:;
  /* 10d97351 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97354 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d97357 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d9735a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d9735d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d97360 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d97366 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97369 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9736c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d9736f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97372 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97375 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10d97378:;
  /* 10d97378 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9737b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d9737e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97381 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d97384 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97388 jbe 0x10d97391 */
  if ((C.cf||C.zf)) goto L_10d97391;
  /* 10d9738a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d97391:;
  /* 10d97391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97394 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d97397 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97399 jne 0x10d974f5 */
  if (!C.zf) goto L_10d974f5;
  /* 10d9739f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d973a2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d973a5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10d973a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d973ab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d973ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d973b1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d973b4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d973b8 jbe 0x10d973c1 */
  if ((C.cf||C.zf)) goto L_10d973c1;
  /* 10d973ba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10d973c1:;
  /* 10d973c1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d973c4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d973c7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d973ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d973cd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d973d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d973d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d973d6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d973da jbe 0x10d973e3 */
  if ((C.cf||C.zf)) goto L_10d973e3;
  /* 10d973dc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10d973e3:;
  /* 10d973e3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d973e6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d973e9 je 0x10d974ef */
  if (C.zf) goto L_10d974ef;
  /* 10d973ef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d973f2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d973f5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d973f8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d973fb jne 0x10d974d1 */
  if (!C.zf) goto L_10d974d1;
  /* 10d97401 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97405 jae 0x10d97466 */
  if (!C.cf) goto L_10d97466;
  /* 10d97407 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d9740c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9740f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97411 not edx */
  EDX = (~(EDX));
  /* 10d97413 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97416 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97419 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d9741d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9741f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97422 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97425 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d97429 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d9742c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9742f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d97432 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d97435 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97438 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9743b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d9743e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97441 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97444 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d97448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9744a jne 0x10d97464 */
  if (!C.zf) goto L_10d97464;
  /* 10d9744c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97454 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97456 not edx */
  EDX = (~(EDX));
  /* 10d97458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9745b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9745d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9745f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97462 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d97464:;
  /* 10d97464 jmp 0x10d974d1 */
  goto L_10d974d1;
L_10d97466:;
  /* 10d97466 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97469 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9746c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97471 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97473 not eax */
  EAX = (~(EAX));
  /* 10d97475 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97478 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d9747b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d97482 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97487 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d9748a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d97491 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97494 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97497 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d9749a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d9749d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d974a0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d974a3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d974a6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d974a9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d974ac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d974b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d974b2 jne 0x10d974d1 */
  if (!C.zf) goto L_10d974d1;
  /* 10d974b4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d974b7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d974ba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d974bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d974c1 not eax */
  EAX = (~(EAX));
  /* 10d974c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d974c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d974c9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d974cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d974ce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d974d1:;
  /* 10d974d1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d974d4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d974d7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d974da mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d974dd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d974e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d974e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d974e6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d974e9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d974ec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_10d974ef:;
  /* 10d974ef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d974f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10d974f5:;
  /* 10d974f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d974f8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d974fb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d974fd jne 0x10d9750b */
  if (!C.zf) goto L_10d9750b;
  /* 10d974ff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97502 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97505 je 0x10d9761b */
  if (C.zf) goto L_10d9761b;
L_10d9750b:;
  /* 10d9750b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9750e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97511 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d97514 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d97517 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9751a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9751d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d97520 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d97523 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97526 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97529 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d9752c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9752f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97532 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d97535 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97538 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9753b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9753e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d97541 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97544 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97547 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9754a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9754d jne 0x10d9761b */
  if (!C.zf) goto L_10d9761b;
  /* 10d97553 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97557 jae 0x10d975b4 */
  if (!C.cf) goto L_10d975b4;
  /* 10d97559 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d9755c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9755f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d97563 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97566 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97569 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d9756c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d9756f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97572 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97575 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d97578 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9757a jne 0x10d97592 */
  if (!C.zf) goto L_10d97592;
  /* 10d9757c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97581 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97584 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97589 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9758b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9758d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97590 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d97592:;
  /* 10d97592 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97597 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9759a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d9759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9759f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d975a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d975a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d975a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d975ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d975ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d975b2 jmp 0x10d9761b */
  goto L_10d9761b;
L_10d975b4:;
  /* 10d975b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d975b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d975ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d975be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d975c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d975c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d975c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d975ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d975cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d975d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d975d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d975d5 jne 0x10d975f2 */
  if (!C.zf) goto L_10d975f2;
  /* 10d975d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d975da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d975dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d975e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d975e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d975e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d975ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d975ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d975ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d975f2:;
  /* 10d975f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d975f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d975f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d975fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d975ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97602 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97605 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d9760c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9760e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97611 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10d97614 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d9761b:;
  /* 10d9761b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9761e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97621 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d97623 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97626 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97629 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9762c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 10d9762f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97632 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d97634 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9763a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d9763c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9763f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97642 jne 0x10d977a9 */
  if (!C.zf) goto L_10d977a9;
  /* 10d97648 cmp dword ptr [0x10dbfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9764f je 0x10d97798 */
  if (C.zf) goto L_10d97798;
  /* 10d97655 mov eax, dword ptr [0x10dbfe18] */
  EAX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d9765a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d9765d mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97663 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d97666 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97668 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d9766b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d97670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d97675 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97678 push eax */
  push32((uint32_t)(EAX));
  /* 10d97679 call dword ptr [0x10dc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0314))), 0x10d9767fu);
  /* 10d9767f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97684 mov ecx, dword ptr [0x10dbfe18] */
  ECX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d9768a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d9768c mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97691 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d97694 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97696 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d9769c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d9769f mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d976a7 mov edx, dword ptr [0x10dbfe18] */
  EDX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d976ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d976b8 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d976c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d976c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d976c6 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d976ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d976d1 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d976da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d976de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d976e0 jne 0x10d976f6 */
  if (!C.zf) goto L_10d976f6;
  /* 10d976e2 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d976eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d976ed mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d976f6:;
  /* 10d976f6 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d976fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97700 jne 0x10d97798 */
  if (!C.zf) goto L_10d97798;
  /* 10d97706 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d9770b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9770d mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97712 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d97715 push ecx */
  push32((uint32_t)(ECX));
  /* 10d97716 call dword ptr [0x10dc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0314))), 0x10d9771cu);
  /* 10d9771c mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97722 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d97725 push eax */
  push32((uint32_t)(EAX));
  /* 10d97726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97728 mov ecx, dword ptr [0x10dbfe2c] */
  ECX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d9772e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9772f call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d97735u);
  /* 10d97735 mov edx, dword ptr [0x10dbfe24] */
  EDX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d9773b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9773e mov eax, dword ptr [0x10dbfe28] */
  EAX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97743 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97745 mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d9774b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9774e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97750 push eax */
  push32((uint32_t)(EAX));
  /* 10d97751 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97757 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9775a push edx */
  push32((uint32_t)(EDX));
  /* 10d9775b mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d97760 push eax */
  push32((uint32_t)(EAX));
  /* 10d97761 call 0x10d9ad10 */
  push32(0x10d97766u); f_10d9ad10();
  /* 10d97766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97769 mov ecx, dword ptr [0x10dbfe24] */
  ECX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d9776f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97772 mov dword ptr [0x10dbfe24], ecx */
  w32((uint32_t)(0x10dbfe24), (ECX));
  /* 10d97778 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9777b cmp edx, dword ptr [0x10dbfe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97781 jbe 0x10d9778c */
  if ((C.cf||C.zf)) goto L_10d9778c;
  /* 10d97783 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97786 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97789 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d9778c:;
  /* 10d9778c mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97792 mov dword ptr [0x10dbfe1c], ecx */
  w32((uint32_t)(0x10dbfe1c), (ECX));
L_10d97798:;
  /* 10d97798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9779b mov dword ptr [0x10dbfe20], edx */
  w32((uint32_t)(0x10dbfe20), (EDX));
  /* 10d977a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d977a4 mov dword ptr [0x10dbfe18], eax */
  w32((uint32_t)(0x10dbfe18), (EAX));
L_10d977a9:;
  /* 10d977a9 mov esp, ebp */
  ESP = (EBP);
  /* 10d977ab pop ebp */
  EBP = (pop32());
  /* 10d977ac ret  */
  ESPCHK(0x10d971e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x10d977b0 (1334 bytes, 427 insns) */
void f_10d977b0(void) {
  FTRACE(0x10d977b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d977b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d977b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d977b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d977b6 push esi */
  push32((uint32_t)(ESI));
  /* 10d977b7 mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d977bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d977bf mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d977c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d977c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d977ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d977cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d977d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d977d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d977d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d977d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d977dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d977df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d977e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d977e6 jge 0x10d977fc */
  if ((C.sf==C.of)) goto L_10d977fc;
  /* 10d977e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d977eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d977ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d977f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d977f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 10d977fa jmp 0x10d97811 */
  goto L_10d97811;
L_10d977fc:;
  /* 10d977fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d97803 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97806 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97809 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9780c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d9780e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10d97811:;
  /* 10d97811 mov ecx, dword ptr [0x10dbfe1c] */
  ECX = (r32((uint32_t)(0x10dbfe1c)));
  /* 10d97817 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d9781a:;
  /* 10d9781a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9781d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97820 jae 0x10d97846 */
  if (!C.cf) goto L_10d97846;
  /* 10d97822 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97825 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d97828 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 10d9782a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9782d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d97830 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10d97833 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97835 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97837 je 0x10d9783b */
  if (C.zf) goto L_10d9783b;
  /* 10d97839 jmp 0x10d97846 */
  goto L_10d97846;
L_10d9783b:;
  /* 10d9783b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9783e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97841 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d97844 jmp 0x10d9781a */
  goto L_10d9781a;
L_10d97846:;
  /* 10d97846 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97849 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9784c jne 0x10d9792d */
  if (!C.zf) goto L_10d9792d;
  /* 10d97852 mov eax, dword ptr [0x10dbfe28] */
  EAX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97857 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d9785a:;
  /* 10d9785a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9785d cmp ecx, dword ptr [0x10dbfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97863 jae 0x10d97889 */
  if (!C.cf) goto L_10d97889;
  /* 10d97865 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97868 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9786b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 10d9786d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97870 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d97873 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d97876 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9787a je 0x10d9787e */
  if (C.zf) goto L_10d9787e;
  /* 10d9787c jmp 0x10d97889 */
  goto L_10d97889;
L_10d9787e:;
  /* 10d9787e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97881 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97884 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d97887 jmp 0x10d9785a */
  goto L_10d9785a;
L_10d97889:;
  /* 10d97889 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9788c cmp ecx, dword ptr [0x10dbfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97892 jne 0x10d9792d */
  if (!C.zf) goto L_10d9792d;
L_10d97898:;
  /* 10d97898 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9789b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9789e jae 0x10d978b6 */
  if (!C.cf) goto L_10d978b6;
  /* 10d978a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978a7 je 0x10d978ab */
  if (C.zf) goto L_10d978ab;
  /* 10d978a9 jmp 0x10d978b6 */
  goto L_10d978b6;
L_10d978ab:;
  /* 10d978ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d978b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d978b4 jmp 0x10d97898 */
  goto L_10d97898;
L_10d978b6:;
  /* 10d978b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978bc jne 0x10d97907 */
  if (!C.zf) goto L_10d97907;
  /* 10d978be mov eax, dword ptr [0x10dbfe28] */
  EAX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d978c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d978c6:;
  /* 10d978c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978c9 cmp ecx, dword ptr [0x10dbfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978cf jae 0x10d978e7 */
  if (!C.cf) goto L_10d978e7;
  /* 10d978d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978d8 je 0x10d978dc */
  if (C.zf) goto L_10d978dc;
  /* 10d978da jmp 0x10d978e7 */
  goto L_10d978e7;
L_10d978dc:;
  /* 10d978dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d978e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d978e5 jmp 0x10d978c6 */
  goto L_10d978c6;
L_10d978e7:;
  /* 10d978e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d978ea cmp ecx, dword ptr [0x10dbfe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978f0 jne 0x10d97907 */
  if (!C.zf) goto L_10d97907;
  /* 10d978f2 call 0x10d97cf0 */
  push32(0x10d978f7u); f_10d97cf0();
  /* 10d978f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d978fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d978fe jne 0x10d97907 */
  if (!C.zf) goto L_10d97907;
  /* 10d97900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97902 jmp 0x10d97ce1 */
  goto L_10d97ce1;
L_10d97907:;
  /* 10d97907 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9790a push edx */
  push32((uint32_t)(EDX));
  /* 10d9790b call 0x10d97e00 */
  push32(0x10d97910u); f_10d97e00();
  /* 10d97910 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97913 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97916 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d97919 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d9791b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9791e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d97921 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97924 jne 0x10d9792d */
  if (!C.zf) goto L_10d9792d;
  /* 10d97926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97928 jmp 0x10d97ce1 */
  goto L_10d97ce1;
L_10d9792d:;
  /* 10d9792d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97930 mov dword ptr [0x10dbfe1c], edx */
  w32((uint32_t)(0x10dbfe1c), (EDX));
  /* 10d97936 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97939 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9793c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 10d9793f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97942 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d97944 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d97947 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9794b je 0x10d97970 */
  if (C.zf) goto L_10d97970;
  /* 10d9794d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97950 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97953 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d97956 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 10d9795a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9795d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97960 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d97963 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d9796a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 10d9796c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9796e jne 0x10d979a5 */
  if (!C.zf) goto L_10d979a5;
L_10d97970:;
  /* 10d97970 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10d97977:;
  /* 10d97977 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9797a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d9797d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d97980 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d97984 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97987 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d9798a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10d9798d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 10d97994 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10d97996 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d97998 jne 0x10d979a5 */
  if (!C.zf) goto L_10d979a5;
  /* 10d9799a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9799d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d979a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d979a3 jmp 0x10d97977 */
  goto L_10d97977;
L_10d979a5:;
  /* 10d979a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d979a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d979ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d979b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d979b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d979bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d979c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d979c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d979c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d979cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 10d979cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d979d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d979d6 jne 0x10d979f2 */
  if (!C.zf) goto L_10d979f2;
  /* 10d979d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 10d979df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d979e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d979e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d979e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 10d979ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10d979f2:;
  /* 10d979f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d979f6 jl 0x10d97a0b */
  if ((C.sf!=C.of)) goto L_10d97a0b;
  /* 10d979f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d979fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d979fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d97a00 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97a03 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97a06 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d97a09 jmp 0x10d979f2 */
  goto L_10d979f2;
L_10d97a0b:;
  /* 10d97a0b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97a11 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10d97a15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d97a18 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97a1b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d97a1d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97a20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d97a23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97a26 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d97a29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97a2c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d97a2f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97a33 jle 0x10d97a3c */
  if ((C.zf||C.sf!=C.of)) goto L_10d97a3c;
  /* 10d97a35 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_10d97a3c:;
  /* 10d97a3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97a3f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97a42 je 0x10d97c60 */
  if (C.zf) goto L_10d97c60;
  /* 10d97a48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97a4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97a4e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97a51 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97a54 jne 0x10d97b2a */
  if (!C.zf) goto L_10d97b2a;
  /* 10d97a5a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97a5e jge 0x10d97abf */
  if ((C.sf==C.of)) goto L_10d97abf;
  /* 10d97a60 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97a65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97a68 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97a6a not eax */
  EAX = (~(EAX));
  /* 10d97a6c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97a6f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97a72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d97a76 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97a78 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97a7b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97a7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d97a82 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97a85 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97a88 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d97a8b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d97a8e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97a91 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97a94 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d97a97 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97a9a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97a9d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d97aa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d97aa3 jne 0x10d97abd */
  if (!C.zf) goto L_10d97abd;
  /* 10d97aa5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97aaa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97aad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97aaf not eax */
  EAX = (~(EAX));
  /* 10d97ab1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d97ab6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d97ab8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97abb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d97abd:;
  /* 10d97abd jmp 0x10d97b2a */
  goto L_10d97b2a;
L_10d97abf:;
  /* 10d97abf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97ac2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97ac5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97aca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97acc not edx */
  EDX = (~(EDX));
  /* 10d97ace mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97ad1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97ad4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d97adb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97add mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97ae0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97ae3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10d97aea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97aed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97af0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d97af3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d97af6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97af9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97afc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d97aff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97b02 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97b05 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d97b09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97b0b jne 0x10d97b2a */
  if (!C.zf) goto L_10d97b2a;
  /* 10d97b0d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97b10 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97b13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97b18 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97b1a not edx */
  EDX = (~(EDX));
  /* 10d97b1c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97b1f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97b22 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97b24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97b27 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d97b2a:;
  /* 10d97b2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b2d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d97b30 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d97b36 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d97b39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b3c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d97b3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b42 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d97b45 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d97b48 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97b4c je 0x10d97c60 */
  if (C.zf) goto L_10d97c60;
  /* 10d97b52 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97b58 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d97b5b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d97b5e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97b64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97b67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d97b6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97b70 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d97b73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97b76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b79 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d97b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97b82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b85 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d97b88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97b8e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d97b91 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97b94 jne 0x10d97c60 */
  if (!C.zf) goto L_10d97c60;
  /* 10d97b9a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97b9e jge 0x10d97bfa */
  if ((C.sf==C.of)) goto L_10d97bfa;
  /* 10d97ba0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97ba3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97ba6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d97baa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97bad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97bb0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d97bb3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d97bb5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97bb8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97bbb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d97bbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97bc0 jne 0x10d97bd8 */
  if (!C.zf) goto L_10d97bd8;
  /* 10d97bc2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97bc7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97bca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97bcc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97bcf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d97bd1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d97bd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d97bd8:;
  /* 10d97bd8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97be0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97be2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97be5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97be8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d97bec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97bee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97bf1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97bf4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d97bf8 jmp 0x10d97c60 */
  goto L_10d97c60;
L_10d97bfa:;
  /* 10d97bfa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97bfd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c00 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d97c04 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97c07 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c0a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d97c0d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d97c0f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97c12 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c15 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d97c18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97c1a jne 0x10d97c37 */
  if (!C.zf) goto L_10d97c37;
  /* 10d97c1c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97c1f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97c22 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d97c27 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d97c29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97c2c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d97c2f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d97c31 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97c34 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d97c37:;
  /* 10d97c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97c3a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97c3d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97c42 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97c44 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97c47 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97c4a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d97c51 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97c53 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97c56 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97c59 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d97c60:;
  /* 10d97c60 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97c64 je 0x10d97c7a */
  if (C.zf) goto L_10d97c7a;
  /* 10d97c66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97c69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d97c6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97c71 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c74 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97c77 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d97c7a:;
  /* 10d97c7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97c7d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c80 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d97c83 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97c86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97c8c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d97c8e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97c91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97c97 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97c9a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d97c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97ca0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d97ca2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97ca5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d97ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97caa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97cad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d97caf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d97cb1 jne 0x10d97cd3 */
  if (!C.zf) goto L_10d97cd3;
  /* 10d97cb3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97cb6 cmp eax, dword ptr [0x10dbfe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbfe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97cbc jne 0x10d97cd3 */
  if (!C.zf) goto L_10d97cd3;
  /* 10d97cbe mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97cc1 cmp ecx, dword ptr [0x10dbfe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97cc7 jne 0x10d97cd3 */
  if (!C.zf) goto L_10d97cd3;
  /* 10d97cc9 mov dword ptr [0x10dbfe20], 0 */
  w32((uint32_t)(0x10dbfe20), (0x0u));
L_10d97cd3:;
  /* 10d97cd3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10d97cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d97cd9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d97cdb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97cde add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d97ce1:;
  /* 10d97ce1 pop esi */
  ESI = (pop32());
  /* 10d97ce2 mov esp, ebp */
  ESP = (EBP);
  /* 10d97ce4 pop ebp */
  EBP = (pop32());
  /* 10d97ce5 ret  */
  ESPCHK(0x10d977b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x10d97cf0 (271 bytes, 78 insns) */
void f_10d97cf0(void) {
  FTRACE(0x10d97cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d97cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d97cf4 mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d97cf9 cmp eax, dword ptr [0x10dbfe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbfe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97cff jne 0x10d97d4b */
  if (!C.zf) goto L_10d97d4b;
  /* 10d97d01 mov ecx, dword ptr [0x10dbfe08] */
  ECX = (r32((uint32_t)(0x10dbfe08)));
  /* 10d97d07 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97d0a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d97d0d push ecx */
  push32((uint32_t)(ECX));
  /* 10d97d0e mov edx, dword ptr [0x10dbfe28] */
  EDX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97d14 push edx */
  push32((uint32_t)(EDX));
  /* 10d97d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97d17 mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d97d1c push eax */
  push32((uint32_t)(EAX));
  /* 10d97d1d call dword ptr [0x10dc0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0334))), 0x10d97d23u);
  /* 10d97d23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d97d26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97d2a jne 0x10d97d33 */
  if (!C.zf) goto L_10d97d33;
  /* 10d97d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97d2e jmp 0x10d97dfb */
  goto L_10d97dfb;
L_10d97d33:;
  /* 10d97d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97d36 mov dword ptr [0x10dbfe28], ecx */
  w32((uint32_t)(0x10dbfe28), (ECX));
  /* 10d97d3c mov edx, dword ptr [0x10dbfe08] */
  EDX = (r32((uint32_t)(0x10dbfe08)));
  /* 10d97d42 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97d45 mov dword ptr [0x10dbfe08], edx */
  w32((uint32_t)(0x10dbfe08), (EDX));
L_10d97d4b:;
  /* 10d97d4b mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d97d50 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d97d53 mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d97d59 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97d5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d97d5e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d97d63 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d97d65 mov edx, dword ptr [0x10dbfe2c] */
  EDX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d97d6b push edx */
  push32((uint32_t)(EDX));
  /* 10d97d6c call dword ptr [0x10dc0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0330))), 0x10d97d72u);
  /* 10d97d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97d75 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10d97d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97d7b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97d7f jne 0x10d97d85 */
  if (!C.zf) goto L_10d97d85;
  /* 10d97d81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97d83 jmp 0x10d97dfb */
  goto L_10d97dfb;
L_10d97d85:;
  /* 10d97d85 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d97d87 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10d97d8c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d97d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97d93 call dword ptr [0x10dc0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0338))), 0x10d97d99u);
  /* 10d97d99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97d9c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d97d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97da2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97da6 jne 0x10d97dc2 */
  if (!C.zf) goto L_10d97dc2;
  /* 10d97da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97dab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d97dae push ecx */
  push32((uint32_t)(ECX));
  /* 10d97daf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d97db1 mov edx, dword ptr [0x10dbfe2c] */
  EDX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d97db7 push edx */
  push32((uint32_t)(EDX));
  /* 10d97db8 call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d97dbeu);
  /* 10d97dbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d97dc0 jmp 0x10d97dfb */
  goto L_10d97dfb;
L_10d97dc2:;
  /* 10d97dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97dc5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d97dcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97dce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d97dd5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97dd8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 10d97ddf mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d97de4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97de7 mov dword ptr [0x10dbfe24], eax */
  w32((uint32_t)(0x10dbfe24), (EAX));
  /* 10d97dec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97def mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d97df2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10d97df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d97dfb:;
  /* 10d97dfb mov esp, ebp */
  ESP = (EBP);
  /* 10d97dfd pop ebp */
  EBP = (pop32());
  /* 10d97dfe ret  */
  ESPCHK(0x10d97cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e00 @ 0x10d97e00 (494 bytes, 149 insns) */
void f_10d97e00(void) {
  FTRACE(0x10d97e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97e01 mov ebp, esp */
  EBP = (ESP);
  /* 10d97e03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97e06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97e09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d97e0c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d97e0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97e12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d97e15 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d97e18 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_10d97e1f:;
  /* 10d97e1f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97e23 jl 0x10d97e38 */
  if ((C.sf!=C.of)) goto L_10d97e38;
  /* 10d97e25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d97e28 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d97e2a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d97e2d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97e30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97e33 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d97e36 jmp 0x10d97e1f */
  goto L_10d97e1f;
L_10d97e38:;
  /* 10d97e38 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97e3b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d97e41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97e44 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d97e4b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d97e4e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d97e55 jmp 0x10d97e60 */
  goto L_10d97e60;
L_10d97e57:;
  /* 10d97e57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97e5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97e5d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d97e60:;
  /* 10d97e60 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97e64 jge 0x10d97e86 */
  if ((C.sf==C.of)) goto L_10d97e86;
  /* 10d97e66 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d97e69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97e6c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 10d97e6f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d97e72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97e75 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97e78 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d97e7b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97e7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97e81 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d97e84 jmp 0x10d97e57 */
  goto L_10d97e57;
L_10d97e86:;
  /* 10d97e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97e89 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d97e8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97e8f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d97e92 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97e94 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d97e97 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d97e99 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d97e9e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d97ea3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97ea6 push edx */
  push32((uint32_t)(EDX));
  /* 10d97ea7 call dword ptr [0x10dc0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0338))), 0x10d97eadu);
  /* 10d97ead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d97eaf jne 0x10d97eb9 */
  if (!C.zf) goto L_10d97eb9;
  /* 10d97eb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d97eb4 jmp 0x10d97fea */
  goto L_10d97fea;
L_10d97eb9:;
  /* 10d97eb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97ebc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97ec1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d97ec4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97ec7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d97eca jmp 0x10d97ed8 */
  goto L_10d97ed8;
L_10d97ecc:;
  /* 10d97ecc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97ecf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97ed5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d97ed8:;
  /* 10d97ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97edb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d97ede ja 0x10d97f3d */
  if ((!C.cf&&!C.zf)) goto L_10d97f3d;
  /* 10d97ee0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97ee3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10d97eea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97eed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10d97ef7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d97efa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97efd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d97f00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d97f09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97f12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d97f18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97f21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d97f27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97f2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d97f32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d97f35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10d97f3b jmp 0x10d97ecc */
  goto L_10d97ecc;
L_10d97f3d:;
  /* 10d97f3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d97f40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97f46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d97f49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d97f4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97f4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d97f55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d97f5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d97f5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d97f67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d97f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97f6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d97f73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d97f79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d97f7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d97f7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d97f82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d97f85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97f88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97f8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10d97f93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97f99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10d97fa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97fa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10d97fab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97fae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10d97fb1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d97fb4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d97fb7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10d97fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d97fbc jne 0x10d97fcd */
  if (!C.zf) goto L_10d97fcd;
  /* 10d97fbe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97fc1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d97fc4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d97fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97fca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d97fcd:;
  /* 10d97fcd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d97fd2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d97fd5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d97fd7 not edx */
  EDX = (~(EDX));
  /* 10d97fd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97fdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d97fdf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d97fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d97fe4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d97fe7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10d97fea:;
  /* 10d97fea mov esp, ebp */
  ESP = (EBP);
  /* 10d97fec pop ebp */
  EBP = (pop32());
  /* 10d97fed ret  */
  ESPCHK(0x10d97e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ff0 @ 0x10d97ff0 (1515 bytes, 489 insns) */
void f_10d97ff0(void) {
  FTRACE(0x10d97ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d97ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d97ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10d97ff3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d97ff6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d97ff9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d97ffc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d97ffe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d98001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98004 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d98007 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d9800a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9800d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d98010 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98013 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d98016 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d98019 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10d9801c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9801f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98022 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d98028 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9802b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10d98032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d98035 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d98038 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9803b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d9803e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98041 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d98043 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98046 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10d98049 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9804c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9804f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d98052 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d98057 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d9805a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9805d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98060 jle 0x10d98316 */
  if ((C.zf||C.sf!=C.of)) goto L_10d98316;
  /* 10d98066 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98069 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9806c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9806e jne 0x10d9807b */
  if (!C.zf) goto L_10d9807b;
  /* 10d98070 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d98073 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98076 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98079 jle 0x10d98082 */
  if ((C.zf||C.sf!=C.of)) goto L_10d98082;
L_10d9807b:;
  /* 10d9807b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9807d jmp 0x10d985d7 */
  goto L_10d985d7;
L_10d98082:;
  /* 10d98082 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98085 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d98088 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9808b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9808e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98092 jbe 0x10d9809b */
  if ((C.cf||C.zf)) goto L_10d9809b;
  /* 10d98094 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d9809b:;
  /* 10d9809b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9809e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d980a1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d980a4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d980a7 jne 0x10d9817d */
  if (!C.zf) goto L_10d9817d;
  /* 10d980ad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d980b1 jae 0x10d98112 */
  if (!C.cf) goto L_10d98112;
  /* 10d980b3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d980b8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d980bb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d980bd not edx */
  EDX = (~(EDX));
  /* 10d980bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d980c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d980c5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d980c9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d980cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d980ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d980d1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d980d5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d980d8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d980db mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d980de sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d980e1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d980e4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d980e7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d980ea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d980ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d980f0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d980f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d980f6 jne 0x10d98110 */
  if (!C.zf) goto L_10d98110;
  /* 10d980f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d980fd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98100 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98102 not edx */
  EDX = (~(EDX));
  /* 10d98104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98107 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d98109 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9810b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9810e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d98110:;
  /* 10d98110 jmp 0x10d9817d */
  goto L_10d9817d;
L_10d98112:;
  /* 10d98112 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d9811d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d9811f not eax */
  EAX = (~(EAX));
  /* 10d98121 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98124 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98127 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d9812e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98130 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98133 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98136 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d9813d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98140 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98143 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d98146 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d98149 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9814c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9814f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d98152 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98155 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98158 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d9815c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9815e jne 0x10d9817d */
  if (!C.zf) goto L_10d9817d;
  /* 10d98160 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98163 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98166 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d9816b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d9816d not eax */
  EAX = (~(EAX));
  /* 10d9816f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98172 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98175 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d98177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9817a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d9817d:;
  /* 10d9817d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98180 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d98183 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98186 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d98189 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d9818c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9818f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d98192 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98195 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d98198 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d9819b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9819e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d981a1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d981a4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d981a7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d981ab jle 0x10d982f7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d982f7;
  /* 10d981b1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d981b4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d981b7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d981ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d981bd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d981c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d981c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d981c6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d981ca jbe 0x10d981d3 */
  if ((C.cf||C.zf)) goto L_10d981d3;
  /* 10d981cc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d981d3:;
  /* 10d981d3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d981d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d981d9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10d981dc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d981df mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d981e2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d981e5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d981e8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d981eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d981ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d981f1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d981f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d981f7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d981fa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d981fd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98200 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98203 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98206 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d98209 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9820c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9820f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98212 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98215 jne 0x10d982e3 */
  if (!C.zf) goto L_10d982e3;
  /* 10d9821b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9821f jae 0x10d9827c */
  if (!C.cf) goto L_10d9827c;
  /* 10d98221 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98224 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98227 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d9822b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9822e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98231 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d98234 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d98237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9823a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9823d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d98240 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d98242 jne 0x10d9825a */
  if (!C.zf) goto L_10d9825a;
  /* 10d98244 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98249 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9824c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d9824e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98251 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d98253 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98255 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98258 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d9825a:;
  /* 10d9825a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d9825f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98262 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d98264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98267 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9826a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10d9826e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98270 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98273 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98276 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10d9827a jmp 0x10d982e3 */
  goto L_10d982e3;
L_10d9827c:;
  /* 10d9827c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9827f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98282 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d98286 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98289 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9828c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d9828f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d98292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98295 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98298 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10d9829b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9829d jne 0x10d982ba */
  if (!C.zf) goto L_10d982ba;
  /* 10d9829f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d982a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d982a5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d982aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d982ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d982af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d982b2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d982b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d982b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10d982ba:;
  /* 10d982ba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d982bd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d982c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d982c5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d982c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d982ca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d982cd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d982d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d982d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d982d9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d982dc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10d982e3:;
  /* 10d982e3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d982e6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d982e9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d982eb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d982ee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d982f1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d982f4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10d982f7:;
  /* 10d982f7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d982fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d982fd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98300 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d98302 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d98305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98308 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9830b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9830e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10d98311 jmp 0x10d985d2 */
  goto L_10d985d2;
L_10d98316:;
  /* 10d98316 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d98319 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9831c jge 0x10d985d2 */
  if ((C.sf==C.of)) goto L_10d985d2;
  /* 10d98322 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d98325 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98328 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9832b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d9832d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d98330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98333 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98336 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98339 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10d9833c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9833f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98342 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d98345 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d98348 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9834b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9834e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d98351 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d98354 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98357 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d9835a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9835e jbe 0x10d98367 */
  if ((C.cf||C.zf)) goto L_10d98367;
  /* 10d98360 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d98367:;
  /* 10d98367 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9836a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9836d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9836f jne 0x10d984b0 */
  if (!C.zf) goto L_10d984b0;
  /* 10d98375 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98378 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10d9837b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9837e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d98381 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98385 jbe 0x10d9838e */
  if ((C.cf||C.zf)) goto L_10d9838e;
  /* 10d98387 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10d9838e:;
  /* 10d9838e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98391 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98394 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98397 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9839a jne 0x10d98470 */
  if (!C.zf) goto L_10d98470;
  /* 10d983a0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d983a4 jae 0x10d98405 */
  if (!C.cf) goto L_10d98405;
  /* 10d983a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d983ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d983ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d983b0 not edx */
  EDX = (~(EDX));
  /* 10d983b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d983b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d983b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d983bc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d983be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d983c1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d983c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d983c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d983cb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d983ce mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d983d1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d983d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d983d7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d983da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10d983dd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d983e0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d983e3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d983e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d983e9 jne 0x10d98403 */
  if (!C.zf) goto L_10d98403;
  /* 10d983eb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d983f0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d983f3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d983f5 not edx */
  EDX = (~(EDX));
  /* 10d983f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d983fa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d983fc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d983fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98401 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d98403:;
  /* 10d98403 jmp 0x10d98470 */
  goto L_10d98470;
L_10d98405:;
  /* 10d98405 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98408 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9840b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d98410 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d98412 not eax */
  EAX = (~(EAX));
  /* 10d98414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98417 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9841a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10d98421 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98423 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98426 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98429 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10d98430 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98433 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98436 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10d98439 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d9843c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9843f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98442 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10d98445 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98448 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9844b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d9844f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d98451 jne 0x10d98470 */
  if (!C.zf) goto L_10d98470;
  /* 10d98453 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d98456 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98459 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d9845e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d98460 not eax */
  EAX = (~(EAX));
  /* 10d98462 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98465 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98468 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9846a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9846d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d98470:;
  /* 10d98470 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98473 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d98476 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98479 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9847c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d9847f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98482 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d98485 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98488 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d9848b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d9848e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d98491 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98494 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d98497 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9849a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d9849d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d984a0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d984a3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d984a7 jbe 0x10d984b0 */
  if ((C.cf||C.zf)) goto L_10d984b0;
  /* 10d984a9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10d984b0:;
  /* 10d984b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d984b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d984b6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10d984b9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d984bc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984bf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d984c2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d984c5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d984c8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d984ce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d984d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d984d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984d7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d984da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984dd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d984e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984e3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d984e6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984e9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d984ec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d984ef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d984f2 jne 0x10d985be */
  if (!C.zf) goto L_10d985be;
  /* 10d984f8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d984fc jae 0x10d98558 */
  if (!C.cf) goto L_10d98558;
  /* 10d984fe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98501 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98504 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d98508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9850b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9850e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d98511 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d98513 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98516 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98519 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d9851c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9851e jne 0x10d98536 */
  if (!C.zf) goto L_10d98536;
  /* 10d98520 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d98525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98528 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d9852a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9852d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9852f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d98531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98534 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d98536:;
  /* 10d98536 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d9853b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9853e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98543 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98546 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10d9854a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9854c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9854f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98552 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10d98556 jmp 0x10d985be */
  goto L_10d985be;
L_10d98558:;
  /* 10d98558 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9855b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9855e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10d98562 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98565 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98568 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d9856b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d9856d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d98570 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98573 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10d98576 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d98578 jne 0x10d98595 */
  if (!C.zf) goto L_10d98595;
  /* 10d9857a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9857d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10d98585 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10d98587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9858a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9858d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9858f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98592 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10d98595:;
  /* 10d98595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98598 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9859b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d985a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d985a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d985a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d985a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10d985af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d985b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d985b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d985b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10d985be:;
  /* 10d985be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d985c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d985c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d985c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d985c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d985cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d985cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_10d985d2:;
  /* 10d985d2 mov eax, 1 */
  EAX = (0x1u);
L_10d985d7:;
  /* 10d985d7 mov esp, ebp */
  ESP = (EBP);
  /* 10d985d9 pop ebp */
  EBP = (pop32());
  /* 10d985da ret  */
  ESPCHK(0x10d97ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085e0 @ 0x10d985e0 (304 bytes, 79 insns) */
void f_10d985e0(void) {
  FTRACE(0x10d985e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d985e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d985e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d985e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d985e4 cmp dword ptr [0x10dbfe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d985eb je 0x10d9870c */
  if (C.zf) goto L_10d9870c;
  /* 10d985f1 mov eax, dword ptr [0x10dbfe18] */
  EAX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d985f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 10d985f9 mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d985ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d98602 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d98607 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d9860c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d98611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98614 push eax */
  push32((uint32_t)(EAX));
  /* 10d98615 call dword ptr [0x10dc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0314))), 0x10d9861bu);
  /* 10d9861b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98620 mov ecx, dword ptr [0x10dbfe18] */
  ECX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d98626 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98628 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d9862d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d98630 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98632 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98638 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d9863b mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98640 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d98643 mov edx, dword ptr [0x10dbfe18] */
  EDX = (r32((uint32_t)(0x10dbfe18)));
  /* 10d98649 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 10d98654 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98659 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9865c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 10d9865f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10d98662 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98667 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9866a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 10d9866d mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98673 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d98676 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 10d9867a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9867c jne 0x10d98692 */
  if (!C.zf) goto L_10d98692;
  /* 10d9867e mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98684 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d98687 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 10d98689 mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d9868f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10d98692:;
  /* 10d98692 mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d98698 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9869c jne 0x10d98702 */
  if (!C.zf) goto L_10d98702;
  /* 10d9869e cmp dword ptr [0x10dbfe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d986a5 jle 0x10d98702 */
  if ((C.zf||C.sf!=C.of)) goto L_10d98702;
  /* 10d986a7 mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d986ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d986af push ecx */
  push32((uint32_t)(ECX));
  /* 10d986b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d986b2 mov edx, dword ptr [0x10dbfe2c] */
  EDX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d986b8 push edx */
  push32((uint32_t)(EDX));
  /* 10d986b9 call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d986bfu);
  /* 10d986bf mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d986c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d986c7 mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d986cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d986cf mov edx, dword ptr [0x10dbfe20] */
  EDX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d986d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d986d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d986da push ecx */
  push32((uint32_t)(ECX));
  /* 10d986db mov eax, dword ptr [0x10dbfe20] */
  EAX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d986e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d986e3 push eax */
  push32((uint32_t)(EAX));
  /* 10d986e4 mov ecx, dword ptr [0x10dbfe20] */
  ECX = (r32((uint32_t)(0x10dbfe20)));
  /* 10d986ea push ecx */
  push32((uint32_t)(ECX));
  /* 10d986eb call 0x10d9ad10 */
  push32(0x10d986f0u); f_10d9ad10();
  /* 10d986f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d986f3 mov edx, dword ptr [0x10dbfe24] */
  EDX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d986f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d986fc mov dword ptr [0x10dbfe24], edx */
  w32((uint32_t)(0x10dbfe24), (EDX));
L_10d98702:;
  /* 10d98702 mov dword ptr [0x10dbfe20], 0 */
  w32((uint32_t)(0x10dbfe20), (0x0u));
L_10d9870c:;
  /* 10d9870c mov esp, ebp */
  ESP = (EBP);
  /* 10d9870e pop ebp */
  EBP = (pop32());
  /* 10d9870f ret  */
  ESPCHK(0x10d985e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x10d98710 (1565 bytes, 343 insns) */
void f_10d98710(void) {
  FTRACE(0x10d98710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d98710 push ebp */
  push32((uint32_t)(EBP));
  /* 10d98711 mov ebp, esp */
  EBP = (ESP);
  /* 10d98713 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98719 mov eax, dword ptr [0x10dbfe24] */
  EAX = (r32((uint32_t)(0x10dbfe24)));
  /* 10d9871e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d98721 push eax */
  push32((uint32_t)(EAX));
  /* 10d98722 mov ecx, dword ptr [0x10dbfe28] */
  ECX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d98728 push ecx */
  push32((uint32_t)(ECX));
  /* 10d98729 call dword ptr [0x10dc02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e8))), 0x10d9872fu);
  /* 10d9872f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98731 je 0x10d9873b */
  if (C.zf) goto L_10d9873b;
  /* 10d98733 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d98736 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d9873b:;
  /* 10d9873b mov edx, dword ptr [0x10dbfe28] */
  EDX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d98741 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 10d98747 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 10d98751 jmp 0x10d98762 */
  goto L_10d98762;
L_10d98753:;
  /* 10d98753 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d98759 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9875c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_10d98762:;
  /* 10d98762 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 10d98768 cmp ecx, dword ptr [0x10dbfe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9876e jge 0x10d98d27 */
  if ((C.sf==C.of)) goto L_10d98d27;
  /* 10d98774 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d9877a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d9877d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 10d98783 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10d98788 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d9878e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9878f call dword ptr [0x10dc02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e8))), 0x10d98795u);
  /* 10d98795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98797 je 0x10d987a3 */
  if (C.zf) goto L_10d987a3;
  /* 10d98799 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d9879e jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d987a3:;
  /* 10d987a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d987a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d987ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 10d987b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d987b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d987be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d987c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d987c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d987ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d987cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 10d987d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 10d987e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d987e8 jmp 0x10d987f3 */
  goto L_10d987f3;
L_10d987ea:;
  /* 10d987ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d987ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d987f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d987f3:;
  /* 10d987f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d987f7 jge 0x10d98ceb */
  if ((C.sf==C.of)) goto L_10d98ceb;
  /* 10d987fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 10d98807 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 10d98811 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 10d9881b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 10d98825 jmp 0x10d98836 */
  goto L_10d98836;
L_10d98827:;
  /* 10d98827 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d9882d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98830 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_10d98836:;
  /* 10d98836 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9883d jge 0x10d98852 */
  if ((C.sf==C.of)) goto L_10d98852;
  /* 10d9883f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d98845 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 10d98850 jmp 0x10d98827 */
  goto L_10d98827;
L_10d98852:;
  /* 10d98852 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98856 jl 0x10d98c8d */
  if ((C.sf!=C.of)) goto L_10d98c8d;
  /* 10d9885c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d98861 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d98867 push ecx */
  push32((uint32_t)(ECX));
  /* 10d98868 call dword ptr [0x10dc02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e8))), 0x10d9886eu);
  /* 10d9886e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98870 je 0x10d9887c */
  if (C.zf) goto L_10d9887c;
  /* 10d98872 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 10d98877 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d9887c:;
  /* 10d9887c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d98882 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d98885 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 10d9888f jmp 0x10d988a0 */
  goto L_10d988a0;
L_10d98891:;
  /* 10d98891 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 10d98897 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9889a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_10d988a0:;
  /* 10d988a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d988a7 jge 0x10d98a24 */
  if ((C.sf==C.of)) goto L_10d98a24;
  /* 10d988ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d988b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d988b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 10d988b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d988bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d988c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 10d988cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d988d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d988d5 jne 0x10d988e2 */
  if (!C.zf) goto L_10d988e2;
  /* 10d988d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 10d988dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d988e0 je 0x10d988ec */
  if (C.zf) goto L_10d988ec;
L_10d988e2:;
  /* 10d988e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 10d988e7 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d988ec:;
  /* 10d988ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d988f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d988f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d988fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d98900 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 10d98906 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 10d9890c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9890f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d98911 je 0x10d98949 */
  if (C.zf) goto L_10d98949;
  /* 10d98913 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d98919 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9891c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 10d98922 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9892c jle 0x10d98938 */
  if ((C.zf||C.sf!=C.of)) goto L_10d98938;
  /* 10d9892e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 10d98933 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98938:;
  /* 10d98938 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 10d9893e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98941 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 10d98947 jmp 0x10d9898b */
  goto L_10d9898b;
L_10d98949:;
  /* 10d98949 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d9894f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d98952 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98955 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d9895b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98962 jle 0x10d9896e */
  if ((C.zf||C.sf!=C.of)) goto L_10d9896e;
  /* 10d98964 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d9896e:;
  /* 10d9896e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d98974 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 10d9897b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9897e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d98984 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_10d9898b:;
  /* 10d9898b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98992 jl 0x10d989ad */
  if ((C.sf!=C.of)) goto L_10d989ad;
  /* 10d98994 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 10d9899a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9899d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9899f jne 0x10d989ad */
  if (!C.zf) goto L_10d989ad;
  /* 10d989a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d989ab jle 0x10d989b7 */
  if ((C.zf||C.sf!=C.of)) goto L_10d989b7;
L_10d989ad:;
  /* 10d989ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 10d989b2 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d989b7:;
  /* 10d989b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d989bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d989c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d989c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d989cc je 0x10d989d8 */
  if (C.zf) goto L_10d989d8;
  /* 10d989ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d989d3 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d989d8:;
  /* 10d989d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d989de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d989e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d989ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d989f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d989f6 jb 0x10d988ec */
  if (C.cf) goto L_10d988ec;
  /* 10d989fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d98a02 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98a08 je 0x10d98a14 */
  if (C.zf) goto L_10d98a14;
  /* 10d98a0a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 10d98a0f jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98a14:;
  /* 10d98a14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98a17 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98a1c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d98a1f jmp 0x10d98891 */
  goto L_10d98891;
L_10d98a24:;
  /* 10d98a24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d98a27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d98a29 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98a2f je 0x10d98a3b */
  if (C.zf) goto L_10d98a3b;
  /* 10d98a31 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 10d98a36 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98a3b:;
  /* 10d98a3b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d98a3e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 10d98a44 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d98a4b jmp 0x10d98a56 */
  goto L_10d98a56;
L_10d98a4d:;
  /* 10d98a4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98a50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98a53 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d98a56:;
  /* 10d98a56 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98a5a jge 0x10d98c8d */
  if ((C.sf==C.of)) goto L_10d98c8d;
  /* 10d98a60 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 10d98a6a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d98a70 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_10d98a76:;
  /* 10d98a76 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d98a7c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d98a7f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 10d98a85 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98a8b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98a91 je 0x10d98bba */
  if (C.zf) goto L_10d98bba;
  /* 10d98a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98a9a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d98aa0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98aa7 je 0x10d98bba */
  if (C.zf) goto L_10d98bba;
  /* 10d98aad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98ab3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98ab9 jb 0x10d98ace */
  if (C.cf) goto L_10d98ace;
  /* 10d98abb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d98ac1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98ac6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98acc jb 0x10d98ad8 */
  if (C.cf) goto L_10d98ad8;
L_10d98ace:;
  /* 10d98ace mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 10d98ad3 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98ad8:;
  /* 10d98ad8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98ade and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d98ae4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 10d98aea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 10d98af0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98af3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d98af6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98af9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98afe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_10d98b04:;
  /* 10d98b04 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98b07 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b0d je 0x10d98b2e */
  if (C.zf) goto L_10d98b2e;
  /* 10d98b0f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98b12 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b18 jne 0x10d98b1c */
  if (!C.zf) goto L_10d98b1c;
  /* 10d98b1a jmp 0x10d98b2e */
  goto L_10d98b2e;
L_10d98b1c:;
  /* 10d98b1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d98b21 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 10d98b24 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98b27 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98b29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d98b2c jmp 0x10d98b04 */
  goto L_10d98b04;
L_10d98b2e:;
  /* 10d98b2e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d98b31 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b37 jne 0x10d98b43 */
  if (!C.zf) goto L_10d98b43;
  /* 10d98b39 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 10d98b3e jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98b43:;
  /* 10d98b43 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98b49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d98b4b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d98b4e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98b51 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 10d98b57 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b5e jle 0x10d98b6a */
  if ((C.zf||C.sf!=C.of)) goto L_10d98b6a;
  /* 10d98b60 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_10d98b6a:;
  /* 10d98b6a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 10d98b70 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b73 je 0x10d98b7f */
  if (C.zf) goto L_10d98b7f;
  /* 10d98b75 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 10d98b7a jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98b7f:;
  /* 10d98b7f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98b85 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d98b88 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98b8e je 0x10d98b9a */
  if (C.zf) goto L_10d98b9a;
  /* 10d98b90 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 10d98b95 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98b9a:;
  /* 10d98b9a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 10d98ba0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 10d98ba6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d98bac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98baf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 10d98bb5 jmp 0x10d98a76 */
  goto L_10d98a76;
L_10d98bba:;
  /* 10d98bba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98bc1 je 0x10d98c31 */
  if (C.zf) goto L_10d98c31;
  /* 10d98bc3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98bc7 jge 0x10d98bfb */
  if ((C.sf==C.of)) goto L_10d98bfb;
  /* 10d98bc9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98bce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98bd1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98bd3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d98bd9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98bdb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 10d98be1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98be6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98be9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98beb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d98bf1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98bf3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 10d98bf9 jmp 0x10d98c31 */
  goto L_10d98c31;
L_10d98bfb:;
  /* 10d98bfb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98bfe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98c01 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98c06 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98c08 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d98c0e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98c10 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 10d98c16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98c19 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98c1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10d98c21 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10d98c23 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d98c29 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98c2b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_10d98c31:;
  /* 10d98c31 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 10d98c37 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98c3a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98c40 jne 0x10d98c54 */
  if (!C.zf) goto L_10d98c54;
  /* 10d98c42 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d98c45 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 10d98c4b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98c52 je 0x10d98c5e */
  if (C.zf) goto L_10d98c5e;
L_10d98c54:;
  /* 10d98c54 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 10d98c59 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98c5e:;
  /* 10d98c5e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d98c64 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d98c67 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98c6d je 0x10d98c79 */
  if (C.zf) goto L_10d98c79;
  /* 10d98c6f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 10d98c74 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98c79:;
  /* 10d98c79 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 10d98c7f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98c82 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 10d98c88 jmp 0x10d98a4d */
  goto L_10d98a4d;
L_10d98c8d:;
  /* 10d98c8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d98c90 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d98c96 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 10d98c9c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98ca0 jne 0x10d98cba */
  if (!C.zf) goto L_10d98cba;
  /* 10d98ca2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d98ca5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 10d98cab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 10d98cb1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98cb8 je 0x10d98cc1 */
  if (C.zf) goto L_10d98cc1;
L_10d98cba:;
  /* 10d98cba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 10d98cbf jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98cc1:;
  /* 10d98cc1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 10d98cc7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98ccd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 10d98cd3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d98cd6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98cdb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d98cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98ce1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d98ce3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d98ce6 jmp 0x10d987ea */
  goto L_10d987ea;
L_10d98ceb:;
  /* 10d98ceb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d98cf1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 10d98cf7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98cf9 jne 0x10d98d0c */
  if (!C.zf) goto L_10d98d0c;
  /* 10d98cfb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d98d01 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 10d98d07 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98d0a je 0x10d98d13 */
  if (C.zf) goto L_10d98d13;
L_10d98d0c:;
  /* 10d98d0c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 10d98d11 jmp 0x10d98d29 */
  goto L_10d98d29;
L_10d98d13:;
  /* 10d98d13 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 10d98d19 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98d1c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 10d98d22 jmp 0x10d98753 */
  goto L_10d98753;
L_10d98d27:;
  /* 10d98d27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d98d29:;
  /* 10d98d29 mov esp, ebp */
  ESP = (EBP);
  /* 10d98d2b pop ebp */
  EBP = (pop32());
  /* 10d98d2c ret  */
  ESPCHK(0x10d98710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x10d98d30 (250 bytes, 92 insns) */
void f_10d98d30(void) {
  FTRACE(0x10d98d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d98d30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d98d31 mov ebp, esp */
  EBP = (ESP);
  /* 10d98d33 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10d98d37 push esi */
  push32((uint32_t)(ESI));
  /* 10d98d38 push edi */
  push32((uint32_t)(EDI));
  /* 10d98d39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d98d3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d98d3f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d98d42 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d98d45:;
  /* 10d98d45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98d49 jne 0x10d98d69 */
  if (!C.zf) goto L_10d98d69;
  /* 10d98d4b push 0x10db9e54 */
  push32((uint32_t)(0x10db9e54u));
  /* 10d98d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d98d52 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d98d54 push 0x10db9e48 */
  push32((uint32_t)(0x10db9e48u));
  /* 10d98d59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d98d5b call 0x10d91ee0 */
  push32(0x10d98d60u); f_10d91ee0();
  /* 10d98d60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98d63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98d66 jne 0x10d98d69 */
  if (!C.zf) goto L_10d98d69;
  /* 10d98d68 int3  */
  x86_unimpl("int3 @ 0x10d98d68");
L_10d98d69:;
  /* 10d98d69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d98d6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d98d6d jne 0x10d98d45 */
  if (!C.zf) goto L_10d98d45;
L_10d98d6f:;
  /* 10d98d6f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98d73 jne 0x10d98d93 */
  if (!C.zf) goto L_10d98d93;
  /* 10d98d75 push 0x10db9e38 */
  push32((uint32_t)(0x10db9e38u));
  /* 10d98d7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d98d7c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d98d7e push 0x10db9e48 */
  push32((uint32_t)(0x10db9e48u));
  /* 10d98d83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d98d85 call 0x10d91ee0 */
  push32(0x10d98d8au); f_10d91ee0();
  /* 10d98d8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98d8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98d90 jne 0x10d98d93 */
  if (!C.zf) goto L_10d98d93;
  /* 10d98d92 int3  */
  x86_unimpl("int3 @ 0x10d98d92");
L_10d98d93:;
  /* 10d98d93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98d95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98d97 jne 0x10d98d6f */
  if (!C.zf) goto L_10d98d6f;
  /* 10d98d99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98d9c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d98da3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98da9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d98dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98daf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98db2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d98db4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98db7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 10d98dbe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d98dc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d98dc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d98dc5 push edx */
  push32((uint32_t)(EDX));
  /* 10d98dc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98dc9 push eax */
  push32((uint32_t)(EAX));
  /* 10d98dca call 0x10d99db0 */
  push32(0x10d98dcfu); f_10d99db0();
  /* 10d98dcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98dd2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d98dd5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98dd8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d98ddb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98dde mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98de1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d98de4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98de7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98deb jl 0x10d98e0f */
  if ((C.sf!=C.of)) goto L_10d98e0f;
  /* 10d98ded mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98df0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d98df2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d98df5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d98dfd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10d98e00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98e03 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d98e05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98e08 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98e0b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d98e0d jmp 0x10d98e20 */
  goto L_10d98e20;
L_10d98e0f:;
  /* 10d98e0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98e12 push edx */
  push32((uint32_t)(EDX));
  /* 10d98e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d98e15 call 0x10d99b30 */
  push32(0x10d98e1au); f_10d99b30();
  /* 10d98e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98e1d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d98e20:;
  /* 10d98e20 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d98e23 pop edi */
  EDI = (pop32());
  /* 10d98e24 pop esi */
  ESI = (pop32());
  /* 10d98e25 pop ebx */
  EBX = (pop32());
  /* 10d98e26 mov esp, ebp */
  ESP = (EBP);
  /* 10d98e28 pop ebp */
  EBP = (pop32());
  /* 10d98e29 ret  */
  ESPCHK(0x10d98d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x10d98e30 (183 bytes, 58 insns) */
void f_10d98e30(void) {
  FTRACE(0x10d98e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d98e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d98e31 mov ebp, esp */
  EBP = (ESP);
  /* 10d98e33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98e3c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98e41 ja 0x10d98e5a */
  if ((!C.cf&&!C.zf)) goto L_10d98e5a;
  /* 10d98e43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98e46 mov edx, dword ptr [0x10dbcc98] */
  EDX = (r32((uint32_t)(0x10dbcc98)));
  /* 10d98e4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98e4e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d98e52 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 10d98e55 jmp 0x10d98ee3 */
  goto L_10d98ee3;
L_10d98e5a:;
  /* 10d98e5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98e5d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d98e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d98e66 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d98e6c mov edx, dword ptr [0x10dbcc98] */
  EDX = (r32((uint32_t)(0x10dbcc98)));
  /* 10d98e72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98e74 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10d98e78 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d98e7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98e7f je 0x10d98ea3 */
  if (C.zf) goto L_10d98ea3;
  /* 10d98e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98e84 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10d98e87 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d98e8d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d98e90 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d98e93 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 10d98e96 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 10d98e9a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 10d98ea1 jmp 0x10d98eb4 */
  goto L_10d98eb4;
L_10d98ea3:;
  /* 10d98ea3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d98ea6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10d98ea9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 10d98ead mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d98eb4:;
  /* 10d98eb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d98eb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d98eb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d98eba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d98ebd push ecx */
  push32((uint32_t)(ECX));
  /* 10d98ebe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98ec1 push edx */
  push32((uint32_t)(EDX));
  /* 10d98ec2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d98ec5 push eax */
  push32((uint32_t)(EAX));
  /* 10d98ec6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d98ec8 call 0x10d9b050 */
  push32(0x10d98ecdu); f_10d9b050();
  /* 10d98ecd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98ed2 jne 0x10d98ed8 */
  if (!C.zf) goto L_10d98ed8;
  /* 10d98ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98ed6 jmp 0x10d98ee3 */
  goto L_10d98ee3;
L_10d98ed8:;
  /* 10d98ed8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98edb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d98ee0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_10d98ee3:;
  /* 10d98ee3 mov esp, ebp */
  ESP = (EBP);
  /* 10d98ee5 pop ebp */
  EBP = (pop32());
  /* 10d98ee6 ret  */
  ESPCHK(0x10d98e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ef0 @ 0x10d98ef0 (836 bytes, 238 insns) */
void f_10d98ef0(void) {
  FTRACE(0x10d98ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d98ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d98ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10d98ef3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d98ef6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d98ef8 call 0x10d96820 */
  push32(0x10d98efdu); f_10d96820();
  /* 10d98efd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98f03 push eax */
  push32((uint32_t)(EAX));
  /* 10d98f04 call 0x10d99240 */
  push32(0x10d98f09u); f_10d99240();
  /* 10d98f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d98f0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d98f12 cmp ecx, dword ptr [0x10dbfb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98f18 jne 0x10d98f2b */
  if (!C.zf) goto L_10d98f2b;
  /* 10d98f1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d98f1c call 0x10d968c0 */
  push32(0x10d98f21u); f_10d968c0();
  /* 10d98f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98f26 jmp 0x10d99230 */
  goto L_10d99230;
L_10d98f2b:;
  /* 10d98f2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98f2f jne 0x10d98f4c */
  if (!C.zf) goto L_10d98f4c;
  /* 10d98f31 call 0x10d99320 */
  push32(0x10d98f36u); f_10d99320();
  /* 10d98f36 call 0x10d993a0 */
  push32(0x10d98f3bu); f_10d993a0();
  /* 10d98f3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d98f3d call 0x10d968c0 */
  push32(0x10d98f42u); f_10d968c0();
  /* 10d98f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98f47 jmp 0x10d99230 */
  goto L_10d99230;
L_10d98f4c:;
  /* 10d98f4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d98f53 jmp 0x10d98f5e */
  goto L_10d98f5e;
L_10d98f55:;
  /* 10d98f55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d98f5e:;
  /* 10d98f5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98f62 jae 0x10d990af */
  if (!C.cf) goto L_10d990af;
  /* 10d98f68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98f6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d98f6e mov ecx, dword ptr [eax + 0x10dbceb8] */
  ECX = (r32((uint32_t)(EAX + 0x10dbceb8)));
  /* 10d98f74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98f77 jne 0x10d990aa */
  if (!C.zf) goto L_10d990aa;
  /* 10d98f7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d98f84 jmp 0x10d98f8f */
  goto L_10d98f8f;
L_10d98f86:;
  /* 10d98f86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98f89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98f8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d98f8f:;
  /* 10d98f8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98f96 jae 0x10d98fa4 */
  if (!C.cf) goto L_10d98fa4;
  /* 10d98f98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d98f9b mov byte ptr [eax + 0x10dbfd00], 0 */
  w8((uint32_t)(EAX + 0x10dbfd00), (0x0u));
  /* 10d98fa2 jmp 0x10d98f86 */
  goto L_10d98f86;
L_10d98fa4:;
  /* 10d98fa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d98fab jmp 0x10d98fb6 */
  goto L_10d98fb6;
L_10d98fad:;
  /* 10d98fad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d98fb0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98fb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d98fb6:;
  /* 10d98fb6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d98fba jae 0x10d99037 */
  if (!C.cf) goto L_10d99037;
  /* 10d98fbc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d98fbf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d98fc2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d98fc5 lea ecx, [edx + eax*8 + 0x10dbcec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x10dbcec8));
  /* 10d98fcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d98fcf jmp 0x10d98fda */
  goto L_10d98fda;
L_10d98fd1:;
  /* 10d98fd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98fd4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d98fd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d98fda:;
  /* 10d98fda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98fdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d98fdf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d98fe1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d98fe3 je 0x10d99032 */
  if (C.zf) goto L_10d99032;
  /* 10d98fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98fe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d98fea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d98fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d98fef je 0x10d99032 */
  if (C.zf) goto L_10d99032;
  /* 10d98ff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d98ff4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d98ff6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d98ff8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d98ffb jmp 0x10d99006 */
  goto L_10d99006;
L_10d98ffd:;
  /* 10d98ffd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99003 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d99006:;
  /* 10d99006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9900b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d9900e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99011 ja 0x10d99030 */
  if ((!C.cf&&!C.zf)) goto L_10d99030;
  /* 10d99013 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d99019 mov dl, byte ptr [eax + 0x10dbfd01] */
  DL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d9901f or dl, byte ptr [ecx + 0x10dbceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x10dbceb0))); DL = (_r); fl_logic(_r,8); }
  /* 10d99025 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99028 mov byte ptr [eax + 0x10dbfd01], dl */
  w8((uint32_t)(EAX + 0x10dbfd01), (DL));
  /* 10d9902e jmp 0x10d98ffd */
  goto L_10d98ffd;
L_10d99030:;
  /* 10d99030 jmp 0x10d98fd1 */
  goto L_10d98fd1;
L_10d99032:;
  /* 10d99032 jmp 0x10d98fad */
  goto L_10d98fad;
L_10d99037:;
  /* 10d99037 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9903a mov dword ptr [0x10dbfb64], ecx */
  w32((uint32_t)(0x10dbfb64), (ECX));
  /* 10d99040 mov dword ptr [0x10dbfbec], 1 */
  w32((uint32_t)(0x10dbfbec), (0x1u));
  /* 10d9904a mov edx, dword ptr [0x10dbfb64] */
  EDX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d99050 push edx */
  push32((uint32_t)(EDX));
  /* 10d99051 call 0x10d992a0 */
  push32(0x10d99056u); f_10d992a0();
  /* 10d99056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99059 mov dword ptr [0x10dbfe04], eax */
  w32((uint32_t)(0x10dbfe04), (EAX));
  /* 10d9905e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d99065 jmp 0x10d99070 */
  goto L_10d99070;
L_10d99067:;
  /* 10d99067 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9906a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9906d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d99070:;
  /* 10d99070 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99074 jae 0x10d99094 */
  if (!C.cf) goto L_10d99094;
  /* 10d99076 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99079 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9907c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9907f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d99082 mov cx, word ptr [ecx + eax*2 + 0x10dbcebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x10dbcebc)));
  /* 10d9908a mov word ptr [edx*2 + 0x10dbfbe0], cx */
  w16((uint32_t)(EDX*2 + 0x10dbfbe0), (CX));
  /* 10d99092 jmp 0x10d99067 */
  goto L_10d99067;
L_10d99094:;
  /* 10d99094 call 0x10d993a0 */
  push32(0x10d99099u); f_10d993a0();
  /* 10d99099 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d9909b call 0x10d968c0 */
  push32(0x10d990a0u); f_10d968c0();
  /* 10d990a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d990a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d990a5 jmp 0x10d99230 */
  goto L_10d99230;
L_10d990aa:;
  /* 10d990aa jmp 0x10d98f55 */
  goto L_10d98f55;
L_10d990af:;
  /* 10d990af lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 10d990b2 push edx */
  push32((uint32_t)(EDX));
  /* 10d990b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d990b6 push eax */
  push32((uint32_t)(EAX));
  /* 10d990b7 call dword ptr [0x10dc033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc033c))), 0x10d990bdu);
  /* 10d990bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d990c0 jne 0x10d99202 */
  if (!C.zf) goto L_10d99202;
  /* 10d990c6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d990cd jmp 0x10d990d8 */
  goto L_10d990d8;
L_10d990cf:;
  /* 10d990cf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d990d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d990d5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d990d8:;
  /* 10d990d8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d990df jae 0x10d990ed */
  if (!C.cf) goto L_10d990ed;
  /* 10d990e1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d990e4 mov byte ptr [edx + 0x10dbfd00], 0 */
  w8((uint32_t)(EDX + 0x10dbfd00), (0x0u));
  /* 10d990eb jmp 0x10d990cf */
  goto L_10d990cf;
L_10d990ed:;
  /* 10d990ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d990f0 mov dword ptr [0x10dbfb64], eax */
  w32((uint32_t)(0x10dbfb64), (EAX));
  /* 10d990f5 mov dword ptr [0x10dbfe04], 0 */
  w32((uint32_t)(0x10dbfe04), (0x0u));
  /* 10d990ff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99103 jbe 0x10d991be */
  if ((C.cf||C.zf)) goto L_10d991be;
  /* 10d99109 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 10d9910c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10d9910f jmp 0x10d9911a */
  goto L_10d9911a;
L_10d99111:;
  /* 10d99111 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d99114 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99117 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_10d9911a:;
  /* 10d9911a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9911d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9911f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d99121 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d99123 je 0x10d9916c */
  if (C.zf) goto L_10d9916c;
  /* 10d99125 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d99128 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9912a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d9912d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9912f je 0x10d9916c */
  if (C.zf) goto L_10d9916c;
  /* 10d99131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d99134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99136 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d99138 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d9913b jmp 0x10d99146 */
  goto L_10d99146;
L_10d9913d:;
  /* 10d9913d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99140 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99143 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d99146:;
  /* 10d99146 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d99149 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9914b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d9914e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99151 ja 0x10d9916a */
  if ((!C.cf&&!C.zf)) goto L_10d9916a;
  /* 10d99153 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99156 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d9915c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 10d9915f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99162 mov byte ptr [edx + 0x10dbfd01], cl */
  w8((uint32_t)(EDX + 0x10dbfd01), (CL));
  /* 10d99168 jmp 0x10d9913d */
  goto L_10d9913d;
L_10d9916a:;
  /* 10d9916a jmp 0x10d99111 */
  goto L_10d99111;
L_10d9916c:;
  /* 10d9916c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 10d99173 jmp 0x10d9917e */
  goto L_10d9917e;
L_10d99175:;
  /* 10d99175 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99178 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9917b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d9917e:;
  /* 10d9917e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99185 jae 0x10d9919e */
  if (!C.cf) goto L_10d9919e;
  /* 10d99187 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9918a mov dl, byte ptr [ecx + 0x10dbfd01] */
  DL = (r8((uint32_t)(ECX + 0x10dbfd01)));
  /* 10d99190 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d99193 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d99196 mov byte ptr [eax + 0x10dbfd01], dl */
  w8((uint32_t)(EAX + 0x10dbfd01), (DL));
  /* 10d9919c jmp 0x10d99175 */
  goto L_10d99175;
L_10d9919e:;
  /* 10d9919e mov ecx, dword ptr [0x10dbfb64] */
  ECX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d991a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d991a5 call 0x10d992a0 */
  push32(0x10d991aau); f_10d992a0();
  /* 10d991aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d991ad mov dword ptr [0x10dbfe04], eax */
  w32((uint32_t)(0x10dbfe04), (EAX));
  /* 10d991b2 mov dword ptr [0x10dbfbec], 1 */
  w32((uint32_t)(0x10dbfbec), (0x1u));
  /* 10d991bc jmp 0x10d991c8 */
  goto L_10d991c8;
L_10d991be:;
  /* 10d991be mov dword ptr [0x10dbfbec], 0 */
  w32((uint32_t)(0x10dbfbec), (0x0u));
L_10d991c8:;
  /* 10d991c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d991cf jmp 0x10d991da */
  goto L_10d991da;
L_10d991d1:;
  /* 10d991d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d991d4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d991d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d991da:;
  /* 10d991da cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d991de jae 0x10d991ef */
  if (!C.cf) goto L_10d991ef;
  /* 10d991e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d991e3 mov word ptr [eax*2 + 0x10dbfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x10dbfbe0), (0x0u));
  /* 10d991ed jmp 0x10d991d1 */
  goto L_10d991d1;
L_10d991ef:;
  /* 10d991ef call 0x10d993a0 */
  push32(0x10d991f4u); f_10d993a0();
  /* 10d991f4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d991f6 call 0x10d968c0 */
  push32(0x10d991fbu); f_10d968c0();
  /* 10d991fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d991fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99200 jmp 0x10d99230 */
  goto L_10d99230;
L_10d99202:;
  /* 10d99202 cmp dword ptr [0x10dbe680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99209 je 0x10d99223 */
  if (C.zf) goto L_10d99223;
  /* 10d9920b call 0x10d99320 */
  push32(0x10d99210u); f_10d99320();
  /* 10d99210 call 0x10d993a0 */
  push32(0x10d99215u); f_10d993a0();
  /* 10d99215 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d99217 call 0x10d968c0 */
  push32(0x10d9921cu); f_10d968c0();
  /* 10d9921c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9921f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99221 jmp 0x10d99230 */
  goto L_10d99230;
L_10d99223:;
  /* 10d99223 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d99225 call 0x10d968c0 */
  push32(0x10d9922au); f_10d968c0();
  /* 10d9922a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9922d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d99230:;
  /* 10d99230 mov esp, ebp */
  ESP = (EBP);
  /* 10d99232 pop ebp */
  EBP = (pop32());
  /* 10d99233 ret  */
  ESPCHK(0x10d98ef0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x10d99240 (89 bytes, 21 insns) */
void f_10d99240(void) {
  FTRACE(0x10d99240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99240 push ebp */
  push32((uint32_t)(EBP));
  /* 10d99241 mov ebp, esp */
  EBP = (ESP);
  /* 10d99243 mov dword ptr [0x10dbe680], 0 */
  w32((uint32_t)(0x10dbe680), (0x0u));
  /* 10d9924d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99251 jne 0x10d99265 */
  if (!C.zf) goto L_10d99265;
  /* 10d99253 mov dword ptr [0x10dbe680], 1 */
  w32((uint32_t)(0x10dbe680), (0x1u));
  /* 10d9925d call dword ptr [0x10dc0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0344))), 0x10d99263u);
  /* 10d99263 jmp 0x10d99297 */
  goto L_10d99297;
L_10d99265:;
  /* 10d99265 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99269 jne 0x10d9927d */
  if (!C.zf) goto L_10d9927d;
  /* 10d9926b mov dword ptr [0x10dbe680], 1 */
  w32((uint32_t)(0x10dbe680), (0x1u));
  /* 10d99275 call dword ptr [0x10dc0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0340))), 0x10d9927bu);
  /* 10d9927b jmp 0x10d99297 */
  goto L_10d99297;
L_10d9927d:;
  /* 10d9927d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99281 jne 0x10d99294 */
  if (!C.zf) goto L_10d99294;
  /* 10d99283 mov dword ptr [0x10dbe680], 1 */
  w32((uint32_t)(0x10dbe680), (0x1u));
  /* 10d9928d mov eax, dword ptr [0x10dbe6a0] */
  EAX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d99292 jmp 0x10d99297 */
  goto L_10d99297;
L_10d99294:;
  /* 10d99294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_10d99297:;
  /* 10d99297 pop ebp */
  EBP = (pop32());
  /* 10d99298 ret  */
  ESPCHK(0x10d99240u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x10d992a0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_10d992a0(void) {
  FTRACE(0x10d992a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d992a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d992a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d992a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d992a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d992a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d992aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d992ad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d992b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d992b6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d992ba ja 0x10d992ea */
  if ((!C.cf&&!C.zf)) goto L_10d992ea;
  /* 10d992bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d992bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d992c1 mov dl, byte ptr [eax + 0x10d99304] */
  DL = (r8((uint32_t)(EAX + 0x10d99304)));
  /* 10d992c7 jmp dword ptr [edx*4 + 0x10d992f0] */
  switch (EDX) {
    case 0: goto L_10d992ce;
    case 1: goto L_10d992d5;
    case 2: goto L_10d992dc;
    case 3: goto L_10d992e3;
    case 4: goto L_10d992ea;
    default: x86_unimpl("switch@0x10d992c7 out of table"); return;
  }
L_10d992ce:;
  /* 10d992ce mov eax, 0x411 */
  EAX = (0x411u);
  /* 10d992d3 jmp 0x10d992ec */
  goto L_10d992ec;
L_10d992d5:;
  /* 10d992d5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10d992da jmp 0x10d992ec */
  goto L_10d992ec;
L_10d992dc:;
  /* 10d992dc mov eax, 0x412 */
  EAX = (0x412u);
  /* 10d992e1 jmp 0x10d992ec */
  goto L_10d992ec;
L_10d992e3:;
  /* 10d992e3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 10d992e8 jmp 0x10d992ec */
  goto L_10d992ec;
L_10d992ea:;
  /* 10d992ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d992ec:;
  /* 10d992ec mov esp, ebp */
  ESP = (EBP);
  /* 10d992ee pop ebp */
  EBP = (pop32());
  /* 10d992ef ret  */
  ESPCHK(0x10d992a0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x10d99320 (116 bytes, 29 insns) */
void f_10d99320(void) {
  FTRACE(0x10d99320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99320 push ebp */
  push32((uint32_t)(EBP));
  /* 10d99321 mov ebp, esp */
  EBP = (ESP);
  /* 10d99323 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9932b jmp 0x10d99336 */
  goto L_10d99336;
L_10d9932d:;
  /* 10d9932d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99330 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d99336:;
  /* 10d99336 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9933d jge 0x10d9934b */
  if ((C.sf==C.of)) goto L_10d9934b;
  /* 10d9933f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99342 mov byte ptr [ecx + 0x10dbfd00], 0 */
  w8((uint32_t)(ECX + 0x10dbfd00), (0x0u));
  /* 10d99349 jmp 0x10d9932d */
  goto L_10d9932d;
L_10d9934b:;
  /* 10d9934b mov dword ptr [0x10dbfb64], 0 */
  w32((uint32_t)(0x10dbfb64), (0x0u));
  /* 10d99355 mov dword ptr [0x10dbfbec], 0 */
  w32((uint32_t)(0x10dbfbec), (0x0u));
  /* 10d9935f mov dword ptr [0x10dbfe04], 0 */
  w32((uint32_t)(0x10dbfe04), (0x0u));
  /* 10d99369 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d99370 jmp 0x10d9937b */
  goto L_10d9937b;
L_10d99372:;
  /* 10d99372 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99375 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99378 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9937b:;
  /* 10d9937b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9937f jge 0x10d99390 */
  if ((C.sf==C.of)) goto L_10d99390;
  /* 10d99381 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99384 mov word ptr [eax*2 + 0x10dbfbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x10dbfbe0), (0x0u));
  /* 10d9938e jmp 0x10d99372 */
  goto L_10d99372;
L_10d99390:;
  /* 10d99390 mov esp, ebp */
  ESP = (EBP);
  /* 10d99392 pop ebp */
  EBP = (pop32());
  /* 10d99393 ret  */
  ESPCHK(0x10d99320u, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x10d993a0 (770 bytes, 175 insns) */
void f_10d993a0(void) {
  FTRACE(0x10d993a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d993a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d993a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d993a3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d993a9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 10d993af push eax */
  push32((uint32_t)(EAX));
  /* 10d993b0 mov ecx, dword ptr [0x10dbfb64] */
  ECX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d993b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d993b7 call dword ptr [0x10dc033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc033c))), 0x10d993bdu);
  /* 10d993bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d993c0 jne 0x10d995d9 */
  if (!C.zf) goto L_10d995d9;
  /* 10d993c6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d993d0 jmp 0x10d993e1 */
  goto L_10d993e1;
L_10d993d2:;
  /* 10d993d2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d993d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d993db mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d993e1:;
  /* 10d993e1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d993eb jae 0x10d99402 */
  if (!C.cf) goto L_10d99402;
  /* 10d993ed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d993f3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 10d993f9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 10d99400 jmp 0x10d993d2 */
  goto L_10d993d2;
L_10d99402:;
  /* 10d99402 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 10d99409 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 10d9940f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d99412 jmp 0x10d9941d */
  goto L_10d9941d;
L_10d99414:;
  /* 10d99414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99417 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9941a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9941d:;
  /* 10d9941d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99420 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99422 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d99424 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99426 je 0x10d99468 */
  if (C.zf) goto L_10d99468;
  /* 10d99428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9942b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9942d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d9942f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 10d99435 jmp 0x10d99446 */
  goto L_10d99446;
L_10d99437:;
  /* 10d99437 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9943d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99440 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_10d99446:;
  /* 10d99446 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99449 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9944b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d9944e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99454 ja 0x10d99466 */
  if ((!C.cf&&!C.zf)) goto L_10d99466;
  /* 10d99456 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9945c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 10d99464 jmp 0x10d99437 */
  goto L_10d99437;
L_10d99466:;
  /* 10d99466 jmp 0x10d99414 */
  goto L_10d99414;
L_10d99468:;
  /* 10d99468 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9946a mov eax, dword ptr [0x10dbfe04] */
  EAX = (r32((uint32_t)(0x10dbfe04)));
  /* 10d9946f push eax */
  push32((uint32_t)(EAX));
  /* 10d99470 mov ecx, dword ptr [0x10dbfb64] */
  ECX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d99476 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99477 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 10d9947d push edx */
  push32((uint32_t)(EDX));
  /* 10d9947e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d99483 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d99489 push eax */
  push32((uint32_t)(EAX));
  /* 10d9948a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9948c call 0x10d9b050 */
  push32(0x10d99491u); f_10d9b050();
  /* 10d99491 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d99496 mov ecx, dword ptr [0x10dbfb64] */
  ECX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d9949c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9949d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d994a2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d994a8 push edx */
  push32((uint32_t)(EDX));
  /* 10d994a9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d994ae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 10d994b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d994b5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d994ba mov ecx, dword ptr [0x10dbfe04] */
  ECX = (r32((uint32_t)(0x10dbfe04)));
  /* 10d994c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d994c1 call 0x10d9b210 */
  push32(0x10d994c6u); f_10d9b210();
  /* 10d994c6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d994c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d994cb mov edx, dword ptr [0x10dbfb64] */
  EDX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d994d1 push edx */
  push32((uint32_t)(EDX));
  /* 10d994d2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d994d7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 10d994dd push eax */
  push32((uint32_t)(EAX));
  /* 10d994de push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d994e3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 10d994e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d994ea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10d994ef mov edx, dword ptr [0x10dbfe04] */
  EDX = (r32((uint32_t)(0x10dbfe04)));
  /* 10d994f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d994f6 call 0x10d9b210 */
  push32(0x10d994fbu); f_10d9b210();
  /* 10d994fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d994fe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d99508 jmp 0x10d99519 */
  goto L_10d99519;
L_10d9950a:;
  /* 10d9950a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99510 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99513 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d99519:;
  /* 10d99519 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99523 jae 0x10d995d4 */
  if (!C.cf) goto L_10d995d4;
  /* 10d99529 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9952f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99531 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 10d99539 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9953c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9953e je 0x10d99576 */
  if (C.zf) goto L_10d99576;
  /* 10d99540 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99546 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d9954c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 10d9954f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99555 mov byte ptr [edx + 0x10dbfd01], cl */
  w8((uint32_t)(EDX + 0x10dbfd01), (CL));
  /* 10d9955b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99561 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99567 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 10d9956e mov byte ptr [eax + 0x10dbfc00], dl */
  w8((uint32_t)(EAX + 0x10dbfc00), (DL));
  /* 10d99574 jmp 0x10d995cf */
  goto L_10d995cf;
L_10d99576:;
  /* 10d99576 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9957c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9957e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 10d99586 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d99589 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9958b je 0x10d995c2 */
  if (C.zf) goto L_10d995c2;
  /* 10d9958d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99593 mov al, byte ptr [edx + 0x10dbfd01] */
  AL = (r8((uint32_t)(EDX + 0x10dbfd01)));
  /* 10d99599 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d9959b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d995a1 mov byte ptr [ecx + 0x10dbfd01], al */
  w8((uint32_t)(ECX + 0x10dbfd01), (AL));
  /* 10d995a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d995ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d995b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 10d995ba mov byte ptr [edx + 0x10dbfc00], cl */
  w8((uint32_t)(EDX + 0x10dbfc00), (CL));
  /* 10d995c0 jmp 0x10d995cf */
  goto L_10d995cf;
L_10d995c2:;
  /* 10d995c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d995c8 mov byte ptr [edx + 0x10dbfc00], 0 */
  w8((uint32_t)(EDX + 0x10dbfc00), (0x0u));
L_10d995cf:;
  /* 10d995cf jmp 0x10d9950a */
  goto L_10d9950a;
L_10d995d4:;
  /* 10d995d4 jmp 0x10d9969e */
  goto L_10d9969e;
L_10d995d9:;
  /* 10d995d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 10d995e3 jmp 0x10d995f4 */
  goto L_10d995f4;
L_10d995e5:;
  /* 10d995e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d995eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d995ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_10d995f4:;
  /* 10d995f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d995fe jae 0x10d9969e */
  if (!C.cf) goto L_10d9969e;
  /* 10d99604 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9960b jb 0x10d99648 */
  if (C.cf) goto L_10d99648;
  /* 10d9960d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99614 ja 0x10d99648 */
  if ((!C.cf&&!C.zf)) goto L_10d99648;
  /* 10d99616 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9961c mov dl, byte ptr [ecx + 0x10dbfd01] */
  DL = (r8((uint32_t)(ECX + 0x10dbfd01)));
  /* 10d99622 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d99625 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9962b mov byte ptr [eax + 0x10dbfd01], dl */
  w8((uint32_t)(EAX + 0x10dbfd01), (DL));
  /* 10d99631 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99637 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9963a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99640 mov byte ptr [edx + 0x10dbfc00], cl */
  w8((uint32_t)(EDX + 0x10dbfc00), (CL));
  /* 10d99646 jmp 0x10d99699 */
  goto L_10d99699;
L_10d99648:;
  /* 10d99648 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9964f jb 0x10d9968c */
  if (C.cf) goto L_10d9968c;
  /* 10d99651 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99658 ja 0x10d9968c */
  if ((!C.cf&&!C.zf)) goto L_10d9968c;
  /* 10d9965a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99660 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d99666 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d99669 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9966f mov byte ptr [edx + 0x10dbfd01], cl */
  w8((uint32_t)(EDX + 0x10dbfd01), (CL));
  /* 10d99675 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d9967b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9967e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99684 mov byte ptr [ecx + 0x10dbfc00], al */
  w8((uint32_t)(ECX + 0x10dbfc00), (AL));
  /* 10d9968a jmp 0x10d99699 */
  goto L_10d99699;
L_10d9968c:;
  /* 10d9968c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 10d99692 mov byte ptr [edx + 0x10dbfc00], 0 */
  w8((uint32_t)(EDX + 0x10dbfc00), (0x0u));
L_10d99699:;
  /* 10d99699 jmp 0x10d995e5 */
  goto L_10d995e5;
L_10d9969e:;
  /* 10d9969e mov esp, ebp */
  ESP = (EBP);
  /* 10d996a0 pop ebp */
  EBP = (pop32());
  /* 10d996a1 ret  */
  ESPCHK(0x10d993a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096b0 @ 0x10d996b0 (23 bytes, 9 insns) */
void f_10d996b0(void) {
  FTRACE(0x10d996b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d996b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d996b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d996b3 cmp dword ptr [0x10dbfbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d996ba je 0x10d996c3 */
  if (C.zf) goto L_10d996c3;
  /* 10d996bc mov eax, dword ptr [0x10dbfb64] */
  EAX = (r32((uint32_t)(0x10dbfb64)));
  /* 10d996c1 jmp 0x10d996c5 */
  goto L_10d996c5;
L_10d996c3:;
  /* 10d996c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d996c5:;
  /* 10d996c5 pop ebp */
  EBP = (pop32());
  /* 10d996c6 ret  */
  ESPCHK(0x10d996b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100096d0 @ 0x10d996d0 (34 bytes, 10 insns) */
void f_10d996d0(void) {
  FTRACE(0x10d996d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d996d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d996d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d996d3 cmp dword ptr [0x10dbffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d996da jne 0x10d996f0 */
  if (!C.zf) goto L_10d996f0;
  /* 10d996dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10d996de call 0x10d98ef0 */
  push32(0x10d996e3u); f_10d98ef0();
  /* 10d996e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d996e6 mov dword ptr [0x10dbffb0], 1 */
  w32((uint32_t)(0x10dbffb0), (0x1u));
L_10d996f0:;
  /* 10d996f0 pop ebp */
  EBP = (pop32());
  /* 10d996f1 ret  */
  ESPCHK(0x10d996d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x10d99700 (664 bytes, 268 insns) [15 switch table(s)] */
void f_10d99700(void) {
  FTRACE(0x10d99700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d99701 mov ebp, esp */
  EBP = (ESP);
  /* 10d99703 push edi */
  push32((uint32_t)(EDI));
  /* 10d99704 push esi */
  push32((uint32_t)(ESI));
  /* 10d99705 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99708 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9970b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9970e mov eax, ecx */
  EAX = (ECX);
  /* 10d99710 mov edx, ecx */
  EDX = (ECX);
  /* 10d99712 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99714 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99716 jbe 0x10d99720 */
  if ((C.cf||C.zf)) goto L_10d99720;
  /* 10d99718 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9971a jb 0x10d99898 */
  if (C.cf) goto L_10d99898;
L_10d99720:;
  /* 10d99720 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d99726 jne 0x10d9973c */
  if (!C.zf) goto L_10d9973c;
  /* 10d99728 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9972b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9972e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99731 jb 0x10d9975c */
  if (C.cf) goto L_10d9975c;
  /* 10d99733 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d99735 jmp dword ptr [edx*4 + 0x10d99848] */
  switch (EDX) {
    case 0: goto L_10d99858;
    case 1: goto L_10d99860;
    case 2: goto L_10d9986c;
    case 3: goto L_10d99880;
    default: x86_unimpl("switch@0x10d99735 out of table"); return;
  }
L_10d9973c:;
  /* 10d9973c mov eax, edi */
  EAX = (EDI);
  /* 10d9973e mov edx, 3 */
  EDX = (0x3u);
  /* 10d99743 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99746 jb 0x10d99754 */
  if (C.cf) goto L_10d99754;
  /* 10d99748 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9974b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9974d jmp dword ptr [eax*4 + 0x10d99760] */
  switch (EAX) {
    case 1: goto L_10d99770;
    case 2: goto L_10d9979c;
    case 3: goto L_10d997c0;
    default: x86_unimpl("switch@0x10d9974d out of table"); return;
  }
L_10d99754:;
  /* 10d99754 jmp dword ptr [ecx*4 + 0x10d99858] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d99858)))); return;
  /* 10d9975b nop  */
  /* nop */
L_10d9975c:;
  /* 10d9975c jmp dword ptr [ecx*4 + 0x10d997dc] */
  switch (ECX) {
    case 0: goto L_10d9983f;
    case 1: goto L_10d9982c;
    case 2: goto L_10d99824;
    case 3: goto L_10d9981c;
    case 4: goto L_10d99814;
    case 5: goto L_10d9980c;
    case 6: goto L_10d99804;
    case 7: goto L_10d997fc;
    default: x86_unimpl("switch@0x10d9975c out of table"); return;
  }
  /* 10d99763 nop  */
  /* nop */
L_10d99770:;
  /* 10d99770 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99772 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d99774 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d99776 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d99779 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9977c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9977f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d99782 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d99785 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99788 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9978b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9978e jb 0x10d9975c */
  if (C.cf) goto L_10d9975c;
  /* 10d99790 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d99792 jmp dword ptr [edx*4 + 0x10d99848] */
  switch (EDX) {
    case 0: goto L_10d99858;
    case 1: goto L_10d99860;
    case 2: goto L_10d9986c;
    case 3: goto L_10d99880;
    default: x86_unimpl("switch@0x10d99792 out of table"); return;
  }
  /* 10d99799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9979c:;
  /* 10d9979c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9979e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d997a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d997a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d997a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d997a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d997ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d997ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d997b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d997b4 jb 0x10d9975c */
  if (C.cf) goto L_10d9975c;
  /* 10d997b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d997b8 jmp dword ptr [edx*4 + 0x10d99848] */
  switch (EDX) {
    case 0: goto L_10d99858;
    case 1: goto L_10d99860;
    case 2: goto L_10d9986c;
    case 3: goto L_10d99880;
    default: x86_unimpl("switch@0x10d997b8 out of table"); return;
  }
  /* 10d997bf nop  */
  /* nop */
L_10d997c0:;
  /* 10d997c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d997c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d997c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d997c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d997c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d997ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d997cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d997ce jb 0x10d9975c */
  if (C.cf) goto L_10d9975c;
  /* 10d997d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d997d2 jmp dword ptr [edx*4 + 0x10d99848] */
  switch (EDX) {
    case 0: goto L_10d99858;
    case 1: goto L_10d99860;
    case 2: goto L_10d9986c;
    case 3: goto L_10d99880;
    default: x86_unimpl("switch@0x10d997d2 out of table"); return;
  }
  /* 10d997d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d997fc:;
  /* 10d997fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d99800 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d99804:;
  /* 10d99804 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d99808 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d9980c:;
  /* 10d9980c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d99810 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d99814:;
  /* 10d99814 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d99818 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d9981c:;
  /* 10d9981c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d99820 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d99824:;
  /* 10d99824 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d99828 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d9982c:;
  /* 10d9982c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d99830 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d99834 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d9983b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9983d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d9983f:;
  /* 10d9983f jmp dword ptr [edx*4 + 0x10d99848] */
  switch (EDX) {
    case 0: goto L_10d99858;
    case 1: goto L_10d99860;
    case 2: goto L_10d9986c;
    case 3: goto L_10d99880;
    default: x86_unimpl("switch@0x10d9983f out of table"); return;
  }
  /* 10d99846 mov edi, edi */
  EDI = (EDI);
L_10d99858:;
  /* 10d99858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9985b pop esi */
  ESI = (pop32());
  /* 10d9985c pop edi */
  EDI = (pop32());
  /* 10d9985d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9985e ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d9985f nop  */
  /* nop */
L_10d99860:;
  /* 10d99860 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d99862 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d99864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99867 pop esi */
  ESI = (pop32());
  /* 10d99868 pop edi */
  EDI = (pop32());
  /* 10d99869 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9986a ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d9986b nop  */
  /* nop */
L_10d9986c:;
  /* 10d9986c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9986e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d99870 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d99873 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d99876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99879 pop esi */
  ESI = (pop32());
  /* 10d9987a pop edi */
  EDI = (pop32());
  /* 10d9987b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9987c ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d9987d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d99880:;
  /* 10d99880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d99882 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d99884 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d99887 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9988a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9988d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d99890 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99893 pop esi */
  ESI = (pop32());
  /* 10d99894 pop edi */
  EDI = (pop32());
  /* 10d99895 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d99896 ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d99897 nop  */
  /* nop */
L_10d99898:;
  /* 10d99898 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d9989c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d998a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d998a6 jne 0x10d998cc */
  if (!C.zf) goto L_10d998cc;
  /* 10d998a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d998ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d998ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d998b1 jb 0x10d998c0 */
  if (C.cf) goto L_10d998c0;
  /* 10d998b3 std  */
  C.df=1;
  /* 10d998b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d998b6 cld  */
  C.df=0;
  /* 10d998b7 jmp dword ptr [edx*4 + 0x10d999e0] */
  switch (EDX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d998b7 out of table"); return;
  }
  /* 10d998be mov edi, edi */
  EDI = (EDI);
L_10d998c0:;
  /* 10d998c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d998c2 jmp dword ptr [ecx*4 + 0x10d99990] */
  switch (ECX) {
    case 0: goto L_10d999d7;
    default: x86_unimpl("switch@0x10d998c2 out of table"); return;
  }
  /* 10d998c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d998cc:;
  /* 10d998cc mov eax, edi */
  EAX = (EDI);
  /* 10d998ce mov edx, 3 */
  EDX = (0x3u);
  /* 10d998d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d998d6 jb 0x10d998e4 */
  if (C.cf) goto L_10d998e4;
  /* 10d998d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d998db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d998dd jmp dword ptr [eax*4 + 0x10d998e8] */
  switch (EAX) {
    case 1: goto L_10d998f8;
    case 2: goto L_10d99918;
    case 3: goto L_10d99940;
    default: x86_unimpl("switch@0x10d998dd out of table"); return;
  }
L_10d998e4:;
  /* 10d998e4 jmp dword ptr [ecx*4 + 0x10d999e0] */
  switch (ECX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d998e4 out of table"); return;
  }
  /* 10d998eb nop  */
  /* nop */
L_10d998f8:;
  /* 10d998f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d998fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d998fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d99900 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d99901 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d99904 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d99905 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99908 jb 0x10d998c0 */
  if (C.cf) goto L_10d998c0;
  /* 10d9990a std  */
  C.df=1;
  /* 10d9990b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9990d cld  */
  C.df=0;
  /* 10d9990e jmp dword ptr [edx*4 + 0x10d999e0] */
  switch (EDX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d9990e out of table"); return;
  }
  /* 10d99915 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d99918:;
  /* 10d99918 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9991b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9991d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d99920 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d99923 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d99926 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d99929 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9992c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9992f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99932 jb 0x10d998c0 */
  if (C.cf) goto L_10d998c0;
  /* 10d99934 std  */
  C.df=1;
  /* 10d99935 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d99937 cld  */
  C.df=0;
  /* 10d99938 jmp dword ptr [edx*4 + 0x10d999e0] */
  switch (EDX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d99938 out of table"); return;
  }
  /* 10d9993f nop  */
  /* nop */
L_10d99940:;
  /* 10d99940 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d99943 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99945 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d99948 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9994b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9994e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d99951 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d99954 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d99957 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9995a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9995d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99960 jb 0x10d998c0 */
  if (C.cf) goto L_10d998c0;
  /* 10d99966 std  */
  C.df=1;
  /* 10d99967 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d99969 cld  */
  C.df=0;
  /* 10d9996a jmp dword ptr [edx*4 + 0x10d999e0] */
  switch (EDX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d9996a out of table"); return;
  }
  /* 10d99971 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d99974 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 10d99975 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d99976 fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d99978 pushfd  */
  x86_unimpl("pushfd @ 0x10d99978");
  /* 10d99979 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9997a fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9997c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10d9997d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9997e fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d99980 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10d99981 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d99982 fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d99984 mov ah, 0x99 */
  AH = (0x99u);
  /* 10d99986 fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d99988 mov esp, 0xc410d999 */
  ESP = (0xc410d999u);
  /* 10d9998d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9998e fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d99994 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d99998 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d9999c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d999a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d999a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d999a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d999ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d999b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d999b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d999b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d999bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d999c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d999c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d999c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d999cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d999d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d999d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d999d7:;
  /* 10d999d7 jmp dword ptr [edx*4 + 0x10d999e0] */
  switch (EDX) {
    case 0: goto L_10d999f0;
    case 1: goto L_10d999f8;
    case 2: goto L_10d99a08;
    case 3: goto L_10d99a1c;
    default: x86_unimpl("switch@0x10d999d7 out of table"); return;
  }
  /* 10d999de mov edi, edi */
  EDI = (EDI);
L_10d999f0:;
  /* 10d999f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d999f3 pop esi */
  ESI = (pop32());
  /* 10d999f4 pop edi */
  EDI = (pop32());
  /* 10d999f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d999f6 ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d999f7 nop  */
  /* nop */
L_10d999f8:;
  /* 10d999f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d999fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d999fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99a01 pop esi */
  ESI = (pop32());
  /* 10d99a02 pop edi */
  EDI = (pop32());
  /* 10d99a03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d99a04 ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d99a05 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d99a08:;
  /* 10d99a08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d99a0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d99a0e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d99a11 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d99a14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99a17 pop esi */
  ESI = (pop32());
  /* 10d99a18 pop edi */
  EDI = (pop32());
  /* 10d99a19 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d99a1a ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
  /* 10d99a1b nop  */
  /* nop */
L_10d99a1c:;
  /* 10d99a1c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d99a1f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d99a22 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d99a25 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d99a28 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d99a2b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d99a2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99a31 pop esi */
  ESI = (pop32());
  /* 10d99a32 pop edi */
  EDI = (pop32());
  /* 10d99a33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d99a34 ret  */
  ESPCHK(0x10d99700u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x10d99a40 (104 bytes, 43 insns) */
void f_10d99a40(void) {
  FTRACE(0x10d99a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99a40 push ebx */
  push32((uint32_t)(EBX));
  /* 10d99a41 push esi */
  push32((uint32_t)(ESI));
  /* 10d99a42 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 10d99a46 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99a48 jne 0x10d99a62 */
  if (!C.zf) goto L_10d99a62;
  /* 10d99a4a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d99a4e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d99a52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99a54 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99a56 mov ebx, eax */
  EBX = (EAX);
  /* 10d99a58 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d99a5c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99a5e mov edx, ebx */
  EDX = (EBX);
  /* 10d99a60 jmp 0x10d99aa3 */
  goto L_10d99aa3;
L_10d99a62:;
  /* 10d99a62 mov ecx, eax */
  ECX = (EAX);
  /* 10d99a64 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d99a68 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d99a6c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_10d99a70:;
  /* 10d99a70 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d99a72 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d99a74 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d99a76 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d99a78 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d99a7a jne 0x10d99a70 */
  if (!C.zf) goto L_10d99a70;
  /* 10d99a7c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99a7e mov esi, eax */
  ESI = (EAX);
  /* 10d99a80 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d99a84 mov ecx, eax */
  ECX = (EAX);
  /* 10d99a86 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d99a8a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d99a8c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99a8e jb 0x10d99a9e */
  if (C.cf) goto L_10d99a9e;
  /* 10d99a90 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99a94 ja 0x10d99a9e */
  if ((!C.cf&&!C.zf)) goto L_10d99a9e;
  /* 10d99a96 jb 0x10d99a9f */
  if (C.cf) goto L_10d99a9f;
  /* 10d99a98 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99a9c jbe 0x10d99a9f */
  if ((C.cf||C.zf)) goto L_10d99a9f;
L_10d99a9e:;
  /* 10d99a9e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_10d99a9f:;
  /* 10d99a9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99aa1 mov eax, esi */
  EAX = (ESI);
L_10d99aa3:;
  /* 10d99aa3 pop esi */
  ESI = (pop32());
  /* 10d99aa4 pop ebx */
  EBX = (pop32());
  /* 10d99aa5 ret 0x10 */
  ESPCHK(0x10d99a40u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x10d99ab0 (117 bytes, 44 insns) */
void f_10d99ab0(void) {
  FTRACE(0x10d99ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99ab0 push ebx */
  push32((uint32_t)(EBX));
  /* 10d99ab1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 10d99ab5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99ab7 jne 0x10d99ad1 */
  if (!C.zf) goto L_10d99ad1;
  /* 10d99ab9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d99abd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d99ac1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99ac3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d99ac9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99acb mov eax, edx */
  EAX = (EDX);
  /* 10d99acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d99acf jmp 0x10d99b21 */
  goto L_10d99b21;
L_10d99ad1:;
  /* 10d99ad1 mov ecx, eax */
  ECX = (EAX);
  /* 10d99ad3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d99ad7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d99adb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_10d99adf:;
  /* 10d99adf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d99ae1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 10d99ae3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d99ae5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 10d99ae7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d99ae9 jne 0x10d99adf */
  if (!C.zf) goto L_10d99adf;
  /* 10d99aeb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d99aed mov ecx, eax */
  ECX = (EAX);
  /* 10d99aef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d99af3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 10d99af4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10d99af8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99afa jb 0x10d99b0a */
  if (C.cf) goto L_10d99b0a;
  /* 10d99afc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99b00 ja 0x10d99b0a */
  if ((!C.cf&&!C.zf)) goto L_10d99b0a;
  /* 10d99b02 jb 0x10d99b12 */
  if (C.cf) goto L_10d99b12;
  /* 10d99b04 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99b08 jbe 0x10d99b12 */
  if ((C.cf||C.zf)) goto L_10d99b12;
L_10d99b0a:;
  /* 10d99b0a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99b0e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d99b12:;
  /* 10d99b12 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99b16 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99b1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d99b1c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d99b1e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d99b21:;
  /* 10d99b21 pop ebx */
  EBX = (pop32());
  /* 10d99b22 ret 0x10 */
  ESPCHK(0x10d99ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009b30 @ 0x10d99b30 (628 bytes, 214 insns) */
void f_10d99b30(void) {
  FTRACE(0x10d99b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d99b31 mov ebp, esp */
  EBP = (ESP);
  /* 10d99b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10d99b37 push esi */
  push32((uint32_t)(ESI));
  /* 10d99b38 push edi */
  push32((uint32_t)(EDI));
L_10d99b39:;
  /* 10d99b39 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99b3d jne 0x10d99b5d */
  if (!C.zf) goto L_10d99b5d;
  /* 10d99b3f push 0x10db9f00 */
  push32((uint32_t)(0x10db9f00u));
  /* 10d99b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d99b46 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 10d99b48 push 0x10db9ef4 */
  push32((uint32_t)(0x10db9ef4u));
  /* 10d99b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d99b4f call 0x10d91ee0 */
  push32(0x10d99b54u); f_10d91ee0();
  /* 10d99b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99b5a jne 0x10d99b5d */
  if (!C.zf) goto L_10d99b5d;
  /* 10d99b5c int3  */
  x86_unimpl("int3 @ 0x10d99b5c");
L_10d99b5d:;
  /* 10d99b5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99b61 jne 0x10d99b39 */
  if (!C.zf) goto L_10d99b39;
  /* 10d99b63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99b66 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d99b69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99b6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d99b6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d99b72 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99b75 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99b78 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 10d99b7e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99b80 je 0x10d99b8f */
  if (C.zf) goto L_10d99b8f;
  /* 10d99b82 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99b85 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d99b88 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d99b8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d99b8d je 0x10d99ba5 */
  if (C.zf) goto L_10d99ba5;
L_10d99b8f:;
  /* 10d99b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99b92 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d99b95 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d99b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99b9a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 10d99b9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d99ba0 jmp 0x10d99d9d */
  goto L_10d99d9d;
L_10d99ba5:;
  /* 10d99ba5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99ba8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d99bab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d99bae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99bb0 je 0x10d99bfc */
  if (C.zf) goto L_10d99bfc;
  /* 10d99bb2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bb5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d99bbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bbf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d99bc2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d99bc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99bc7 je 0x10d99be5 */
  if (C.zf) goto L_10d99be5;
  /* 10d99bc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bcc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bcf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d99bd2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d99bd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bd7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99bda and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 10d99bdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99be0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d99be3 jmp 0x10d99bfc */
  goto L_10d99bfc;
L_10d99be5:;
  /* 10d99be5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99be8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99beb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d99bee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bf1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d99bf4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d99bf7 jmp 0x10d99d9d */
  goto L_10d99d9d;
L_10d99bfc:;
  /* 10d99bfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99bff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99c02 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d99c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c08 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d99c0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c0e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99c11 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 10d99c14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c17 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d99c1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c1d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d99c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d99c2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99c2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d99c31 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c34 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d99c37 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 10d99c3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d99c3f jne 0x10d99c6f */
  if (!C.zf) goto L_10d99c6f;
  /* 10d99c41 cmp dword ptr [ebp - 8], 0x10dbd140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10dbd140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99c48 je 0x10d99c53 */
  if (C.zf) goto L_10d99c53;
  /* 10d99c4a cmp dword ptr [ebp - 8], 0x10dbd160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x10dbd160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99c51 jne 0x10d99c63 */
  if (!C.zf) goto L_10d99c63;
L_10d99c53:;
  /* 10d99c53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99c56 push edx */
  push32((uint32_t)(EDX));
  /* 10d99c57 call 0x10d9baa0 */
  push32(0x10d99c5cu); f_10d9baa0();
  /* 10d99c5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99c5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99c61 jne 0x10d99c6f */
  if (!C.zf) goto L_10d99c6f;
L_10d99c63:;
  /* 10d99c63 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c66 push eax */
  push32((uint32_t)(EAX));
  /* 10d99c67 call 0x10d9b9d0 */
  push32(0x10d99c6cu); f_10d9b9d0();
  /* 10d99c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d99c6f:;
  /* 10d99c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c72 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d99c75 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 10d99c7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99c7d je 0x10d99d5b */
  if (C.zf) goto L_10d99d5b;
L_10d99c83:;
  /* 10d99c83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99c89 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10d99c8b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99c8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99c90 jge 0x10d99cb3 */
  if ((C.sf==C.of)) goto L_10d99cb3;
  /* 10d99c92 push 0x10db9eb4 */
  push32((uint32_t)(0x10db9eb4u));
  /* 10d99c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d99c99 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 10d99c9e push 0x10db9ef4 */
  push32((uint32_t)(0x10db9ef4u));
  /* 10d99ca3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d99ca5 call 0x10d91ee0 */
  push32(0x10d99caau); f_10d91ee0();
  /* 10d99caa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99cb0 jne 0x10d99cb3 */
  if (!C.zf) goto L_10d99cb3;
  /* 10d99cb2 int3  */
  x86_unimpl("int3 @ 0x10d99cb2");
L_10d99cb3:;
  /* 10d99cb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99cb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99cb7 jne 0x10d99c83 */
  if (!C.zf) goto L_10d99c83;
  /* 10d99cb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cbc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cbf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d99cc1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99cc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d99cc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d99ccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99cd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cd3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d99cd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cd8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d99cdb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99cde mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99ce1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d99ce4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99ce8 jle 0x10d99d06 */
  if ((C.zf||C.sf!=C.of)) goto L_10d99d06;
  /* 10d99cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99ced push ecx */
  push32((uint32_t)(ECX));
  /* 10d99cee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99cf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d99cf4 push eax */
  push32((uint32_t)(EAX));
  /* 10d99cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99cf9 call 0x10d9b6c0 */
  push32(0x10d99cfeu); f_10d9b6c0();
  /* 10d99cfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99d01 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d99d04 jmp 0x10d99d4e */
  goto L_10d99d4e;
L_10d99d06:;
  /* 10d99d06 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99d0a je 0x10d99d29 */
  if (C.zf) goto L_10d99d29;
  /* 10d99d0c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99d0f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d99d12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99d15 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d99d18 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d99d1b mov ecx, dword ptr [edx*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d99d22 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99d24 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d99d27 jmp 0x10d99d30 */
  goto L_10d99d30;
L_10d99d29:;
  /* 10d99d29 mov dword ptr [ebp - 0x14], 0x10dbca60 */
  w32((uint32_t)(EBP + -0x14), (0x10dbca60u));
L_10d99d30:;
  /* 10d99d30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d99d33 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 10d99d37 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d99d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99d3c je 0x10d99d4e */
  if (C.zf) goto L_10d99d4e;
  /* 10d99d3e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d99d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d99d42 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99d46 call 0x10d9b570 */
  push32(0x10d99d4bu); f_10d9b570();
  /* 10d99d4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d99d4e:;
  /* 10d99d4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99d51 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d99d54 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d99d57 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d99d59 jmp 0x10d99d79 */
  goto L_10d99d79;
L_10d99d5b:;
  /* 10d99d5b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d99d62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99d65 push edx */
  push32((uint32_t)(EDX));
  /* 10d99d66 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10d99d69 push eax */
  push32((uint32_t)(EAX));
  /* 10d99d6a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d99d6d push ecx */
  push32((uint32_t)(ECX));
  /* 10d99d6e call 0x10d9b6c0 */
  push32(0x10d99d73u); f_10d9b6c0();
  /* 10d99d73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99d76 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d99d79:;
  /* 10d99d79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d99d7c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99d7f je 0x10d99d95 */
  if (C.zf) goto L_10d99d95;
  /* 10d99d81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99d84 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d99d87 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d99d8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99d8d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d99d90 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d99d93 jmp 0x10d99d9d */
  goto L_10d99d9d;
L_10d99d95:;
  /* 10d99d95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99d98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_10d99d9d:;
  /* 10d99d9d pop edi */
  EDI = (pop32());
  /* 10d99d9e pop esi */
  ESI = (pop32());
  /* 10d99d9f pop ebx */
  EBX = (pop32());
  /* 10d99da0 mov esp, ebp */
  ESP = (EBP);
  /* 10d99da2 pop ebp */
  EBP = (pop32());
  /* 10d99da3 ret  */
  ESPCHK(0x10d99b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009db0 @ 0x10d99db0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_10d99db0(void) {
  FTRACE(0x10d99db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d99db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d99db1 mov ebp, esp */
  EBP = (ESP);
  /* 10d99db3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99db9 push ebx */
  push32((uint32_t)(EBX));
  /* 10d99dba push esi */
  push32((uint32_t)(ESI));
  /* 10d99dbb push edi */
  push32((uint32_t)(EDI));
  /* 10d99dbc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d99dc3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 10d99dcd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d99dd4:;
  /* 10d99dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99dd7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d99dd9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 10d99ddc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99de0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99de3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99de6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d99de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99deb je 0x10d9a9c7 */
  if (C.zf) goto L_10d9a9c7;
  /* 10d99df1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99df8 jl 0x10d9a9c7 */
  if ((C.sf!=C.of)) goto L_10d9a9c7;
  /* 10d99dfe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99e02 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99e05 jl 0x10d99e26 */
  if ((C.sf!=C.of)) goto L_10d99e26;
  /* 10d99e07 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99e0b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99e0e jg 0x10d99e26 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d99e26;
  /* 10d99e10 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99e14 movsx ecx, byte ptr [eax + 0x10db9eec] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x10db9eec))));
  /* 10d99e1b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 10d99e1e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 10d99e24 jmp 0x10d99e30 */
  goto L_10d99e30;
L_10d99e26:;
  /* 10d99e26 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_10d99e30:;
  /* 10d99e30 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 10d99e36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d99e39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d99e3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d99e3f movsx edx, byte ptr [ecx + eax*8 + 0x10db9f0c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x10db9f0c))));
  /* 10d99e47 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10d99e4a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d99e4d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d99e50 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 10d99e56 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99e5d ja 0x10d9a9c2 */
  if ((!C.cf&&!C.zf)) goto L_10d9a9c2;
  /* 10d99e63 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 10d99e69 jmp dword ptr [ecx*4 + 0x10d9a9d4] */
  switch (ECX) {
    case 0: goto L_10d99e70;
    case 1: goto L_10d99f0a;
    case 2: goto L_10d99f4c;
    case 3: goto L_10d99fbb;
    case 4: goto L_10d9a013;
    case 5: goto L_10d9a022;
    case 6: goto L_10d9a06e;
    case 7: goto L_10d9a101;
    case 8: goto L_10d99f98;
    case 9: goto L_10d99fa3;
    case 10: goto L_10d99f8e;
    case 11: goto L_10d99f83;
    case 12: goto L_10d99fae;
    case 13: goto L_10d99fb6;
    default: x86_unimpl("switch@0x10d99e69 out of table"); return;
  }
L_10d99e70:;
  /* 10d99e70 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d99e77 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d99e7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d99e80 mov eax, dword ptr [0x10dbcc98] */
  EAX = (r32((uint32_t)(0x10dbcc98)));
  /* 10d99e85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d99e87 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d99e8b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d99e91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d99e93 je 0x10d99eed */
  if (C.zf) goto L_10d99eed;
  /* 10d99e95 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 10d99e9b push edx */
  push32((uint32_t)(EDX));
  /* 10d99e9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99e9f push eax */
  push32((uint32_t)(EAX));
  /* 10d99ea0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99ea5 call 0x10d9aae0 */
  push32(0x10d99eaau); f_10d9aae0();
  /* 10d99eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99ead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99eb0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d99eb2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 10d99eb5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d99eb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99ebb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d99ebe:;
  /* 10d99ebe movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99ec2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d99ec4 jne 0x10d99ee7 */
  if (!C.zf) goto L_10d99ee7;
  /* 10d99ec6 push 0x10db9f8c */
  push32((uint32_t)(0x10db9f8cu));
  /* 10d99ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d99ecd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 10d99ed2 push 0x10db9f80 */
  push32((uint32_t)(0x10db9f80u));
  /* 10d99ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d99ed9 call 0x10d91ee0 */
  push32(0x10d99edeu); f_10d91ee0();
  /* 10d99ede add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99ee1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99ee4 jne 0x10d99ee7 */
  if (!C.zf) goto L_10d99ee7;
  /* 10d99ee6 int3  */
  x86_unimpl("int3 @ 0x10d99ee6");
L_10d99ee7:;
  /* 10d99ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d99eeb jne 0x10d99ebe */
  if (!C.zf) goto L_10d99ebe;
L_10d99eed:;
  /* 10d99eed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d99ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d99ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d99ef7 push edx */
  push32((uint32_t)(EDX));
  /* 10d99ef8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99efc push eax */
  push32((uint32_t)(EAX));
  /* 10d99efd call 0x10d9aae0 */
  push32(0x10d99f02u); f_10d9aae0();
  /* 10d99f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99f05 jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d99f0a:;
  /* 10d99f0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d99f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d99f14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 10d99f1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 10d99f20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 10d99f26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d99f2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d99f2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d99f36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 10d99f40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d99f47 jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d99f4c:;
  /* 10d99f4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99f50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 10d99f56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d99f5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d99f5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 10d99f65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99f6c ja 0x10d99fb6 */
  if ((!C.cf&&!C.zf)) goto L_10d99fb6;
  /* 10d99f6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 10d99f74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d99f76 mov al, byte ptr [ecx + 0x10d9aa0c] */
  AL = (r8((uint32_t)(ECX + 0x10d9aa0c)));
  /* 10d99f7c jmp dword ptr [eax*4 + 0x10d9a9f4] */
  switch (EAX) {
    case 0: goto L_10d99f98;
    case 1: goto L_10d99fa3;
    case 2: goto L_10d99f8e;
    case 3: goto L_10d99f83;
    case 4: goto L_10d99fae;
    case 5: goto L_10d99fb6;
    default: x86_unimpl("switch@0x10d99f7c out of table"); return;
  }
L_10d99f83:;
  /* 10d99f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99f86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d99f89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d99f8c jmp 0x10d99fb6 */
  goto L_10d99fb6;
L_10d99f8e:;
  /* 10d99f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99f91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d99f93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d99f96 jmp 0x10d99fb6 */
  goto L_10d99fb6;
L_10d99f98:;
  /* 10d99f98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99f9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d99f9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d99fa1 jmp 0x10d99fb6 */
  goto L_10d99fb6;
L_10d99fa3:;
  /* 10d99fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99fa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 10d99fa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d99fac jmp 0x10d99fb6 */
  goto L_10d99fb6;
L_10d99fae:;
  /* 10d99fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99fb1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 10d99fb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d99fb6:;
  /* 10d99fb6 jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d99fbb:;
  /* 10d99fbb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d99fbf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99fc2 jne 0x10d99ff7 */
  if (!C.zf) goto L_10d99ff7;
  /* 10d99fc4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d99fc7 push edx */
  push32((uint32_t)(EDX));
  /* 10d99fc8 call 0x10d9abf0 */
  push32(0x10d99fcdu); f_10d9abf0();
  /* 10d99fcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d99fd0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 10d99fd6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d99fdd jge 0x10d99ff5 */
  if ((C.sf==C.of)) goto L_10d99ff5;
  /* 10d99fdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d99fe2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d99fe4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d99fe7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d99fed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d99fef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d99ff5:;
  /* 10d99ff5 jmp 0x10d9a00e */
  goto L_10d9a00e;
L_10d99ff7:;
  /* 10d99ff7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d99ffd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9a000 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a004 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 10d9a008 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_10d9a00e:;
  /* 10d9a00e jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d9a013:;
  /* 10d9a013 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 10d9a01d jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d9a022:;
  /* 10d9a022 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a026 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a029 jne 0x10d9a052 */
  if (!C.zf) goto L_10d9a052;
  /* 10d9a02b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d9a02e push eax */
  push32((uint32_t)(EAX));
  /* 10d9a02f call 0x10d9abf0 */
  push32(0x10d9a034u); f_10d9abf0();
  /* 10d9a034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a037 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d9a03d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a044 jge 0x10d9a050 */
  if ((C.sf==C.of)) goto L_10d9a050;
  /* 10d9a046 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_10d9a050:;
  /* 10d9a050 jmp 0x10d9a069 */
  goto L_10d9a069;
L_10d9a052:;
  /* 10d9a052 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d9a058 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9a05b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a05f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d9a063 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_10d9a069:;
  /* 10d9a069 jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d9a06e:;
  /* 10d9a06e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a072 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 10d9a078 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d9a07e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a081 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 10d9a087 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a08e ja 0x10d9a0fc */
  if ((!C.cf&&!C.zf)) goto L_10d9a0fc;
  /* 10d9a090 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 10d9a096 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a098 mov al, byte ptr [ecx + 0x10d9aa31] */
  AL = (r8((uint32_t)(ECX + 0x10d9aa31)));
  /* 10d9a09e jmp dword ptr [eax*4 + 0x10d9aa1d] */
  switch (EAX) {
    case 0: goto L_10d9a0b0;
    case 1: goto L_10d9a0e9;
    case 2: goto L_10d9a0a5;
    case 3: goto L_10d9a0f3;
    case 4: goto L_10d9a0fc;
    default: x86_unimpl("switch@0x10d9a09e out of table"); return;
  }
L_10d9a0a5:;
  /* 10d9a0a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a0a8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a0ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9a0ae jmp 0x10d9a0fc */
  goto L_10d9a0fc;
L_10d9a0b0:;
  /* 10d9a0b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9a0b3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9a0b6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a0b9 jne 0x10d9a0db */
  if (!C.zf) goto L_10d9a0db;
  /* 10d9a0bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9a0be movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d9a0c2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a0c5 jne 0x10d9a0db */
  if (!C.zf) goto L_10d9a0db;
  /* 10d9a0c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9a0ca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a0cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d9a0d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a0d3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a0d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9a0d9 jmp 0x10d9a0e7 */
  goto L_10d9a0e7;
L_10d9a0db:;
  /* 10d9a0db mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d9a0e2 jmp 0x10d99e70 */
  goto L_10d99e70;
L_10d9a0e7:;
  /* 10d9a0e7 jmp 0x10d9a0fc */
  goto L_10d9a0fc;
L_10d9a0e9:;
  /* 10d9a0e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a0ec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 10d9a0ee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9a0f1 jmp 0x10d9a0fc */
  goto L_10d9a0fc;
L_10d9a0f3:;
  /* 10d9a0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a0f6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a0f9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9a0fc:;
  /* 10d9a0fc jmp 0x10d9a9c2 */
  goto L_10d9a9c2;
L_10d9a101:;
  /* 10d9a101 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a105 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 10d9a10b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d9a111 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a114 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 10d9a11a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a121 ja 0x10d9a7e7 */
  if ((!C.cf&&!C.zf)) goto L_10d9a7e7;
  /* 10d9a127 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 10d9a12d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a12f mov cl, byte ptr [edx + 0x10d9aa9c] */
  CL = (r8((uint32_t)(EDX + 0x10d9aa9c)));
  /* 10d9a135 jmp dword ptr [ecx*4 + 0x10d9aa60] */
  switch (ECX) {
    case 0: goto L_10d9a13c;
    case 1: goto L_10d9a3d0;
    case 2: goto L_10d9a260;
    case 3: goto L_10d9a509;
    case 4: goto L_10d9a1cb;
    case 5: goto L_10d9a151;
    case 6: goto L_10d9a4db;
    case 7: goto L_10d9a3e0;
    case 8: goto L_10d9a385;
    case 9: goto L_10d9a555;
    case 10: goto L_10d9a4ff;
    case 11: goto L_10d9a276;
    case 12: goto L_10d9a4f3;
    case 13: goto L_10d9a515;
    case 14: goto L_10d9a7e7;
    default: x86_unimpl("switch@0x10d9a135 out of table"); return;
  }
L_10d9a13c:;
  /* 10d9a13c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a13f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a146 jne 0x10d9a151 */
  if (!C.zf) goto L_10d9a151;
  /* 10d9a148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a14b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a14e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9a151:;
  /* 10d9a151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a154 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a15a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a15c je 0x10d9a197 */
  if (C.zf) goto L_10d9a197;
  /* 10d9a15e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d9a161 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a162 call 0x10d9ac30 */
  push32(0x10d9a167u); f_10d9ac30();
  /* 10d9a167 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a16a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 10d9a16e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 10d9a172 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a173 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d9a179 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a17a call 0x10d9bd10 */
  push32(0x10d9a17fu); f_10d9bd10();
  /* 10d9a17f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a182 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d9a185 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a189 jge 0x10d9a195 */
  if ((C.sf==C.of)) goto L_10d9a195;
  /* 10d9a18b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_10d9a195:;
  /* 10d9a195 jmp 0x10d9a1bd */
  goto L_10d9a1bd;
L_10d9a197:;
  /* 10d9a197 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d9a19a push eax */
  push32((uint32_t)(EAX));
  /* 10d9a19b call 0x10d9abf0 */
  push32(0x10d9a1a0u); f_10d9abf0();
  /* 10d9a1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a1a3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 10d9a1aa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 10d9a1b0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 10d9a1b6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_10d9a1bd:;
  /* 10d9a1bd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 10d9a1c3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d9a1c6 jmp 0x10d9a7e7 */
  goto L_10d9a7e7;
L_10d9a1cb:;
  /* 10d9a1cb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d9a1ce push eax */
  push32((uint32_t)(EAX));
  /* 10d9a1cf call 0x10d9abf0 */
  push32(0x10d9a1d4u); f_10d9abf0();
  /* 10d9a1d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a1d7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 10d9a1dd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a1e4 je 0x10d9a1f2 */
  if (C.zf) goto L_10d9a1f2;
  /* 10d9a1e6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d9a1ec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a1f0 jne 0x10d9a20c */
  if (!C.zf) goto L_10d9a20c;
L_10d9a1f2:;
  /* 10d9a1f2 mov edx, dword ptr [0x10dbcfb0] */
  EDX = (r32((uint32_t)(0x10dbcfb0)));
  /* 10d9a1f8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d9a1fb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a1fe push eax */
  push32((uint32_t)(EAX));
  /* 10d9a1ff call 0x10d95c50 */
  push32(0x10d9a204u); f_10d95c50();
  /* 10d9a204 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a207 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d9a20a jmp 0x10d9a25b */
  goto L_10d9a25b;
L_10d9a20c:;
  /* 10d9a20c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a20f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a217 je 0x10d9a23c */
  if (C.zf) goto L_10d9a23c;
  /* 10d9a219 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d9a21f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d9a222 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9a225 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d9a22b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 10d9a22e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d9a230 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d9a233 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d9a23a jmp 0x10d9a25b */
  goto L_10d9a25b;
L_10d9a23c:;
  /* 10d9a23c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 10d9a243 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d9a249 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9a24c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d9a24f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 10d9a255 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 10d9a258 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d9a25b:;
  /* 10d9a25b jmp 0x10d9a7e7 */
  goto L_10d9a7e7;
L_10d9a260:;
  /* 10d9a260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a263 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a269 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a26b jne 0x10d9a276 */
  if (!C.zf) goto L_10d9a276;
  /* 10d9a26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a270 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a273 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9a276:;
  /* 10d9a276 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a27d jne 0x10d9a28b */
  if (!C.zf) goto L_10d9a28b;
  /* 10d9a27f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 10d9a289 jmp 0x10d9a297 */
  goto L_10d9a297;
L_10d9a28b:;
  /* 10d9a28b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d9a291 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_10d9a297:;
  /* 10d9a297 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 10d9a29d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d9a2a3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d9a2a6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a2a7 call 0x10d9abf0 */
  push32(0x10d9a2acu); f_10d9abf0();
  /* 10d9a2ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a2af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9a2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a2b5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a2bc je 0x10d9a326 */
  if (C.zf) goto L_10d9a326;
  /* 10d9a2be cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a2c2 jne 0x10d9a2cd */
  if (!C.zf) goto L_10d9a2cd;
  /* 10d9a2c4 mov ecx, dword ptr [0x10dbcfb4] */
  ECX = (r32((uint32_t)(0x10dbcfb4)));
  /* 10d9a2ca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d9a2cd:;
  /* 10d9a2cd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 10d9a2d4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a2d7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_10d9a2dd:;
  /* 10d9a2dd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d9a2e3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d9a2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a2ec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 10d9a2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a2f4 je 0x10d9a316 */
  if (C.zf) goto L_10d9a316;
  /* 10d9a2f6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d9a2fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a2fe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d9a301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a303 je 0x10d9a316 */
  if (C.zf) goto L_10d9a316;
  /* 10d9a305 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d9a30b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a30e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 10d9a314 jmp 0x10d9a2dd */
  goto L_10d9a2dd;
L_10d9a316:;
  /* 10d9a316 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 10d9a31c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a31f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d9a321 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10d9a324 jmp 0x10d9a380 */
  goto L_10d9a380;
L_10d9a326:;
  /* 10d9a326 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a32a jne 0x10d9a334 */
  if (!C.zf) goto L_10d9a334;
  /* 10d9a32c mov eax, dword ptr [0x10dbcfb0] */
  EAX = (r32((uint32_t)(0x10dbcfb0)));
  /* 10d9a331 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10d9a334:;
  /* 10d9a334 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a337 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_10d9a33d:;
  /* 10d9a33d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d9a343 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 10d9a349 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a34c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 10d9a352 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a354 je 0x10d9a374 */
  if (C.zf) goto L_10d9a374;
  /* 10d9a356 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d9a35c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9a35f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a361 je 0x10d9a374 */
  if (C.zf) goto L_10d9a374;
  /* 10d9a363 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d9a369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a36c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 10d9a372 jmp 0x10d9a33d */
  goto L_10d9a33d;
L_10d9a374:;
  /* 10d9a374 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 10d9a37a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a37d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_10d9a380:;
  /* 10d9a380 jmp 0x10d9a7e7 */
  goto L_10d9a7e7;
L_10d9a385:;
  /* 10d9a385 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d9a388 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a389 call 0x10d9abf0 */
  push32(0x10d9a38eu); f_10d9abf0();
  /* 10d9a38e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a391 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 10d9a397 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a39a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a39f je 0x10d9a3b3 */
  if (C.zf) goto L_10d9a3b3;
  /* 10d9a3a1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d9a3a7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 10d9a3ae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 10d9a3b1 jmp 0x10d9a3c1 */
  goto L_10d9a3c1;
L_10d9a3b3:;
  /* 10d9a3b3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 10d9a3b9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d9a3bf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_10d9a3c1:;
  /* 10d9a3c1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 10d9a3cb jmp 0x10d9a7e7 */
  goto L_10d9a7e7;
L_10d9a3d0:;
  /* 10d9a3d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d9a3d7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 10d9a3da add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d9a3dd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_10d9a3e0:;
  /* 10d9a3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a3e3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d9a3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9a3e8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 10d9a3ee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d9a3f1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a3f8 jge 0x10d9a406 */
  if ((C.sf==C.of)) goto L_10d9a406;
  /* 10d9a3fa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 10d9a404 jmp 0x10d9a422 */
  goto L_10d9a422;
L_10d9a406:;
  /* 10d9a406 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a40d jne 0x10d9a422 */
  if (!C.zf) goto L_10d9a422;
  /* 10d9a40f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a413 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a416 jne 0x10d9a422 */
  if (!C.zf) goto L_10d9a422;
  /* 10d9a418 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_10d9a422:;
  /* 10d9a422 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9a425 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a428 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 10d9a42b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9a42e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a431 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9a433 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9a436 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 10d9a43c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 10d9a442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9a445 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a446 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d9a44c push edx */
  push32((uint32_t)(EDX));
  /* 10d9a44d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a451 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a452 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a455 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a456 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 10d9a45c push edx */
  push32((uint32_t)(EDX));
  /* 10d9a45d call dword ptr [0x10dbd3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbd3a0))), 0x10d9a463u);
  /* 10d9a463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a466 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a469 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a470 je 0x10d9a488 */
  if (C.zf) goto L_10d9a488;
  /* 10d9a472 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a479 jne 0x10d9a488 */
  if (!C.zf) goto L_10d9a488;
  /* 10d9a47b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a47e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a47f call dword ptr [0x10dbd3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbd3ac))), 0x10d9a485u);
  /* 10d9a485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a488:;
  /* 10d9a488 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 10d9a48c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a48f jne 0x10d9a4aa */
  if (!C.zf) goto L_10d9a4aa;
  /* 10d9a491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a494 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a49b jne 0x10d9a4aa */
  if (!C.zf) goto L_10d9a4aa;
  /* 10d9a49d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a4a1 call dword ptr [0x10dbd3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbd3a4))), 0x10d9a4a7u);
  /* 10d9a4a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a4aa:;
  /* 10d9a4aa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a4ad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9a4b0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a4b3 jne 0x10d9a4c7 */
  if (!C.zf) goto L_10d9a4c7;
  /* 10d9a4b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a4b8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a4bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9a4be mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a4c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a4c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d9a4c7:;
  /* 10d9a4c7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a4ca push eax */
  push32((uint32_t)(EAX));
  /* 10d9a4cb call 0x10d95c50 */
  push32(0x10d9a4d0u); f_10d95c50();
  /* 10d9a4d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a4d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d9a4d6 jmp 0x10d9a7e7 */
  goto L_10d9a7e7;
L_10d9a4db:;
  /* 10d9a4db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a4de or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a4e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9a4e4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d9a4ee jmp 0x10d9a575 */
  goto L_10d9a575;
L_10d9a4f3:;
  /* 10d9a4f3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 10d9a4fd jmp 0x10d9a575 */
  goto L_10d9a575;
L_10d9a4ff:;
  /* 10d9a4ff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_10d9a509:;
  /* 10d9a509 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 10d9a513 jmp 0x10d9a51f */
  goto L_10d9a51f;
L_10d9a515:;
  /* 10d9a515 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_10d9a51f:;
  /* 10d9a51f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 10d9a529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a52c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a532 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a534 je 0x10d9a553 */
  if (C.zf) goto L_10d9a553;
  /* 10d9a536 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 10d9a53d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 10d9a543 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a546 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 10d9a54c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_10d9a553:;
  /* 10d9a553 jmp 0x10d9a575 */
  goto L_10d9a575;
L_10d9a555:;
  /* 10d9a555 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 10d9a55f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a562 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a568 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a56a je 0x10d9a575 */
  if (C.zf) goto L_10d9a575;
  /* 10d9a56c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a56f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a572 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9a575:;
  /* 10d9a575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a578 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a57d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a57f je 0x10d9a59e */
  if (C.zf) goto L_10d9a59e;
  /* 10d9a581 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d9a584 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a585 call 0x10d9ac10 */
  push32(0x10d9a58au); f_10d9ac10();
  /* 10d9a58a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a58d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d9a593 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d9a599 jmp 0x10d9a62f */
  goto L_10d9a62f;
L_10d9a59e:;
  /* 10d9a59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a5a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a5a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a5a6 je 0x10d9a5f0 */
  if (C.zf) goto L_10d9a5f0;
  /* 10d9a5a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a5ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a5ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a5b0 je 0x10d9a5d0 */
  if (C.zf) goto L_10d9a5d0;
  /* 10d9a5b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d9a5b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a5b6 call 0x10d9abf0 */
  push32(0x10d9a5bbu); f_10d9abf0();
  /* 10d9a5bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a5be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 10d9a5c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9a5c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d9a5c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d9a5ce jmp 0x10d9a5ee */
  goto L_10d9a5ee;
L_10d9a5d0:;
  /* 10d9a5d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d9a5d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a5d4 call 0x10d9abf0 */
  push32(0x10d9a5d9u); f_10d9abf0();
  /* 10d9a5d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a5dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a5e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9a5e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d9a5e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_10d9a5ee:;
  /* 10d9a5ee jmp 0x10d9a62f */
  goto L_10d9a62f;
L_10d9a5f0:;
  /* 10d9a5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a5f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a5f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a5f8 je 0x10d9a615 */
  if (C.zf) goto L_10d9a615;
  /* 10d9a5fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 10d9a5fd push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a5fe call 0x10d9abf0 */
  push32(0x10d9a603u); f_10d9abf0();
  /* 10d9a603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9a607 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d9a60d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 10d9a613 jmp 0x10d9a62f */
  goto L_10d9a62f;
L_10d9a615:;
  /* 10d9a615 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 10d9a618 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a619 call 0x10d9abf0 */
  push32(0x10d9a61eu); f_10d9abf0();
  /* 10d9a61e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a621 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a623 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 10d9a629 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_10d9a62f:;
  /* 10d9a62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a632 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a635 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a637 je 0x10d9a677 */
  if (C.zf) goto L_10d9a677;
  /* 10d9a639 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a640 jg 0x10d9a677 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9a677;
  /* 10d9a642 jl 0x10d9a64d */
  if ((C.sf!=C.of)) goto L_10d9a64d;
  /* 10d9a644 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a64b jae 0x10d9a677 */
  if (!C.cf) goto L_10d9a677;
L_10d9a64d:;
  /* 10d9a64d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d9a653 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9a655 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d9a65b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a65e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9a660 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d9a666 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 10d9a66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a66f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d9a672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9a675 jmp 0x10d9a68f */
  goto L_10d9a68f;
L_10d9a677:;
  /* 10d9a677 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 10d9a67d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d9a683 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 10d9a689 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d9a68f:;
  /* 10d9a68f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a692 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a698 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a69a jne 0x10d9a6b7 */
  if (!C.zf) goto L_10d9a6b7;
  /* 10d9a69c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d9a6a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d9a6a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a6ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d9a6b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_10d9a6b7:;
  /* 10d9a6b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a6be jge 0x10d9a6cc */
  if ((C.sf==C.of)) goto L_10d9a6cc;
  /* 10d9a6c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 10d9a6ca jmp 0x10d9a6d5 */
  goto L_10d9a6d5;
L_10d9a6cc:;
  /* 10d9a6cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a6cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a6d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9a6d5:;
  /* 10d9a6d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d9a6db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a6e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a6e3 jne 0x10d9a6ec */
  if (!C.zf) goto L_10d9a6ec;
  /* 10d9a6e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d9a6ec:;
  /* 10d9a6ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d9a6ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d9a6f2:;
  /* 10d9a6f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d9a6f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 10d9a6fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a701 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 10d9a707 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a709 jg 0x10d9a71f */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9a71f;
  /* 10d9a70b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d9a711 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a717 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a719 je 0x10d9a7a0 */
  if (C.zf) goto L_10d9a7a0;
L_10d9a71f:;
  /* 10d9a71f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d9a725 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9a726 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a727 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a728 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d9a72e push edx */
  push32((uint32_t)(EDX));
  /* 10d9a72f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d9a735 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a736 call 0x10d99ab0 */
  push32(0x10d9a73bu); f_10d99ab0();
  /* 10d9a73b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a73e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 10d9a744 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 10d9a74a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9a74b push edx */
  push32((uint32_t)(EDX));
  /* 10d9a74c push eax */
  push32((uint32_t)(EAX));
  /* 10d9a74d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 10d9a753 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a754 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 10d9a75a push edx */
  push32((uint32_t)(EDX));
  /* 10d9a75b call 0x10d99a40 */
  push32(0x10d9a760u); f_10d99a40();
  /* 10d9a760 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 10d9a766 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 10d9a76c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a773 jle 0x10d9a787 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9a787;
  /* 10d9a775 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 10d9a77b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a781 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_10d9a787:;
  /* 10d9a787 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a78a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 10d9a790 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d9a792 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a795 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a798 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9a79b jmp 0x10d9a6f2 */
  goto L_10d9a6f2;
L_10d9a7a0:;
  /* 10d9a7a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 10d9a7a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a7a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d9a7a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a7ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a7af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d9a7b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a7b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a7ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a7bc je 0x10d9a7e7 */
  if (C.zf) goto L_10d9a7e7;
  /* 10d9a7be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a7c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9a7c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a7c7 jne 0x10d9a7cf */
  if (!C.zf) goto L_10d9a7cf;
  /* 10d9a7c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a7cd jne 0x10d9a7e7 */
  if (!C.zf) goto L_10d9a7e7;
L_10d9a7cf:;
  /* 10d9a7cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a7d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a7d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9a7d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a7db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 10d9a7de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9a7e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a7e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_10d9a7e7:;
  /* 10d9a7e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a7ee jne 0x10d9a9c2 */
  if (!C.zf) goto L_10d9a9c2;
  /* 10d9a7f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a7f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a7fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a7fc je 0x10d9a84d */
  if (C.zf) goto L_10d9a84d;
  /* 10d9a7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a801 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a807 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a809 je 0x10d9a81b */
  if (C.zf) goto L_10d9a81b;
  /* 10d9a80b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 10d9a812 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d9a819 jmp 0x10d9a84d */
  goto L_10d9a84d;
L_10d9a81b:;
  /* 10d9a81b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a81e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a821 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a823 je 0x10d9a835 */
  if (C.zf) goto L_10d9a835;
  /* 10d9a825 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 10d9a82c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d9a833 jmp 0x10d9a84d */
  goto L_10d9a84d;
L_10d9a835:;
  /* 10d9a835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a838 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9a83b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9a83d je 0x10d9a84d */
  if (C.zf) goto L_10d9a84d;
  /* 10d9a83f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 10d9a846 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_10d9a84d:;
  /* 10d9a84d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 10d9a853 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a856 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a859 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 10d9a85f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a862 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a865 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a867 jne 0x10d9a885 */
  if (!C.zf) goto L_10d9a885;
  /* 10d9a869 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a86f push eax */
  push32((uint32_t)(EAX));
  /* 10d9a870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a873 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a874 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d9a87a push edx */
  push32((uint32_t)(EDX));
  /* 10d9a87b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d9a87d call 0x10d9ab60 */
  push32(0x10d9a882u); f_10d9ab60();
  /* 10d9a882 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a885:;
  /* 10d9a885 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a88b push eax */
  push32((uint32_t)(EAX));
  /* 10d9a88c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a88f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9a893 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a894 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 10d9a89a push eax */
  push32((uint32_t)(EAX));
  /* 10d9a89b call 0x10d9aba0 */
  push32(0x10d9a8a0u); f_10d9aba0();
  /* 10d9a8a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a8a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9a8a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9a8ab je 0x10d9a8d3 */
  if (C.zf) goto L_10d9a8d3;
  /* 10d9a8ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a8b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a8b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a8b5 jne 0x10d9a8d3 */
  if (!C.zf) goto L_10d9a8d3;
  /* 10d9a8b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a8bd push eax */
  push32((uint32_t)(EAX));
  /* 10d9a8be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a8c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a8c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d9a8c8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a8c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d9a8cb call 0x10d9ab60 */
  push32(0x10d9a8d0u); f_10d9ab60();
  /* 10d9a8d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a8d3:;
  /* 10d9a8d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a8d7 je 0x10d9a981 */
  if (C.zf) goto L_10d9a981;
  /* 10d9a8dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a8e1 jle 0x10d9a981 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9a981;
  /* 10d9a8e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a8ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 10d9a8f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9a8f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_10d9a8f9:;
  /* 10d9a8f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d9a8ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 10d9a905 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9a908 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 10d9a90e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a910 je 0x10d9a97f */
  if (C.zf) goto L_10d9a97f;
  /* 10d9a912 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d9a918 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d9a91b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 10d9a922 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 10d9a929 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a92a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 10d9a930 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a931 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 10d9a937 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a93a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 10d9a940 call 0x10d9bd10 */
  push32(0x10d9a945u); f_10d9bd10();
  /* 10d9a945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a948 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 10d9a94e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9a955 jg 0x10d9a959 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9a959;
  /* 10d9a957 jmp 0x10d9a97f */
  goto L_10d9a97f;
L_10d9a959:;
  /* 10d9a959 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a95f push eax */
  push32((uint32_t)(EAX));
  /* 10d9a960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a963 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a964 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 10d9a96a push edx */
  push32((uint32_t)(EDX));
  /* 10d9a96b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 10d9a971 push eax */
  push32((uint32_t)(EAX));
  /* 10d9a972 call 0x10d9aba0 */
  push32(0x10d9a977u); f_10d9aba0();
  /* 10d9a977 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9a97a jmp 0x10d9a8f9 */
  goto L_10d9a8f9;
L_10d9a97f:;
  /* 10d9a97f jmp 0x10d9a99c */
  goto L_10d9a99c;
L_10d9a981:;
  /* 10d9a981 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a987 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a98b push edx */
  push32((uint32_t)(EDX));
  /* 10d9a98c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9a98f push eax */
  push32((uint32_t)(EAX));
  /* 10d9a990 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9a993 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a994 call 0x10d9aba0 */
  push32(0x10d9a999u); f_10d9aba0();
  /* 10d9a999 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a99c:;
  /* 10d9a99c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9a99f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9a9a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9a9a4 je 0x10d9a9c2 */
  if (C.zf) goto L_10d9a9c2;
  /* 10d9a9a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 10d9a9ac push eax */
  push32((uint32_t)(EAX));
  /* 10d9a9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9a9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9a9b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 10d9a9b7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9a9b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d9a9ba call 0x10d9ab60 */
  push32(0x10d9a9bfu); f_10d9ab60();
  /* 10d9a9bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9a9c2:;
  /* 10d9a9c2 jmp 0x10d99dd4 */
  goto L_10d99dd4;
L_10d9a9c7:;
  /* 10d9a9c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 10d9a9cd pop edi */
  EDI = (pop32());
  /* 10d9a9ce pop esi */
  ESI = (pop32());
  /* 10d9a9cf pop ebx */
  EBX = (pop32());
  /* 10d9a9d0 mov esp, ebp */
  ESP = (EBP);
  /* 10d9a9d2 pop ebp */
  EBP = (pop32());
  /* 10d9a9d3 ret  */
  ESPCHK(0x10d99db0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x10d9aae0 (119 bytes, 44 insns) */
void f_10d9aae0(void) {
  FTRACE(0x10d9aae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9aae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9aae1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9aae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9aae4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9aae7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9aaea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9aaed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9aaf0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10d9aaf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9aaf6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9aafa jl 0x10d9ab22 */
  if ((C.sf!=C.of)) goto L_10d9ab22;
  /* 10d9aafc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9aaff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9ab01 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10d9ab04 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d9ab06 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 10d9ab0a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9ab10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9ab13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ab16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9ab18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ab1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ab1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d9ab20 jmp 0x10d9ab35 */
  goto L_10d9ab35;
L_10d9ab22:;
  /* 10d9ab22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ab25 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ab26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ab29 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ab2a call 0x10d99b30 */
  push32(0x10d9ab2fu); f_10d99b30();
  /* 10d9ab2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ab32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9ab35:;
  /* 10d9ab35 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ab39 jne 0x10d9ab46 */
  if (!C.zf) goto L_10d9ab46;
  /* 10d9ab3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ab3e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d9ab44 jmp 0x10d9ab53 */
  goto L_10d9ab53;
L_10d9ab46:;
  /* 10d9ab46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ab49 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9ab4b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ab4e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ab51 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d9ab53:;
  /* 10d9ab53 mov esp, ebp */
  ESP = (EBP);
  /* 10d9ab55 pop ebp */
  EBP = (pop32());
  /* 10d9ab56 ret  */
  ESPCHK(0x10d9aae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab60 @ 0x10d9ab60 (53 bytes, 23 insns) */
void f_10d9ab60(void) {
  FTRACE(0x10d9ab60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ab60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ab61 mov ebp, esp */
  EBP = (ESP);
L_10d9ab63:;
  /* 10d9ab63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ab66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ab69 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ab6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d9ab6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ab71 jle 0x10d9ab93 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9ab93;
  /* 10d9ab73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9ab76 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ab77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ab7a push eax */
  push32((uint32_t)(EAX));
  /* 10d9ab7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ab7e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ab7f call 0x10d9aae0 */
  push32(0x10d9ab84u); f_10d9aae0();
  /* 10d9ab84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ab87 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9ab8a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ab8d jne 0x10d9ab91 */
  if (!C.zf) goto L_10d9ab91;
  /* 10d9ab8f jmp 0x10d9ab93 */
  goto L_10d9ab93;
L_10d9ab91:;
  /* 10d9ab91 jmp 0x10d9ab63 */
  goto L_10d9ab63;
L_10d9ab93:;
  /* 10d9ab93 pop ebp */
  EBP = (pop32());
  /* 10d9ab94 ret  */
  ESPCHK(0x10d9ab60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x10d9aba0 (74 bytes, 31 insns) */
void f_10d9aba0(void) {
  FTRACE(0x10d9aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9aba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9aba1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9aba3 push ecx */
  push32((uint32_t)(ECX));
L_10d9aba4:;
  /* 10d9aba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9aba7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9abaa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9abad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d9abb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9abb2 jle 0x10d9abe6 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9abe6;
  /* 10d9abb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9abb7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9abb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9abbb push eax */
  push32((uint32_t)(EAX));
  /* 10d9abbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9abbf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9abc2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9abc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9abc8 push eax */
  push32((uint32_t)(EAX));
  /* 10d9abc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9abcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9abcf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d9abd2 call 0x10d9aae0 */
  push32(0x10d9abd7u); f_10d9aae0();
  /* 10d9abd7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9abda mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9abdd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9abe0 jne 0x10d9abe4 */
  if (!C.zf) goto L_10d9abe4;
  /* 10d9abe2 jmp 0x10d9abe6 */
  goto L_10d9abe6;
L_10d9abe4:;
  /* 10d9abe4 jmp 0x10d9aba4 */
  goto L_10d9aba4;
L_10d9abe6:;
  /* 10d9abe6 mov esp, ebp */
  ESP = (EBP);
  /* 10d9abe8 pop ebp */
  EBP = (pop32());
  /* 10d9abe9 ret  */
  ESPCHK(0x10d9aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abf0 @ 0x10d9abf0 (26 bytes, 12 insns) */
void f_10d9abf0(void) {
  FTRACE(0x10d9abf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9abf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9abf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9abf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9abf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9abf8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9abfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9abfe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d9ac00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9ac05 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d9ac08 pop ebp */
  EBP = (pop32());
  /* 10d9ac09 ret  */
  ESPCHK(0x10d9abf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x10d9ac10 (31 bytes, 14 insns) */
void f_10d9ac10(void) {
  FTRACE(0x10d9ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ac11 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ac13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac16 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9ac18 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ac1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac1e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d9ac20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9ac25 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ac28 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d9ac2a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9ac2d pop ebp */
  EBP = (pop32());
  /* 10d9ac2e ret  */
  ESPCHK(0x10d9ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac30 @ 0x10d9ac30 (27 bytes, 12 insns) */
void f_10d9ac30(void) {
  FTRACE(0x10d9ac30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ac30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ac31 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ac33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac36 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9ac38 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ac3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac3e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d9ac40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac43 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9ac45 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 10d9ac49 pop ebp */
  EBP = (pop32());
  /* 10d9ac4a ret  */
  ESPCHK(0x10d9ac30u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x10d9ac50 (145 bytes, 42 insns) */
void f_10d9ac50(void) {
  FTRACE(0x10d9ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ac51 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ac53 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ac54 call 0x10d9ad00 */
  push32(0x10d9ac59u); f_10d9ad00();
  /* 10d9ac59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d9ac5e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9ac65 jmp 0x10d9ac70 */
  goto L_10d9ac70;
L_10d9ac67:;
  /* 10d9ac67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ac6a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ac6d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9ac70:;
  /* 10d9ac70 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ac74 jae 0x10d9ac9a */
  if (!C.cf) goto L_10d9ac9a;
  /* 10d9ac76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ac79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ac7c cmp ecx, dword ptr [eax*8 + 0x10dbcfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dbcfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ac83 jne 0x10d9ac98 */
  if (!C.zf) goto L_10d9ac98;
  /* 10d9ac85 call 0x10d9acf0 */
  push32(0x10d9ac8au); f_10d9acf0();
  /* 10d9ac8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ac8d mov ecx, dword ptr [edx*8 + 0x10dbcfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x10dbcfbc)));
  /* 10d9ac94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d9ac96 jmp 0x10d9acdd */
  goto L_10d9acdd;
L_10d9ac98:;
  /* 10d9ac98 jmp 0x10d9ac67 */
  goto L_10d9ac67;
L_10d9ac9a:;
  /* 10d9ac9a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ac9e jb 0x10d9acb3 */
  if (C.cf) goto L_10d9acb3;
  /* 10d9aca0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9aca4 ja 0x10d9acb3 */
  if ((!C.cf&&!C.zf)) goto L_10d9acb3;
  /* 10d9aca6 call 0x10d9acf0 */
  push32(0x10d9acabu); f_10d9acf0();
  /* 10d9acab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 10d9acb1 jmp 0x10d9acdd */
  goto L_10d9acdd;
L_10d9acb3:;
  /* 10d9acb3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9acba jb 0x10d9acd2 */
  if (C.cf) goto L_10d9acd2;
  /* 10d9acbc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9acc3 ja 0x10d9acd2 */
  if ((!C.cf&&!C.zf)) goto L_10d9acd2;
  /* 10d9acc5 call 0x10d9acf0 */
  push32(0x10d9accau); f_10d9acf0();
  /* 10d9acca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 10d9acd0 jmp 0x10d9acdd */
  goto L_10d9acdd;
L_10d9acd2:;
  /* 10d9acd2 call 0x10d9acf0 */
  push32(0x10d9acd7u); f_10d9acf0();
  /* 10d9acd7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_10d9acdd:;
  /* 10d9acdd mov esp, ebp */
  ESP = (EBP);
  /* 10d9acdf pop ebp */
  EBP = (pop32());
  /* 10d9ace0 ret  */
  ESPCHK(0x10d9ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x10d9acf0 (13 bytes, 6 insns) */
void f_10d9acf0(void) {
  FTRACE(0x10d9acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9acf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9acf3 call 0x10d92860 */
  push32(0x10d9acf8u); f_10d92860();
  /* 10d9acf8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9acfb pop ebp */
  EBP = (pop32());
  /* 10d9acfc ret  */
  ESPCHK(0x10d9acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad00 @ 0x10d9ad00 (13 bytes, 6 insns) */
void f_10d9ad00(void) {
  FTRACE(0x10d9ad00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ad00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ad01 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ad03 call 0x10d92860 */
  push32(0x10d9ad08u); f_10d92860();
  /* 10d9ad08 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ad0b pop ebp */
  EBP = (pop32());
  /* 10d9ad0c ret  */
  ESPCHK(0x10d9ad00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x10d9ad10 (664 bytes, 267 insns) [15 switch table(s)] */
void f_10d9ad10(void) {
  FTRACE(0x10d9ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ad11 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ad13 push edi */
  push32((uint32_t)(EDI));
  /* 10d9ad14 push esi */
  push32((uint32_t)(ESI));
  /* 10d9ad15 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ad18 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ad1b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ad1e mov eax, ecx */
  EAX = (ECX);
  /* 10d9ad20 mov edx, ecx */
  EDX = (ECX);
  /* 10d9ad22 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ad24 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ad26 jbe 0x10d9ad30 */
  if ((C.cf||C.zf)) goto L_10d9ad30;
  /* 10d9ad28 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ad2a jb 0x10d9aea8 */
  if (C.cf) goto L_10d9aea8;
L_10d9ad30:;
  /* 10d9ad30 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d9ad36 jne 0x10d9ad4c */
  if (!C.zf) goto L_10d9ad4c;
  /* 10d9ad38 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9ad3b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ad3e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ad41 jb 0x10d9ad6c */
  if (C.cf) goto L_10d9ad6c;
  /* 10d9ad43 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9ad45 jmp dword ptr [edx*4 + 0x10d9ae58] */
  switch (EDX) {
    case 0: goto L_10d9ae68;
    case 1: goto L_10d9ae70;
    case 2: goto L_10d9ae7c;
    case 3: goto L_10d9ae90;
    default: x86_unimpl("switch@0x10d9ad45 out of table"); return;
  }
L_10d9ad4c:;
  /* 10d9ad4c mov eax, edi */
  EAX = (EDI);
  /* 10d9ad4e mov edx, 3 */
  EDX = (0x3u);
  /* 10d9ad53 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ad56 jb 0x10d9ad64 */
  if (C.cf) goto L_10d9ad64;
  /* 10d9ad58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ad5b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ad5d jmp dword ptr [eax*4 + 0x10d9ad70] */
  switch (EAX) {
    case 1: goto L_10d9ad80;
    case 2: goto L_10d9adac;
    case 3: goto L_10d9add0;
    default: x86_unimpl("switch@0x10d9ad5d out of table"); return;
  }
L_10d9ad64:;
  /* 10d9ad64 jmp dword ptr [ecx*4 + 0x10d9ae68] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10d9ae68)))); return;
  /* 10d9ad6b nop  */
  /* nop */
L_10d9ad6c:;
  /* 10d9ad6c jmp dword ptr [ecx*4 + 0x10d9adec] */
  switch (ECX) {
    case 0: goto L_10d9ae4f;
    case 1: goto L_10d9ae3c;
    case 2: goto L_10d9ae34;
    case 3: goto L_10d9ae2c;
    case 4: goto L_10d9ae24;
    case 5: goto L_10d9ae1c;
    case 6: goto L_10d9ae14;
    case 7: goto L_10d9ae0c;
    default: x86_unimpl("switch@0x10d9ad6c out of table"); return;
  }
  /* 10d9ad73 nop  */
  /* nop */
L_10d9ad80:;
  /* 10d9ad80 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ad82 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9ad84 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9ad86 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9ad89 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9ad8c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9ad8f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9ad92 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9ad95 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ad98 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ad9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ad9e jb 0x10d9ad6c */
  if (C.cf) goto L_10d9ad6c;
  /* 10d9ada0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9ada2 jmp dword ptr [edx*4 + 0x10d9ae58] */
  switch (EDX) {
    case 0: goto L_10d9ae68;
    case 1: goto L_10d9ae70;
    case 2: goto L_10d9ae7c;
    case 3: goto L_10d9ae90;
    default: x86_unimpl("switch@0x10d9ada2 out of table"); return;
  }
  /* 10d9ada9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9adac:;
  /* 10d9adac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9adae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9adb0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9adb2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9adb5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9adb8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9adbb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9adbe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9adc1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9adc4 jb 0x10d9ad6c */
  if (C.cf) goto L_10d9ad6c;
  /* 10d9adc6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9adc8 jmp dword ptr [edx*4 + 0x10d9ae58] */
  switch (EDX) {
    case 0: goto L_10d9ae68;
    case 1: goto L_10d9ae70;
    case 2: goto L_10d9ae7c;
    case 3: goto L_10d9ae90;
    default: x86_unimpl("switch@0x10d9adc8 out of table"); return;
  }
  /* 10d9adcf nop  */
  /* nop */
L_10d9add0:;
  /* 10d9add0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9add2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9add4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9add6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d9add7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9adda inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d9addb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9adde jb 0x10d9ad6c */
  if (C.cf) goto L_10d9ad6c;
  /* 10d9ade0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9ade2 jmp dword ptr [edx*4 + 0x10d9ae58] */
  switch (EDX) {
    case 0: goto L_10d9ae68;
    case 1: goto L_10d9ae70;
    case 2: goto L_10d9ae7c;
    case 3: goto L_10d9ae90;
    default: x86_unimpl("switch@0x10d9ade2 out of table"); return;
  }
  /* 10d9ade9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9ae0c:;
  /* 10d9ae0c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10d9ae10 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10d9ae14:;
  /* 10d9ae14 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10d9ae18 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10d9ae1c:;
  /* 10d9ae1c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10d9ae20 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10d9ae24:;
  /* 10d9ae24 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10d9ae28 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10d9ae2c:;
  /* 10d9ae2c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10d9ae30 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10d9ae34:;
  /* 10d9ae34 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10d9ae38 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10d9ae3c:;
  /* 10d9ae3c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10d9ae40 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10d9ae44 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d9ae4b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ae4d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d9ae4f:;
  /* 10d9ae4f jmp dword ptr [edx*4 + 0x10d9ae58] */
  switch (EDX) {
    case 0: goto L_10d9ae68;
    case 1: goto L_10d9ae70;
    case 2: goto L_10d9ae7c;
    case 3: goto L_10d9ae90;
    default: x86_unimpl("switch@0x10d9ae4f out of table"); return;
  }
  /* 10d9ae56 mov edi, edi */
  EDI = (EDI);
L_10d9ae68:;
  /* 10d9ae68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ae6b pop esi */
  ESI = (pop32());
  /* 10d9ae6c pop edi */
  EDI = (pop32());
  /* 10d9ae6d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9ae6e ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9ae6f nop  */
  /* nop */
L_10d9ae70:;
  /* 10d9ae70 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9ae72 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9ae74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ae77 pop esi */
  ESI = (pop32());
  /* 10d9ae78 pop edi */
  EDI = (pop32());
  /* 10d9ae79 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9ae7a ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9ae7b nop  */
  /* nop */
L_10d9ae7c:;
  /* 10d9ae7c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9ae7e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9ae80 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9ae83 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9ae86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ae89 pop esi */
  ESI = (pop32());
  /* 10d9ae8a pop edi */
  EDI = (pop32());
  /* 10d9ae8b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9ae8c ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9ae8d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9ae90:;
  /* 10d9ae90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9ae92 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9ae94 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9ae97 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9ae9a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9ae9d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9aea0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9aea3 pop esi */
  ESI = (pop32());
  /* 10d9aea4 pop edi */
  EDI = (pop32());
  /* 10d9aea5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9aea6 ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9aea7 nop  */
  /* nop */
L_10d9aea8:;
  /* 10d9aea8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10d9aeac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10d9aeb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d9aeb6 jne 0x10d9aedc */
  if (!C.zf) goto L_10d9aedc;
  /* 10d9aeb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9aebb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9aebe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9aec1 jb 0x10d9aed0 */
  if (C.cf) goto L_10d9aed0;
  /* 10d9aec3 std  */
  C.df=1;
  /* 10d9aec4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9aec6 cld  */
  C.df=0;
  /* 10d9aec7 jmp dword ptr [edx*4 + 0x10d9aff0] */
  switch (EDX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9aec7 out of table"); return;
  }
  /* 10d9aece mov edi, edi */
  EDI = (EDI);
L_10d9aed0:;
  /* 10d9aed0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9aed2 jmp dword ptr [ecx*4 + 0x10d9afa0] */
  switch (ECX) {
    case 0: goto L_10d9afe7;
    default: x86_unimpl("switch@0x10d9aed2 out of table"); return;
  }
  /* 10d9aed9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9aedc:;
  /* 10d9aedc mov eax, edi */
  EAX = (EDI);
  /* 10d9aede mov edx, 3 */
  EDX = (0x3u);
  /* 10d9aee3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9aee6 jb 0x10d9aef4 */
  if (C.cf) goto L_10d9aef4;
  /* 10d9aee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9aeeb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9aeed jmp dword ptr [eax*4 + 0x10d9aef8] */
  switch (EAX) {
    case 1: goto L_10d9af08;
    case 2: goto L_10d9af28;
    case 3: goto L_10d9af50;
    default: x86_unimpl("switch@0x10d9aeed out of table"); return;
  }
L_10d9aef4:;
  /* 10d9aef4 jmp dword ptr [ecx*4 + 0x10d9aff0] */
  switch (ECX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9aef4 out of table"); return;
  }
  /* 10d9aefb nop  */
  /* nop */
L_10d9af08:;
  /* 10d9af08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9af0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9af0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9af10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10d9af11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9af14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10d9af15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9af18 jb 0x10d9aed0 */
  if (C.cf) goto L_10d9aed0;
  /* 10d9af1a std  */
  C.df=1;
  /* 10d9af1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9af1d cld  */
  C.df=0;
  /* 10d9af1e jmp dword ptr [edx*4 + 0x10d9aff0] */
  switch (EDX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9af1e out of table"); return;
  }
  /* 10d9af25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9af28:;
  /* 10d9af28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9af2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9af2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9af30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9af33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9af36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9af39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9af3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9af3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9af42 jb 0x10d9aed0 */
  if (C.cf) goto L_10d9aed0;
  /* 10d9af44 std  */
  C.df=1;
  /* 10d9af45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9af47 cld  */
  C.df=0;
  /* 10d9af48 jmp dword ptr [edx*4 + 0x10d9aff0] */
  switch (EDX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9af48 out of table"); return;
  }
  /* 10d9af4f nop  */
  /* nop */
L_10d9af50:;
  /* 10d9af50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9af53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9af55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9af58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9af5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9af5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9af61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9af64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9af67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9af6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9af6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9af70 jb 0x10d9aed0 */
  if (C.cf) goto L_10d9aed0;
  /* 10d9af76 std  */
  C.df=1;
  /* 10d9af77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10d9af79 cld  */
  C.df=0;
  /* 10d9af7a jmp dword ptr [edx*4 + 0x10d9aff0] */
  switch (EDX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9af7a out of table"); return;
  }
  /* 10d9af81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10d9af84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10d9af85 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10d9af86 fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9af88 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 10d9af89 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10d9af8a fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9af8c mov ah, 0xaf */
  AH = (0xafu);
  /* 10d9af8e fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9af90 mov esp, 0xc410d9af */
  ESP = (0xc410d9afu);
  /* 10d9af95 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10d9af96 fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9af98 int3  */
  x86_unimpl("int3 @ 0x10d9af98");
  /* 10d9af99 scasd eax, dword ptr es:[edi] */
  { uint32_t _a=(EAX),_b=r32(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); } EDI+=(C.df?-4:4);
  /* 10d9af9a fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9af9c aam 0xaf */
  x86_unimpl("aam @ 0x10d9af9c");
  /* 10d9af9e fst dword ptr [eax] */
  wf32((uint32_t)(EAX), (float)FPU_ST(0));
  /* 10d9afa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10d9afa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10d9afac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10d9afb0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10d9afb4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10d9afb8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10d9afbc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10d9afc0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10d9afc4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10d9afc8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10d9afcc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10d9afd0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10d9afd4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10d9afd8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10d9afdc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10d9afe3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9afe5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d9afe7:;
  /* 10d9afe7 jmp dword ptr [edx*4 + 0x10d9aff0] */
  switch (EDX) {
    case 0: goto L_10d9b000;
    case 1: goto L_10d9b008;
    case 2: goto L_10d9b018;
    case 3: goto L_10d9b02c;
    default: x86_unimpl("switch@0x10d9afe7 out of table"); return;
  }
  /* 10d9afee mov edi, edi */
  EDI = (EDI);
L_10d9b000:;
  /* 10d9b000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b003 pop esi */
  ESI = (pop32());
  /* 10d9b004 pop edi */
  EDI = (pop32());
  /* 10d9b005 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9b006 ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9b007 nop  */
  /* nop */
L_10d9b008:;
  /* 10d9b008 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9b00b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9b00e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b011 pop esi */
  ESI = (pop32());
  /* 10d9b012 pop edi */
  EDI = (pop32());
  /* 10d9b013 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9b014 ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9b015 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9b018:;
  /* 10d9b018 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9b01b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9b01e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9b021 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9b024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b027 pop esi */
  ESI = (pop32());
  /* 10d9b028 pop edi */
  EDI = (pop32());
  /* 10d9b029 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9b02a ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
  /* 10d9b02b nop  */
  /* nop */
L_10d9b02c:;
  /* 10d9b02c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10d9b02f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10d9b032 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10d9b035 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10d9b038 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10d9b03b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10d9b03e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b041 pop esi */
  ESI = (pop32());
  /* 10d9b042 pop edi */
  EDI = (pop32());
  /* 10d9b043 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9b044 ret  */
  ESPCHK(0x10d9ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b050 @ 0x10d9b050 (421 bytes, 148 insns) */
void f_10d9b050(void) {
  FTRACE(0x10d9b050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b050 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b051 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b053 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d9b055 push 0x10db9fa8 */
  push32((uint32_t)(0x10db9fa8u));
  /* 10d9b05a push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10d9b05f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d9b065 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b066 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d9b06d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b070 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9b071 push esi */
  push32((uint32_t)(ESI));
  /* 10d9b072 push edi */
  push32((uint32_t)(EDI));
  /* 10d9b073 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d9b076 cmp dword ptr [0x10dbe684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b07d jne 0x10d9b0ce */
  if (!C.zf) goto L_10d9b0ce;
  /* 10d9b07f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10d9b082 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b083 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b085 push 0x10db9fa0 */
  push32((uint32_t)(0x10db9fa0u));
  /* 10d9b08a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b08c call dword ptr [0x10dc0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0350))), 0x10d9b092u);
  /* 10d9b092 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b094 je 0x10d9b0a2 */
  if (C.zf) goto L_10d9b0a2;
  /* 10d9b096 mov dword ptr [0x10dbe684], 1 */
  w32((uint32_t)(0x10dbe684), (0x1u));
  /* 10d9b0a0 jmp 0x10d9b0ce */
  goto L_10d9b0ce;
L_10d9b0a2:;
  /* 10d9b0a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 10d9b0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b0a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b0a8 push 0x10db9f9c */
  push32((uint32_t)(0x10db9f9cu));
  /* 10d9b0ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b0af push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b0b1 call dword ptr [0x10dc034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc034c))), 0x10d9b0b7u);
  /* 10d9b0b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b0b9 je 0x10d9b0c7 */
  if (C.zf) goto L_10d9b0c7;
  /* 10d9b0bb mov dword ptr [0x10dbe684], 2 */
  w32((uint32_t)(0x10dbe684), (0x2u));
  /* 10d9b0c5 jmp 0x10d9b0ce */
  goto L_10d9b0ce;
L_10d9b0c7:;
  /* 10d9b0c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b0c9 jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b0ce:;
  /* 10d9b0ce cmp dword ptr [0x10dbe684], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe684))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b0d5 jne 0x10d9b105 */
  if (!C.zf) goto L_10d9b105;
  /* 10d9b0d7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b0db jne 0x10d9b0e6 */
  if (!C.zf) goto L_10d9b0e6;
  /* 10d9b0dd mov edx, dword ptr [0x10dbe690] */
  EDX = (r32((uint32_t)(0x10dbe690)));
  /* 10d9b0e3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10d9b0e6:;
  /* 10d9b0e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b0e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b0ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b0ed push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b0ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b0f1 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b0f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b0f5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b0f6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d9b0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b0fa call dword ptr [0x10dc034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc034c))), 0x10d9b100u);
  /* 10d9b100 jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b105:;
  /* 10d9b105 cmp dword ptr [0x10dbe684], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe684))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b10c jne 0x10d9b1f6 */
  if (!C.zf) goto L_10d9b1f6;
  /* 10d9b112 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b116 jne 0x10d9b121 */
  if (!C.zf) goto L_10d9b121;
  /* 10d9b118 mov edx, dword ptr [0x10dbe6a0] */
  EDX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d9b11e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_10d9b121:;
  /* 10d9b121 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b125 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b128 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b129 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b12c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b12d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d9b130 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9b132 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b137 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b13a push edx */
  push32((uint32_t)(EDX));
  /* 10d9b13b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9b13e push eax */
  push32((uint32_t)(EAX));
  /* 10d9b13f call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10d9b145u);
  /* 10d9b145 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9b148 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b14c jne 0x10d9b155 */
  if (!C.zf) goto L_10d9b155;
  /* 10d9b14e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b150 jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b155:;
  /* 10d9b155 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9b15c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b15f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9b161 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b164 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d9b166 call 0x10d95fc0 */
  push32(0x10d9b16bu); f_10d95fc0();
  /* 10d9b16b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 10d9b16e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d9b171 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9b174 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d9b177 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b17a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 10d9b17c push edx */
  push32((uint32_t)(EDX));
  /* 10d9b17d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b17f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b182 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b183 call 0x10d96b90 */
  push32(0x10d9b188u); f_10d96b90();
  /* 10d9b188 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b18b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d9b192 jmp 0x10d9b1ab */
  goto L_10d9b1ab;
  /* 10d9b194 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9b199 ret  */
  ESPCHK(0x10d9b050u, _esp0);
  ESP += 4; return;
  /* 10d9b19a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9b19d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d9b1a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9b1ab:;
  /* 10d9b1ab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b1af jne 0x10d9b1b5 */
  if (!C.zf) goto L_10d9b1b5;
  /* 10d9b1b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b1b3 jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b1b5:;
  /* 10d9b1b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b1b9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b1bc push edx */
  push32((uint32_t)(EDX));
  /* 10d9b1bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b1c0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b1c1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b1c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b1c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b1c7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9b1ca push edx */
  push32((uint32_t)(EDX));
  /* 10d9b1cb call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10d9b1d1u);
  /* 10d9b1d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9b1d4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b1d8 jne 0x10d9b1de */
  if (!C.zf) goto L_10d9b1de;
  /* 10d9b1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b1dc jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b1de:;
  /* 10d9b1de mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b1e1 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b1e2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9b1e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b1e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b1e9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b1ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b1ed push eax */
  push32((uint32_t)(EAX));
  /* 10d9b1ee call dword ptr [0x10dc0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0350))), 0x10d9b1f4u);
  /* 10d9b1f4 jmp 0x10d9b1f8 */
  goto L_10d9b1f8;
L_10d9b1f6:;
  /* 10d9b1f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9b1f8:;
  /* 10d9b1f8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10d9b1fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9b1fe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d9b205 pop edi */
  EDI = (pop32());
  /* 10d9b206 pop esi */
  ESI = (pop32());
  /* 10d9b207 pop ebx */
  EBX = (pop32());
  /* 10d9b208 mov esp, ebp */
  ESP = (EBP);
  /* 10d9b20a pop ebp */
  EBP = (pop32());
  /* 10d9b20b ret  */
  ESPCHK(0x10d9b050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b210 @ 0x10d9b210 (727 bytes, 263 insns) */
void f_10d9b210(void) {
  FTRACE(0x10d9b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b210 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b211 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b213 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d9b215 push 0x10db9fb8 */
  push32((uint32_t)(0x10db9fb8u));
  /* 10d9b21a push 0x10d9bf28 */
  push32((uint32_t)(0x10d9bf28u));
  /* 10d9b21f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10d9b225 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b226 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10d9b22d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b230 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9b231 push esi */
  push32((uint32_t)(ESI));
  /* 10d9b232 push edi */
  push32((uint32_t)(EDI));
  /* 10d9b233 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d9b236 cmp dword ptr [0x10dbe6a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b23d jne 0x10d9b296 */
  if (!C.zf) goto L_10d9b296;
  /* 10d9b23f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b241 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b245 push 0x10db9fa0 */
  push32((uint32_t)(0x10db9fa0u));
  /* 10d9b24a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d9b24f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b251 call dword ptr [0x10dc0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0358))), 0x10d9b257u);
  /* 10d9b257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b259 je 0x10d9b267 */
  if (C.zf) goto L_10d9b267;
  /* 10d9b25b mov dword ptr [0x10dbe6a8], 1 */
  w32((uint32_t)(0x10dbe6a8), (0x1u));
  /* 10d9b265 jmp 0x10d9b296 */
  goto L_10d9b296;
L_10d9b267:;
  /* 10d9b267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b269 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b26b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b26d push 0x10db9f9c */
  push32((uint32_t)(0x10db9f9cu));
  /* 10d9b272 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d9b277 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b279 call dword ptr [0x10dc0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0354))), 0x10d9b27fu);
  /* 10d9b27f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b281 je 0x10d9b28f */
  if (C.zf) goto L_10d9b28f;
  /* 10d9b283 mov dword ptr [0x10dbe6a8], 2 */
  w32((uint32_t)(0x10dbe6a8), (0x2u));
  /* 10d9b28d jmp 0x10d9b296 */
  goto L_10d9b296;
L_10d9b28f:;
  /* 10d9b28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b291 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b296:;
  /* 10d9b296 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b29a jle 0x10d9b2af */
  if ((C.zf||C.sf!=C.of)) goto L_10d9b2af;
  /* 10d9b29c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b29f push eax */
  push32((uint32_t)(EAX));
  /* 10d9b2a0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b2a4 call 0x10d9b520 */
  push32(0x10d9b2a9u); f_10d9b520();
  /* 10d9b2a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b2ac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10d9b2af:;
  /* 10d9b2af cmp dword ptr [0x10dbe6a8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6a8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b2b6 jne 0x10d9b2db */
  if (!C.zf) goto L_10d9b2db;
  /* 10d9b2b8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d9b2bb push edx */
  push32((uint32_t)(EDX));
  /* 10d9b2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9b2bf push eax */
  push32((uint32_t)(EAX));
  /* 10d9b2c0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b2c4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b2c7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b2cb push eax */
  push32((uint32_t)(EAX));
  /* 10d9b2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b2cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b2d0 call dword ptr [0x10dc0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0354))), 0x10d9b2d6u);
  /* 10d9b2d6 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b2db:;
  /* 10d9b2db cmp dword ptr [0x10dbe6a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b2e2 jne 0x10d9b4ff */
  if (!C.zf) goto L_10d9b4ff;
  /* 10d9b2e8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b2ec jne 0x10d9b2f7 */
  if (!C.zf) goto L_10d9b2f7;
  /* 10d9b2ee mov edx, dword ptr [0x10dbe6a0] */
  EDX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d9b2f4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_10d9b2f7:;
  /* 10d9b2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b2fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b2fe push eax */
  push32((uint32_t)(EAX));
  /* 10d9b2ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b302 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b303 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 10d9b306 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9b308 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b30a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b310 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b311 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d9b314 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b315 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10d9b31bu);
  /* 10d9b31b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d9b31e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b322 jne 0x10d9b32b */
  if (!C.zf) goto L_10d9b32b;
  /* 10d9b324 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b326 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b32b:;
  /* 10d9b32b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9b332 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9b335 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9b337 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b33a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d9b33c call 0x10d95fc0 */
  push32(0x10d9b341u); f_10d95fc0();
  /* 10d9b341 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10d9b344 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d9b347 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9b34a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d9b34d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d9b354 jmp 0x10d9b36d */
  goto L_10d9b36d;
  /* 10d9b356 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9b35b ret  */
  ESPCHK(0x10d9b210u, _esp0);
  ESP += 4; return;
  /* 10d9b35c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9b35f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10d9b366 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9b36d:;
  /* 10d9b36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b371 jne 0x10d9b37a */
  if (!C.zf) goto L_10d9b37a;
  /* 10d9b373 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b375 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b37a:;
  /* 10d9b37a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9b37d push edx */
  push32((uint32_t)(EDX));
  /* 10d9b37e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b381 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b382 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9b385 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b386 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b389 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b38a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9b38c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d9b38f push eax */
  push32((uint32_t)(EAX));
  /* 10d9b390 call dword ptr [0x10dc0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0348))), 0x10d9b396u);
  /* 10d9b396 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b398 jne 0x10d9b3a1 */
  if (!C.zf) goto L_10d9b3a1;
  /* 10d9b39a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b39c jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b3a1:;
  /* 10d9b3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b3a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9b3a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b3a9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b3ac push edx */
  push32((uint32_t)(EDX));
  /* 10d9b3ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b3b0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b3b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b3b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b3b5 call dword ptr [0x10dc0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0358))), 0x10d9b3bbu);
  /* 10d9b3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9b3be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b3c2 jne 0x10d9b3cb */
  if (!C.zf) goto L_10d9b3cb;
  /* 10d9b3c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b3c6 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b3cb:;
  /* 10d9b3cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b3ce and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b3d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9b3d6 je 0x10d9b41b */
  if (C.zf) goto L_10d9b41b;
  /* 10d9b3d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b3dc je 0x10d9b416 */
  if (C.zf) goto L_10d9b416;
  /* 10d9b3de mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9b3e1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b3e4 jle 0x10d9b3ed */
  if ((C.zf||C.sf!=C.of)) goto L_10d9b3ed;
  /* 10d9b3e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b3e8 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b3ed:;
  /* 10d9b3ed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d9b3f0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b3f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9b3f4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b3f5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9b3f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b3f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b3fc push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b3fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b400 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b404 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b405 call dword ptr [0x10dc0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0358))), 0x10d9b40bu);
  /* 10d9b40b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b40d jne 0x10d9b416 */
  if (!C.zf) goto L_10d9b416;
  /* 10d9b40f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b411 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b416:;
  /* 10d9b416 jmp 0x10d9b4fa */
  goto L_10d9b4fa;
L_10d9b41b:;
  /* 10d9b41b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9b41e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d9b421 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d9b428 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9b42b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9b42d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b430 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10d9b432 call 0x10d95fc0 */
  push32(0x10d9b437u); f_10d95fc0();
  /* 10d9b437 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10d9b43a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10d9b43d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10d9b440 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10d9b443 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d9b44a jmp 0x10d9b463 */
  goto L_10d9b463;
  /* 10d9b44c mov eax, 1 */
  EAX = (0x1u);
  /* 10d9b451 ret  */
  ESPCHK(0x10d9b210u, _esp0);
  ESP += 4; return;
  /* 10d9b452 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9b455 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d9b45c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9b463:;
  /* 10d9b463 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b467 jne 0x10d9b470 */
  if (!C.zf) goto L_10d9b470;
  /* 10d9b469 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b46b jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b470:;
  /* 10d9b470 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9b473 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b474 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b477 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b478 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9b47b push edx */
  push32((uint32_t)(EDX));
  /* 10d9b47c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9b47f push eax */
  push32((uint32_t)(EAX));
  /* 10d9b480 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b483 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b484 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b487 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b488 call dword ptr [0x10dc0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0358))), 0x10d9b48eu);
  /* 10d9b48e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b490 jne 0x10d9b496 */
  if (!C.zf) goto L_10d9b496;
  /* 10d9b492 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b494 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b496:;
  /* 10d9b496 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b49a jne 0x10d9b4ca */
  if (!C.zf) goto L_10d9b4ca;
  /* 10d9b49c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b49e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b4a4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9b4a7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b4a8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b4ab push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b4ac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d9b4b1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d9b4b4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b4b5 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10d9b4bbu);
  /* 10d9b4bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9b4be cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b4c2 jne 0x10d9b4c8 */
  if (!C.zf) goto L_10d9b4c8;
  /* 10d9b4c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b4c6 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b4c8:;
  /* 10d9b4c8 jmp 0x10d9b4fa */
  goto L_10d9b4fa;
L_10d9b4ca:;
  /* 10d9b4ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b4cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b4ce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10d9b4d1 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b4d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9b4d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b4d6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9b4d9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b4da mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9b4dd push eax */
  push32((uint32_t)(EAX));
  /* 10d9b4de push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d9b4e3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10d9b4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b4e7 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10d9b4edu);
  /* 10d9b4ed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9b4f0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b4f4 jne 0x10d9b4fa */
  if (!C.zf) goto L_10d9b4fa;
  /* 10d9b4f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b4f8 jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b4fa:;
  /* 10d9b4fa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9b4fd jmp 0x10d9b501 */
  goto L_10d9b501;
L_10d9b4ff:;
  /* 10d9b4ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9b501:;
  /* 10d9b501 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 10d9b504 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9b507 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10d9b50e pop edi */
  EDI = (pop32());
  /* 10d9b50f pop esi */
  ESI = (pop32());
  /* 10d9b510 pop ebx */
  EBX = (pop32());
  /* 10d9b511 mov esp, ebp */
  ESP = (EBP);
  /* 10d9b513 pop ebp */
  EBP = (pop32());
  /* 10d9b514 ret  */
  ESPCHK(0x10d9b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b520 @ 0x10d9b520 (80 bytes, 32 insns) */
void f_10d9b520(void) {
  FTRACE(0x10d9b520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b521 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b529 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9b52c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b52f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9b532:;
  /* 10d9b532 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b535 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b538 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b53b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9b53e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9b540 je 0x10d9b557 */
  if (C.zf) goto L_10d9b557;
  /* 10d9b542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b545 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9b548 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9b54a je 0x10d9b557 */
  if (C.zf) goto L_10d9b557;
  /* 10d9b54c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b54f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9b555 jmp 0x10d9b532 */
  goto L_10d9b532;
L_10d9b557:;
  /* 10d9b557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b55a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9b55d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9b55f jne 0x10d9b569 */
  if (!C.zf) goto L_10d9b569;
  /* 10d9b561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b564 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b567 jmp 0x10d9b56c */
  goto L_10d9b56c;
L_10d9b569:;
  /* 10d9b569 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10d9b56c:;
  /* 10d9b56c mov esp, ebp */
  ESP = (EBP);
  /* 10d9b56e pop ebp */
  EBP = (pop32());
  /* 10d9b56f ret  */
  ESPCHK(0x10d9b520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x10d9b570 (130 bytes, 43 insns) */
void f_10d9b570(void) {
  FTRACE(0x10d9b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b570 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b571 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b573 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b577 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b57d jae 0x10d9b5a1 */
  if (!C.cf) goto L_10d9b5a1;
  /* 10d9b57f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b582 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9b585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b588 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b58b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b58e mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9b595 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9b59a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b59d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9b59f jne 0x10d9b5bc */
  if (!C.zf) goto L_10d9b5bc;
L_10d9b5a1:;
  /* 10d9b5a1 call 0x10d9acf0 */
  push32(0x10d9b5a6u); f_10d9acf0();
  /* 10d9b5a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9b5ac call 0x10d9ad00 */
  push32(0x10d9b5b1u); f_10d9ad00();
  /* 10d9b5b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9b5b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b5ba jmp 0x10d9b5ee */
  goto L_10d9b5ee;
L_10d9b5bc:;
  /* 10d9b5bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b5bf push edx */
  push32((uint32_t)(EDX));
  /* 10d9b5c0 call 0x10d9c510 */
  push32(0x10d9b5c5u); f_10d9c510();
  /* 10d9b5c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b5c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b5cb push eax */
  push32((uint32_t)(EAX));
  /* 10d9b5cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b5cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b5d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b5d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b5d4 call 0x10d9b600 */
  push32(0x10d9b5d9u); f_10d9b600();
  /* 10d9b5d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b5dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9b5df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b5e2 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b5e3 call 0x10d9c5a0 */
  push32(0x10d9b5e8u); f_10d9c5a0();
  /* 10d9b5e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9b5ee:;
  /* 10d9b5ee mov esp, ebp */
  ESP = (EBP);
  /* 10d9b5f0 pop ebp */
  EBP = (pop32());
  /* 10d9b5f1 ret  */
  ESPCHK(0x10d9b570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x10d9b600 (178 bytes, 56 insns) */
void f_10d9b600(void) {
  FTRACE(0x10d9b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b600 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b601 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b603 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b609 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b60a call 0x10d9c390 */
  push32(0x10d9b60fu); f_10d9c390();
  /* 10d9b60f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b612 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9b615 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b619 jne 0x10d9b62e */
  if (!C.zf) goto L_10d9b62e;
  /* 10d9b61b call 0x10d9acf0 */
  push32(0x10d9b620u); f_10d9acf0();
  /* 10d9b620 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9b626 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b629 jmp 0x10d9b6ae */
  goto L_10d9b6ae;
L_10d9b62e:;
  /* 10d9b62e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b631 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b632 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b634 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b637 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9b63b push eax */
  push32((uint32_t)(EAX));
  /* 10d9b63c call dword ptr [0x10dc02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02ec))), 0x10d9b642u);
  /* 10d9b642 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9b645 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b649 jne 0x10d9b656 */
  if (!C.zf) goto L_10d9b656;
  /* 10d9b64b call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9b651u);
  /* 10d9b651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9b654 jmp 0x10d9b65d */
  goto L_10d9b65d;
L_10d9b656:;
  /* 10d9b656 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d9b65d:;
  /* 10d9b65d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b661 je 0x10d9b674 */
  if (C.zf) goto L_10d9b674;
  /* 10d9b663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b666 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b667 call 0x10d9ac50 */
  push32(0x10d9b66cu); f_10d9ac50();
  /* 10d9b66c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b66f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b672 jmp 0x10d9b6ae */
  goto L_10d9b6ae;
L_10d9b674:;
  /* 10d9b674 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b677 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d9b67a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b67d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b680 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b683 mov ecx, dword ptr [edx*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9b68a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 10d9b68e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 10d9b691 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b694 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9b697 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b69a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b69d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b6a0 mov eax, dword ptr [eax*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9b6a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 10d9b6ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9b6ae:;
  /* 10d9b6ae mov esp, ebp */
  ESP = (EBP);
  /* 10d9b6b0 pop ebp */
  EBP = (pop32());
  /* 10d9b6b1 ret  */
  ESPCHK(0x10d9b600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x10d9b6c0 (130 bytes, 43 insns) */
void f_10d9b6c0(void) {
  FTRACE(0x10d9b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b6c7 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b6cd jae 0x10d9b6f1 */
  if (!C.cf) goto L_10d9b6f1;
  /* 10d9b6cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b6d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9b6d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b6d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b6db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b6de mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9b6e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9b6ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b6ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9b6ef jne 0x10d9b70c */
  if (!C.zf) goto L_10d9b70c;
L_10d9b6f1:;
  /* 10d9b6f1 call 0x10d9acf0 */
  push32(0x10d9b6f6u); f_10d9acf0();
  /* 10d9b6f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9b6fc call 0x10d9ad00 */
  push32(0x10d9b701u); f_10d9ad00();
  /* 10d9b701 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9b707 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b70a jmp 0x10d9b73e */
  goto L_10d9b73e;
L_10d9b70c:;
  /* 10d9b70c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b70f push edx */
  push32((uint32_t)(EDX));
  /* 10d9b710 call 0x10d9c510 */
  push32(0x10d9b715u); f_10d9c510();
  /* 10d9b715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b718 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b71b push eax */
  push32((uint32_t)(EAX));
  /* 10d9b71c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b71f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b723 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b724 call 0x10d9b750 */
  push32(0x10d9b729u); f_10d9b750();
  /* 10d9b729 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b72c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9b72f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b732 push eax */
  push32((uint32_t)(EAX));
  /* 10d9b733 call 0x10d9c5a0 */
  push32(0x10d9b738u); f_10d9c5a0();
  /* 10d9b738 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9b73e:;
  /* 10d9b73e mov esp, ebp */
  ESP = (EBP);
  /* 10d9b740 pop ebp */
  EBP = (pop32());
  /* 10d9b741 ret  */
  ESPCHK(0x10d9b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x10d9b750 (627 bytes, 182 insns) */
void f_10d9b750(void) {
  FTRACE(0x10d9b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b750 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b751 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b753 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b759 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9b760 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9b763 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 10d9b769 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b76d jne 0x10d9b776 */
  if (!C.zf) goto L_10d9b776;
  /* 10d9b76f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b771 jmp 0x10d9b9bf */
  goto L_10d9b9bf;
L_10d9b776:;
  /* 10d9b776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b779 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9b77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b77f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b782 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b785 mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9b78c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9b791 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9b796 je 0x10d9b7a8 */
  if (C.zf) goto L_10d9b7a8;
  /* 10d9b798 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9b79a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b79f push edx */
  push32((uint32_t)(EDX));
  /* 10d9b7a0 call 0x10d9b600 */
  push32(0x10d9b7a5u); f_10d9b600();
  /* 10d9b7a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9b7a8:;
  /* 10d9b7a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b7ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9b7ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b7b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b7b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b7b7 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9b7be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d9b7c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b7c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b7ca je 0x10d9b8dc */
  if (C.zf) goto L_10d9b8dc;
  /* 10d9b7d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b7d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9b7d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d9b7dd:;
  /* 10d9b7dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b7e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b7e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b7e6 jae 0x10d9b8da */
  if (!C.cf) goto L_10d9b8da;
  /* 10d9b7ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d9b7f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9b7f5:;
  /* 10d9b7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b7f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d9b7fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b800 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b806 jge 0x10d9b867 */
  if ((C.sf==C.of)) goto L_10d9b867;
  /* 10d9b808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b80b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b80e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b811 jae 0x10d9b867 */
  if (!C.cf) goto L_10d9b867;
  /* 10d9b813 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d9b818 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 10d9b81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9b821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9b827 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 10d9b82e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b831 jne 0x10d9b851 */
  if (!C.zf) goto L_10d9b851;
  /* 10d9b833 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 10d9b839 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b83c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 10d9b842 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b845 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 10d9b848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b84b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b84e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d9b851:;
  /* 10d9b851 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b854 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 10d9b85a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10d9b85c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b85f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b862 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9b865 jmp 0x10d9b7f5 */
  goto L_10d9b7f5;
L_10d9b867:;
  /* 10d9b867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b869 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 10d9b86f push edx */
  push32((uint32_t)(EDX));
  /* 10d9b870 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b873 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 10d9b879 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b87b push eax */
  push32((uint32_t)(EAX));
  /* 10d9b87c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 10d9b882 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b886 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9b889 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b88c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b88f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b892 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9b899 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 10d9b89c push eax */
  push32((uint32_t)(EAX));
  /* 10d9b89d call dword ptr [0x10dc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0290))), 0x10d9b8a3u);
  /* 10d9b8a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b8a5 je 0x10d9b8ca */
  if (C.zf) goto L_10d9b8ca;
  /* 10d9b8a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9b8aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b8b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d9b8b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9b8b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 10d9b8bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9b8be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b8c4 jge 0x10d9b8c8 */
  if ((C.sf==C.of)) goto L_10d9b8c8;
  /* 10d9b8c6 jmp 0x10d9b8da */
  goto L_10d9b8da;
L_10d9b8c8:;
  /* 10d9b8c8 jmp 0x10d9b8d5 */
  goto L_10d9b8d5;
L_10d9b8ca:;
  /* 10d9b8ca call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9b8d0u);
  /* 10d9b8d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9b8d3 jmp 0x10d9b8da */
  goto L_10d9b8da;
L_10d9b8d5:;
  /* 10d9b8d5 jmp 0x10d9b7dd */
  goto L_10d9b7dd;
L_10d9b8da:;
  /* 10d9b8da jmp 0x10d9b92c */
  goto L_10d9b92c;
L_10d9b8dc:;
  /* 10d9b8dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b8de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 10d9b8e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b8e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9b8e8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9b8e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b8ec push eax */
  push32((uint32_t)(EAX));
  /* 10d9b8ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b8f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9b8f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b8f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9b8f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b8fc mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9b903 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 10d9b906 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b907 call dword ptr [0x10dc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0290))), 0x10d9b90du);
  /* 10d9b90d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b90f je 0x10d9b923 */
  if (C.zf) goto L_10d9b923;
  /* 10d9b911 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9b918 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 10d9b91e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d9b921 jmp 0x10d9b92c */
  goto L_10d9b92c;
L_10d9b923:;
  /* 10d9b923 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9b929u);
  /* 10d9b929 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9b92c:;
  /* 10d9b92c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b930 jne 0x10d9b9b6 */
  if (!C.zf) goto L_10d9b9b6;
  /* 10d9b936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b93a je 0x10d9b96a */
  if (C.zf) goto L_10d9b96a;
  /* 10d9b93c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b940 jne 0x10d9b959 */
  if (!C.zf) goto L_10d9b959;
  /* 10d9b942 call 0x10d9acf0 */
  push32(0x10d9b947u); f_10d9acf0();
  /* 10d9b947 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9b94d call 0x10d9ad00 */
  push32(0x10d9b952u); f_10d9ad00();
  /* 10d9b952 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9b955 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d9b957 jmp 0x10d9b965 */
  goto L_10d9b965;
L_10d9b959:;
  /* 10d9b959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9b95c push edx */
  push32((uint32_t)(EDX));
  /* 10d9b95d call 0x10d9ac50 */
  push32(0x10d9b962u); f_10d9ac50();
  /* 10d9b962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9b965:;
  /* 10d9b965 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b968 jmp 0x10d9b9bf */
  goto L_10d9b9bf;
L_10d9b96a:;
  /* 10d9b96a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b96d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9b970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9b973 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9b976 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9b979 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9b980 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d9b985 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b98a je 0x10d9b99b */
  if (C.zf) goto L_10d9b99b;
  /* 10d9b98c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9b98f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9b992 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b995 jne 0x10d9b99b */
  if (!C.zf) goto L_10d9b99b;
  /* 10d9b997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b999 jmp 0x10d9b9bf */
  goto L_10d9b9bf;
L_10d9b99b:;
  /* 10d9b99b call 0x10d9acf0 */
  push32(0x10d9b9a0u); f_10d9acf0();
  /* 10d9b9a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 10d9b9a6 call 0x10d9ad00 */
  push32(0x10d9b9abu); f_10d9ad00();
  /* 10d9b9ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9b9b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b9b4 jmp 0x10d9b9bf */
  goto L_10d9b9bf;
L_10d9b9b6:;
  /* 10d9b9b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9b9b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10d9b9bf:;
  /* 10d9b9bf mov esp, ebp */
  ESP = (EBP);
  /* 10d9b9c1 pop ebp */
  EBP = (pop32());
  /* 10d9b9c2 ret  */
  ESPCHK(0x10d9b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x10d9b9d0 (199 bytes, 68 insns) */
void f_10d9b9d0(void) {
  FTRACE(0x10d9b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9b9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9b9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9b9d5 push esi */
  push32((uint32_t)(ESI));
  /* 10d9b9d6 push edi */
  push32((uint32_t)(EDI));
L_10d9b9d7:;
  /* 10d9b9d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b9db jne 0x10d9b9fb */
  if (!C.zf) goto L_10d9b9fb;
  /* 10d9b9dd push 0x10db9f00 */
  push32((uint32_t)(0x10db9f00u));
  /* 10d9b9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9b9e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d9b9e6 push 0x10db9fd0 */
  push32((uint32_t)(0x10db9fd0u));
  /* 10d9b9eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9b9ed call 0x10d91ee0 */
  push32(0x10d9b9f2u); f_10d91ee0();
  /* 10d9b9f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9b9f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9b9f8 jne 0x10d9b9fb */
  if (!C.zf) goto L_10d9b9fb;
  /* 10d9b9fa int3  */
  x86_unimpl("int3 @ 0x10d9b9fa");
L_10d9b9fb:;
  /* 10d9b9fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9b9fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9b9ff jne 0x10d9b9d7 */
  if (!C.zf) goto L_10d9b9d7;
  /* 10d9ba01 mov ecx, dword ptr [0x10dbe6ac] */
  ECX = (r32((uint32_t)(0x10dbe6ac)));
  /* 10d9ba07 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ba0a mov dword ptr [0x10dbe6ac], ecx */
  w32((uint32_t)(0x10dbe6ac), (ECX));
  /* 10d9ba10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ba13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9ba16 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d9ba18 push 0x10db9fd0 */
  push32((uint32_t)(0x10db9fd0u));
  /* 10d9ba1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ba1f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d9ba24 call 0x10d92e20 */
  push32(0x10d9ba29u); f_10d92e20();
  /* 10d9ba29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ba2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba2f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d9ba32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba35 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ba39 je 0x10d9ba56 */
  if (C.zf) goto L_10d9ba56;
  /* 10d9ba3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba3e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9ba41 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9ba44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba47 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d9ba4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba4d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 10d9ba54 jmp 0x10d9ba7b */
  goto L_10d9ba7b;
L_10d9ba56:;
  /* 10d9ba56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba59 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9ba5c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ba5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba62 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d9ba65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba68 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ba6b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba6e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10d9ba71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba74 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_10d9ba7b:;
  /* 10d9ba7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba81 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d9ba84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d9ba86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ba89 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d9ba90 pop edi */
  EDI = (pop32());
  /* 10d9ba91 pop esi */
  ESI = (pop32());
  /* 10d9ba92 pop ebx */
  EBX = (pop32());
  /* 10d9ba93 mov esp, ebp */
  ESP = (EBP);
  /* 10d9ba95 pop ebp */
  EBP = (pop32());
  /* 10d9ba96 ret  */
  ESPCHK(0x10d9b9d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x10d9baa0 (50 bytes, 17 insns) */
void f_10d9baa0(void) {
  FTRACE(0x10d9baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9baa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9baa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9baa6 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9baac jb 0x10d9bab2 */
  if (C.cf) goto L_10d9bab2;
  /* 10d9baae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9bab0 jmp 0x10d9bad0 */
  goto L_10d9bad0;
L_10d9bab2:;
  /* 10d9bab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bab5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9bab8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9babb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9babe imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9bac1 mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9bac8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9bacd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_10d9bad0:;
  /* 10d9bad0 pop ebp */
  EBP = (pop32());
  /* 10d9bad1 ret  */
  ESPCHK(0x10d9baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae0 @ 0x10d9bae0 (300 bytes, 80 insns) */
void f_10d9bae0(void) {
  FTRACE(0x10d9bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bae1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bae4 cmp dword ptr [0x10dbfb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9baeb jne 0x10d9baf9 */
  if (!C.zf) goto L_10d9baf9;
  /* 10d9baed mov dword ptr [0x10dbfb60], 0x200 */
  w32((uint32_t)(0x10dbfb60), (0x200u));
  /* 10d9baf7 jmp 0x10d9bb0c */
  goto L_10d9bb0c;
L_10d9baf9:;
  /* 10d9baf9 cmp dword ptr [0x10dbfb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bb00 jge 0x10d9bb0c */
  if ((C.sf==C.of)) goto L_10d9bb0c;
  /* 10d9bb02 mov dword ptr [0x10dbfb60], 0x14 */
  w32((uint32_t)(0x10dbfb60), (0x14u));
L_10d9bb0c:;
  /* 10d9bb0c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 10d9bb11 push 0x10db9fdc */
  push32((uint32_t)(0x10db9fdcu));
  /* 10d9bb16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9bb18 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d9bb1a mov eax, dword ptr [0x10dbfb60] */
  EAX = (r32((uint32_t)(0x10dbfb60)));
  /* 10d9bb1f push eax */
  push32((uint32_t)(EAX));
  /* 10d9bb20 call 0x10d93230 */
  push32(0x10d9bb25u); f_10d93230();
  /* 10d9bb25 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bb28 mov dword ptr [0x10dbe820], eax */
  w32((uint32_t)(0x10dbe820), (EAX));
  /* 10d9bb2d cmp dword ptr [0x10dbe820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bb34 jne 0x10d9bb75 */
  if (!C.zf) goto L_10d9bb75;
  /* 10d9bb36 mov dword ptr [0x10dbfb60], 0x14 */
  w32((uint32_t)(0x10dbfb60), (0x14u));
  /* 10d9bb40 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 10d9bb45 push 0x10db9fdc */
  push32((uint32_t)(0x10db9fdcu));
  /* 10d9bb4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9bb4c push 4 */
  push32((uint32_t)(0x4u));
  /* 10d9bb4e mov ecx, dword ptr [0x10dbfb60] */
  ECX = (r32((uint32_t)(0x10dbfb60)));
  /* 10d9bb54 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bb55 call 0x10d93230 */
  push32(0x10d9bb5au); f_10d93230();
  /* 10d9bb5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bb5d mov dword ptr [0x10dbe820], eax */
  w32((uint32_t)(0x10dbe820), (EAX));
  /* 10d9bb62 cmp dword ptr [0x10dbe820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bb69 jne 0x10d9bb75 */
  if (!C.zf) goto L_10d9bb75;
  /* 10d9bb6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d9bb6d call 0x10d91d90 */
  push32(0x10d9bb72u); f_10d91d90();
  /* 10d9bb72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9bb75:;
  /* 10d9bb75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9bb7c jmp 0x10d9bb87 */
  goto L_10d9bb87;
L_10d9bb7e:;
  /* 10d9bb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bb81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bb84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9bb87:;
  /* 10d9bb87 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bb8b jge 0x10d9bba6 */
  if ((C.sf==C.of)) goto L_10d9bba6;
  /* 10d9bb8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bb90 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9bb93 add eax, 0x10dbd120 */
  { uint32_t _a=(EAX),_b=(0x10dbd120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bb98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bb9b mov edx, dword ptr [0x10dbe820] */
  EDX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9bba1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10d9bba4 jmp 0x10d9bb7e */
  goto L_10d9bb7e;
L_10d9bba6:;
  /* 10d9bba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9bbad jmp 0x10d9bbb8 */
  goto L_10d9bbb8;
L_10d9bbaf:;
  /* 10d9bbaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbb2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bbb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9bbb8:;
  /* 10d9bbb8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bbbc jge 0x10d9bc08 */
  if ((C.sf==C.of)) goto L_10d9bc08;
  /* 10d9bbbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbc1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9bbc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbc7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9bbca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9bbcd mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9bbd4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bbd8 je 0x10d9bbf6 */
  if (C.zf) goto L_10d9bbf6;
  /* 10d9bbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbdd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9bbe0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbe3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9bbe6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9bbe9 mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9bbf0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bbf4 jne 0x10d9bc06 */
  if (!C.zf) goto L_10d9bc06;
L_10d9bbf6:;
  /* 10d9bbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9bbf9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9bbfc mov dword ptr [ecx + 0x10dbd130], 0xffffffff */
  w32((uint32_t)(ECX + 0x10dbd130), (0xffffffffu));
L_10d9bc06:;
  /* 10d9bc06 jmp 0x10d9bbaf */
  goto L_10d9bbaf;
L_10d9bc08:;
  /* 10d9bc08 mov esp, ebp */
  ESP = (EBP);
  /* 10d9bc0a pop ebp */
  EBP = (pop32());
  /* 10d9bc0b ret  */
  ESPCHK(0x10d9bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc10 @ 0x10d9bc10 (26 bytes, 9 insns) */
void f_10d9bc10(void) {
  FTRACE(0x10d9bc10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bc10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bc11 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bc13 call 0x10d9c810 */
  push32(0x10d9bc18u); f_10d9c810();
  /* 10d9bc18 movsx eax, byte ptr [0x10dbe4c4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10dbe4c4))));
  /* 10d9bc1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9bc21 je 0x10d9bc28 */
  if (C.zf) goto L_10d9bc28;
  /* 10d9bc23 call 0x10d9c5d0 */
  push32(0x10d9bc28u); f_10d9c5d0();
L_10d9bc28:;
  /* 10d9bc28 pop ebp */
  EBP = (pop32());
  /* 10d9bc29 ret  */
  ESPCHK(0x10d9bc10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x10d9bc30 (61 bytes, 20 insns) */
void f_10d9bc30(void) {
  FTRACE(0x10d9bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bc31 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bc33 cmp dword ptr [ebp + 8], 0x10dbd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dbd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bc3a jb 0x10d9bc5e */
  if (C.cf) goto L_10d9bc5e;
  /* 10d9bc3c cmp dword ptr [ebp + 8], 0x10dbd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dbd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bc43 ja 0x10d9bc5e */
  if ((!C.cf&&!C.zf)) goto L_10d9bc5e;
  /* 10d9bc45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bc48 sub eax, 0x10dbd120 */
  { uint32_t _a=(EAX),_b=(0x10dbd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9bc4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9bc50 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc53 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bc54 call 0x10d96820 */
  push32(0x10d9bc59u); f_10d96820();
  /* 10d9bc59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc5c jmp 0x10d9bc6b */
  goto L_10d9bc6b;
L_10d9bc5e:;
  /* 10d9bc5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bc61 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc64 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bc65 call dword ptr [0x10dc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0320))), 0x10d9bc6bu);
L_10d9bc6b:;
  /* 10d9bc6b pop ebp */
  EBP = (pop32());
  /* 10d9bc6c ret  */
  ESPCHK(0x10d9bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc70 @ 0x10d9bc70 (41 bytes, 16 insns) */
void f_10d9bc70(void) {
  FTRACE(0x10d9bc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bc70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bc71 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bc73 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bc77 jge 0x10d9bc8a */
  if ((C.sf==C.of)) goto L_10d9bc8a;
  /* 10d9bc79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bc7c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc7f push eax */
  push32((uint32_t)(EAX));
  /* 10d9bc80 call 0x10d96820 */
  push32(0x10d9bc85u); f_10d96820();
  /* 10d9bc85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc88 jmp 0x10d9bc97 */
  goto L_10d9bc97;
L_10d9bc8a:;
  /* 10d9bc8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9bc8d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bc90 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bc91 call dword ptr [0x10dc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0320))), 0x10d9bc97u);
L_10d9bc97:;
  /* 10d9bc97 pop ebp */
  EBP = (pop32());
  /* 10d9bc98 ret  */
  ESPCHK(0x10d9bc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bca0 @ 0x10d9bca0 (61 bytes, 20 insns) */
void f_10d9bca0(void) {
  FTRACE(0x10d9bca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bca1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bca3 cmp dword ptr [ebp + 8], 0x10dbd120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dbd120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bcaa jb 0x10d9bcce */
  if (C.cf) goto L_10d9bcce;
  /* 10d9bcac cmp dword ptr [ebp + 8], 0x10dbd380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10dbd380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bcb3 ja 0x10d9bcce */
  if ((!C.cf&&!C.zf)) goto L_10d9bcce;
  /* 10d9bcb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bcb8 sub eax, 0x10dbd120 */
  { uint32_t _a=(EAX),_b=(0x10dbd120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9bcbd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9bcc0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bcc3 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bcc4 call 0x10d968c0 */
  push32(0x10d9bcc9u); f_10d968c0();
  /* 10d9bcc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bccc jmp 0x10d9bcdb */
  goto L_10d9bcdb;
L_10d9bcce:;
  /* 10d9bcce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bcd1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bcd4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bcd5 call dword ptr [0x10dc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0324))), 0x10d9bcdbu);
L_10d9bcdb:;
  /* 10d9bcdb pop ebp */
  EBP = (pop32());
  /* 10d9bcdc ret  */
  ESPCHK(0x10d9bca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x10d9bce0 (41 bytes, 16 insns) */
void f_10d9bce0(void) {
  FTRACE(0x10d9bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bce1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bce3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bce7 jge 0x10d9bcfa */
  if ((C.sf==C.of)) goto L_10d9bcfa;
  /* 10d9bce9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bcec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bcef push eax */
  push32((uint32_t)(EAX));
  /* 10d9bcf0 call 0x10d968c0 */
  push32(0x10d9bcf5u); f_10d968c0();
  /* 10d9bcf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bcf8 jmp 0x10d9bd07 */
  goto L_10d9bd07;
L_10d9bcfa:;
  /* 10d9bcfa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9bcfd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bd00 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bd01 call dword ptr [0x10dc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0324))), 0x10d9bd07u);
L_10d9bd07:;
  /* 10d9bd07 pop ebp */
  EBP = (pop32());
  /* 10d9bd08 ret  */
  ESPCHK(0x10d9bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x10d9bd10 (119 bytes, 34 insns) */
void f_10d9bd10(void) {
  FTRACE(0x10d9bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bd11 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bd13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9bd16 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10d9bd1b call dword ptr [0x10dc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a4))), 0x10d9bd21u);
  /* 10d9bd21 cmp dword ptr [0x10dbe80c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe80c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bd28 je 0x10d9bd48 */
  if (C.zf) goto L_10d9bd48;
  /* 10d9bd2a push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10d9bd2f call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d9bd35u);
  /* 10d9bd35 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9bd37 call 0x10d96820 */
  push32(0x10d9bd3cu); f_10d96820();
  /* 10d9bd3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bd3f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d9bd46 jmp 0x10d9bd4f */
  goto L_10d9bd4f;
L_10d9bd48:;
  /* 10d9bd48 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d9bd4f:;
  /* 10d9bd4f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 10d9bd53 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bd54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bd57 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bd58 call 0x10d9bd90 */
  push32(0x10d9bd5du); f_10d9bd90();
  /* 10d9bd5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bd60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9bd63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bd67 je 0x10d9bd75 */
  if (C.zf) goto L_10d9bd75;
  /* 10d9bd69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9bd6b call 0x10d968c0 */
  push32(0x10d9bd70u); f_10d968c0();
  /* 10d9bd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bd73 jmp 0x10d9bd80 */
  goto L_10d9bd80;
L_10d9bd75:;
  /* 10d9bd75 push 0x10dbe81c */
  push32((uint32_t)(0x10dbe81cu));
  /* 10d9bd7a call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d9bd80u);
L_10d9bd80:;
  /* 10d9bd80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9bd83 mov esp, ebp */
  ESP = (EBP);
  /* 10d9bd85 pop ebp */
  EBP = (pop32());
  /* 10d9bd86 ret  */
  ESPCHK(0x10d9bd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd90 @ 0x10d9bd90 (160 bytes, 50 insns) */
void f_10d9bd90(void) {
  FTRACE(0x10d9bd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bd90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bd91 mov ebp, esp */
  EBP = (ESP);
  /* 10d9bd93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9bd96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bd9a jne 0x10d9bda3 */
  if (!C.zf) goto L_10d9bda3;
  /* 10d9bd9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9bd9e jmp 0x10d9be2c */
  goto L_10d9be2c;
L_10d9bda3:;
  /* 10d9bda3 cmp dword ptr [0x10dbe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bdaa jne 0x10d9bdda */
  if (!C.zf) goto L_10d9bdda;
  /* 10d9bdac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9bdaf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9bdb4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bdb9 jle 0x10d9bdcb */
  if ((C.zf||C.sf!=C.of)) goto L_10d9bdcb;
  /* 10d9bdbb call 0x10d9acf0 */
  push32(0x10d9bdc0u); f_10d9acf0();
  /* 10d9bdc0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d9bdc6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9bdc9 jmp 0x10d9be2c */
  goto L_10d9be2c;
L_10d9bdcb:;
  /* 10d9bdcb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bdce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 10d9bdd1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 10d9bdd3 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9bdd8 jmp 0x10d9be2c */
  goto L_10d9be2c;
L_10d9bdda:;
  /* 10d9bdda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9bde1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d9bde4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bde5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9bde7 mov ecx, dword ptr [0x10dbcea4] */
  ECX = (r32((uint32_t)(0x10dbcea4)));
  /* 10d9bded push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bdee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bdf1 push edx */
  push32((uint32_t)(EDX));
  /* 10d9bdf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9bdf4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 10d9bdf7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bdf8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10d9bdfd mov ecx, dword ptr [0x10dbe6a0] */
  ECX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d9be03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9be04 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10d9be0au);
  /* 10d9be0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9be0d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9be11 je 0x10d9be19 */
  if (C.zf) goto L_10d9be19;
  /* 10d9be13 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9be17 je 0x10d9be29 */
  if (C.zf) goto L_10d9be29;
L_10d9be19:;
  /* 10d9be19 call 0x10d9acf0 */
  push32(0x10d9be1eu); f_10d9acf0();
  /* 10d9be1e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 10d9be24 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9be27 jmp 0x10d9be2c */
  goto L_10d9be2c;
L_10d9be29:;
  /* 10d9be29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9be2c:;
  /* 10d9be2c mov esp, ebp */
  ESP = (EBP);
  /* 10d9be2e pop ebp */
  EBP = (pop32());
  /* 10d9be2f ret  */
  ESPCHK(0x10d9bd90u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10d9be30 (32 bytes, 18 insns) */
void f_10d9be30(void) {
  FTRACE(0x10d9be30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9be30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9be31 mov ebp, esp */
  EBP = (ESP);
  /* 10d9be33 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9be34 push esi */
  push32((uint32_t)(ESI));
  /* 10d9be35 push edi */
  push32((uint32_t)(EDI));
  /* 10d9be36 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9be37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9be39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9be3b push 0x10d9be48 */
  push32((uint32_t)(0x10d9be48u));
  /* 10d9be40 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10d9be43 call 0x10da357c */
  push32(0x10d9be48u); f_10da357c();
  /* 10d9be48 pop ebp */
  EBP = (pop32());
  /* 10d9be49 pop edi */
  EDI = (pop32());
  /* 10d9be4a pop esi */
  ESI = (pop32());
  /* 10d9be4b pop ebx */
  EBX = (pop32());
  /* 10d9be4c mov esp, ebp */
  ESP = (EBP);
  /* 10d9be4e pop ebp */
  EBP = (pop32());
  /* 10d9be4f ret  */
  ESPCHK(0x10d9be30u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x10d9be72 (104 bytes, 33 insns) */
void f_10d9be72(void) {
  FTRACE(0x10d9be72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9be72 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9be73 push esi */
  push32((uint32_t)(ESI));
  /* 10d9be74 push edi */
  push32((uint32_t)(EDI));
  /* 10d9be75 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d9be79 push eax */
  push32((uint32_t)(EAX));
  /* 10d9be7a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 10d9be7c push 0x10d9be50 */
  push32((uint32_t)(0x10d9be50u));
  /* 10d9be81 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 10d9be88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_10d9be8f:;
  /* 10d9be8f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 10d9be93 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9be96 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9be99 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9be9c je 0x10d9becc */
  if (C.zf) goto L_10d9becc;
  /* 10d9be9e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9bea2 je 0x10d9becc */
  if (C.zf) goto L_10d9becc;
  /* 10d9bea4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 10d9bea7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 10d9beaa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 10d9beae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10d9beb1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9beb6 jne 0x10d9beca */
  if (!C.zf) goto L_10d9beca;
  /* 10d9beb8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d9bebd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 10d9bec1 call 0x10d9bf06 */
  push32(0x10d9bec6u); f_10d9bf06();
  /* 10d9bec6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10d9becau);
L_10d9beca:;
  /* 10d9beca jmp 0x10d9be8f */
  goto L_10d9be8f;
L_10d9becc:;
  /* 10d9becc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 10d9bed3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bed6 pop edi */
  EDI = (pop32());
  /* 10d9bed7 pop esi */
  ESI = (pop32());
  /* 10d9bed8 pop ebx */
  EBX = (pop32());
  /* 10d9bed9 ret  */
  ESPCHK(0x10d9be72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf06 @ 0x10d9bf06 (24 bytes, 10 insns) */
void f_10d9bf06(void) {
  FTRACE(0x10d9bf06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bf06 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9bf07 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9bf08 mov ebx, 0x10dbd3b8 */
  EBX = (0x10dbd3b8u);
  /* 10d9bf0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9bf10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 10d9bf13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 10d9bf16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10d9bf19 pop ecx */
  ECX = (pop32());
  /* 10d9bf1a pop ebx */
  EBX = (pop32());
  /* 10d9bf1b ret 4 */
  ESPCHK(0x10d9bf06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bfe5 @ 0x10d9bfe5 (27 bytes, 11 insns) */
void f_10d9bfe5(void) {
  FTRACE(0x10d9bfe5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9bfe5 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9bfe6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d9bfea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10d9bfec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10d9bfef push eax */
  push32((uint32_t)(EAX));
  /* 10d9bff0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d9bff3 push eax */
  push32((uint32_t)(EAX));
  /* 10d9bff4 call 0x10d9be72 */
  push32(0x10d9bff9u); f_10d9be72();
  /* 10d9bff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9bffc pop ebp */
  EBP = (pop32());
  /* 10d9bffd ret 4 */
  ESPCHK(0x10d9bfe5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c000 @ 0x10d9c000 (482 bytes, 138 insns) */
void f_10d9c000(void) {
  FTRACE(0x10d9c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c000 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c001 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c003 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c006 push esi */
  push32((uint32_t)(ESI));
  /* 10d9c007 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 10d9c00e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d9c010 call 0x10d96820 */
  push32(0x10d9c015u); f_10d96820();
  /* 10d9c015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c018 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9c01f jmp 0x10d9c02a */
  goto L_10d9c02a;
L_10d9c021:;
  /* 10d9c021 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c024 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c027 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9c02a:;
  /* 10d9c02a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c02e jge 0x10d9c1d0 */
  if ((C.sf==C.of)) goto L_10d9c1d0;
  /* 10d9c034 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c037 cmp dword ptr [ecx*4 + 0x10dbfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dbfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c03f je 0x10d9c136 */
  if (C.zf) goto L_10d9c136;
  /* 10d9c045 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c048 mov eax, dword ptr [edx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9c04f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9c052 jmp 0x10d9c05d */
  goto L_10d9c05d;
L_10d9c054:;
  /* 10d9c054 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c057 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c05a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9c05d:;
  /* 10d9c05d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c060 mov eax, dword ptr [edx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9c067 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c06c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c06f jae 0x10d9c126 */
  if (!C.cf) goto L_10d9c126;
  /* 10d9c075 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c078 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d9c07c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c07f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c081 jne 0x10d9c121 */
  if (!C.zf) goto L_10d9c121;
  /* 10d9c087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c08a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c08e jne 0x10d9c0c9 */
  if (!C.zf) goto L_10d9c0c9;
  /* 10d9c090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9c092 call 0x10d96820 */
  push32(0x10d9c097u); f_10d96820();
  /* 10d9c097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c09a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c09d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c0a1 jne 0x10d9c0bf */
  if (!C.zf) goto L_10d9c0bf;
  /* 10d9c0a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0a6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c0a9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c0aa call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d9c0b0u);
  /* 10d9c0b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9c0b6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c0b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d9c0bf:;
  /* 10d9c0bf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9c0c1 call 0x10d968c0 */
  push32(0x10d9c0c6u); f_10d968c0();
  /* 10d9c0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9c0c9:;
  /* 10d9c0c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0cc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c0cf push eax */
  push32((uint32_t)(EAX));
  /* 10d9c0d0 call dword ptr [0x10dc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0320))), 0x10d9c0d6u);
  /* 10d9c0d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0d9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10d9c0dd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c0e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c0e2 je 0x10d9c0f6 */
  if (C.zf) goto L_10d9c0f6;
  /* 10d9c0e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0e7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c0ea push eax */
  push32((uint32_t)(EAX));
  /* 10d9c0eb call dword ptr [0x10dc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0324))), 0x10d9c0f1u);
  /* 10d9c0f1 jmp 0x10d9c054 */
  goto L_10d9c054;
L_10d9c0f6:;
  /* 10d9c0f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c0f9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d9c0ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c102 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9c105 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c10b sub eax, dword ptr [edx*4 + 0x10dbfe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10dbfe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c112 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9c113 mov esi, 0x24 */
  ESI = (0x24u);
  /* 10d9c118 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d9c11a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c11c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9c11f jmp 0x10d9c126 */
  goto L_10d9c126;
L_10d9c121:;
  /* 10d9c121 jmp 0x10d9c054 */
  goto L_10d9c054;
L_10d9c126:;
  /* 10d9c126 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c12a je 0x10d9c131 */
  if (C.zf) goto L_10d9c131;
  /* 10d9c12c jmp 0x10d9c1d0 */
  goto L_10d9c1d0;
L_10d9c131:;
  /* 10d9c131 jmp 0x10d9c1cb */
  goto L_10d9c1cb;
L_10d9c136:;
  /* 10d9c136 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d9c138 push 0x10db9fe4 */
  push32((uint32_t)(0x10db9fe4u));
  /* 10d9c13d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c13f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d9c144 call 0x10d92e20 */
  push32(0x10d9c149u); f_10d92e20();
  /* 10d9c149 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c14c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9c14f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c153 je 0x10d9c1c9 */
  if (C.zf) goto L_10d9c1c9;
  /* 10d9c155 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c15b mov dword ptr [eax*4 + 0x10dbfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x10dbfe60), (ECX));
  /* 10d9c162 mov edx, dword ptr [0x10dbff9c] */
  EDX = (r32((uint32_t)(0x10dbff9c)));
  /* 10d9c168 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c16b mov dword ptr [0x10dbff9c], edx */
  w32((uint32_t)(0x10dbff9c), (EDX));
  /* 10d9c171 jmp 0x10d9c17c */
  goto L_10d9c17c;
L_10d9c173:;
  /* 10d9c173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c176 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9c17c:;
  /* 10d9c17c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c17f mov edx, dword ptr [ecx*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9c186 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c18c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c18f jae 0x10d9c1b4 */
  if (!C.cf) goto L_10d9c1b4;
  /* 10d9c191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c194 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d9c198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c19b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d9c1a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c1a4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d9c1a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c1ab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d9c1b2 jmp 0x10d9c173 */
  goto L_10d9c173;
L_10d9c1b4:;
  /* 10d9c1b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c1b7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9c1ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9c1bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c1c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c1c1 call 0x10d9c510 */
  push32(0x10d9c1c6u); f_10d9c510();
  /* 10d9c1c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9c1c9:;
  /* 10d9c1c9 jmp 0x10d9c1d0 */
  goto L_10d9c1d0;
L_10d9c1cb:;
  /* 10d9c1cb jmp 0x10d9c021 */
  goto L_10d9c021;
L_10d9c1d0:;
  /* 10d9c1d0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10d9c1d2 call 0x10d968c0 */
  push32(0x10d9c1d7u); f_10d968c0();
  /* 10d9c1d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c1da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c1dd pop esi */
  ESI = (pop32());
  /* 10d9c1de mov esp, ebp */
  ESP = (EBP);
  /* 10d9c1e0 pop ebp */
  EBP = (pop32());
  /* 10d9c1e1 ret  */
  ESPCHK(0x10d9c000u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x10d9c1f0 (183 bytes, 57 insns) */
void f_10d9c1f0(void) {
  FTRACE(0x10d9c1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c1f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c1f7 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c1fd jae 0x10d9c28a */
  if (!C.cf) goto L_10d9c28a;
  /* 10d9c203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c206 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9c209 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c20c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c20f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c212 mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9c219 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c21d jne 0x10d9c28a */
  if (!C.zf) goto L_10d9c28a;
  /* 10d9c21f cmp dword ptr [0x10dbe484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c226 jne 0x10d9c26a */
  if (!C.zf) goto L_10d9c26a;
  /* 10d9c228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c22b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9c22e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c232 je 0x10d9c242 */
  if (C.zf) goto L_10d9c242;
  /* 10d9c234 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c238 je 0x10d9c250 */
  if (C.zf) goto L_10d9c250;
  /* 10d9c23a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c23e je 0x10d9c25e */
  if (C.zf) goto L_10d9c25e;
  /* 10d9c240 jmp 0x10d9c26a */
  goto L_10d9c26a;
L_10d9c242:;
  /* 10d9c242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c245 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c246 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d9c248 call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c24eu);
  /* 10d9c24e jmp 0x10d9c26a */
  goto L_10d9c26a;
L_10d9c250:;
  /* 10d9c250 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c253 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c254 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d9c256 call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c25cu);
  /* 10d9c25c jmp 0x10d9c26a */
  goto L_10d9c26a;
L_10d9c25e:;
  /* 10d9c25e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c261 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c262 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d9c264 call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c26au);
L_10d9c26a:;
  /* 10d9c26a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c26d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d9c270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c273 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c276 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c279 mov ecx, dword ptr [edx*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9c280 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c283 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 10d9c286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c288 jmp 0x10d9c2a3 */
  goto L_10d9c2a3;
L_10d9c28a:;
  /* 10d9c28a call 0x10d9acf0 */
  push32(0x10d9c28fu); f_10d9acf0();
  /* 10d9c28f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9c295 call 0x10d9ad00 */
  push32(0x10d9c29au); f_10d9ad00();
  /* 10d9c29a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9c2a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d9c2a3:;
  /* 10d9c2a3 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c2a5 pop ebp */
  EBP = (pop32());
  /* 10d9c2a6 ret  */
  ESPCHK(0x10d9c1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x10d9c2b0 (216 bytes, 63 insns) */
void f_10d9c2b0(void) {
  FTRACE(0x10d9c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c2b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c2b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c2b7 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c2bd jae 0x10d9c36b */
  if (!C.cf) goto L_10d9c36b;
  /* 10d9c2c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c2c6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9c2c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c2cc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c2cf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c2d2 mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9c2d9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9c2de and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c2e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c2e3 je 0x10d9c36b */
  if (C.zf) goto L_10d9c36b;
  /* 10d9c2e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c2ec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d9c2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c2f2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c2f5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c2f8 mov ecx, dword ptr [edx*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9c2ff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c303 je 0x10d9c36b */
  if (C.zf) goto L_10d9c36b;
  /* 10d9c305 cmp dword ptr [0x10dbe484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c30c jne 0x10d9c34a */
  if (!C.zf) goto L_10d9c34a;
  /* 10d9c30e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c311 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9c314 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c318 je 0x10d9c328 */
  if (C.zf) goto L_10d9c328;
  /* 10d9c31a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c31e je 0x10d9c334 */
  if (C.zf) goto L_10d9c334;
  /* 10d9c320 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c324 je 0x10d9c340 */
  if (C.zf) goto L_10d9c340;
  /* 10d9c326 jmp 0x10d9c34a */
  goto L_10d9c34a;
L_10d9c328:;
  /* 10d9c328 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9c32a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 10d9c32c call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c332u);
  /* 10d9c332 jmp 0x10d9c34a */
  goto L_10d9c34a;
L_10d9c334:;
  /* 10d9c334 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9c336 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d9c338 call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c33eu);
  /* 10d9c33e jmp 0x10d9c34a */
  goto L_10d9c34a;
L_10d9c340:;
  /* 10d9c340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9c342 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d9c344 call dword ptr [0x10dc02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f0))), 0x10d9c34au);
L_10d9c34a:;
  /* 10d9c34a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c34d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9c350 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c353 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c356 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c359 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9c360 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 10d9c367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c369 jmp 0x10d9c384 */
  goto L_10d9c384;
L_10d9c36b:;
  /* 10d9c36b call 0x10d9acf0 */
  push32(0x10d9c370u); f_10d9acf0();
  /* 10d9c370 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9c376 call 0x10d9ad00 */
  push32(0x10d9c37bu); f_10d9ad00();
  /* 10d9c37b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9c381 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d9c384:;
  /* 10d9c384 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c386 pop ebp */
  EBP = (pop32());
  /* 10d9c387 ret  */
  ESPCHK(0x10d9c2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c390 @ 0x10d9c390 (102 bytes, 30 insns) */
void f_10d9c390(void) {
  FTRACE(0x10d9c390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c390 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c391 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c396 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c39c jae 0x10d9c3db */
  if (!C.cf) goto L_10d9c3db;
  /* 10d9c39e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c3a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9c3a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c3a7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c3aa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c3ad mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9c3b4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9c3b9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c3bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c3be je 0x10d9c3db */
  if (C.zf) goto L_10d9c3db;
  /* 10d9c3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c3c3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 10d9c3c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c3c9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c3cc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c3cf mov ecx, dword ptr [edx*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d9c3d6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 10d9c3d9 jmp 0x10d9c3f4 */
  goto L_10d9c3f4;
L_10d9c3db:;
  /* 10d9c3db call 0x10d9acf0 */
  push32(0x10d9c3e0u); f_10d9acf0();
  /* 10d9c3e0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9c3e6 call 0x10d9ad00 */
  push32(0x10d9c3ebu); f_10d9ad00();
  /* 10d9c3eb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9c3f1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d9c3f4:;
  /* 10d9c3f4 pop ebp */
  EBP = (pop32());
  /* 10d9c3f5 ret  */
  ESPCHK(0x10d9c390u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x10d9c400 (260 bytes, 83 insns) */
void f_10d9c400(void) {
  FTRACE(0x10d9c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c400 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c401 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c403 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c406 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9c40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c40d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9c412 je 0x10d9c41d */
  if (C.zf) goto L_10d9c41d;
  /* 10d9c414 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c417 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10d9c41a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_10d9c41d:;
  /* 10d9c41d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c420 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c428 je 0x10d9c432 */
  if (C.zf) goto L_10d9c432;
  /* 10d9c42a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c42d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 10d9c42f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10d9c432:;
  /* 10d9c432 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c435 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c43b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c43d je 0x10d9c448 */
  if (C.zf) goto L_10d9c448;
  /* 10d9c43f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c442 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 10d9c445 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d9c448:;
  /* 10d9c448 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c44b push eax */
  push32((uint32_t)(EAX));
  /* 10d9c44c call dword ptr [0x10dc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02dc))), 0x10d9c452u);
  /* 10d9c452 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9c455 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c459 jne 0x10d9c472 */
  if (!C.zf) goto L_10d9c472;
  /* 10d9c45b call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9c461u);
  /* 10d9c461 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c462 call 0x10d9ac50 */
  push32(0x10d9c467u); f_10d9ac50();
  /* 10d9c467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c46a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c46d jmp 0x10d9c500 */
  goto L_10d9c500;
L_10d9c472:;
  /* 10d9c472 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c476 jne 0x10d9c483 */
  if (!C.zf) goto L_10d9c483;
  /* 10d9c478 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c47b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d9c47e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 10d9c481 jmp 0x10d9c492 */
  goto L_10d9c492;
L_10d9c483:;
  /* 10d9c483 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c487 jne 0x10d9c492 */
  if (!C.zf) goto L_10d9c492;
  /* 10d9c489 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c48c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 10d9c48f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_10d9c492:;
  /* 10d9c492 call 0x10d9c000 */
  push32(0x10d9c497u); f_10d9c000();
  /* 10d9c497 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9c49a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c49e jne 0x10d9c4bb */
  if (!C.zf) goto L_10d9c4bb;
  /* 10d9c4a0 call 0x10d9acf0 */
  push32(0x10d9c4a5u); f_10d9acf0();
  /* 10d9c4a5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 10d9c4ab call 0x10d9ad00 */
  push32(0x10d9c4b0u); f_10d9ad00();
  /* 10d9c4b0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9c4b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c4b9 jmp 0x10d9c500 */
  goto L_10d9c500;
L_10d9c4bb:;
  /* 10d9c4bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c4be push eax */
  push32((uint32_t)(EAX));
  /* 10d9c4bf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c4c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c4c3 call 0x10d9c1f0 */
  push32(0x10d9c4c8u); f_10d9c1f0();
  /* 10d9c4c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c4cb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c4ce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 10d9c4d1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d9c4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c4d7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9c4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c4dd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c4e0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c4e3 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9c4ea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10d9c4ed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 10d9c4f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c4f4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c4f5 call 0x10d9c5a0 */
  push32(0x10d9c4fau); f_10d9c5a0();
  /* 10d9c4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c4fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9c500:;
  /* 10d9c500 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c502 pop ebp */
  EBP = (pop32());
  /* 10d9c503 ret  */
  ESPCHK(0x10d9c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x10d9c510 (134 bytes, 44 insns) */
void f_10d9c510(void) {
  FTRACE(0x10d9c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c510 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c511 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c513 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c517 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9c51a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c51d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c520 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c523 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9c52a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c52c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9c52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c532 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c536 jne 0x10d9c571 */
  if (!C.zf) goto L_10d9c571;
  /* 10d9c538 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9c53a call 0x10d96820 */
  push32(0x10d9c53fu); f_10d96820();
  /* 10d9c53f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c545 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c549 jne 0x10d9c567 */
  if (!C.zf) goto L_10d9c567;
  /* 10d9c54b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c54e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c551 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c552 call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d9c558u);
  /* 10d9c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c55b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9c55e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c564 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_10d9c567:;
  /* 10d9c567 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9c569 call 0x10d968c0 */
  push32(0x10d9c56eu); f_10d968c0();
  /* 10d9c56e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9c571:;
  /* 10d9c571 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c574 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9c577 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c57a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c57d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c580 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9c587 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d9c58b push eax */
  push32((uint32_t)(EAX));
  /* 10d9c58c call dword ptr [0x10dc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0320))), 0x10d9c592u);
  /* 10d9c592 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c594 pop ebp */
  EBP = (pop32());
  /* 10d9c595 ret  */
  ESPCHK(0x10d9c510u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x10d9c5a0 (38 bytes, 13 insns) */
void f_10d9c5a0(void) {
  FTRACE(0x10d9c5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c5a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c5a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9c5a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c5ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c5af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c5b2 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9c5b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 10d9c5bd push eax */
  push32((uint32_t)(EAX));
  /* 10d9c5be call dword ptr [0x10dc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0324))), 0x10d9c5c4u);
  /* 10d9c5c4 pop ebp */
  EBP = (pop32());
  /* 10d9c5c5 ret  */
  ESPCHK(0x10d9c5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5d0 @ 0x10d9c5d0 (218 bytes, 63 insns) */
void f_10d9c5d0(void) {
  FTRACE(0x10d9c5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c5d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c5d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9c5dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c5df call 0x10d96820 */
  push32(0x10d9c5e4u); f_10d96820();
  /* 10d9c5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c5e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 10d9c5ee jmp 0x10d9c5f9 */
  goto L_10d9c5f9;
L_10d9c5f0:;
  /* 10d9c5f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c5f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c5f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9c5f9:;
  /* 10d9c5f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c5fc cmp ecx, dword ptr [0x10dbfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c602 jge 0x10d9c699 */
  if ((C.sf==C.of)) goto L_10d9c699;
  /* 10d9c608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c60b mov eax, dword ptr [0x10dbe820] */
  EAX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c610 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c614 je 0x10d9c694 */
  if (C.zf) goto L_10d9c694;
  /* 10d9c616 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c619 mov edx, dword ptr [0x10dbe820] */
  EDX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c61f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d9c622 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9c625 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c62b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c62d je 0x10d9c651 */
  if (C.zf) goto L_10d9c651;
  /* 10d9c62f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c632 mov eax, dword ptr [0x10dbe820] */
  EAX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c637 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9c63a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c63b call 0x10d9d3c0 */
  push32(0x10d9c640u); f_10d9d3c0();
  /* 10d9c640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c643 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c646 je 0x10d9c651 */
  if (C.zf) goto L_10d9c651;
  /* 10d9c648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c64b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c64e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9c651:;
  /* 10d9c651 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c655 jl 0x10d9c694 */
  if ((C.sf!=C.of)) goto L_10d9c694;
  /* 10d9c657 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c65a mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c660 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9c663 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c666 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c667 call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d9c66du);
  /* 10d9c66d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c66f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c672 mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c678 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9c67b push edx */
  push32((uint32_t)(EDX));
  /* 10d9c67c call 0x10d938b0 */
  push32(0x10d9c681u); f_10d938b0();
  /* 10d9c681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c684 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c687 mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c68d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_10d9c694:;
  /* 10d9c694 jmp 0x10d9c5f0 */
  goto L_10d9c5f0;
L_10d9c699:;
  /* 10d9c699 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c69b call 0x10d968c0 */
  push32(0x10d9c6a0u); f_10d968c0();
  /* 10d9c6a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c6a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c6a6 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c6a8 pop ebp */
  EBP = (pop32());
  /* 10d9c6a9 ret  */
  ESPCHK(0x10d9c5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6b0 @ 0x10d9c6b0 (68 bytes, 26 insns) */
void f_10d9c6b0(void) {
  FTRACE(0x10d9c6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c6b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c6b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c6b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c6b8 jne 0x10d9c6c6 */
  if (!C.zf) goto L_10d9c6c6;
  /* 10d9c6ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9c6bc call 0x10d9c820 */
  push32(0x10d9c6c1u); f_10d9c820();
  /* 10d9c6c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c6c4 jmp 0x10d9c6f0 */
  goto L_10d9c6f0;
L_10d9c6c6:;
  /* 10d9c6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c6c9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c6ca call 0x10d9bc30 */
  push32(0x10d9c6cfu); f_10d9bc30();
  /* 10d9c6cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c6d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c6d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c6d6 call 0x10d9c700 */
  push32(0x10d9c6dbu); f_10d9c700();
  /* 10d9c6db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c6de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9c6e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c6e4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c6e5 call 0x10d9bca0 */
  push32(0x10d9c6eau); f_10d9bca0();
  /* 10d9c6ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c6ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9c6f0:;
  /* 10d9c6f0 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c6f2 pop ebp */
  EBP = (pop32());
  /* 10d9c6f3 ret  */
  ESPCHK(0x10d9c6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x10d9c700 (65 bytes, 26 insns) */
void f_10d9c700(void) {
  FTRACE(0x10d9c700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c701 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c706 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c707 call 0x10d9c750 */
  push32(0x10d9c70cu); f_10d9c750();
  /* 10d9c70c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9c711 je 0x10d9c718 */
  if (C.zf) goto L_10d9c718;
  /* 10d9c713 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c716 jmp 0x10d9c73f */
  goto L_10d9c73f;
L_10d9c718:;
  /* 10d9c718 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c71b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9c71e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c724 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c726 je 0x10d9c73d */
  if (C.zf) goto L_10d9c73d;
  /* 10d9c728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c72b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9c72e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c72f call 0x10d9d510 */
  push32(0x10d9c734u); f_10d9d510();
  /* 10d9c734 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c737 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9c739 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c73b jmp 0x10d9c73f */
  goto L_10d9c73f;
L_10d9c73d:;
  /* 10d9c73d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9c73f:;
  /* 10d9c73f pop ebp */
  EBP = (pop32());
  /* 10d9c740 ret  */
  ESPCHK(0x10d9c700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x10d9c750 (183 bytes, 62 insns) */
void f_10d9c750(void) {
  FTRACE(0x10d9c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c750 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c751 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9c75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c760 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9c763 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c766 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9c769 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c76c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c76f jne 0x10d9c7eb */
  if (!C.zf) goto L_10d9c7eb;
  /* 10d9c771 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c774 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9c777 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c77d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c77f je 0x10d9c7eb */
  if (C.zf) goto L_10d9c7eb;
  /* 10d9c781 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c784 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c787 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10d9c789 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c78c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9c78f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c793 jle 0x10d9c7eb */
  if ((C.zf||C.sf!=C.of)) goto L_10d9c7eb;
  /* 10d9c795 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c798 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c79c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9c79f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c7a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d9c7a6 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c7a7 call 0x10d9b6c0 */
  push32(0x10d9c7acu); f_10d9b6c0();
  /* 10d9c7ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c7af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c7b2 jne 0x10d9c7d5 */
  if (!C.zf) goto L_10d9c7d5;
  /* 10d9c7b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9c7ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c7c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c7c2 je 0x10d9c7d3 */
  if (C.zf) goto L_10d9c7d3;
  /* 10d9c7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9c7ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c7cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_10d9c7d3:;
  /* 10d9c7d3 jmp 0x10d9c7eb */
  goto L_10d9c7eb;
L_10d9c7d5:;
  /* 10d9c7d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9c7db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c7de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 10d9c7e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9c7eb:;
  /* 10d9c7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d9c7f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d9c7f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9c7f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d9c800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c803 mov esp, ebp */
  ESP = (EBP);
  /* 10d9c805 pop ebp */
  EBP = (pop32());
  /* 10d9c806 ret  */
  ESPCHK(0x10d9c750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x10d9c810 (15 bytes, 7 insns) */
void f_10d9c810(void) {
  FTRACE(0x10d9c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c810 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c811 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c813 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9c815 call 0x10d9c820 */
  push32(0x10d9c81au); f_10d9c820();
  /* 10d9c81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c81d pop ebp */
  EBP = (pop32());
  /* 10d9c81e ret  */
  ESPCHK(0x10d9c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x10d9c820 (319 bytes, 94 insns) */
void f_10d9c820(void) {
  FTRACE(0x10d9c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c820 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c821 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c823 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9c82d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9c834 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c836 call 0x10d96820 */
  push32(0x10d9c83bu); f_10d96820();
  /* 10d9c83b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c83e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9c845 jmp 0x10d9c850 */
  goto L_10d9c850;
L_10d9c847:;
  /* 10d9c847 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c84a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9c850:;
  /* 10d9c850 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c853 cmp ecx, dword ptr [0x10dbfb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbfb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c859 jge 0x10d9c943 */
  if ((C.sf==C.of)) goto L_10d9c943;
  /* 10d9c85f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c862 mov eax, dword ptr [0x10dbe820] */
  EAX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c867 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c86b je 0x10d9c93e */
  if (C.zf) goto L_10d9c93e;
  /* 10d9c871 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c874 mov edx, dword ptr [0x10dbe820] */
  EDX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c87a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d9c87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9c880 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9c886 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9c888 je 0x10d9c93e */
  if (C.zf) goto L_10d9c93e;
  /* 10d9c88e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c891 mov eax, dword ptr [0x10dbe820] */
  EAX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c896 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9c899 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c89a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c89d push edx */
  push32((uint32_t)(EDX));
  /* 10d9c89e call 0x10d9bc70 */
  push32(0x10d9c8a3u); f_10d9bc70();
  /* 10d9c8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c8a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c8a9 mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c8af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9c8b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d9c8b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c8ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9c8bc je 0x10d9c925 */
  if (C.zf) goto L_10d9c925;
  /* 10d9c8be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c8c2 jne 0x10d9c8e9 */
  if (!C.zf) goto L_10d9c8e9;
  /* 10d9c8c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c8c7 mov edx, dword ptr [0x10dbe820] */
  EDX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c8cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10d9c8d0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c8d1 call 0x10d9c700 */
  push32(0x10d9c8d6u); f_10d9c700();
  /* 10d9c8d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c8d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c8dc je 0x10d9c8e7 */
  if (C.zf) goto L_10d9c8e7;
  /* 10d9c8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c8e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c8e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9c8e7:;
  /* 10d9c8e7 jmp 0x10d9c925 */
  goto L_10d9c925;
L_10d9c8e9:;
  /* 10d9c8e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c8ed jne 0x10d9c925 */
  if (!C.zf) goto L_10d9c925;
  /* 10d9c8ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c8f2 mov eax, dword ptr [0x10dbe820] */
  EAX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c8f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9c8fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9c8fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9c900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9c902 je 0x10d9c925 */
  if (C.zf) goto L_10d9c925;
  /* 10d9c904 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c907 mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c90d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9c910 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c911 call 0x10d9c700 */
  push32(0x10d9c916u); f_10d9c700();
  /* 10d9c916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c919 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c91c jne 0x10d9c925 */
  if (!C.zf) goto L_10d9c925;
  /* 10d9c91e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_10d9c925:;
  /* 10d9c925 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c928 mov ecx, dword ptr [0x10dbe820] */
  ECX = (r32((uint32_t)(0x10dbe820)));
  /* 10d9c92e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10d9c931 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c932 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9c935 push eax */
  push32((uint32_t)(EAX));
  /* 10d9c936 call 0x10d9bce0 */
  push32(0x10d9c93bu); f_10d9bce0();
  /* 10d9c93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9c93e:;
  /* 10d9c93e jmp 0x10d9c847 */
  goto L_10d9c847;
L_10d9c943:;
  /* 10d9c943 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c945 call 0x10d968c0 */
  push32(0x10d9c94au); f_10d968c0();
  /* 10d9c94a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c94d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c951 jne 0x10d9c958 */
  if (!C.zf) goto L_10d9c958;
  /* 10d9c953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9c956 jmp 0x10d9c95b */
  goto L_10d9c95b;
L_10d9c958:;
  /* 10d9c958 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9c95b:;
  /* 10d9c95b mov esp, ebp */
  ESP = (EBP);
  /* 10d9c95d pop ebp */
  EBP = (pop32());
  /* 10d9c95e ret  */
  ESPCHK(0x10d9c820u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10d9c960 (15 bytes, 7 insns) */
void f_10d9c960(void) {
  FTRACE(0x10d9c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c960 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c961 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c963 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9c965 call 0x10d91d90 */
  push32(0x10d9c96au); f_10d91d90();
  /* 10d9c96a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c96d pop ebp */
  EBP = (pop32());
  /* 10d9c96e ret  */
  ESPCHK(0x10d9c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c970 @ 0x10d9c970 (1007 bytes, 269 insns) */
void f_10d9c970(void) {
  FTRACE(0x10d9c970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9c970 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9c971 mov ebp, esp */
  EBP = (ESP);
  /* 10d9c973 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9c979 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c97d jl 0x10d9c985 */
  if ((C.sf!=C.of)) goto L_10d9c985;
  /* 10d9c97f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c983 jle 0x10d9c98c */
  if ((C.zf||C.sf!=C.of)) goto L_10d9c98c;
L_10d9c985:;
  /* 10d9c985 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9c987 jmp 0x10d9cd5b */
  goto L_10d9cd5b;
L_10d9c98c:;
  /* 10d9c98c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9c98e call 0x10d96820 */
  push32(0x10d9c993u); f_10d96820();
  /* 10d9c993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c996 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d9c99d mov eax, dword ptr [0x10dbe80c] */
  EAX = (r32((uint32_t)(0x10dbe80c)));
  /* 10d9c9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c9a5 mov dword ptr [0x10dbe80c], eax */
  w32((uint32_t)(0x10dbe80c), (EAX));
L_10d9c9aa:;
  /* 10d9c9aa cmp dword ptr [0x10dbe81c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe81c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c9b1 je 0x10d9c9bd */
  if (C.zf) goto L_10d9c9bd;
  /* 10d9c9b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9c9b5 call dword ptr [0x10dc0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0274))), 0x10d9c9bbu);
  /* 10d9c9bb jmp 0x10d9c9aa */
  goto L_10d9c9aa;
L_10d9c9bd:;
  /* 10d9c9bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c9c1 je 0x10d9ca01 */
  if (C.zf) goto L_10d9ca01;
  /* 10d9c9c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9c9c7 je 0x10d9c9e1 */
  if (C.zf) goto L_10d9c9e1;
  /* 10d9c9c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9c9cc push ecx */
  push32((uint32_t)(ECX));
  /* 10d9c9cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c9d0 push edx */
  push32((uint32_t)(EDX));
  /* 10d9c9d1 call 0x10d9cd60 */
  push32(0x10d9c9d6u); f_10d9cd60();
  /* 10d9c9d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9c9d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 10d9c9df jmp 0x10d9c9f3 */
  goto L_10d9c9f3;
L_10d9c9e1:;
  /* 10d9c9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9c9e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9c9e7 mov ecx, dword ptr [eax + 0x10dbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dbd4dc)));
  /* 10d9c9ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_10d9c9f3:;
  /* 10d9c9f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d9c9f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9c9fc jmp 0x10d9cd3b */
  goto L_10d9cd3b;
L_10d9ca01:;
  /* 10d9ca01 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 10d9ca08 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9ca0f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca13 je 0x10d9cd33 */
  if (C.zf) goto L_10d9cd33;
  /* 10d9ca19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ca1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9ca1f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca22 jne 0x10d9cc44 */
  if (!C.zf) goto L_10d9cc44;
  /* 10d9ca28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ca2b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d9ca2f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca32 jne 0x10d9cc44 */
  if (!C.zf) goto L_10d9cc44;
  /* 10d9ca38 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ca3b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 10d9ca3f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca42 jne 0x10d9cc44 */
  if (!C.zf) goto L_10d9cc44;
  /* 10d9ca48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ca4b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_10d9ca51:;
  /* 10d9ca51 push 0x10dba034 */
  push32((uint32_t)(0x10dba034u));
  /* 10d9ca56 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d9ca5c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ca5d call 0x10d9ebc0 */
  push32(0x10d9ca62u); f_10d9ebc0();
  /* 10d9ca62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ca65 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 10d9ca6b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca72 je 0x10d9ca9d */
  if (C.zf) goto L_10d9ca9d;
  /* 10d9ca74 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9ca7a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ca80 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 10d9ca86 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca8d je 0x10d9ca9d */
  if (C.zf) goto L_10d9ca9d;
  /* 10d9ca8f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9ca95 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9ca98 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ca9b jne 0x10d9cac3 */
  if (!C.zf) goto L_10d9cac3;
L_10d9ca9d:;
  /* 10d9ca9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9caa1 je 0x10d9cabc */
  if (C.zf) goto L_10d9cabc;
  /* 10d9caa3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9caa5 call 0x10d968c0 */
  push32(0x10d9caaau); f_10d968c0();
  /* 10d9caaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9caad mov edx, dword ptr [0x10dbe80c] */
  EDX = (r32((uint32_t)(0x10dbe80c)));
  /* 10d9cab3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9cab6 mov dword ptr [0x10dbe80c], edx */
  w32((uint32_t)(0x10dbe80c), (EDX));
L_10d9cabc:;
  /* 10d9cabc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9cabe jmp 0x10d9cd5b */
  goto L_10d9cd5b;
L_10d9cac3:;
  /* 10d9cac3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d9caca jmp 0x10d9cad5 */
  goto L_10d9cad5;
L_10d9cacc:;
  /* 10d9cacc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9cacf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cad2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d9cad5:;
  /* 10d9cad5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cad9 jg 0x10d9cb23 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9cb23;
  /* 10d9cadb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d9cae1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cae2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d9cae8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9cae9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9caec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9caef mov ecx, dword ptr [eax + 0x10dbd4d8] */
  ECX = (r32((uint32_t)(EAX + 0x10dbd4d8)));
  /* 10d9caf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9caf6 call 0x10d9eb80 */
  push32(0x10d9cafbu); f_10d9eb80();
  /* 10d9cafb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cafe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cb00 jne 0x10d9cb21 */
  if (!C.zf) goto L_10d9cb21;
  /* 10d9cb02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9cb05 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cb08 mov eax, dword ptr [edx + 0x10dbd4d8] */
  EAX = (r32((uint32_t)(EDX + 0x10dbd4d8)));
  /* 10d9cb0e push eax */
  push32((uint32_t)(EAX));
  /* 10d9cb0f call 0x10d95c50 */
  push32(0x10d9cb14u); f_10d95c50();
  /* 10d9cb14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cb17 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cb1d jne 0x10d9cb21 */
  if (!C.zf) goto L_10d9cb21;
  /* 10d9cb1f jmp 0x10d9cb23 */
  goto L_10d9cb23;
L_10d9cb21:;
  /* 10d9cb21 jmp 0x10d9cacc */
  goto L_10d9cacc;
L_10d9cb23:;
  /* 10d9cb23 push 0x10dba030 */
  push32((uint32_t)(0x10dba030u));
  /* 10d9cb28 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9cb2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cb31 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 10d9cb37 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9cb3d push edx */
  push32((uint32_t)(EDX));
  /* 10d9cb3e call 0x10d9eb40 */
  push32(0x10d9cb43u); f_10d9eb40();
  /* 10d9cb43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cb46 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 10d9cb4c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cb53 jne 0x10d9cb89 */
  if (!C.zf) goto L_10d9cb89;
  /* 10d9cb55 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9cb5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9cb5e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cb61 je 0x10d9cb89 */
  if (C.zf) goto L_10d9cb89;
  /* 10d9cb63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cb67 je 0x10d9cb82 */
  if (C.zf) goto L_10d9cb82;
  /* 10d9cb69 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9cb6b call 0x10d968c0 */
  push32(0x10d9cb70u); f_10d968c0();
  /* 10d9cb70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cb73 mov edx, dword ptr [0x10dbe80c] */
  EDX = (r32((uint32_t)(0x10dbe80c)));
  /* 10d9cb79 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9cb7c mov dword ptr [0x10dbe80c], edx */
  w32((uint32_t)(0x10dbe80c), (EDX));
L_10d9cb82:;
  /* 10d9cb82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9cb84 jmp 0x10d9cd5b */
  goto L_10d9cd5b;
L_10d9cb89:;
  /* 10d9cb89 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cb8d jg 0x10d9cbda */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9cbda;
  /* 10d9cb8f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d9cb95 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cb96 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9cb9c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cb9d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d9cba3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9cba4 call 0x10d96640 */
  push32(0x10d9cba9u); f_10d96640();
  /* 10d9cba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cbac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 10d9cbb2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 10d9cbba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 10d9cbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cbc1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9cbc4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9cbc5 call 0x10d9cd60 */
  push32(0x10d9cbcau); f_10d9cd60();
  /* 10d9cbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cbcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cbcf je 0x10d9cbda */
  if (C.zf) goto L_10d9cbda;
  /* 10d9cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9cbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9cbda:;
  /* 10d9cbda mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9cbe0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cbe6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10d9cbec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d9cbf2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9cbf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cbf7 je 0x10d9cc08 */
  if (C.zf) goto L_10d9cc08;
  /* 10d9cbf9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d9cbff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cc02 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_10d9cc08:;
  /* 10d9cc08 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10d9cc0e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9cc11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cc13 jne 0x10d9ca51 */
  if (!C.zf) goto L_10d9ca51;
  /* 10d9cc19 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cc1d je 0x10d9cc2c */
  if (C.zf) goto L_10d9cc2c;
  /* 10d9cc1f call 0x10d9cf00 */
  push32(0x10d9cc24u); f_10d9cf00();
  /* 10d9cc24 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 10d9cc2a jmp 0x10d9cc36 */
  goto L_10d9cc36;
L_10d9cc2c:;
  /* 10d9cc2c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_10d9cc36:;
  /* 10d9cc36 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 10d9cc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9cc3f jmp 0x10d9cd31 */
  goto L_10d9cd31;
L_10d9cc44:;
  /* 10d9cc44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cc47 push edx */
  push32((uint32_t)(EDX));
  /* 10d9cc48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9cc4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9cc4c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d9cc52 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cc53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9cc56 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cc57 call 0x10d9d000 */
  push32(0x10d9cc5cu); f_10d9d000();
  /* 10d9cc5c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cc5f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9cc62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cc66 je 0x10d9cd31 */
  if (C.zf) goto L_10d9cd31;
  /* 10d9cc6c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9cc73 jmp 0x10d9cc7e */
  goto L_10d9cc7e;
L_10d9cc75:;
  /* 10d9cc75 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9cc78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cc7b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d9cc7e:;
  /* 10d9cc7e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cc82 jg 0x10d9cce0 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9cce0;
  /* 10d9cc84 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cc88 je 0x10d9ccde */
  if (C.zf) goto L_10d9ccde;
  /* 10d9cc8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9cc8d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cc90 mov ecx, dword ptr [eax + 0x10dbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dbd4dc)));
  /* 10d9cc96 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cc97 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 10d9cc9d push edx */
  push32((uint32_t)(EDX));
  /* 10d9cc9e call 0x10d9eab0 */
  push32(0x10d9cca3u); f_10d9eab0();
  /* 10d9cca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cca8 je 0x10d9ccd5 */
  if (C.zf) goto L_10d9ccd5;
  /* 10d9ccaa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 10d9ccb0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ccb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9ccb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ccb5 call 0x10d9cd60 */
  push32(0x10d9ccbau); f_10d9cd60();
  /* 10d9ccba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ccbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ccbf je 0x10d9cccc */
  if (C.zf) goto L_10d9cccc;
  /* 10d9ccc1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ccc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ccc7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d9ccca jmp 0x10d9ccd3 */
  goto L_10d9ccd3;
L_10d9cccc:;
  /* 10d9cccc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d9ccd3:;
  /* 10d9ccd3 jmp 0x10d9ccde */
  goto L_10d9ccde;
L_10d9ccd5:;
  /* 10d9ccd5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ccd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ccdb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9ccde:;
  /* 10d9ccde jmp 0x10d9cc75 */
  goto L_10d9cc75;
L_10d9cce0:;
  /* 10d9cce0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cce4 je 0x10d9cd0b */
  if (C.zf) goto L_10d9cd0b;
  /* 10d9cce6 call 0x10d9cf00 */
  push32(0x10d9ccebu); f_10d9cf00();
  /* 10d9cceb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9ccee push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ccf0 mov ecx, dword ptr [0x10dbd4dc] */
  ECX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9ccf6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ccf7 call 0x10d938b0 */
  push32(0x10d9ccfcu); f_10d938b0();
  /* 10d9ccfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ccff mov dword ptr [0x10dbd4dc], 0 */
  w32((uint32_t)(0x10dbd4dc), (0x0u));
  /* 10d9cd09 jmp 0x10d9cd31 */
  goto L_10d9cd31;
L_10d9cd0b:;
  /* 10d9cd0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cd0f je 0x10d9cd1e */
  if (C.zf) goto L_10d9cd1e;
  /* 10d9cd11 call 0x10d9cf00 */
  push32(0x10d9cd16u); f_10d9cf00();
  /* 10d9cd16 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 10d9cd1c jmp 0x10d9cd28 */
  goto L_10d9cd28;
L_10d9cd1e:;
  /* 10d9cd1e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_10d9cd28:;
  /* 10d9cd28 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 10d9cd2e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d9cd31:;
  /* 10d9cd31 jmp 0x10d9cd3b */
  goto L_10d9cd3b;
L_10d9cd33:;
  /* 10d9cd33 call 0x10d9cf00 */
  push32(0x10d9cd38u); f_10d9cf00();
  /* 10d9cd38 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9cd3b:;
  /* 10d9cd3b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cd3f je 0x10d9cd58 */
  if (C.zf) goto L_10d9cd58;
  /* 10d9cd41 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10d9cd43 call 0x10d968c0 */
  push32(0x10d9cd48u); f_10d968c0();
  /* 10d9cd48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cd4b mov eax, dword ptr [0x10dbe80c] */
  EAX = (r32((uint32_t)(0x10dbe80c)));
  /* 10d9cd50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9cd53 mov dword ptr [0x10dbe80c], eax */
  w32((uint32_t)(0x10dbe80c), (EAX));
L_10d9cd58:;
  /* 10d9cd58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9cd5b:;
  /* 10d9cd5b mov esp, ebp */
  ESP = (EBP);
  /* 10d9cd5d pop ebp */
  EBP = (pop32());
  /* 10d9cd5e ret  */
  ESPCHK(0x10d9c970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd60 @ 0x10d9cd60 (403 bytes, 117 insns) */
void f_10d9cd60(void) {
  FTRACE(0x10d9cd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9cd60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9cd61 mov ebp, esp */
  EBP = (ESP);
  /* 10d9cd63 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9cd69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cd6c push eax */
  push32((uint32_t)(EAX));
  /* 10d9cd6d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 10d9cd73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cd74 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 10d9cd7a push edx */
  push32((uint32_t)(EDX));
  /* 10d9cd7b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 10d9cd81 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cd82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9cd85 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cd86 call 0x10d9d000 */
  push32(0x10d9cd8bu); f_10d9d000();
  /* 10d9cd8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cd8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cd90 jne 0x10d9cd99 */
  if (!C.zf) goto L_10d9cd99;
  /* 10d9cd92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9cd94 jmp 0x10d9ceef */
  goto L_10d9ceef;
L_10d9cd99:;
  /* 10d9cd99 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 10d9cd9e push 0x10dba038 */
  push32((uint32_t)(0x10dba038u));
  /* 10d9cda3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9cda5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 10d9cdab push edx */
  push32((uint32_t)(EDX));
  /* 10d9cdac call 0x10d95c50 */
  push32(0x10d9cdb1u); f_10d95c50();
  /* 10d9cdb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cdb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cdb7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cdb8 call 0x10d92e20 */
  push32(0x10d9cdbdu); f_10d92e20();
  /* 10d9cdbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cdc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9cdc3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cdc7 jne 0x10d9cdd0 */
  if (!C.zf) goto L_10d9cdd0;
  /* 10d9cdc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9cdcb jmp 0x10d9ceef */
  goto L_10d9ceef;
L_10d9cdd0:;
  /* 10d9cdd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cdd3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cdd6 mov ecx, dword ptr [eax + 0x10dbd4dc] */
  ECX = (r32((uint32_t)(EAX + 0x10dbd4dc)));
  /* 10d9cddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9cddf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cde2 mov eax, dword ptr [edx*4 + 0x10dbe688] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbe688)));
  /* 10d9cde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9cdec push 6 */
  push32((uint32_t)(0x6u));
  /* 10d9cdee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cdf1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cdf4 add ecx, 0x10dbe6d8 */
  { uint32_t _a=(ECX),_b=(0x10dbe6d8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cdfa push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cdfb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 10d9cdfe push edx */
  push32((uint32_t)(EDX));
  /* 10d9cdff call 0x10d99700 */
  push32(0x10d9ce04u); f_10d99700();
  /* 10d9ce04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ce07 mov eax, dword ptr [0x10dbe6a0] */
  EAX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d9ce0c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d9ce0f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 10d9ce15 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ce16 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9ce19 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ce1a call 0x10d95dd0 */
  push32(0x10d9ce1fu); f_10d95dd0();
  /* 10d9ce1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ce22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ce25 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9ce28 mov dword ptr [ecx + 0x10dbd4dc], eax */
  w32((uint32_t)(ECX + 0x10dbd4dc), (EAX));
  /* 10d9ce2e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 10d9ce34 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ce3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ce3d mov dword ptr [eax*4 + 0x10dbe688], edx */
  w32((uint32_t)(EAX*4 + 0x10dbe688), (EDX));
  /* 10d9ce44 push 6 */
  push32((uint32_t)(0x6u));
  /* 10d9ce46 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 10d9ce4c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ce4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ce50 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9ce53 add edx, 0x10dbe6d8 */
  { uint32_t _a=(EDX),_b=(0x10dbe6d8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ce59 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ce5a call 0x10d99700 */
  push32(0x10d9ce5fu); f_10d99700();
  /* 10d9ce5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ce62 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ce66 jne 0x10d9ce73 */
  if (!C.zf) goto L_10d9ce73;
  /* 10d9ce68 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9ce6e mov dword ptr [0x10dbe6a0], eax */
  w32((uint32_t)(0x10dbe6a0), (EAX));
L_10d9ce73:;
  /* 10d9ce73 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ce77 jne 0x10d9ce85 */
  if (!C.zf) goto L_10d9ce85;
  /* 10d9ce79 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 10d9ce7f mov dword ptr [0x10dbe6a4], ecx */
  w32((uint32_t)(0x10dbe6a4), (ECX));
L_10d9ce85:;
  /* 10d9ce85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ce88 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9ce8b call dword ptr [edx + 0x10dbd4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x10dbd4e0))), 0x10d9ce91u);
  /* 10d9ce91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ce93 je 0x10d9cecc */
  if (C.zf) goto L_10d9cecc;
  /* 10d9ce95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ce98 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9ce9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ce9e mov dword ptr [eax + 0x10dbd4dc], ecx */
  w32((uint32_t)(EAX + 0x10dbd4dc), (ECX));
  /* 10d9cea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9cea6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9cea9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ceaa call 0x10d938b0 */
  push32(0x10d9ceafu); f_10d938b0();
  /* 10d9ceaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ceb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ceb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ceb8 mov dword ptr [eax*4 + 0x10dbe688], ecx */
  w32((uint32_t)(EAX*4 + 0x10dbe688), (ECX));
  /* 10d9cebf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9cec2 mov dword ptr [0x10dbe6a0], edx */
  w32((uint32_t)(0x10dbe6a0), (EDX));
  /* 10d9cec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ceca jmp 0x10d9ceef */
  goto L_10d9ceef;
L_10d9cecc:;
  /* 10d9cecc cmp dword ptr [ebp - 0xc], 0x10dbd3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10dbd3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ced3 je 0x10d9cee3 */
  if (C.zf) goto L_10d9cee3;
  /* 10d9ced5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ced7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ceda push eax */
  push32((uint32_t)(EAX));
  /* 10d9cedb call 0x10d938b0 */
  push32(0x10d9cee0u); f_10d938b0();
  /* 10d9cee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9cee3:;
  /* 10d9cee3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9cee6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cee9 mov eax, dword ptr [ecx + 0x10dbd4dc] */
  EAX = (r32((uint32_t)(ECX + 0x10dbd4dc)));
L_10d9ceef:;
  /* 10d9ceef mov esp, ebp */
  ESP = (EBP);
  /* 10d9cef1 pop ebp */
  EBP = (pop32());
  /* 10d9cef2 ret  */
  ESPCHK(0x10d9cd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf00 @ 0x10d9cf00 (256 bytes, 72 insns) */
void f_10d9cf00(void) {
  FTRACE(0x10d9cf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9cf00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9cf01 mov ebp, esp */
  EBP = (ESP);
  /* 10d9cf03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9cf06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d9cf0d cmp dword ptr [0x10dbd4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbd4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cf14 jne 0x10d9cf34 */
  if (!C.zf) goto L_10d9cf34;
  /* 10d9cf16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 10d9cf1b push 0x10dba038 */
  push32((uint32_t)(0x10dba038u));
  /* 10d9cf20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9cf22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 10d9cf27 call 0x10d92e20 */
  push32(0x10d9cf2cu); f_10d92e20();
  /* 10d9cf2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cf2f mov dword ptr [0x10dbd4dc], eax */
  w32((uint32_t)(0x10dbd4dc), (EAX));
L_10d9cf34:;
  /* 10d9cf34 mov eax, dword ptr [0x10dbd4dc] */
  EAX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9cf39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d9cf3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d9cf43 jmp 0x10d9cf4e */
  goto L_10d9cf4e;
L_10d9cf45:;
  /* 10d9cf45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9cf48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cf4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9cf4e:;
  /* 10d9cf4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9cf51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cf54 mov eax, dword ptr [edx + 0x10dbd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10dbd4dc)));
  /* 10d9cf5a push eax */
  push32((uint32_t)(EAX));
  /* 10d9cf5b push 0x10dba044 */
  push32((uint32_t)(0x10dba044u));
  /* 10d9cf60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9cf63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cf66 mov edx, dword ptr [ecx + 0x10dbd4d8] */
  EDX = (r32((uint32_t)(ECX + 0x10dbd4d8)));
  /* 10d9cf6c push edx */
  push32((uint32_t)(EDX));
  /* 10d9cf6d push 3 */
  push32((uint32_t)(0x3u));
  /* 10d9cf6f mov eax, dword ptr [0x10dbd4dc] */
  EAX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9cf74 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cf75 call 0x10d9d1a0 */
  push32(0x10d9cf7au); f_10d9d1a0();
  /* 10d9cf7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cf7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cf81 jge 0x10d9cfc9 */
  if ((C.sf==C.of)) goto L_10d9cfc9;
  /* 10d9cf83 push 0x10dba030 */
  push32((uint32_t)(0x10dba030u));
  /* 10d9cf88 mov ecx, dword ptr [0x10dbd4dc] */
  ECX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9cf8e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9cf8f call 0x10d95de0 */
  push32(0x10d9cf94u); f_10d95de0();
  /* 10d9cf94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cf97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9cf9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cf9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cfa0 mov eax, dword ptr [edx + 0x10dbd4dc] */
  EAX = (r32((uint32_t)(EDX + 0x10dbd4dc)));
  /* 10d9cfa6 push eax */
  push32((uint32_t)(EAX));
  /* 10d9cfa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9cfaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9cfad mov edx, dword ptr [ecx + 0x10dbd4dc] */
  EDX = (r32((uint32_t)(ECX + 0x10dbd4dc)));
  /* 10d9cfb3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9cfb4 call 0x10d9eab0 */
  push32(0x10d9cfb9u); f_10d9eab0();
  /* 10d9cfb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cfbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9cfbe je 0x10d9cfc7 */
  if (C.zf) goto L_10d9cfc7;
  /* 10d9cfc0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d9cfc7:;
  /* 10d9cfc7 jmp 0x10d9cff7 */
  goto L_10d9cff7;
L_10d9cfc9:;
  /* 10d9cfc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9cfcd jne 0x10d9cfd6 */
  if (!C.zf) goto L_10d9cfd6;
  /* 10d9cfcf mov eax, dword ptr [0x10dbd4dc] */
  EAX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9cfd4 jmp 0x10d9cffc */
  goto L_10d9cffc;
L_10d9cfd6:;
  /* 10d9cfd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9cfd8 mov eax, dword ptr [0x10dbd4dc] */
  EAX = (r32((uint32_t)(0x10dbd4dc)));
  /* 10d9cfdd push eax */
  push32((uint32_t)(EAX));
  /* 10d9cfde call 0x10d938b0 */
  push32(0x10d9cfe3u); f_10d938b0();
  /* 10d9cfe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9cfe6 mov dword ptr [0x10dbd4dc], 0 */
  w32((uint32_t)(0x10dbd4dc), (0x0u));
  /* 10d9cff0 mov eax, dword ptr [0x10dbd4f4] */
  EAX = (r32((uint32_t)(0x10dbd4f4)));
  /* 10d9cff5 jmp 0x10d9cffc */
  goto L_10d9cffc;
L_10d9cff7:;
  /* 10d9cff7 jmp 0x10d9cf45 */
  goto L_10d9cf45;
L_10d9cffc:;
  /* 10d9cffc mov esp, ebp */
  ESP = (EBP);
  /* 10d9cffe pop ebp */
  EBP = (pop32());
  /* 10d9cfff ret  */
  ESPCHK(0x10d9cf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d000 @ 0x10d9d000 (388 bytes, 115 insns) */
void f_10d9d000(void) {
  FTRACE(0x10d9d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d000 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d001 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d003 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9d009 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d00d jne 0x10d9d016 */
  if (!C.zf) goto L_10d9d016;
  /* 10d9d00f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d011 jmp 0x10d9d180 */
  goto L_10d9d180;
L_10d9d016:;
  /* 10d9d016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d019 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9d01c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d01f jne 0x10d9d070 */
  if (!C.zf) goto L_10d9d070;
  /* 10d9d021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d024 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d9d028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d02a jne 0x10d9d070 */
  if (!C.zf) goto L_10d9d070;
  /* 10d9d02c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d02f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 10d9d032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d035 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 10d9d039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d03d je 0x10d9d059 */
  if (C.zf) goto L_10d9d059;
  /* 10d9d03f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9d042 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 10d9d047 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9d04a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 10d9d050 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9d053 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_10d9d059:;
  /* 10d9d059 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d05d je 0x10d9d068 */
  if (C.zf) goto L_10d9d068;
  /* 10d9d05f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9d062 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d9d068:;
  /* 10d9d068 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d06b jmp 0x10d9d180 */
  goto L_10d9d180;
L_10d9d070:;
  /* 10d9d070 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d073 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d074 push 0x10dbd450 */
  push32((uint32_t)(0x10dbd450u));
  /* 10d9d079 call 0x10d9eab0 */
  push32(0x10d9d07eu); f_10d9eab0();
  /* 10d9d07e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d083 je 0x10d9d138 */
  if (C.zf) goto L_10d9d138;
  /* 10d9d089 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d08c push edx */
  push32((uint32_t)(EDX));
  /* 10d9d08d push 0x10dbd3cc */
  push32((uint32_t)(0x10dbd3ccu));
  /* 10d9d092 call 0x10d9eab0 */
  push32(0x10d9d097u); f_10d9eab0();
  /* 10d9d097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d09a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d09c je 0x10d9d138 */
  if (C.zf) goto L_10d9d138;
  /* 10d9d0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d0a5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d0a6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 10d9d0ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d0ad call 0x10d9d1f0 */
  push32(0x10d9d0b2u); f_10d9d1f0();
  /* 10d9d0b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d0b7 je 0x10d9d0c0 */
  if (C.zf) goto L_10d9d0c0;
  /* 10d9d0b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d0bb jmp 0x10d9d180 */
  goto L_10d9d180;
L_10d9d0c0:;
  /* 10d9d0c0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d9d0c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d0c7 push 0x10dbe6b0 */
  push32((uint32_t)(0x10dbe6b0u));
  /* 10d9d0cc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 10d9d0d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d0d3 call 0x10d9ec00 */
  push32(0x10d9d0d8u); f_10d9ec00();
  /* 10d9d0d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d0dd jne 0x10d9d0e6 */
  if (!C.zf) goto L_10d9d0e6;
  /* 10d9d0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d0e1 jmp 0x10d9d180 */
  goto L_10d9d180;
L_10d9d0e6:;
  /* 10d9d0e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d0e8 mov cx, word ptr [0x10dbe6b4] */
  CX = (r16((uint32_t)(0x10dbe6b4)));
  /* 10d9d0ef mov dword ptr [0x10dbe6b8], ecx */
  w32((uint32_t)(0x10dbe6b8), (ECX));
  /* 10d9d0f5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 10d9d0fb push edx */
  push32((uint32_t)(EDX));
  /* 10d9d0fc push 0x10dbd450 */
  push32((uint32_t)(0x10dbd450u));
  /* 10d9d101 call 0x10d9d350 */
  push32(0x10d9d106u); f_10d9d350();
  /* 10d9d106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d109 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d10c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9d10f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9d111 je 0x10d9d126 */
  if (C.zf) goto L_10d9d126;
  /* 10d9d113 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d116 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d117 push 0x10dbd3cc */
  push32((uint32_t)(0x10dbd3ccu));
  /* 10d9d11c call 0x10d95dd0 */
  push32(0x10d9d121u); f_10d95dd0();
  /* 10d9d121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d124 jmp 0x10d9d138 */
  goto L_10d9d138;
L_10d9d126:;
  /* 10d9d126 push 0x10dbd450 */
  push32((uint32_t)(0x10dbd450u));
  /* 10d9d12b push 0x10dbd3cc */
  push32((uint32_t)(0x10dbd3ccu));
  /* 10d9d130 call 0x10d95dd0 */
  push32(0x10d9d135u); f_10d95dd0();
  /* 10d9d135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d138:;
  /* 10d9d138 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d13c je 0x10d9d151 */
  if (C.zf) goto L_10d9d151;
  /* 10d9d13e push 6 */
  push32((uint32_t)(0x6u));
  /* 10d9d140 push 0x10dbe6b0 */
  push32((uint32_t)(0x10dbe6b0u));
  /* 10d9d145 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9d148 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d149 call 0x10d99700 */
  push32(0x10d9d14eu); f_10d99700();
  /* 10d9d14e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d151:;
  /* 10d9d151 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d155 je 0x10d9d16a */
  if (C.zf) goto L_10d9d16a;
  /* 10d9d157 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d9d159 push 0x10dbe6b8 */
  push32((uint32_t)(0x10dbe6b8u));
  /* 10d9d15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9d161 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d162 call 0x10d99700 */
  push32(0x10d9d167u); f_10d99700();
  /* 10d9d167 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d16a:;
  /* 10d9d16a push 0x10dbd450 */
  push32((uint32_t)(0x10dbd450u));
  /* 10d9d16f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d172 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d173 call 0x10d95dd0 */
  push32(0x10d9d178u); f_10d95dd0();
  /* 10d9d178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d17b mov eax, 0x10dbd450 */
  EAX = (0x10dbd450u);
L_10d9d180:;
  /* 10d9d180 mov esp, ebp */
  ESP = (EBP);
  /* 10d9d182 pop ebp */
  EBP = (pop32());
  /* 10d9d183 ret  */
  ESPCHK(0x10d9d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x10d9d190 (7 bytes, 5 insns) */
void f_10d9d190(void) {
  FTRACE(0x10d9d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d190 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d191 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d193 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d195 pop ebp */
  EBP = (pop32());
  /* 10d9d196 ret  */
  ESPCHK(0x10d9d190u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x10d9d1a0 (79 bytes, 28 insns) */
void f_10d9d1a0(void) {
  FTRACE(0x10d9d1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d1a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9d1a6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 10d9d1a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d1ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9d1b3 jmp 0x10d9d1be */
  goto L_10d9d1be;
L_10d9d1b5:;
  /* 10d9d1b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d1bb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d9d1be:;
  /* 10d9d1be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d1c1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d1c4 jge 0x10d9d1e4 */
  if ((C.sf==C.of)) goto L_10d9d1e4;
  /* 10d9d1c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d1c9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d1cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d1cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d1d2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d9d1d5 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d1d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d1d9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d1da call 0x10d95de0 */
  push32(0x10d9d1dfu); f_10d95de0();
  /* 10d9d1df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d1e2 jmp 0x10d9d1b5 */
  goto L_10d9d1b5;
L_10d9d1e4:;
  /* 10d9d1e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9d1eb mov esp, ebp */
  ESP = (EBP);
  /* 10d9d1ed pop ebp */
  EBP = (pop32());
  /* 10d9d1ee ret  */
  ESPCHK(0x10d9d1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1f0 @ 0x10d9d1f0 (349 bytes, 122 insns) */
void f_10d9d1f0(void) {
  FTRACE(0x10d9d1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9d1f6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d9d1fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9d1fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d200 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d201 call 0x10d96b90 */
  push32(0x10d9d206u); f_10d96b90();
  /* 10d9d206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d209 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d20c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9d20f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9d211 jne 0x10d9d21a */
  if (!C.zf) goto L_10d9d21a;
  /* 10d9d213 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d215 jmp 0x10d9d349 */
  goto L_10d9d349;
L_10d9d21a:;
  /* 10d9d21a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d21d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9d220 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d223 jne 0x10d9d250 */
  if (!C.zf) goto L_10d9d250;
  /* 10d9d225 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d228 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d9d22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d22e je 0x10d9d250 */
  if (C.zf) goto L_10d9d250;
  /* 10d9d230 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d233 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d236 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d23a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d240 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d241 call 0x10d95dd0 */
  push32(0x10d9d246u); f_10d95dd0();
  /* 10d9d246 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d24b jmp 0x10d9d349 */
  goto L_10d9d349;
L_10d9d250:;
  /* 10d9d250 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9d257 jmp 0x10d9d262 */
  goto L_10d9d262;
L_10d9d259:;
  /* 10d9d259 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d25c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d25f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9d262:;
  /* 10d9d262 push 0x10dba048 */
  push32((uint32_t)(0x10dba048u));
  /* 10d9d267 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d26a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d26b call 0x10d9eb40 */
  push32(0x10d9d270u); f_10d9eb40();
  /* 10d9d270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d273 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9d276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d27a jne 0x10d9d284 */
  if (!C.zf) goto L_10d9d284;
  /* 10d9d27c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d27f jmp 0x10d9d349 */
  goto L_10d9d349;
L_10d9d284:;
  /* 10d9d284 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d287 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d28a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9d28c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d9d28f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d293 jne 0x10d9d2ba */
  if (!C.zf) goto L_10d9d2ba;
  /* 10d9d295 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d299 jge 0x10d9d2ba */
  if ((C.sf==C.of)) goto L_10d9d2ba;
  /* 10d9d29b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d29f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2a2 je 0x10d9d2ba */
  if (C.zf) goto L_10d9d2ba;
  /* 10d9d2a4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d2a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d2a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d2ab push eax */
  push32((uint32_t)(EAX));
  /* 10d9d2ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d2af push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d2b0 call 0x10d96640 */
  push32(0x10d9d2b5u); f_10d96640();
  /* 10d9d2b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d2b8 jmp 0x10d9d320 */
  goto L_10d9d320;
L_10d9d2ba:;
  /* 10d9d2ba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2be jne 0x10d9d2e8 */
  if (!C.zf) goto L_10d9d2e8;
  /* 10d9d2c0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2c4 jge 0x10d9d2e8 */
  if ((C.sf==C.of)) goto L_10d9d2e8;
  /* 10d9d2c6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d2ca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2cd je 0x10d9d2e8 */
  if (C.zf) goto L_10d9d2e8;
  /* 10d9d2cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d2d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d2d6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d2d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d2da add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d2dd push edx */
  push32((uint32_t)(EDX));
  /* 10d9d2de call 0x10d96640 */
  push32(0x10d9d2e3u); f_10d96640();
  /* 10d9d2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d2e6 jmp 0x10d9d320 */
  goto L_10d9d320;
L_10d9d2e8:;
  /* 10d9d2e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2ec jne 0x10d9d31b */
  if (!C.zf) goto L_10d9d31b;
  /* 10d9d2ee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d2f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d2f4 je 0x10d9d2ff */
  if (C.zf) goto L_10d9d2ff;
  /* 10d9d2f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d2fa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d2fd jne 0x10d9d31b */
  if (!C.zf) goto L_10d9d31b;
L_10d9d2ff:;
  /* 10d9d2ff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d302 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d303 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d306 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d307 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d30a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d310 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d311 call 0x10d96640 */
  push32(0x10d9d316u); f_10d96640();
  /* 10d9d316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d319 jmp 0x10d9d320 */
  goto L_10d9d320;
L_10d9d31b:;
  /* 10d9d31b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d31e jmp 0x10d9d349 */
  goto L_10d9d349;
L_10d9d320:;
  /* 10d9d320 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d324 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d327 jne 0x10d9d32b */
  if (!C.zf) goto L_10d9d32b;
  /* 10d9d329 jmp 0x10d9d347 */
  goto L_10d9d347;
L_10d9d32b:;
  /* 10d9d32b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9d32f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d331 jne 0x10d9d335 */
  if (!C.zf) goto L_10d9d335;
  /* 10d9d333 jmp 0x10d9d347 */
  goto L_10d9d347;
L_10d9d335:;
  /* 10d9d335 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d338 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d33b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 10d9d33f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d9d342 jmp 0x10d9d259 */
  goto L_10d9d259;
L_10d9d347:;
  /* 10d9d347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9d349:;
  /* 10d9d349 mov esp, ebp */
  ESP = (EBP);
  /* 10d9d34b pop ebp */
  EBP = (pop32());
  /* 10d9d34c ret  */
  ESPCHK(0x10d9d1f0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x10d9d350 (101 bytes, 36 insns) */
void f_10d9d350(void) {
  FTRACE(0x10d9d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d350 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d351 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d353 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d356 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d35a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d35b call 0x10d95dd0 */
  push32(0x10d9d360u); f_10d95dd0();
  /* 10d9d360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d363 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d366 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 10d9d36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d36c je 0x10d9d388 */
  if (C.zf) goto L_10d9d388;
  /* 10d9d36e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d371 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d374 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d375 push 0x10dba050 */
  push32((uint32_t)(0x10dba050u));
  /* 10d9d37a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d37c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d37f push edx */
  push32((uint32_t)(EDX));
  /* 10d9d380 call 0x10d9d1a0 */
  push32(0x10d9d385u); f_10d9d1a0();
  /* 10d9d385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d388:;
  /* 10d9d388 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d38b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 10d9d392 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9d394 je 0x10d9d3b3 */
  if (C.zf) goto L_10d9d3b3;
  /* 10d9d396 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9d399 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d39f push edx */
  push32((uint32_t)(EDX));
  /* 10d9d3a0 push 0x10dba04c */
  push32((uint32_t)(0x10dba04cu));
  /* 10d9d3a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d3a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d3aa push eax */
  push32((uint32_t)(EAX));
  /* 10d9d3ab call 0x10d9d1a0 */
  push32(0x10d9d3b0u); f_10d9d1a0();
  /* 10d9d3b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d3b3:;
  /* 10d9d3b3 pop ebp */
  EBP = (pop32());
  /* 10d9d3b4 ret  */
  ESPCHK(0x10d9d350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x10d9d3c0 (130 bytes, 50 insns) */
void f_10d9d3c0(void) {
  FTRACE(0x10d9d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d3c4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9d3c5 push esi */
  push32((uint32_t)(ESI));
  /* 10d9d3c6 push edi */
  push32((uint32_t)(EDI));
  /* 10d9d3c7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9d3ce:;
  /* 10d9d3ce cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d3d2 jne 0x10d9d3f2 */
  if (!C.zf) goto L_10d9d3f2;
  /* 10d9d3d4 push 0x10dba060 */
  push32((uint32_t)(0x10dba060u));
  /* 10d9d3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9d3db push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d9d3dd push 0x10dba054 */
  push32((uint32_t)(0x10dba054u));
  /* 10d9d3e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d3e4 call 0x10d91ee0 */
  push32(0x10d9d3e9u); f_10d91ee0();
  /* 10d9d3e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d3ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d3ef jne 0x10d9d3f2 */
  if (!C.zf) goto L_10d9d3f2;
  /* 10d9d3f1 int3  */
  x86_unimpl("int3 @ 0x10d9d3f1");
L_10d9d3f2:;
  /* 10d9d3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d3f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d3f6 jne 0x10d9d3ce */
  if (!C.zf) goto L_10d9d3ce;
  /* 10d9d3f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d3fb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9d3fe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9d401 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9d403 je 0x10d9d411 */
  if (C.zf) goto L_10d9d411;
  /* 10d9d405 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d408 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d9d40f jmp 0x10d9d438 */
  goto L_10d9d438;
L_10d9d411:;
  /* 10d9d411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d414 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d415 call 0x10d9bc30 */
  push32(0x10d9d41au); f_10d9bc30();
  /* 10d9d41a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d420 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d421 call 0x10d9d450 */
  push32(0x10d9d426u); f_10d9d450();
  /* 10d9d426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d42c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d42f push eax */
  push32((uint32_t)(EAX));
  /* 10d9d430 call 0x10d9bca0 */
  push32(0x10d9d435u); f_10d9bca0();
  /* 10d9d435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9d438:;
  /* 10d9d438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d43b pop edi */
  EDI = (pop32());
  /* 10d9d43c pop esi */
  ESI = (pop32());
  /* 10d9d43d pop ebx */
  EBX = (pop32());
  /* 10d9d43e mov esp, ebp */
  ESP = (EBP);
  /* 10d9d440 pop ebp */
  EBP = (pop32());
  /* 10d9d441 ret  */
  ESPCHK(0x10d9d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d450 @ 0x10d9d450 (190 bytes, 67 insns) */
void f_10d9d450(void) {
  FTRACE(0x10d9d450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d450 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d451 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9d456 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9d457 push esi */
  push32((uint32_t)(ESI));
  /* 10d9d458 push edi */
  push32((uint32_t)(EDI));
  /* 10d9d459 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d9d460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9d466:;
  /* 10d9d466 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d46a jne 0x10d9d48a */
  if (!C.zf) goto L_10d9d48a;
  /* 10d9d46c push 0x10db9f00 */
  push32((uint32_t)(0x10db9f00u));
  /* 10d9d471 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9d473 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 10d9d475 push 0x10dba054 */
  push32((uint32_t)(0x10dba054u));
  /* 10d9d47a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d47c call 0x10d91ee0 */
  push32(0x10d9d481u); f_10d91ee0();
  /* 10d9d481 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d484 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d487 jne 0x10d9d48a */
  if (!C.zf) goto L_10d9d48a;
  /* 10d9d489 int3  */
  x86_unimpl("int3 @ 0x10d9d489");
L_10d9d48a:;
  /* 10d9d48a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d48c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9d48e jne 0x10d9d466 */
  if (!C.zf) goto L_10d9d466;
  /* 10d9d490 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d493 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d9d496 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d49b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d49d je 0x10d9d4fa */
  if (C.zf) goto L_10d9d4fa;
  /* 10d9d49f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d4a3 call 0x10d9c750 */
  push32(0x10d9d4a8u); f_10d9c750();
  /* 10d9d4a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d4ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4b1 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d4b2 call 0x10d9fad0 */
  push32(0x10d9d4b7u); f_10d9fad0();
  /* 10d9d4b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d4ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9d4c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d4c1 call 0x10d9f9a0 */
  push32(0x10d9d4c6u); f_10d9f9a0();
  /* 10d9d4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d4c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d4cb jge 0x10d9d4d6 */
  if ((C.sf==C.of)) goto L_10d9d4d6;
  /* 10d9d4cd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10d9d4d4 jmp 0x10d9d4fa */
  goto L_10d9d4fa;
L_10d9d4d6:;
  /* 10d9d4d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4d9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d4dd je 0x10d9d4fa */
  if (C.zf) goto L_10d9d4fa;
  /* 10d9d4df push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d4e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4e4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d9d4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d4e8 call 0x10d938b0 */
  push32(0x10d9d4edu); f_10d938b0();
  /* 10d9d4ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d4f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4f3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_10d9d4fa:;
  /* 10d9d4fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9d4fd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 10d9d504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d507 pop edi */
  EDI = (pop32());
  /* 10d9d508 pop esi */
  ESI = (pop32());
  /* 10d9d509 pop ebx */
  EBX = (pop32());
  /* 10d9d50a mov esp, ebp */
  ESP = (EBP);
  /* 10d9d50c pop ebp */
  EBP = (pop32());
  /* 10d9d50d ret  */
  ESPCHK(0x10d9d450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d510 @ 0x10d9d510 (210 bytes, 63 insns) */
void f_10d9d510(void) {
  FTRACE(0x10d9d510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d510 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d511 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d513 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d517 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d51d jae 0x10d9d541 */
  if (!C.cf) goto L_10d9d541;
  /* 10d9d51f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d522 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9d525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d528 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9d52b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9d52e mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9d535 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9d53a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d53d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9d53f jne 0x10d9d554 */
  if (!C.zf) goto L_10d9d554;
L_10d9d541:;
  /* 10d9d541 call 0x10d9acf0 */
  push32(0x10d9d546u); f_10d9acf0();
  /* 10d9d546 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9d54c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d54f jmp 0x10d9d5de */
  goto L_10d9d5de;
L_10d9d554:;
  /* 10d9d554 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d557 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d558 call 0x10d9c510 */
  push32(0x10d9d55du); f_10d9c510();
  /* 10d9d55d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d560 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d563 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9d566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d569 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d56c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9d56f mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9d576 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 10d9d57b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d57e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d580 je 0x10d9d5bd */
  if (C.zf) goto L_10d9d5bd;
  /* 10d9d582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d585 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d586 call 0x10d9c390 */
  push32(0x10d9d58bu); f_10d9c390();
  /* 10d9d58b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d58e push eax */
  push32((uint32_t)(EAX));
  /* 10d9d58f call dword ptr [0x10dc0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0270))), 0x10d9d595u);
  /* 10d9d595 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d597 jne 0x10d9d5a4 */
  if (!C.zf) goto L_10d9d5a4;
  /* 10d9d599 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9d59fu);
  /* 10d9d59f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d5a2 jmp 0x10d9d5ab */
  goto L_10d9d5ab;
L_10d9d5a4:;
  /* 10d9d5a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d9d5ab:;
  /* 10d9d5ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d5af jne 0x10d9d5b3 */
  if (!C.zf) goto L_10d9d5b3;
  /* 10d9d5b1 jmp 0x10d9d5cf */
  goto L_10d9d5cf;
L_10d9d5b3:;
  /* 10d9d5b3 call 0x10d9ad00 */
  push32(0x10d9d5b8u); f_10d9ad00();
  /* 10d9d5b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d5bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d9d5bd:;
  /* 10d9d5bd call 0x10d9acf0 */
  push32(0x10d9d5c2u); f_10d9acf0();
  /* 10d9d5c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9d5c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10d9d5cf:;
  /* 10d9d5cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d5d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d5d3 call 0x10d9c5a0 */
  push32(0x10d9d5d8u); f_10d9c5a0();
  /* 10d9d5d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d5db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9d5de:;
  /* 10d9d5de mov esp, ebp */
  ESP = (EBP);
  /* 10d9d5e0 pop ebp */
  EBP = (pop32());
  /* 10d9d5e1 ret  */
  ESPCHK(0x10d9d510u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x10d9d5f0 (219 bytes, 64 insns) */
void f_10d9d5f0(void) {
  FTRACE(0x10d9d5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d5f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d5f4 cmp dword ptr [0x10dbe69c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe69c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d5fb je 0x10d9d691 */
  if (C.zf) goto L_10d9d691;
  /* 10d9d601 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d9d603 push 0x10dba070 */
  push32((uint32_t)(0x10dba070u));
  /* 10d9d608 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d60a push 0xac */
  push32((uint32_t)(0xacu));
  /* 10d9d60f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d611 call 0x10d93230 */
  push32(0x10d9d616u); f_10d93230();
  /* 10d9d616 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d620 jne 0x10d9d62c */
  if (!C.zf) goto L_10d9d62c;
  /* 10d9d622 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9d627 jmp 0x10d9d6c7 */
  goto L_10d9d6c7;
L_10d9d62c:;
  /* 10d9d62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d62f push eax */
  push32((uint32_t)(EAX));
  /* 10d9d630 call 0x10d9d6d0 */
  push32(0x10d9d635u); f_10d9d6d0();
  /* 10d9d635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d638 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9d63a je 0x10d9d65d */
  if (C.zf) goto L_10d9d65d;
  /* 10d9d63c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d63f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d640 call 0x10d9dc60 */
  push32(0x10d9d645u); f_10d9dc60();
  /* 10d9d645 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d648 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d64a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d64d push edx */
  push32((uint32_t)(EDX));
  /* 10d9d64e call 0x10d938b0 */
  push32(0x10d9d653u); f_10d938b0();
  /* 10d9d653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d656 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9d65b jmp 0x10d9d6c7 */
  goto L_10d9d6c7;
L_10d9d65d:;
  /* 10d9d65d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d660 mov dword ptr [0x10dbdc98], eax */
  w32((uint32_t)(0x10dbdc98), (EAX));
  /* 10d9d665 mov ecx, dword ptr [0x10dbe6bc] */
  ECX = (r32((uint32_t)(0x10dbe6bc)));
  /* 10d9d66b push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d66c call 0x10d9dc60 */
  push32(0x10d9d671u); f_10d9dc60();
  /* 10d9d671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d674 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d676 mov edx, dword ptr [0x10dbe6bc] */
  EDX = (r32((uint32_t)(0x10dbe6bc)));
  /* 10d9d67c push edx */
  push32((uint32_t)(EDX));
  /* 10d9d67d call 0x10d938b0 */
  push32(0x10d9d682u); f_10d938b0();
  /* 10d9d682 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d688 mov dword ptr [0x10dbe6bc], eax */
  w32((uint32_t)(0x10dbe6bc), (EAX));
  /* 10d9d68d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d68f jmp 0x10d9d6c7 */
  goto L_10d9d6c7;
L_10d9d691:;
  /* 10d9d691 mov dword ptr [0x10dbdc98], 0x10dbdca0 */
  w32((uint32_t)(0x10dbdc98), (0x10dbdca0u));
  /* 10d9d69b mov ecx, dword ptr [0x10dbe6bc] */
  ECX = (r32((uint32_t)(0x10dbe6bc)));
  /* 10d9d6a1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9d6a2 call 0x10d9dc60 */
  push32(0x10d9d6a7u); f_10d9dc60();
  /* 10d9d6a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d6aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9d6ac mov edx, dword ptr [0x10dbe6bc] */
  EDX = (r32((uint32_t)(0x10dbe6bc)));
  /* 10d9d6b2 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d6b3 call 0x10d938b0 */
  push32(0x10d9d6b8u); f_10d938b0();
  /* 10d9d6b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d6bb mov dword ptr [0x10dbe6bc], 0 */
  w32((uint32_t)(0x10dbe6bc), (0x0u));
  /* 10d9d6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9d6c7:;
  /* 10d9d6c7 mov esp, ebp */
  ESP = (EBP);
  /* 10d9d6c9 pop ebp */
  EBP = (pop32());
  /* 10d9d6ca ret  */
  ESPCHK(0x10d9d5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6d0 @ 0x10d9d6d0 (1423 bytes, 533 insns) */
void f_10d9d6d0(void) {
  FTRACE(0x10d9d6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9d6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9d6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9d6d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9d6d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d9d6dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d6df mov ax, word ptr [0x10dbe6f6] */
  AX = (r16((uint32_t)(0x10dbe6f6)));
  /* 10d9d6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9d6e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d6ea mov cx, word ptr [0x10dbe6f8] */
  CX = (r16((uint32_t)(0x10dbe6f8)));
  /* 10d9d6f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9d6f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9d6f8 jne 0x10d9d702 */
  if (!C.zf) goto L_10d9d702;
  /* 10d9d6fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9d6fd jmp 0x10d9dc5b */
  goto L_10d9dc5b;
L_10d9d702:;
  /* 10d9d702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d705 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d708 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d709 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10d9d70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d70e push eax */
  push32((uint32_t)(EAX));
  /* 10d9d70f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d711 call 0x10da0fe0 */
  push32(0x10d9d716u); f_10da0fe0();
  /* 10d9d716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d724 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d727 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d728 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10d9d72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d72d push eax */
  push32((uint32_t)(EAX));
  /* 10d9d72e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d730 call 0x10da0fe0 */
  push32(0x10d9d735u); f_10da0fe0();
  /* 10d9d735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d743 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d746 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d747 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10d9d749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d74c push eax */
  push32((uint32_t)(EAX));
  /* 10d9d74d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d74f call 0x10da0fe0 */
  push32(0x10d9d754u); f_10da0fe0();
  /* 10d9d754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d762 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d765 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d766 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10d9d768 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d76b push eax */
  push32((uint32_t)(EAX));
  /* 10d9d76c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d76e call 0x10da0fe0 */
  push32(0x10d9d773u); f_10da0fe0();
  /* 10d9d773 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d779 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d77b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d77e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d781 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d784 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d785 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10d9d787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d78a push eax */
  push32((uint32_t)(EAX));
  /* 10d9d78b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d78d call 0x10da0fe0 */
  push32(0x10d9d792u); f_10da0fe0();
  /* 10d9d792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d795 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d798 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d79a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d79d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d7a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7a3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d7a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10d9d7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d7a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d7aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d7ac call 0x10da0fe0 */
  push32(0x10d9d7b1u); f_10da0fe0();
  /* 10d9d7b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d7b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d7b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d7bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d7bf push edx */
  push32((uint32_t)(EDX));
  /* 10d9d7c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10d9d7c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d7c5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d7c8 call 0x10da0fe0 */
  push32(0x10d9d7cdu); f_10da0fe0();
  /* 10d9d7cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d7d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d7d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d7d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d7db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7de push edx */
  push32((uint32_t)(EDX));
  /* 10d9d7df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d9d7e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d7e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d7e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d7e7 call 0x10da0fe0 */
  push32(0x10d9d7ecu); f_10da0fe0();
  /* 10d9d7ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d7f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d7f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d7f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d7fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d7fd push edx */
  push32((uint32_t)(EDX));
  /* 10d9d7fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10d9d800 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d803 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d804 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d806 call 0x10da0fe0 */
  push32(0x10d9d80bu); f_10da0fe0();
  /* 10d9d80b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d80e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d811 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d813 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d819 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d81c push edx */
  push32((uint32_t)(EDX));
  /* 10d9d81d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10d9d81f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d822 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d823 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d825 call 0x10da0fe0 */
  push32(0x10d9d82au); f_10da0fe0();
  /* 10d9d82a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d82d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d830 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d832 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d838 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d83b push edx */
  push32((uint32_t)(EDX));
  /* 10d9d83c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10d9d83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d841 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d842 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d844 call 0x10da0fe0 */
  push32(0x10d9d849u); f_10da0fe0();
  /* 10d9d849 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d84c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d84f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d851 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d854 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d857 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d85a push edx */
  push32((uint32_t)(EDX));
  /* 10d9d85b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10d9d85d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d860 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d861 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d863 call 0x10da0fe0 */
  push32(0x10d9d868u); f_10da0fe0();
  /* 10d9d868 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d86b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d86e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d870 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d873 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d876 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d879 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d87a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10d9d87c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d87f push eax */
  push32((uint32_t)(EAX));
  /* 10d9d880 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d882 call 0x10da0fe0 */
  push32(0x10d9d887u); f_10da0fe0();
  /* 10d9d887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d88a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d88d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d88f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d895 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d898 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d899 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d9d89b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d89e push eax */
  push32((uint32_t)(EAX));
  /* 10d9d89f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d8a1 call 0x10da0fe0 */
  push32(0x10d9d8a6u); f_10da0fe0();
  /* 10d9d8a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d8ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d8ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d8b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d8b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8b7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d8b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d9d8ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d8bd push eax */
  push32((uint32_t)(EAX));
  /* 10d9d8be push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d8c0 call 0x10da0fe0 */
  push32(0x10d9d8c5u); f_10da0fe0();
  /* 10d9d8c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d8cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d8cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d8d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8d6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d8d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d9d8d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d8dc push eax */
  push32((uint32_t)(EAX));
  /* 10d9d8dd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d8df call 0x10da0fe0 */
  push32(0x10d9d8e4u); f_10da0fe0();
  /* 10d9d8e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d8ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d8ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d8f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d8f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d8f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d9d8f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d8fb push eax */
  push32((uint32_t)(EAX));
  /* 10d9d8fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d8fe call 0x10da0fe0 */
  push32(0x10d9d903u); f_10da0fe0();
  /* 10d9d903 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d906 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d909 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d90b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d911 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d914 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d915 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d9d917 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d91a push eax */
  push32((uint32_t)(EAX));
  /* 10d9d91b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d91d call 0x10da0fe0 */
  push32(0x10d9d922u); f_10da0fe0();
  /* 10d9d922 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d928 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d92a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d92d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d930 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d933 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d934 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d9d936 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d939 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d93a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d93c call 0x10da0fe0 */
  push32(0x10d9d941u); f_10da0fe0();
  /* 10d9d941 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d947 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d949 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d94c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d94f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d952 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d953 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d9d955 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d958 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d959 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d95b call 0x10da0fe0 */
  push32(0x10d9d960u); f_10da0fe0();
  /* 10d9d960 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d963 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d966 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d968 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d96e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d971 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d972 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d9d974 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d977 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d978 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d97a call 0x10da0fe0 */
  push32(0x10d9d97fu); f_10da0fe0();
  /* 10d9d97f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d982 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d985 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d987 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d98a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d98d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d990 push edx */
  push32((uint32_t)(EDX));
  /* 10d9d991 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d9d993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d996 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d997 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d999 call 0x10da0fe0 */
  push32(0x10d9d99eu); f_10da0fe0();
  /* 10d9d99e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d9a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d9a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d9a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d9ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9af push edx */
  push32((uint32_t)(EDX));
  /* 10d9d9b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d9d9b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d9b5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d9b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d9b8 call 0x10da0fe0 */
  push32(0x10d9d9bdu); f_10da0fe0();
  /* 10d9d9bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d9c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d9c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d9cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9ce push edx */
  push32((uint32_t)(EDX));
  /* 10d9d9cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d9d9d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d9d4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d9d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d9d7 call 0x10da0fe0 */
  push32(0x10d9d9dcu); f_10da0fe0();
  /* 10d9d9dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9d9e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9d9e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9d9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9d9ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9ed push edx */
  push32((uint32_t)(EDX));
  /* 10d9d9ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d9d9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9d9f3 push eax */
  push32((uint32_t)(EAX));
  /* 10d9d9f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9d9f6 call 0x10da0fe0 */
  push32(0x10d9d9fbu); f_10da0fe0();
  /* 10d9d9fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9d9fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da01 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da03 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9da06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9da09 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da0c push edx */
  push32((uint32_t)(EDX));
  /* 10d9da0d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d9da0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9da12 push eax */
  push32((uint32_t)(EAX));
  /* 10d9da13 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9da15 call 0x10da0fe0 */
  push32(0x10d9da1au); f_10da0fe0();
  /* 10d9da1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da20 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9da25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9da28 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da2b push edx */
  push32((uint32_t)(EDX));
  /* 10d9da2c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10d9da2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9da31 push eax */
  push32((uint32_t)(EAX));
  /* 10d9da32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9da34 call 0x10da0fe0 */
  push32(0x10d9da39u); f_10da0fe0();
  /* 10d9da39 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da3f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da41 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9da44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9da47 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da4a push edx */
  push32((uint32_t)(EDX));
  /* 10d9da4b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10d9da4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9da50 push eax */
  push32((uint32_t)(EAX));
  /* 10d9da51 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9da53 call 0x10da0fe0 */
  push32(0x10d9da58u); f_10da0fe0();
  /* 10d9da58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da5e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9da63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9da66 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da69 push edx */
  push32((uint32_t)(EDX));
  /* 10d9da6a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 10d9da6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9da6f push eax */
  push32((uint32_t)(EAX));
  /* 10d9da70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9da72 call 0x10da0fe0 */
  push32(0x10d9da77u); f_10da0fe0();
  /* 10d9da77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da7a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9da82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9da85 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da88 push edx */
  push32((uint32_t)(EDX));
  /* 10d9da89 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 10d9da8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9da8e push eax */
  push32((uint32_t)(EAX));
  /* 10d9da8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9da91 call 0x10da0fe0 */
  push32(0x10d9da96u); f_10da0fe0();
  /* 10d9da96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9da99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9da9c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9da9e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9daa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9daa4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9daa7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9daa8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 10d9daaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9daad push eax */
  push32((uint32_t)(EAX));
  /* 10d9daae push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dab0 call 0x10da0fe0 */
  push32(0x10d9dab5u); f_10da0fe0();
  /* 10d9dab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dab8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dabb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dabd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dac3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dac6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dac7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10d9dac9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9dacc push eax */
  push32((uint32_t)(EAX));
  /* 10d9dacd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dacf call 0x10da0fe0 */
  push32(0x10d9dad4u); f_10da0fe0();
  /* 10d9dad4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dad7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dada or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dadc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dae2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dae8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dae9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 10d9daeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9daee push eax */
  push32((uint32_t)(EAX));
  /* 10d9daef push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9daf1 call 0x10da0fe0 */
  push32(0x10d9daf6u); f_10da0fe0();
  /* 10d9daf6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9daf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dafc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dafe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9db01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9db04 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db0a push edx */
  push32((uint32_t)(EDX));
  /* 10d9db0b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10d9db0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9db10 push eax */
  push32((uint32_t)(EAX));
  /* 10d9db11 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9db13 call 0x10da0fe0 */
  push32(0x10d9db18u); f_10da0fe0();
  /* 10d9db18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9db1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9db20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9db23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9db26 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db2c push edx */
  push32((uint32_t)(EDX));
  /* 10d9db2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d9db2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9db32 push eax */
  push32((uint32_t)(EAX));
  /* 10d9db33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9db35 call 0x10da0fe0 */
  push32(0x10d9db3au); f_10da0fe0();
  /* 10d9db3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9db40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9db42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9db45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9db48 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db4e push edx */
  push32((uint32_t)(EDX));
  /* 10d9db4f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10d9db51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9db54 push eax */
  push32((uint32_t)(EAX));
  /* 10d9db55 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9db57 call 0x10da0fe0 */
  push32(0x10d9db5cu); f_10da0fe0();
  /* 10d9db5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9db62 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9db64 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9db67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9db6a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db70 push edx */
  push32((uint32_t)(EDX));
  /* 10d9db71 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10d9db73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9db76 push eax */
  push32((uint32_t)(EAX));
  /* 10d9db77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9db79 call 0x10da0fe0 */
  push32(0x10d9db7eu); f_10da0fe0();
  /* 10d9db7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9db84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9db86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9db89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9db8c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9db92 push edx */
  push32((uint32_t)(EDX));
  /* 10d9db93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10d9db95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9db98 push eax */
  push32((uint32_t)(EAX));
  /* 10d9db99 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9db9b call 0x10da0fe0 */
  push32(0x10d9dba0u); f_10da0fe0();
  /* 10d9dba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dba3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dba6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dba8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dbab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dbae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dbb4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dbb5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10d9dbb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9dbba push eax */
  push32((uint32_t)(EAX));
  /* 10d9dbbb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dbbd call 0x10da0fe0 */
  push32(0x10d9dbc2u); f_10da0fe0();
  /* 10d9dbc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dbc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dbc8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dbca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dbcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dbd0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dbd6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dbd7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10d9dbd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9dbdc push eax */
  push32((uint32_t)(EAX));
  /* 10d9dbdd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dbdf call 0x10da0fe0 */
  push32(0x10d9dbe4u); f_10da0fe0();
  /* 10d9dbe4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dbe7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dbea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dbec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dbef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dbf2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dbf8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dbf9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10d9dbfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dbfe push eax */
  push32((uint32_t)(EAX));
  /* 10d9dbff push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dc01 call 0x10da0fe0 */
  push32(0x10d9dc06u); f_10da0fe0();
  /* 10d9dc06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dc0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dc0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dc11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dc14 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc1a push edx */
  push32((uint32_t)(EDX));
  /* 10d9dc1b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d9dc1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dc20 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dc21 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dc23 call 0x10da0fe0 */
  push32(0x10d9dc28u); f_10da0fe0();
  /* 10d9dc28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc2b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dc2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dc30 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dc33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dc36 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc3c push edx */
  push32((uint32_t)(EDX));
  /* 10d9dc3d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 10d9dc42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dc45 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dc46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dc48 call 0x10da0fe0 */
  push32(0x10d9dc4du); f_10da0fe0();
  /* 10d9dc4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9dc53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dc55 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d9dc58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_10d9dc5b:;
  /* 10d9dc5b mov esp, ebp */
  ESP = (EBP);
  /* 10d9dc5d pop ebp */
  EBP = (pop32());
  /* 10d9dc5e ret  */
  ESPCHK(0x10d9d6d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x10d9dc60 (779 bytes, 265 insns) */
void f_10d9dc60(void) {
  FTRACE(0x10d9dc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9dc60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9dc61 mov ebp, esp */
  EBP = (ESP);
  /* 10d9dc63 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9dc67 jne 0x10d9dc6e */
  if (!C.zf) goto L_10d9dc6e;
  /* 10d9dc69 jmp 0x10d9df69 */
  goto L_10d9df69;
L_10d9dc6e:;
  /* 10d9dc6e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dc70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dc73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9dc76 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dc77 call 0x10d938b0 */
  push32(0x10d9dc7cu); f_10d938b0();
  /* 10d9dc7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc7f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dc81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dc84 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d9dc87 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dc88 call 0x10d938b0 */
  push32(0x10d9dc8du); f_10d938b0();
  /* 10d9dc8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dc90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dc92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dc95 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9dc98 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dc99 call 0x10d938b0 */
  push32(0x10d9dc9eu); f_10d938b0();
  /* 10d9dc9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dca3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dca6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9dca9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dcaa call 0x10d938b0 */
  push32(0x10d9dcafu); f_10d938b0();
  /* 10d9dcaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dcb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dcb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dcb7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d9dcba push eax */
  push32((uint32_t)(EAX));
  /* 10d9dcbb call 0x10d938b0 */
  push32(0x10d9dcc0u); f_10d938b0();
  /* 10d9dcc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dcc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dcc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dcc8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d9dccb push edx */
  push32((uint32_t)(EDX));
  /* 10d9dccc call 0x10d938b0 */
  push32(0x10d9dcd1u); f_10d938b0();
  /* 10d9dcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dcd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dcd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dcd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9dcdb push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dcdc call 0x10d938b0 */
  push32(0x10d9dce1u); f_10d938b0();
  /* 10d9dce1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dce4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dce6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dce9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d9dcec push eax */
  push32((uint32_t)(EAX));
  /* 10d9dced call 0x10d938b0 */
  push32(0x10d9dcf2u); f_10d938b0();
  /* 10d9dcf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dcf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dcf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dcfa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d9dcfd push edx */
  push32((uint32_t)(EDX));
  /* 10d9dcfe call 0x10d938b0 */
  push32(0x10d9dd03u); f_10d938b0();
  /* 10d9dd03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd06 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd0b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10d9dd0e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dd0f call 0x10d938b0 */
  push32(0x10d9dd14u); f_10d938b0();
  /* 10d9dd14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd1c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 10d9dd1f push eax */
  push32((uint32_t)(EAX));
  /* 10d9dd20 call 0x10d938b0 */
  push32(0x10d9dd25u); f_10d938b0();
  /* 10d9dd25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd2d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d9dd30 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dd31 call 0x10d938b0 */
  push32(0x10d9dd36u); f_10d938b0();
  /* 10d9dd36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd39 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd3e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 10d9dd41 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dd42 call 0x10d938b0 */
  push32(0x10d9dd47u); f_10d938b0();
  /* 10d9dd47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd4f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d9dd52 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dd53 call 0x10d938b0 */
  push32(0x10d9dd58u); f_10d938b0();
  /* 10d9dd58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd60 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 10d9dd63 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dd64 call 0x10d938b0 */
  push32(0x10d9dd69u); f_10d938b0();
  /* 10d9dd69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd6c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd71 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 10d9dd74 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dd75 call 0x10d938b0 */
  push32(0x10d9dd7au); f_10d938b0();
  /* 10d9dd7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd82 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d9dd85 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dd86 call 0x10d938b0 */
  push32(0x10d9dd8bu); f_10d938b0();
  /* 10d9dd8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dd90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dd93 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 10d9dd96 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dd97 call 0x10d938b0 */
  push32(0x10d9dd9cu); f_10d938b0();
  /* 10d9dd9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dd9f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dda1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dda4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 10d9dda7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dda8 call 0x10d938b0 */
  push32(0x10d9ddadu); f_10d938b0();
  /* 10d9ddad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ddb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ddb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ddb5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 10d9ddb8 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ddb9 call 0x10d938b0 */
  push32(0x10d9ddbeu); f_10d938b0();
  /* 10d9ddbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ddc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ddc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ddc6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d9ddc9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ddca call 0x10d938b0 */
  push32(0x10d9ddcfu); f_10d938b0();
  /* 10d9ddcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ddd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ddd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ddd7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d9ddda push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dddb call 0x10d938b0 */
  push32(0x10d9dde0u); f_10d938b0();
  /* 10d9dde0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dde3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dde5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dde8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 10d9ddeb push eax */
  push32((uint32_t)(EAX));
  /* 10d9ddec call 0x10d938b0 */
  push32(0x10d9ddf1u); f_10d938b0();
  /* 10d9ddf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ddf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ddf6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ddf9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 10d9ddfc push edx */
  push32((uint32_t)(EDX));
  /* 10d9ddfd call 0x10d938b0 */
  push32(0x10d9de02u); f_10d938b0();
  /* 10d9de02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de0a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 10d9de0d push ecx */
  push32((uint32_t)(ECX));
  /* 10d9de0e call 0x10d938b0 */
  push32(0x10d9de13u); f_10d938b0();
  /* 10d9de13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de1b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 10d9de1e push eax */
  push32((uint32_t)(EAX));
  /* 10d9de1f call 0x10d938b0 */
  push32(0x10d9de24u); f_10d938b0();
  /* 10d9de24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de27 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de2c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 10d9de2f push edx */
  push32((uint32_t)(EDX));
  /* 10d9de30 call 0x10d938b0 */
  push32(0x10d9de35u); f_10d938b0();
  /* 10d9de35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de3d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 10d9de40 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9de41 call 0x10d938b0 */
  push32(0x10d9de46u); f_10d938b0();
  /* 10d9de46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de49 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de4e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 10d9de51 push eax */
  push32((uint32_t)(EAX));
  /* 10d9de52 call 0x10d938b0 */
  push32(0x10d9de57u); f_10d938b0();
  /* 10d9de57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de5a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de5f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 10d9de62 push edx */
  push32((uint32_t)(EDX));
  /* 10d9de63 call 0x10d938b0 */
  push32(0x10d9de68u); f_10d938b0();
  /* 10d9de68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de70 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 10d9de73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9de74 call 0x10d938b0 */
  push32(0x10d9de79u); f_10d938b0();
  /* 10d9de79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de7c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de81 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 10d9de84 push eax */
  push32((uint32_t)(EAX));
  /* 10d9de85 call 0x10d938b0 */
  push32(0x10d9de8au); f_10d938b0();
  /* 10d9de8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9de8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9de8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9de92 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 10d9de98 push edx */
  push32((uint32_t)(EDX));
  /* 10d9de99 call 0x10d938b0 */
  push32(0x10d9de9eu); f_10d938b0();
  /* 10d9de9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dea6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 10d9deac push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dead call 0x10d938b0 */
  push32(0x10d9deb2u); f_10d938b0();
  /* 10d9deb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9deb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9deb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9deba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 10d9dec0 push eax */
  push32((uint32_t)(EAX));
  /* 10d9dec1 call 0x10d938b0 */
  push32(0x10d9dec6u); f_10d938b0();
  /* 10d9dec6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dec9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9decb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dece mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 10d9ded4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ded5 call 0x10d938b0 */
  push32(0x10d9dedau); f_10d938b0();
  /* 10d9deda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dedd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9dedf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9dee2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 10d9dee8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dee9 call 0x10d938b0 */
  push32(0x10d9deeeu); f_10d938b0();
  /* 10d9deee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9def1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9def3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9def6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 10d9defc push eax */
  push32((uint32_t)(EAX));
  /* 10d9defd call 0x10d938b0 */
  push32(0x10d9df02u); f_10d938b0();
  /* 10d9df02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9df05 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9df07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9df0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 10d9df10 push edx */
  push32((uint32_t)(EDX));
  /* 10d9df11 call 0x10d938b0 */
  push32(0x10d9df16u); f_10d938b0();
  /* 10d9df16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9df19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9df1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9df1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 10d9df24 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9df25 call 0x10d938b0 */
  push32(0x10d9df2au); f_10d938b0();
  /* 10d9df2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9df2d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9df2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9df32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 10d9df38 push eax */
  push32((uint32_t)(EAX));
  /* 10d9df39 call 0x10d938b0 */
  push32(0x10d9df3eu); f_10d938b0();
  /* 10d9df3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9df41 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9df43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9df46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10d9df4c push edx */
  push32((uint32_t)(EDX));
  /* 10d9df4d call 0x10d938b0 */
  push32(0x10d9df52u); f_10d938b0();
  /* 10d9df52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9df55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9df57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9df5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 10d9df60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9df61 call 0x10d938b0 */
  push32(0x10d9df66u); f_10d938b0();
  /* 10d9df66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9df69:;
  /* 10d9df69 pop ebp */
  EBP = (pop32());
  /* 10d9df6a ret  */
  ESPCHK(0x10d9dc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x10d9df70 (678 bytes, 180 insns) */
void f_10d9df70(void) {
  FTRACE(0x10d9df70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9df70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9df71 mov ebp, esp */
  EBP = (ESP);
  /* 10d9df73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9df76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9df7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9df7f mov ax, word ptr [0x10dbe6f2] */
  AX = (r16((uint32_t)(0x10dbe6f2)));
  /* 10d9df85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9df88 cmp dword ptr [0x10dbe698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9df8f je 0x10d9e0ea */
  if (C.zf) goto L_10d9e0ea;
  /* 10d9df95 push 0x10dbe6c0 */
  push32((uint32_t)(0x10dbe6c0u));
  /* 10d9df9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 10d9df9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9df9f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9dfa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dfa2 call 0x10da0fe0 */
  push32(0x10d9dfa7u); f_10da0fe0();
  /* 10d9dfa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dfaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dfad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9dfaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9dfb2 push 0x10dbe6c4 */
  push32((uint32_t)(0x10dbe6c4u));
  /* 10d9dfb7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10d9dfb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9dfbc push eax */
  push32((uint32_t)(EAX));
  /* 10d9dfbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dfbf call 0x10da0fe0 */
  push32(0x10d9dfc4u); f_10da0fe0();
  /* 10d9dfc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dfc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dfca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dfcc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9dfcf push 0x10dbe6c8 */
  push32((uint32_t)(0x10dbe6c8u));
  /* 10d9dfd4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d9dfd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9dfd9 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dfda push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9dfdc call 0x10da0fe0 */
  push32(0x10d9dfe1u); f_10da0fe0();
  /* 10d9dfe1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dfe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9dfe7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9dfe9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9dfec mov edx, dword ptr [0x10dbe6c8] */
  EDX = (r32((uint32_t)(0x10dbe6c8)));
  /* 10d9dff2 push edx */
  push32((uint32_t)(EDX));
  /* 10d9dff3 call 0x10d9e220 */
  push32(0x10d9dff8u); f_10d9e220();
  /* 10d9dff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9dffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9dfff je 0x10d9e059 */
  if (C.zf) goto L_10d9e059;
  /* 10d9e001 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e003 mov eax, dword ptr [0x10dbe6c0] */
  EAX = (r32((uint32_t)(0x10dbe6c0)));
  /* 10d9e008 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e009 call 0x10d938b0 */
  push32(0x10d9e00eu); f_10d938b0();
  /* 10d9e00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e011 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e013 mov ecx, dword ptr [0x10dbe6c4] */
  ECX = (r32((uint32_t)(0x10dbe6c4)));
  /* 10d9e019 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e01a call 0x10d938b0 */
  push32(0x10d9e01fu); f_10d938b0();
  /* 10d9e01f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e022 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e024 mov edx, dword ptr [0x10dbe6c8] */
  EDX = (r32((uint32_t)(0x10dbe6c8)));
  /* 10d9e02a push edx */
  push32((uint32_t)(EDX));
  /* 10d9e02b call 0x10d938b0 */
  push32(0x10d9e030u); f_10d938b0();
  /* 10d9e030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e033 mov dword ptr [0x10dbe6c0], 0 */
  w32((uint32_t)(0x10dbe6c0), (0x0u));
  /* 10d9e03d mov dword ptr [0x10dbe6c4], 0 */
  w32((uint32_t)(0x10dbe6c4), (0x0u));
  /* 10d9e047 mov dword ptr [0x10dbe6c8], 0 */
  w32((uint32_t)(0x10dbe6c8), (0x0u));
  /* 10d9e051 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e054 jmp 0x10d9e212 */
  goto L_10d9e212;
L_10d9e059:;
  /* 10d9e059 mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e05e cmp dword ptr [eax], 0x10dbdd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x10dbdd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e064 je 0x10d9e0a0 */
  if (C.zf) goto L_10d9e0a0;
  /* 10d9e066 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e068 mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e06e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9e070 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e071 call 0x10d938b0 */
  push32(0x10d9e076u); f_10d938b0();
  /* 10d9e076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e079 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e07b mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e080 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9e083 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e084 call 0x10d938b0 */
  push32(0x10d9e089u); f_10d938b0();
  /* 10d9e089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e08c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e08e mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e094 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d9e097 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e098 call 0x10d938b0 */
  push32(0x10d9e09du); f_10d938b0();
  /* 10d9e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9e0a0:;
  /* 10d9e0a0 mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e0a6 mov edx, dword ptr [0x10dbe6c0] */
  EDX = (r32((uint32_t)(0x10dbe6c0)));
  /* 10d9e0ac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d9e0ae mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e0b3 mov ecx, dword ptr [0x10dbe6c4] */
  ECX = (r32((uint32_t)(0x10dbe6c4)));
  /* 10d9e0b9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d9e0bc mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e0c2 mov eax, dword ptr [0x10dbe6c8] */
  EAX = (r32((uint32_t)(0x10dbe6c8)));
  /* 10d9e0c7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d9e0ca mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e0d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9e0d2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9e0d4 mov byte ptr [0x10dbcea8], al */
  w8((uint32_t)(0x10dbcea8), (AL));
  /* 10d9e0d9 mov dword ptr [0x10dbceac], 1 */
  w32((uint32_t)(0x10dbceac), (0x1u));
  /* 10d9e0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e0e5 jmp 0x10d9e212 */
  goto L_10d9e212;
L_10d9e0ea:;
  /* 10d9e0ea push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e0ec mov ecx, dword ptr [0x10dbe6c0] */
  ECX = (r32((uint32_t)(0x10dbe6c0)));
  /* 10d9e0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e0f3 call 0x10d938b0 */
  push32(0x10d9e0f8u); f_10d938b0();
  /* 10d9e0f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e0fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e0fd mov edx, dword ptr [0x10dbe6c4] */
  EDX = (r32((uint32_t)(0x10dbe6c4)));
  /* 10d9e103 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e104 call 0x10d938b0 */
  push32(0x10d9e109u); f_10d938b0();
  /* 10d9e109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e10c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e10e mov eax, dword ptr [0x10dbe6c8] */
  EAX = (r32((uint32_t)(0x10dbe6c8)));
  /* 10d9e113 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e114 call 0x10d938b0 */
  push32(0x10d9e119u); f_10d938b0();
  /* 10d9e119 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e11c mov dword ptr [0x10dbe6c0], 0 */
  w32((uint32_t)(0x10dbe6c0), (0x0u));
  /* 10d9e126 mov dword ptr [0x10dbe6c4], 0 */
  w32((uint32_t)(0x10dbe6c4), (0x0u));
  /* 10d9e130 mov dword ptr [0x10dbe6c8], 0 */
  w32((uint32_t)(0x10dbe6c8), (0x0u));
  /* 10d9e13a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 10d9e13f push 0x10dba07c */
  push32((uint32_t)(0x10dba07cu));
  /* 10d9e144 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e146 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e148 call 0x10d92e20 */
  push32(0x10d9e14du); f_10d92e20();
  /* 10d9e14d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e150 mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e156 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d9e158 mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e15e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e161 jne 0x10d9e16b */
  if (!C.zf) goto L_10d9e16b;
  /* 10d9e163 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e166 jmp 0x10d9e212 */
  goto L_10d9e212;
L_10d9e16b:;
  /* 10d9e16b push 0x10dba04c */
  push32((uint32_t)(0x10dba04cu));
  /* 10d9e170 mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e175 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9e177 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e178 call 0x10d95dd0 */
  push32(0x10d9e17du); f_10d95dd0();
  /* 10d9e17d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e180 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 10d9e185 push 0x10dba07c */
  push32((uint32_t)(0x10dba07cu));
  /* 10d9e18a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e18c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e18e call 0x10d92e20 */
  push32(0x10d9e193u); f_10d92e20();
  /* 10d9e193 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e196 mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e19c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d9e19f mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1a4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e1a8 jne 0x10d9e1af */
  if (!C.zf) goto L_10d9e1af;
  /* 10d9e1aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e1ad jmp 0x10d9e212 */
  goto L_10d9e212;
L_10d9e1af:;
  /* 10d9e1af mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1b5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9e1b8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d9e1bb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 10d9e1c0 push 0x10dba07c */
  push32((uint32_t)(0x10dba07cu));
  /* 10d9e1c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e1c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e1c9 call 0x10d92e20 */
  push32(0x10d9e1ceu); f_10d92e20();
  /* 10d9e1ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e1d1 mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1d7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10d9e1da mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1e0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e1e4 jne 0x10d9e1eb */
  if (!C.zf) goto L_10d9e1eb;
  /* 10d9e1e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e1e9 jmp 0x10d9e212 */
  goto L_10d9e212;
L_10d9e1eb:;
  /* 10d9e1eb mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1f0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9e1f3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d9e1f6 mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e1fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9e1fe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d9e200 mov byte ptr [0x10dbcea8], cl */
  w8((uint32_t)(0x10dbcea8), (CL));
  /* 10d9e206 mov dword ptr [0x10dbceac], 1 */
  w32((uint32_t)(0x10dbceac), (0x1u));
  /* 10d9e210 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9e212:;
  /* 10d9e212 mov esp, ebp */
  ESP = (EBP);
  /* 10d9e214 pop ebp */
  EBP = (pop32());
  /* 10d9e215 ret  */
  ESPCHK(0x10d9df70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d9e220 (125 bytes, 49 insns) */
void f_10d9e220(void) {
  FTRACE(0x10d9e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e221 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e223 push ecx */
  push32((uint32_t)(ECX));
L_10d9e224:;
  /* 10d9e224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9e22a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9e22c je 0x10d9e299 */
  if (C.zf) goto L_10d9e299;
  /* 10d9e22e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e231 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9e234 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e237 jl 0x10d9e25d */
  if ((C.sf!=C.of)) goto L_10d9e25d;
  /* 10d9e239 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e23c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9e23f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e242 jg 0x10d9e25d */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9e25d;
  /* 10d9e244 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e247 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9e24a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9e24d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e250 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d9e252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d9e25b jmp 0x10d9e297 */
  goto L_10d9e297;
L_10d9e25d:;
  /* 10d9e25d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e260 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9e263 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e266 jne 0x10d9e28e */
  if (!C.zf) goto L_10d9e28e;
  /* 10d9e268 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e26b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9e26e:;
  /* 10d9e26e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e274 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d9e277 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d9e279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e27c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e27f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9e282 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e285 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9e288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e28a jne 0x10d9e26e */
  if (!C.zf) goto L_10d9e26e;
  /* 10d9e28c jmp 0x10d9e297 */
  goto L_10d9e297;
L_10d9e28e:;
  /* 10d9e28e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e294 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d9e297:;
  /* 10d9e297 jmp 0x10d9e224 */
  goto L_10d9e224;
L_10d9e299:;
  /* 10d9e299 mov esp, ebp */
  ESP = (EBP);
  /* 10d9e29b pop ebp */
  EBP = (pop32());
  /* 10d9e29c ret  */
  ESPCHK(0x10d9e220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e2a0 @ 0x10d9e2a0 (304 bytes, 85 insns) */
void f_10d9e2a0(void) {
  FTRACE(0x10d9e2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e2a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e2a4 cmp dword ptr [0x10dbe694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e2ab je 0x10d9e36c */
  if (C.zf) goto L_10d9e36c;
  /* 10d9e2b1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d9e2b3 push 0x10dba088 */
  push32((uint32_t)(0x10dba088u));
  /* 10d9e2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e2ba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d9e2bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e2be call 0x10d93230 */
  push32(0x10d9e2c3u); f_10d93230();
  /* 10d9e2c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e2c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9e2c9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e2cd jne 0x10d9e2d9 */
  if (!C.zf) goto L_10d9e2d9;
  /* 10d9e2cf mov eax, 1 */
  EAX = (0x1u);
  /* 10d9e2d4 jmp 0x10d9e3cc */
  goto L_10d9e3cc;
L_10d9e2d9:;
  /* 10d9e2d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e2dc push eax */
  push32((uint32_t)(EAX));
  /* 10d9e2dd call 0x10d9e3d0 */
  push32(0x10d9e2e2u); f_10d9e3d0();
  /* 10d9e2e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e2e7 je 0x10d9e30d */
  if (C.zf) goto L_10d9e30d;
  /* 10d9e2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e2ec push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e2ed call 0x10d9e660 */
  push32(0x10d9e2f2u); f_10d9e660();
  /* 10d9e2f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e2f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e2f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e2fa push edx */
  push32((uint32_t)(EDX));
  /* 10d9e2fb call 0x10d938b0 */
  push32(0x10d9e300u); f_10d938b0();
  /* 10d9e300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e303 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9e308 jmp 0x10d9e3cc */
  goto L_10d9e3cc;
L_10d9e30d:;
  /* 10d9e30d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e310 mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e316 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9e318 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d9e31a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e31d mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e323 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d9e326 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d9e329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e32c mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e332 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d9e335 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10d9e338 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e33b mov dword ptr [0x10dbdd88], eax */
  w32((uint32_t)(0x10dbdd88), (EAX));
  /* 10d9e340 mov ecx, dword ptr [0x10dbe6cc] */
  ECX = (r32((uint32_t)(0x10dbe6cc)));
  /* 10d9e346 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e347 call 0x10d9e660 */
  push32(0x10d9e34cu); f_10d9e660();
  /* 10d9e34c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e34f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e351 mov edx, dword ptr [0x10dbe6cc] */
  EDX = (r32((uint32_t)(0x10dbe6cc)));
  /* 10d9e357 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e358 call 0x10d938b0 */
  push32(0x10d9e35du); f_10d938b0();
  /* 10d9e35d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e360 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e363 mov dword ptr [0x10dbe6cc], eax */
  w32((uint32_t)(0x10dbe6cc), (EAX));
  /* 10d9e368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e36a jmp 0x10d9e3cc */
  goto L_10d9e3cc;
L_10d9e36c:;
  /* 10d9e36c mov ecx, dword ptr [0x10dbdd88] */
  ECX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e372 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9e374 mov dword ptr [0x10dbdd58], edx */
  w32((uint32_t)(0x10dbdd58), (EDX));
  /* 10d9e37a mov eax, dword ptr [0x10dbdd88] */
  EAX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e37f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d9e382 mov dword ptr [0x10dbdd5c], ecx */
  w32((uint32_t)(0x10dbdd5c), (ECX));
  /* 10d9e388 mov edx, dword ptr [0x10dbdd88] */
  EDX = (r32((uint32_t)(0x10dbdd88)));
  /* 10d9e38e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d9e391 mov dword ptr [0x10dbdd60], eax */
  w32((uint32_t)(0x10dbdd60), (EAX));
  /* 10d9e396 mov dword ptr [0x10dbdd88], 0x10dbdd58 */
  w32((uint32_t)(0x10dbdd88), (0x10dbdd58u));
  /* 10d9e3a0 mov ecx, dword ptr [0x10dbe6cc] */
  ECX = (r32((uint32_t)(0x10dbe6cc)));
  /* 10d9e3a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e3a7 call 0x10d9e660 */
  push32(0x10d9e3acu); f_10d9e660();
  /* 10d9e3ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e3af push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e3b1 mov edx, dword ptr [0x10dbe6cc] */
  EDX = (r32((uint32_t)(0x10dbe6cc)));
  /* 10d9e3b7 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e3b8 call 0x10d938b0 */
  push32(0x10d9e3bdu); f_10d938b0();
  /* 10d9e3bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e3c0 mov dword ptr [0x10dbe6cc], 0 */
  w32((uint32_t)(0x10dbe6cc), (0x0u));
  /* 10d9e3ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9e3cc:;
  /* 10d9e3cc mov esp, ebp */
  ESP = (EBP);
  /* 10d9e3ce pop ebp */
  EBP = (pop32());
  /* 10d9e3cf ret  */
  ESPCHK(0x10d9e2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e3d0 @ 0x10d9e3d0 (525 bytes, 200 insns) */
void f_10d9e3d0(void) {
  FTRACE(0x10d9e3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e3d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9e3d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9e3dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e3df mov ax, word ptr [0x10dbe6ec] */
  AX = (r16((uint32_t)(0x10dbe6ec)));
  /* 10d9e3e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9e3e8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e3ec jne 0x10d9e3f6 */
  if (!C.zf) goto L_10d9e3f6;
  /* 10d9e3ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e3f1 jmp 0x10d9e5d9 */
  goto L_10d9e5d9;
L_10d9e3f6:;
  /* 10d9e3f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e3f9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e3fc push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e3fd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10d9e3ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e402 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e403 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e405 call 0x10da0fe0 */
  push32(0x10d9e40au); f_10da0fe0();
  /* 10d9e40a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e40d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e410 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e415 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e418 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e41b push edx */
  push32((uint32_t)(EDX));
  /* 10d9e41c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10d9e41e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e421 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e422 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e424 call 0x10da0fe0 */
  push32(0x10d9e429u); f_10da0fe0();
  /* 10d9e429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e42c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e42f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e431 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e434 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e437 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e43a push edx */
  push32((uint32_t)(EDX));
  /* 10d9e43b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d9e43d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e440 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e441 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e443 call 0x10da0fe0 */
  push32(0x10d9e448u); f_10da0fe0();
  /* 10d9e448 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e44b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e44e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e450 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e456 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e459 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e45a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10d9e45c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e45f push eax */
  push32((uint32_t)(EAX));
  /* 10d9e460 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e462 call 0x10da0fe0 */
  push32(0x10d9e467u); f_10da0fe0();
  /* 10d9e467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e46a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e46d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e46f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e472 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e475 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e478 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e479 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d9e47b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e47e push eax */
  push32((uint32_t)(EAX));
  /* 10d9e47f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e481 call 0x10da0fe0 */
  push32(0x10d9e486u); f_10da0fe0();
  /* 10d9e486 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e48c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e48e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e491 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e494 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10d9e497 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e498 call 0x10d9e5e0 */
  push32(0x10d9e49du); f_10d9e5e0();
  /* 10d9e49d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e4a3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e4a7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d9e4a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e4ac push edx */
  push32((uint32_t)(EDX));
  /* 10d9e4ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e4af call 0x10da0fe0 */
  push32(0x10d9e4b4u); f_10da0fe0();
  /* 10d9e4b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e4ba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e4bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e4bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e4c2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e4c6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d9e4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e4cb push eax */
  push32((uint32_t)(EAX));
  /* 10d9e4cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e4ce call 0x10da0fe0 */
  push32(0x10d9e4d3u); f_10da0fe0();
  /* 10d9e4d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e4d9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e4db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e4de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e4e1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4e4 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e4e5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10d9e4e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e4ea push eax */
  push32((uint32_t)(EAX));
  /* 10d9e4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e4ed call 0x10da0fe0 */
  push32(0x10d9e4f2u); f_10da0fe0();
  /* 10d9e4f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e4f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e4f8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e4fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e4fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e500 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e503 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e504 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10d9e506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e509 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e50a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e50c call 0x10da0fe0 */
  push32(0x10d9e511u); f_10da0fe0();
  /* 10d9e511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e514 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e517 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e519 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e51c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e51f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e522 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e523 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d9e525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e528 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e529 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e52b call 0x10da0fe0 */
  push32(0x10d9e530u); f_10da0fe0();
  /* 10d9e530 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e533 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e536 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e538 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e53b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e53e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e541 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e542 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d9e544 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e547 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e548 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e54a call 0x10da0fe0 */
  push32(0x10d9e54fu); f_10da0fe0();
  /* 10d9e54f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e552 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e555 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e557 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e55a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e55d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e560 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e561 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d9e563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e566 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e569 call 0x10da0fe0 */
  push32(0x10d9e56eu); f_10da0fe0();
  /* 10d9e56e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e571 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e574 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e576 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e579 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e57c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e57f push edx */
  push32((uint32_t)(EDX));
  /* 10d9e580 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d9e582 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e585 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e588 call 0x10da0fe0 */
  push32(0x10d9e58du); f_10da0fe0();
  /* 10d9e58d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e595 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e59b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e59e push edx */
  push32((uint32_t)(EDX));
  /* 10d9e59f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d9e5a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e5a4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e5a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e5a7 call 0x10da0fe0 */
  push32(0x10d9e5acu); f_10da0fe0();
  /* 10d9e5ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e5af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e5b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e5b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e5b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e5ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e5bd push edx */
  push32((uint32_t)(EDX));
  /* 10d9e5be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d9e5c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e5c3 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e5c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e5c6 call 0x10da0fe0 */
  push32(0x10d9e5cbu); f_10da0fe0();
  /* 10d9e5cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e5ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9e5d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e5d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9e5d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9e5d9:;
  /* 10d9e5d9 mov esp, ebp */
  ESP = (EBP);
  /* 10d9e5db pop ebp */
  EBP = (pop32());
  /* 10d9e5dc ret  */
  ESPCHK(0x10d9e3d0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10d9e5e0 (125 bytes, 49 insns) */
void f_10d9e5e0(void) {
  FTRACE(0x10d9e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e5e3 push ecx */
  push32((uint32_t)(ECX));
L_10d9e5e4:;
  /* 10d9e5e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e5e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9e5ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9e5ec je 0x10d9e659 */
  if (C.zf) goto L_10d9e659;
  /* 10d9e5ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e5f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9e5f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e5f7 jl 0x10d9e61d */
  if ((C.sf!=C.of)) goto L_10d9e61d;
  /* 10d9e5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9e5ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e602 jg 0x10d9e61d */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9e61d;
  /* 10d9e604 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e607 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9e60a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9e60d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e610 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d9e612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e615 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e618 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d9e61b jmp 0x10d9e657 */
  goto L_10d9e657;
L_10d9e61d:;
  /* 10d9e61d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e620 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9e623 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e626 jne 0x10d9e64e */
  if (!C.zf) goto L_10d9e64e;
  /* 10d9e628 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e62b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9e62e:;
  /* 10d9e62e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e634 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d9e637 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d9e639 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e63c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e63f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9e642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9e645 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9e648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e64a jne 0x10d9e62e */
  if (!C.zf) goto L_10d9e62e;
  /* 10d9e64c jmp 0x10d9e657 */
  goto L_10d9e657;
L_10d9e64e:;
  /* 10d9e64e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e651 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e654 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10d9e657:;
  /* 10d9e657 jmp 0x10d9e5e4 */
  goto L_10d9e5e4;
L_10d9e659:;
  /* 10d9e659 mov esp, ebp */
  ESP = (EBP);
  /* 10d9e65b pop ebp */
  EBP = (pop32());
  /* 10d9e65c ret  */
  ESPCHK(0x10d9e5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e660 @ 0x10d9e660 (147 bytes, 52 insns) */
void f_10d9e660(void) {
  FTRACE(0x10d9e660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e660 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e661 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e663 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e667 jne 0x10d9e66e */
  if (!C.zf) goto L_10d9e66e;
  /* 10d9e669 jmp 0x10d9e6f1 */
  goto L_10d9e6f1;
L_10d9e66e:;
  /* 10d9e66e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e671 cmp dword ptr [eax + 0xc], 0x10dbe728 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10dbe728u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e678 je 0x10d9e6f1 */
  if (C.zf) goto L_10d9e6f1;
  /* 10d9e67a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e67f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9e682 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e683 call 0x10d938b0 */
  push32(0x10d9e688u); f_10d938b0();
  /* 10d9e688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e68b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e68d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e690 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d9e693 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e694 call 0x10d938b0 */
  push32(0x10d9e699u); f_10d938b0();
  /* 10d9e699 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e69c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e69e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e6a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d9e6a4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e6a5 call 0x10d938b0 */
  push32(0x10d9e6aau); f_10d938b0();
  /* 10d9e6aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e6ad push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e6af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e6b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d9e6b5 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e6b6 call 0x10d938b0 */
  push32(0x10d9e6bbu); f_10d938b0();
  /* 10d9e6bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e6be push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e6c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e6c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10d9e6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e6c7 call 0x10d938b0 */
  push32(0x10d9e6ccu); f_10d938b0();
  /* 10d9e6cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e6d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e6d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10d9e6d7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e6d8 call 0x10d938b0 */
  push32(0x10d9e6ddu); f_10d938b0();
  /* 10d9e6dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e6e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e6e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9e6e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10d9e6e8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9e6e9 call 0x10d938b0 */
  push32(0x10d9e6eeu); f_10d938b0();
  /* 10d9e6ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9e6f1:;
  /* 10d9e6f1 pop ebp */
  EBP = (pop32());
  /* 10d9e6f2 ret  */
  ESPCHK(0x10d9e660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x10d9e700 (928 bytes, 284 insns) */
void f_10d9e700(void) {
  FTRACE(0x10d9e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9e700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9e701 mov ebp, esp */
  EBP = (ESP);
  /* 10d9e703 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9e706 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 10d9e70d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10d9e714 cmp dword ptr [0x10dbe690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e71b je 0x10d9ea51 */
  if (C.zf) goto L_10d9ea51;
  /* 10d9e721 cmp dword ptr [0x10dbe6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e728 jne 0x10d9e750 */
  if (!C.zf) goto L_10d9e750;
  /* 10d9e72a push 0x10dbe6a0 */
  push32((uint32_t)(0x10dbe6a0u));
  /* 10d9e72f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d9e734 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e736 mov ax, word ptr [0x10dbe6e4] */
  AX = (r16((uint32_t)(0x10dbe6e4)));
  /* 10d9e73c push eax */
  push32((uint32_t)(EAX));
  /* 10d9e73d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e73f call 0x10da0fe0 */
  push32(0x10d9e744u); f_10da0fe0();
  /* 10d9e744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e749 je 0x10d9e750 */
  if (C.zf) goto L_10d9e750;
  /* 10d9e74b jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e750:;
  /* 10d9e750 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d9e752 push 0x10dba094 */
  push32((uint32_t)(0x10dba094u));
  /* 10d9e757 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e759 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d9e75e call 0x10d92e20 */
  push32(0x10d9e763u); f_10d92e20();
  /* 10d9e763 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e766 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10d9e769 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d9e76b push 0x10dba094 */
  push32((uint32_t)(0x10dba094u));
  /* 10d9e770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e772 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d9e777 call 0x10d92e20 */
  push32(0x10d9e77cu); f_10d92e20();
  /* 10d9e77c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e77f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10d9e782 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d9e784 push 0x10dba094 */
  push32((uint32_t)(0x10dba094u));
  /* 10d9e789 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e78b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 10d9e790 call 0x10d92e20 */
  push32(0x10d9e795u); f_10d92e20();
  /* 10d9e795 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e798 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10d9e79b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d9e79d push 0x10dba094 */
  push32((uint32_t)(0x10dba094u));
  /* 10d9e7a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e7a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10d9e7a9 call 0x10d92e20 */
  push32(0x10d9e7aeu); f_10d92e20();
  /* 10d9e7ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e7b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d9e7b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e7b8 je 0x10d9e7cc */
  if (C.zf) goto L_10d9e7cc;
  /* 10d9e7ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e7be je 0x10d9e7cc */
  if (C.zf) goto L_10d9e7cc;
  /* 10d9e7c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e7c4 je 0x10d9e7cc */
  if (C.zf) goto L_10d9e7cc;
  /* 10d9e7c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e7ca jne 0x10d9e7d1 */
  if (!C.zf) goto L_10d9e7d1;
L_10d9e7cc:;
  /* 10d9e7cc jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e7d1:;
  /* 10d9e7d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9e7d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d9e7d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d9e7de jmp 0x10d9e7e9 */
  goto L_10d9e7e9;
L_10d9e7e0:;
  /* 10d9e7e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9e7e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e7e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d9e7e9:;
  /* 10d9e7e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e7f0 jge 0x10d9e805 */
  if ((C.sf==C.of)) goto L_10d9e805;
  /* 10d9e7f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e7f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10d9e7f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d9e7fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e7fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e800 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d9e803 jmp 0x10d9e7e0 */
  goto L_10d9e7e0;
L_10d9e805:;
  /* 10d9e805 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10d9e808 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e809 mov ecx, dword ptr [0x10dbe6a0] */
  ECX = (r32((uint32_t)(0x10dbe6a0)));
  /* 10d9e80f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e810 call dword ptr [0x10dc033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc033c))), 0x10d9e816u);
  /* 10d9e816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e818 jne 0x10d9e81f */
  if (!C.zf) goto L_10d9e81f;
  /* 10d9e81a jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e81f:;
  /* 10d9e81f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e823 jbe 0x10d9e82a */
  if ((C.cf||C.zf)) goto L_10d9e82a;
  /* 10d9e825 jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e82a:;
  /* 10d9e82a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9e82d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9e833 mov dword ptr [0x10dbcea4], edx */
  w32((uint32_t)(0x10dbcea4), (EDX));
  /* 10d9e839 cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e840 jle 0x10d9e899 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9e899;
  /* 10d9e842 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10d9e845 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d9e848 jmp 0x10d9e853 */
  goto L_10d9e853;
L_10d9e84a:;
  /* 10d9e84a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e84d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e850 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10d9e853:;
  /* 10d9e853 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e856 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e858 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9e85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e85c je 0x10d9e899 */
  if (C.zf) goto L_10d9e899;
  /* 10d9e85e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e861 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9e863 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10d9e866 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9e868 je 0x10d9e899 */
  if (C.zf) goto L_10d9e899;
  /* 10d9e86a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d9e871 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d9e874 jmp 0x10d9e87f */
  goto L_10d9e87f;
L_10d9e876:;
  /* 10d9e876 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9e879 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e87c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10d9e87f:;
  /* 10d9e87f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e882 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e884 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d9e887 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e88a jg 0x10d9e897 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9e897;
  /* 10d9e88c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9e88f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e892 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d9e895 jmp 0x10d9e876 */
  goto L_10d9e876;
L_10d9e897:;
  /* 10d9e897 jmp 0x10d9e84a */
  goto L_10d9e84a;
L_10d9e899:;
  /* 10d9e899 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e89b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e89d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e89f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9e8a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e8a5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e8a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d9e8ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9e8ae push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e8af push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e8b1 call 0x10d9b050 */
  push32(0x10d9e8b6u); f_10d9b050();
  /* 10d9e8b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e8b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e8bb jne 0x10d9e8c2 */
  if (!C.zf) goto L_10d9e8c2;
  /* 10d9e8bd jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e8c2:;
  /* 10d9e8c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9e8c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 10d9e8ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9e8cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d9e8d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10d9e8d7 jmp 0x10d9e8e2 */
  goto L_10d9e8e2;
L_10d9e8d9:;
  /* 10d9e8d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9e8dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e8df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d9e8e2:;
  /* 10d9e8e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e8e9 jge 0x10d9e900 */
  if ((C.sf==C.of)) goto L_10d9e900;
  /* 10d9e8eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9e8ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10d9e8f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d9e8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d9e8f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e8fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10d9e8fe jmp 0x10d9e8d9 */
  goto L_10d9e8d9;
L_10d9e900:;
  /* 10d9e900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9e904 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9e907 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e90a push edx */
  push32((uint32_t)(EDX));
  /* 10d9e90b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10d9e910 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9e913 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e914 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9e916 call 0x10da1280 */
  push32(0x10d9e91bu); f_10da1280();
  /* 10d9e91b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e91e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9e920 jne 0x10d9e927 */
  if (!C.zf) goto L_10d9e927;
  /* 10d9e922 jmp 0x10d9ea12 */
  goto L_10d9ea12;
L_10d9e927:;
  /* 10d9e927 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9e92a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 10d9e92f cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e936 jle 0x10d9e993 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9e993;
  /* 10d9e938 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 10d9e93b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d9e93e jmp 0x10d9e949 */
  goto L_10d9e949;
L_10d9e940:;
  /* 10d9e940 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e943 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e946 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10d9e949:;
  /* 10d9e949 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e94c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9e94e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d9e950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9e952 je 0x10d9e993 */
  if (C.zf) goto L_10d9e993;
  /* 10d9e954 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e957 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9e959 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10d9e95c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9e95e je 0x10d9e993 */
  if (C.zf) goto L_10d9e993;
  /* 10d9e960 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e965 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9e967 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d9e96a jmp 0x10d9e975 */
  goto L_10d9e975;
L_10d9e96c:;
  /* 10d9e96c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9e96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e972 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10d9e975:;
  /* 10d9e975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9e978 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9e97a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10d9e97d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e980 jg 0x10d9e991 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9e991;
  /* 10d9e982 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d9e985 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9e988 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 10d9e98f jmp 0x10d9e96c */
  goto L_10d9e96c;
L_10d9e991:;
  /* 10d9e991 jmp 0x10d9e940 */
  goto L_10d9e940;
L_10d9e993:;
  /* 10d9e993 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9e996 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e999 mov dword ptr [0x10dbcc98], eax */
  w32((uint32_t)(0x10dbcc98), (EAX));
  /* 10d9e99e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9e9a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e9a4 mov dword ptr [0x10dbcc9c], ecx */
  w32((uint32_t)(0x10dbcc9c), (ECX));
  /* 10d9e9aa cmp dword ptr [0x10dbe6d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e9b1 je 0x10d9e9c4 */
  if (C.zf) goto L_10d9e9c4;
  /* 10d9e9b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e9b5 mov edx, dword ptr [0x10dbe6d0] */
  EDX = (r32((uint32_t)(0x10dbe6d0)));
  /* 10d9e9bb push edx */
  push32((uint32_t)(EDX));
  /* 10d9e9bc call 0x10d938b0 */
  push32(0x10d9e9c1u); f_10d938b0();
  /* 10d9e9c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9e9c4:;
  /* 10d9e9c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9e9c7 mov dword ptr [0x10dbe6d0], eax */
  w32((uint32_t)(0x10dbe6d0), (EAX));
  /* 10d9e9cc cmp dword ptr [0x10dbe6d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9e9d3 je 0x10d9e9e6 */
  if (C.zf) goto L_10d9e9e6;
  /* 10d9e9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e9d7 mov ecx, dword ptr [0x10dbe6d4] */
  ECX = (r32((uint32_t)(0x10dbe6d4)));
  /* 10d9e9dd push ecx */
  push32((uint32_t)(ECX));
  /* 10d9e9de call 0x10d938b0 */
  push32(0x10d9e9e3u); f_10d938b0();
  /* 10d9e9e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9e9e6:;
  /* 10d9e9e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9e9e9 mov dword ptr [0x10dbe6d4], edx */
  w32((uint32_t)(0x10dbe6d4), (EDX));
  /* 10d9e9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e9f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9e9f4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9e9f5 call 0x10d938b0 */
  push32(0x10d9e9fau); f_10d938b0();
  /* 10d9e9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9e9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9e9ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9ea02 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ea03 call 0x10d938b0 */
  push32(0x10d9ea08u); f_10d938b0();
  /* 10d9ea08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ea0d jmp 0x10d9ea9c */
  goto L_10d9ea9c;
L_10d9ea12:;
  /* 10d9ea12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea14 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10d9ea17 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ea18 call 0x10d938b0 */
  push32(0x10d9ea1du); f_10d938b0();
  /* 10d9ea1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea22 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10d9ea25 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ea26 call 0x10d938b0 */
  push32(0x10d9ea2bu); f_10d938b0();
  /* 10d9ea2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d9ea33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ea34 call 0x10d938b0 */
  push32(0x10d9ea39u); f_10d938b0();
  /* 10d9ea39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea3c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea3e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d9ea41 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ea42 call 0x10d938b0 */
  push32(0x10d9ea47u); f_10d938b0();
  /* 10d9ea47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea4a mov eax, 1 */
  EAX = (0x1u);
  /* 10d9ea4f jmp 0x10d9ea9c */
  goto L_10d9ea9c;
L_10d9ea51:;
  /* 10d9ea51 mov dword ptr [0x10dbcc98], 0x10dbcca2 */
  w32((uint32_t)(0x10dbcc98), (0x10dbcca2u));
  /* 10d9ea5b mov dword ptr [0x10dbcc9c], 0x10dbcca2 */
  w32((uint32_t)(0x10dbcc9c), (0x10dbcca2u));
  /* 10d9ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea67 mov eax, dword ptr [0x10dbe6d0] */
  EAX = (r32((uint32_t)(0x10dbe6d0)));
  /* 10d9ea6c push eax */
  push32((uint32_t)(EAX));
  /* 10d9ea6d call 0x10d938b0 */
  push32(0x10d9ea72u); f_10d938b0();
  /* 10d9ea72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea75 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9ea77 mov ecx, dword ptr [0x10dbe6d4] */
  ECX = (r32((uint32_t)(0x10dbe6d4)));
  /* 10d9ea7d push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ea7e call 0x10d938b0 */
  push32(0x10d9ea83u); f_10d938b0();
  /* 10d9ea83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ea86 mov dword ptr [0x10dbe6d0], 0 */
  w32((uint32_t)(0x10dbe6d0), (0x0u));
  /* 10d9ea90 mov dword ptr [0x10dbe6d4], 0 */
  w32((uint32_t)(0x10dbe6d4), (0x0u));
  /* 10d9ea9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9ea9c:;
  /* 10d9ea9c mov esp, ebp */
  ESP = (EBP);
  /* 10d9ea9e pop ebp */
  EBP = (pop32());
  /* 10d9ea9f ret  */
  ESPCHK(0x10d9e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eaa0 @ 0x10d9eaa0 (7 bytes, 5 insns) */
void f_10d9eaa0(void) {
  FTRACE(0x10d9eaa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9eaa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9eaa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9eaa3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9eaa5 pop ebp */
  EBP = (pop32());
  /* 10d9eaa6 ret  */
  ESPCHK(0x10d9eaa0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x10d9eab0 (129 bytes, 56 insns) */
void f_10d9eab0(void) {
  FTRACE(0x10d9eab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9eab0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d9eab4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d9eab8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10d9eabe jne 0x10d9eafc */
  if (!C.zf) goto L_10d9eafc;
L_10d9eac0:;
  /* 10d9eac0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9eac2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eac4 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eac8 je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9eaca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eacd jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eacf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d9ead1 je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9ead3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d9ead6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9ead9 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eadb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eadd je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9eadf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eae2 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eae4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eae7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eaea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d9eaec jne 0x10d9eac0 */
  if (!C.zf) goto L_10d9eac0;
  /* 10d9eaee mov edi, edi */
  EDI = (EDI);
L_10d9eaf0:;
  /* 10d9eaf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9eaf2 ret  */
  ESPCHK(0x10d9eab0u, _esp0);
  ESP += 4; return;
  /* 10d9eaf3 nop  */
  /* nop */
L_10d9eaf4:;
  /* 10d9eaf4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9eaf6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9eaf8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10d9eaf9 ret  */
  ESPCHK(0x10d9eab0u, _esp0);
  ESP += 4; return;
  /* 10d9eafa mov edi, edi */
  EDI = (EDI);
L_10d9eafc:;
  /* 10d9eafc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10d9eb02 je 0x10d9eb18 */
  if (C.zf) goto L_10d9eb18;
  /* 10d9eb04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9eb06 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d9eb07 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eb09 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eb0b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d9eb0c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eb0e je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9eb10 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10d9eb16 je 0x10d9eac0 */
  if (C.zf) goto L_10d9eac0;
L_10d9eb18:;
  /* 10d9eb18 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10d9eb1b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eb1e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eb20 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eb22 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eb24 je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9eb26 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eb29 jne 0x10d9eaf4 */
  if (!C.zf) goto L_10d9eaf4;
  /* 10d9eb2b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 10d9eb2d je 0x10d9eaf0 */
  if (C.zf) goto L_10d9eaf0;
  /* 10d9eb2f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eb32 jmp 0x10d9eac0 */
  goto L_10d9eac0;
}

/* FUN_1000eb40 @ 0x10d9eb40 (62 bytes, 35 insns) */
void f_10d9eb40(void) {
  FTRACE(0x10d9eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9eb41 mov ebp, esp */
  EBP = (ESP);
  /* 10d9eb43 push esi */
  push32((uint32_t)(ESI));
  /* 10d9eb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9eb46 push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb47 push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb48 push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb49 push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb4a push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb4b push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb4c push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb4d push eax */
  push32((uint32_t)(EAX));
  /* 10d9eb4e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9eb51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9eb54:;
  /* 10d9eb54 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9eb56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eb58 je 0x10d9eb61 */
  if (C.zf) goto L_10d9eb61;
  /* 10d9eb5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d9eb5b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d9eb5b");
  /* 10d9eb5f jmp 0x10d9eb54 */
  goto L_10d9eb54;
L_10d9eb61:;
  /* 10d9eb61 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9eb64 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9eb67 nop  */
  /* nop */
L_10d9eb68:;
  /* 10d9eb68 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d9eb69 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9eb6b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9eb6d je 0x10d9eb76 */
  if (C.zf) goto L_10d9eb76;
  /* 10d9eb6f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d9eb70 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d9eb70");
  /* 10d9eb74 jae 0x10d9eb68 */
  if (!C.cf) goto L_10d9eb68;
L_10d9eb76:;
  /* 10d9eb76 mov eax, ecx */
  EAX = (ECX);
  /* 10d9eb78 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eb7b pop esi */
  ESI = (pop32());
  /* 10d9eb7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9eb7d ret  */
  ESPCHK(0x10d9eb40u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x10d9eb80 (56 bytes, 31 insns) */
void f_10d9eb80(void) {
  FTRACE(0x10d9eb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9eb80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9eb81 mov ebp, esp */
  EBP = (ESP);
  /* 10d9eb83 push edi */
  push32((uint32_t)(EDI));
  /* 10d9eb84 push esi */
  push32((uint32_t)(ESI));
  /* 10d9eb85 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9eb86 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9eb89 jecxz 0x10d9ebb1 */
  x86_unimpl("jecxz @ 0x10d9eb89");
  /* 10d9eb8b mov ebx, ecx */
  EBX = (ECX);
  /* 10d9eb8d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9eb90 mov esi, edi */
  ESI = (EDI);
  /* 10d9eb92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9eb94 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 10d9eb96 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9eb98 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eb9a mov edi, esi */
  EDI = (ESI);
  /* 10d9eb9c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9eb9f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 10d9eba1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 10d9eba4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9eba6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10d9eba9 ja 0x10d9ebaf */
  if ((!C.cf&&!C.zf)) goto L_10d9ebaf;
  /* 10d9ebab je 0x10d9ebb1 */
  if (C.zf) goto L_10d9ebb1;
  /* 10d9ebad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d9ebae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_10d9ebaf:;
  /* 10d9ebaf not ecx */
  ECX = (~(ECX));
L_10d9ebb1:;
  /* 10d9ebb1 mov eax, ecx */
  EAX = (ECX);
  /* 10d9ebb3 pop ebx */
  EBX = (pop32());
  /* 10d9ebb4 pop esi */
  ESI = (pop32());
  /* 10d9ebb5 pop edi */
  EDI = (pop32());
  /* 10d9ebb6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9ebb7 ret  */
  ESPCHK(0x10d9eb80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x10d9ebc0 (58 bytes, 32 insns) */
void f_10d9ebc0(void) {
  FTRACE(0x10d9ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ebc3 push esi */
  push32((uint32_t)(ESI));
  /* 10d9ebc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ebc6 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebc7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebc8 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebca push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebcb push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebcc push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebcd push eax */
  push32((uint32_t)(EAX));
  /* 10d9ebce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ebd1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10d9ebd4:;
  /* 10d9ebd4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9ebd6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9ebd8 je 0x10d9ebe1 */
  if (C.zf) goto L_10d9ebe1;
  /* 10d9ebda inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10d9ebdb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x10d9ebdb");
  /* 10d9ebdf jmp 0x10d9ebd4 */
  goto L_10d9ebd4;
L_10d9ebe1:;
  /* 10d9ebe1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10d9ebe4:;
  /* 10d9ebe4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d9ebe6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10d9ebe8 je 0x10d9ebf4 */
  if (C.zf) goto L_10d9ebf4;
  /* 10d9ebea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d9ebeb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10d9ebeb");
  /* 10d9ebef jae 0x10d9ebe4 */
  if (!C.cf) goto L_10d9ebe4;
  /* 10d9ebf1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10d9ebf4:;
  /* 10d9ebf4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ebf7 pop esi */
  ESI = (pop32());
  /* 10d9ebf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10d9ebf9 ret  */
  ESPCHK(0x10d9ebc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec00 @ 0x10d9ec00 (512 bytes, 147 insns) */
void f_10d9ec00(void) {
  FTRACE(0x10d9ec00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ec00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ec01 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ec03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ec06 cmp dword ptr [0x10dbe71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ec0d jne 0x10d9ec32 */
  if (!C.zf) goto L_10d9ec32;
  /* 10d9ec0f call 0x10d9f6d0 */
  push32(0x10d9ec14u); f_10d9f6d0();
  /* 10d9ec14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ec16 je 0x10d9ec22 */
  if (C.zf) goto L_10d9ec22;
  /* 10d9ec18 mov eax, dword ptr [0x10dc0264] */
  EAX = (r32((uint32_t)(0x10dc0264)));
  /* 10d9ec1d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9ec20 jmp 0x10d9ec29 */
  goto L_10d9ec29;
L_10d9ec22:;
  /* 10d9ec22 mov dword ptr [ebp - 8], 0x10d9f720 */
  w32((uint32_t)(EBP + -0x8), (0x10d9f720u));
L_10d9ec29:;
  /* 10d9ec29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9ec2c mov dword ptr [0x10dbe71c], ecx */
  w32((uint32_t)(0x10dbe71c), (ECX));
L_10d9ec32:;
  /* 10d9ec32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ec36 jne 0x10d9ec42 */
  if (!C.zf) goto L_10d9ec42;
  /* 10d9ec38 call 0x10d9f520 */
  push32(0x10d9ec3du); f_10d9f520();
  /* 10d9ec3d jmp 0x10d9ed0e */
  goto L_10d9ed0e;
L_10d9ec42:;
  /* 10d9ec42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ec45 mov dword ptr [0x10dbe70c], edx */
  w32((uint32_t)(0x10dbe70c), (EDX));
  /* 10d9ec4b cmp dword ptr [0x10dbe70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ec52 je 0x10d9ec74 */
  if (C.zf) goto L_10d9ec74;
  /* 10d9ec54 mov eax, dword ptr [0x10dbe70c] */
  EAX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9ec59 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9ec5c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9ec5e je 0x10d9ec74 */
  if (C.zf) goto L_10d9ec74;
  /* 10d9ec60 push 0x10dbe70c */
  push32((uint32_t)(0x10dbe70cu));
  /* 10d9ec65 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d9ec67 push 0x10dbda90 */
  push32((uint32_t)(0x10dbda90u));
  /* 10d9ec6c call 0x10d9ee00 */
  push32(0x10d9ec71u); f_10d9ee00();
  /* 10d9ec71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9ec74:;
  /* 10d9ec74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ec77 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ec7a mov dword ptr [0x10dbe710], edx */
  w32((uint32_t)(0x10dbe710), (EDX));
  /* 10d9ec80 cmp dword ptr [0x10dbe710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ec87 je 0x10d9eca9 */
  if (C.zf) goto L_10d9eca9;
  /* 10d9ec89 mov eax, dword ptr [0x10dbe710] */
  EAX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9ec8e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9ec91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9ec93 je 0x10d9eca9 */
  if (C.zf) goto L_10d9eca9;
  /* 10d9ec95 push 0x10dbe710 */
  push32((uint32_t)(0x10dbe710u));
  /* 10d9ec9a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d9ec9c push 0x10dbd9d8 */
  push32((uint32_t)(0x10dbd9d8u));
  /* 10d9eca1 call 0x10d9ee00 */
  push32(0x10d9eca6u); f_10d9ee00();
  /* 10d9eca6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9eca9:;
  /* 10d9eca9 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9ecb3 cmp dword ptr [0x10dbe70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ecba je 0x10d9eced */
  if (C.zf) goto L_10d9eced;
  /* 10d9ecbc mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9ecc2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9ecc5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ecc7 je 0x10d9eced */
  if (C.zf) goto L_10d9eced;
  /* 10d9ecc9 cmp dword ptr [0x10dbe710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ecd0 je 0x10d9ece6 */
  if (C.zf) goto L_10d9ece6;
  /* 10d9ecd2 mov ecx, dword ptr [0x10dbe710] */
  ECX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9ecd8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9ecdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9ecdd je 0x10d9ece6 */
  if (C.zf) goto L_10d9ece6;
  /* 10d9ecdf call 0x10d9ee90 */
  push32(0x10d9ece4u); f_10d9ee90();
  /* 10d9ece4 jmp 0x10d9eceb */
  goto L_10d9eceb;
L_10d9ece6:;
  /* 10d9ece6 call 0x10d9f280 */
  push32(0x10d9ecebu); f_10d9f280();
L_10d9eceb:;
  /* 10d9eceb jmp 0x10d9ed0e */
  goto L_10d9ed0e;
L_10d9eced:;
  /* 10d9eced cmp dword ptr [0x10dbe710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ecf4 je 0x10d9ed09 */
  if (C.zf) goto L_10d9ed09;
  /* 10d9ecf6 mov eax, dword ptr [0x10dbe710] */
  EAX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9ecfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9ecfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9ed00 je 0x10d9ed09 */
  if (C.zf) goto L_10d9ed09;
  /* 10d9ed02 call 0x10d9f420 */
  push32(0x10d9ed07u); f_10d9f420();
  /* 10d9ed07 jmp 0x10d9ed0e */
  goto L_10d9ed0e;
L_10d9ed09:;
  /* 10d9ed09 call 0x10d9f520 */
  push32(0x10d9ed0eu); f_10d9f520();
L_10d9ed0e:;
  /* 10d9ed0e cmp dword ptr [0x10dbe714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ed15 jne 0x10d9ed1e */
  if (!C.zf) goto L_10d9ed1e;
  /* 10d9ed17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ed19 jmp 0x10d9edfc */
  goto L_10d9edfc;
L_10d9ed1e:;
  /* 10d9ed1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ed21 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ed27 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ed28 call 0x10d9f550 */
  push32(0x10d9ed2du); f_10d9f550();
  /* 10d9ed2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ed30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9ed33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ed37 je 0x10d9ed4c */
  if (C.zf) goto L_10d9ed4c;
  /* 10d9ed39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ed3c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ed41 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ed42 call dword ptr [0x10dc0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0268))), 0x10d9ed48u);
  /* 10d9ed48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ed4a jne 0x10d9ed53 */
  if (!C.zf) goto L_10d9ed53;
L_10d9ed4c:;
  /* 10d9ed4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ed4e jmp 0x10d9edfc */
  goto L_10d9edfc;
L_10d9ed53:;
  /* 10d9ed53 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9ed55 mov ecx, dword ptr [0x10dbe6fc] */
  ECX = (r32((uint32_t)(0x10dbe6fc)));
  /* 10d9ed5b push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ed5c call dword ptr [0x10dc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0278))), 0x10d9ed62u);
  /* 10d9ed62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ed64 jne 0x10d9ed6d */
  if (!C.zf) goto L_10d9ed6d;
  /* 10d9ed66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ed68 jmp 0x10d9edfc */
  goto L_10d9edfc;
L_10d9ed6d:;
  /* 10d9ed6d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ed71 je 0x10d9ed98 */
  if (C.zf) goto L_10d9ed98;
  /* 10d9ed73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ed76 mov ax, word ptr [0x10dbe6fc] */
  AX = (r16((uint32_t)(0x10dbe6fc)));
  /* 10d9ed7c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10d9ed7f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ed82 mov dx, word ptr [0x10dbe718] */
  DX = (r16((uint32_t)(0x10dbe718)));
  /* 10d9ed89 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 10d9ed8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9ed90 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 10d9ed94 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_10d9ed98:;
  /* 10d9ed98 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ed9c je 0x10d9edf7 */
  if (C.zf) goto L_10d9edf7;
  /* 10d9ed9e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d9eda0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9eda3 push edx */
  push32((uint32_t)(EDX));
  /* 10d9eda4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 10d9eda9 mov eax, dword ptr [0x10dbe6fc] */
  EAX = (r32((uint32_t)(0x10dbe6fc)));
  /* 10d9edae push eax */
  push32((uint32_t)(EAX));
  /* 10d9edaf call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9edb5u);
  /* 10d9edb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9edb7 jne 0x10d9edbd */
  if (!C.zf) goto L_10d9edbd;
  /* 10d9edb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9edbb jmp 0x10d9edfc */
  goto L_10d9edfc;
L_10d9edbd:;
  /* 10d9edbd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10d9edbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9edc2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9edc5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9edc6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 10d9edcb mov edx, dword ptr [0x10dbe718] */
  EDX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9edd1 push edx */
  push32((uint32_t)(EDX));
  /* 10d9edd2 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9edd8u);
  /* 10d9edd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9edda jne 0x10d9ede0 */
  if (!C.zf) goto L_10d9ede0;
  /* 10d9eddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9edde jmp 0x10d9edfc */
  goto L_10d9edfc;
L_10d9ede0:;
  /* 10d9ede0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d9ede2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ede5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9edea push eax */
  push32((uint32_t)(EAX));
  /* 10d9edeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9edee push ecx */
  push32((uint32_t)(ECX));
  /* 10d9edef call 0x10d95960 */
  push32(0x10d9edf4u); f_10d95960();
  /* 10d9edf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9edf7:;
  /* 10d9edf7 mov eax, 1 */
  EAX = (0x1u);
L_10d9edfc:;
  /* 10d9edfc mov esp, ebp */
  ESP = (EBP);
  /* 10d9edfe pop ebp */
  EBP = (pop32());
  /* 10d9edff ret  */
  ESPCHK(0x10d9ec00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x10d9ee00 (130 bytes, 47 insns) */
void f_10d9ee00(void) {
  FTRACE(0x10d9ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ee01 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ee03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ee06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d9ee0d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10d9ee14:;
  /* 10d9ee14 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ee17 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ee1a jg 0x10d9ee7e */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9ee7e;
  /* 10d9ee1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ee20 je 0x10d9ee7e */
  if (C.zf) goto L_10d9ee7e;
  /* 10d9ee22 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9ee25 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ee28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9ee29 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ee2b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9ee2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9ee30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ee33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ee36 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10d9ee39 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ee3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ee3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9ee3f push edx */
  push32((uint32_t)(EDX));
  /* 10d9ee40 call 0x10da14f0 */
  push32(0x10d9ee45u); f_10da14f0();
  /* 10d9ee45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ee48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9ee4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ee4f jne 0x10d9ee62 */
  if (!C.zf) goto L_10d9ee62;
  /* 10d9ee51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ee54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ee57 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 10d9ee5b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9ee5e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d9ee60 jmp 0x10d9ee7c */
  goto L_10d9ee7c;
L_10d9ee62:;
  /* 10d9ee62 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9ee66 jge 0x10d9ee73 */
  if ((C.sf==C.of)) goto L_10d9ee73;
  /* 10d9ee68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ee6b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ee6e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d9ee71 jmp 0x10d9ee7c */
  goto L_10d9ee7c;
L_10d9ee73:;
  /* 10d9ee73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9ee76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ee79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d9ee7c:;
  /* 10d9ee7c jmp 0x10d9ee14 */
  goto L_10d9ee14;
L_10d9ee7e:;
  /* 10d9ee7e mov esp, ebp */
  ESP = (EBP);
  /* 10d9ee80 pop ebp */
  EBP = (pop32());
  /* 10d9ee81 ret  */
  ESPCHK(0x10d9ee00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee90 @ 0x10d9ee90 (186 bytes, 50 insns) */
void f_10d9ee90(void) {
  FTRACE(0x10d9ee90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ee90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ee91 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ee93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ee94 mov eax, dword ptr [0x10dbe70c] */
  EAX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9ee99 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ee9a call 0x10d95c50 */
  push32(0x10d9ee9fu); f_10d95c50();
  /* 10d9ee9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eea2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9eea4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9eea7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d9eeaa mov dword ptr [0x10dbe708], ecx */
  w32((uint32_t)(0x10dbe708), (ECX));
  /* 10d9eeb0 mov edx, dword ptr [0x10dbe710] */
  EDX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9eeb6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9eeb7 call 0x10d95c50 */
  push32(0x10d9eebcu); f_10d95c50();
  /* 10d9eebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eebf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9eec1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9eec4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d9eec7 mov dword ptr [0x10dbe700], ecx */
  w32((uint32_t)(0x10dbe700), (ECX));
  /* 10d9eecd mov dword ptr [0x10dbe6fc], 0 */
  w32((uint32_t)(0x10dbe6fc), (0x0u));
  /* 10d9eed7 cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9eede je 0x10d9eee9 */
  if (C.zf) goto L_10d9eee9;
  /* 10d9eee0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d9eee7 jmp 0x10d9eefb */
  goto L_10d9eefb;
L_10d9eee9:;
  /* 10d9eee9 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9eeef push edx */
  push32((uint32_t)(EDX));
  /* 10d9eef0 call 0x10d9f930 */
  push32(0x10d9eef5u); f_10d9f930();
  /* 10d9eef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9eef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9eefb:;
  /* 10d9eefb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9eefe mov dword ptr [0x10dbe704], eax */
  w32((uint32_t)(0x10dbe704), (EAX));
  /* 10d9ef03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9ef05 push 0x10d9ef50 */
  push32((uint32_t)(0x10d9ef50u));
  /* 10d9ef0a call dword ptr [0x10dc026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc026c))), 0x10d9ef10u);
  /* 10d9ef10 mov ecx, dword ptr [0x10dbe714] */
  ECX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9ef16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9ef1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9ef1e je 0x10d9ef3c */
  if (C.zf) goto L_10d9ef3c;
  /* 10d9ef20 mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9ef26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ef2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9ef2e je 0x10d9ef3c */
  if (C.zf) goto L_10d9ef3c;
  /* 10d9ef30 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9ef35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9ef38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ef3a jne 0x10d9ef46 */
  if (!C.zf) goto L_10d9ef46;
L_10d9ef3c:;
  /* 10d9ef3c mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
L_10d9ef46:;
  /* 10d9ef46 mov esp, ebp */
  ESP = (EBP);
  /* 10d9ef48 pop ebp */
  EBP = (pop32());
  /* 10d9ef49 ret  */
  ESPCHK(0x10d9ee90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef50 @ 0x10d9ef50 (804 bytes, 220 insns) */
void f_10d9ef50(void) {
  FTRACE(0x10d9ef50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9ef50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9ef51 mov ebp, esp */
  EBP = (ESP);
  /* 10d9ef53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ef56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9ef59 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ef5a call 0x10d9f8b0 */
  push32(0x10d9ef5fu); f_10d9f8b0();
  /* 10d9ef5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ef62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d9ef65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9ef67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9ef6a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9ef6b mov edx, dword ptr [0x10dbe700] */
  EDX = (r32((uint32_t)(0x10dbe700)));
  /* 10d9ef71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9ef73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9ef75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9ef7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9ef81 push edx */
  push32((uint32_t)(EDX));
  /* 10d9ef82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9ef85 push eax */
  push32((uint32_t)(EAX));
  /* 10d9ef86 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9ef8cu);
  /* 10d9ef8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9ef8e jne 0x10d9efa4 */
  if (!C.zf) goto L_10d9efa4;
  /* 10d9ef90 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9ef9a mov eax, 1 */
  EAX = (0x1u);
  /* 10d9ef9f jmp 0x10d9f26e */
  goto L_10d9f26e;
L_10d9efa4:;
  /* 10d9efa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9efa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9efa8 mov edx, dword ptr [0x10dbe710] */
  EDX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9efae push edx */
  push32((uint32_t)(EDX));
  /* 10d9efaf call 0x10da14f0 */
  push32(0x10d9efb4u); f_10da14f0();
  /* 10d9efb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9efb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9efb9 jne 0x10d9f0df */
  if (!C.zf) goto L_10d9f0df;
  /* 10d9efbf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9efc1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d9efc4 push eax */
  push32((uint32_t)(EAX));
  /* 10d9efc5 mov ecx, dword ptr [0x10dbe708] */
  ECX = (r32((uint32_t)(0x10dbe708)));
  /* 10d9efcb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9efcd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9efcf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9efd5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9efdb push ecx */
  push32((uint32_t)(ECX));
  /* 10d9efdc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9efdf push edx */
  push32((uint32_t)(EDX));
  /* 10d9efe0 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9efe6u);
  /* 10d9efe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9efe8 jne 0x10d9effe */
  if (!C.zf) goto L_10d9effe;
  /* 10d9efea mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9eff4 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9eff9 jmp 0x10d9f26e */
  goto L_10d9f26e;
L_10d9effe:;
  /* 10d9effe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d9f001 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f002 mov ecx, dword ptr [0x10dbe70c] */
  ECX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f008 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f009 call 0x10da14f0 */
  push32(0x10d9f00eu); f_10da14f0();
  /* 10d9f00e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f013 jne 0x10d9f040 */
  if (!C.zf) goto L_10d9f040;
  /* 10d9f015 mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f01b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f021 mov dword ptr [0x10dbe714], edx */
  w32((uint32_t)(0x10dbe714), (EDX));
  /* 10d9f027 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f02a mov dword ptr [0x10dbe718], eax */
  w32((uint32_t)(0x10dbe718), (EAX));
  /* 10d9f02f mov ecx, dword ptr [0x10dbe718] */
  ECX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f035 mov dword ptr [0x10dbe6fc], ecx */
  w32((uint32_t)(0x10dbe6fc), (ECX));
  /* 10d9f03b jmp 0x10d9f0df */
  goto L_10d9f0df;
L_10d9f040:;
  /* 10d9f040 mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f046 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f049 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9f04b jne 0x10d9f0df */
  if (!C.zf) goto L_10d9f0df;
  /* 10d9f051 cmp dword ptr [0x10dbe704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f058 je 0x10d9f0ad */
  if (C.zf) goto L_10d9f0ad;
  /* 10d9f05a mov eax, dword ptr [0x10dbe704] */
  EAX = (r32((uint32_t)(0x10dbe704)));
  /* 10d9f05f push eax */
  push32((uint32_t)(EAX));
  /* 10d9f060 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9f063 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f064 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f06a push edx */
  push32((uint32_t)(EDX));
  /* 10d9f06b call 0x10da15c0 */
  push32(0x10d9f070u); f_10da15c0();
  /* 10d9f070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f073 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f075 jne 0x10d9f0ad */
  if (!C.zf) goto L_10d9f0ad;
  /* 10d9f077 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f07c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10d9f07e mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f083 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f086 mov dword ptr [0x10dbe718], ecx */
  w32((uint32_t)(0x10dbe718), (ECX));
  /* 10d9f08c mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f092 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f093 call 0x10d95c50 */
  push32(0x10d9f098u); f_10d95c50();
  /* 10d9f098 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f09b cmp eax, dword ptr [0x10dbe704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbe704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f0a1 jne 0x10d9f0ab */
  if (!C.zf) goto L_10d9f0ab;
  /* 10d9f0a3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f0a6 mov dword ptr [0x10dbe6fc], eax */
  w32((uint32_t)(0x10dbe6fc), (EAX));
L_10d9f0ab:;
  /* 10d9f0ab jmp 0x10d9f0df */
  goto L_10d9f0df;
L_10d9f0ad:;
  /* 10d9f0ad mov ecx, dword ptr [0x10dbe714] */
  ECX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f0b3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f0b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9f0b8 jne 0x10d9f0df */
  if (!C.zf) goto L_10d9f0df;
  /* 10d9f0ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f0bd push edx */
  push32((uint32_t)(EDX));
  /* 10d9f0be call 0x10d9f5f0 */
  push32(0x10d9f0c3u); f_10d9f5f0();
  /* 10d9f0c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f0c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f0c8 je 0x10d9f0df */
  if (C.zf) goto L_10d9f0df;
  /* 10d9f0ca mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f0cf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10d9f0d1 mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f0d6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f0d9 mov dword ptr [0x10dbe718], ecx */
  w32((uint32_t)(0x10dbe718), (ECX));
L_10d9f0df:;
  /* 10d9f0df mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f0e5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f0eb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f0f1 je 0x10d9f261 */
  if (C.zf) goto L_10d9f261;
  /* 10d9f0f7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9f0f9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d9f0fc push eax */
  push32((uint32_t)(EAX));
  /* 10d9f0fd mov ecx, dword ptr [0x10dbe708] */
  ECX = (r32((uint32_t)(0x10dbe708)));
  /* 10d9f103 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f105 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f107 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f10d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f113 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f114 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f117 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f118 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f11eu);
  /* 10d9f11e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f120 jne 0x10d9f136 */
  if (!C.zf) goto L_10d9f136;
  /* 10d9f122 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9f12c mov eax, 1 */
  EAX = (0x1u);
  /* 10d9f131 jmp 0x10d9f26e */
  goto L_10d9f26e;
L_10d9f136:;
  /* 10d9f136 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d9f139 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f13a mov ecx, dword ptr [0x10dbe70c] */
  ECX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f140 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f141 call 0x10da14f0 */
  push32(0x10d9f146u); f_10da14f0();
  /* 10d9f146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f14b jne 0x10d9f200 */
  if (!C.zf) goto L_10d9f200;
  /* 10d9f151 mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f157 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10d9f15a mov dword ptr [0x10dbe714], edx */
  w32((uint32_t)(0x10dbe714), (EDX));
  /* 10d9f160 cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f167 je 0x10d9f18a */
  if (C.zf) goto L_10d9f18a;
  /* 10d9f169 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f16e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d9f171 mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f176 cmp dword ptr [0x10dbe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f17d jne 0x10d9f188 */
  if (!C.zf) goto L_10d9f188;
  /* 10d9f17f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f182 mov dword ptr [0x10dbe6fc], ecx */
  w32((uint32_t)(0x10dbe6fc), (ECX));
L_10d9f188:;
  /* 10d9f188 jmp 0x10d9f1fe */
  goto L_10d9f1fe;
L_10d9f18a:;
  /* 10d9f18a cmp dword ptr [0x10dbe704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f191 je 0x10d9f1df */
  if (C.zf) goto L_10d9f1df;
  /* 10d9f193 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f199 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f19a call 0x10d95c50 */
  push32(0x10d9f19fu); f_10d95c50();
  /* 10d9f19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f1a2 cmp eax, dword ptr [0x10dbe704] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbe704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f1a8 jne 0x10d9f1df */
  if (!C.zf) goto L_10d9f1df;
  /* 10d9f1aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9f1ac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f1af push eax */
  push32((uint32_t)(EAX));
  /* 10d9f1b0 call 0x10d9f640 */
  push32(0x10d9f1b5u); f_10d9f640();
  /* 10d9f1b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f1b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f1ba je 0x10d9f1dd */
  if (C.zf) goto L_10d9f1dd;
  /* 10d9f1bc mov ecx, dword ptr [0x10dbe714] */
  ECX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f1c2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10d9f1c5 mov dword ptr [0x10dbe714], ecx */
  w32((uint32_t)(0x10dbe714), (ECX));
  /* 10d9f1cb cmp dword ptr [0x10dbe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f1d2 jne 0x10d9f1dd */
  if (!C.zf) goto L_10d9f1dd;
  /* 10d9f1d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f1d7 mov dword ptr [0x10dbe6fc], edx */
  w32((uint32_t)(0x10dbe6fc), (EDX));
L_10d9f1dd:;
  /* 10d9f1dd jmp 0x10d9f1fe */
  goto L_10d9f1fe;
L_10d9f1df:;
  /* 10d9f1df mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f1e4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d9f1e7 mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f1ec cmp dword ptr [0x10dbe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f1f3 jne 0x10d9f1fe */
  if (!C.zf) goto L_10d9f1fe;
  /* 10d9f1f5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f1f8 mov dword ptr [0x10dbe6fc], ecx */
  w32((uint32_t)(0x10dbe6fc), (ECX));
L_10d9f1fe:;
  /* 10d9f1fe jmp 0x10d9f261 */
  goto L_10d9f261;
L_10d9f200:;
  /* 10d9f200 cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f207 jne 0x10d9f261 */
  if (!C.zf) goto L_10d9f261;
  /* 10d9f209 cmp dword ptr [0x10dbe704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f210 je 0x10d9f261 */
  if (C.zf) goto L_10d9f261;
  /* 10d9f212 mov edx, dword ptr [0x10dbe704] */
  EDX = (r32((uint32_t)(0x10dbe704)));
  /* 10d9f218 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f219 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10d9f21c push eax */
  push32((uint32_t)(EAX));
  /* 10d9f21d mov ecx, dword ptr [0x10dbe70c] */
  ECX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f223 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f224 call 0x10da15c0 */
  push32(0x10d9f229u); f_10da15c0();
  /* 10d9f229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f22e jne 0x10d9f261 */
  if (!C.zf) goto L_10d9f261;
  /* 10d9f230 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9f232 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f235 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f236 call 0x10d9f640 */
  push32(0x10d9f23bu); f_10d9f640();
  /* 10d9f23b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f23e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f240 je 0x10d9f261 */
  if (C.zf) goto L_10d9f261;
  /* 10d9f242 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f247 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10d9f24a mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f24f cmp dword ptr [0x10dbe6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f256 jne 0x10d9f261 */
  if (!C.zf) goto L_10d9f261;
  /* 10d9f258 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f25b mov dword ptr [0x10dbe6fc], ecx */
  w32((uint32_t)(0x10dbe6fc), (ECX));
L_10d9f261:;
  /* 10d9f261 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f266 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f269 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f26b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f26d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d9f26e:;
  /* 10d9f26e mov esp, ebp */
  ESP = (EBP);
  /* 10d9f270 pop ebp */
  EBP = (pop32());
  /* 10d9f271 ret 4 */
  ESPCHK(0x10d9ef50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f280 @ 0x10d9f280 (116 bytes, 33 insns) */
void f_10d9f280(void) {
  FTRACE(0x10d9f280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f280 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f281 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f283 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f284 mov eax, dword ptr [0x10dbe70c] */
  EAX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f289 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f28a call 0x10d95c50 */
  push32(0x10d9f28fu); f_10d95c50();
  /* 10d9f28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f292 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f294 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f297 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d9f29a mov dword ptr [0x10dbe708], ecx */
  w32((uint32_t)(0x10dbe708), (ECX));
  /* 10d9f2a0 cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f2a7 je 0x10d9f2b2 */
  if (C.zf) goto L_10d9f2b2;
  /* 10d9f2a9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d9f2b0 jmp 0x10d9f2c4 */
  goto L_10d9f2c4;
L_10d9f2b2:;
  /* 10d9f2b2 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f2b8 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f2b9 call 0x10d9f930 */
  push32(0x10d9f2beu); f_10d9f930();
  /* 10d9f2be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f2c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9f2c4:;
  /* 10d9f2c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9f2c7 mov dword ptr [0x10dbe704], eax */
  w32((uint32_t)(0x10dbe704), (EAX));
  /* 10d9f2cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9f2ce push 0x10d9f300 */
  push32((uint32_t)(0x10d9f300u));
  /* 10d9f2d3 call dword ptr [0x10dc026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc026c))), 0x10d9f2d9u);
  /* 10d9f2d9 mov ecx, dword ptr [0x10dbe714] */
  ECX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f2df and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f2e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9f2e4 jne 0x10d9f2f0 */
  if (!C.zf) goto L_10d9f2f0;
  /* 10d9f2e6 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
L_10d9f2f0:;
  /* 10d9f2f0 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f2f2 pop ebp */
  EBP = (pop32());
  /* 10d9f2f3 ret  */
  ESPCHK(0x10d9f280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f300 @ 0x10d9f300 (287 bytes, 86 insns) */
void f_10d9f300(void) {
  FTRACE(0x10d9f300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f300 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f301 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f303 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f309 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f30a call 0x10d9f8b0 */
  push32(0x10d9f30fu); f_10d9f8b0();
  /* 10d9f30f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f312 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d9f315 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9f317 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9f31a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f31b mov edx, dword ptr [0x10dbe708] */
  EDX = (r32((uint32_t)(0x10dbe708)));
  /* 10d9f321 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f323 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f325 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f32b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f331 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f332 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f335 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f336 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f33cu);
  /* 10d9f33c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f33e jne 0x10d9f354 */
  if (!C.zf) goto L_10d9f354;
  /* 10d9f340 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9f34a mov eax, 1 */
  EAX = (0x1u);
  /* 10d9f34f jmp 0x10d9f419 */
  goto L_10d9f419;
L_10d9f354:;
  /* 10d9f354 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9f357 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f358 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f35e push edx */
  push32((uint32_t)(EDX));
  /* 10d9f35f call 0x10da14f0 */
  push32(0x10d9f364u); f_10da14f0();
  /* 10d9f364 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f367 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f369 jne 0x10d9f3a9 */
  if (!C.zf) goto L_10d9f3a9;
  /* 10d9f36b cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f372 jne 0x10d9f386 */
  if (!C.zf) goto L_10d9f386;
  /* 10d9f374 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9f376 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f379 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f37a call 0x10d9f640 */
  push32(0x10d9f37fu); f_10d9f640();
  /* 10d9f37f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f384 je 0x10d9f3a7 */
  if (C.zf) goto L_10d9f3a7;
L_10d9f386:;
  /* 10d9f386 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f389 mov dword ptr [0x10dbe718], ecx */
  w32((uint32_t)(0x10dbe718), (ECX));
  /* 10d9f38f mov edx, dword ptr [0x10dbe718] */
  EDX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f395 mov dword ptr [0x10dbe6fc], edx */
  w32((uint32_t)(0x10dbe6fc), (EDX));
  /* 10d9f39b mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f3a0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d9f3a2 mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
L_10d9f3a7:;
  /* 10d9f3a7 jmp 0x10d9f40c */
  goto L_10d9f40c;
L_10d9f3a9:;
  /* 10d9f3a9 cmp dword ptr [0x10dbe708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f3b0 jne 0x10d9f40c */
  if (!C.zf) goto L_10d9f40c;
  /* 10d9f3b2 cmp dword ptr [0x10dbe704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f3b9 je 0x10d9f40c */
  if (C.zf) goto L_10d9f40c;
  /* 10d9f3bb mov ecx, dword ptr [0x10dbe704] */
  ECX = (r32((uint32_t)(0x10dbe704)));
  /* 10d9f3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f3c2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10d9f3c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f3c6 mov eax, dword ptr [0x10dbe70c] */
  EAX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f3cb push eax */
  push32((uint32_t)(EAX));
  /* 10d9f3cc call 0x10da15c0 */
  push32(0x10d9f3d1u); f_10da15c0();
  /* 10d9f3d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f3d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f3d6 jne 0x10d9f40c */
  if (!C.zf) goto L_10d9f40c;
  /* 10d9f3d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9f3da mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f3dd push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f3de call 0x10d9f640 */
  push32(0x10d9f3e3u); f_10d9f640();
  /* 10d9f3e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f3e8 je 0x10d9f40c */
  if (C.zf) goto L_10d9f40c;
  /* 10d9f3ea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f3ed mov dword ptr [0x10dbe718], edx */
  w32((uint32_t)(0x10dbe718), (EDX));
  /* 10d9f3f3 mov eax, dword ptr [0x10dbe718] */
  EAX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f3f8 mov dword ptr [0x10dbe6fc], eax */
  w32((uint32_t)(0x10dbe6fc), (EAX));
  /* 10d9f3fd mov ecx, dword ptr [0x10dbe714] */
  ECX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f403 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f406 mov dword ptr [0x10dbe714], ecx */
  w32((uint32_t)(0x10dbe714), (ECX));
L_10d9f40c:;
  /* 10d9f40c mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f411 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f414 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f416 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d9f419:;
  /* 10d9f419 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f41b pop ebp */
  EBP = (pop32());
  /* 10d9f41c ret 4 */
  ESPCHK(0x10d9f300u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f420 @ 0x10d9f420 (69 bytes, 20 insns) */
void f_10d9f420(void) {
  FTRACE(0x10d9f420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f420 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f421 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f423 mov eax, dword ptr [0x10dbe710] */
  EAX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9f428 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f429 call 0x10d95c50 */
  push32(0x10d9f42eu); f_10d95c50();
  /* 10d9f42e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f431 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f433 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f436 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10d9f439 mov dword ptr [0x10dbe700], ecx */
  w32((uint32_t)(0x10dbe700), (ECX));
  /* 10d9f43f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9f441 push 0x10d9f470 */
  push32((uint32_t)(0x10d9f470u));
  /* 10d9f446 call dword ptr [0x10dc026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc026c))), 0x10d9f44cu);
  /* 10d9f44c mov edx, dword ptr [0x10dbe714] */
  EDX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f452 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f455 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9f457 jne 0x10d9f463 */
  if (!C.zf) goto L_10d9f463;
  /* 10d9f459 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
L_10d9f463:;
  /* 10d9f463 pop ebp */
  EBP = (pop32());
  /* 10d9f464 ret  */
  ESPCHK(0x10d9f420u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x10d9f470 (172 bytes, 54 insns) */
void f_10d9f470(void) {
  FTRACE(0x10d9f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f470 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f471 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f473 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f476 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f479 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f47a call 0x10d9f8b0 */
  push32(0x10d9f47fu); f_10d9f8b0();
  /* 10d9f47f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f482 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10d9f485 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9f487 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9f48a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f48b mov edx, dword ptr [0x10dbe700] */
  EDX = (r32((uint32_t)(0x10dbe700)));
  /* 10d9f491 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f493 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f495 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f49b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f4a1 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f4a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f4a5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f4a6 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f4acu);
  /* 10d9f4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f4ae jne 0x10d9f4c1 */
  if (!C.zf) goto L_10d9f4c1;
  /* 10d9f4b0 mov dword ptr [0x10dbe714], 0 */
  w32((uint32_t)(0x10dbe714), (0x0u));
  /* 10d9f4ba mov eax, 1 */
  EAX = (0x1u);
  /* 10d9f4bf jmp 0x10d9f516 */
  goto L_10d9f516;
L_10d9f4c1:;
  /* 10d9f4c1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10d9f4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f4c5 mov edx, dword ptr [0x10dbe710] */
  EDX = (r32((uint32_t)(0x10dbe710)));
  /* 10d9f4cb push edx */
  push32((uint32_t)(EDX));
  /* 10d9f4cc call 0x10da14f0 */
  push32(0x10d9f4d1u); f_10da14f0();
  /* 10d9f4d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f4d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f4d6 jne 0x10d9f509 */
  if (!C.zf) goto L_10d9f509;
  /* 10d9f4d8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f4db push eax */
  push32((uint32_t)(EAX));
  /* 10d9f4dc call 0x10d9f5f0 */
  push32(0x10d9f4e1u); f_10d9f5f0();
  /* 10d9f4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f4e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f4e6 je 0x10d9f509 */
  if (C.zf) goto L_10d9f509;
  /* 10d9f4e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10d9f4eb mov dword ptr [0x10dbe718], ecx */
  w32((uint32_t)(0x10dbe718), (ECX));
  /* 10d9f4f1 mov edx, dword ptr [0x10dbe718] */
  EDX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f4f7 mov dword ptr [0x10dbe6fc], edx */
  w32((uint32_t)(0x10dbe6fc), (EDX));
  /* 10d9f4fd mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f502 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10d9f504 mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
L_10d9f509:;
  /* 10d9f509 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f50e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f511 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d9f513 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f515 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10d9f516:;
  /* 10d9f516 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f518 pop ebp */
  EBP = (pop32());
  /* 10d9f519 ret 4 */
  ESPCHK(0x10d9f470u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f520 @ 0x10d9f520 (43 bytes, 11 insns) */
void f_10d9f520(void) {
  FTRACE(0x10d9f520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f521 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f523 mov eax, dword ptr [0x10dbe714] */
  EAX = (r32((uint32_t)(0x10dbe714)));
  /* 10d9f528 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f52d mov dword ptr [0x10dbe714], eax */
  w32((uint32_t)(0x10dbe714), (EAX));
  /* 10d9f532 call dword ptr [0x10dc025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc025c))), 0x10d9f538u);
  /* 10d9f538 mov dword ptr [0x10dbe718], eax */
  w32((uint32_t)(0x10dbe718), (EAX));
  /* 10d9f53d mov ecx, dword ptr [0x10dbe718] */
  ECX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f543 mov dword ptr [0x10dbe6fc], ecx */
  w32((uint32_t)(0x10dbe6fc), (ECX));
  /* 10d9f549 pop ebp */
  EBP = (pop32());
  /* 10d9f54a ret  */
  ESPCHK(0x10d9f520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f550 @ 0x10d9f550 (155 bytes, 57 insns) */
void f_10d9f550(void) {
  FTRACE(0x10d9f550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f550 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f551 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f556 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f55a je 0x10d9f57b */
  if (C.zf) goto L_10d9f57b;
  /* 10d9f55c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f55f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d9f562 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9f564 je 0x10d9f57b */
  if (C.zf) goto L_10d9f57b;
  /* 10d9f566 push 0x10dba724 */
  push32((uint32_t)(0x10dba724u));
  /* 10d9f56b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f56e push edx */
  push32((uint32_t)(EDX));
  /* 10d9f56f call 0x10d9eab0 */
  push32(0x10d9f574u); f_10d9eab0();
  /* 10d9f574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f577 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f579 jne 0x10d9f5a3 */
  if (!C.zf) goto L_10d9f5a3;
L_10d9f57b:;
  /* 10d9f57b push 8 */
  push32((uint32_t)(0x8u));
  /* 10d9f57d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d9f580 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f581 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10d9f586 mov ecx, dword ptr [0x10dbe718] */
  ECX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f58c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f58d call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f593u);
  /* 10d9f593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f595 jne 0x10d9f59b */
  if (!C.zf) goto L_10d9f59b;
  /* 10d9f597 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f599 jmp 0x10d9f5e7 */
  goto L_10d9f5e7;
L_10d9f59b:;
  /* 10d9f59b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 10d9f59e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d9f5a1 jmp 0x10d9f5db */
  goto L_10d9f5db;
L_10d9f5a3:;
  /* 10d9f5a3 push 0x10dba720 */
  push32((uint32_t)(0x10dba720u));
  /* 10d9f5a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f5ab push eax */
  push32((uint32_t)(EAX));
  /* 10d9f5ac call 0x10d9eab0 */
  push32(0x10d9f5b1u); f_10d9eab0();
  /* 10d9f5b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f5b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f5b6 jne 0x10d9f5db */
  if (!C.zf) goto L_10d9f5db;
  /* 10d9f5b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d9f5ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10d9f5bd push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f5be push 0xb */
  push32((uint32_t)(0xbu));
  /* 10d9f5c0 mov edx, dword ptr [0x10dbe718] */
  EDX = (r32((uint32_t)(0x10dbe718)));
  /* 10d9f5c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f5c7 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f5cdu);
  /* 10d9f5cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f5cf jne 0x10d9f5d5 */
  if (!C.zf) goto L_10d9f5d5;
  /* 10d9f5d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f5d3 jmp 0x10d9f5e7 */
  goto L_10d9f5e7;
L_10d9f5d5:;
  /* 10d9f5d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10d9f5d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d9f5db:;
  /* 10d9f5db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f5de push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f5df call 0x10da16d0 */
  push32(0x10d9f5e4u); f_10da16d0();
  /* 10d9f5e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9f5e7:;
  /* 10d9f5e7 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f5e9 pop ebp */
  EBP = (pop32());
  /* 10d9f5ea ret  */
  ESPCHK(0x10d9f550u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5f0 @ 0x10d9f5f0 (79 bytes, 26 insns) */
void f_10d9f5f0(void) {
  FTRACE(0x10d9f5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f5f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f5f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 10d9f5fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 10d9f5fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9f605 jmp 0x10d9f610 */
  goto L_10d9f610;
L_10d9f607:;
  /* 10d9f607 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9f60a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f60d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d9f610:;
  /* 10d9f610 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f614 jae 0x10d9f636 */
  if (!C.cf) goto L_10d9f636;
  /* 10d9f616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9f619 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f61f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9f622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f624 mov cx, word ptr [eax*2 + 0x10dbd9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x10dbd9c4)));
  /* 10d9f62c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f62e jne 0x10d9f634 */
  if (!C.zf) goto L_10d9f634;
  /* 10d9f630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f632 jmp 0x10d9f63b */
  goto L_10d9f63b;
L_10d9f634:;
  /* 10d9f634 jmp 0x10d9f607 */
  goto L_10d9f607;
L_10d9f636:;
  /* 10d9f636 mov eax, 1 */
  EAX = (0x1u);
L_10d9f63b:;
  /* 10d9f63b mov esp, ebp */
  ESP = (EBP);
  /* 10d9f63d pop ebp */
  EBP = (pop32());
  /* 10d9f63e ret  */
  ESPCHK(0x10d9f5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x10d9f640 (135 bytes, 48 insns) */
void f_10d9f640(void) {
  FTRACE(0x10d9f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f640 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f641 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f643 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f646 push esi */
  push32((uint32_t)(ESI));
  /* 10d9f647 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f64a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f64f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f659 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 10d9f65c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f661 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9f664 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10d9f666 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10d9f669 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f66a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9f66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9f66f push edx */
  push32((uint32_t)(EDX));
  /* 10d9f670 call dword ptr [0x10dbe71c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe71c))), 0x10d9f676u);
  /* 10d9f676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f678 jne 0x10d9f67e */
  if (!C.zf) goto L_10d9f67e;
  /* 10d9f67a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f67c jmp 0x10d9f6c2 */
  goto L_10d9f6c2;
L_10d9f67e:;
  /* 10d9f67e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 10d9f681 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f682 call 0x10d9f8b0 */
  push32(0x10d9f687u); f_10d9f8b0();
  /* 10d9f687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f68a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f68d je 0x10d9f6bd */
  if (C.zf) goto L_10d9f6bd;
  /* 10d9f68f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f693 je 0x10d9f6bd */
  if (C.zf) goto L_10d9f6bd;
  /* 10d9f695 mov ecx, dword ptr [0x10dbe70c] */
  ECX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f69b push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f69c call 0x10d9f930 */
  push32(0x10d9f6a1u); f_10d9f930();
  /* 10d9f6a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f6a4 mov esi, eax */
  ESI = (EAX);
  /* 10d9f6a6 mov edx, dword ptr [0x10dbe70c] */
  EDX = (r32((uint32_t)(0x10dbe70c)));
  /* 10d9f6ac push edx */
  push32((uint32_t)(EDX));
  /* 10d9f6ad call 0x10d95c50 */
  push32(0x10d9f6b2u); f_10d95c50();
  /* 10d9f6b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f6b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f6b7 jne 0x10d9f6bd */
  if (!C.zf) goto L_10d9f6bd;
  /* 10d9f6b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f6bb jmp 0x10d9f6c2 */
  goto L_10d9f6c2;
L_10d9f6bd:;
  /* 10d9f6bd mov eax, 1 */
  EAX = (0x1u);
L_10d9f6c2:;
  /* 10d9f6c2 pop esi */
  ESI = (pop32());
  /* 10d9f6c3 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f6c5 pop ebp */
  EBP = (pop32());
  /* 10d9f6c6 ret  */
  ESPCHK(0x10d9f640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6d0 @ 0x10d9f6d0 (77 bytes, 18 insns) */
void f_10d9f6d0(void) {
  FTRACE(0x10d9f6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f6d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f6d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f6d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10d9f6e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10d9f6e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f6ea call dword ptr [0x10dc0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0258))), 0x10d9f6f0u);
  /* 10d9f6f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9f6f2 je 0x10d9f709 */
  if (C.zf) goto L_10d9f709;
  /* 10d9f6f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f6fb jne 0x10d9f709 */
  if (!C.zf) goto L_10d9f709;
  /* 10d9f6fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10d9f707 jmp 0x10d9f713 */
  goto L_10d9f713;
L_10d9f709:;
  /* 10d9f709 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10d9f713:;
  /* 10d9f713 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10d9f719 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f71b pop ebp */
  EBP = (pop32());
  /* 10d9f71c ret  */
  ESPCHK(0x10d9f6d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10d9f720 (388 bytes, 118 insns) */
void f_10d9f720(void) {
  FTRACE(0x10d9f720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f720 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f721 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f726 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9f72d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10d9f734 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d9f73b:;
  /* 10d9f73b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9f73e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f741 jg 0x10d9f888 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9f888;
  /* 10d9f747 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9f74a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f74d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10d9f74e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f750 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d9f752 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9f755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f758 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f75e cmp edx, dword ptr [ecx + 0x10dbd520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10dbd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f764 jne 0x10d9f85e */
  if (!C.zf) goto L_10d9f85e;
  /* 10d9f76a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9f76d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d9f770 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f774 ja 0x10d9f797 */
  if ((!C.cf&&!C.zf)) goto L_10d9f797;
  /* 10d9f776 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f77a je 0x10d9f809 */
  if (C.zf) goto L_10d9f809;
  /* 10d9f780 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f784 je 0x10d9f7b4 */
  if (C.zf) goto L_10d9f7b4;
  /* 10d9f786 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f78a je 0x10d9f7d6 */
  if (C.zf) goto L_10d9f7d6;
  /* 10d9f78c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f790 je 0x10d9f7f8 */
  if (C.zf) goto L_10d9f7f8;
  /* 10d9f792 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f797:;
  /* 10d9f797 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f79e je 0x10d9f7c5 */
  if (C.zf) goto L_10d9f7c5;
  /* 10d9f7a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f7a7 je 0x10d9f7e7 */
  if (C.zf) goto L_10d9f7e7;
  /* 10d9f7a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f7b0 je 0x10d9f81a */
  if (C.zf) goto L_10d9f81a;
  /* 10d9f7b2 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f7b4:;
  /* 10d9f7b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f7b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f7ba add ecx, 0x10dbd524 */
  { uint32_t _a=(ECX),_b=(0x10dbd524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f7c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9f7c3 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f7c5:;
  /* 10d9f7c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f7c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f7cb mov eax, dword ptr [edx + 0x10dbd52c] */
  EAX = (r32((uint32_t)(EDX + 0x10dbd52c)));
  /* 10d9f7d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9f7d4 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f7d6:;
  /* 10d9f7d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f7d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f7dc add ecx, 0x10dbd530 */
  { uint32_t _a=(ECX),_b=(0x10dbd530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f7e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9f7e5 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f7e7:;
  /* 10d9f7e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f7ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f7ed mov eax, dword ptr [edx + 0x10dbd534] */
  EAX = (r32((uint32_t)(EDX + 0x10dbd534)));
  /* 10d9f7f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9f7f6 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f7f8:;
  /* 10d9f7f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f7fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f7fe add ecx, 0x10dbd538 */
  { uint32_t _a=(ECX),_b=(0x10dbd538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f804 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9f807 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f809:;
  /* 10d9f809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f80c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f80f add edx, 0x10dbd53c */
  { uint32_t _a=(EDX),_b=(0x10dbd53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f815 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9f818 jmp 0x10d9f828 */
  goto L_10d9f828;
L_10d9f81a:;
  /* 10d9f81a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f81d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f820 add eax, 0x10dbd544 */
  { uint32_t _a=(EAX),_b=(0x10dbd544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f825 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9f828:;
  /* 10d9f828 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f82c je 0x10d9f834 */
  if (C.zf) goto L_10d9f834;
  /* 10d9f82e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f832 jge 0x10d9f836 */
  if ((C.sf==C.of)) goto L_10d9f836;
L_10d9f834:;
  /* 10d9f834 jmp 0x10d9f888 */
  goto L_10d9f888;
L_10d9f836:;
  /* 10d9f836 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9f839 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f83c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f83d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9f840 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f841 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9f844 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f845 call 0x10d96640 */
  push32(0x10d9f84au); f_10d96640();
  /* 10d9f84a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f84d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9f850 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f853 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10d9f857 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9f85c jmp 0x10d9f89e */
  goto L_10d9f89e;
L_10d9f85e:;
  /* 10d9f85e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f861 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f867 cmp eax, dword ptr [edx + 0x10dbd520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10dbd520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f86d jae 0x10d9f87a */
  if (!C.cf) goto L_10d9f87a;
  /* 10d9f86f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f872 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f875 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d9f878 jmp 0x10d9f883 */
  goto L_10d9f883;
L_10d9f87a:;
  /* 10d9f87a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9f87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f880 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d9f883:;
  /* 10d9f883 jmp 0x10d9f73b */
  goto L_10d9f73b;
L_10d9f888:;
  /* 10d9f888 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9f88b push eax */
  push32((uint32_t)(EAX));
  /* 10d9f88c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9f88f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f890 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9f893 push edx */
  push32((uint32_t)(EDX));
  /* 10d9f894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f897 push eax */
  push32((uint32_t)(EAX));
  /* 10d9f898 call dword ptr [0x10dc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0264))), 0x10d9f89eu);
L_10d9f89e:;
  /* 10d9f89e mov esp, ebp */
  ESP = (EBP);
  /* 10d9f8a0 pop ebp */
  EBP = (pop32());
  /* 10d9f8a1 ret 0x10 */
  ESPCHK(0x10d9f720u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f8b0 @ 0x10d9f8b0 (118 bytes, 42 insns) */
void f_10d9f8b0(void) {
  FTRACE(0x10d9f8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f8b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f8b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d9f8bd:;
  /* 10d9f8bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f8c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d9f8c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10d9f8c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f8c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f8cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f8cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d9f8d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9f8d4 je 0x10d9f91f */
  if (C.zf) goto L_10d9f91f;
  /* 10d9f8d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f8da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f8dd jl 0x10d9f8f2 */
  if ((C.sf!=C.of)) goto L_10d9f8f2;
  /* 10d9f8df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f8e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f8e6 jg 0x10d9f8f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9f8f2;
  /* 10d9f8e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d9f8eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d9f8ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10d9f8f0 jmp 0x10d9f90c */
  goto L_10d9f90c;
L_10d9f8f2:;
  /* 10d9f8f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f8f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f8f9 jl 0x10d9f90c */
  if ((C.sf!=C.of)) goto L_10d9f90c;
  /* 10d9f8fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f8ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f902 jg 0x10d9f90c */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9f90c;
  /* 10d9f904 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10d9f907 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10d9f909 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_10d9f90c:;
  /* 10d9f90c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9f90f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10d9f912 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10d9f916 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 10d9f91a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9f91d jmp 0x10d9f8bd */
  goto L_10d9f8bd;
L_10d9f91f:;
  /* 10d9f91f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9f922 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f924 pop ebp */
  EBP = (pop32());
  /* 10d9f925 ret  */
  ESPCHK(0x10d9f8b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10d9f930 (101 bytes, 36 insns) */
void f_10d9f930(void) {
  FTRACE(0x10d9f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f930 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f931 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9f936 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9f93d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f940 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d9f942 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10d9f945 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f948 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f94b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10d9f94e:;
  /* 10d9f94e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d9f952 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f955 jl 0x10d9f960 */
  if ((C.sf!=C.of)) goto L_10d9f960;
  /* 10d9f957 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d9f95b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f95e jle 0x10d9f972 */
  if ((C.zf||C.sf!=C.of)) goto L_10d9f972;
L_10d9f960:;
  /* 10d9f960 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d9f964 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f967 jl 0x10d9f98e */
  if ((C.sf!=C.of)) goto L_10d9f98e;
  /* 10d9f969 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10d9f96d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f970 jg 0x10d9f98e */
  if ((!C.zf&&C.sf==C.of)) goto L_10d9f98e;
L_10d9f972:;
  /* 10d9f972 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9f975 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f978 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d9f97b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f97e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d9f980 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10d9f983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f986 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f989 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10d9f98c jmp 0x10d9f94e */
  goto L_10d9f94e;
L_10d9f98e:;
  /* 10d9f98e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9f991 mov esp, ebp */
  ESP = (EBP);
  /* 10d9f993 pop ebp */
  EBP = (pop32());
  /* 10d9f994 ret  */
  ESPCHK(0x10d9f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9a0 @ 0x10d9f9a0 (122 bytes, 39 insns) */
void f_10d9f9a0(void) {
  FTRACE(0x10d9f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9f9a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9f9a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f9a7 cmp eax, dword ptr [0x10dbff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9f9ad jae 0x10d9f9d1 */
  if (!C.cf) goto L_10d9f9d1;
  /* 10d9f9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f9b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 10d9f9b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f9b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9f9bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9f9be mov eax, dword ptr [ecx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d9f9c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 10d9f9ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9f9cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9f9cf jne 0x10d9f9ec */
  if (!C.zf) goto L_10d9f9ec;
L_10d9f9d1:;
  /* 10d9f9d1 call 0x10d9acf0 */
  push32(0x10d9f9d6u); f_10d9acf0();
  /* 10d9f9d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 10d9f9dc call 0x10d9ad00 */
  push32(0x10d9f9e1u); f_10d9ad00();
  /* 10d9f9e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d9f9e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9f9ea jmp 0x10d9fa16 */
  goto L_10d9fa16;
L_10d9f9ec:;
  /* 10d9f9ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f9ef push edx */
  push32((uint32_t)(EDX));
  /* 10d9f9f0 call 0x10d9c510 */
  push32(0x10d9f9f5u); f_10d9c510();
  /* 10d9f9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9f9f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9f9fb push eax */
  push32((uint32_t)(EAX));
  /* 10d9f9fc call 0x10d9fa20 */
  push32(0x10d9fa01u); f_10d9fa20();
  /* 10d9fa01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9fa07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa0a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fa0b call 0x10d9c5a0 */
  push32(0x10d9fa10u); f_10d9c5a0();
  /* 10d9fa10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d9fa16:;
  /* 10d9fa16 mov esp, ebp */
  ESP = (EBP);
  /* 10d9fa18 pop ebp */
  EBP = (pop32());
  /* 10d9fa19 ret  */
  ESPCHK(0x10d9f9a0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10d9fa20 (170 bytes, 59 insns) */
void f_10d9fa20(void) {
  FTRACE(0x10d9fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9fa21 mov ebp, esp */
  EBP = (ESP);
  /* 10d9fa23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fa24 push esi */
  push32((uint32_t)(ESI));
  /* 10d9fa25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa28 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fa29 call 0x10d9c390 */
  push32(0x10d9fa2eu); f_10d9c390();
  /* 10d9fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa31 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fa34 je 0x10d9fa73 */
  if (C.zf) goto L_10d9fa73;
  /* 10d9fa36 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fa3a je 0x10d9fa42 */
  if (C.zf) goto L_10d9fa42;
  /* 10d9fa3c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fa40 jne 0x10d9fa5c */
  if (!C.zf) goto L_10d9fa5c;
L_10d9fa42:;
  /* 10d9fa42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9fa44 call 0x10d9c390 */
  push32(0x10d9fa49u); f_10d9c390();
  /* 10d9fa49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa4c mov esi, eax */
  ESI = (EAX);
  /* 10d9fa4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9fa50 call 0x10d9c390 */
  push32(0x10d9fa55u); f_10d9c390();
  /* 10d9fa55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa58 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fa5a je 0x10d9fa73 */
  if (C.zf) goto L_10d9fa73;
L_10d9fa5c:;
  /* 10d9fa5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa5f push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fa60 call 0x10d9c390 */
  push32(0x10d9fa65u); f_10d9c390();
  /* 10d9fa65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa68 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fa69 call dword ptr [0x10dc0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0260))), 0x10d9fa6fu);
  /* 10d9fa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9fa71 je 0x10d9fa7c */
  if (C.zf) goto L_10d9fa7c;
L_10d9fa73:;
  /* 10d9fa73 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9fa7a jmp 0x10d9fa85 */
  goto L_10d9fa85;
L_10d9fa7c:;
  /* 10d9fa7c call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9fa82u);
  /* 10d9fa82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9fa85:;
  /* 10d9fa85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa88 push edx */
  push32((uint32_t)(EDX));
  /* 10d9fa89 call 0x10d9c2b0 */
  push32(0x10d9fa8eu); f_10d9c2b0();
  /* 10d9fa8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fa91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa94 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d9fa97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fa9a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9fa9d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9faa0 mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d9faa7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 10d9faac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fab0 je 0x10d9fac3 */
  if (C.zf) goto L_10d9fac3;
  /* 10d9fab2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9fab5 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fab6 call 0x10d9ac50 */
  push32(0x10d9fabbu); f_10d9ac50();
  /* 10d9fabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fabe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9fac1 jmp 0x10d9fac5 */
  goto L_10d9fac5;
L_10d9fac3:;
  /* 10d9fac3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9fac5:;
  /* 10d9fac5 pop esi */
  ESI = (pop32());
  /* 10d9fac6 mov esp, ebp */
  ESP = (EBP);
  /* 10d9fac8 pop ebp */
  EBP = (pop32());
  /* 10d9fac9 ret  */
  ESPCHK(0x10d9fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x10d9fad0 (146 bytes, 52 insns) */
void f_10d9fad0(void) {
  FTRACE(0x10d9fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9fad1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9fad3 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9fad4 push esi */
  push32((uint32_t)(ESI));
  /* 10d9fad5 push edi */
  push32((uint32_t)(EDI));
L_10d9fad6:;
  /* 10d9fad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fada jne 0x10d9fafa */
  if (!C.zf) goto L_10d9fafa;
  /* 10d9fadc push 0x10dba060 */
  push32((uint32_t)(0x10dba060u));
  /* 10d9fae1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9fae3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10d9fae5 push 0x10dba728 */
  push32((uint32_t)(0x10dba728u));
  /* 10d9faea push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9faec call 0x10d91ee0 */
  push32(0x10d9faf1u); f_10d91ee0();
  /* 10d9faf1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9faf4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9faf7 jne 0x10d9fafa */
  if (!C.zf) goto L_10d9fafa;
  /* 10d9faf9 int3  */
  x86_unimpl("int3 @ 0x10d9faf9");
L_10d9fafa:;
  /* 10d9fafa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9fafc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9fafe jne 0x10d9fad6 */
  if (!C.zf) goto L_10d9fad6;
  /* 10d9fb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb03 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9fb06 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9fb0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9fb0e je 0x10d9fb5d */
  if (C.zf) goto L_10d9fb5d;
  /* 10d9fb10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb13 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9fb16 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9fb19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9fb1b je 0x10d9fb5d */
  if (C.zf) goto L_10d9fb5d;
  /* 10d9fb1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9fb1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb22 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d9fb25 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fb26 call 0x10d938b0 */
  push32(0x10d9fb2bu); f_10d938b0();
  /* 10d9fb2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb31 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9fb34 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 10d9fb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb3d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10d9fb40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb43 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d9fb49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb4c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d9fb53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9fb56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_10d9fb5d:;
  /* 10d9fb5d pop edi */
  EDI = (pop32());
  /* 10d9fb5e pop esi */
  ESI = (pop32());
  /* 10d9fb5f pop ebx */
  EBX = (pop32());
  /* 10d9fb60 pop ebp */
  EBP = (pop32());
  /* 10d9fb61 ret  */
  ESPCHK(0x10d9fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x10d9fb70 (289 bytes, 97 insns) */
void f_10d9fb70(void) {
  FTRACE(0x10d9fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9fb71 mov ebp, esp */
  EBP = (ESP);
  /* 10d9fb73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9fb76 push esi */
  push32((uint32_t)(ESI));
  /* 10d9fb77 mov eax, dword ptr [0x10dbdc98] */
  EAX = (r32((uint32_t)(0x10dbdc98)));
  /* 10d9fb7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9fb7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9fb86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fb8d jmp 0x10d9fb98 */
  goto L_10d9fb98;
L_10d9fb8f:;
  /* 10d9fb8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fb92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fb95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d9fb98:;
  /* 10d9fb98 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fb9c jae 0x10d9fbd1 */
  if (!C.cf) goto L_10d9fbd1;
  /* 10d9fb9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fba4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9fba7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fba8 call 0x10d95c50 */
  push32(0x10d9fbadu); f_10d95c50();
  /* 10d9fbad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fbb0 mov esi, eax */
  ESI = (EAX);
  /* 10d9fbb2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fbb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fbb8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 10d9fbbc push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fbbd call 0x10d95c50 */
  push32(0x10d9fbc2u); f_10d95c50();
  /* 10d9fbc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fbc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fbc8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d9fbcc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9fbcf jmp 0x10d9fb8f */
  goto L_10d9fb8f;
L_10d9fbd1:;
  /* 10d9fbd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9fbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fbd7 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fbd8 call 0x10d92e00 */
  push32(0x10d9fbddu); f_10d92e00();
  /* 10d9fbdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fbe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9fbe3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fbe7 je 0x10d9fc89 */
  if (C.zf) goto L_10d9fc89;
  /* 10d9fbed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9fbf0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fbf3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fbfa jmp 0x10d9fc05 */
  goto L_10d9fc05;
L_10d9fbfc:;
  /* 10d9fbfc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fbff add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc02 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d9fc05:;
  /* 10d9fc05 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fc09 jae 0x10d9fc7a */
  if (!C.cf) goto L_10d9fc7a;
  /* 10d9fc0b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc0e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d9fc11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc17 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fc1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fc1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fc20 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 10d9fc23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fc24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc27 push edx */
  push32((uint32_t)(EDX));
  /* 10d9fc28 call 0x10d95dd0 */
  push32(0x10d9fc2du); f_10d95dd0();
  /* 10d9fc2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc30 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fc31 call 0x10d95c50 */
  push32(0x10d9fc36u); f_10d95c50();
  /* 10d9fc36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc3c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc3e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fc41 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc44 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d9fc47 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc4d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d9fc50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fc53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fc56 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 10d9fc5a push eax */
  push32((uint32_t)(EAX));
  /* 10d9fc5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc5e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fc5f call 0x10d95dd0 */
  push32(0x10d9fc64u); f_10d95dd0();
  /* 10d9fc64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc67 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fc68 call 0x10d95c50 */
  push32(0x10d9fc6du); f_10d95c50();
  /* 10d9fc6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc75 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d9fc78 jmp 0x10d9fbfc */
  goto L_10d9fbfc;
L_10d9fc7a:;
  /* 10d9fc7a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc7d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d9fc80 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fc83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fc86 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d9fc89:;
  /* 10d9fc89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9fc8c pop esi */
  ESI = (pop32());
  /* 10d9fc8d mov esp, ebp */
  ESP = (EBP);
  /* 10d9fc8f pop ebp */
  EBP = (pop32());
  /* 10d9fc90 ret  */
  ESPCHK(0x10d9fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fca0 @ 0x10d9fca0 (291 bytes, 97 insns) */
void f_10d9fca0(void) {
  FTRACE(0x10d9fca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9fca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d9fca1 mov ebp, esp */
  EBP = (ESP);
  /* 10d9fca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9fca6 push esi */
  push32((uint32_t)(ESI));
  /* 10d9fca7 mov eax, dword ptr [0x10dbdc98] */
  EAX = (r32((uint32_t)(0x10dbdc98)));
  /* 10d9fcac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9fcaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d9fcb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fcbd jmp 0x10d9fcc8 */
  goto L_10d9fcc8;
L_10d9fcbf:;
  /* 10d9fcbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fcc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fcc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d9fcc8:;
  /* 10d9fcc8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fccc jae 0x10d9fd02 */
  if (!C.cf) goto L_10d9fd02;
  /* 10d9fcce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fcd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fcd4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d9fcd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fcd9 call 0x10d95c50 */
  push32(0x10d9fcdeu); f_10d95c50();
  /* 10d9fcde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fce1 mov esi, eax */
  ESI = (EAX);
  /* 10d9fce3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fce6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fce9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 10d9fced push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fcee call 0x10d95c50 */
  push32(0x10d9fcf3u); f_10d95c50();
  /* 10d9fcf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fcf6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fcf9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 10d9fcfd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9fd00 jmp 0x10d9fcbf */
  goto L_10d9fcbf;
L_10d9fd02:;
  /* 10d9fd02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9fd05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd08 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fd09 call 0x10d92e00 */
  push32(0x10d9fd0eu); f_10d92e00();
  /* 10d9fd0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9fd14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fd18 je 0x10d9fdbb */
  if (C.zf) goto L_10d9fdbb;
  /* 10d9fd1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9fd21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fd24 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 10d9fd2b jmp 0x10d9fd36 */
  goto L_10d9fd36;
L_10d9fd2d:;
  /* 10d9fd2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fd30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10d9fd36:;
  /* 10d9fd36 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9fd3a jae 0x10d9fdac */
  if (!C.cf) goto L_10d9fdac;
  /* 10d9fd3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd3f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 10d9fd42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fd4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fd4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fd51 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 10d9fd55 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fd56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd59 push edx */
  push32((uint32_t)(EDX));
  /* 10d9fd5a call 0x10d95dd0 */
  push32(0x10d9fd5fu); f_10d95dd0();
  /* 10d9fd5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd62 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fd63 call 0x10d95c50 */
  push32(0x10d9fd68u); f_10d95c50();
  /* 10d9fd68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd6e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d9fd73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd76 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 10d9fd79 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d9fd82 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9fd85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9fd88 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10d9fd8c push eax */
  push32((uint32_t)(EAX));
  /* 10d9fd8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fd90 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9fd91 call 0x10d95dd0 */
  push32(0x10d9fd96u); f_10d95dd0();
  /* 10d9fd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fd99 push eax */
  push32((uint32_t)(EAX));
  /* 10d9fd9a call 0x10d95c50 */
  push32(0x10d9fd9fu); f_10d95c50();
  /* 10d9fd9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fda2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fda5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fda7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d9fdaa jmp 0x10d9fd2d */
  goto L_10d9fd2d;
L_10d9fdac:;
  /* 10d9fdac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fdaf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d9fdb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9fdb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9fdb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d9fdbb:;
  /* 10d9fdbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9fdbe pop esi */
  ESI = (pop32());
  /* 10d9fdbf mov esp, ebp */
  ESP = (EBP);
  /* 10d9fdc1 pop ebp */
  EBP = (pop32());
  /* 10d9fdc2 ret  */
  ESPCHK(0x10d9fca0u, _esp0);
  ESP += 4; return;
}

